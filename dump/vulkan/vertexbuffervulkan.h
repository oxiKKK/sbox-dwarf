
//
// vulkan/vertexbuffervulkan.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 23
//	classes: 5
//

// <007BEC19> vulkan/vertexbuffervulkan.h:34
void IBufferMovedListener::IBufferMovedListener()
{
} /* size: 0 */

// <007BEBFC> vulkan/vertexbuffervulkan.h:34
inline void IBufferMovedListener::IBufferMovedListener()
{
} /* size: 0 */

// <00407AF8> vulkan/vertexbuffervulkan.h:34
// member functions: 8
// member variable: 1
// vtable entries: 2
// class size: 8
class IBufferMovedListener {
	int ()(void) * * _vptr.IBufferMovedListener; /* 0 8 */
	/* vulkan/vertexbuffervulkan.h:37 */
	virtual void ~IBufferMovedListener(IBufferMovedListener* );
	/* vulkan/vertexbuffervulkan.h:40 */
	virtual void NotifyBufferMoved(IBufferMovedListener* , CVertexBufferVulkan* , CRenderContextVulkan* , VkBuffer);
	/* vulkan/vertexbuffervulkan.h:43 */
	virtual void NotifyOldBufferDestroyed(IBufferMovedListener* , CUtlVector<CRefCounted<CRefCountServiceBase<true, CRefMT> >*, CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >);
	void IBufferMovedListener(class IBufferMovedListener *, const class IBufferMovedListener  &); /* linkage=_ZN20IBufferMovedListenerC4ERKS_ */
	void IBufferMovedListener(class IBufferMovedListener *); /* linkage=_ZN20IBufferMovedListenerC4Ev */
	virtual void ~IBufferMovedListener(class IBufferMovedListener *); /* linkage=_ZN20IBufferMovedListenerD4Ev */
	virtual void NotifyBufferMoved(class IBufferMovedListener *, class CVertexBufferVulkan *, class CRenderContextVulkan *, VkBuffer); /* linkage=_ZN20IBufferMovedListener17NotifyBufferMovedEP19CVertexBufferVulkanP20CRenderContextVulkanP10VkBuffer_T */
	virtual void NotifyOldBufferDestroyed(class IBufferMovedListener *, class CUtlVector<CRefCounted<CRefCountServiceBase<true, CRefMT> >*, CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >); /* linkage=_ZN20IBufferMovedListener24NotifyOldBufferDestroyedER10CUtlVectorIP11CRefCountedI20CRefCountServiceBaseILb1E6CRefMTEE10CUtlMemoryIS6_iEE */
};

// <007A6DF9> vulkan/vertexbuffervulkan.h:34
// member functions: 10
// member variable: 1
// vtable entries: 2
// class size: 8
class IBufferMovedListener {
	void IBufferMovedListener(IBufferMovedListener* , const IBufferMovedListener& );
	void IBufferMovedListener(IBufferMovedListener* );
	int ()(void) * * _vptr.IBufferMovedListener; /* 0 8 */
	/* vulkan/vertexbuffervulkan.h:37 */
	virtual void ~IBufferMovedListener(IBufferMovedListener* );
	/* vulkan/vertexbuffervulkan.h:40 */
	virtual void NotifyBufferMoved(IBufferMovedListener* , CVertexBufferVulkan* , CRenderContextVulkan* , VkBuffer);
	/* vulkan/vertexbuffervulkan.h:43 */
	virtual void NotifyOldBufferDestroyed(IBufferMovedListener* , CUtlVector<CRefCounted<CRefCountServiceBase<true, CRefMT> >*, CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >);
	void IBufferMovedListener(class IBufferMovedListener *, const class IBufferMovedListener  &); /* linkage=_ZN20IBufferMovedListenerC4ERKS_ */
	void IBufferMovedListener(class IBufferMovedListener *); /* linkage=_ZN20IBufferMovedListenerC4Ev */
	virtual void ~IBufferMovedListener(class IBufferMovedListener *); /* linkage=_ZN20IBufferMovedListenerD4Ev */
	virtual void NotifyBufferMoved(class IBufferMovedListener *, class CVertexBufferVulkan *, class CRenderContextVulkan *, VkBuffer); /* linkage=_ZN20IBufferMovedListener17NotifyBufferMovedEP19CVertexBufferVulkanP20CRenderContextVulkanP10VkBuffer_T */
	virtual void NotifyOldBufferDestroyed(class IBufferMovedListener *, class CUtlVector<CRefCounted<CRefCountServiceBase<true, CRefMT> >*, CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >); /* linkage=_ZN20IBufferMovedListener24NotifyOldBufferDestroyedER10CUtlVectorIP11CRefCountedI20CRefCountServiceBaseILb1E6CRefMTEE10CUtlMemoryIS6_iEE */
};

// <007BF96D> vulkan/vertexbuffervulkan.h:37
void IBufferMovedListener::~IBufferMovedListener()
{
} /* size: 0 */

// <007BF93D> vulkan/vertexbuffervulkan.h:37
inline void IBufferMovedListener::~IBufferMovedListener()
{
} /* size: 0 */

// <00407A5A> vulkan/vertexbuffervulkan.h:47
// member functions: 7
// member variables: 2
// class size: 24
class CBufferMovedListenerDeferredDeletion : public CRefCounted<CRefCountServiceBase<true, CRefMT> > {
public:
	/* class CRefCounted<CRefCountServiceBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	/* vulkan/vertexbuffervulkan.h:50 */
	void CBufferMovedListenerDeferredDeletion(CBufferMovedListenerDeferredDeletion* , IBufferMovedListener* );
	/* vulkan/vertexbuffervulkan.h:55 */
	virtual void ~CBufferMovedListenerDeferredDeletion(CBufferMovedListenerDeferredDeletion* );
private:
	/* vulkan/vertexbuffervulkan.h:61 */
	void CBufferMovedListenerDeferredDeletion(CBufferMovedListenerDeferredDeletion* );
	IBufferMovedListener * m_pBufferMovedListener; /* 16 8 */
	void CBufferMovedListenerDeferredDeletion(class CBufferMovedListenerDeferredDeletion *, class IBufferMovedListener *); /* linkage=_ZN36CBufferMovedListenerDeferredDeletionC4EP20IBufferMovedListener */
	virtual void ~CBufferMovedListenerDeferredDeletion(class CBufferMovedListenerDeferredDeletion *); /* linkage=_ZN36CBufferMovedListenerDeferredDeletionD4Ev */
	void CBufferMovedListenerDeferredDeletion(class CBufferMovedListenerDeferredDeletion *); /* linkage=_ZN36CBufferMovedListenerDeferredDeletionC4Ev */
	void CBufferMovedListenerDeferredDeletion(class CBufferMovedListenerDeferredDeletion *, const class CBufferMovedListenerDeferredDeletion  &); /* linkage=_ZN36CBufferMovedListenerDeferredDeletionC4ERKS_ */
};

// <007A7C2F> vulkan/vertexbuffervulkan.h:47
// member functions: 8
// member variables: 2
// class size: 24
class CBufferMovedListenerDeferredDeletion : public CRefCounted<CRefCountServiceBase<true, CRefMT> > {
public:
	/* class CRefCounted<CRefCountServiceBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	void CBufferMovedListenerDeferredDeletion(CBufferMovedListenerDeferredDeletion* , const CBufferMovedListenerDeferredDeletion& );
	/* vulkan/vertexbuffervulkan.h:50 */
	void CBufferMovedListenerDeferredDeletion(CBufferMovedListenerDeferredDeletion* , IBufferMovedListener* );
	/* vulkan/vertexbuffervulkan.h:55 */
	virtual void ~CBufferMovedListenerDeferredDeletion(CBufferMovedListenerDeferredDeletion* );
private:
	/* vulkan/vertexbuffervulkan.h:61 */
	void CBufferMovedListenerDeferredDeletion(CBufferMovedListenerDeferredDeletion* );
	IBufferMovedListener * m_pBufferMovedListener; /* 16 8 */
	void CBufferMovedListenerDeferredDeletion(class CBufferMovedListenerDeferredDeletion *, class IBufferMovedListener *); /* linkage=_ZN36CBufferMovedListenerDeferredDeletionC4EP20IBufferMovedListener */
	virtual void ~CBufferMovedListenerDeferredDeletion(class CBufferMovedListenerDeferredDeletion *); /* linkage=_ZN36CBufferMovedListenerDeferredDeletionD4Ev */
	void CBufferMovedListenerDeferredDeletion(class CBufferMovedListenerDeferredDeletion *); /* linkage=_ZN36CBufferMovedListenerDeferredDeletionC4Ev */
	void CBufferMovedListenerDeferredDeletion(class CBufferMovedListenerDeferredDeletion *, const class CBufferMovedListenerDeferredDeletion  &); /* linkage=_ZN36CBufferMovedListenerDeferredDeletionC4ERKS_ */
};

// <007BF921> vulkan/vertexbuffervulkan.h:50
void CBufferMovedListenerDeferredDeletion::CBufferMovedListenerDeferredDeletion(IBufferMovedListener* pVmaObject)
{
} /* size: 0 */

// <007BF8FC> vulkan/vertexbuffervulkan.h:50
inline void CBufferMovedListenerDeferredDeletion::CBufferMovedListenerDeferredDeletion(IBufferMovedListener* pVmaObject)
{
} /* size: 0 */

// <00C4EBEB> vulkan/vertexbuffervulkan.h:55
void CBufferMovedListenerDeferredDeletion::~CBufferMovedListenerDeferredDeletion()
{
} /* size: 0 */

// <00C4EBBB> vulkan/vertexbuffervulkan.h:55
inline void CBufferMovedListenerDeferredDeletion::~CBufferMovedListenerDeferredDeletion()
{
} /* size: 0 */

// <007BF7F0> vulkan/vertexbuffervulkan.h:55
// function calls: 3
void CBufferMovedListenerDeferredDeletion::~CBufferMovedListenerDeferredDeletion()
{
	CRefCountServiceBase<true, CRefMT>::~CRefCountServiceBase(); // 328
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::~CRefCounted(); // 58
	CBufferMovedListenerDeferredDeletion::~CBufferMovedListenerDeferredDeletion(); // 58
} /* size: 59, inline expansions: 3 (25 bytes) */

// <00C7D273> vulkan/vertexbuffervulkan.h:71
// member functions: 64
// member variables: 18
// static member variables: 2
// vtable entries: 8
// class size: 248
class CVertexBufferVulkan : public CVertexBufferBase, public CDescriptorSetReferenced, public IVmaAllocationBuffer {
public:
	/* class CVertexBufferBase <ancestor>; */ /* 0 0 */
	/* class CDescriptorSetReferenced <ancestor>; */ /* 112 16 */
	/* class IVmaAllocationBuffer <ancestor>; */ /* 128 8 */
	void CVertexBufferVulkan(CVertexBufferVulkan* , const CVertexBufferVulkan& );
	/* vulkan/vertexbuffervulkan.cpp:31 */
	void CVertexBufferVulkan(CVertexBufferVulkan* , VkDevice, RenderBufferType_t, const BufferDesc_t& , RenderBufferFlags_t, ImageFormat, VulkanMemoryPoolType_t, IBufferMovedListener* );
	/* vulkan/vertexbuffervulkan.cpp:50 */
	virtual void ~CVertexBufferVulkan(CVertexBufferVulkan* );
	/* vulkan/vertexbuffervulkan.cpp:62 */
	virtual void DeleteThis(CVertexBufferVulkan* );
	/* vulkan/vertexbuffervulkan.cpp:70 */
	void Reset(CVertexBufferVulkan* , const BufferDesc_t& , RenderBufferFlags_t, ImageFormat);
	/* vulkan/vertexbuffervulkan.cpp:232 */
	bool SetVertexData(CVertexBufferVulkan* , CRenderContextVulkan* , VulkanCommandBuffer_t* , const void* , int, int);
	/* vulkan/vertexbuffervulkan.cpp:335 */
	bool Lock(CVertexBufferVulkan* , VulkanCommandBuffer_t* , int, LockDesc_t* );
	/* vulkan/vertexbuffervulkan.cpp:418 */
	void Unlock(CVertexBufferVulkan* , CRenderContextVulkan* , VulkanCommandBuffer_t* , int);
	/* vulkan/vertexbuffervulkan.cpp:550 */
	bool LockRegion(CVertexBufferVulkan* , VulkanCommandBuffer_t* , int, int, LockDesc_t* );
	/* vulkan/vertexbuffervulkan.cpp:567 */
	void UnlockRegion(CVertexBufferVulkan* , CRenderContextVulkan* , VulkanCommandBuffer_t* , int, int, LockDesc_t* );
	/* vulkan/vertexbuffervulkan.h:173 */
	int32_t GetBindOffset(const CVertexBufferVulkan* );
	/* vulkan/vertexbuffervulkan.h:182 */
	int32_t GetUAVHiddenCounterBindOffset(const CVertexBufferVulkan* );
	/* vulkan/vertexbuffervulkan.h:194 */
	bool HasUAVHiddenCounter(const CVertexBufferVulkan* );
	/* vulkan/vertexbuffervulkan.h:164 */
	VkBuffer GetVKBuffer(const CVertexBufferVulkan* );
	/* vulkan/vertexbuffervulkan.h:100 */
	VkBufferView GetTexelBufferView(const CVertexBufferVulkan* );
	/* vulkan/vertexbuffervulkan.h:105 */
	const VkBufferView* GetTexelBufferViewPtr(const CVertexBufferVulkan* );
	/* vulkan/vertexbuffervulkan.h:106 */
	VkDeviceSize GetMemoryOffset(const CVertexBufferVulkan* );
	/* vulkan/vertexbuffervulkan.h:107 */
	VkDeviceAddress GetBufferDeviceAddress(const CVertexBufferVulkan* );
	/* vulkan/vertexbuffervulkan.h:108 */
	VkDeviceSize GetAllocatedSize(const CVertexBufferVulkan* );
	/* vulkan/vertexbuffervulkan.h:203 */
	int GetRemainingSizeInBytes(const CVertexBufferVulkan* );
	/* vulkan/vertexbuffervulkan.cpp:495 */
	void* AllocatePerFrameDynamicPooled(CVertexBufferVulkan* , CRenderContextVulkan* , VulkanCommandBuffer_t* , int);
	/* vulkan/vertexbuffervulkan.cpp:518 */
	bool Allocate(CVertexBufferVulkan* , VkBufferUsageFlags, VulkanMemoryPoolType_t);
	/* vulkan/vertexbuffervulkan.cpp:102 */
	bool Allocate(CVertexBufferVulkan* , CRenderContextVulkan* , VulkanCommandBuffer_t* , const void* );
	/* vulkan/vertexbuffervulkan.h:118 */
	virtual VkDeviceSize VmaGetBufferSize(const CVertexBufferVulkan* );
	/* vulkan/vertexbuffervulkan.cpp:607 */
	virtual bool VmaGetRelocatable(const CVertexBufferVulkan* );
	/* vulkan/vertexbuffervulkan.cpp:620 */
	virtual uint64_t VmaCreateNewVulkanObject(CVertexBufferVulkan* , uint64_t* );
	/* vulkan/vertexbuffervulkan.cpp:650 */
	virtual void VmaAssignNewObject(CVertexBufferVulkan* , CRenderContextVulkan* , uint64_t, CUtlVector<CRefCounted<CRefCountServiceBase<true, CRefMT> >*, CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >);
	/* vulkan/vertexbuffervulkan.cpp:639 */
	virtual void VmaCopyAdditionalBufferResources(CVertexBufferVulkan* , CRenderContextVulkan* , VkBuffer);
	static const uint32_t k_nMagicAlive = 1611510015; /* 0 0 */
	static const uint32_t k_nMagicDead = 3735924991; /* 0 0 */
	/* vulkan/vertexbuffervulkan.h:128 */
	bool IsValid(const CVertexBufferVulkan* );
protected:
	/* vulkan/vertexbuffervulkan.cpp:189 */
	void Deallocate(CVertexBufferVulkan* );
	/* vulkan/vertexbuffervulkan.cpp:213 */
	virtual void* AllocateBackingStore(CVertexBufferVulkan* , int);
	/* vulkan/vertexbuffervulkan.cpp:220 */
	virtual void FreeBackingStore(CVertexBufferVulkan* );
	VkDeviceMemory m_pStagingMem; /* 136 8 */
	VkDeviceSize m_nMemoryOffset; /* 144 8 */
	VmaAllocation m_pVmaAllocation; /* 152 8 */
	VkBuffer m_pVulkanBuffer; /* 160 8 */
	int m_nCurrentOffset; /* 168 4 */
	bool m_bIsLocked; /* 172 1 */
	VulkanMemoryPoolType_t m_nDesiredMemoryPool; /* 176 4 */
	VkDevice m_pDeviceVulkan; /* 184 8 */
	RenderBufferFlags_t m_nFlags; /* 192 4 */
	VkDeviceSize m_nActualBufferSize; /* 200 8 */
	VkDeviceAddress m_nBufferDeviceAddress; /* 208 8 */
	VkFormat m_nGpuBufferFormat; /* 216 4 */
	VkBufferView m_pTexelBufferView; /* 224 8 */
	IBufferMovedListener * m_pBufferMovedListener; /* 232 8 */
	uint32_t m_nMagic; /* 240 4 */
	int32_t GetBindOffset(const class CVertexBufferVulkan  *); /* linkage=_ZNK19CVertexBufferVulkan13GetBindOffsetEv */
	VkBuffer GetVKBuffer(const class CVertexBufferVulkan  *); /* linkage=_ZNK19CVertexBufferVulkan11GetVKBufferEv */
	const VkBufferView  * GetTexelBufferViewPtr(const class CVertexBufferVulkan  *); /* linkage=_ZNK19CVertexBufferVulkan21GetTexelBufferViewPtrEv */
	VkDeviceAddress GetBufferDeviceAddress(const class CVertexBufferVulkan  *); /* linkage=_ZNK19CVertexBufferVulkan22GetBufferDeviceAddressEv */
	VkDeviceSize GetMemoryOffset(const class CVertexBufferVulkan  *); /* linkage=_ZNK19CVertexBufferVulkan15GetMemoryOffsetEv */
	bool Allocate(class CVertexBufferVulkan *, class CRenderContextVulkan *, class VulkanCommandBuffer_t *, const void  *); /* linkage=_ZN19CVertexBufferVulkan8AllocateEP20CRenderContextVulkanP21VulkanCommandBuffer_tPKv */
	bool SetVertexData(class CVertexBufferVulkan *, class CRenderContextVulkan *, class VulkanCommandBuffer_t *, const void  *, int, int); /* linkage=_ZN19CVertexBufferVulkan13SetVertexDataEP20CRenderContextVulkanP21VulkanCommandBuffer_tPKvii */
	void UnlockRegion(class CVertexBufferVulkan *, class CRenderContextVulkan *, class VulkanCommandBuffer_t *, int, int, class LockDesc_t *); /* linkage=_ZN19CVertexBufferVulkan12UnlockRegionEP20CRenderContextVulkanP21VulkanCommandBuffer_tiiP10LockDesc_t */
	bool LockRegion(class CVertexBufferVulkan *, class VulkanCommandBuffer_t *, int, int, class LockDesc_t *); /* linkage=_ZN19CVertexBufferVulkan10LockRegionEP21VulkanCommandBuffer_tiiP10LockDesc_t */
	/* <c877d4> vulkan/vertexbuffervulkan.cpp:418 */
	void Unlock(class CVertexBufferVulkan *, class CRenderContextVulkan *, class VulkanCommandBuffer_t *, int); /* linkage=_ZN19CVertexBufferVulkan6UnlockEP20CRenderContextVulkanP21VulkanCommandBuffer_ti */
	bool Lock(class CVertexBufferVulkan *, class VulkanCommandBuffer_t *, int, class LockDesc_t *); /* linkage=_ZN19CVertexBufferVulkan4LockEP21VulkanCommandBuffer_tiP10LockDesc_t */
	void * AllocatePerFrameDynamicPooled(class CVertexBufferVulkan *, class CRenderContextVulkan *, class VulkanCommandBuffer_t *, int); /* linkage=_ZN19CVertexBufferVulkan29AllocatePerFrameDynamicPooledEP20CRenderContextVulkanP21VulkanCommandBuffer_ti */
	bool HasUAVHiddenCounter(const class CVertexBufferVulkan  *); /* linkage=_ZNK19CVertexBufferVulkan19HasUAVHiddenCounterEv */
	int32_t GetUAVHiddenCounterBindOffset(const class CVertexBufferVulkan  *); /* linkage=_ZNK19CVertexBufferVulkan29GetUAVHiddenCounterBindOffsetEv */
	bool IsValid(const class CVertexBufferVulkan  *); /* linkage=_ZNK19CVertexBufferVulkan7IsValidEv */
	VkDeviceSize GetAllocatedSize(const class CVertexBufferVulkan  *); /* linkage=_ZNK19CVertexBufferVulkan16GetAllocatedSizeEv */
	VkBufferView GetTexelBufferView(const class CVertexBufferVulkan  *); /* linkage=_ZNK19CVertexBufferVulkan18GetTexelBufferViewEv */
	void Reset(class CVertexBufferVulkan *, const class BufferDesc_t  &, enum RenderBufferFlags_t, enum ImageFormat); /* linkage=_ZN19CVertexBufferVulkan5ResetERK12BufferDesc_t19RenderBufferFlags_t11ImageFormat */
	bool Allocate(class CVertexBufferVulkan *, VkBufferUsageFlags, enum VulkanMemoryPoolType_t); /* linkage=_ZN19CVertexBufferVulkan8AllocateEj22VulkanMemoryPoolType_t */
	void CVertexBufferVulkan(class CVertexBufferVulkan *, VkDevice, enum RenderBufferType_t, const class BufferDesc_t  &, enum RenderBufferFlags_t, enum ImageFormat, enum VulkanMemoryPoolType_t, class IBufferMovedListener *); /* linkage=_ZN19CVertexBufferVulkanC4EP10VkDevice_T18RenderBufferType_tRK12BufferDesc_t19RenderBufferFlags_t11ImageFormat22VulkanMemoryPoolType_tP20IBufferMovedListener */
	void CVertexBufferVulkan(class CVertexBufferVulkan *, const class CVertexBufferVulkan  &); /* linkage=_ZN19CVertexBufferVulkanC4ERKS_ */
	virtual void ~CVertexBufferVulkan(class CVertexBufferVulkan *); /* linkage=_ZN19CVertexBufferVulkanD4Ev */
	virtual void DeleteThis(class CVertexBufferVulkan *); /* linkage=_ZN19CVertexBufferVulkan10DeleteThisEv */
	int GetRemainingSizeInBytes(const class CVertexBufferVulkan  *); /* linkage=_ZNK19CVertexBufferVulkan23GetRemainingSizeInBytesEv */
	/* <c86e9d> vulkan/vertexbuffervulkan.h:118 */
	virtual VkDeviceSize VmaGetBufferSize(const class CVertexBufferVulkan  *); /* linkage=_ZNK19CVertexBufferVulkan16VmaGetBufferSizeEv */
	/* <c86ec8> vulkan/vertexbuffervulkan.cpp:607 */
	virtual bool VmaGetRelocatable(const class CVertexBufferVulkan  *); /* linkage=_ZNK19CVertexBufferVulkan17VmaGetRelocatableEv */
	virtual uint64_t VmaCreateNewVulkanObject(class CVertexBufferVulkan *, uint64_t *); /* linkage=_ZN19CVertexBufferVulkan24VmaCreateNewVulkanObjectEPm */
	virtual void VmaAssignNewObject(class CVertexBufferVulkan *, class CRenderContextVulkan *, uint64_t, class CUtlVector<CRefCounted<CRefCountServiceBase<true, CRefMT> >*, CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >); /* linkage=_ZN19CVertexBufferVulkan18VmaAssignNewObjectEP20CRenderContextVulkanmR10CUtlVectorIP11CRefCountedI20CRefCountServiceBaseILb1E6CRefMTEE10CUtlMemoryIS8_iEE */
	/* <c86f01> vulkan/vertexbuffervulkan.cpp:639 */
	virtual void VmaCopyAdditionalBufferResources(class CVertexBufferVulkan *, class CRenderContextVulkan *, VkBuffer); /* linkage=_ZN19CVertexBufferVulkan32VmaCopyAdditionalBufferResourcesEP20CRenderContextVulkanP10VkBuffer_T */
	/* <c876fa> vulkan/vertexbuffervulkan.cpp:189 */
	void Deallocate(class CVertexBufferVulkan *); /* linkage=_ZN19CVertexBufferVulkan10DeallocateEv */
	/* <c86f6c> vulkan/vertexbuffervulkan.cpp:213 */
	virtual void * AllocateBackingStore(class CVertexBufferVulkan *, int); /* linkage=_ZN19CVertexBufferVulkan20AllocateBackingStoreEi */
	/* <c86fc1> vulkan/vertexbuffervulkan.cpp:220 */
	virtual void FreeBackingStore(class CVertexBufferVulkan *); /* linkage=_ZN19CVertexBufferVulkan16FreeBackingStoreEv */
} __attribute__((__aligned__(8)));

// <009A6095> vulkan/vertexbuffervulkan.h:78
void CVertexBufferVulkan::CVertexBufferVulkan(VkDevice pDevice, RenderBufferType_t nType, const BufferDesc_t& desc, RenderBufferFlags_t flags, ImageFormat gpuBufferFormat, VulkanMemoryPoolType_t nDesiredMemoryPool, IBufferMovedListener* pBufferMoveListener)
{
} /* size: 0 */

// <0087700F> vulkan/vertexbuffervulkan.h:100
inline void CVertexBufferVulkan::GetTexelBufferView()
{
} /* size: 0 */

// <004B8145> vulkan/vertexbuffervulkan.h:105
inline void CVertexBufferVulkan::GetTexelBufferViewPtr()
{
} /* size: 0 */

// <00A5934D> vulkan/vertexbuffervulkan.h:106
inline void CVertexBufferVulkan::GetMemoryOffset()
{
} /* size: 0 */

// <00A59334> vulkan/vertexbuffervulkan.h:107
inline void CVertexBufferVulkan::GetBufferDeviceAddress()
{
} /* size: 0 */

// <00876FDD> vulkan/vertexbuffervulkan.h:108
inline void CVertexBufferVulkan::GetAllocatedSize()
{
} /* size: 0 */

// <00C86E9D> vulkan/vertexbuffervulkan.h:118
void CVertexBufferVulkan::VmaGetBufferSize()
{
} /* size: 12 */

// <00C86407> vulkan/vertexbuffervulkan.h:118
inline void CVertexBufferVulkan::VmaGetBufferSize()
{
} /* size: 0 */

// <00876FC4> vulkan/vertexbuffervulkan.h:128
inline void CVertexBufferVulkan::IsValid()
{
} /* size: 0 */

// <00A5931B> vulkan/vertexbuffervulkan.h:164
inline void CVertexBufferVulkan::GetVKBuffer()
{
} /* size: 0 */

// <00876F92> vulkan/vertexbuffervulkan.h:173
inline void CVertexBufferVulkan::GetBindOffset()
{
} /* size: 0 */

// <0087DF67> vulkan/vertexbuffervulkan.h:182
// variable: 1
void CVertexBufferVulkan::GetUAVHiddenCounterBindOffset()
{
	int32_t nOffset; // 186
	{
	}
} /* size: 23, variables: 1 */

// <00876F22> vulkan/vertexbuffervulkan.h:182
// variables: 4
inline void CVertexBufferVulkan::GetUAVHiddenCounterBindOffset()
{
	const char   __FUNCTION__; // 23345
	int32_t nOffset; // 186
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 185
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 187
	}
} /* size: 0, variables: 2 */

// <00C863EE> vulkan/vertexbuffervulkan.h:194
inline void CVertexBufferVulkan::HasUAVHiddenCounter()
{
} /* size: 0 */

