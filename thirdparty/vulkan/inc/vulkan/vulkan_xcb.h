
//
// thirdparty/vulkan/inc/vulkan/vulkan_xcb.h
//
//	referenced by: librendersystemvulkan.so
//
//	struct: 1
//

// <00D365EF> ../thirdparty/vulkan/inc/vulkan/vulkan_xcb.h:27
// member variables: 5
// struct size: 40
struct VkXcbSurfaceCreateInfoKHR {
	VkStructureType sType; /* 0 4 */
	const void * pNext; /* 8 8 */
	VkXcbSurfaceCreateFlagsKHR flags; /* 16 4 */
	xcb_connection_t * connection; /* 24 8 */
	xcb_window_t window; /* 32 4 */
};

