
//
// thirdparty/vulkan/inc/vulkan/vulkan_core.h
//
//	referenced by: librendersystemvulkan.so
//
//	structs: 438
//	unions: 10
//

// <004C05B2> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3307
// member variables: 2
// struct size: 8
struct VkExtent2D {
	uint32_t width; /* 0 4 */
	uint32_t height; /* 4 4 */
};

// <0054E44F> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3312
// member variables: 3
// struct size: 12
struct VkExtent3D {
	uint32_t width; /* 0 4 */
	uint32_t height; /* 4 4 */
	uint32_t depth; /* 8 4 */
};

// <004C05EE> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3318
// member variables: 2
// struct size: 8
struct VkOffset2D {
	int32_t x; /* 0 4 */
	int32_t y; /* 4 4 */
};

// <00807A6F> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3323
// member variables: 3
// struct size: 12
struct VkOffset3D {
	int32_t x; /* 0 4 */
	int32_t y; /* 4 4 */
	int32_t z; /* 8 4 */
};

// <004C0628> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3329
// member variables: 2
// struct size: 16
struct VkRect2D {
	VkOffset2D offset; /* 0 8 */
	VkExtent2D extent; /* 8 8 */
};

// <0054E49B> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3334
// member variables: 2
// struct size: 16
struct VkBaseInStructure {
	VkStructureType sType; /* 0 4 */
	const class VkBaseInStructure * pNext; /* 8 8 */
};

// <00D1FF17> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3339
// member variables: 2
// struct size: 16
struct VkBaseOutStructure {
	VkStructureType sType; /* 0 4 */
	VkBaseOutStructure * pNext; /* 8 8 */
};

// <003E39D0> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3374
// member variables: 6
// struct size: 48
struct VkAllocationCallbacks {
	void * pUserData; /* 0 8 */
	PFN_vkAllocationFunction pfnAllocation; /* 8 8 */
	PFN_vkReallocationFunction pfnReallocation; /* 16 8 */
	PFN_vkFreeFunction pfnFree; /* 24 8 */
	PFN_vkInternalAllocationNotification pfnInternalAllocation; /* 32 8 */
	PFN_vkInternalFreeNotification pfnInternalFree; /* 40 8 */
};

// <005EE4B7> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3383
// member variables: 7
// struct size: 48
struct VkApplicationInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	const char * pApplicationName; /* 16 8 */
	uint32_t applicationVersion; /* 24 4 */
	const char * pEngineName; /* 32 8 */
	uint32_t engineVersion; /* 40 4 */
	uint32_t apiVersion; /* 44 4 */
};

// <00451C87> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3393
// member variables: 3
// struct size: 12
struct VkFormatProperties {
	VkFormatFeatureFlags linearTilingFeatures; /* 0 4 */
	VkFormatFeatureFlags optimalTilingFeatures; /* 4 4 */
	VkFormatFeatureFlags bufferFeatures; /* 8 4 */
};

// <008DEFDB> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3399
// member variables: 5
// struct size: 32
struct VkImageFormatProperties {
	VkExtent3D maxExtent; /* 0 12 */
	uint32_t maxMipLevels; /* 12 4 */
	uint32_t maxArrayLayers; /* 16 4 */
	VkSampleCountFlags sampleCounts; /* 20 4 */
	VkDeviceSize maxResourceSize; /* 24 8 */
};

// <008AB95D> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3407
// member variables: 8
// struct size: 64
struct VkInstanceCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkInstanceCreateFlags flags; /* 16 4 */
	const VkApplicationInfo * pApplicationInfo; /* 24 8 */
	uint32_t enabledLayerCount; /* 32 4 */
	const char * const * ppEnabledLayerNames; /* 40 8 */
	uint32_t enabledExtensionCount; /* 48 4 */
	const char * const * ppEnabledExtensionNames; /* 56 8 */
};

// <0054E63A> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3418
// member variables: 2
// struct size: 16
struct VkMemoryHeap {
	VkDeviceSize size; /* 0 8 */
	VkMemoryHeapFlags flags; /* 8 4 */
};

// <0054E676> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3423
// member variables: 2
// struct size: 8
struct VkMemoryType {
	VkMemoryPropertyFlags propertyFlags; /* 0 4 */
	uint32_t heapIndex; /* 4 4 */
};

// <0054E6B2> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3428
// member variables: 55
// struct size: 220
struct VkPhysicalDeviceFeatures {
	VkBool32 robustBufferAccess; /* 0 4 */
	VkBool32 fullDrawIndexUint32; /* 4 4 */
	VkBool32 imageCubeArray; /* 8 4 */
	VkBool32 independentBlend; /* 12 4 */
	VkBool32 geometryShader; /* 16 4 */
	VkBool32 tessellationShader; /* 20 4 */
	VkBool32 sampleRateShading; /* 24 4 */
	VkBool32 dualSrcBlend; /* 28 4 */
	VkBool32 logicOp; /* 32 4 */
	VkBool32 multiDrawIndirect; /* 36 4 */
	VkBool32 drawIndirectFirstInstance; /* 40 4 */
	VkBool32 depthClamp; /* 44 4 */
	VkBool32 depthBiasClamp; /* 48 4 */
	VkBool32 fillModeNonSolid; /* 52 4 */
	VkBool32 depthBounds; /* 56 4 */
	VkBool32 wideLines; /* 60 4 */
	VkBool32 largePoints; /* 64 4 */
	VkBool32 alphaToOne; /* 68 4 */
	VkBool32 multiViewport; /* 72 4 */
	VkBool32 samplerAnisotropy; /* 76 4 */
	VkBool32 textureCompressionETC2; /* 80 4 */
	VkBool32 textureCompressionASTC_LDR; /* 84 4 */
	VkBool32 textureCompressionBC; /* 88 4 */
	VkBool32 occlusionQueryPrecise; /* 92 4 */
	VkBool32 pipelineStatisticsQuery; /* 96 4 */
	VkBool32 vertexPipelineStoresAndAtomics; /* 100 4 */
	VkBool32 fragmentStoresAndAtomics; /* 104 4 */
	VkBool32 shaderTessellationAndGeometryPointSize; /* 108 4 */
	VkBool32 shaderImageGatherExtended; /* 112 4 */
	VkBool32 shaderStorageImageExtendedFormats; /* 116 4 */
	VkBool32 shaderStorageImageMultisample; /* 120 4 */
	VkBool32 shaderStorageImageReadWithoutFormat; /* 124 4 */
	VkBool32 shaderStorageImageWriteWithoutFormat; /* 128 4 */
	VkBool32 shaderUniformBufferArrayDynamicIndexing; /* 132 4 */
	VkBool32 shaderSampledImageArrayDynamicIndexing; /* 136 4 */
	VkBool32 shaderStorageBufferArrayDynamicIndexing; /* 140 4 */
	VkBool32 shaderStorageImageArrayDynamicIndexing; /* 144 4 */
	VkBool32 shaderClipDistance; /* 148 4 */
	VkBool32 shaderCullDistance; /* 152 4 */
	VkBool32 shaderFloat64; /* 156 4 */
	VkBool32 shaderInt64; /* 160 4 */
	VkBool32 shaderInt16; /* 164 4 */
	VkBool32 shaderResourceResidency; /* 168 4 */
	VkBool32 shaderResourceMinLod; /* 172 4 */
	VkBool32 sparseBinding; /* 176 4 */
	VkBool32 sparseResidencyBuffer; /* 180 4 */
	VkBool32 sparseResidencyImage2D; /* 184 4 */
	VkBool32 sparseResidencyImage3D; /* 188 4 */
	VkBool32 sparseResidency2Samples; /* 192 4 */
	VkBool32 sparseResidency4Samples; /* 196 4 */
	VkBool32 sparseResidency8Samples; /* 200 4 */
	VkBool32 sparseResidency16Samples; /* 204 4 */
	VkBool32 sparseResidencyAliased; /* 208 4 */
	VkBool32 variableMultisampleRate; /* 212 4 */
	VkBool32 inheritedQueries; /* 216 4 */
};

// <0050B832> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3486
// member variables: 106
// struct size: 504
struct VkPhysicalDeviceLimits {
	uint32_t maxImageDimension1D; /* 0 4 */
	uint32_t maxImageDimension2D; /* 4 4 */
	uint32_t maxImageDimension3D; /* 8 4 */
	uint32_t maxImageDimensionCube; /* 12 4 */
	uint32_t maxImageArrayLayers; /* 16 4 */
	uint32_t maxTexelBufferElements; /* 20 4 */
	uint32_t maxUniformBufferRange; /* 24 4 */
	uint32_t maxStorageBufferRange; /* 28 4 */
	uint32_t maxPushConstantsSize; /* 32 4 */
	uint32_t maxMemoryAllocationCount; /* 36 4 */
	uint32_t maxSamplerAllocationCount; /* 40 4 */
	VkDeviceSize bufferImageGranularity; /* 48 8 */
	VkDeviceSize sparseAddressSpaceSize; /* 56 8 */
	uint32_t maxBoundDescriptorSets; /* 64 4 */
	uint32_t maxPerStageDescriptorSamplers; /* 68 4 */
	uint32_t maxPerStageDescriptorUniformBuffers; /* 72 4 */
	uint32_t maxPerStageDescriptorStorageBuffers; /* 76 4 */
	uint32_t maxPerStageDescriptorSampledImages; /* 80 4 */
	uint32_t maxPerStageDescriptorStorageImages; /* 84 4 */
	uint32_t maxPerStageDescriptorInputAttachments; /* 88 4 */
	uint32_t maxPerStageResources; /* 92 4 */
	uint32_t maxDescriptorSetSamplers; /* 96 4 */
	uint32_t maxDescriptorSetUniformBuffers; /* 100 4 */
	uint32_t maxDescriptorSetUniformBuffersDynamic; /* 104 4 */
	uint32_t maxDescriptorSetStorageBuffers; /* 108 4 */
	uint32_t maxDescriptorSetStorageBuffersDynamic; /* 112 4 */
	uint32_t maxDescriptorSetSampledImages; /* 116 4 */
	uint32_t maxDescriptorSetStorageImages; /* 120 4 */
	uint32_t maxDescriptorSetInputAttachments; /* 124 4 */
	uint32_t maxVertexInputAttributes; /* 128 4 */
	uint32_t maxVertexInputBindings; /* 132 4 */
	uint32_t maxVertexInputAttributeOffset; /* 136 4 */
	uint32_t maxVertexInputBindingStride; /* 140 4 */
	uint32_t maxVertexOutputComponents; /* 144 4 */
	uint32_t maxTessellationGenerationLevel; /* 148 4 */
	uint32_t maxTessellationPatchSize; /* 152 4 */
	uint32_t maxTessellationControlPerVertexInputComponents; /* 156 4 */
	uint32_t maxTessellationControlPerVertexOutputComponents; /* 160 4 */
	uint32_t maxTessellationControlPerPatchOutputComponents; /* 164 4 */
	uint32_t maxTessellationControlTotalOutputComponents; /* 168 4 */
	uint32_t maxTessellationEvaluationInputComponents; /* 172 4 */
	uint32_t maxTessellationEvaluationOutputComponents; /* 176 4 */
	uint32_t maxGeometryShaderInvocations; /* 180 4 */
	uint32_t maxGeometryInputComponents; /* 184 4 */
	uint32_t maxGeometryOutputComponents; /* 188 4 */
	uint32_t maxGeometryOutputVertices; /* 192 4 */
	uint32_t maxGeometryTotalOutputComponents; /* 196 4 */
	uint32_t maxFragmentInputComponents; /* 200 4 */
	uint32_t maxFragmentOutputAttachments; /* 204 4 */
	uint32_t maxFragmentDualSrcAttachments; /* 208 4 */
	uint32_t maxFragmentCombinedOutputResources; /* 212 4 */
	uint32_t maxComputeSharedMemorySize; /* 216 4 */
	uint32_t maxComputeWorkGroupCount[3]; /* 220 12 */
	uint32_t maxComputeWorkGroupInvocations; /* 232 4 */
	uint32_t maxComputeWorkGroupSize[3]; /* 236 12 */
	uint32_t subPixelPrecisionBits; /* 248 4 */
	uint32_t subTexelPrecisionBits; /* 252 4 */
	uint32_t mipmapPrecisionBits; /* 256 4 */
	uint32_t maxDrawIndexedIndexValue; /* 260 4 */
	uint32_t maxDrawIndirectCount; /* 264 4 */
	float maxSamplerLodBias; /* 268 4 */
	float maxSamplerAnisotropy; /* 272 4 */
	uint32_t maxViewports; /* 276 4 */
	uint32_t maxViewportDimensions[2]; /* 280 8 */
	float viewportBoundsRange[2]; /* 288 8 */
	uint32_t viewportSubPixelBits; /* 296 4 */
	size_t minMemoryMapAlignment; /* 304 8 */
	VkDeviceSize minTexelBufferOffsetAlignment; /* 312 8 */
	VkDeviceSize minUniformBufferOffsetAlignment; /* 320 8 */
	VkDeviceSize minStorageBufferOffsetAlignment; /* 328 8 */
	int32_t minTexelOffset; /* 336 4 */
	uint32_t maxTexelOffset; /* 340 4 */
	int32_t minTexelGatherOffset; /* 344 4 */
	uint32_t maxTexelGatherOffset; /* 348 4 */
	float minInterpolationOffset; /* 352 4 */
	float maxInterpolationOffset; /* 356 4 */
	uint32_t subPixelInterpolationOffsetBits; /* 360 4 */
	uint32_t maxFramebufferWidth; /* 364 4 */
	uint32_t maxFramebufferHeight; /* 368 4 */
	uint32_t maxFramebufferLayers; /* 372 4 */
	VkSampleCountFlags framebufferColorSampleCounts; /* 376 4 */
	VkSampleCountFlags framebufferDepthSampleCounts; /* 380 4 */
	VkSampleCountFlags framebufferStencilSampleCounts; /* 384 4 */
	VkSampleCountFlags framebufferNoAttachmentsSampleCounts; /* 388 4 */
	uint32_t maxColorAttachments; /* 392 4 */
	VkSampleCountFlags sampledImageColorSampleCounts; /* 396 4 */
	VkSampleCountFlags sampledImageIntegerSampleCounts; /* 400 4 */
	VkSampleCountFlags sampledImageDepthSampleCounts; /* 404 4 */
	VkSampleCountFlags sampledImageStencilSampleCounts; /* 408 4 */
	VkSampleCountFlags storageImageSampleCounts; /* 412 4 */
	uint32_t maxSampleMaskWords; /* 416 4 */
	VkBool32 timestampComputeAndGraphics; /* 420 4 */
	float timestampPeriod; /* 424 4 */
	uint32_t maxClipDistances; /* 428 4 */
	uint32_t maxCullDistances; /* 432 4 */
	uint32_t maxCombinedClipAndCullDistances; /* 436 4 */
	uint32_t discreteQueuePriorities; /* 440 4 */
	float pointSizeRange[2]; /* 444 8 */
	float lineWidthRange[2]; /* 452 8 */
	float pointSizeGranularity; /* 460 4 */
	float lineWidthGranularity; /* 464 4 */
	VkBool32 strictLines; /* 468 4 */
	VkBool32 standardSampleLocations; /* 472 4 */
	VkDeviceSize optimalBufferCopyOffsetAlignment; /* 480 8 */
	VkDeviceSize optimalBufferCopyRowPitchAlignment; /* 488 8 */
	VkDeviceSize nonCoherentAtomSize; /* 496 8 */
};

// <0054F190> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3595
// member variables: 4
// struct size: 520
struct VkPhysicalDeviceMemoryProperties {
	uint32_t memoryTypeCount; /* 0 4 */
	VkMemoryType memoryTypes[32]; /* 4 256 */
	uint32_t memoryHeapCount; /* 260 4 */
	VkMemoryHeap memoryHeaps[16]; /* 264 256 */
};

// <0054F210> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3602
// member variables: 5
// struct size: 20
struct VkPhysicalDeviceSparseProperties {
	VkBool32 residencyStandard2DBlockShape; /* 0 4 */
	VkBool32 residencyStandard2DMultisampleBlockShape; /* 4 4 */
	VkBool32 residencyStandard3DBlockShape; /* 8 4 */
	VkBool32 residencyAlignedMipSize; /* 12 4 */
	VkBool32 residencyNonResidentStrict; /* 16 4 */
};

// <0054F27C> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3610
// member variables: 9
// struct size: 824
struct VkPhysicalDeviceProperties {
	uint32_t apiVersion; /* 0 4 */
	uint32_t driverVersion; /* 4 4 */
	uint32_t vendorID; /* 8 4 */
	uint32_t deviceID; /* 12 4 */
	VkPhysicalDeviceType deviceType; /* 16 4 */
	char deviceName[256]; /* 20 256 */
	uint8_t pipelineCacheUUID[16]; /* 276 16 */
	VkPhysicalDeviceLimits limits; /* 296 504 */
	VkPhysicalDeviceSparseProperties sparseProperties; /* 800 20 */
};

// <005AA082> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3622
// member variables: 4
// struct size: 24
struct VkQueueFamilyProperties {
	VkQueueFlags queueFlags; /* 0 4 */
	uint32_t queueCount; /* 4 4 */
	uint32_t timestampValidBits; /* 8 4 */
	VkExtent3D minImageTransferGranularity; /* 12 12 */
};

// <008DFDCB> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3629
// member variables: 6
// struct size: 40
struct VkDeviceQueueCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkDeviceQueueCreateFlags flags; /* 16 4 */
	uint32_t queueFamilyIndex; /* 20 4 */
	uint32_t queueCount; /* 24 4 */
	const float * pQueuePriorities; /* 32 8 */
};

// <008DFE52> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3638
// member variables: 10
// struct size: 72
struct VkDeviceCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkDeviceCreateFlags flags; /* 16 4 */
	uint32_t queueCreateInfoCount; /* 20 4 */
	const VkDeviceQueueCreateInfo * pQueueCreateInfos; /* 24 8 */
	uint32_t enabledLayerCount; /* 32 4 */
	const char * const * ppEnabledLayerNames; /* 40 8 */
	uint32_t enabledExtensionCount; /* 48 4 */
	const char * const * ppEnabledExtensionNames; /* 56 8 */
	const VkPhysicalDeviceFeatures * pEnabledFeatures; /* 64 8 */
};

// <008AC709> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3653
// member variables: 2
// struct size: 260
struct VkExtensionProperties {
	char extensionName[256]; /* 0 256 */
	uint32_t specVersion; /* 256 4 */
};

// <008AC74C> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3658
// member variables: 4
// struct size: 520
struct VkLayerProperties {
	char layerName[256]; /* 0 256 */
	uint32_t specVersion; /* 256 4 */
	uint32_t implementationVersion; /* 260 4 */
	char description[256]; /* 264 256 */
};

// <00B20B88> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3665
// member variables: 9
// struct size: 72
struct VkSubmitInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	uint32_t waitSemaphoreCount; /* 16 4 */
	const VkSemaphore * pWaitSemaphores; /* 24 8 */
	const VkPipelineStageFlags * pWaitDstStageMask; /* 32 8 */
	uint32_t commandBufferCount; /* 40 4 */
	const VkCommandBuffer * pCommandBuffers; /* 48 8 */
	uint32_t signalSemaphoreCount; /* 56 4 */
	const VkSemaphore * pSignalSemaphores; /* 64 8 */
};

// <0054F353> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3677
// member variables: 5
// struct size: 40
struct VkMappedMemoryRange {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkDeviceMemory memory; /* 16 8 */
	VkDeviceSize offset; /* 24 8 */
	VkDeviceSize size; /* 32 8 */
};

// <0054F3C4> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3685
// member variables: 4
// struct size: 32
struct VkMemoryAllocateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkDeviceSize allocationSize; /* 16 8 */
	uint32_t memoryTypeIndex; /* 24 4 */
};

// <0054F425> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3692
// member variables: 3
// struct size: 24
struct VkMemoryRequirements {
	VkDeviceSize size; /* 0 8 */
	VkDeviceSize alignment; /* 8 8 */
	uint32_t memoryTypeBits; /* 16 4 */
};

// <00D213EA> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3698
// member variables: 3
// struct size: 12
struct VkImageSubresource {
	VkImageAspectFlags aspectMask; /* 0 4 */
	uint32_t mipLevel; /* 4 4 */
	uint32_t arrayLayer; /* 8 4 */
};

// <00D2143B> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3704
// member variables: 3
// struct size: 20
struct VkSparseImageFormatProperties {
	VkImageAspectFlags aspectMask; /* 0 4 */
	VkExtent3D imageGranularity; /* 4 12 */
	VkSparseImageFormatFlags flags; /* 16 4 */
};

// <00D21487> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3710
// member variables: 6
// struct size: 64
struct VkSparseImageMemoryBind {
	VkImageSubresource subresource; /* 0 12 */
	VkOffset3D offset; /* 12 12 */
	VkExtent3D extent; /* 24 12 */
	VkDeviceMemory memory; /* 40 8 */
	VkDeviceSize memoryOffset; /* 48 8 */
	VkSparseMemoryBindFlags flags; /* 56 4 */
};

// <00D21508> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3719
// member variables: 3
// struct size: 24
struct VkSparseImageMemoryBindInfo {
	VkImage image; /* 0 8 */
	uint32_t bindCount; /* 8 4 */
	const VkSparseImageMemoryBind * pBinds; /* 16 8 */
};

// <00D2155F> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3725
// member variables: 5
// struct size: 48
struct VkSparseImageMemoryRequirements {
	VkSparseImageFormatProperties formatProperties; /* 0 20 */
	uint32_t imageMipTailFirstLod; /* 20 4 */
	VkDeviceSize imageMipTailSize; /* 24 8 */
	VkDeviceSize imageMipTailOffset; /* 32 8 */
	VkDeviceSize imageMipTailStride; /* 40 8 */
};

// <00D215CB> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3733
// member variables: 5
// struct size: 40
struct VkSparseMemoryBind {
	VkDeviceSize resourceOffset; /* 0 8 */
	VkDeviceSize size; /* 8 8 */
	VkDeviceMemory memory; /* 16 8 */
	VkDeviceSize memoryOffset; /* 24 8 */
	VkSparseMemoryBindFlags flags; /* 32 4 */
};

// <00D2163C> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3741
// member variables: 3
// struct size: 24
struct VkSparseBufferMemoryBindInfo {
	VkBuffer buffer; /* 0 8 */
	uint32_t bindCount; /* 8 4 */
	const VkSparseMemoryBind * pBinds; /* 16 8 */
};

// <00D21693> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3747
// member variables: 3
// struct size: 24
struct VkSparseImageOpaqueMemoryBindInfo {
	VkImage image; /* 0 8 */
	uint32_t bindCount; /* 8 4 */
	const VkSparseMemoryBind * pBinds; /* 16 8 */
};

// <00D216E4> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3753
// member variables: 12
// struct size: 96
struct VkBindSparseInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	uint32_t waitSemaphoreCount; /* 16 4 */
	const VkSemaphore * pWaitSemaphores; /* 24 8 */
	uint32_t bufferBindCount; /* 32 4 */
	const VkSparseBufferMemoryBindInfo * pBufferBinds; /* 40 8 */
	uint32_t imageOpaqueBindCount; /* 48 4 */
	const VkSparseImageOpaqueMemoryBindInfo * pImageOpaqueBinds; /* 56 8 */
	uint32_t imageBindCount; /* 64 4 */
	const VkSparseImageMemoryBindInfo * pImageBinds; /* 72 8 */
	uint32_t signalSemaphoreCount; /* 80 4 */
	const VkSemaphore * pSignalSemaphores; /* 88 8 */
};

// <00B20C4B> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3768
// member variables: 3
// struct size: 24
struct VkFenceCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkFenceCreateFlags flags; /* 16 4 */
};

// <008DFF64> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3774
// member variables: 3
// struct size: 24
struct VkSemaphoreCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkSemaphoreCreateFlags flags; /* 16 4 */
};

// <0075BBC6> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3780
// member variables: 6
// struct size: 32
struct VkQueryPoolCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkQueryPoolCreateFlags flags; /* 16 4 */
	VkQueryType queryType; /* 20 4 */
	uint32_t queryCount; /* 24 4 */
	VkQueryPipelineStatisticFlags pipelineStatistics; /* 28 4 */
};

// <00463B9F> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3789
// member variables: 8
// struct size: 56
struct VkBufferCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkBufferCreateFlags flags; /* 16 4 */
	VkDeviceSize size; /* 24 8 */
	VkBufferUsageFlags usage; /* 32 4 */
	VkSharingMode sharingMode; /* 36 4 */
	uint32_t queueFamilyIndexCount; /* 40 4 */
	const uint32_t * pQueueFamilyIndices; /* 48 8 */
};

// <0054F518> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3800
// member variables: 15
// struct size: 88
struct VkImageCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkImageCreateFlags flags; /* 16 4 */
	VkImageType imageType; /* 20 4 */
	VkFormat format; /* 24 4 */
	VkExtent3D extent; /* 28 12 */
	uint32_t mipLevels; /* 40 4 */
	uint32_t arrayLayers; /* 44 4 */
	VkSampleCountFlagBits samples; /* 48 4 */
	VkImageTiling tiling; /* 52 4 */
	VkImageUsageFlags usage; /* 56 4 */
	VkSharingMode sharingMode; /* 60 4 */
	uint32_t queueFamilyIndexCount; /* 64 4 */
	const uint32_t * pQueueFamilyIndices; /* 72 8 */
	VkImageLayout initialLayout; /* 80 4 */
};

// <00D21AB7> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3818
// member variables: 5
// struct size: 40
struct VkSubresourceLayout {
	VkDeviceSize offset; /* 0 8 */
	VkDeviceSize size; /* 8 8 */
	VkDeviceSize rowPitch; /* 16 8 */
	VkDeviceSize arrayPitch; /* 24 8 */
	VkDeviceSize depthPitch; /* 32 8 */
};

// <00451CD9> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3826
// member variables: 4
// struct size: 16
struct VkComponentMapping {
	VkComponentSwizzle r; /* 0 4 */
	VkComponentSwizzle g; /* 4 4 */
	VkComponentSwizzle b; /* 8 4 */
	VkComponentSwizzle a; /* 12 4 */
};

// <004E55CE> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3833
// member variables: 5
// struct size: 20
struct VkImageSubresourceRange {
	VkImageAspectFlags aspectMask; /* 0 4 */
	uint32_t baseMipLevel; /* 4 4 */
	uint32_t levelCount; /* 8 4 */
	uint32_t baseArrayLayer; /* 12 4 */
	uint32_t layerCount; /* 16 4 */
};

// <00C0DBAA> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3841
// member variables: 8
// struct size: 80
struct VkImageViewCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkImageViewCreateFlags flags; /* 16 4 */
	VkImage image; /* 24 8 */
	VkImageViewType viewType; /* 32 4 */
	VkFormat format; /* 36 4 */
	VkComponentMapping components; /* 40 16 */
	VkImageSubresourceRange subresourceRange; /* 56 20 */
};

// <008E014D> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3852
// member variables: 4
// struct size: 24
struct VkCommandPoolCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkCommandPoolCreateFlags flags; /* 16 4 */
	uint32_t queueFamilyIndex; /* 20 4 */
};

// <008E01AE> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3859
// member variables: 5
// struct size: 32
struct VkCommandBufferAllocateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkCommandPool commandPool; /* 16 8 */
	VkCommandBufferLevel level; /* 24 4 */
	uint32_t commandBufferCount; /* 28 4 */
};

// <004E563A> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3867
// member variables: 8
// struct size: 56
struct VkCommandBufferInheritanceInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkRenderPass renderPass; /* 16 8 */
	uint32_t subpass; /* 24 4 */
	VkFramebuffer framebuffer; /* 32 8 */
	VkBool32 occlusionQueryEnable; /* 40 4 */
	VkQueryControlFlags queryFlags; /* 44 4 */
	VkQueryPipelineStatisticFlags pipelineStatistics; /* 48 4 */
};

// <004E56DB> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3878
// member variables: 4
// struct size: 32
struct VkCommandBufferBeginInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkCommandBufferUsageFlags flags; /* 16 4 */
	const VkCommandBufferInheritanceInfo * pInheritanceInfo; /* 24 8 */
};

// <00463C46> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3885
// member variables: 3
// struct size: 24
struct VkBufferCopy {
	VkDeviceSize srcOffset; /* 0 8 */
	VkDeviceSize dstOffset; /* 8 8 */
	VkDeviceSize size; /* 16 8 */
};

// <00808B1E> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3891
// member variables: 4
// struct size: 16
struct VkImageSubresourceLayers {
	VkImageAspectFlags aspectMask; /* 0 4 */
	uint32_t mipLevel; /* 4 4 */
	uint32_t baseArrayLayer; /* 8 4 */
	uint32_t layerCount; /* 12 4 */
};

// <00808B7A> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3898
// member variables: 6
// struct size: 56
struct VkBufferImageCopy {
	VkDeviceSize bufferOffset; /* 0 8 */
	uint32_t bufferRowLength; /* 8 4 */
	uint32_t bufferImageHeight; /* 12 4 */
	VkImageSubresourceLayers imageSubresource; /* 16 16 */
	VkOffset3D imageOffset; /* 32 12 */
	VkExtent3D imageExtent; /* 44 12 */
};

// <00808BFB> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3907
// member variables: 5
// struct size: 68
struct VkImageCopy {
	VkImageSubresourceLayers srcSubresource; /* 0 16 */
	VkOffset3D srcOffset; /* 16 12 */
	VkImageSubresourceLayers dstSubresource; /* 28 16 */
	VkOffset3D dstOffset; /* 44 12 */
	VkExtent3D extent; /* 56 12 */
};

// <004E5742> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3915
// member variables: 9
// struct size: 56
struct VkBufferMemoryBarrier {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkAccessFlags srcAccessMask; /* 16 4 */
	VkAccessFlags dstAccessMask; /* 20 4 */
	uint32_t srcQueueFamilyIndex; /* 24 4 */
	uint32_t dstQueueFamilyIndex; /* 28 4 */
	VkBuffer buffer; /* 32 8 */
	VkDeviceSize offset; /* 40 8 */
	VkDeviceSize size; /* 48 8 */
};

// <004E57F3> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3927
// member variables: 10
// struct size: 72
struct VkImageMemoryBarrier {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkAccessFlags srcAccessMask; /* 16 4 */
	VkAccessFlags dstAccessMask; /* 20 4 */
	VkImageLayout oldLayout; /* 24 4 */
	VkImageLayout newLayout; /* 28 4 */
	uint32_t srcQueueFamilyIndex; /* 32 4 */
	uint32_t dstQueueFamilyIndex; /* 36 4 */
	VkImage image; /* 40 8 */
	VkImageSubresourceRange subresourceRange; /* 48 20 */
};

// <004E58B9> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3940
// member variables: 4
// struct size: 24
struct VkMemoryBarrier {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkAccessFlags srcAccessMask; /* 16 4 */
	VkAccessFlags dstAccessMask; /* 20 4 */
};

// <00D221DA> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3961
// member variables: 3
// struct size: 24
struct VkEventCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkEventCreateFlags flags; /* 16 4 */
};

// <00C61450> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3967
// member variables: 7
// struct size: 56
struct VkBufferViewCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkBufferViewCreateFlags flags; /* 16 4 */
	VkBuffer buffer; /* 24 8 */
	VkFormat format; /* 32 4 */
	VkDeviceSize offset; /* 40 8 */
	VkDeviceSize range; /* 48 8 */
};

// <005EF03D> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3977
// member variables: 5
// struct size: 40
struct VkShaderModuleCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkShaderModuleCreateFlags flags; /* 16 4 */
	size_t codeSize; /* 24 8 */
	const uint32_t * pCode; /* 32 8 */
};

// <00690234> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3985
// member variables: 5
// struct size: 40
struct VkPipelineCacheCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkPipelineCacheCreateFlags flags; /* 16 4 */
	size_t initialDataSize; /* 24 8 */
	const void * pInitialData; /* 32 8 */
};

// <005EF0AE> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3993
// member variables: 3
// struct size: 16
struct VkSpecializationMapEntry {
	uint32_t constantID; /* 0 4 */
	uint32_t offset; /* 4 4 */
	size_t size; /* 8 8 */
};

// <005EF0FF> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:3999
// member variables: 4
// struct size: 32
struct VkSpecializationInfo {
	uint32_t mapEntryCount; /* 0 4 */
	const VkSpecializationMapEntry * pMapEntries; /* 8 8 */
	size_t dataSize; /* 16 8 */
	const void * pData; /* 24 8 */
};

// <005EF166> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4006
// member variables: 7
// struct size: 48
struct VkPipelineShaderStageCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkPipelineShaderStageCreateFlags flags; /* 16 4 */
	VkShaderStageFlagBits stage; /* 20 4 */
	VkShaderModule module; /* 24 8 */
	const char * pName; /* 32 8 */
	const VkSpecializationInfo * pSpecializationInfo; /* 40 8 */
};

// <005EF1FD> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4016
// member variables: 7
// struct size: 96
struct VkComputePipelineCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkPipelineCreateFlags flags; /* 16 4 */
	VkPipelineShaderStageCreateInfo stage; /* 24 48 */
	VkPipelineLayout layout; /* 72 8 */
	VkPipeline basePipelineHandle; /* 80 8 */
	int32_t basePipelineIndex; /* 88 4 */
};

// <0047D2C6> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4026
// member variables: 3
// struct size: 12
struct VkPushConstantRange {
	VkShaderStageFlags stageFlags; /* 0 4 */
	uint32_t offset; /* 4 4 */
	uint32_t size; /* 8 4 */
};

// <005EF2E4> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4032
// member variables: 7
// struct size: 48
struct VkPipelineLayoutCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkPipelineLayoutCreateFlags flags; /* 16 4 */
	uint32_t setLayoutCount; /* 20 4 */
	const VkDescriptorSetLayout * pSetLayouts; /* 24 8 */
	uint32_t pushConstantRangeCount; /* 32 4 */
	const VkPushConstantRange * pPushConstantRanges; /* 40 8 */
};

// <005EF381> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4042
// member variables: 18
// struct size: 80
struct VkSamplerCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkSamplerCreateFlags flags; /* 16 4 */
	VkFilter magFilter; /* 20 4 */
	VkFilter minFilter; /* 24 4 */
	VkSamplerMipmapMode mipmapMode; /* 28 4 */
	VkSamplerAddressMode addressModeU; /* 32 4 */
	VkSamplerAddressMode addressModeV; /* 36 4 */
	VkSamplerAddressMode addressModeW; /* 40 4 */
	float mipLodBias; /* 44 4 */
	VkBool32 anisotropyEnable; /* 48 4 */
	float maxAnisotropy; /* 52 4 */
	VkBool32 compareEnable; /* 56 4 */
	VkCompareOp compareOp; /* 60 4 */
	float minLod; /* 64 4 */
	float maxLod; /* 68 4 */
	VkBorderColor borderColor; /* 72 4 */
	VkBool32 unnormalizedCoordinates; /* 76 4 */
};

// <0047D310> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4063
// member variables: 9
// struct size: 56
struct VkCopyDescriptorSet {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkDescriptorSet srcSet; /* 16 8 */
	uint32_t srcBinding; /* 24 4 */
	uint32_t srcArrayElement; /* 28 4 */
	VkDescriptorSet dstSet; /* 32 8 */
	uint32_t dstBinding; /* 40 4 */
	uint32_t dstArrayElement; /* 44 4 */
	uint32_t descriptorCount; /* 48 4 */
};

// <0047D3C1> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4075
// member variables: 3
// struct size: 24
struct VkDescriptorBufferInfo {
	VkBuffer buffer; /* 0 8 */
	VkDeviceSize offset; /* 8 8 */
	VkDeviceSize range; /* 16 8 */
};

// <0047D417> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4081
// member variables: 3
// struct size: 24
struct VkDescriptorImageInfo {
	VkSampler sampler; /* 0 8 */
	VkImageView imageView; /* 8 8 */
	VkImageLayout imageLayout; /* 16 4 */
};

// <008E05B1> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4087
// member variables: 2
// struct size: 8
struct VkDescriptorPoolSize {
	VkDescriptorType type; /* 0 4 */
	uint32_t descriptorCount; /* 4 4 */
};

// <008E05F7> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4092
// member variables: 6
// struct size: 40
struct VkDescriptorPoolCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkDescriptorPoolCreateFlags flags; /* 16 4 */
	uint32_t maxSets; /* 20 4 */
	uint32_t poolSizeCount; /* 24 4 */
	const VkDescriptorPoolSize * pPoolSizes; /* 32 8 */
};

// <0047D46D> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4101
// member variables: 5
// struct size: 40
struct VkDescriptorSetAllocateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkDescriptorPool descriptorPool; /* 16 8 */
	uint32_t descriptorSetCount; /* 24 4 */
	const VkDescriptorSetLayout * pSetLayouts; /* 32 8 */
};

// <0047D4DE> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4109
// member variables: 5
// struct size: 24
struct VkDescriptorSetLayoutBinding {
	uint32_t binding; /* 0 4 */
	VkDescriptorType descriptorType; /* 4 4 */
	uint32_t descriptorCount; /* 8 4 */
	VkShaderStageFlags stageFlags; /* 12 4 */
	const VkSampler * pImmutableSamplers; /* 16 8 */
};

// <005EF53E> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4117
// member variables: 5
// struct size: 32
struct VkDescriptorSetLayoutCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkDescriptorSetLayoutCreateFlags flags; /* 16 4 */
	uint32_t bindingCount; /* 20 4 */
	const VkDescriptorSetLayoutBinding * pBindings; /* 24 8 */
};

// <0047D555> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4125
// member variables: 10
// struct size: 64
struct VkWriteDescriptorSet {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkDescriptorSet dstSet; /* 16 8 */
	uint32_t dstBinding; /* 24 4 */
	uint32_t dstArrayElement; /* 28 4 */
	uint32_t descriptorCount; /* 32 4 */
	VkDescriptorType descriptorType; /* 36 4 */
	const VkDescriptorImageInfo * pImageInfo; /* 40 8 */
	const VkDescriptorBufferInfo * pBufferInfo; /* 48 8 */
	const VkBufferView * pTexelBufferView; /* 56 8 */
};

// <004C07CB> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4138
union VkClearColorValue {
	float float32[4]; /* 0 16 */
	int32_t int32[4]; /* 0 16 */
	uint32_t uint32[4]; /* 0 16 */
};

// <005EF62C> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4159
// member variables: 7
// struct size: 28
struct VkStencilOpState {
	VkStencilOp failOp; /* 0 4 */
	VkStencilOp passOp; /* 4 4 */
	VkStencilOp depthFailOp; /* 8 4 */
	VkCompareOp compareOp; /* 12 4 */
	uint32_t compareMask; /* 16 4 */
	uint32_t writeMask; /* 20 4 */
	uint32_t reference; /* 24 4 */
};

// <00523825> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4169
// member variables: 4
// struct size: 16
struct VkVertexInputAttributeDescription {
	uint32_t location; /* 0 4 */
	uint32_t binding; /* 4 4 */
	VkFormat format; /* 8 4 */
	uint32_t offset; /* 12 4 */
};

// <0052388B> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4176
// member variables: 3
// struct size: 12
struct VkVertexInputBindingDescription {
	uint32_t binding; /* 0 4 */
	uint32_t stride; /* 4 4 */
	VkVertexInputRate inputRate; /* 8 4 */
};

// <005EF76A> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4182
// member variables: 6
// struct size: 24
struct VkViewport {
	float x; /* 0 4 */
	float y; /* 4 4 */
	float width; /* 8 4 */
	float height; /* 12 4 */
	float minDepth; /* 16 4 */
	float maxDepth; /* 20 4 */
};

// <005EF7E9> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4191
// member variables: 8
// struct size: 32
struct VkPipelineColorBlendAttachmentState {
	VkBool32 blendEnable; /* 0 4 */
	VkBlendFactor srcColorBlendFactor; /* 4 4 */
	VkBlendFactor dstColorBlendFactor; /* 8 4 */
	VkBlendOp colorBlendOp; /* 12 4 */
	VkBlendFactor srcAlphaBlendFactor; /* 16 4 */
	VkBlendFactor dstAlphaBlendFactor; /* 20 4 */
	VkBlendOp alphaBlendOp; /* 24 4 */
	VkColorComponentFlags colorWriteMask; /* 28 4 */
};

// <005EF88A> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4202
// member variables: 8
// struct size: 56
struct VkPipelineColorBlendStateCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkPipelineColorBlendStateCreateFlags flags; /* 16 4 */
	VkBool32 logicOpEnable; /* 20 4 */
	VkLogicOp logicOp; /* 24 4 */
	uint32_t attachmentCount; /* 28 4 */
	const VkPipelineColorBlendAttachmentState * pAttachments; /* 32 8 */
	float blendConstants[4]; /* 40 16 */
};

// <005EF931> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4213
// member variables: 12
// struct size: 104
struct VkPipelineDepthStencilStateCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkPipelineDepthStencilStateCreateFlags flags; /* 16 4 */
	VkBool32 depthTestEnable; /* 20 4 */
	VkBool32 depthWriteEnable; /* 24 4 */
	VkCompareOp depthCompareOp; /* 28 4 */
	VkBool32 depthBoundsTestEnable; /* 32 4 */
	VkBool32 stencilTestEnable; /* 36 4 */
	VkStencilOpState front; /* 40 28 */
	VkStencilOpState back; /* 68 28 */
	float minDepthBounds; /* 96 4 */
	float maxDepthBounds; /* 100 4 */
};

// <005EFA12> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4228
// member variables: 5
// struct size: 32
struct VkPipelineDynamicStateCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkPipelineDynamicStateCreateFlags flags; /* 16 4 */
	uint32_t dynamicStateCount; /* 20 4 */
	const VkDynamicState * pDynamicStates; /* 24 8 */
};

// <005EFA89> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4236
// member variables: 5
// struct size: 32
struct VkPipelineInputAssemblyStateCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkPipelineInputAssemblyStateCreateFlags flags; /* 16 4 */
	VkPrimitiveTopology topology; /* 20 4 */
	VkBool32 primitiveRestartEnable; /* 24 4 */
};

// <005EFAFA> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4244
// member variables: 9
// struct size: 48
struct VkPipelineMultisampleStateCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkPipelineMultisampleStateCreateFlags flags; /* 16 4 */
	VkSampleCountFlagBits rasterizationSamples; /* 20 4 */
	VkBool32 sampleShadingEnable; /* 24 4 */
	float minSampleShading; /* 28 4 */
	const VkSampleMask * pSampleMask; /* 32 8 */
	VkBool32 alphaToCoverageEnable; /* 40 4 */
	VkBool32 alphaToOneEnable; /* 44 4 */
};

// <005EFBB1> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4256
// member variables: 13
// struct size: 64
struct VkPipelineRasterizationStateCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkPipelineRasterizationStateCreateFlags flags; /* 16 4 */
	VkBool32 depthClampEnable; /* 20 4 */
	VkBool32 rasterizerDiscardEnable; /* 24 4 */
	VkPolygonMode polygonMode; /* 28 4 */
	VkCullModeFlags cullMode; /* 32 4 */
	VkFrontFace frontFace; /* 36 4 */
	VkBool32 depthBiasEnable; /* 40 4 */
	float depthBiasConstantFactor; /* 44 4 */
	float depthBiasClamp; /* 48 4 */
	float depthBiasSlopeFactor; /* 52 4 */
	float lineWidth; /* 56 4 */
};

// <005EFCA2> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4272
// member variables: 4
// struct size: 24
struct VkPipelineTessellationStateCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkPipelineTessellationStateCreateFlags flags; /* 16 4 */
	uint32_t patchControlPoints; /* 20 4 */
};

// <005238DC> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4279
// member variables: 7
// struct size: 48
struct VkPipelineVertexInputStateCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkPipelineVertexInputStateCreateFlags flags; /* 16 4 */
	uint32_t vertexBindingDescriptionCount; /* 20 4 */
	const VkVertexInputBindingDescription * pVertexBindingDescriptions; /* 24 8 */
	uint32_t vertexAttributeDescriptionCount; /* 32 4 */
	const VkVertexInputAttributeDescription * pVertexAttributeDescriptions; /* 40 8 */
};

// <005EFDA0> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4289
// member variables: 7
// struct size: 48
struct VkPipelineViewportStateCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkPipelineViewportStateCreateFlags flags; /* 16 4 */
	uint32_t viewportCount; /* 20 4 */
	const VkViewport * pViewports; /* 24 8 */
	uint32_t scissorCount; /* 32 4 */
	const VkRect2D * pScissors; /* 40 8 */
};

// <005EFE3D> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4299
// member variables: 19
// struct size: 144
struct VkGraphicsPipelineCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkPipelineCreateFlags flags; /* 16 4 */
	uint32_t stageCount; /* 20 4 */
	const VkPipelineShaderStageCreateInfo * pStages; /* 24 8 */
	const VkPipelineVertexInputStateCreateInfo * pVertexInputState; /* 32 8 */
	const VkPipelineInputAssemblyStateCreateInfo * pInputAssemblyState; /* 40 8 */
	const VkPipelineTessellationStateCreateInfo * pTessellationState; /* 48 8 */
	const VkPipelineViewportStateCreateInfo * pViewportState; /* 56 8 */
	const VkPipelineRasterizationStateCreateInfo * pRasterizationState; /* 64 8 */
	const VkPipelineMultisampleStateCreateInfo * pMultisampleState; /* 72 8 */
	const VkPipelineDepthStencilStateCreateInfo * pDepthStencilState; /* 80 8 */
	const VkPipelineColorBlendStateCreateInfo * pColorBlendState; /* 88 8 */
	const VkPipelineDynamicStateCreateInfo * pDynamicState; /* 96 8 */
	VkPipelineLayout layout; /* 104 8 */
	VkRenderPass renderPass; /* 112 8 */
	uint32_t subpass; /* 120 4 */
	VkPipeline basePipelineHandle; /* 128 8 */
	int32_t basePipelineIndex; /* 136 4 */
};

// <004C083F> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4321
// member variables: 9
// struct size: 36
struct VkAttachmentDescription {
	VkAttachmentDescriptionFlags flags; /* 0 4 */
	VkFormat format; /* 4 4 */
	VkSampleCountFlagBits samples; /* 8 4 */
	VkAttachmentLoadOp loadOp; /* 12 4 */
	VkAttachmentStoreOp storeOp; /* 16 4 */
	VkAttachmentLoadOp stencilLoadOp; /* 20 4 */
	VkAttachmentStoreOp stencilStoreOp; /* 24 4 */
	VkImageLayout initialLayout; /* 28 4 */
	VkImageLayout finalLayout; /* 32 4 */
};

// <004C08F0> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4333
// member variables: 2
// struct size: 8
struct VkAttachmentReference {
	uint32_t attachment; /* 0 4 */
	VkImageLayout layout; /* 4 4 */
};

// <004C0931> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4338
// member variables: 9
// struct size: 64
struct VkFramebufferCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkFramebufferCreateFlags flags; /* 16 4 */
	VkRenderPass renderPass; /* 24 8 */
	uint32_t attachmentCount; /* 32 4 */
	const VkImageView * pAttachments; /* 40 8 */
	uint32_t width; /* 48 4 */
	uint32_t height; /* 52 4 */
	uint32_t layers; /* 56 4 */
};

// <004C09E8> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4350
// member variables: 7
// struct size: 28
struct VkSubpassDependency {
	uint32_t srcSubpass; /* 0 4 */
	uint32_t dstSubpass; /* 4 4 */
	VkPipelineStageFlags srcStageMask; /* 8 4 */
	VkPipelineStageFlags dstStageMask; /* 12 4 */
	VkAccessFlags srcAccessMask; /* 16 4 */
	VkAccessFlags dstAccessMask; /* 20 4 */
	VkDependencyFlags dependencyFlags; /* 24 4 */
};

// <004C0A79> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4360
// member variables: 10
// struct size: 72
struct VkSubpassDescription {
	VkSubpassDescriptionFlags flags; /* 0 4 */
	VkPipelineBindPoint pipelineBindPoint; /* 4 4 */
	uint32_t inputAttachmentCount; /* 8 4 */
	const VkAttachmentReference * pInputAttachments; /* 16 8 */
	uint32_t colorAttachmentCount; /* 24 4 */
	const VkAttachmentReference * pColorAttachments; /* 32 8 */
	const VkAttachmentReference * pResolveAttachments; /* 40 8 */
	const VkAttachmentReference * pDepthStencilAttachment; /* 48 8 */
	uint32_t preserveAttachmentCount; /* 56 4 */
	const uint32_t * pPreserveAttachments; /* 64 8 */
};

// <004C0B40> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4373
// member variables: 9
// struct size: 64
struct VkRenderPassCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkRenderPassCreateFlags flags; /* 16 4 */
	uint32_t attachmentCount; /* 20 4 */
	const VkAttachmentDescription * pAttachments; /* 24 8 */
	uint32_t subpassCount; /* 32 4 */
	const VkSubpassDescription * pSubpasses; /* 40 8 */
	uint32_t dependencyCount; /* 48 4 */
	const VkSubpassDependency * pDependencies; /* 56 8 */
};

// <004C0C03> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4385
// member variables: 2
// struct size: 8
struct VkClearDepthStencilValue {
	float depth; /* 0 4 */
	uint32_t stencil; /* 4 4 */
};

// <0080925C> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4390
// member variables: 3
// struct size: 24
struct VkClearRect {
	VkRect2D rect; /* 0 16 */
	uint32_t baseArrayLayer; /* 16 4 */
	uint32_t layerCount; /* 20 4 */
};

// <004C0C3F> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4396
union VkClearValue {
	VkClearColorValue color; /* 0 16 */
	VkClearDepthStencilValue depthStencil; /* 0 8 */
};

// <008092E9> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4401
// member variables: 3
// struct size: 24
struct VkClearAttachment {
	VkImageAspectFlags aspectMask; /* 0 4 */
	uint32_t colorAttachment; /* 4 4 */
	VkClearValue clearValue; /* 8 16 */
};

// <0080933A> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4407
// member variables: 4
// struct size: 80
struct VkImageBlit {
	VkImageSubresourceLayers srcSubresource; /* 0 16 */
	VkOffset3D srcOffsets[2]; /* 16 24 */
	VkImageSubresourceLayers dstSubresource; /* 40 16 */
	VkOffset3D dstOffsets[2]; /* 56 24 */
};

// <008093AB> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4414
// member variables: 5
// struct size: 68
struct VkImageResolve {
	VkImageSubresourceLayers srcSubresource; /* 0 16 */
	VkOffset3D srcOffset; /* 16 12 */
	VkImageSubresourceLayers dstSubresource; /* 28 16 */
	VkOffset3D dstOffset; /* 44 12 */
	VkExtent3D extent; /* 56 12 */
};

// <0080941C> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:4422
// member variables: 7
// struct size: 64
struct VkRenderPassBeginInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkRenderPass renderPass; /* 16 8 */
	VkFramebuffer framebuffer; /* 24 8 */
	VkRect2D renderArea; /* 32 16 */
	uint32_t clearValueCount; /* 48 4 */
	const VkClearValue * pClearValues; /* 56 8 */
};

// <0054FD81> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:5583
// member variables: 5
// struct size: 40
struct VkBindBufferMemoryInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkBuffer buffer; /* 16 8 */
	VkDeviceMemory memory; /* 24 8 */
	VkDeviceSize memoryOffset; /* 32 8 */
};

// <0054FDF2> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:5591
// member variables: 5
// struct size: 40
struct VkBindImageMemoryInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkImage image; /* 16 8 */
	VkDeviceMemory memory; /* 24 8 */
	VkDeviceSize memoryOffset; /* 32 8 */
};

// <00C92150> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:5599
// member variables: 4
// struct size: 24
struct VkMemoryDedicatedRequirements {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkBool32 prefersDedicatedAllocation; /* 16 4 */
	VkBool32 requiresDedicatedAllocation; /* 20 4 */
};

// <0054FE63> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:5606
// member variables: 4
// struct size: 32
struct VkMemoryDedicatedAllocateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkImage image; /* 16 8 */
	VkBuffer buffer; /* 24 8 */
};

// <0054FEBF> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:5613
// member variables: 4
// struct size: 24
struct VkMemoryAllocateFlagsInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkMemoryAllocateFlags flags; /* 16 4 */
	uint32_t deviceMask; /* 20 4 */
};

// <008AC9FB> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:5660
// member variables: 5
// struct size: 288
struct VkPhysicalDeviceGroupProperties {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	uint32_t physicalDeviceCount; /* 16 4 */
	VkPhysicalDevice physicalDevices[32]; /* 24 256 */
	VkBool32 subsetAllocation; /* 280 4 */
};

// <0054FF1B> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:5675
// member variables: 3
// struct size: 24
struct VkBufferMemoryRequirementsInfo2 {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkBuffer buffer; /* 16 8 */
};

// <0054FF6C> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:5681
// member variables: 3
// struct size: 24
struct VkImageMemoryRequirementsInfo2 {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkImage image; /* 16 8 */
};

// <00D25C1B> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:5687
// member variables: 3
// struct size: 24
struct VkImageSparseMemoryRequirementsInfo2 {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkImage image; /* 16 8 */
};

// <0054FFBD> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:5693
// member variables: 3
// struct size: 40
struct VkMemoryRequirements2 {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkMemoryRequirements memoryRequirements; /* 16 24 */
};

// <005F0408> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:5705
// member variables: 3
// struct size: 240
struct VkPhysicalDeviceFeatures2 {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkPhysicalDeviceFeatures features; /* 16 220 */
};

// <008ACA79> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:5711
// member variables: 3
// struct size: 840
struct VkPhysicalDeviceProperties2 {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkPhysicalDeviceProperties properties; /* 16 824 */
};

// <00D25D9D> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:5717
// member variables: 3
// struct size: 32
struct VkFormatProperties2 {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkFormatProperties formatProperties; /* 16 12 */
};

// <00D25DE9> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:5723
// member variables: 3
// struct size: 48
struct VkImageFormatProperties2 {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkImageFormatProperties imageFormatProperties; /* 16 32 */
};

// <00D25E35> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:5729
// member variables: 7
// struct size: 40
struct VkPhysicalDeviceImageFormatInfo2 {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkFormat format; /* 16 4 */
	VkImageType type; /* 20 4 */
	VkImageTiling tiling; /* 24 4 */
	VkImageUsageFlags usage; /* 28 4 */
	VkImageCreateFlags flags; /* 32 4 */
};

// <00D25EC6> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:5739
// member variables: 3
// struct size: 40
struct VkQueueFamilyProperties2 {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkQueueFamilyProperties queueFamilyProperties; /* 16 24 */
};

// <00550009> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:5745
// member variables: 3
// struct size: 536
struct VkPhysicalDeviceMemoryProperties2 {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkPhysicalDeviceMemoryProperties memoryProperties; /* 16 520 */
};

// <00D25F5F> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:5751
// member variables: 3
// struct size: 40
struct VkSparseImageFormatProperties2 {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkSparseImageFormatProperties properties; /* 16 20 */
};

// <00D25FAB> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:5757
// member variables: 7
// struct size: 40
struct VkPhysicalDeviceSparseImageFormatInfo2 {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkFormat format; /* 16 4 */
	VkImageType type; /* 20 4 */
	VkSampleCountFlagBits samples; /* 24 4 */
	VkImageUsageFlags usage; /* 28 4 */
	VkImageTiling tiling; /* 32 4 */
};

// <00C0DD4C> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:5767
// member variables: 3
// struct size: 24
struct VkImageViewUsageCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkImageUsageFlags usage; /* 16 4 */
};

// <00D2603C> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:5785
// member variables: 5
// struct size: 32
struct VkDeviceQueueInfo2 {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkDeviceQueueCreateFlags flags; /* 16 4 */
	uint32_t queueFamilyIndex; /* 20 4 */
	uint32_t queueIndex; /* 24 4 */
};

// <00D260AD> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:5811
// member variables: 3
// struct size: 12
struct VkExternalMemoryProperties {
	VkExternalMemoryFeatureFlags externalMemoryFeatures; /* 0 4 */
	VkExternalMemoryHandleTypeFlags exportFromImportedHandleTypes; /* 4 4 */
	VkExternalMemoryHandleTypeFlags compatibleHandleTypes; /* 8 4 */
};

// <00D260F9> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:5829
// member variables: 5
// struct size: 32
struct VkPhysicalDeviceExternalBufferInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkBufferCreateFlags flags; /* 16 4 */
	VkBufferUsageFlags usage; /* 20 4 */
	VkExternalMemoryHandleTypeFlagBits handleType; /* 24 4 */
};

// <00D2616A> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:5837
// member variables: 3
// struct size: 32
struct VkExternalBufferProperties {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkExternalMemoryProperties externalMemoryProperties; /* 16 12 */
};

// <00C923A0> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:5865
// member variables: 3
// struct size: 24
struct VkExportMemoryAllocateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkExternalMemoryHandleTypeFlags handleTypes; /* 16 4 */
};

// <00D261B6> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:5871
// member variables: 3
// struct size: 24
struct VkPhysicalDeviceExternalFenceInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkExternalFenceHandleTypeFlagBits handleType; /* 16 4 */
};

// <00D26207> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:5877
// member variables: 5
// struct size: 32
struct VkExternalFenceProperties {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkExternalFenceHandleTypeFlags exportFromImportedHandleTypes; /* 16 4 */
	VkExternalFenceHandleTypeFlags compatibleHandleTypes; /* 20 4 */
	VkExternalFenceFeatureFlags externalFenceFeatures; /* 24 4 */
};

// <00D26273> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:5897
// member variables: 3
// struct size: 24
struct VkPhysicalDeviceExternalSemaphoreInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkExternalSemaphoreHandleTypeFlagBits handleType; /* 16 4 */
};

// <00D262C4> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:5903
// member variables: 5
// struct size: 32
struct VkExternalSemaphoreProperties {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkExternalSemaphoreHandleTypeFlags exportFromImportedHandleTypes; /* 16 4 */
	VkExternalSemaphoreHandleTypeFlags compatibleHandleTypes; /* 20 4 */
	VkExternalSemaphoreFeatureFlags externalSemaphoreFeatures; /* 24 4 */
};

// <00550057> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:5911
// member variables: 6
// struct size: 32
struct VkPhysicalDeviceSubgroupProperties {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	uint32_t subgroupSize; /* 16 4 */
	VkShaderStageFlags supportedStages; /* 20 4 */
	VkSubgroupFeatureFlags supportedOperations; /* 24 4 */
	VkBool32 quadOperationsInAllStages; /* 28 4 */
};

// <00691576> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:5938
// member variables: 6
// struct size: 32
struct VkDescriptorUpdateTemplateEntry {
	uint32_t dstBinding; /* 0 4 */
	uint32_t dstArrayElement; /* 4 4 */
	uint32_t descriptorCount; /* 8 4 */
	VkDescriptorType descriptorType; /* 12 4 */
	size_t offset; /* 16 8 */
	size_t stride; /* 24 8 */
};

// <006915F7> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:5947
// member variables: 10
// struct size: 72
struct VkDescriptorUpdateTemplateCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkDescriptorUpdateTemplateCreateFlags flags; /* 16 4 */
	uint32_t descriptorUpdateEntryCount; /* 20 4 */
	const VkDescriptorUpdateTemplateEntry * pDescriptorUpdateEntries; /* 24 8 */
	VkDescriptorUpdateTemplateType templateType; /* 32 4 */
	VkDescriptorSetLayout descriptorSetLayout; /* 40 8 */
	VkPipelineBindPoint pipelineBindPoint; /* 48 4 */
	VkPipelineLayout pipelineLayout; /* 56 8 */
	uint32_t set; /* 64 4 */
};

// <00D26478> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:5967
// member variables: 3
// struct size: 24
struct VkDescriptorSetLayoutSupport {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkBool32 supported; /* 16 4 */
};

// <00D264C4> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:5973
// member variables: 10
// struct size: 64
struct VkSamplerYcbcrConversionCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkFormat format; /* 16 4 */
	VkSamplerYcbcrModelConversion ycbcrModel; /* 20 4 */
	VkSamplerYcbcrRange ycbcrRange; /* 24 4 */
	VkComponentMapping components; /* 28 16 */
	VkChromaLocation xChromaOffset; /* 44 4 */
	VkChromaLocation yChromaOffset; /* 48 4 */
	VkFilter chromaFilter; /* 52 4 */
	VkBool32 forceExplicitReconstruction; /* 56 4 */
};

// <008E10A9> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:6420
// member variables: 49
// struct size: 208
struct VkPhysicalDeviceVulkan12Features {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkBool32 samplerMirrorClampToEdge; /* 16 4 */
	VkBool32 drawIndirectCount; /* 20 4 */
	VkBool32 storageBuffer8BitAccess; /* 24 4 */
	VkBool32 uniformAndStorageBuffer8BitAccess; /* 28 4 */
	VkBool32 storagePushConstant8; /* 32 4 */
	VkBool32 shaderBufferInt64Atomics; /* 36 4 */
	VkBool32 shaderSharedInt64Atomics; /* 40 4 */
	VkBool32 shaderFloat16; /* 44 4 */
	VkBool32 shaderInt8; /* 48 4 */
	VkBool32 descriptorIndexing; /* 52 4 */
	VkBool32 shaderInputAttachmentArrayDynamicIndexing; /* 56 4 */
	VkBool32 shaderUniformTexelBufferArrayDynamicIndexing; /* 60 4 */
	VkBool32 shaderStorageTexelBufferArrayDynamicIndexing; /* 64 4 */
	VkBool32 shaderUniformBufferArrayNonUniformIndexing; /* 68 4 */
	VkBool32 shaderSampledImageArrayNonUniformIndexing; /* 72 4 */
	VkBool32 shaderStorageBufferArrayNonUniformIndexing; /* 76 4 */
	VkBool32 shaderStorageImageArrayNonUniformIndexing; /* 80 4 */
	VkBool32 shaderInputAttachmentArrayNonUniformIndexing; /* 84 4 */
	VkBool32 shaderUniformTexelBufferArrayNonUniformIndexing; /* 88 4 */
	VkBool32 shaderStorageTexelBufferArrayNonUniformIndexing; /* 92 4 */
	VkBool32 descriptorBindingUniformBufferUpdateAfterBind; /* 96 4 */
	VkBool32 descriptorBindingSampledImageUpdateAfterBind; /* 100 4 */
	VkBool32 descriptorBindingStorageImageUpdateAfterBind; /* 104 4 */
	VkBool32 descriptorBindingStorageBufferUpdateAfterBind; /* 108 4 */
	VkBool32 descriptorBindingUniformTexelBufferUpdateAfterBind; /* 112 4 */
	VkBool32 descriptorBindingStorageTexelBufferUpdateAfterBind; /* 116 4 */
	VkBool32 descriptorBindingUpdateUnusedWhilePending; /* 120 4 */
	VkBool32 descriptorBindingPartiallyBound; /* 124 4 */
	VkBool32 descriptorBindingVariableDescriptorCount; /* 128 4 */
	VkBool32 runtimeDescriptorArray; /* 132 4 */
	VkBool32 samplerFilterMinmax; /* 136 4 */
	VkBool32 scalarBlockLayout; /* 140 4 */
	VkBool32 imagelessFramebuffer; /* 144 4 */
	VkBool32 uniformBufferStandardLayout; /* 148 4 */
	VkBool32 shaderSubgroupExtendedTypes; /* 152 4 */
	VkBool32 separateDepthStencilLayouts; /* 156 4 */
	VkBool32 hostQueryReset; /* 160 4 */
	VkBool32 timelineSemaphore; /* 164 4 */
	VkBool32 bufferDeviceAddress; /* 168 4 */
	VkBool32 bufferDeviceAddressCaptureReplay; /* 172 4 */
	VkBool32 bufferDeviceAddressMultiDevice; /* 176 4 */
	VkBool32 vulkanMemoryModel; /* 180 4 */
	VkBool32 vulkanMemoryModelDeviceScope; /* 184 4 */
	VkBool32 vulkanMemoryModelAvailabilityVisibilityChains; /* 188 4 */
	VkBool32 shaderOutputViewportIndex; /* 192 4 */
	VkBool32 shaderOutputLayer; /* 196 4 */
	VkBool32 subgroupBroadcastDynamicId; /* 200 4 */
};

// <008E13E8> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:6529
// member variables: 4
// struct size: 32
struct VkImageFormatListCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	uint32_t viewFormatCount; /* 16 4 */
	const VkFormat * pViewFormats; /* 24 8 */
};

// <00D26B65> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:6578
// member variables: 6
// struct size: 40
struct VkSemaphoreWaitInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkSemaphoreWaitFlags flags; /* 16 4 */
	uint32_t semaphoreCount; /* 20 4 */
	const VkSemaphore * pSemaphores; /* 24 8 */
	const uint64_t * pValues; /* 32 8 */
};

// <00D26BE6> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:6587
// member variables: 4
// struct size: 32
struct VkSemaphoreSignalInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkSemaphore semaphore; /* 16 8 */
	uint64_t value; /* 24 8 */
};

// <0050C0FD> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:6602
// member variables: 3
// struct size: 24
struct VkBufferDeviceAddressInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkBuffer buffer; /* 16 8 */
};

// <00D26C98> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:6620
// member variables: 3
// struct size: 24
struct VkDeviceMemoryOpaqueCaptureAddressInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkDeviceMemory memory; /* 16 8 */
};

// <006917B6> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:6670
// member variables: 4
// struct size: 32
struct VkDescriptorSetLayoutBindingFlagsCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	uint32_t bindingCount; /* 16 4 */
	const VkDescriptorBindingFlags * pBindingFlags; /* 24 8 */
};

// <0047D765> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:6730
// member variables: 4
// struct size: 32
struct VkDescriptorSetVariableDescriptorCountAllocateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	uint32_t descriptorSetCount; /* 16 4 */
	const uint32_t * pDescriptorCounts; /* 24 8 */
};

// <005F045F> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:6774
// member variables: 11
// struct size: 56
struct VkAttachmentDescription2 {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkAttachmentDescriptionFlags flags; /* 16 4 */
	VkFormat format; /* 20 4 */
	VkSampleCountFlagBits samples; /* 24 4 */
	VkAttachmentLoadOp loadOp; /* 28 4 */
	VkAttachmentStoreOp storeOp; /* 32 4 */
	VkAttachmentLoadOp stencilLoadOp; /* 36 4 */
	VkAttachmentStoreOp stencilStoreOp; /* 40 4 */
	VkImageLayout initialLayout; /* 44 4 */
	VkImageLayout finalLayout; /* 48 4 */
};

// <005F0530> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:6788
// member variables: 5
// struct size: 32
struct VkAttachmentReference2 {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	uint32_t attachment; /* 16 4 */
	VkImageLayout layout; /* 20 4 */
	VkImageAspectFlags aspectMask; /* 24 4 */
};

// <005F05A1> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:6796
// member variables: 13
// struct size: 88
struct VkSubpassDescription2 {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkSubpassDescriptionFlags flags; /* 16 4 */
	VkPipelineBindPoint pipelineBindPoint; /* 20 4 */
	uint32_t viewMask; /* 24 4 */
	uint32_t inputAttachmentCount; /* 28 4 */
	const VkAttachmentReference2 * pInputAttachments; /* 32 8 */
	uint32_t colorAttachmentCount; /* 40 4 */
	const VkAttachmentReference2 * pColorAttachments; /* 48 8 */
	const VkAttachmentReference2 * pResolveAttachments; /* 56 8 */
	const VkAttachmentReference2 * pDepthStencilAttachment; /* 64 8 */
	uint32_t preserveAttachmentCount; /* 72 4 */
	const uint32_t * pPreserveAttachments; /* 80 8 */
};

// <005F0698> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:6812
// member variables: 10
// struct size: 48
struct VkSubpassDependency2 {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	uint32_t srcSubpass; /* 16 4 */
	uint32_t dstSubpass; /* 20 4 */
	VkPipelineStageFlags srcStageMask; /* 24 4 */
	VkPipelineStageFlags dstStageMask; /* 28 4 */
	VkAccessFlags srcAccessMask; /* 32 4 */
	VkAccessFlags dstAccessMask; /* 36 4 */
	VkDependencyFlags dependencyFlags; /* 40 4 */
	int32_t viewOffset; /* 44 4 */
};

// <00D26FE3> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:6825
// member variables: 3
// struct size: 24
struct VkSubpassBeginInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkSubpassContents contents; /* 16 4 */
};

// <00D27034> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:6831
// member variables: 2
// struct size: 16
struct VkSubpassEndInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
};

// <005F0759> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:6836
// member variables: 11
// struct size: 80
struct VkRenderPassCreateInfo2 {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkRenderPassCreateFlags flags; /* 16 4 */
	uint32_t attachmentCount; /* 20 4 */
	const VkAttachmentDescription2 * pAttachments; /* 24 8 */
	uint32_t subpassCount; /* 32 4 */
	const VkSubpassDescription2 * pSubpasses; /* 40 8 */
	uint32_t dependencyCount; /* 48 4 */
	const VkSubpassDependency2 * pDependencies; /* 56 8 */
	uint32_t correlatedViewMaskCount; /* 64 4 */
	const uint32_t * pCorrelatedViewMasks; /* 72 8 */
};

// <00C0DDFA> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:6867
// member variables: 3
// struct size: 24
struct VkImageStencilUsageCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkImageUsageFlags stencilUsage; /* 16 4 */
};

// <00D2843F> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:7397
// member variables: 7
// struct size: 1,048
struct VkPhysicalDeviceToolProperties {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	char name[256]; /* 16 256 */
	char version[256]; /* 272 256 */
	VkToolPurposeFlags purposes; /* 528 4 */
	char description[256]; /* 532 256 */
	char layer[256]; /* 788 256 */
};

// <00D284D0> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:7419
// member variables: 3
// struct size: 24
struct VkPrivateDataSlotCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkPrivateDataSlotCreateFlags flags; /* 16 4 */
};

// <00D28521> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:7425
// member variables: 6
// struct size: 48
struct VkMemoryBarrier2 {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkPipelineStageFlags2 srcStageMask; /* 16 8 */
	VkAccessFlags2 srcAccessMask; /* 24 8 */
	VkPipelineStageFlags2 dstStageMask; /* 32 8 */
	VkAccessFlags2 dstAccessMask; /* 40 8 */
};

// <00D285A2> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:7434
// member variables: 11
// struct size: 80
struct VkBufferMemoryBarrier2 {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkPipelineStageFlags2 srcStageMask; /* 16 8 */
	VkAccessFlags2 srcAccessMask; /* 24 8 */
	VkPipelineStageFlags2 dstStageMask; /* 32 8 */
	VkAccessFlags2 dstAccessMask; /* 40 8 */
	uint32_t srcQueueFamilyIndex; /* 48 4 */
	uint32_t dstQueueFamilyIndex; /* 52 4 */
	VkBuffer buffer; /* 56 8 */
	VkDeviceSize offset; /* 64 8 */
	VkDeviceSize size; /* 72 8 */
};

// <00D28673> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:7448
// member variables: 12
// struct size: 96
struct VkImageMemoryBarrier2 {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkPipelineStageFlags2 srcStageMask; /* 16 8 */
	VkAccessFlags2 srcAccessMask; /* 24 8 */
	VkPipelineStageFlags2 dstStageMask; /* 32 8 */
	VkAccessFlags2 dstAccessMask; /* 40 8 */
	VkImageLayout oldLayout; /* 48 4 */
	VkImageLayout newLayout; /* 52 4 */
	uint32_t srcQueueFamilyIndex; /* 56 4 */
	uint32_t dstQueueFamilyIndex; /* 60 4 */
	VkImage image; /* 64 8 */
	VkImageSubresourceRange subresourceRange; /* 72 20 */
};

// <00D28754> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:7463
// member variables: 9
// struct size: 64
struct VkDependencyInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkDependencyFlags dependencyFlags; /* 16 4 */
	uint32_t memoryBarrierCount; /* 20 4 */
	const VkMemoryBarrier2 * pMemoryBarriers; /* 24 8 */
	uint32_t bufferMemoryBarrierCount; /* 32 4 */
	const VkBufferMemoryBarrier2 * pBufferMemoryBarriers; /* 40 8 */
	uint32_t imageMemoryBarrierCount; /* 48 4 */
	const VkImageMemoryBarrier2 * pImageMemoryBarriers; /* 56 8 */
};

// <00D28817> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:7475
// member variables: 6
// struct size: 48
struct VkSemaphoreSubmitInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkSemaphore semaphore; /* 16 8 */
	uint64_t value; /* 24 8 */
	VkPipelineStageFlags2 stageMask; /* 32 8 */
	uint32_t deviceIndex; /* 40 4 */
};

// <00D28898> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:7484
// member variables: 4
// struct size: 32
struct VkCommandBufferSubmitInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkCommandBuffer commandBuffer; /* 16 8 */
	uint32_t deviceMask; /* 24 4 */
};

// <00D288F9> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:7491
// member variables: 9
// struct size: 64
struct VkSubmitInfo2 {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkSubmitFlags flags; /* 16 4 */
	uint32_t waitSemaphoreInfoCount; /* 20 4 */
	const VkSemaphoreSubmitInfo * pWaitSemaphoreInfos; /* 24 8 */
	uint32_t commandBufferInfoCount; /* 32 4 */
	const VkCommandBufferSubmitInfo * pCommandBufferInfos; /* 40 8 */
	uint32_t signalSemaphoreInfoCount; /* 48 4 */
	const VkSemaphoreSubmitInfo * pSignalSemaphoreInfos; /* 56 8 */
};

// <00D289B6> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:7509
// member variables: 5
// struct size: 40
struct VkBufferCopy2 {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkDeviceSize srcOffset; /* 16 8 */
	VkDeviceSize dstOffset; /* 24 8 */
	VkDeviceSize size; /* 32 8 */
};

// <00D28A27> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:7517
// member variables: 6
// struct size: 48
struct VkCopyBufferInfo2 {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkBuffer srcBuffer; /* 16 8 */
	VkBuffer dstBuffer; /* 24 8 */
	uint32_t regionCount; /* 32 4 */
	const VkBufferCopy2 * pRegions; /* 40 8 */
};

// <00D28AAE> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:7526
// member variables: 7
// struct size: 88
struct VkImageCopy2 {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkImageSubresourceLayers srcSubresource; /* 16 16 */
	VkOffset3D srcOffset; /* 32 12 */
	VkImageSubresourceLayers dstSubresource; /* 44 16 */
	VkOffset3D dstOffset; /* 60 12 */
	VkExtent3D extent; /* 72 12 */
};

// <00D28B3F> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:7536
// member variables: 8
// struct size: 56
struct VkCopyImageInfo2 {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkImage srcImage; /* 16 8 */
	VkImageLayout srcImageLayout; /* 24 4 */
	VkImage dstImage; /* 32 8 */
	VkImageLayout dstImageLayout; /* 40 4 */
	uint32_t regionCount; /* 44 4 */
	const VkImageCopy2 * pRegions; /* 48 8 */
};

// <00D28BE6> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:7547
// member variables: 8
// struct size: 72
struct VkBufferImageCopy2 {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkDeviceSize bufferOffset; /* 16 8 */
	uint32_t bufferRowLength; /* 24 4 */
	uint32_t bufferImageHeight; /* 28 4 */
	VkImageSubresourceLayers imageSubresource; /* 32 16 */
	VkOffset3D imageOffset; /* 48 12 */
	VkExtent3D imageExtent; /* 60 12 */
};

// <00D28C87> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:7558
// member variables: 7
// struct size: 48
struct VkCopyBufferToImageInfo2 {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkBuffer srcBuffer; /* 16 8 */
	VkImage dstImage; /* 24 8 */
	VkImageLayout dstImageLayout; /* 32 4 */
	uint32_t regionCount; /* 36 4 */
	const VkBufferImageCopy2 * pRegions; /* 40 8 */
};

// <005511C9> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:7604
// member variables: 3
// struct size: 24
struct VkDeviceBufferMemoryRequirements {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	const VkBufferCreateInfo * pCreateInfo; /* 16 8 */
};

// <0055121A> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:7610
// member variables: 4
// struct size: 32
struct VkDeviceImageMemoryRequirements {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	const VkImageCreateInfo * pCreateInfo; /* 16 8 */
	VkImageAspectFlagBits planeAspect; /* 24 4 */
};

// <008E2492> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:7642
// member variables: 3
// struct size: 24
struct VkPhysicalDevicePipelineCreationCacheControlFeatures {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkBool32 pipelineCreationCacheControl; /* 16 4 */
};

// <008E24DE> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:7660
// member variables: 4
// struct size: 24
struct VkPhysicalDeviceSubgroupSizeControlFeatures {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkBool32 subgroupSizeControl; /* 16 4 */
	VkBool32 computeFullSubgroups; /* 20 4 */
};

// <0055127B> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:7667
// member variables: 6
// struct size: 32
struct VkPhysicalDeviceSubgroupSizeControlProperties {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	uint32_t minSubgroupSize; /* 16 4 */
	uint32_t maxSubgroupSize; /* 20 4 */
	uint32_t maxComputeWorkgroupSubgroups; /* 24 4 */
	VkShaderStageFlags requiredSubgroupSizeStages; /* 28 4 */
};

// <008E25B6> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:7676
// member variables: 3
// struct size: 24
struct VkPipelineShaderStageRequiredSubgroupSizeCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	uint32_t requiredSubgroupSize; /* 16 4 */
};

// <00D28E61> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:7762
// member variables: 6
// struct size: 96
struct VkImageBlit2 {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkImageSubresourceLayers srcSubresource; /* 16 16 */
	VkOffset3D srcOffsets[2]; /* 32 24 */
	VkImageSubresourceLayers dstSubresource; /* 56 16 */
	VkOffset3D dstOffsets[2]; /* 72 24 */
};

// <00D28EE2> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:7771
// member variables: 9
// struct size: 64
struct VkBlitImageInfo2 {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkImage srcImage; /* 16 8 */
	VkImageLayout srcImageLayout; /* 24 4 */
	VkImage dstImage; /* 32 8 */
	VkImageLayout dstImageLayout; /* 40 4 */
	uint32_t regionCount; /* 44 4 */
	const VkImageBlit2 * pRegions; /* 48 8 */
	VkFilter filter; /* 56 4 */
};

// <00D28F99> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:7783
// member variables: 7
// struct size: 88
struct VkImageResolve2 {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkImageSubresourceLayers srcSubresource; /* 16 16 */
	VkOffset3D srcOffset; /* 32 12 */
	VkImageSubresourceLayers dstSubresource; /* 44 16 */
	VkOffset3D dstOffset; /* 60 12 */
	VkExtent3D extent; /* 72 12 */
};

// <00D2902A> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:7793
// member variables: 8
// struct size: 56
struct VkResolveImageInfo2 {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkImage srcImage; /* 16 8 */
	VkImageLayout srcImageLayout; /* 24 4 */
	VkImage dstImage; /* 32 8 */
	VkImageLayout dstImageLayout; /* 40 4 */
	uint32_t regionCount; /* 44 4 */
	const VkImageResolve2 * pRegions; /* 48 8 */
};

// <0080AE29> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:7804
// member variables: 10
// struct size: 72
struct VkRenderingAttachmentInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkImageView imageView; /* 16 8 */
	VkImageLayout imageLayout; /* 24 4 */
	VkResolveModeFlagBits resolveMode; /* 28 4 */
	VkImageView resolveImageView; /* 32 8 */
	VkImageLayout resolveImageLayout; /* 40 4 */
	VkAttachmentLoadOp loadOp; /* 44 4 */
	VkAttachmentStoreOp storeOp; /* 48 4 */
	VkClearValue clearValue; /* 52 16 */
};

// <0080AEEA> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:7817
// member variables: 10
// struct size: 72
struct VkRenderingInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkRenderingFlags flags; /* 16 4 */
	VkRect2D renderArea; /* 20 16 */
	uint32_t layerCount; /* 36 4 */
	uint32_t viewMask; /* 40 4 */
	uint32_t colorAttachmentCount; /* 44 4 */
	const VkRenderingAttachmentInfo * pColorAttachments; /* 48 8 */
	const VkRenderingAttachmentInfo * pDepthAttachment; /* 56 8 */
	const VkRenderingAttachmentInfo * pStencilAttachment; /* 64 8 */
};

// <005F1884> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:7830
// member variables: 7
// struct size: 40
struct VkPipelineRenderingCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	uint32_t viewMask; /* 16 4 */
	uint32_t colorAttachmentCount; /* 20 4 */
	const VkFormat * pColorAttachmentFormats; /* 24 8 */
	VkFormat depthAttachmentFormat; /* 32 4 */
	VkFormat stencilAttachmentFormat; /* 36 4 */
};

// <008E2602> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:7840
// member variables: 3
// struct size: 24
struct VkPhysicalDeviceDynamicRenderingFeatures {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkBool32 dynamicRendering; /* 16 4 */
};

// <00D29E5B> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:8348
// member variables: 6
// struct size: 48
struct VkMemoryMapInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkMemoryMapFlags flags; /* 16 4 */
	VkDeviceMemory memory; /* 24 8 */
	VkDeviceSize offset; /* 32 8 */
	VkDeviceSize size; /* 40 8 */
};

// <00D29EDC> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:8357
// member variables: 4
// struct size: 32
struct VkMemoryUnmapInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkMemoryUnmapFlags flags; /* 16 4 */
	VkDeviceMemory memory; /* 24 8 */
};

// <00D29F3D> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:8381
// member variables: 3
// struct size: 56
struct VkSubresourceLayout2 {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkSubresourceLayout subresourceLayout; /* 16 40 */
};

// <00D29F89> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:8387
// member variables: 3
// struct size: 32
struct VkImageSubresource2 {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkImageSubresource imageSubresource; /* 16 12 */
};

// <00D29FDA> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:8393
// member variables: 4
// struct size: 32
struct VkDeviceImageSubresourceInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	const VkImageCreateInfo * pCreateInfo; /* 16 8 */
	const VkImageSubresource2 * pSubresource; /* 24 8 */
};

// <00D2A047> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:8443
// member variables: 8
// struct size: 72
struct VkMemoryToImageCopy {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	const void * pHostPointer; /* 16 8 */
	uint32_t memoryRowLength; /* 24 4 */
	uint32_t memoryImageHeight; /* 28 4 */
	VkImageSubresourceLayers imageSubresource; /* 32 16 */
	VkOffset3D imageOffset; /* 48 12 */
	VkExtent3D imageExtent; /* 60 12 */
};

// <00D2A0E8> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:8454
// member variables: 8
// struct size: 72
struct VkImageToMemoryCopy {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	void * pHostPointer; /* 16 8 */
	uint32_t memoryRowLength; /* 24 4 */
	uint32_t memoryImageHeight; /* 28 4 */
	VkImageSubresourceLayers imageSubresource; /* 32 16 */
	VkOffset3D imageOffset; /* 48 12 */
	VkExtent3D imageExtent; /* 60 12 */
};

// <00D2A189> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:8465
// member variables: 7
// struct size: 48
struct VkCopyMemoryToImageInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkHostImageCopyFlags flags; /* 16 4 */
	VkImage dstImage; /* 24 8 */
	VkImageLayout dstImageLayout; /* 32 4 */
	uint32_t regionCount; /* 36 4 */
	const VkMemoryToImageCopy * pRegions; /* 40 8 */
};

// <00D2A220> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:8475
// member variables: 7
// struct size: 48
struct VkCopyImageToMemoryInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkHostImageCopyFlags flags; /* 16 4 */
	VkImage srcImage; /* 24 8 */
	VkImageLayout srcImageLayout; /* 32 4 */
	uint32_t regionCount; /* 36 4 */
	const VkImageToMemoryCopy * pRegions; /* 40 8 */
};

// <00D2A2B7> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:8485
// member variables: 9
// struct size: 64
struct VkCopyImageToImageInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkHostImageCopyFlags flags; /* 16 4 */
	VkImage srcImage; /* 24 8 */
	VkImageLayout srcImageLayout; /* 32 4 */
	VkImage dstImage; /* 40 8 */
	VkImageLayout dstImageLayout; /* 48 4 */
	uint32_t regionCount; /* 52 4 */
	const VkImageCopy2 * pRegions; /* 56 8 */
};

// <00D2A368> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:8497
// member variables: 6
// struct size: 56
struct VkHostImageLayoutTransitionInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkImage image; /* 16 8 */
	VkImageLayout oldLayout; /* 24 4 */
	VkImageLayout newLayout; /* 28 4 */
	VkImageSubresourceRange subresourceRange; /* 32 20 */
};

// <00D2A3E9> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:8550
// member variables: 9
// struct size: 64
struct VkBindDescriptorSetsInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkShaderStageFlags stageFlags; /* 16 4 */
	VkPipelineLayout layout; /* 24 8 */
	uint32_t firstSet; /* 32 4 */
	uint32_t descriptorSetCount; /* 36 4 */
	const VkDescriptorSet * pDescriptorSets; /* 40 8 */
	uint32_t dynamicOffsetCount; /* 48 4 */
	const uint32_t * pDynamicOffsets; /* 56 8 */
};

// <00D2A49A> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:8562
// member variables: 7
// struct size: 48
struct VkPushConstantsInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkPipelineLayout layout; /* 16 8 */
	VkShaderStageFlags stageFlags; /* 24 4 */
	uint32_t offset; /* 28 4 */
	uint32_t size; /* 32 4 */
	const void * pValues; /* 40 8 */
};

// <00D2A52B> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:8572
// member variables: 7
// struct size: 48
struct VkPushDescriptorSetInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkShaderStageFlags stageFlags; /* 16 4 */
	VkPipelineLayout layout; /* 24 8 */
	uint32_t set; /* 32 4 */
	uint32_t descriptorWriteCount; /* 36 4 */
	const VkWriteDescriptorSet * pDescriptorWrites; /* 40 8 */
};

// <00D2A5BC> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:8582
// member variables: 6
// struct size: 48
struct VkPushDescriptorSetWithTemplateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkDescriptorUpdateTemplate descriptorUpdateTemplate; /* 16 8 */
	VkPipelineLayout layout; /* 24 8 */
	uint32_t set; /* 32 4 */
	const void * pData; /* 40 8 */
};

// <008E2C46> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:8597
// member variables: 3
// struct size: 24
struct VkPhysicalDevicePipelineRobustnessFeatures {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkBool32 pipelineRobustness; /* 16 4 */
};

// <00D2A63D> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:8673
// member variables: 7
// struct size: 40
struct VkRenderingAreaInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	uint32_t viewMask; /* 16 4 */
	uint32_t colorAttachmentCount; /* 20 4 */
	const VkFormat * pColorAttachmentFormats; /* 24 8 */
	VkFormat depthAttachmentFormat; /* 32 4 */
	VkFormat stencilAttachmentFormat; /* 36 4 */
};

// <00D2A6CE> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:8689
// member variables: 4
// struct size: 32
struct VkRenderingAttachmentLocationInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	uint32_t colorAttachmentCount; /* 16 4 */
	const uint32_t * pColorAttachmentLocations; /* 24 8 */
};

// <00D2A72F> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:8696
// member variables: 6
// struct size: 48
struct VkRenderingInputAttachmentIndexInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	uint32_t colorAttachmentCount; /* 16 4 */
	const uint32_t * pColorAttachmentInputIndices; /* 24 8 */
	const uint32_t * pDepthInputAttachmentIndex; /* 32 8 */
	const uint32_t * pStencilInputAttachmentIndex; /* 40 8 */
};

// <008E2E94> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:8886
// member variables: 10
// struct size: 52
struct VkSurfaceCapabilitiesKHR {
	uint32_t minImageCount; /* 0 4 */
	uint32_t maxImageCount; /* 4 4 */
	VkExtent2D currentExtent; /* 8 8 */
	VkExtent2D minImageExtent; /* 16 8 */
	VkExtent2D maxImageExtent; /* 24 8 */
	uint32_t maxImageArrayLayers; /* 32 4 */
	VkSurfaceTransformFlagsKHR supportedTransforms; /* 36 4 */
	VkSurfaceTransformFlagBitsKHR currentTransform; /* 40 4 */
	VkCompositeAlphaFlagsKHR supportedCompositeAlpha; /* 44 4 */
	VkImageUsageFlags supportedUsageFlags; /* 48 4 */
};

// <008E2F50> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:8899
// member variables: 2
// struct size: 8
struct VkSurfaceFormatKHR {
	VkFormat format; /* 0 4 */
	VkColorSpaceKHR colorSpace; /* 4 4 */
};

// <008E3100> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:8978
// member variables: 18
// struct size: 104
struct VkSwapchainCreateInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkSwapchainCreateFlagsKHR flags; /* 16 4 */
	VkSurfaceKHR surface; /* 24 8 */
	uint32_t minImageCount; /* 32 4 */
	VkFormat imageFormat; /* 36 4 */
	VkColorSpaceKHR imageColorSpace; /* 40 4 */
	VkExtent2D imageExtent; /* 44 8 */
	uint32_t imageArrayLayers; /* 52 4 */
	VkImageUsageFlags imageUsage; /* 56 4 */
	VkSharingMode imageSharingMode; /* 60 4 */
	uint32_t queueFamilyIndexCount; /* 64 4 */
	const uint32_t * pQueueFamilyIndices; /* 72 8 */
	VkSurfaceTransformFlagBitsKHR preTransform; /* 80 4 */
	VkCompositeAlphaFlagBitsKHR compositeAlpha; /* 84 4 */
	VkPresentModeKHR presentMode; /* 88 4 */
	VkBool32 clipped; /* 92 4 */
	VkSwapchainKHR oldSwapchain; /* 96 8 */
};

// <00B22DA2> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:8999
// member variables: 8
// struct size: 64
struct VkPresentInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	uint32_t waitSemaphoreCount; /* 16 4 */
	const VkSemaphore * pWaitSemaphores; /* 24 8 */
	uint32_t swapchainCount; /* 32 4 */
	const VkSwapchainKHR * pSwapchains; /* 40 8 */
	const uint32_t * pImageIndices; /* 48 8 */
	VkResult * pResults; /* 56 8 */
};

// <00D2B129> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:9023
// member variables: 7
// struct size: 56
struct VkAcquireNextImageInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkSwapchainKHR swapchain; /* 16 8 */
	uint64_t timeout; /* 24 8 */
	VkSemaphore semaphore; /* 32 8 */
	VkFence fence; /* 40 8 */
	uint32_t deviceMask; /* 48 4 */
};

// <00D2B1BA> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:9033
// member variables: 4
// struct size: 152
struct VkDeviceGroupPresentCapabilitiesKHR {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	uint32_t presentMask[32]; /* 16 128 */
	VkDeviceGroupPresentModeFlagsKHR modes; /* 144 4 */
};

// <00D2B488> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:9151
// member variables: 2
// struct size: 12
struct VkDisplayModeParametersKHR {
	VkExtent2D visibleRegion; /* 0 8 */
	uint32_t refreshRate; /* 8 4 */
};

// <00D2B4C4> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:9156
// member variables: 4
// struct size: 32
struct VkDisplayModeCreateInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkDisplayModeCreateFlagsKHR flags; /* 16 4 */
	VkDisplayModeParametersKHR parameters; /* 20 12 */
};

// <00D2B525> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:9163
// member variables: 2
// struct size: 24
struct VkDisplayModePropertiesKHR {
	VkDisplayModeKHR displayMode; /* 0 8 */
	VkDisplayModeParametersKHR parameters; /* 8 12 */
};

// <00D2B561> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:9168
// member variables: 9
// struct size: 68
struct VkDisplayPlaneCapabilitiesKHR {
	VkDisplayPlaneAlphaFlagsKHR supportedAlpha; /* 0 4 */
	VkOffset2D minSrcPosition; /* 4 8 */
	VkOffset2D maxSrcPosition; /* 12 8 */
	VkExtent2D minSrcExtent; /* 20 8 */
	VkExtent2D maxSrcExtent; /* 28 8 */
	VkOffset2D minDstPosition; /* 36 8 */
	VkOffset2D maxDstPosition; /* 44 8 */
	VkExtent2D minDstExtent; /* 52 8 */
	VkExtent2D maxDstExtent; /* 60 8 */
};

// <00D2B60D> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:9180
// member variables: 2
// struct size: 16
struct VkDisplayPlanePropertiesKHR {
	VkDisplayKHR currentDisplay; /* 0 8 */
	uint32_t currentStackIndex; /* 8 4 */
};

// <00D2B649> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:9185
// member variables: 7
// struct size: 48
struct VkDisplayPropertiesKHR {
	VkDisplayKHR display; /* 0 8 */
	const char * displayName; /* 8 8 */
	VkExtent2D physicalDimensions; /* 16 8 */
	VkExtent2D physicalResolution; /* 24 8 */
	VkSurfaceTransformFlagsKHR supportedTransforms; /* 32 4 */
	VkBool32 planeReorderPossible; /* 36 4 */
	VkBool32 persistentContent; /* 40 4 */
};

// <00D2B6D5> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:9195
// member variables: 10
// struct size: 64
struct VkDisplaySurfaceCreateInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkDisplaySurfaceCreateFlagsKHR flags; /* 16 4 */
	VkDisplayModeKHR displayMode; /* 24 8 */
	uint32_t planeIndex; /* 32 4 */
	uint32_t planeStackIndex; /* 36 4 */
	VkSurfaceTransformFlagBitsKHR transform; /* 40 4 */
	float globalAlpha; /* 44 4 */
	VkDisplayPlaneAlphaFlagBitsKHR alphaMode; /* 48 4 */
	VkExtent2D imageExtent; /* 52 8 */
};

// <00D2BA51> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:9398
// member variables: 6
// struct size: 32
struct VkVideoProfileInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkVideoCodecOperationFlagBitsKHR videoCodecOperation; /* 16 4 */
	VkVideoChromaSubsamplingFlagsKHR chromaSubsampling; /* 20 4 */
	VkVideoComponentBitDepthFlagsKHR lumaBitDepth; /* 24 4 */
	VkVideoComponentBitDepthFlagsKHR chromaBitDepth; /* 28 4 */
};

// <00D2BAD8> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:9414
// member variables: 11
// struct size: 336
struct VkVideoCapabilitiesKHR {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkVideoCapabilityFlagsKHR flags; /* 16 4 */
	VkDeviceSize minBitstreamBufferOffsetAlignment; /* 24 8 */
	VkDeviceSize minBitstreamBufferSizeAlignment; /* 32 8 */
	VkExtent2D pictureAccessGranularity; /* 40 8 */
	VkExtent2D minCodedExtent; /* 48 8 */
	VkExtent2D maxCodedExtent; /* 56 8 */
	uint32_t maxDpbSlots; /* 64 4 */
	uint32_t maxActiveReferencePictures; /* 68 4 */
	VkExtensionProperties stdHeaderVersion; /* 72 260 */
};

// <00D2BBA5> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:9428
// member variables: 3
// struct size: 24
struct VkPhysicalDeviceVideoFormatInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkImageUsageFlags imageUsage; /* 16 4 */
};

// <00D2BBF6> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:9434
// member variables: 8
// struct size: 56
struct VkVideoFormatPropertiesKHR {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkFormat format; /* 16 4 */
	VkComponentMapping componentMapping; /* 20 16 */
	VkImageCreateFlags imageCreateFlags; /* 36 4 */
	VkImageType imageType; /* 40 4 */
	VkImageTiling imageTiling; /* 44 4 */
	VkImageUsageFlags imageUsageFlags; /* 48 4 */
};

// <00D2BC92> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:9445
// member variables: 6
// struct size: 48
struct VkVideoPictureResourceInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkOffset2D codedOffset; /* 16 8 */
	VkExtent2D codedExtent; /* 24 8 */
	uint32_t baseArrayLayer; /* 32 4 */
	VkImageView imageViewBinding; /* 40 8 */
};

// <00D2BD13> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:9454
// member variables: 4
// struct size: 32
struct VkVideoReferenceSlotInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	int32_t slotIndex; /* 16 4 */
	const VkVideoPictureResourceInfoKHR * pPictureResource; /* 24 8 */
};

// <00D2BD7A> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:9461
// member variables: 4
// struct size: 48
struct VkVideoSessionMemoryRequirementsKHR {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	uint32_t memoryBindIndex; /* 16 4 */
	VkMemoryRequirements memoryRequirements; /* 24 24 */
};

// <00D2BDD6> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:9468
// member variables: 6
// struct size: 48
struct VkBindVideoSessionMemoryInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	uint32_t memoryBindIndex; /* 16 4 */
	VkDeviceMemory memory; /* 24 8 */
	VkDeviceSize memoryOffset; /* 32 8 */
	VkDeviceSize memorySize; /* 40 8 */
};

// <00D2BE57> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:9477
// member variables: 11
// struct size: 64
struct VkVideoSessionCreateInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	uint32_t queueFamilyIndex; /* 16 4 */
	VkVideoSessionCreateFlagsKHR flags; /* 20 4 */
	const VkVideoProfileInfoKHR * pVideoProfile; /* 24 8 */
	VkFormat pictureFormat; /* 32 4 */
	VkExtent2D maxCodedExtent; /* 36 8 */
	VkFormat referencePictureFormat; /* 44 4 */
	uint32_t maxDpbSlots; /* 48 4 */
	uint32_t maxActiveReferencePictures; /* 52 4 */
	const VkExtensionProperties * pStdHeaderVersion; /* 56 8 */
};

// <00D2BF2E> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:9491
// member variables: 5
// struct size: 40
struct VkVideoSessionParametersCreateInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkVideoSessionParametersCreateFlagsKHR flags; /* 16 4 */
	VkVideoSessionParametersKHR videoSessionParametersTemplate; /* 24 8 */
	VkVideoSessionKHR videoSession; /* 32 8 */
};

// <00D2BF9F> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:9499
// member variables: 3
// struct size: 24
struct VkVideoSessionParametersUpdateInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	uint32_t updateSequenceCount; /* 16 4 */
};

// <00D2BFF0> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:9505
// member variables: 7
// struct size: 56
struct VkVideoBeginCodingInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkVideoBeginCodingFlagsKHR flags; /* 16 4 */
	VkVideoSessionKHR videoSession; /* 24 8 */
	VkVideoSessionParametersKHR videoSessionParameters; /* 32 8 */
	uint32_t referenceSlotCount; /* 40 4 */
	const VkVideoReferenceSlotInfoKHR * pReferenceSlots; /* 48 8 */
};

// <00D2C087> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:9515
// member variables: 3
// struct size: 24
struct VkVideoEndCodingInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkVideoEndCodingFlagsKHR flags; /* 16 4 */
};

// <00D2C0D8> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:9521
// member variables: 3
// struct size: 24
struct VkVideoCodingControlInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkVideoCodingControlFlagsKHR flags; /* 16 4 */
};

// <00D2C38A> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:9662
// member variables: 10
// struct size: 120
struct VkVideoDecodeInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkVideoDecodeFlagsKHR flags; /* 16 4 */
	VkBuffer srcBuffer; /* 24 8 */
	VkDeviceSize srcBufferOffset; /* 32 8 */
	VkDeviceSize srcBufferRange; /* 40 8 */
	VkVideoPictureResourceInfoKHR dstPictureResource; /* 48 48 */
	const VkVideoReferenceSlotInfoKHR * pSetupReferenceSlot; /* 96 8 */
	uint32_t referenceSlotCount; /* 104 4 */
	const VkVideoReferenceSlotInfoKHR * pReferenceSlots; /* 112 8 */
};

// <00D2C547> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:10470
// member variables: 3
// struct size: 24
struct VkMemoryFdPropertiesKHR {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	uint32_t memoryTypeBits; /* 16 4 */
};

// <00D2C593> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:10476
// member variables: 4
// struct size: 32
struct VkMemoryGetFdInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkDeviceMemory memory; /* 16 8 */
	VkExternalMemoryHandleTypeFlagBits handleType; /* 24 4 */
};

// <00D2C66A> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:10548
// member variables: 6
// struct size: 40
struct VkImportSemaphoreFdInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkSemaphore semaphore; /* 16 8 */
	VkSemaphoreImportFlags flags; /* 24 4 */
	VkExternalSemaphoreHandleTypeFlagBits handleType; /* 28 4 */
	int fd; /* 32 4 */
};

// <00D2C6EA> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:10557
// member variables: 4
// struct size: 32
struct VkSemaphoreGetFdInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkSemaphore semaphore; /* 16 8 */
	VkExternalSemaphoreHandleTypeFlagBits handleType; /* 24 4 */
};

// <00D2C853> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:10833
// member variables: 6
// struct size: 40
struct VkImportFenceFdInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkFence fence; /* 16 8 */
	VkFenceImportFlags flags; /* 24 4 */
	VkExternalFenceHandleTypeFlagBits handleType; /* 28 4 */
	int fd; /* 32 4 */
};

// <00D2C8D3> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:10842
// member variables: 4
// struct size: 32
struct VkFenceGetFdInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkFence fence; /* 16 8 */
	VkExternalFenceHandleTypeFlagBits handleType; /* 24 4 */
};

// <00D2CAB5> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:10939
// member variables: 6
// struct size: 48
struct VkPerformanceCounterKHR {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkPerformanceCounterUnitKHR unit; /* 16 4 */
	VkPerformanceCounterScopeKHR scope; /* 20 4 */
	VkPerformanceCounterStorageKHR storage; /* 24 4 */
	uint8_t uuid[16]; /* 28 16 */
};

// <00D2CB31> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:10948
// member variables: 6
// struct size: 792
struct VkPerformanceCounterDescriptionKHR {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkPerformanceCounterDescriptionFlagsKHR flags; /* 16 4 */
	char name[256]; /* 20 256 */
	char category[256]; /* 276 256 */
	char description[256]; /* 532 256 */
};

// <00D2CBB0> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:10957
// member variables: 5
// struct size: 32
struct VkQueryPoolPerformanceCreateInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	uint32_t queueFamilyIndex; /* 16 4 */
	uint32_t counterIndexCount; /* 20 4 */
	const uint32_t * pCounterIndices; /* 24 8 */
};

// <00D2CC21> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:10974
// member variables: 4
// struct size: 32
struct VkAcquireProfilingLockInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkAcquireProfilingLockFlagsKHR flags; /* 16 4 */
	uint64_t timeout; /* 24 8 */
};

// <00D2CD3D> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:11050
// member variables: 3
// struct size: 24
struct VkPhysicalDeviceSurfaceInfo2KHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkSurfaceKHR surface; /* 16 8 */
};

// <00D2CD8E> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:11056
// member variables: 3
// struct size: 72
struct VkSurfaceCapabilities2KHR {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkSurfaceCapabilitiesKHR surfaceCapabilities; /* 16 52 */
};

// <00D2CDDA> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:11062
// member variables: 3
// struct size: 24
struct VkSurfaceFormat2KHR {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkSurfaceFormatKHR surfaceFormat; /* 16 8 */
};

// <00D2CE95> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:11103
// member variables: 3
// struct size: 64
struct VkDisplayProperties2KHR {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkDisplayPropertiesKHR displayProperties; /* 16 48 */
};

// <00D2CEE1> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:11109
// member variables: 3
// struct size: 32
struct VkDisplayPlaneProperties2KHR {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkDisplayPlanePropertiesKHR displayPlaneProperties; /* 16 16 */
};

// <00D2CF2D> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:11115
// member variables: 3
// struct size: 40
struct VkDisplayModeProperties2KHR {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkDisplayModePropertiesKHR displayModeProperties; /* 16 24 */
};

// <00D2CF79> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:11121
// member variables: 4
// struct size: 32
struct VkDisplayPlaneInfo2KHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkDisplayModeKHR mode; /* 16 8 */
	uint32_t planeIndex; /* 24 4 */
};

// <00D2CFDA> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:11128
// member variables: 3
// struct size: 88
struct VkDisplayPlaneCapabilities2KHR {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkDisplayPlaneCapabilitiesKHR capabilities; /* 16 68 */
};

// <008E338A> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:11415
// member variables: 4
// struct size: 24
struct VkPhysicalDeviceShaderClockFeaturesKHR {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkBool32 shaderSubgroupClock; /* 16 4 */
	VkBool32 shaderDeviceClock; /* 20 4 */
};

// <00D2D1FC> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:11658
// member variables: 4
// struct size: 32
struct VkPhysicalDeviceFragmentShadingRateKHR {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkSampleCountFlags sampleCounts; /* 16 4 */
	VkExtent2D fragmentSize; /* 20 8 */
};

// <00693000> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:11897
// member variables: 3
// struct size: 24
struct VkPipelineInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkPipeline pipeline; /* 16 8 */
};

// <00693051> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:11903
// member variables: 6
// struct size: 536
struct VkPipelineExecutablePropertiesKHR {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkShaderStageFlags stages; /* 16 4 */
	char name[256]; /* 20 256 */
	char description[256]; /* 276 256 */
	uint32_t subgroupSize; /* 532 4 */
};

// <006930D1> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:11912
// member variables: 4
// struct size: 32
struct VkPipelineExecutableInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkPipeline pipeline; /* 16 8 */
	uint32_t executableIndex; /* 24 4 */
};

// <00693132> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:11919
union VkPipelineExecutableStatisticValueKHR {
	VkBool32 b32; /* 0 4 */
	int64_t i64; /* 0 8 */
	uint64_t u64; /* 0 8 */
	double f64; /* 0 8 */
};

// <00693187> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:11926
// member variables: 6
// struct size: 544
struct VkPipelineExecutableStatisticKHR {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	char name[256]; /* 16 256 */
	char description[256]; /* 272 256 */
	VkPipelineExecutableStatisticFormatKHR format; /* 528 4 */
	VkPipelineExecutableStatisticValueKHR value; /* 536 8 */
};

// <00D2D641> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:11935
// member variables: 7
// struct size: 552
struct VkPipelineExecutableInternalRepresentationKHR {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	char name[256]; /* 16 256 */
	char description[256]; /* 272 256 */
	VkBool32 isText; /* 528 4 */
	size_t dataSize; /* 536 8 */
	void * pData; /* 544 8 */
};

// <005F1F3A> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:12021
// member variables: 4
// struct size: 32
struct VkPipelineLibraryCreateInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	uint32_t libraryCount; /* 16 4 */
	const VkPipeline * pLibraries; /* 24 8 */
};

// <00D2D853> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:12122
// member variables: 11
// struct size: 128
struct VkVideoEncodeInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkVideoEncodeFlagsKHR flags; /* 16 4 */
	VkBuffer dstBuffer; /* 24 8 */
	VkDeviceSize dstBufferOffset; /* 32 8 */
	VkDeviceSize dstBufferRange; /* 40 8 */
	VkVideoPictureResourceInfoKHR srcPictureResource; /* 48 48 */
	const VkVideoReferenceSlotInfoKHR * pSetupReferenceSlot; /* 96 8 */
	uint32_t referenceSlotCount; /* 104 4 */
	const VkVideoReferenceSlotInfoKHR * pReferenceSlots; /* 112 8 */
	uint32_t precedingExternallyEncodedBytes; /* 120 4 */
};

// <00D2D924> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:12182
// member variables: 4
// struct size: 32
struct VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	const VkVideoProfileInfoKHR * pVideoProfile; /* 16 8 */
	uint32_t qualityLevel; /* 24 4 */
};

// <00D2D985> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:12189
// member variables: 4
// struct size: 24
struct VkVideoEncodeQualityLevelPropertiesKHR {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkVideoEncodeRateControlModeFlagBitsKHR preferredRateControlMode; /* 16 4 */
	uint32_t preferredRateControlLayerCount; /* 20 4 */
};

// <00D2D9E1> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:12202
// member variables: 3
// struct size: 24
struct VkVideoEncodeSessionParametersGetInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkVideoSessionParametersKHR videoSessionParameters; /* 16 8 */
};

// <00D2DA32> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:12208
// member variables: 3
// struct size: 24
struct VkVideoEncodeSessionParametersFeedbackInfoKHR {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkBool32 hasOverrides; /* 16 4 */
};

// <00D2DC54> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:12751
// member variables: 4
// struct size: 56
struct VkPipelineBinaryKeyKHR {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	uint32_t keySize; /* 16 4 */
	uint8_t key[32]; /* 20 32 */
};

// <00D2DCB5> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:12758
// member variables: 2
// struct size: 16
struct VkPipelineBinaryDataKHR {
	size_t dataSize; /* 0 8 */
	void * pData; /* 8 8 */
};

// <00D2DCF6> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:12763
// member variables: 3
// struct size: 24
struct VkPipelineBinaryKeysAndDataKHR {
	uint32_t binaryCount; /* 0 4 */
	const VkPipelineBinaryKeyKHR * pPipelineBinaryKeys; /* 8 8 */
	const VkPipelineBinaryDataKHR * pPipelineBinaryData; /* 16 8 */
};

// <00D2DD53> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:12769
// member variables: 2
// struct size: 16
struct VkPipelineCreateInfoKHR {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
};

// <00D2DD94> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:12774
// member variables: 5
// struct size: 40
struct VkPipelineBinaryCreateInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	const VkPipelineBinaryKeysAndDataKHR * pKeysAndDataInfo; /* 16 8 */
	VkPipeline pipeline; /* 24 8 */
	const VkPipelineCreateInfoKHR * pPipelineCreateInfo; /* 32 8 */
};

// <00D2DE11> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:12789
// member variables: 3
// struct size: 24
struct VkReleaseCapturedPipelineDataInfoKHR {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkPipeline pipeline; /* 16 8 */
};

// <00D2DE62> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:12795
// member variables: 3
// struct size: 24
struct VkPipelineBinaryDataInfoKHR {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkPipelineBinaryKHR pipelineBinary; /* 16 8 */
};

// <00D2DEB3> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:12801
// member variables: 4
// struct size: 32
struct VkPipelineBinaryHandlesInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	uint32_t pipelineBinaryCount; /* 16 4 */
	VkPipelineBinaryKHR * pPipelineBinaries; /* 24 8 */
};

// <00D2E01A> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:12945
// member variables: 5
// struct size: 40
struct VkReleaseSwapchainImagesInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkSwapchainKHR swapchain; /* 16 8 */
	uint32_t imageIndexCount; /* 24 4 */
	const uint32_t * pImageIndices; /* 32 8 */
};

// <00D2E1F2> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:13025
// member variables: 11
// struct size: 56
struct VkCooperativeMatrixPropertiesKHR {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	uint32_t MSize; /* 16 4 */
	uint32_t NSize; /* 20 4 */
	uint32_t KSize; /* 24 4 */
	VkComponentTypeKHR AType; /* 28 4 */
	VkComponentTypeKHR BType; /* 32 4 */
	VkComponentTypeKHR CType; /* 36 4 */
	VkComponentTypeKHR ResultType; /* 40 4 */
	VkBool32 saturatingAccumulation; /* 44 4 */
	VkScopeKHR scope; /* 48 4 */
};

// <00D2E369> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:13477
// member variables: 3
// struct size: 24
struct VkCalibratedTimestampInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkTimeDomainKHR timeDomain; /* 16 4 */
};

// <00D2E428> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:13531
// member variables: 8
// struct size: 56
struct VkSetDescriptorBufferOffsetsInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkShaderStageFlags stageFlags; /* 16 4 */
	VkPipelineLayout layout; /* 24 8 */
	uint32_t firstSet; /* 32 4 */
	uint32_t setCount; /* 36 4 */
	const uint32_t * pBufferIndices; /* 40 8 */
	const VkDeviceSize * pOffsets; /* 48 8 */
};

// <00D2E4C9> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:13542
// member variables: 5
// struct size: 40
struct VkBindDescriptorBufferEmbeddedSamplersInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkShaderStageFlags stageFlags; /* 16 4 */
	VkPipelineLayout layout; /* 24 8 */
	uint32_t set; /* 32 4 */
};

// <008E3529> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:13988
// member variables: 5
// struct size: 32
struct VkPhysicalDeviceRobustness2FeaturesKHR {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkBool32 robustBufferAccess2; /* 16 4 */
	VkBool32 robustImageAccess2; /* 20 4 */
	VkBool32 nullDescriptor; /* 24 4 */
};

// <00D2E7AA> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:14156
// member variables: 5
// struct size: 40
struct VkDebugReportCallbackCreateInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkDebugReportFlagsEXT flags; /* 16 4 */
	PFN_vkDebugReportCallbackEXT pfnCallback; /* 24 8 */
	void * pUserData; /* 32 8 */
};

// <00D2E8C1> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:14250
// member variables: 5
// struct size: 40
struct VkDebugMarkerObjectNameInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkDebugReportObjectTypeEXT objectType; /* 16 4 */
	uint64_t object; /* 24 8 */
	const char * pObjectName; /* 32 8 */
};

// <00D2E932> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:14258
// member variables: 7
// struct size: 56
struct VkDebugMarkerObjectTagInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkDebugReportObjectTypeEXT objectType; /* 16 4 */
	uint64_t object; /* 24 8 */
	uint64_t tagName; /* 32 8 */
	size_t tagSize; /* 40 8 */
	const void * pTag; /* 48 8 */
};

// <008E3595> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:14268
// member variables: 4
// struct size: 40
struct VkDebugMarkerMarkerInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	const char * pMarkerName; /* 16 8 */
	float color[4]; /* 24 16 */
};

// <00D2EBBF> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:14450
// member variables: 4
// struct size: 32
struct VkCuModuleCreateInfoNVX {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	size_t dataSize; /* 16 8 */
	const void * pData; /* 24 8 */
};

// <00D2EC20> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:14463
// member variables: 4
// struct size: 32
struct VkCuFunctionCreateInfoNVX {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkCuModuleNVX module; /* 16 8 */
	const char * pName; /* 24 8 */
};

// <00D2EC81> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:14470
// member variables: 14
// struct size: 88
struct VkCuLaunchInfoNVX {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkCuFunctionNVX function; /* 16 8 */
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

// <00D2EE7B> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:14536
// member variables: 5
// struct size: 40
struct VkImageViewHandleInfoNVX {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkImageView imageView; /* 16 8 */
	VkDescriptorType descriptorType; /* 24 4 */
	VkSampler sampler; /* 32 8 */
};

// <00D2EEEC> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:14544
// member variables: 4
// struct size: 32
struct VkImageViewAddressPropertiesNVX {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkDeviceAddress deviceAddress; /* 16 8 */
	VkDeviceSize size; /* 24 8 */
};

// <00D2F079> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:14736
// member variables: 4
// struct size: 48
struct VkExternalImageFormatPropertiesNV {
	VkImageFormatProperties imageFormatProperties; /* 0 32 */
	VkExternalMemoryFeatureFlagsNV externalMemoryFeatures; /* 32 4 */
	VkExternalMemoryHandleTypeFlagsNV exportFromImportedHandleTypes; /* 36 4 */
	VkExternalMemoryHandleTypeFlagsNV compatibleHandleTypes; /* 40 4 */
};

// <00D2F12D> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:14861
// member variables: 5
// struct size: 40
struct VkConditionalRenderingBeginInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkBuffer buffer; /* 16 8 */
	VkDeviceSize offset; /* 24 8 */
	VkConditionalRenderingFlagsEXT flags; /* 32 4 */
};

// <00D2F1D4> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:14903
// member variables: 2
// struct size: 8
struct VkViewportWScalingNV {
	float xcoeff; /* 0 4 */
	float ycoeff; /* 4 4 */
};

// <00D2F2B2> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:14956
// member variables: 13
// struct size: 72
struct VkSurfaceCapabilities2EXT {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	uint32_t minImageCount; /* 16 4 */
	uint32_t maxImageCount; /* 20 4 */
	VkExtent2D currentExtent; /* 24 8 */
	VkExtent2D minImageExtent; /* 32 8 */
	VkExtent2D maxImageExtent; /* 40 8 */
	uint32_t maxImageArrayLayers; /* 48 4 */
	VkSurfaceTransformFlagsKHR supportedTransforms; /* 52 4 */
	VkSurfaceTransformFlagBitsKHR currentTransform; /* 56 4 */
	VkCompositeAlphaFlagsKHR supportedCompositeAlpha; /* 60 4 */
	VkImageUsageFlags supportedUsageFlags; /* 64 4 */
	VkSurfaceCounterFlagsEXT supportedSurfaceCounters; /* 68 4 */
};

// <00D2F46C> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:15005
// member variables: 3
// struct size: 24
struct VkDisplayPowerInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkDisplayPowerStateEXT powerState; /* 16 4 */
};

// <00D2F4BD> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:15011
// member variables: 3
// struct size: 24
struct VkDeviceEventInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkDeviceEventTypeEXT deviceEvent; /* 16 4 */
};

// <00D2F50E> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:15017
// member variables: 3
// struct size: 24
struct VkDisplayEventInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkDisplayEventTypeEXT displayEvent; /* 16 4 */
};

// <00D2F635> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:15073
// member variable: 1
// struct size: 8
struct VkRefreshCycleDurationGOOGLE {
	uint64_t refreshDuration; /* 0 8 */
};

// <00D2F661> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:15077
// member variables: 5
// struct size: 40
struct VkPastPresentationTimingGOOGLE {
	uint32_t presentID; /* 0 4 */
	uint64_t desiredPresentTime; /* 8 8 */
	uint64_t actualPresentTime; /* 16 8 */
	uint64_t earliestPresentTime; /* 24 8 */
	uint64_t presentMargin; /* 32 8 */
};

// <00B22E96> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:15085
// member variables: 2
// struct size: 16
struct VkPresentTimeGOOGLE {
	uint32_t presentID; /* 0 4 */
	uint64_t desiredPresentTime; /* 8 8 */
};

// <00B22ED7> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:15090
// member variables: 4
// struct size: 32
struct VkPresentTimesInfoGOOGLE {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	uint32_t swapchainCount; /* 16 4 */
	const VkPresentTimeGOOGLE * pTimes; /* 24 8 */
};

// <00D2F790> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:15176
// member variables: 4
// struct size: 16
struct VkViewportSwizzleNV {
	VkViewportCoordinateSwizzleNV x; /* 0 4 */
	VkViewportCoordinateSwizzleNV y; /* 4 4 */
	VkViewportCoordinateSwizzleNV z; /* 8 4 */
	VkViewportCoordinateSwizzleNV w; /* 12 4 */
};

// <00D2F89E> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:15312
// member variables: 2
// struct size: 8
struct VkXYColorEXT {
	float x; /* 0 4 */
	float y; /* 4 4 */
};

// <00D2F8D6> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:15317
// member variables: 10
// struct size: 64
struct VkHdrMetadataEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkXYColorEXT displayPrimaryRed; /* 16 8 */
	VkXYColorEXT displayPrimaryGreen; /* 24 8 */
	VkXYColorEXT displayPrimaryBlue; /* 32 8 */
	VkXYColorEXT whitePoint; /* 40 8 */
	float maxLuminance; /* 48 4 */
	float minLuminance; /* 52 4 */
	float maxContentLightLevel; /* 56 4 */
	float maxFrameAverageLightLevel; /* 60 4 */
};

// <008AE438> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:15393
// member variables: 4
// struct size: 40
struct VkDebugUtilsLabelEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	const char * pLabelName; /* 16 8 */
	float color[4]; /* 24 16 */
};

// <005519CB> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:15400
// member variables: 5
// struct size: 40
struct VkDebugUtilsObjectNameInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkObjectType objectType; /* 16 4 */
	uint64_t objectHandle; /* 24 8 */
	const char * pObjectName; /* 32 8 */
};

// <008AE50A> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:15408
// member variables: 12
// struct size: 96
struct VkDebugUtilsMessengerCallbackDataEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkDebugUtilsMessengerCallbackDataFlagsEXT flags; /* 16 4 */
	const char * pMessageIdName; /* 24 8 */
	int32_t messageIdNumber; /* 32 4 */
	const char * pMessage; /* 40 8 */
	uint32_t queueLabelCount; /* 48 4 */
	const VkDebugUtilsLabelEXT * pQueueLabels; /* 56 8 */
	uint32_t cmdBufLabelCount; /* 64 4 */
	const VkDebugUtilsLabelEXT * pCmdBufLabels; /* 72 8 */
	uint32_t objectCount; /* 80 4 */
	const VkDebugUtilsObjectNameInfoEXT * pObjects; /* 88 8 */
};

// <008AE62E> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:15429
// member variables: 7
// struct size: 48
struct VkDebugUtilsMessengerCreateInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkDebugUtilsMessengerCreateFlagsEXT flags; /* 16 4 */
	VkDebugUtilsMessageSeverityFlagsEXT messageSeverity; /* 20 4 */
	VkDebugUtilsMessageTypeFlagsEXT messageType; /* 24 4 */
	PFN_vkDebugUtilsMessengerCallbackEXT pfnUserCallback; /* 32 8 */
	void * pUserData; /* 40 8 */
};

// <00D2FCE2> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:15439
// member variables: 7
// struct size: 56
struct VkDebugUtilsObjectTagInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkObjectType objectType; /* 16 4 */
	uint64_t objectHandle; /* 24 8 */
	uint64_t tagName; /* 32 8 */
	size_t tagSize; /* 40 8 */
	const void * pTag; /* 48 8 */
};

// <00D2FF04> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:15969
// member variables: 2
// struct size: 8
struct VkSampleLocationEXT {
	float x; /* 0 4 */
	float y; /* 4 4 */
};

// <00D2FF41> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:15974
// member variables: 6
// struct size: 40
struct VkSampleLocationsInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkSampleCountFlagBits sampleLocationsPerPixel; /* 16 4 */
	VkExtent2D sampleLocationGridSize; /* 20 8 */
	uint32_t sampleLocationsCount; /* 28 4 */
	const VkSampleLocationEXT * pSampleLocations; /* 32 8 */
};

// <00D2FFC8> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:16019
// member variables: 3
// struct size: 24
struct VkMultisamplePropertiesEXT {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkExtent2D maxSampleLocationGridSize; /* 16 8 */
};

// <00D300E9> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:16196
// member variables: 3
// struct size: 24
struct VkImageDrmFormatModifierPropertiesEXT {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	uint64_t drmFormatModifier; /* 16 8 */
};

// <00B9AAC0> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:16238
// member variables: 5
// struct size: 40
struct VkValidationCacheCreateInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkValidationCacheCreateFlagsEXT flags; /* 16 4 */
	size_t initialDataSize; /* 24 8 */
	const void * pInitialData; /* 32 8 */
};

// <00B9AB31> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:16246
// member variables: 3
// struct size: 24
struct VkShaderModuleValidationCacheCreateInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkValidationCacheEXT validationCache; /* 16 8 */
};

// <00D30389> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:16345
// member variables: 2
// struct size: 16
struct VkShadingRatePaletteNV {
	uint32_t shadingRatePaletteEntryCount; /* 0 4 */
	const VkShadingRatePaletteEntryNV * pShadingRatePaletteEntries; /* 8 8 */
};

// <00D303D6> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:16373
// member variables: 3
// struct size: 12
struct VkCoarseSampleLocationNV {
	uint32_t pixelX; /* 0 4 */
	uint32_t pixelY; /* 4 4 */
	uint32_t sample; /* 8 4 */
};

// <00D30427> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:16379
// member variables: 4
// struct size: 24
struct VkCoarseSampleOrderCustomNV {
	VkShadingRatePaletteEntryNV shadingRate; /* 0 4 */
	uint32_t sampleCount; /* 4 4 */
	uint32_t sampleLocationCount; /* 8 4 */
	const VkCoarseSampleLocationNV * pSampleLocations; /* 16 8 */
};

// <00D306EB> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:16566
// member variables: 7
// struct size: 40
struct VkRayTracingShaderGroupCreateInfoNV {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkRayTracingShaderGroupTypeKHR type; /* 16 4 */
	uint32_t generalShader; /* 20 4 */
	uint32_t closestHitShader; /* 24 4 */
	uint32_t anyHitShader; /* 28 4 */
	uint32_t intersectionShader; /* 32 4 */
};

// <00D3077C> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:16576
// member variables: 11
// struct size: 80
struct VkRayTracingPipelineCreateInfoNV {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkPipelineCreateFlags flags; /* 16 4 */
	uint32_t stageCount; /* 20 4 */
	const VkPipelineShaderStageCreateInfo * pStages; /* 24 8 */
	uint32_t groupCount; /* 32 4 */
	const VkRayTracingShaderGroupCreateInfoNV * pGroups; /* 40 8 */
	uint32_t maxRecursionDepth; /* 48 4 */
	VkPipelineLayout layout; /* 56 8 */
	VkPipeline basePipelineHandle; /* 64 8 */
	int32_t basePipelineIndex; /* 72 4 */
};

// <00D30853> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:16590
// member variables: 13
// struct size: 96
struct VkGeometryTrianglesNV {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkBuffer vertexData; /* 16 8 */
	VkDeviceSize vertexOffset; /* 24 8 */
	uint32_t vertexCount; /* 32 4 */
	VkDeviceSize vertexStride; /* 40 8 */
	VkFormat vertexFormat; /* 48 4 */
	VkBuffer indexData; /* 56 8 */
	VkDeviceSize indexOffset; /* 64 8 */
	uint32_t indexCount; /* 72 4 */
	VkIndexType indexType; /* 76 4 */
	VkBuffer transformData; /* 80 8 */
	VkDeviceSize transformOffset; /* 88 8 */
};

// <00D3093F> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:16606
// member variables: 6
// struct size: 40
struct VkGeometryAABBNV {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkBuffer aabbData; /* 16 8 */
	uint32_t numAABBs; /* 24 4 */
	uint32_t stride; /* 28 4 */
	VkDeviceSize offset; /* 32 8 */
};

// <00D309BB> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:16615
// member variables: 2
// struct size: 136
struct VkGeometryDataNV {
	VkGeometryTrianglesNV triangles; /* 0 96 */
	VkGeometryAABBNV aabbs; /* 96 40 */
};

// <00D309F7> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:16620
// member variables: 5
// struct size: 168
struct VkGeometryNV {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkGeometryTypeKHR geometryType; /* 16 4 */
	VkGeometryDataNV geometry; /* 24 136 */
	VkGeometryFlagsKHR flags; /* 160 4 */
};

// <00D30A69> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:16628
// member variables: 7
// struct size: 40
struct VkAccelerationStructureInfoNV {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkAccelerationStructureTypeNV type; /* 16 4 */
	VkBuildAccelerationStructureFlagsNV flags; /* 20 4 */
	uint32_t instanceCount; /* 24 4 */
	uint32_t geometryCount; /* 28 4 */
	const VkGeometryNV * pGeometries; /* 32 8 */
};

// <00D30B00> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:16638
// member variables: 4
// struct size: 64
struct VkAccelerationStructureCreateInfoNV {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkDeviceSize compactedSize; /* 16 8 */
	VkAccelerationStructureInfoNV info; /* 24 40 */
};

// <00D30B61> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:16645
// member variables: 7
// struct size: 56
struct VkBindAccelerationStructureMemoryInfoNV {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkAccelerationStructureNV accelerationStructure; /* 16 8 */
	VkDeviceMemory memory; /* 24 8 */
	VkDeviceSize memoryOffset; /* 32 8 */
	uint32_t deviceIndexCount; /* 40 4 */
	const uint32_t * pDeviceIndices; /* 48 8 */
};

// <00D30BF8> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:16662
// member variables: 4
// struct size: 32
struct VkAccelerationStructureMemoryRequirementsInfoNV {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkAccelerationStructureMemoryRequirementsTypeNV type; /* 16 4 */
	VkAccelerationStructureNV accelerationStructure; /* 24 8 */
};

// <0075DED4> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:16682
// member variable: 1
// struct size: 48
struct VkTransformMatrixKHR {
	float matrix[3][4]; /* 0 48 */
};

// <0075DF16> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:16699
// member variables: 6
// struct size: 64
struct VkAccelerationStructureInstanceKHR {
	VkTransformMatrixKHR transform; /* 0 48 */
	uint32_t instanceCustomIndex:24; /* 48: 0 4 */
	uint32_t mask:8; /* 48:24 4 */
	uint32_t instanceShaderBindingTableRecordOffset:24; /* 52: 0 4 */
	VkGeometryInstanceFlagsKHR flags:8; /* 52:24 4 */
	uint64_t accelerationStructureReference; /* 56 8 */
};

// <00D30F1E> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:16927
// member variables: 3
// struct size: 24
struct VkMemoryHostPointerPropertiesEXT {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	uint32_t memoryTypeBits; /* 16 4 */
};

// <008E37CE> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:17063
// member variables: 3
// struct size: 24
struct VkDeviceMemoryOverallocationCreateInfoAMD {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkMemoryOverallocationBehaviorAMD overallocationBehavior; /* 16 4 */
};

// <00B22F59> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:17254
// member variables: 4
// struct size: 32
struct VkCheckpointDataNV {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkPipelineStageFlagBits stage; /* 16 4 */
	void * pCheckpointMarker; /* 24 8 */
};

// <00D310FD> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:17267
// member variables: 4
// struct size: 32
struct VkCheckpointData2NV {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkPipelineStageFlags2 stage; /* 16 8 */
	void * pCheckpointMarker; /* 24 8 */
};

// <00D312D5> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:17504
union VkPerformanceValueDataINTEL {
	uint32_t value32; /* 0 4 */
	uint64_t value64; /* 0 8 */
	float valueFloat; /* 0 4 */
	VkBool32 valueBool; /* 0 4 */
	const char * valueString; /* 0 8 */
};

// <00D31332> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:17512
// member variables: 2
// struct size: 16
struct VkPerformanceValueINTEL {
	VkPerformanceValueTypeINTEL type; /* 0 4 */
	VkPerformanceValueDataINTEL data; /* 8 8 */
};

// <00D3136E> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:17517
// member variables: 3
// struct size: 24
struct VkInitializePerformanceApiInfoINTEL {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	void * pUserData; /* 16 8 */
};

// <00D313BF> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:17531
// member variables: 3
// struct size: 24
struct VkPerformanceMarkerInfoINTEL {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	uint64_t marker; /* 16 8 */
};

// <00D31410> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:17537
// member variables: 3
// struct size: 24
struct VkPerformanceStreamMarkerInfoINTEL {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	uint32_t marker; /* 16 4 */
};

// <00D31461> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:17543
// member variables: 5
// struct size: 32
struct VkPerformanceOverrideInfoINTEL {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkPerformanceOverrideTypeINTEL type; /* 16 4 */
	VkBool32 enable; /* 20 4 */
	uint64_t parameter; /* 24 8 */
};

// <00D314D2> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:17551
// member variables: 3
// struct size: 24
struct VkPerformanceConfigurationAcquireInfoINTEL {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkPerformanceConfigurationTypeINTEL type; /* 16 4 */
};

// <008AE751> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:17786
// member variables: 4
// struct size: 272
struct VkPhysicalDeviceMemoryBudgetPropertiesEXT {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkDeviceSize heapBudget[16]; /* 16 128 */
	VkDeviceSize heapUsage[16]; /* 144 128 */
};

// <008E3841> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:17799
// member variables: 3
// struct size: 24
struct VkPhysicalDeviceMemoryPriorityFeaturesEXT {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkBool32 memoryPriority; /* 16 4 */
};

// <00551A96> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:17805
// member variables: 3
// struct size: 24
struct VkMemoryPriorityAllocateInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	float priority; /* 16 4 */
};

// <008AE875> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:17913
// member variables: 6
// struct size: 48
struct VkValidationFeaturesEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	uint32_t enabledValidationFeatureCount; /* 16 4 */
	const VkValidationFeatureEnableEXT * pEnabledValidationFeatures; /* 24 8 */
	uint32_t disabledValidationFeatureCount; /* 32 4 */
	const VkValidationFeatureDisableEXT * pDisabledValidationFeatures; /* 40 8 */
};

// <00D316F8> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:17932
// member variables: 10
// struct size: 48
struct VkCooperativeMatrixPropertiesNV {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	uint32_t MSize; /* 16 4 */
	uint32_t NSize; /* 20 4 */
	uint32_t KSize; /* 24 4 */
	VkComponentTypeNV AType; /* 28 4 */
	VkComponentTypeNV BType; /* 32 4 */
	VkComponentTypeNV CType; /* 36 4 */
	VkComponentTypeNV DType; /* 40 4 */
	VkScopeNV scope; /* 44 4 */
};

// <00D3181C> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:17994
// member variables: 6
// struct size: 32
struct VkFramebufferMixedSamplesCombinationNV {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkCoverageReductionModeNV coverageReductionMode; /* 16 4 */
	VkSampleCountFlagBits rasterizationSamples; /* 20 4 */
	VkSampleCountFlags depthStencilSamples; /* 24 4 */
	VkSampleCountFlags colorSamples; /* 28 4 */
};

// <00D3190D> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:18078
// member variables: 3
// struct size: 24
struct VkHeadlessSurfaceCreateInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkHeadlessSurfaceCreateFlagsEXT flags; /* 16 4 */
};

// <008E388D> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:18175
// member variables: 3
// struct size: 24
struct VkPhysicalDeviceExtendedDynamicStateFeaturesEXT {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkBool32 extendedDynamicState; /* 16 4 */
};

// <00D31B57> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:18551
// member variables: 2
// struct size: 16
struct VkIndirectCommandsStreamNV {
	VkBuffer buffer; /* 0 8 */
	VkDeviceSize offset; /* 8 8 */
};

// <00D31B98> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:18556
// member variables: 15
// struct size: 88
struct VkIndirectCommandsLayoutTokenNV {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkIndirectCommandsTokenTypeNV tokenType; /* 16 4 */
	uint32_t stream; /* 20 4 */
	uint32_t offset; /* 24 4 */
	uint32_t vertexBindingUnit; /* 28 4 */
	VkBool32 vertexDynamicStride; /* 32 4 */
	VkPipelineLayout pushconstantPipelineLayout; /* 40 8 */
	VkShaderStageFlags pushconstantShaderStageFlags; /* 48 4 */
	uint32_t pushconstantOffset; /* 52 4 */
	uint32_t pushconstantSize; /* 56 4 */
	VkIndirectStateFlagsNV indirectStateFlags; /* 60 4 */
	uint32_t indexTypeCount; /* 64 4 */
	const VkIndexType * pIndexTypes; /* 72 8 */
	const uint32_t * pIndexTypeValues; /* 80 8 */
};

// <00D31CAF> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:18574
// member variables: 8
// struct size: 56
struct VkIndirectCommandsLayoutCreateInfoNV {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkIndirectCommandsLayoutUsageFlagsNV flags; /* 16 4 */
	VkPipelineBindPoint pipelineBindPoint; /* 20 4 */
	uint32_t tokenCount; /* 24 4 */
	const VkIndirectCommandsLayoutTokenNV * pTokens; /* 32 8 */
	uint32_t streamCount; /* 40 4 */
	const uint32_t * pStreamStrides; /* 48 8 */
};

// <00D31D56> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:18585
// member variables: 15
// struct size: 120
struct VkGeneratedCommandsInfoNV {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkPipelineBindPoint pipelineBindPoint; /* 16 4 */
	VkPipeline pipeline; /* 24 8 */
	VkIndirectCommandsLayoutNV indirectCommandsLayout; /* 32 8 */
	uint32_t streamCount; /* 40 4 */
	const VkIndirectCommandsStreamNV * pStreams; /* 48 8 */
	uint32_t sequencesCount; /* 56 4 */
	VkBuffer preprocessBuffer; /* 64 8 */
	VkDeviceSize preprocessOffset; /* 72 8 */
	VkDeviceSize preprocessSize; /* 80 8 */
	VkBuffer sequencesCountBuffer; /* 88 8 */
	VkDeviceSize sequencesCountOffset; /* 96 8 */
	VkBuffer sequencesIndexBuffer; /* 104 8 */
	VkDeviceSize sequencesIndexOffset; /* 112 8 */
};

// <00D31E6D> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:18603
// member variables: 6
// struct size: 48
struct VkGeneratedCommandsMemoryRequirementsInfoNV {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkPipelineBindPoint pipelineBindPoint; /* 16 4 */
	VkPipeline pipeline; /* 24 8 */
	VkIndirectCommandsLayoutNV indirectCommandsLayout; /* 32 8 */
	uint32_t maxSequencesCount; /* 40 4 */
};

// <00D31FFF> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:18738
// member variables: 5
// struct size: 32
struct VkDepthBiasInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	float depthBiasConstantFactor; /* 16 4 */
	float depthBiasClamp; /* 20 4 */
	float depthBiasSlopeFactor; /* 24 4 */
};

// <008E3935> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:18988
// member variables: 3
// struct size: 24
struct VkDeviceDiagnosticsConfigCreateInfoNV {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkDeviceDiagnosticsConfigFlagsNV flags; /* 16 4 */
};

// <00D32148> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:19158
// member variables: 5
// struct size: 40
struct VkDescriptorAddressInfoEXT {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkDeviceAddress address; /* 16 8 */
	VkDeviceSize range; /* 24 8 */
	VkFormat format; /* 32 4 */
};

// <00D321B9> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:19166
// member variables: 4
// struct size: 32
struct VkDescriptorBufferBindingInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkDeviceAddress address; /* 16 8 */
	VkBufferUsageFlags usage; /* 24 4 */
};

// <00D3221A> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:19179
union VkDescriptorDataEXT {
	const VkSampler * pSampler; /* 0 8 */
	const VkDescriptorImageInfo * pCombinedImageSampler; /* 0 8 */
	const VkDescriptorImageInfo * pInputAttachmentImage; /* 0 8 */
	const VkDescriptorImageInfo * pSampledImage; /* 0 8 */
	const VkDescriptorImageInfo * pStorageImage; /* 0 8 */
	const VkDescriptorAddressInfoEXT * pUniformTexelBuffer; /* 0 8 */
	const VkDescriptorAddressInfoEXT * pStorageTexelBuffer; /* 0 8 */
	const VkDescriptorAddressInfoEXT * pUniformBuffer; /* 0 8 */
	const VkDescriptorAddressInfoEXT * pStorageBuffer; /* 0 8 */
	VkDeviceAddress accelerationStructure; /* 0 8 */
};

// <00D322BE> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:19192
// member variables: 4
// struct size: 32
struct VkDescriptorGetInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkDescriptorType type; /* 16 4 */
	VkDescriptorDataEXT data; /* 24 8 */
};

// <00D3231F> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:19199
// member variables: 3
// struct size: 24
struct VkBufferCaptureDescriptorDataInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkBuffer buffer; /* 16 8 */
};

// <00D32370> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:19205
// member variables: 3
// struct size: 24
struct VkImageCaptureDescriptorDataInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkImage image; /* 16 8 */
};

// <00D323C1> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:19211
// member variables: 3
// struct size: 24
struct VkImageViewCaptureDescriptorDataInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkImageView imageView; /* 16 8 */
};

// <00D32412> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:19217
// member variables: 3
// struct size: 24
struct VkSamplerCaptureDescriptorDataInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkSampler sampler; /* 16 8 */
};

// <00D32463> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:19229
// member variables: 4
// struct size: 32
struct VkAccelerationStructureCaptureDescriptorDataInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkAccelerationStructureKHR accelerationStructure; /* 16 8 */
	VkAccelerationStructureNV accelerationStructureNV; /* 24 8 */
};

// <008E39C3> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:19348
// member variables: 3
// struct size: 24
struct VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkBool32 graphicsPipelineLibrary; /* 16 4 */
};

// <00693469> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:19361
// member variables: 3
// struct size: 24
struct VkGraphicsPipelineLibraryCreateInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkGraphicsPipelineLibraryFlagsEXT flags; /* 16 4 */
};

// <0075E009> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:19454
union VkDeviceOrHostAddressConstKHR {
	VkDeviceAddress deviceAddress; /* 0 8 */
	const void * hostAddress; /* 0 8 */
};

// <008E3A0F> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:19696
// member variables: 4
// struct size: 24
struct VkPhysicalDeviceFaultFeaturesEXT {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkBool32 deviceFault; /* 16 4 */
	VkBool32 deviceFaultVendorBinary; /* 20 4 */
};

// <00B23037> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:19703
// member variables: 5
// struct size: 32
struct VkDeviceFaultCountsEXT {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	uint32_t addressInfoCount; /* 16 4 */
	uint32_t vendorInfoCount; /* 20 4 */
	VkDeviceSize vendorBinarySize; /* 24 8 */
};

// <00B230A3> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:19711
// member variables: 3
// struct size: 24
struct VkDeviceFaultAddressInfoEXT {
	VkDeviceFaultAddressTypeEXT addressType; /* 0 4 */
	VkDeviceAddress reportedAddress; /* 8 8 */
	VkDeviceSize addressPrecision; /* 16 8 */
};

// <00B230F9> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:19717
// member variables: 3
// struct size: 272
struct VkDeviceFaultVendorInfoEXT {
	char description[256]; /* 0 256 */
	uint64_t vendorFaultCode; /* 256 8 */
	uint64_t vendorFaultData; /* 264 8 */
};

// <00B23153> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:19723
// member variables: 6
// struct size: 296
struct VkDeviceFaultInfoEXT {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	char description[256]; /* 16 256 */
	VkDeviceFaultAddressInfoEXT * pAddressInfos; /* 272 8 */
	VkDeviceFaultVendorInfoEXT * pVendorInfos; /* 280 8 */
	void * pVendorBinaryData; /* 288 8 */
};

// <00D329CC> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:19826
// member variables: 6
// struct size: 32
struct VkVertexInputBindingDescription2EXT {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	uint32_t binding; /* 16 4 */
	uint32_t stride; /* 20 4 */
	VkVertexInputRate inputRate; /* 24 4 */
	uint32_t divisor; /* 28 4 */
};

// <00D32A4D> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:19835
// member variables: 6
// struct size: 32
struct VkVertexInputAttributeDescription2EXT {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	uint32_t location; /* 16 4 */
	uint32_t binding; /* 20 4 */
	VkFormat format; /* 24 4 */
	uint32_t offset; /* 28 4 */
};

// <00D32B5F> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:20015
// member variables: 4
// struct size: 32
struct VkMemoryGetRemoteAddressInfoNV {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkDeviceMemory memory; /* 16 8 */
	VkExternalMemoryHandleTypeFlagBits handleType; /* 24 4 */
};

// <008E3A6B> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:20131
// member variables: 5
// struct size: 32
struct VkPhysicalDeviceExtendedDynamicState2FeaturesEXT {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkBool32 extendedDynamicState2; /* 16 4 */
	VkBool32 extendedDynamicState2LogicOp; /* 20 4 */
	VkBool32 extendedDynamicState2PatchControlPoints; /* 24 4 */
};

// <00D32CC1> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:20326
// member variables: 2
// struct size: 8
struct VkMultiDrawInfoEXT {
	uint32_t firstVertex; /* 0 4 */
	uint32_t vertexCount; /* 4 4 */
};

// <0080B859> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:20331
// member variables: 3
// struct size: 12
struct VkMultiDrawIndexedInfoEXT {
	uint32_t firstIndex; /* 0 4 */
	uint32_t indexCount; /* 4 4 */
	int32_t vertexOffset; /* 8 4 */
};

// <00D32F27> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:20467
// member variables: 3
// struct size: 12
struct VkMicromapUsageEXT {
	uint32_t count; /* 0 4 */
	uint32_t subdivisionLevel; /* 4 4 */
	uint32_t format; /* 8 4 */
};

// <0075E07C> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:20473
union VkDeviceOrHostAddressKHR {
	VkDeviceAddress deviceAddress; /* 0 8 */
	void * hostAddress; /* 0 8 */
};

// <00D32FAE> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:20478
// member variables: 13
// struct size: 96
struct VkMicromapBuildInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkMicromapTypeEXT type; /* 16 4 */
	VkBuildMicromapFlagsEXT flags; /* 20 4 */
	VkBuildMicromapModeEXT mode; /* 24 4 */
	VkMicromapEXT dstMicromap; /* 32 8 */
	uint32_t usageCountsCount; /* 40 4 */
	const VkMicromapUsageEXT * pUsageCounts; /* 48 8 */
	const VkMicromapUsageEXT * const * ppUsageCounts; /* 56 8 */
	VkDeviceOrHostAddressConstKHR data; /* 64 8 */
	VkDeviceOrHostAddressKHR scratchData; /* 72 8 */
	VkDeviceOrHostAddressConstKHR triangleArray; /* 80 8 */
	VkDeviceSize triangleArrayStride; /* 88 8 */
};

// <00D330B0> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:20494
// member variables: 8
// struct size: 64
struct VkMicromapCreateInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkMicromapCreateFlagsEXT createFlags; /* 16 4 */
	VkBuffer buffer; /* 24 8 */
	VkDeviceSize offset; /* 32 8 */
	VkDeviceSize size; /* 40 8 */
	VkMicromapTypeEXT type; /* 48 4 */
	VkDeviceAddress deviceAddress; /* 56 8 */
};

// <00D33151> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:20520
// member variables: 3
// struct size: 24
struct VkMicromapVersionInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	const uint8_t * pVersionData; /* 16 8 */
};

// <00D331A8> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:20526
// member variables: 5
// struct size: 40
struct VkCopyMicromapToMemoryInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkMicromapEXT src; /* 16 8 */
	VkDeviceOrHostAddressKHR dst; /* 24 8 */
	VkCopyMicromapModeEXT mode; /* 32 4 */
};

// <00D33219> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:20534
// member variables: 5
// struct size: 40
struct VkCopyMemoryToMicromapInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkDeviceOrHostAddressConstKHR src; /* 16 8 */
	VkMicromapEXT dst; /* 24 8 */
	VkCopyMicromapModeEXT mode; /* 32 4 */
};

// <00D3328A> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:20542
// member variables: 5
// struct size: 40
struct VkCopyMicromapInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkMicromapEXT src; /* 16 8 */
	VkMicromapEXT dst; /* 24 8 */
	VkCopyMicromapModeEXT mode; /* 32 4 */
};

// <00D332FB> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:20550
// member variables: 5
// struct size: 40
struct VkMicromapBuildSizesInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkDeviceSize micromapSize; /* 16 8 */
	VkDeviceSize buildScratchSize; /* 24 8 */
	VkBool32 discardable; /* 32 4 */
};

// <008E3ADD> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:20777
// member variables: 3
// struct size: 24
struct VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkBool32 pageableDeviceLocalMemory; /* 16 4 */
};

// <00D33670> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:20869
// member variables: 4
// struct size: 32
struct VkDescriptorSetBindingReferenceVALVE {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkDescriptorSetLayout descriptorSetLayout; /* 16 8 */
	uint32_t binding; /* 24 4 */
};

// <00D336D1> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:20876
// member variables: 4
// struct size: 32
struct VkDescriptorSetLayoutHostMappingInfoVALVE {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	size_t descriptorOffset; /* 16 8 */
	uint32_t descriptorSize; /* 24 4 */
};

// <00D3383A> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:21049
// member variables: 5
// struct size: 40
struct VkDecompressMemoryRegionNV {
	VkDeviceAddress srcAddress; /* 0 8 */
	VkDeviceAddress dstAddress; /* 8 8 */
	VkDeviceSize compressedSize; /* 16 8 */
	VkDeviceSize decompressedSize; /* 24 8 */
	VkMemoryDecompressionMethodFlagsNV decompressionMethod; /* 32 8 */
};

// <00D33906> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:21115
// member variables: 4
// struct size: 32
struct VkPipelineIndirectDeviceAddressInfoNV {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkPipelineBindPoint pipelineBindPoint; /* 16 4 */
	VkPipeline pipeline; /* 24 8 */
};

// <008E3B77> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:21305
// member variables: 33
// struct size: 144
struct VkPhysicalDeviceExtendedDynamicState3FeaturesEXT {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkBool32 extendedDynamicState3TessellationDomainOrigin; /* 16 4 */
	VkBool32 extendedDynamicState3DepthClampEnable; /* 20 4 */
	VkBool32 extendedDynamicState3PolygonMode; /* 24 4 */
	VkBool32 extendedDynamicState3RasterizationSamples; /* 28 4 */
	VkBool32 extendedDynamicState3SampleMask; /* 32 4 */
	VkBool32 extendedDynamicState3AlphaToCoverageEnable; /* 36 4 */
	VkBool32 extendedDynamicState3AlphaToOneEnable; /* 40 4 */
	VkBool32 extendedDynamicState3LogicOpEnable; /* 44 4 */
	VkBool32 extendedDynamicState3ColorBlendEnable; /* 48 4 */
	VkBool32 extendedDynamicState3ColorBlendEquation; /* 52 4 */
	VkBool32 extendedDynamicState3ColorWriteMask; /* 56 4 */
	VkBool32 extendedDynamicState3RasterizationStream; /* 60 4 */
	VkBool32 extendedDynamicState3ConservativeRasterizationMode; /* 64 4 */
	VkBool32 extendedDynamicState3ExtraPrimitiveOverestimationSize; /* 68 4 */
	VkBool32 extendedDynamicState3DepthClipEnable; /* 72 4 */
	VkBool32 extendedDynamicState3SampleLocationsEnable; /* 76 4 */
	VkBool32 extendedDynamicState3ColorBlendAdvanced; /* 80 4 */
	VkBool32 extendedDynamicState3ProvokingVertexMode; /* 84 4 */
	VkBool32 extendedDynamicState3LineRasterizationMode; /* 88 4 */
	VkBool32 extendedDynamicState3LineStippleEnable; /* 92 4 */
	VkBool32 extendedDynamicState3DepthClipNegativeOneToOne; /* 96 4 */
	VkBool32 extendedDynamicState3ViewportWScalingEnable; /* 100 4 */
	VkBool32 extendedDynamicState3ViewportSwizzle; /* 104 4 */
	VkBool32 extendedDynamicState3CoverageToColorEnable; /* 108 4 */
	VkBool32 extendedDynamicState3CoverageToColorLocation; /* 112 4 */
	VkBool32 extendedDynamicState3CoverageModulationMode; /* 116 4 */
	VkBool32 extendedDynamicState3CoverageModulationTableEnable; /* 120 4 */
	VkBool32 extendedDynamicState3CoverageModulationTable; /* 124 4 */
	VkBool32 extendedDynamicState3CoverageReductionMode; /* 128 4 */
	VkBool32 extendedDynamicState3RepresentativeFragmentTestEnable; /* 132 4 */
	VkBool32 extendedDynamicState3ShadingRateImageEnable; /* 136 4 */
};

// <00D33A4A> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:21356
// member variables: 5
// struct size: 20
struct VkColorBlendAdvancedEXT {
	VkBlendOp advancedBlendOp; /* 0 4 */
	VkBool32 srcPremultiplied; /* 4 4 */
	VkBool32 dstPremultiplied; /* 8 4 */
	VkBlendOverlapEXT blendOverlap; /* 12 4 */
	VkBool32 clampResults; /* 16 4 */
};

// <00D33E68> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:22020
// member variables: 4
// struct size: 56
struct VkShaderModuleIdentifierEXT {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	uint32_t identifierSize; /* 16 4 */
	uint8_t identifier[32]; /* 20 32 */
};

// <00D34009> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:22138
// member variables: 3
// struct size: 24
struct VkOpticalFlowImageFormatInfoNV {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkOpticalFlowUsageFlagsNV usage; /* 16 4 */
};

// <00D3405A> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:22144
// member variables: 3
// struct size: 24
struct VkOpticalFlowImageFormatPropertiesNV {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkFormat format; /* 16 4 */
};

// <00D340A6> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:22150
// member variables: 11
// struct size: 56
struct VkOpticalFlowSessionCreateInfoNV {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	uint32_t width; /* 16 4 */
	uint32_t height; /* 20 4 */
	VkFormat imageFormat; /* 24 4 */
	VkFormat flowVectorFormat; /* 28 4 */
	VkFormat costFormat; /* 32 4 */
	VkOpticalFlowGridSizeFlagsNV outputGridSize; /* 36 4 */
	VkOpticalFlowGridSizeFlagsNV hintGridSize; /* 40 4 */
	VkOpticalFlowPerformanceLevelNV performanceLevel; /* 44 4 */
	VkOpticalFlowSessionCreateFlagsNV flags; /* 48 4 */
};

// <00D34177> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:22172
// member variables: 5
// struct size: 32
struct VkOpticalFlowExecuteInfoNV {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkOpticalFlowExecuteFlagsNV flags; /* 16 4 */
	uint32_t regionCount; /* 20 4 */
	const VkRect2D * pRegions; /* 24 8 */
};

// <00D34360> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:22271
// member variables: 4
// struct size: 32
struct VkAntiLagPresentationInfoAMD {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkAntiLagStageAMD stage; /* 16 4 */
	uint64_t frameIndex; /* 24 8 */
};

// <00D343C1> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:22278
// member variables: 5
// struct size: 32
struct VkAntiLagDataAMD {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkAntiLagModeAMD mode; /* 16 4 */
	uint32_t maxFPS; /* 20 4 */
	const VkAntiLagPresentationInfoAMD * pPresentationInfo; /* 24 8 */
};

// <00D344F8> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:22342
// member variables: 14
// struct size: 96
struct VkShaderCreateInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkShaderCreateFlagsEXT flags; /* 16 4 */
	VkShaderStageFlagBits stage; /* 20 4 */
	VkShaderStageFlags nextStage; /* 24 4 */
	VkShaderCodeTypeEXT codeType; /* 28 4 */
	size_t codeSize; /* 32 8 */
	const void * pCode; /* 40 8 */
	const char * pName; /* 48 8 */
	uint32_t setLayoutCount; /* 56 4 */
	const VkDescriptorSetLayout * pSetLayouts; /* 64 8 */
	uint32_t pushConstantRangeCount; /* 72 4 */
	const VkPushConstantRange * pPushConstantRanges; /* 80 8 */
	const VkSpecializationInfo * pSpecializationInfo; /* 88 8 */
};

// <00D345F9> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:22361
// member variables: 2
// struct size: 8
struct VkDepthClampRangeEXT {
	float minDepthClamp; /* 0 4 */
	float maxDepthClamp; /* 4 4 */
};

// <00D3473C> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:22424
// member variables: 5
// struct size: 48
struct VkTilePropertiesQCOM {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkExtent3D tileSize; /* 16 12 */
	VkExtent2D apronSize; /* 28 8 */
	VkOffset2D origin; /* 36 8 */
};

// <00D348B3> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:22742
// member variables: 5
// struct size: 32
struct VkLatencySleepModeInfoNV {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkBool32 lowLatencyMode; /* 16 4 */
	VkBool32 lowLatencyBoost; /* 20 4 */
	uint32_t minimumIntervalUs; /* 24 4 */
};

// <00D34924> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:22750
// member variables: 4
// struct size: 32
struct VkLatencySleepInfoNV {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkSemaphore signalSemaphore; /* 16 8 */
	uint64_t value; /* 24 8 */
};

// <00D34985> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:22757
// member variables: 4
// struct size: 32
struct VkSetLatencyMarkerInfoNV {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	uint64_t presentID; /* 16 8 */
	VkLatencyMarkerNV marker; /* 24 4 */
};

// <00D349E6> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:22764
// member variables: 16
// struct size: 128
struct VkLatencyTimingsFrameReportNV {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	uint64_t presentID; /* 16 8 */
	uint64_t inputSampleTimeUs; /* 24 8 */
	uint64_t simStartTimeUs; /* 32 8 */
	uint64_t simEndTimeUs; /* 40 8 */
	uint64_t renderSubmitStartTimeUs; /* 48 8 */
	uint64_t renderSubmitEndTimeUs; /* 56 8 */
	uint64_t presentStartTimeUs; /* 64 8 */
	uint64_t presentEndTimeUs; /* 72 8 */
	uint64_t driverStartTimeUs; /* 80 8 */
	uint64_t driverEndTimeUs; /* 88 8 */
	uint64_t osRenderQueueStartTimeUs; /* 96 8 */
	uint64_t osRenderQueueEndTimeUs; /* 104 8 */
	uint64_t gpuRenderStartTimeUs; /* 112 8 */
	uint64_t gpuRenderEndTimeUs; /* 120 8 */
};

// <00D34B02> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:22783
// member variables: 4
// struct size: 32
struct VkGetLatencyMarkerInfoNV {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	uint32_t timingCount; /* 16 4 */
	VkLatencyTimingsFrameReportNV * pTimings; /* 24 8 */
};

// <00D34B64> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:22802
// member variables: 3
// struct size: 24
struct VkOutOfBandQueueTypeInfoNV {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkOutOfBandQueueTypeNV queueType; /* 16 4 */
};

// <0075E1D3> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:23718
// member variables: 3
// struct size: 24
struct VkStridedDeviceAddressRegionKHR {
	VkDeviceAddress deviceAddress; /* 0 8 */
	VkDeviceSize stride; /* 8 8 */
	VkDeviceSize size; /* 16 8 */
};

// <0075E224> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:23811
// member variables: 5
// struct size: 40
struct VkAccelerationStructureBuildSizesInfoKHR {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkDeviceSize accelerationStructureSize; /* 16 8 */
	VkDeviceSize updateScratchSize; /* 24 8 */
	VkDeviceSize buildScratchSize; /* 32 8 */
};

// <00D34EFA> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:24031
// member variables: 6
// struct size: 40
struct VkGeneratedCommandsMemoryRequirementsInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkIndirectExecutionSetEXT indirectExecutionSet; /* 16 8 */
	VkIndirectCommandsLayoutEXT indirectCommandsLayout; /* 24 8 */
	uint32_t maxSequenceCount; /* 32 4 */
	uint32_t maxDrawCount; /* 36 4 */
};

// <00D34F7B> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:24040
// member variables: 4
// struct size: 32
struct VkIndirectExecutionSetPipelineInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkPipeline initialPipeline; /* 16 8 */
	uint32_t maxPipelineCount; /* 24 4 */
};

// <00D34FDC> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:24047
// member variables: 4
// struct size: 32
struct VkIndirectExecutionSetShaderLayoutInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	uint32_t setLayoutCount; /* 16 4 */
	const VkDescriptorSetLayout * pSetLayouts; /* 24 8 */
};

// <00D3503D> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:24054
// member variables: 8
// struct size: 56
struct VkIndirectExecutionSetShaderInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	uint32_t shaderCount; /* 16 4 */
	const VkShaderEXT * pInitialShaders; /* 24 8 */
	const VkIndirectExecutionSetShaderLayoutInfoEXT * pSetLayoutInfos; /* 32 8 */
	uint32_t maxShaderCount; /* 40 4 */
	uint32_t pushConstantRangeCount; /* 44 4 */
	const VkPushConstantRange * pPushConstantRanges; /* 48 8 */
};

// <00D350E4> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:24065
union VkIndirectExecutionSetInfoEXT {
	const VkIndirectExecutionSetPipelineInfoEXT * pPipelineInfo; /* 0 8 */
	const VkIndirectExecutionSetShaderInfoEXT * pShaderInfo; /* 0 8 */
};

// <00D35126> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:24070
// member variables: 4
// struct size: 32
struct VkIndirectExecutionSetCreateInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkIndirectExecutionSetInfoTypeEXT type; /* 16 4 */
	VkIndirectExecutionSetInfoEXT info; /* 24 8 */
};

// <00D35187> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:24077
// member variables: 12
// struct size: 96
struct VkGeneratedCommandsInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkShaderStageFlags shaderStages; /* 16 4 */
	VkIndirectExecutionSetEXT indirectExecutionSet; /* 24 8 */
	VkIndirectCommandsLayoutEXT indirectCommandsLayout; /* 32 8 */
	VkDeviceAddress indirectAddress; /* 40 8 */
	VkDeviceSize indirectAddressSize; /* 48 8 */
	VkDeviceAddress preprocessAddress; /* 56 8 */
	VkDeviceSize preprocessSize; /* 64 8 */
	uint32_t maxSequenceCount; /* 72 4 */
	VkDeviceAddress sequenceCountAddress; /* 80 8 */
	uint32_t maxDrawCount; /* 88 4 */
};

// <00D35268> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:24092
// member variables: 4
// struct size: 32
struct VkWriteIndirectExecutionSetPipelineEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	uint32_t index; /* 16 4 */
	VkPipeline pipeline; /* 24 8 */
};

// <00D352C9> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:24099
// member variable: 1
// struct size: 12
struct VkIndirectCommandsPushConstantTokenEXT {
	VkPushConstantRange updateRange; /* 0 12 */
};

// <00D352FA> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:24103
// member variable: 1
// struct size: 4
struct VkIndirectCommandsVertexBufferTokenEXT {
	uint32_t vertexBindingUnit; /* 0 4 */
};

// <00D3532B> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:24107
// member variable: 1
// struct size: 4
struct VkIndirectCommandsIndexBufferTokenEXT {
	VkIndirectCommandsInputModeFlagBitsEXT mode; /* 0 4 */
};

// <00D3535C> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:24111
// member variables: 2
// struct size: 8
struct VkIndirectCommandsExecutionSetTokenEXT {
	VkIndirectExecutionSetInfoTypeEXT type; /* 0 4 */
	VkShaderStageFlags shaderStages; /* 4 4 */
};

// <00D3539D> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:24116
union VkIndirectCommandsTokenDataEXT {
	const VkIndirectCommandsPushConstantTokenEXT * pPushConstant; /* 0 8 */
	const VkIndirectCommandsVertexBufferTokenEXT * pVertexBuffer; /* 0 8 */
	const VkIndirectCommandsIndexBufferTokenEXT * pIndexBuffer; /* 0 8 */
	const VkIndirectCommandsExecutionSetTokenEXT * pExecutionSet; /* 0 8 */
};

// <00D35405> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:24123
// member variables: 5
// struct size: 40
struct VkIndirectCommandsLayoutTokenEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkIndirectCommandsTokenTypeEXT type; /* 16 4 */
	VkIndirectCommandsTokenDataEXT data; /* 24 8 */
	uint32_t offset; /* 32 4 */
};

// <00D35476> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:24131
// member variables: 8
// struct size: 56
struct VkIndirectCommandsLayoutCreateInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkIndirectCommandsLayoutUsageFlagsEXT flags; /* 16 4 */
	VkShaderStageFlags shaderStages; /* 20 4 */
	uint32_t indirectStride; /* 24 4 */
	VkPipelineLayout pipelineLayout; /* 32 8 */
	uint32_t tokenCount; /* 40 4 */
	const VkIndirectCommandsLayoutTokenEXT * pTokens; /* 48 8 */
};

// <00D3551D> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:24173
// member variables: 4
// struct size: 32
struct VkWriteIndirectExecutionSetShaderEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	uint32_t index; /* 16 4 */
	VkShaderEXT shader; /* 24 8 */
};

// <00D35732> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:24372
// member variables: 12
// struct size: 56
struct VkCooperativeMatrixFlexibleDimensionsPropertiesNV {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	uint32_t MGranularity; /* 16 4 */
	uint32_t NGranularity; /* 20 4 */
	uint32_t KGranularity; /* 24 4 */
	VkComponentTypeKHR AType; /* 28 4 */
	VkComponentTypeKHR BType; /* 32 4 */
	VkComponentTypeKHR CType; /* 36 4 */
	VkComponentTypeKHR ResultType; /* 40 4 */
	VkBool32 saturatingAccumulation; /* 44 4 */
	VkScopeKHR scope; /* 48 4 */
	uint32_t workgroupInvocations; /* 52 4 */
};

// <0075E2D9> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:24783
// member variables: 4
// struct size: 16
struct VkAccelerationStructureBuildRangeInfoKHR {
	uint32_t primitiveCount; /* 0 4 */
	uint32_t primitiveOffset; /* 4 4 */
	uint32_t firstVertex; /* 8 4 */
	uint32_t transformOffset; /* 12 4 */
};

// <0075E33F> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:24790
// member variables: 9
// struct size: 64
struct VkAccelerationStructureGeometryTrianglesDataKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkFormat vertexFormat; /* 16 4 */
	VkDeviceOrHostAddressConstKHR vertexData; /* 24 8 */
	VkDeviceSize vertexStride; /* 32 8 */
	uint32_t maxVertex; /* 40 4 */
	VkIndexType indexType; /* 44 4 */
	VkDeviceOrHostAddressConstKHR indexData; /* 48 8 */
	VkDeviceOrHostAddressConstKHR transformData; /* 56 8 */
};

// <0075E3EB> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:24802
// member variables: 4
// struct size: 32
struct VkAccelerationStructureGeometryAabbsDataKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkDeviceOrHostAddressConstKHR data; /* 16 8 */
	VkDeviceSize stride; /* 24 8 */
};

// <0075E447> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:24809
// member variables: 4
// struct size: 32
struct VkAccelerationStructureGeometryInstancesDataKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkBool32 arrayOfPointers; /* 16 4 */
	VkDeviceOrHostAddressConstKHR data; /* 24 8 */
};

// <0075E4A3> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:24816
union VkAccelerationStructureGeometryDataKHR {
	VkAccelerationStructureGeometryTrianglesDataKHR triangles; /* 0 64 */
	VkAccelerationStructureGeometryAabbsDataKHR aabbs; /* 0 32 */
	VkAccelerationStructureGeometryInstancesDataKHR instances; /* 0 32 */
};

// <0075E4E7> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:24822
// member variables: 5
// struct size: 96
struct VkAccelerationStructureGeometryKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkGeometryTypeKHR geometryType; /* 16 4 */
	VkAccelerationStructureGeometryDataKHR geometry; /* 24 64 */
	VkGeometryFlagsKHR flags; /* 88 4 */
};

// <0075E55D> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:24830
// member variables: 11
// struct size: 80
struct VkAccelerationStructureBuildGeometryInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkAccelerationStructureTypeKHR type; /* 16 4 */
	VkBuildAccelerationStructureFlagsKHR flags; /* 20 4 */
	VkBuildAccelerationStructureModeKHR mode; /* 24 4 */
	VkAccelerationStructureKHR srcAccelerationStructure; /* 32 8 */
	VkAccelerationStructureKHR dstAccelerationStructure; /* 40 8 */
	uint32_t geometryCount; /* 48 4 */
	const VkAccelerationStructureGeometryKHR * pGeometries; /* 56 8 */
	const VkAccelerationStructureGeometryKHR * const * ppGeometries; /* 64 8 */
	VkDeviceOrHostAddressKHR scratchData; /* 72 8 */
};

// <0075E63F> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:24844
// member variables: 8
// struct size: 64
struct VkAccelerationStructureCreateInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkAccelerationStructureCreateFlagsKHR createFlags; /* 16 4 */
	VkBuffer buffer; /* 24 8 */
	VkDeviceSize offset; /* 32 8 */
	VkDeviceSize size; /* 40 8 */
	VkAccelerationStructureTypeKHR type; /* 48 4 */
	VkDeviceAddress deviceAddress; /* 56 8 */
};

// <0047EF8B> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:24855
// member variables: 4
// struct size: 32
struct VkWriteDescriptorSetAccelerationStructureKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	uint32_t accelerationStructureCount; /* 16 4 */
	const VkAccelerationStructureKHR * pAccelerationStructures; /* 24 8 */
};

// <008E3E78> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:24862
// member variables: 7
// struct size: 40
struct VkPhysicalDeviceAccelerationStructureFeaturesKHR {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkBool32 accelerationStructure; /* 16 4 */
	VkBool32 accelerationStructureCaptureReplay; /* 20 4 */
	VkBool32 accelerationStructureIndirectBuild; /* 24 4 */
	VkBool32 accelerationStructureHostCommands; /* 28 4 */
	VkBool32 descriptorBindingAccelerationStructureUpdateAfterBind; /* 32 4 */
};

// <0075E6E6> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:24885
// member variables: 3
// struct size: 24
struct VkAccelerationStructureDeviceAddressInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkAccelerationStructureKHR accelerationStructure; /* 16 8 */
};

// <00D35CD6> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:24891
// member variables: 3
// struct size: 24
struct VkAccelerationStructureVersionInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	const uint8_t * pVersionData; /* 16 8 */
};

// <00D35D27> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:24897
// member variables: 5
// struct size: 40
struct VkCopyAccelerationStructureToMemoryInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkAccelerationStructureKHR src; /* 16 8 */
	VkDeviceOrHostAddressKHR dst; /* 24 8 */
	VkCopyAccelerationStructureModeKHR mode; /* 32 4 */
};

// <00D35D98> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:24905
// member variables: 5
// struct size: 40
struct VkCopyMemoryToAccelerationStructureInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkDeviceOrHostAddressConstKHR src; /* 16 8 */
	VkAccelerationStructureKHR dst; /* 24 8 */
	VkCopyAccelerationStructureModeKHR mode; /* 32 4 */
};

// <0075E737> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:24913
// member variables: 5
// struct size: 40
struct VkCopyAccelerationStructureInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkAccelerationStructureKHR src; /* 16 8 */
	VkAccelerationStructureKHR dst; /* 24 8 */
	VkCopyAccelerationStructureModeKHR mode; /* 32 4 */
};

// <005F214F> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:25077
// member variables: 8
// struct size: 48
struct VkRayTracingShaderGroupCreateInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkRayTracingShaderGroupTypeKHR type; /* 16 4 */
	uint32_t generalShader; /* 20 4 */
	uint32_t closestHitShader; /* 24 4 */
	uint32_t anyHitShader; /* 28 4 */
	uint32_t intersectionShader; /* 32 4 */
	const void * pShaderGroupCaptureReplayHandle; /* 40 8 */
};

// <005F21F0> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:25088
// member variables: 4
// struct size: 24
struct VkRayTracingPipelineInterfaceCreateInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	uint32_t maxPipelineRayPayloadSize; /* 16 4 */
	uint32_t maxPipelineRayHitAttributeSize; /* 20 4 */
};

// <005F2251> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:25095
// member variables: 14
// struct size: 104
struct VkRayTracingPipelineCreateInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkPipelineCreateFlags flags; /* 16 4 */
	uint32_t stageCount; /* 20 4 */
	const VkPipelineShaderStageCreateInfo * pStages; /* 24 8 */
	uint32_t groupCount; /* 32 4 */
	const VkRayTracingShaderGroupCreateInfoKHR * pGroups; /* 40 8 */
	uint32_t maxPipelineRayRecursionDepth; /* 48 4 */
	const VkPipelineLibraryCreateInfoKHR * pLibraryInfo; /* 56 8 */
	const VkRayTracingPipelineInterfaceCreateInfoKHR * pLibraryInterface; /* 64 8 */
	const VkPipelineDynamicStateCreateInfo * pDynamicState; /* 72 8 */
	VkPipelineLayout layout; /* 80 8 */
	VkPipeline basePipelineHandle; /* 88 8 */
	int32_t basePipelineIndex; /* 96 4 */
};

// <008E3F04> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:25112
// member variables: 7
// struct size: 40
struct VkPhysicalDeviceRayTracingPipelineFeaturesKHR {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkBool32 rayTracingPipeline; /* 16 4 */
	VkBool32 rayTracingPipelineShaderGroupHandleCaptureReplay; /* 20 4 */
	VkBool32 rayTracingPipelineShaderGroupHandleCaptureReplayMixed; /* 24 4 */
	VkBool32 rayTracingPipelineTraceRaysIndirect; /* 28 4 */
	VkBool32 rayTraversalPrimitiveCulling; /* 32 4 */
};

// <00551C2A> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:25122
// member variables: 10
// struct size: 48
struct VkPhysicalDeviceRayTracingPipelinePropertiesKHR {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	uint32_t shaderGroupHandleSize; /* 16 4 */
	uint32_t maxRayRecursionDepth; /* 20 4 */
	uint32_t maxShaderGroupStride; /* 24 4 */
	uint32_t shaderGroupBaseAlignment; /* 28 4 */
	uint32_t shaderGroupHandleCaptureReplaySize; /* 32 4 */
	uint32_t maxRayDispatchInvocationCount; /* 36 4 */
	uint32_t shaderGroupHandleAlignment; /* 40 4 */
	uint32_t maxRayHitAttributeSize; /* 44 4 */
};

// <008E404C> ../thirdparty/vulkan/inc/vulkan/vulkan_core.h:25212
// member variables: 3
// struct size: 24
struct VkPhysicalDeviceRayQueryFeaturesKHR {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkBool32 rayQuery; /* 16 4 */
};

