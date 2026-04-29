
//
// vulkan/memoryrefmgrvulkan.h
//
//	referenced by: librendersystemvulkan.so
//
//	class: 1
//

// <005C52B0> vulkan/memoryrefmgrvulkan.h:22
// member functions: 14
// member variables: 4
// class size: 56
class CMemoryReferenceManagerVulkan {
	void CMemoryReferenceManagerVulkan(CMemoryReferenceManagerVulkan* , const CMemoryReferenceManagerVulkan& );
	int ()(void) * * _vptr.CMemoryReferenceManagerVulkan; /* 0 8 */
	/* vulkan/memoryrefmgrvulkan.cpp:16 */
	void CMemoryReferenceManagerVulkan(CMemoryReferenceManagerVulkan* );
	/* vulkan/memoryrefmgrvulkan.cpp:25 */
	virtual void ~CMemoryReferenceManagerVulkan(CMemoryReferenceManagerVulkan* );
	/* vulkan/memoryrefmgrvulkan.cpp:30 */
	void Init(CMemoryReferenceManagerVulkan* , VkDevice, VkQueue, VkQueueFamilyProperties& );
	/* vulkan/memoryrefmgrvulkan.cpp:37 */
	void Shutdown(CMemoryReferenceManagerVulkan* );
	/* vulkan/memoryrefmgrvulkan.cpp:45 */
	void AddMemoryReferences(CMemoryReferenceManagerVulkan* , const CMemoryRefTracker* );
	/* vulkan/memoryrefmgrvulkan.cpp:76 */
	void ClearMemoryReferences(CMemoryReferenceManagerVulkan* );
protected:
	VkDevice m_pDeviceVulkan; /* 8 8 */
	VkQueue m_pQueueVulkan; /* 16 8 */
	/* vulkan/memoryrefmgrvulkan.h:46 */
	typedef struct CUtlHashtable<VkDeviceMemory_T*, empty_t, DefaultHashFunctor<VkDeviceMemory_T*>, DefaultEqualFunctor<VkDeviceMemory_T*>, undefined_t, CUtlMemory<CUtlHashtableEntry<VkDeviceMemory_T*, empty_t>, int> > MemoryRefMap_t;
	MemoryRefMap_t m_memoryRefMap; /* 24 32 */
	void CMemoryReferenceManagerVulkan(class CMemoryReferenceManagerVulkan *, const class CMemoryReferenceManagerVulkan  &); /* linkage=_ZN29CMemoryReferenceManagerVulkanC4ERKS_ */
	void CMemoryReferenceManagerVulkan(class CMemoryReferenceManagerVulkan *); /* linkage=_ZN29CMemoryReferenceManagerVulkanC4Ev */
	virtual void ~CMemoryReferenceManagerVulkan(class CMemoryReferenceManagerVulkan *); /* linkage=_ZN29CMemoryReferenceManagerVulkanD4Ev */
	void Init(class CMemoryReferenceManagerVulkan *, VkDevice, VkQueue, VkQueueFamilyProperties &); /* linkage=_ZN29CMemoryReferenceManagerVulkan4InitEP10VkDevice_TP9VkQueue_TR23VkQueueFamilyProperties */
	/* <5c697a> vulkan/memoryrefmgrvulkan.cpp:37 */
	void Shutdown(class CMemoryReferenceManagerVulkan *); /* linkage=_ZN29CMemoryReferenceManagerVulkan8ShutdownEv */
	void AddMemoryReferences(class CMemoryReferenceManagerVulkan *, const class CMemoryRefTracker  *); /* linkage=_ZN29CMemoryReferenceManagerVulkan19AddMemoryReferencesEPK17CMemoryRefTracker */
	void ClearMemoryReferences(class CMemoryReferenceManagerVulkan *); /* linkage=_ZN29CMemoryReferenceManagerVulkan21ClearMemoryReferencesEv */
};

