
//
// ./khronos/vulkan/vulkan_core.h
//
//	referenced by: librendersystemvulkan.so
//
//	structs: 37
//

// <01844D3E> ./khronos/vulkan/vulkan_core.h:5257
// member variables: 3
// struct size: 12
struct VkInputAttachmentAspectReference {
	uint32_t subpass; /* 0 4 */
	uint32_t inputAttachmentIndex; /* 4 4 */
	VkImageAspectFlags aspectMask; /* 8 4 */
};

// <01844D94> ./khronos/vulkan/vulkan_core.h:5263
// member variables: 4
// struct size: 32
struct VkRenderPassInputAttachmentAspectCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	uint32_t aspectReferenceCount; /* 16 4 */
	const VkInputAttachmentAspectReference * pAspectReferences; /* 24 8 */
};

// <01844E00> ./khronos/vulkan/vulkan_core.h:5276
// member variables: 3
// struct size: 24
struct VkPipelineTessellationDomainOriginStateCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkTessellationDomainOrigin domainOrigin; /* 16 4 */
};

// <01844E56> ./khronos/vulkan/vulkan_core.h:5282
// member variables: 8
// struct size: 64
struct VkRenderPassMultiviewCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	uint32_t subpassCount; /* 16 4 */
	const uint32_t * pViewMasks; /* 24 8 */
	uint32_t dependencyCount; /* 32 4 */
	const int32_t * pViewOffsets; /* 40 8 */
	uint32_t correlationMaskCount; /* 48 4 */
	const uint32_t * pCorrelationMasks; /* 56 8 */
};

// <01844FC8> ./khronos/vulkan/vulkan_core.h:5356
// member variables: 3
// struct size: 24
struct VkSamplerYcbcrConversionInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkSamplerYcbcrConversion conversion; /* 16 8 */
};

// <019D5510> ./khronos/vulkan/vulkan_core.h:6111
// member variables: 22
// struct size: 96
struct VkPhysicalDeviceDescriptorIndexingFeatures {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkBool32 shaderInputAttachmentArrayDynamicIndexing; /* 16 4 */
	VkBool32 shaderUniformTexelBufferArrayDynamicIndexing; /* 20 4 */
	VkBool32 shaderStorageTexelBufferArrayDynamicIndexing; /* 24 4 */
	VkBool32 shaderUniformBufferArrayNonUniformIndexing; /* 28 4 */
	VkBool32 shaderSampledImageArrayNonUniformIndexing; /* 32 4 */
	VkBool32 shaderStorageBufferArrayNonUniformIndexing; /* 36 4 */
	VkBool32 shaderStorageImageArrayNonUniformIndexing; /* 40 4 */
	VkBool32 shaderInputAttachmentArrayNonUniformIndexing; /* 44 4 */
	VkBool32 shaderUniformTexelBufferArrayNonUniformIndexing; /* 48 4 */
	VkBool32 shaderStorageTexelBufferArrayNonUniformIndexing; /* 52 4 */
	VkBool32 descriptorBindingUniformBufferUpdateAfterBind; /* 56 4 */
	VkBool32 descriptorBindingSampledImageUpdateAfterBind; /* 60 4 */
	VkBool32 descriptorBindingStorageImageUpdateAfterBind; /* 64 4 */
	VkBool32 descriptorBindingStorageBufferUpdateAfterBind; /* 68 4 */
	VkBool32 descriptorBindingUniformTexelBufferUpdateAfterBind; /* 72 4 */
	VkBool32 descriptorBindingStorageTexelBufferUpdateAfterBind; /* 76 4 */
	VkBool32 descriptorBindingUpdateUnusedWhilePending; /* 80 4 */
	VkBool32 descriptorBindingPartiallyBound; /* 84 4 */
	VkBool32 descriptorBindingVariableDescriptorCount; /* 88 4 */
	VkBool32 runtimeDescriptorArray; /* 92 4 */
};

// <01845541> ./khronos/vulkan/vulkan_core.h:6177
// member variables: 5
// struct size: 32
struct VkSubpassDescriptionDepthStencilResolve {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkResolveModeFlagBits depthResolveMode; /* 16 4 */
	VkResolveModeFlagBits stencilResolveMode; /* 20 4 */
	const VkAttachmentReference2 * pDepthStencilResolveAttachment; /* 24 8 */
};

// <018455B7> ./khronos/vulkan/vulkan_core.h:6206
// member variables: 3
// struct size: 24
struct VkSamplerReductionModeCreateInfo {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkSamplerReductionMode reductionMode; /* 16 4 */
};

// <0184560D> ./khronos/vulkan/vulkan_core.h:6277
// member variables: 3
// struct size: 24
struct VkAttachmentReferenceStencilLayout {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkImageLayout stencilLayout; /* 16 4 */
};

// <01845663> ./khronos/vulkan/vulkan_core.h:6283
// member variables: 4
// struct size: 24
struct VkAttachmentDescriptionStencilLayout {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkImageLayout stencilInitialLayout; /* 16 4 */
	VkImageLayout stencilFinalLayout; /* 20 4 */
};

// <019D5684> ./khronos/vulkan/vulkan_core.h:6340
// member variables: 5
// struct size: 32
struct VkPhysicalDeviceBufferDeviceAddressFeatures {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkBool32 bufferDeviceAddress; /* 16 4 */
	VkBool32 bufferDeviceAddressCaptureReplay; /* 20 4 */
	VkBool32 bufferDeviceAddressMultiDevice; /* 24 4 */
};

// <019D6406> ./khronos/vulkan/vulkan_core.h:6757
// member variables: 17
// struct size: 80
struct VkPhysicalDeviceVulkan13Features {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkBool32 robustImageAccess; /* 16 4 */
	VkBool32 inlineUniformBlock; /* 20 4 */
	VkBool32 descriptorBindingInlineUniformBlockUpdateAfterBind; /* 24 4 */
	VkBool32 pipelineCreationCacheControl; /* 28 4 */
	VkBool32 privateData; /* 32 4 */
	VkBool32 shaderDemoteToHelperInvocation; /* 36 4 */
	VkBool32 shaderTerminateInvocation; /* 40 4 */
	VkBool32 subgroupSizeControl; /* 44 4 */
	VkBool32 computeFullSubgroups; /* 48 4 */
	VkBool32 synchronization2; /* 52 4 */
	VkBool32 textureCompressionASTC_HDR; /* 56 4 */
	VkBool32 shaderZeroInitializeWorkgroupMemory; /* 60 4 */
	VkBool32 dynamicRendering; /* 64 4 */
	VkBool32 shaderIntegerDotProduct; /* 68 4 */
	VkBool32 maintenance4; /* 72 4 */
};

// <01846488> ./khronos/vulkan/vulkan_core.h:6976
// member variables: 3
// struct size: 24
struct VkPhysicalDeviceImageRobustnessFeatures {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkBool32 robustImageAccess; /* 16 4 */
};

// <01846620> ./khronos/vulkan/vulkan_core.h:9193
// member variables: 4
// struct size: 32
struct VkFragmentShadingRateAttachmentInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	const VkAttachmentReference2 * pFragmentShadingRateAttachment; /* 16 8 */
	VkExtent2D shadingRateAttachmentTexelSize; /* 24 8 */
};

// <01846686> ./khronos/vulkan/vulkan_core.h:9200
// member variables: 4
// struct size: 32
struct VkPipelineFragmentShadingRateStateCreateInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkExtent2D fragmentSize; /* 16 8 */
	VkFragmentShadingRateCombinerOpKHR combinerOps[2]; /* 24 8 */
};

// <018466FC> ./khronos/vulkan/vulkan_core.h:9207
// member variables: 5
// struct size: 32
struct VkPhysicalDeviceFragmentShadingRateFeaturesKHR {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkBool32 pipelineFragmentShadingRate; /* 16 4 */
	VkBool32 primitiveFragmentShadingRate; /* 20 4 */
	VkBool32 attachmentFragmentShadingRate; /* 24 4 */
};

// <0184683B> ./khronos/vulkan/vulkan_core.h:10069
// member variables: 4
// struct size: 24
struct VkPipelineRasterizationStateStreamCreateInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkPipelineRasterizationStateStreamCreateFlagsEXT flags; /* 16 4 */
	uint32_t rasterizationStream; /* 20 4 */
};

// <018468E4> ./khronos/vulkan/vulkan_core.h:10820
// member variables: 6
// struct size: 40
struct VkPipelineDiscardRectangleStateCreateInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkPipelineDiscardRectangleStateCreateFlagsEXT flags; /* 16 4 */
	VkDiscardRectangleModeEXT discardRectangleMode; /* 20 4 */
	uint32_t discardRectangleCount; /* 24 4 */
	const VkRect2D * pDiscardRectangles; /* 32 8 */
};

// <018469B3> ./khronos/vulkan/vulkan_core.h:10865
// member variables: 5
// struct size: 32
struct VkPipelineRasterizationConservativeStateCreateInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkPipelineRasterizationConservativeStateCreateFlagsEXT flags; /* 16 4 */
	VkConservativeRasterizationModeEXT conservativeRasterizationMode; /* 20 4 */
	float extraPrimitiveOverestimationSize; /* 24 4 */
};

// <01846A36> ./khronos/vulkan/vulkan_core.h:10885
// member variables: 4
// struct size: 24
struct VkPipelineRasterizationDepthClipStateCreateInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkPipelineRasterizationDepthClipStateCreateFlagsEXT flags; /* 16 4 */
	VkBool32 depthClipEnable; /* 20 4 */
};

// <01846B67> ./khronos/vulkan/vulkan_core.h:11164
// member variables: 4
// struct size: 64
struct VkPipelineSampleLocationsStateCreateInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkBool32 sampleLocationsEnable; /* 16 4 */
	VkSampleLocationsInfoEXT sampleLocationsInfo; /* 24 40 */
};

// <01846C09> ./khronos/vulkan/vulkan_core.h:11229
// member variables: 5
// struct size: 32
struct VkPipelineColorBlendAdvancedStateCreateInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkBool32 srcPremultiplied; /* 16 4 */
	VkBool32 dstPremultiplied; /* 20 4 */
	VkBlendOverlapEXT blendOverlap; /* 24 4 */
};

// <01846CDF> ./khronos/vulkan/vulkan_core.h:12126
// member variables: 2
// struct size: 8
struct VkVertexInputBindingDivisorDescriptionEXT {
	uint32_t binding; /* 0 4 */
	uint32_t divisor; /* 4 4 */
};

// <01846D25> ./khronos/vulkan/vulkan_core.h:12131
// member variables: 4
// struct size: 32
struct VkPipelineVertexInputDivisorStateCreateInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	uint32_t vertexBindingDivisorCount; /* 16 4 */
	const VkVertexInputBindingDivisorDescriptionEXT * pVertexBindingDivisors; /* 24 8 */
};

// <01846D91> ./khronos/vulkan/vulkan_core.h:12180
// member variables: 4
// struct size: 24
struct VkPhysicalDeviceMeshShaderFeaturesNV {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkBool32 taskShader; /* 16 4 */
	VkBool32 meshShader; /* 20 4 */
};

// <01846E3F> ./khronos/vulkan/vulkan_core.h:12881
// member variables: 3
// struct size: 24
struct VkPipelineRasterizationProvokingVertexStateCreateInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkProvokingVertexModeEXT provokingVertexMode; /* 16 4 */
};

// <01846ED7> ./khronos/vulkan/vulkan_core.h:12938
// member variables: 6
// struct size: 32
struct VkPipelineRasterizationLineStateCreateInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkLineRasterizationModeEXT lineRasterizationMode; /* 16 4 */
	VkBool32 stippledLineEnable; /* 20 4 */
	uint32_t lineStippleFactor; /* 24 4 */
	uint16_t lineStipplePattern; /* 28 2 */
};

// <01846F5D> ./khronos/vulkan/vulkan_core.h:13428
// member variables: 5
// struct size: 32
struct VkPhysicalDeviceRobustness2FeaturesEXT {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkBool32 robustBufferAccess2; /* 16 4 */
	VkBool32 robustImageAccess2; /* 20 4 */
	VkBool32 nullDescriptor; /* 24 4 */
};

// <01846FD3> ./khronos/vulkan/vulkan_core.h:13448
// member variables: 4
// struct size: 40
struct VkSamplerCustomBorderColorCreateInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkClearColorValue customBorderColor; /* 16 16 */
	VkFormat format; /* 32 4 */
};

// <01847039> ./khronos/vulkan/vulkan_core.h:13630
// member variables: 6
// struct size: 32
struct VkPhysicalDeviceDescriptorBufferFeaturesEXT {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkBool32 descriptorBuffer; /* 16 4 */
	VkBool32 descriptorBufferCaptureReplay; /* 20 4 */
	VkBool32 descriptorBufferImageLayoutIgnored; /* 24 4 */
	VkBool32 descriptorBufferPushDescriptors; /* 28 4 */
};

// <01847157> ./khronos/vulkan/vulkan_core.h:13863
// member variables: 5
// struct size: 32
struct VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkBool32 fragmentShadingRateEnums; /* 16 4 */
	VkBool32 supersampleFragmentShadingRates; /* 20 4 */
	VkBool32 noInvocationFragmentShadingRates; /* 24 4 */
};

// <019D6646> ./khronos/vulkan/vulkan_core.h:14267
// member variables: 3
// struct size: 24
struct VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkBool32 mutableDescriptorType; /* 16 4 */
};

// <018471DF> ./khronos/vulkan/vulkan_core.h:14275
// member variables: 2
// struct size: 16
struct VkMutableDescriptorTypeListEXT {
	uint32_t descriptorTypeCount; /* 0 4 */
	const VkDescriptorType * pDescriptorTypes; /* 8 8 */
};

// <0184722B> ./khronos/vulkan/vulkan_core.h:14282
// member variables: 4
// struct size: 32
struct VkMutableDescriptorTypeCreateInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	uint32_t mutableDescriptorTypeListCount; /* 16 4 */
	const VkMutableDescriptorTypeListEXT * pMutableDescriptorTypeLists; /* 24 8 */
};

// <01847297> ./khronos/vulkan/vulkan_core.h:14389
// member variables: 3
// struct size: 24
struct VkPipelineViewportDepthClipControlCreateInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkBool32 negativeOneToOne; /* 16 4 */
};

// <018472ED> ./khronos/vulkan/vulkan_core.h:14591
// member variables: 4
// struct size: 32
struct VkPipelineColorWriteCreateInfoEXT {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	uint32_t attachmentCount; /* 16 4 */
	const VkBool32 * pColorWriteEnables; /* 24 8 */
};

// <018475A9> ./khronos/vulkan/vulkan_core.h:16311
// member variables: 7
// struct size: 40
struct VkPhysicalDeviceMeshShaderFeaturesEXT {
	VkStructureType sType; /* 0 4 */
	void * pNext; /* 8 8 */
	VkBool32 taskShader; /* 16 4 */
	VkBool32 meshShader; /* 20 4 */
	VkBool32 multiviewMeshShader; /* 24 4 */
	VkBool32 primitiveFragmentShadingRateMeshShader; /* 28 4 */
	VkBool32 meshShaderQueries; /* 32 4 */
};

