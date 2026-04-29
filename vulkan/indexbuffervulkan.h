
//
// vulkan/indexbuffervulkan.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 10
//	class: 1
//

// <005159B4> vulkan/indexbuffervulkan.h:31
// member functions: 50
// member variables: 10
// vtable entries: 7
// class size: 160
class CIndexBufferVulkan : public CIndexBufferBase, public IVmaAllocationBuffer {
public:
	/* class CIndexBufferBase <ancestor>; */ /* 0 0 */
	/* class IVmaAllocationBuffer <ancestor>; */ /* 96 8 */
	void CIndexBufferVulkan(CIndexBufferVulkan* , const CIndexBufferVulkan& );
	/* vulkan/indexbuffervulkan.cpp:31 */
	void CIndexBufferVulkan(CIndexBufferVulkan* , VkDevice, RenderBufferType_t, const BufferDesc_t& , RenderBufferFlags_t);
	/* vulkan/indexbuffervulkan.cpp:54 */
	virtual void ~CIndexBufferVulkan(CIndexBufferVulkan* );
	/* vulkan/indexbuffervulkan.cpp:141 */
	virtual void DeleteThis(CIndexBufferVulkan* );
	/* vulkan/indexbuffervulkan.h:93 */
	void EnsureAllocated(CIndexBufferVulkan* );
	/* vulkan/indexbuffervulkan.cpp:62 */
	void Reset(CIndexBufferVulkan* , const BufferDesc_t& );
	/* vulkan/indexbuffervulkan.h:104 */
	VkBuffer GetVkBuffer(const CIndexBufferVulkan* );
	/* vulkan/indexbuffervulkan.h:48 */
	VkDeviceAddress GetBufferDeviceAddress(const CIndexBufferVulkan* );
	/* vulkan/indexbuffervulkan.h:121 */
	int GetBindOffset(const CIndexBufferVulkan* );
	/* vulkan/indexbuffervulkan.h:126 */
	int GetIndexSize(const CIndexBufferVulkan* );
	/* vulkan/indexbuffervulkan.cpp:186 */
	bool SetIndexData(CIndexBufferVulkan* , CRenderContextVulkan* , VulkanCommandBuffer_t* , const void* , int, int);
	/* vulkan/indexbuffervulkan.cpp:284 */
	bool Lock(CIndexBufferVulkan* , VulkanCommandBuffer_t* , int, LockDesc_t* );
	/* vulkan/indexbuffervulkan.cpp:375 */
	void Unlock(CIndexBufferVulkan* , CRenderContextVulkan* , VulkanCommandBuffer_t* , int);
	/* vulkan/indexbuffervulkan.cpp:463 */
	bool LockRegion(CIndexBufferVulkan* , VulkanCommandBuffer_t* , int, int, LockDesc_t* );
	/* vulkan/indexbuffervulkan.cpp:480 */
	void UnlockRegion(CIndexBufferVulkan* , CRenderContextVulkan* , VulkanCommandBuffer_t* , int, int, LockDesc_t* );
	/* vulkan/indexbuffervulkan.h:113 */
	int GetRemainingSizeInBytes(const CIndexBufferVulkan* );
	/* vulkan/indexbuffervulkan.cpp:454 */
	void* AllocatePerFrameDynamicPooled(CIndexBufferVulkan* , CRenderContextVulkan* , VulkanCommandBuffer_t* , int);
	/* vulkan/indexbuffervulkan.h:69 */
	virtual VkDeviceSize VmaGetBufferSize(const CIndexBufferVulkan* );
	/* vulkan/indexbuffervulkan.h:70 */
	virtual bool VmaGetRelocatable(const CIndexBufferVulkan* );
	/* vulkan/indexbuffervulkan.cpp:522 */
	virtual uint64_t VmaCreateNewVulkanObject(CIndexBufferVulkan* , uint64_t* );
	/* vulkan/indexbuffervulkan.cpp:540 */
	virtual void VmaAssignNewObject(CIndexBufferVulkan* , CRenderContextVulkan* , uint64_t, CUtlVector<CRefCounted<CRefCountServiceBase<true, CRefMT> >*, CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >);
protected:
	/* vulkan/indexbuffervulkan.cpp:82 */
	bool Allocate(CIndexBufferVulkan* , CRenderContextVulkan* , VulkanCommandBuffer_t* , const void* );
	/* vulkan/indexbuffervulkan.cpp:149 */
	void Deallocate(CIndexBufferVulkan* );
	/* vulkan/indexbuffervulkan.cpp:167 */
	virtual void* AllocateBackingStore(CIndexBufferVulkan* , int);
	/* vulkan/indexbuffervulkan.cpp:174 */
	virtual void FreeBackingStore(CIndexBufferVulkan* );
	VmaAllocation m_pVmaAllocation; /* 104 8 */
	VkDeviceMemory m_pStagingMem; /* 112 8 */
	VkDeviceSize m_nMemoryOffset; /* 120 8 */
	VkBuffer m_pVulkanBuffer; /* 128 8 */
	VkDevice m_pDeviceVulkan; /* 136 8 */
	VkDeviceAddress m_nBufferDeviceAddress; /* 144 8 */
	int m_nCurrentOffset; /* 152 4 */
	bool m_bIsLocked:1; /* 156: 0 1 */
	void CIndexBufferVulkan(class CIndexBufferVulkan *, const class CIndexBufferVulkan  &); /* linkage=_ZN18CIndexBufferVulkanC4ERKS_ */
	void CIndexBufferVulkan(class CIndexBufferVulkan *, VkDevice, enum RenderBufferType_t, const class BufferDesc_t  &, enum RenderBufferFlags_t); /* linkage=_ZN18CIndexBufferVulkanC4EP10VkDevice_T18RenderBufferType_tRK12BufferDesc_t19RenderBufferFlags_t */
	virtual void ~CIndexBufferVulkan(class CIndexBufferVulkan *); /* linkage=_ZN18CIndexBufferVulkanD4Ev */
	virtual void DeleteThis(class CIndexBufferVulkan *); /* linkage=_ZN18CIndexBufferVulkan10DeleteThisEv */
	void EnsureAllocated(class CIndexBufferVulkan *); /* linkage=_ZN18CIndexBufferVulkan15EnsureAllocatedEv */
	void Reset(class CIndexBufferVulkan *, const class BufferDesc_t  &); /* linkage=_ZN18CIndexBufferVulkan5ResetERK12BufferDesc_t */
	VkBuffer GetVkBuffer(const class CIndexBufferVulkan  *); /* linkage=_ZNK18CIndexBufferVulkan11GetVkBufferEv */
	VkDeviceAddress GetBufferDeviceAddress(const class CIndexBufferVulkan  *); /* linkage=_ZNK18CIndexBufferVulkan22GetBufferDeviceAddressEv */
	int GetBindOffset(const class CIndexBufferVulkan  *); /* linkage=_ZNK18CIndexBufferVulkan13GetBindOffsetEv */
	int GetIndexSize(const class CIndexBufferVulkan  *); /* linkage=_ZNK18CIndexBufferVulkan12GetIndexSizeEv */
	bool SetIndexData(class CIndexBufferVulkan *, class CRenderContextVulkan *, class VulkanCommandBuffer_t *, const void  *, int, int); /* linkage=_ZN18CIndexBufferVulkan12SetIndexDataEP20CRenderContextVulkanP21VulkanCommandBuffer_tPKvii */
	bool Lock(class CIndexBufferVulkan *, class VulkanCommandBuffer_t *, int, class LockDesc_t *); /* linkage=_ZN18CIndexBufferVulkan4LockEP21VulkanCommandBuffer_tiP10LockDesc_t */
	/* <51d07f> vulkan/indexbuffervulkan.cpp:375 */
	void Unlock(class CIndexBufferVulkan *, class CRenderContextVulkan *, class VulkanCommandBuffer_t *, int); /* linkage=_ZN18CIndexBufferVulkan6UnlockEP20CRenderContextVulkanP21VulkanCommandBuffer_ti */
	bool LockRegion(class CIndexBufferVulkan *, class VulkanCommandBuffer_t *, int, int, class LockDesc_t *); /* linkage=_ZN18CIndexBufferVulkan10LockRegionEP21VulkanCommandBuffer_tiiP10LockDesc_t */
	void UnlockRegion(class CIndexBufferVulkan *, class CRenderContextVulkan *, class VulkanCommandBuffer_t *, int, int, class LockDesc_t *); /* linkage=_ZN18CIndexBufferVulkan12UnlockRegionEP20CRenderContextVulkanP21VulkanCommandBuffer_tiiP10LockDesc_t */
	int GetRemainingSizeInBytes(const class CIndexBufferVulkan  *); /* linkage=_ZNK18CIndexBufferVulkan23GetRemainingSizeInBytesEv */
	void * AllocatePerFrameDynamicPooled(class CIndexBufferVulkan *, class CRenderContextVulkan *, class VulkanCommandBuffer_t *, int); /* linkage=_ZN18CIndexBufferVulkan29AllocatePerFrameDynamicPooledEP20CRenderContextVulkanP21VulkanCommandBuffer_ti */
	/* <51c9c6> vulkan/indexbuffervulkan.h:69 */
	virtual VkDeviceSize VmaGetBufferSize(const class CIndexBufferVulkan  *); /* linkage=_ZNK18CIndexBufferVulkan16VmaGetBufferSizeEv */
	/* <51c9f1> vulkan/indexbuffervulkan.h:70 */
	virtual bool VmaGetRelocatable(const class CIndexBufferVulkan  *); /* linkage=_ZNK18CIndexBufferVulkan17VmaGetRelocatableEv */
	virtual uint64_t VmaCreateNewVulkanObject(class CIndexBufferVulkan *, uint64_t *); /* linkage=_ZN18CIndexBufferVulkan24VmaCreateNewVulkanObjectEPm */
	/* <51ca1c> vulkan/indexbuffervulkan.cpp:540 */
	virtual void VmaAssignNewObject(class CIndexBufferVulkan *, class CRenderContextVulkan *, uint64_t, class CUtlVector<CRefCounted<CRefCountServiceBase<true, CRefMT> >*, CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >); /* linkage=_ZN18CIndexBufferVulkan18VmaAssignNewObjectEP20CRenderContextVulkanmR10CUtlVectorIP11CRefCountedI20CRefCountServiceBaseILb1E6CRefMTEE10CUtlMemoryIS8_iEE */
	bool Allocate(class CIndexBufferVulkan *, class CRenderContextVulkan *, class VulkanCommandBuffer_t *, const void  *); /* linkage=_ZN18CIndexBufferVulkan8AllocateEP20CRenderContextVulkanP21VulkanCommandBuffer_tPKv */
	/* <51cfb4> vulkan/indexbuffervulkan.cpp:149 */
	void Deallocate(class CIndexBufferVulkan *); /* linkage=_ZN18CIndexBufferVulkan10DeallocateEv */
	/* <51cabe> vulkan/indexbuffervulkan.cpp:167 */
	virtual void * AllocateBackingStore(class CIndexBufferVulkan *, int); /* linkage=_ZN18CIndexBufferVulkan20AllocateBackingStoreEi */
	/* <51cb13> vulkan/indexbuffervulkan.cpp:174 */
	virtual void FreeBackingStore(class CIndexBufferVulkan *); /* linkage=_ZN18CIndexBufferVulkan16FreeBackingStoreEv */
};

// <009A6049> vulkan/indexbuffervulkan.h:38
void CIndexBufferVulkan::CIndexBufferVulkan(VkDevice pDeviceVulkan, RenderBufferType_t nType, const BufferDesc_t& desc, RenderBufferFlags_t nExtraUsageFlags)
{
} /* size: 0 */

// <007BF434> vulkan/indexbuffervulkan.h:48
inline void CIndexBufferVulkan::GetBufferDeviceAddress()
{
} /* size: 0 */

// <005A44C8> vulkan/indexbuffervulkan.h:69
void CIndexBufferVulkan::VmaGetBufferSize()
{
} /* size: 0 */

// <0051BECC> vulkan/indexbuffervulkan.h:69
inline void CIndexBufferVulkan::VmaGetBufferSize()
{
} /* size: 0 */

// <005A44B0> vulkan/indexbuffervulkan.h:70
void CIndexBufferVulkan::VmaGetRelocatable()
{
} /* size: 0 */

// <0051BEB3> vulkan/indexbuffervulkan.h:70
inline void CIndexBufferVulkan::VmaGetRelocatable()
{
} /* size: 0 */

// <008770FB> vulkan/indexbuffervulkan.h:93
inline void CIndexBufferVulkan::EnsureAllocated()
{
} /* size: 0 */

// <00A55E53> vulkan/indexbuffervulkan.h:104
inline void CIndexBufferVulkan::GetVkBuffer()
{
} /* size: 0 */

// <00A55E3A> vulkan/indexbuffervulkan.h:121
inline void CIndexBufferVulkan::GetBindOffset()
{
} /* size: 0 */

// <00A55E21> vulkan/indexbuffervulkan.h:126
inline void CIndexBufferVulkan::GetIndexSize()
{
} /* size: 0 */

