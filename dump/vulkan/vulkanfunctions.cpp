
//
// vulkan/vulkanfunctions.cpp
//
//	referenced by: librendersystemvulkan.so
//
//	structs: 2
//

// <00D0949B> vulkan/vulkanfunctions.cpp:70
// member variables: 2
// struct size: 8
struct PipelineStageFlags_t {
	RenderBarrierPipelineStageFlags_t nPipelineStageFlag; /* 0 4 */
	VkPipelineStageFlags nVkPipelineStageFlag; /* 4 4 */
};

// <00D094F7> vulkan/vulkanfunctions.cpp:107
// member variables: 2
// struct size: 8
struct BarrierAccessFlags_t {
	RenderBarrierAccessFlags_t nBarrierAccessFlags; /* 0 4 */
	VkAccessFlags nVkAccessFlags; /* 4 4 */
};

