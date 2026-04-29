
//
// vulkan/constantbuffervulkan.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 8
//	class: 1
//

// <00471610> vulkan/constantbuffervulkan.h:29
// member functions: 46
// member variables: 18
// vtable entries: 4
// class size: 104
class CConstantBufferVulkan : public CDescriptorSetReferenced, public IVmaAllocationBuffer {
public:
	/* class CDescriptorSetReferenced <ancestor>; */ /* 0 16 */
	/* class IVmaAllocationBuffer <ancestor>; */ /* 16 8 */
	void CConstantBufferVulkan(CConstantBufferVulkan* , const CConstantBufferVulkan& );
	/* vulkan/constantbuffervulkan.cpp:28 */
	void CConstantBufferVulkan(CConstantBufferVulkan* , VkDevice, ConstantBufferType_t, uint32, uint32, uint32, bool, bool, bool, const char* );
	/* vulkan/constantbuffervulkan.cpp:48 */
	virtual void ~CConstantBufferVulkan(CConstantBufferVulkan* );
	/* vulkan/constantbuffervulkan.cpp:59 */
	bool Allocate(CConstantBufferVulkan* );
	/* vulkan/constantbuffervulkan.cpp:78 */
	void SetData(CConstantBufferVulkan* , CRenderContextVulkan* , VulkanCommandBuffer_t* , uint32, uint32, const void* const* , int);
	/* vulkan/constantbuffervulkan.cpp:150 */
	void SetDynamicConstantBufferData(CConstantBufferVulkan* , CRenderContextVulkan* , uint32, uint32, const void* const* , int);
	/* vulkan/constantbuffervulkan.cpp:210 */
	void InitializeDynamicConstantBufferWithoutData(CConstantBufferVulkan* , CRenderContextVulkan* , int);
	/* vulkan/constantbuffervulkan.cpp:194 */
	void* GetDynamicConstantBufferPersistentPointerForLock(CConstantBufferVulkan* , CRenderContextVulkan* , int);
	/* vulkan/constantbuffervulkan.h:43 */
	bool GetDynamicConstantBufferDataSet(const CConstantBufferVulkan* );
	/* vulkan/constantbuffervulkan.h:45 */
	ConstantBufferType_t GetBufferType(const CConstantBufferVulkan* );
	/* vulkan/constantbuffervulkan.cpp:219 */
	void GetBufferAndOffset(CConstantBufferVulkan* , VkBuffer* , VkDeviceSize* );
	/* vulkan/constantbuffervulkan.h:48 */
	VkBuffer GetVkBuffer(CConstantBufferVulkan* );
	/* vulkan/constantbuffervulkan.h:49 */
	uint32 GetBufferUsageSize(CConstantBufferVulkan* );
	/* vulkan/constantbuffervulkan.h:50 */
	uint32 GetBufferAllocationSize(CConstantBufferVulkan* );
	/* vulkan/constantbuffervulkan.h:52 */
	VkDeviceSize GetBindOffset(CConstantBufferVulkan* );
	/* vulkan/constantbuffervulkan.h:54 */
	void MarkUsed(CConstantBufferVulkan* , uint);
	/* vulkan/constantbuffervulkan.h:55 */
	uint GetLastFrameUsed(const CConstantBufferVulkan* );
	/* vulkan/constantbuffervulkan.h:57 */
	bool IsPerFramePooled(const CConstantBufferVulkan* );
	/* vulkan/constantbuffervulkan.h:58 */
	bool IsPerFrameWriteOnce(const CConstantBufferVulkan* );
	/* vulkan/constantbuffervulkan.h:61 */
	virtual VkDeviceSize VmaGetBufferSize(const CConstantBufferVulkan* );
	/* vulkan/constantbuffervulkan.h:62 */
	virtual bool VmaGetRelocatable(const CConstantBufferVulkan* );
	/* vulkan/constantbuffervulkan.cpp:240 */
	virtual uint64_t VmaCreateNewVulkanObject(CConstantBufferVulkan* , uint64_t* );
	/* vulkan/constantbuffervulkan.cpp:259 */
	virtual void VmaAssignNewObject(CConstantBufferVulkan* , CRenderContextVulkan* , uint64_t, CUtlVector<CRefCounted<CRefCountServiceBase<true, CRefMT> >*, CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >);
protected:
	ConstantBufferType_t m_nType; /* 24 4 */
	VmaAllocation m_pVmaAllocation; /* 32 8 */
	VkDeviceSize m_nMemoryOffset; /* 40 8 */
	VkBuffer m_pBufferVulkan; /* 48 8 */
	uint8_t * m_pPersistentlyMappedPtr; /* 56 8 */
	bool m_bCreatedByContext; /* 64 1 */
	bool m_bContextDataSet; /* 65 1 */
	bool m_bPerFrameWriteOnce; /* 66 1 */
	bool m_bPerFramePooled; /* 67 1 */
	bool m_bAllocationInPerFramePool; /* 68 1 */
	uint32 m_nViewAlignedSize; /* 72 4 */
	uint32 m_nAllViewsSize; /* 76 4 */
	uint32 m_nAllocatedSize; /* 80 4 */
	uint32 m_nLastFrameUsed; /* 84 4 */
	VkDevice m_pDeviceVulkan; /* 88 8 */
	CUtlString m_debugName; /* 96 8 */
	void CConstantBufferVulkan(class CConstantBufferVulkan *, const class CConstantBufferVulkan  &); /* linkage=_ZN21CConstantBufferVulkanC4ERKS_ */
	void CConstantBufferVulkan(class CConstantBufferVulkan *, VkDevice, enum ConstantBufferType_t, uint32, uint32, uint32, bool, bool, bool, const char  *); /* linkage=_ZN21CConstantBufferVulkanC4EP10VkDevice_T20ConstantBufferType_tjjjbbbPKc */
	virtual void ~CConstantBufferVulkan(class CConstantBufferVulkan *); /* linkage=_ZN21CConstantBufferVulkanD4Ev */
	bool Allocate(class CConstantBufferVulkan *); /* linkage=_ZN21CConstantBufferVulkan8AllocateEv */
	void SetData(class CConstantBufferVulkan *, class CRenderContextVulkan *, class VulkanCommandBuffer_t *, uint32, uint32, const void  * const *, int); /* linkage=_ZN21CConstantBufferVulkan7SetDataEP20CRenderContextVulkanP21VulkanCommandBuffer_tjjPKPKvi */
	void SetDynamicConstantBufferData(class CConstantBufferVulkan *, class CRenderContextVulkan *, uint32, uint32, const void  * const *, int); /* linkage=_ZN21CConstantBufferVulkan28SetDynamicConstantBufferDataEP20CRenderContextVulkanjjPKPKvi */
	void InitializeDynamicConstantBufferWithoutData(class CConstantBufferVulkan *, class CRenderContextVulkan *, int); /* linkage=_ZN21CConstantBufferVulkan42InitializeDynamicConstantBufferWithoutDataEP20CRenderContextVulkani */
	void * GetDynamicConstantBufferPersistentPointerForLock(class CConstantBufferVulkan *, class CRenderContextVulkan *, int); /* linkage=_ZN21CConstantBufferVulkan48GetDynamicConstantBufferPersistentPointerForLockEP20CRenderContextVulkani */
	bool GetDynamicConstantBufferDataSet(const class CConstantBufferVulkan  *); /* linkage=_ZNK21CConstantBufferVulkan31GetDynamicConstantBufferDataSetEv */
	enum ConstantBufferType_t GetBufferType(const class CConstantBufferVulkan  *); /* linkage=_ZNK21CConstantBufferVulkan13GetBufferTypeEv */
	void GetBufferAndOffset(class CConstantBufferVulkan *, VkBuffer *, VkDeviceSize *); /* linkage=_ZN21CConstantBufferVulkan18GetBufferAndOffsetEPP10VkBuffer_TPm */
	VkBuffer GetVkBuffer(class CConstantBufferVulkan *); /* linkage=_ZN21CConstantBufferVulkan11GetVkBufferEv */
	uint32 GetBufferUsageSize(class CConstantBufferVulkan *); /* linkage=_ZN21CConstantBufferVulkan18GetBufferUsageSizeEv */
	uint32 GetBufferAllocationSize(class CConstantBufferVulkan *); /* linkage=_ZN21CConstantBufferVulkan23GetBufferAllocationSizeEv */
	VkDeviceSize GetBindOffset(class CConstantBufferVulkan *); /* linkage=_ZN21CConstantBufferVulkan13GetBindOffsetEv */
	void MarkUsed(class CConstantBufferVulkan *, uint); /* linkage=_ZN21CConstantBufferVulkan8MarkUsedEj */
	uint GetLastFrameUsed(const class CConstantBufferVulkan  *); /* linkage=_ZNK21CConstantBufferVulkan16GetLastFrameUsedEv */
	bool IsPerFramePooled(const class CConstantBufferVulkan  *); /* linkage=_ZNK21CConstantBufferVulkan16IsPerFramePooledEv */
	bool IsPerFrameWriteOnce(const class CConstantBufferVulkan  *); /* linkage=_ZNK21CConstantBufferVulkan19IsPerFrameWriteOnceEv */
	/* <476bdd> vulkan/constantbuffervulkan.h:61 */
	virtual VkDeviceSize VmaGetBufferSize(const class CConstantBufferVulkan  *); /* linkage=_ZNK21CConstantBufferVulkan16VmaGetBufferSizeEv */
	/* <476c07> vulkan/constantbuffervulkan.h:62 */
	virtual bool VmaGetRelocatable(const class CConstantBufferVulkan  *); /* linkage=_ZNK21CConstantBufferVulkan17VmaGetRelocatableEv */
	virtual uint64_t VmaCreateNewVulkanObject(class CConstantBufferVulkan *, uint64_t *); /* linkage=_ZN21CConstantBufferVulkan24VmaCreateNewVulkanObjectEPm */
	/* <476c31> vulkan/constantbuffervulkan.cpp:259 */
	virtual void VmaAssignNewObject(class CConstantBufferVulkan *, class CRenderContextVulkan *, uint64_t, class CUtlVector<CRefCounted<CRefCountServiceBase<true, CRefMT> >*, CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >); /* linkage=_ZN21CConstantBufferVulkan18VmaAssignNewObjectEP20CRenderContextVulkanmR10CUtlVectorIP11CRefCountedI20CRefCountServiceBaseILb1E6CRefMTEE10CUtlMemoryIS8_iEE */
} __attribute__((__aligned__(8)));

// <009A5DB0> vulkan/constantbuffervulkan.h:33
void CConstantBufferVulkan::CConstantBufferVulkan(VkDevice pDeviceVulkan, ConstantBufferType_t nType, uint32 nViewAlignedSize, uint32 nAllViewsSize, uint32 nAllocatedSize, bool bCreatedByContext, bool bPerFrameWriteOnce, bool bPerFramePooled, const char* pDebugName)
{
} /* size: 0 */

// <00876ED9> vulkan/constantbuffervulkan.h:54
inline void CConstantBufferVulkan::MarkUsed(uint nFrameNumber)
{
} /* size: 0 */

// <00876EC0> vulkan/constantbuffervulkan.h:57
inline void CConstantBufferVulkan::IsPerFramePooled()
{
} /* size: 0 */

// <00876EA7> vulkan/constantbuffervulkan.h:58
inline void CConstantBufferVulkan::IsPerFrameWriteOnce()
{
} /* size: 0 */

// <005A4423> vulkan/constantbuffervulkan.h:61
void CConstantBufferVulkan::VmaGetBufferSize()
{
} /* size: 0 */

// <004765E0> vulkan/constantbuffervulkan.h:61
inline void CConstantBufferVulkan::VmaGetBufferSize()
{
} /* size: 0 */

// <005A440B> vulkan/constantbuffervulkan.h:62
void CConstantBufferVulkan::VmaGetRelocatable()
{
} /* size: 0 */

// <004765C7> vulkan/constantbuffervulkan.h:62
inline void CConstantBufferVulkan::VmaGetRelocatable()
{
} /* size: 0 */

