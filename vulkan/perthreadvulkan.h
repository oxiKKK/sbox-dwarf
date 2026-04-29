
//
// vulkan/perthreadvulkan.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 13
//	structs: 4
//

// <0049C221> vulkan/perthreadvulkan.h:23
// member variables: 8
// struct size: 48
struct VulkanDescriptorSetPool_t {
	VkDescriptorPool m_pDescriptorPool; /* 0 8 */
	uint32 m_nDescriptorTypeMask; /* 8 4 */
	uint32 m_nDescriptorSets; /* 12 4 */
	VkDescriptorSet * m_ppDescriptorSets; /* 16 8 */
	uint m_nCurrentDescriptorSet; /* 24 4 */
	uint m_nCurrentFrameGPU; /* 28 4 */
	int32 m_nContextRefCount; /* 32 4 */
	intp m_nDescriptorPoolListIndex; /* 40 8 */
};

// <00576126> vulkan/perthreadvulkan.h:36
// member variables: 3
// struct size: 24
struct VulkanDynamicDescriptorSet_t {
	const class CDescriptorSetVulkan * m_pDescriptorSetTemplate; /* 0 8 */
	VkDescriptorSet m_pDescriptorSet; /* 8 8 */
	uint32 m_nLastFrameUsed; /* 16 4 */
};

// <005DBE2E> vulkan/perthreadvulkan.h:50
void PerThreadDataVulkan_t::~PerThreadDataVulkan_t()
{
} /* size: 0 */

// <005DBE12> vulkan/perthreadvulkan.h:50
inline void PerThreadDataVulkan_t::~PerThreadDataVulkan_t()
{
} /* size: 0 */

// <005DAECD> vulkan/perthreadvulkan.h:50
void PerThreadDataVulkan_t::PerThreadDataVulkan_t()
{
} /* size: 0 */

// <005DAEB1> vulkan/perthreadvulkan.h:50
inline void PerThreadDataVulkan_t::PerThreadDataVulkan_t()
{
} /* size: 0 */

// <0057B424> vulkan/perthreadvulkan.h:50
// member functions: 3
// member variables: 12
// struct size: 312
struct PerThreadDataVulkan_t {
	ThreadId_t m_nOwnerThreadId; /* 0 8 */
	/* vulkan/perthreadvulkan.h:55 */
	void AddRef(PerThreadDataVulkan_t* );
	/* vulkan/perthreadvulkan.h:56 */
	void Release(PerThreadDataVulkan_t* );
	/* vulkan/perthreadvulkan.h:57 */
	bool HasRefs(const PerThreadDataVulkan_t* );
private:
	CInterlockedInt m_nRefCount __attribute__((__aligned__(4))); /* 8 4 */
	uint32 m_nLastUsedFrame; /* 12 4 */
	VkPipelineCache m_pipelineCache; /* 16 8 */
	VkCommandPool m_commandPools[2]; /* 24 16 */
	CommandBufferPool_t * m_pCommandBufferPool; /* 40 8 */
	CUtlVector<CVertexBufferVulkan*, CUtlMemory<CVertexBufferVulkan*, int> > m_dynamicVBPool; /* 48 32 */
	CUtlVector<CIndexBufferVulkan*, CUtlMemory<CIndexBufferVulkan*, int> > m_dynamicIBPool; /* 80 32 */
	DescriptorSetPoolList_t m_descriptorSetPool; /* 112 80 */
	DescriptorSetPoolList_t m_availableDescriptorSetPool; /* 192 80 */
	CUtlVector<VulkanDynamicDescriptorSet_t*, CUtlMemory<VulkanDynamicDescriptorSet_t*, int> > m_dynamicDescriptorSet; /* 272 32 */
	uint16_t m_nCurrentDynamicDescriptorIndices; /* 304 2 */
} __attribute__((__aligned__(8)));

// <005D3D83> vulkan/perthreadvulkan.h:50
// member functions: 5
// member variables: 12
// struct size: 312
struct PerThreadDataVulkan_t {
	ThreadId_t m_nOwnerThreadId; /* 0 8 */
	/* vulkan/perthreadvulkan.h:55 */
	void AddRef(PerThreadDataVulkan_t* );
	/* vulkan/perthreadvulkan.h:56 */
	void Release(PerThreadDataVulkan_t* );
	/* vulkan/perthreadvulkan.h:57 */
	bool HasRefs(const PerThreadDataVulkan_t* );
private:
	CInterlockedInt m_nRefCount __attribute__((__aligned__(4))); /* 8 4 */
	uint32 m_nLastUsedFrame; /* 12 4 */
	VkPipelineCache m_pipelineCache; /* 16 8 */
	VkCommandPool m_commandPools[2]; /* 24 16 */
	CommandBufferPool_t * m_pCommandBufferPool; /* 40 8 */
	CUtlVector<CVertexBufferVulkan*, CUtlMemory<CVertexBufferVulkan*, int> > m_dynamicVBPool; /* 48 32 */
	CUtlVector<CIndexBufferVulkan*, CUtlMemory<CIndexBufferVulkan*, int> > m_dynamicIBPool; /* 80 32 */
	DescriptorSetPoolList_t m_descriptorSetPool; /* 112 80 */
	DescriptorSetPoolList_t m_availableDescriptorSetPool; /* 192 80 */
	CUtlVector<VulkanDynamicDescriptorSet_t*, CUtlMemory<VulkanDynamicDescriptorSet_t*, int> > m_dynamicDescriptorSet; /* 272 32 */
	uint16_t m_nCurrentDynamicDescriptorIndices; /* 304 2 */
	void PerThreadDataVulkan_t(PerThreadDataVulkan_t* );
	void ~PerThreadDataVulkan_t(PerThreadDataVulkan_t* );
} __attribute__((__aligned__(8)));

// <00B8B747> vulkan/perthreadvulkan.h:55
inline void PerThreadDataVulkan_t::AddRef()
{
} /* size: 0 */

// <00B8B705> vulkan/perthreadvulkan.h:56
// variables: 2
inline void PerThreadDataVulkan_t::Release()
{
	const char   __FUNCTION__; // 26722
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 56
	}
} /* size: 0, variables: 1 */

// <00A55511> vulkan/perthreadvulkan.h:56
// variables: 2
inline void PerThreadDataVulkan_t::Release()
{
	const char   __FUNCTION__; // 28543
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 56
	}
} /* size: 0, variables: 1 */

// <00876CCE> vulkan/perthreadvulkan.h:56
// variables: 2
inline void PerThreadDataVulkan_t::Release()
{
	const char   __FUNCTION__; // 22751
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 56
	}
} /* size: 0, variables: 1 */

// <00682B23> vulkan/perthreadvulkan.h:56
// variables: 2
inline void PerThreadDataVulkan_t::Release()
{
	const char   __FUNCTION__; // 31804
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 56
	}
} /* size: 0, variables: 1 */

// <005DBF15> vulkan/perthreadvulkan.h:57
inline void PerThreadDataVulkan_t::HasRefs()
{
} /* size: 0 */

// <00583964> vulkan/perthreadvulkan.h:84
CThreadFastMutex& GetPerThreadDataListMutex(void)
{
} /* size: 0 */

// <00583936> vulkan/perthreadvulkan.h:87
int GetPerThreadDataCount(void)
{
} /* size: 0 */

// <00583948> vulkan/perthreadvulkan.h:88
PerThreadDataVulkan_t* GetPerThreadDataEntry(int)
{
} /* size: 0 */

