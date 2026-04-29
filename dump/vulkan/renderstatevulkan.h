
//
// vulkan/renderstatevulkan.h
//
//	referenced by: librendersystemvulkan.so
//
//	structs: 3
//

// <006BAF3B> vulkan/renderstatevulkan.h:16
// member variables: 8
// struct size: 32
struct RasterizerStateVulkan_t {
	float m_nDepthBias; /* 0 4 */
	float m_nDepthBiasClamp; /* 4 4 */
	float m_nSlopeScaledDepthBias; /* 8 4 */
	bool m_bDepthClipEnable; /* 12 1 */
	bool m_bMultisampleEnable; /* 13 1 */
	VkPolygonMode m_nFillMode; /* 16 4 */
	VkCullModeFlags m_nCullMode; /* 20 4 */
	VkFrontFace m_nFrontFace[2]; /* 24 8 */
};

// <006BAFD6> vulkan/renderstatevulkan.h:29
// member variables: 8
// struct size: 76
struct DepthStencilStateVulkan_t {
	bool m_bDepthTestEnable; /* 0 1 */
	bool m_bDepthWriteEnable; /* 1 1 */
	VkCompareOp m_nDepthFunc; /* 4 4 */
	bool m_bStencilTestEnable; /* 8 1 */
	VkStencilOpState m_front; /* 12 28 */
	VkStencilOpState m_back; /* 40 28 */
	uint32_t m_nStencilCompareMask; /* 68 4 */
	uint32_t m_nStencilWriteMask; /* 72 4 */
};

// <006BB061> vulkan/renderstatevulkan.h:42
// member variables: 2
// struct size: 260
struct BlendStateVulkan_t {
	VkPipelineColorBlendAttachmentState m_perCBAttachmentState[8]; /* 0 256 */
	bool m_bAlphaToCoverageEnable; /* 256 1 */
};

