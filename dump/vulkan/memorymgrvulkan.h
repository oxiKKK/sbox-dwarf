
//
// vulkan/memorymgrvulkan.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 55
//	classes: 7
//	structs: 2
//

// <00599B81> vulkan/memorymgrvulkan.h:64
void VulkanMemoryPool_t::VulkanMemoryPool_t()
{
} /* size: 0 */

// <00599B64> vulkan/memorymgrvulkan.h:64
inline void VulkanMemoryPool_t::VulkanMemoryPool_t()
{
} /* size: 0 */

// <0056DA4D> vulkan/memorymgrvulkan.h:64
// member function: 1
// member variables: 9
// struct size: 64
struct VulkanMemoryPool_t {
	VkDeviceMemory m_pGPUMemory; /* 0 8 */
	VkDeviceSize m_nPoolSize; /* 8 8 */
	int32 m_nNumAllocations; /* 16 4 */
	CInterlockedUInt m_nCurrentOffset __attribute__((__aligned__(4))); /* 20 4 */
	int64 m_nTotalFreeSize; /* 24 8 */
	uint m_nCurrentFrameGPU; /* 32 4 */
	uint8 * m_pMappedBuffer; /* 40 8 */
	VkBuffer m_pVulkanBuffer; /* 48 8 */
	VkDeviceSize m_nAlignment; /* 56 8 */
	void VulkanMemoryPool_t(VulkanMemoryPool_t* );
} __attribute__((__aligned__(8)));

// <0059D245> vulkan/memorymgrvulkan.h:98
void CommandBufferPool_t::~CommandBufferPool_t()
{
} /* size: 0 */

// <0059D228> vulkan/memorymgrvulkan.h:98
inline void CommandBufferPool_t::~CommandBufferPool_t()
{
} /* size: 0 */

// <00593376> vulkan/memorymgrvulkan.h:98
void CommandBufferPool_t::CommandBufferPool_t()
{
} /* size: 0 */

// <00593359> vulkan/memorymgrvulkan.h:98
inline void CommandBufferPool_t::CommandBufferPool_t()
{
} /* size: 0 */

// <00471095> vulkan/memorymgrvulkan.h:98
// member variables: 6
// struct size: 368
struct CommandBufferPool_t {
	int32 m_nAllocatedCommandBuffers[3]; /* 0 12 */
	int32 m_nTotalAllocatedCommandBuffers; /* 12 4 */
	int32 m_nCommandBuffersUsedThisFrame; /* 16 4 */
	CUtlMovingAverage<30> m_averageCommandBuffersPerFrame; /* 24 136 */
	CTSQueue<VkCommandBuffer_T*, false> m_availableCommandBuffers[3] __attribute__((__aligned__(16))); /* 160 192 */
	int32_t m_nTrimCommandPoolCount; /* 352 4 */
} __attribute__((__aligned__(16)));

// <00C86325> vulkan/memorymgrvulkan.h:128
void IVmaAllocationBase::IVmaAllocationBase()
{
} /* size: 0 */

// <00C86308> vulkan/memorymgrvulkan.h:128
inline void IVmaAllocationBase::IVmaAllocationBase()
{
} /* size: 0 */

// <00405AE4> vulkan/memorymgrvulkan.h:128
// member functions: 12
// member variable: 1
// vtable entries: 4
// class size: 8
class IVmaAllocationBase {
	/* vulkan/memorymgrvulkan.h:131 */
	enum VmaAllocationObjectType_t {
		VULKAN_BUFFER = 0,
		VULKAN_IMAGE = 1,
	};
	int ()(void) * * _vptr.IVmaAllocationBase; /* 0 8 */
	/* vulkan/memorymgrvulkan.h:137 */
	virtual void ~IVmaAllocationBase(IVmaAllocationBase* );
	/* vulkan/memorymgrvulkan.h:140 */
	virtual VmaAllocationObjectType_t VmaGetAllocationObjectType(const IVmaAllocationBase* );
	/* vulkan/memorymgrvulkan.h:144 */
	virtual bool VmaGetRelocatable(const IVmaAllocationBase* );
	/* vulkan/memorymgrvulkan.h:148 */
	virtual uint64_t VmaCreateNewVulkanObject(IVmaAllocationBase* , uint64_t* );
	/* vulkan/memorymgrvulkan.h:157 */
	virtual void VmaAssignNewObject(IVmaAllocationBase* , CRenderContextVulkan* , uint64_t, CUtlVector<CRefCounted<CRefCountServiceBase<true, CRefMT> >*, CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >);
	void IVmaAllocationBase(class IVmaAllocationBase *, const class IVmaAllocationBase  &); /* linkage=_ZN18IVmaAllocationBaseC4ERKS_ */
	void IVmaAllocationBase(class IVmaAllocationBase *); /* linkage=_ZN18IVmaAllocationBaseC4Ev */
	virtual void ~IVmaAllocationBase(class IVmaAllocationBase *); /* linkage=_ZN18IVmaAllocationBaseD4Ev */
	virtual enum VmaAllocationObjectType_t VmaGetAllocationObjectType(const class IVmaAllocationBase  *); /* linkage=_ZNK18IVmaAllocationBase26VmaGetAllocationObjectTypeEv */
	virtual bool VmaGetRelocatable(const class IVmaAllocationBase  *); /* linkage=_ZNK18IVmaAllocationBase17VmaGetRelocatableEv */
	virtual uint64_t VmaCreateNewVulkanObject(class IVmaAllocationBase *, uint64_t *); /* linkage=_ZN18IVmaAllocationBase24VmaCreateNewVulkanObjectEPm */
	virtual void VmaAssignNewObject(class IVmaAllocationBase *, class CRenderContextVulkan *, uint64_t, class CUtlVector<CRefCounted<CRefCountServiceBase<true, CRefMT> >*, CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >); /* linkage=_ZN18IVmaAllocationBase18VmaAssignNewObjectEP20CRenderContextVulkanmR10CUtlVectorIP11CRefCountedI20CRefCountServiceBaseILb1E6CRefMTEE10CUtlMemoryIS8_iEE */
};

// <00471126> vulkan/memorymgrvulkan.h:128
// member functions: 14
// member variable: 1
// vtable entries: 4
// class size: 8
class IVmaAllocationBase {
	/* vulkan/memorymgrvulkan.h:131 */
	enum VmaAllocationObjectType_t {
		VULKAN_BUFFER = 0,
		VULKAN_IMAGE = 1,
	};
	void IVmaAllocationBase(IVmaAllocationBase* , const IVmaAllocationBase& );
	void IVmaAllocationBase(IVmaAllocationBase* );
	int ()(void) * * _vptr.IVmaAllocationBase; /* 0 8 */
	/* vulkan/memorymgrvulkan.h:137 */
	virtual void ~IVmaAllocationBase(IVmaAllocationBase* );
	/* vulkan/memorymgrvulkan.h:140 */
	virtual VmaAllocationObjectType_t VmaGetAllocationObjectType(const IVmaAllocationBase* );
	/* vulkan/memorymgrvulkan.h:144 */
	virtual bool VmaGetRelocatable(const IVmaAllocationBase* );
	/* vulkan/memorymgrvulkan.h:148 */
	virtual uint64_t VmaCreateNewVulkanObject(IVmaAllocationBase* , uint64_t* );
	/* vulkan/memorymgrvulkan.h:157 */
	virtual void VmaAssignNewObject(IVmaAllocationBase* , CRenderContextVulkan* , uint64_t, CUtlVector<CRefCounted<CRefCountServiceBase<true, CRefMT> >*, CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >);
	void IVmaAllocationBase(class IVmaAllocationBase *, const class IVmaAllocationBase  &); /* linkage=_ZN18IVmaAllocationBaseC4ERKS_ */
	void IVmaAllocationBase(class IVmaAllocationBase *); /* linkage=_ZN18IVmaAllocationBaseC4Ev */
	virtual void ~IVmaAllocationBase(class IVmaAllocationBase *); /* linkage=_ZN18IVmaAllocationBaseD4Ev */
	virtual enum VmaAllocationObjectType_t VmaGetAllocationObjectType(const class IVmaAllocationBase  *); /* linkage=_ZNK18IVmaAllocationBase26VmaGetAllocationObjectTypeEv */
	virtual bool VmaGetRelocatable(const class IVmaAllocationBase  *); /* linkage=_ZNK18IVmaAllocationBase17VmaGetRelocatableEv */
	virtual uint64_t VmaCreateNewVulkanObject(class IVmaAllocationBase *, uint64_t *); /* linkage=_ZN18IVmaAllocationBase24VmaCreateNewVulkanObjectEPm */
	virtual void VmaAssignNewObject(class IVmaAllocationBase *, class CRenderContextVulkan *, uint64_t, class CUtlVector<CRefCounted<CRefCountServiceBase<true, CRefMT> >*, CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >); /* linkage=_ZN18IVmaAllocationBase18VmaAssignNewObjectEP20CRenderContextVulkanmR10CUtlVectorIP11CRefCountedI20CRefCountServiceBaseILb1E6CRefMTEE10CUtlMemoryIS8_iEE */
};

// <00C869C1> vulkan/memorymgrvulkan.h:137
void IVmaAllocationBase::~IVmaAllocationBase()
{
} /* size: 0 */

// <00C86991> vulkan/memorymgrvulkan.h:137
inline void IVmaAllocationBase::~IVmaAllocationBase()
{
} /* size: 0 */

// <00C862F1> vulkan/memorymgrvulkan.h:161
void IVmaAllocationBuffer::IVmaAllocationBuffer()
{
} /* size: 0 */

// <00C862D4> vulkan/memorymgrvulkan.h:161
inline void IVmaAllocationBuffer::IVmaAllocationBuffer()
{
} /* size: 0 */

// <00474220> vulkan/memorymgrvulkan.h:161
// member functions: 12
// member variable: 1
// vtable entries: 3
// class size: 8
class IVmaAllocationBuffer : public IVmaAllocationBase {
public:
	/* class IVmaAllocationBase <ancestor>; */ /* 0 8 */
	void IVmaAllocationBuffer(IVmaAllocationBuffer* , const IVmaAllocationBuffer& );
	void IVmaAllocationBuffer(IVmaAllocationBuffer* );
	/* vulkan/memorymgrvulkan.h:165 */
	virtual void ~IVmaAllocationBuffer(IVmaAllocationBuffer* );
	/* vulkan/memorymgrvulkan.h:167 */
	virtual VmaAllocationObjectType_t VmaGetAllocationObjectType(const IVmaAllocationBuffer* );
	/* vulkan/memorymgrvulkan.h:172 */
	virtual VkDeviceSize VmaGetBufferSize(const IVmaAllocationBuffer* );
	/* vulkan/memorymgrvulkan.h:175 */
	virtual void VmaCopyAdditionalBufferResources(IVmaAllocationBuffer* , CRenderContextVulkan* , VkBuffer);
	void IVmaAllocationBuffer(class IVmaAllocationBuffer *, const class IVmaAllocationBuffer  &); /* linkage=_ZN20IVmaAllocationBufferC4ERKS_ */
	void IVmaAllocationBuffer(class IVmaAllocationBuffer *); /* linkage=_ZN20IVmaAllocationBufferC4Ev */
	virtual void ~IVmaAllocationBuffer(class IVmaAllocationBuffer *); /* linkage=_ZN20IVmaAllocationBufferD4Ev */
	virtual enum VmaAllocationObjectType_t VmaGetAllocationObjectType(const class IVmaAllocationBuffer  *); /* linkage=_ZNK20IVmaAllocationBuffer26VmaGetAllocationObjectTypeEv */
	virtual VkDeviceSize VmaGetBufferSize(const class IVmaAllocationBuffer  *); /* linkage=_ZNK20IVmaAllocationBuffer16VmaGetBufferSizeEv */
	virtual void VmaCopyAdditionalBufferResources(class IVmaAllocationBuffer *, class CRenderContextVulkan *, VkBuffer); /* linkage=_ZN20IVmaAllocationBuffer32VmaCopyAdditionalBufferResourcesEP20CRenderContextVulkanP10VkBuffer_T */
};

// <00C8697A> vulkan/memorymgrvulkan.h:165
void IVmaAllocationBuffer::~IVmaAllocationBuffer()
{
} /* size: 0 */

// <00C8694A> vulkan/memorymgrvulkan.h:165
inline void IVmaAllocationBuffer::~IVmaAllocationBuffer()
{
} /* size: 0 */

// <00C8691A> vulkan/memorymgrvulkan.h:167
void IVmaAllocationBuffer::VmaGetAllocationObjectType()
{
} /* size: 7 */

// <00C868E9> vulkan/memorymgrvulkan.h:175
void IVmaAllocationBuffer::VmaCopyAdditionalBufferResources(CRenderContextVulkan* pCopyContext, VkBuffer pNewBuffer)
{
} /* size: 0 */

// <00C4D1AF> vulkan/memorymgrvulkan.h:179
void IVmaAllocationImage::IVmaAllocationImage()
{
} /* size: 0 */

// <00C4D192> vulkan/memorymgrvulkan.h:179
inline void IVmaAllocationImage::IVmaAllocationImage()
{
} /* size: 0 */

// <0058130F> vulkan/memorymgrvulkan.h:179
// member functions: 8
// member variable: 1
// vtable entries: 2
// class size: 8
class IVmaAllocationImage : public IVmaAllocationBase {
public:
	/* class IVmaAllocationBase <ancestor>; */ /* 0 8 */
	/* vulkan/memorymgrvulkan.h:183 */
	virtual void ~IVmaAllocationImage(IVmaAllocationImage* );
	/* vulkan/memorymgrvulkan.h:185 */
	virtual VmaAllocationObjectType_t VmaGetAllocationObjectType(const IVmaAllocationImage* );
	/* vulkan/memorymgrvulkan.h:187 */
	virtual void CopyImage(IVmaAllocationImage* , CRenderContextVulkan* , VkImage);
	void IVmaAllocationImage(class IVmaAllocationImage *, const class IVmaAllocationImage  &); /* linkage=_ZN19IVmaAllocationImageC4ERKS_ */
	void IVmaAllocationImage(class IVmaAllocationImage *); /* linkage=_ZN19IVmaAllocationImageC4Ev */
	virtual void ~IVmaAllocationImage(class IVmaAllocationImage *); /* linkage=_ZN19IVmaAllocationImageD4Ev */
	virtual enum VmaAllocationObjectType_t VmaGetAllocationObjectType(const class IVmaAllocationImage  *); /* linkage=_ZNK19IVmaAllocationImage26VmaGetAllocationObjectTypeEv */
	virtual void CopyImage(class IVmaAllocationImage *, class CRenderContextVulkan *, VkImage); /* linkage=_ZN19IVmaAllocationImage9CopyImageEP20CRenderContextVulkanP9VkImage_T */
};

// <00C50475> vulkan/memorymgrvulkan.h:183
void IVmaAllocationImage::~IVmaAllocationImage()
{
} /* size: 0 */

// <00C50445> vulkan/memorymgrvulkan.h:183
inline void IVmaAllocationImage::~IVmaAllocationImage()
{
} /* size: 0 */

// <00C50417> vulkan/memorymgrvulkan.h:185
void IVmaAllocationImage::VmaGetAllocationObjectType()
{
} /* size: 10 */

// <00407C71> vulkan/memorymgrvulkan.h:195
// member functions: 7
// member variables: 2
// class size: 24
class CVmaAllocationDeferredDeletion : public CRefCounted<CRefCountServiceBase<true, CRefMT> > {
public:
	/* class CRefCounted<CRefCountServiceBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	/* vulkan/memorymgrvulkan.h:198 */
	void CVmaAllocationDeferredDeletion(CVmaAllocationDeferredDeletion* , IVmaAllocationBase* );
	/* vulkan/memorymgrvulkan.h:203 */
	virtual void ~CVmaAllocationDeferredDeletion(CVmaAllocationDeferredDeletion* );
private:
	/* vulkan/memorymgrvulkan.h:209 */
	void CVmaAllocationDeferredDeletion(CVmaAllocationDeferredDeletion* );
	IVmaAllocationBase * m_pVmaObject; /* 16 8 */
	void CVmaAllocationDeferredDeletion(class CVmaAllocationDeferredDeletion *, class IVmaAllocationBase *); /* linkage=_ZN30CVmaAllocationDeferredDeletionC4EP18IVmaAllocationBase */
	virtual void ~CVmaAllocationDeferredDeletion(class CVmaAllocationDeferredDeletion *); /* linkage=_ZN30CVmaAllocationDeferredDeletionD4Ev */
	void CVmaAllocationDeferredDeletion(class CVmaAllocationDeferredDeletion *); /* linkage=_ZN30CVmaAllocationDeferredDeletionC4Ev */
	void CVmaAllocationDeferredDeletion(class CVmaAllocationDeferredDeletion *, const class CVmaAllocationDeferredDeletion  &); /* linkage=_ZN30CVmaAllocationDeferredDeletionC4ERKS_ */
};

// <00518F59> vulkan/memorymgrvulkan.h:195
// member functions: 8
// member variables: 2
// class size: 24
class CVmaAllocationDeferredDeletion : public CRefCounted<CRefCountServiceBase<true, CRefMT> > {
public:
	/* class CRefCounted<CRefCountServiceBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	void CVmaAllocationDeferredDeletion(CVmaAllocationDeferredDeletion* , const CVmaAllocationDeferredDeletion& );
	/* vulkan/memorymgrvulkan.h:198 */
	void CVmaAllocationDeferredDeletion(CVmaAllocationDeferredDeletion* , IVmaAllocationBase* );
	/* vulkan/memorymgrvulkan.h:203 */
	virtual void ~CVmaAllocationDeferredDeletion(CVmaAllocationDeferredDeletion* );
private:
	/* vulkan/memorymgrvulkan.h:209 */
	void CVmaAllocationDeferredDeletion(CVmaAllocationDeferredDeletion* );
	IVmaAllocationBase * m_pVmaObject; /* 16 8 */
	void CVmaAllocationDeferredDeletion(class CVmaAllocationDeferredDeletion *, class IVmaAllocationBase *); /* linkage=_ZN30CVmaAllocationDeferredDeletionC4EP18IVmaAllocationBase */
	virtual void ~CVmaAllocationDeferredDeletion(class CVmaAllocationDeferredDeletion *); /* linkage=_ZN30CVmaAllocationDeferredDeletionD4Ev */
	void CVmaAllocationDeferredDeletion(class CVmaAllocationDeferredDeletion *); /* linkage=_ZN30CVmaAllocationDeferredDeletionC4Ev */
	void CVmaAllocationDeferredDeletion(class CVmaAllocationDeferredDeletion *, const class CVmaAllocationDeferredDeletion  &); /* linkage=_ZN30CVmaAllocationDeferredDeletionC4ERKS_ */
};

// <00C86898> vulkan/memorymgrvulkan.h:198
void CVmaAllocationDeferredDeletion::CVmaAllocationDeferredDeletion(IVmaAllocationBase* pVmaObject)
{
} /* size: 0 */

// <00C86873> vulkan/memorymgrvulkan.h:198
inline void CVmaAllocationDeferredDeletion::CVmaAllocationDeferredDeletion(IVmaAllocationBase* pVmaObject)
{
} /* size: 0 */

// <00C8671F> vulkan/memorymgrvulkan.h:203
// function calls: 5
void CVmaAllocationDeferredDeletion::~CVmaAllocationDeferredDeletion()
{
	IVmaAllocationBase::~IVmaAllocationBase(); // 165
	IVmaAllocationBuffer::~IVmaAllocationBuffer(); // 56
	CDescriptorSetReferenced::~CDescriptorSetReferenced(); // 56
	CVertexBufferVulkan::~CVertexBufferVulkan(); // 56
	CVertexBufferVulkan::~CVertexBufferVulkan(); // 205
} /* size: 0, inline expansions: 5 (0 bytes) */

// <00C86513> vulkan/memorymgrvulkan.h:203
// function calls: 8
void CVmaAllocationDeferredDeletion::~CVmaAllocationDeferredDeletion()
{
	IVmaAllocationBase::~IVmaAllocationBase(); // 165
	IVmaAllocationBuffer::~IVmaAllocationBuffer(); // 56
	CDescriptorSetReferenced::~CDescriptorSetReferenced(); // 56
	CVertexBufferVulkan::~CVertexBufferVulkan(); // 56
	CVertexBufferVulkan::~CVertexBufferVulkan(); // 205
	CRefCountServiceBase<true, CRefMT>::~CRefCountServiceBase(); // 328
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::~CRefCounted(); // 206
	CVmaAllocationDeferredDeletion::~CVmaAllocationDeferredDeletion(); // 206
} /* size: 0, inline expansions: 8 (0 bytes) */

// <00C864FA> vulkan/memorymgrvulkan.h:203
inline void CVmaAllocationDeferredDeletion::~CVmaAllocationDeferredDeletion()
{
} /* size: 0 */

// <00C503CC> vulkan/memorymgrvulkan.h:203
void CVmaAllocationDeferredDeletion::~CVmaAllocationDeferredDeletion()
{
} /* size: 0 */

// <00A59765> vulkan/memorymgrvulkan.h:203
// function calls: 3
void CVmaAllocationDeferredDeletion::~CVmaAllocationDeferredDeletion()
{
	CRefCountServiceBase<true, CRefMT>::~CRefCountServiceBase(); // 328
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::~CRefCounted(); // 206
	CVmaAllocationDeferredDeletion::~CVmaAllocationDeferredDeletion(); // 206
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0051C1DC> vulkan/memorymgrvulkan.h:203
// function calls: 8
void CVmaAllocationDeferredDeletion::~CVmaAllocationDeferredDeletion()
{
	CIndexBufferBase::GetBufferType(); // 151
	CRenderDeviceVulkan::MemoryManager(); // 157
	CIndexBufferVulkan::Deallocate(); // 149
	CIndexBufferVulkan::Deallocate(); // 56
	IVmaAllocationBase::~IVmaAllocationBase(); // 165
	IVmaAllocationBuffer::~IVmaAllocationBuffer(); // 57
	CIndexBufferVulkan::~CIndexBufferVulkan(); // 57
	CIndexBufferVulkan::~CIndexBufferVulkan(); // 205
} /* size: 205, inline expansions: 8 (401 bytes) */

// <0051BF4E> vulkan/memorymgrvulkan.h:203
// function calls: 11
void CVmaAllocationDeferredDeletion::~CVmaAllocationDeferredDeletion()
{
	CIndexBufferBase::GetBufferType(); // 151
	CRenderDeviceVulkan::MemoryManager(); // 157
	CIndexBufferVulkan::Deallocate(); // 149
	CIndexBufferVulkan::Deallocate(); // 56
	IVmaAllocationBase::~IVmaAllocationBase(); // 165
	IVmaAllocationBuffer::~IVmaAllocationBuffer(); // 57
	CIndexBufferVulkan::~CIndexBufferVulkan(); // 57
	CIndexBufferVulkan::~CIndexBufferVulkan(); // 205
	CRefCountServiceBase<true, CRefMT>::~CRefCountServiceBase(); // 328
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::~CRefCounted(); // 206
	CVmaAllocationDeferredDeletion::~CVmaAllocationDeferredDeletion(); // 206
} /* size: 223, inline expansions: 11 (576 bytes) */

// <0056E245> vulkan/memorymgrvulkan.h:218
// member functions: 114
// member variables: 31
// static member variable: 1
// class size: 6,416
class CMemoryManagerVulkan {
	/* vulkan/memorymgrvulkan.h:321 */
	struct FencedResourceList_t {
		CVulkanPooledFenceObject * m_pFence; /* 0 8 */
		VulkanCommandBufferAndPool_t * m_pCmdBufferAndPools; /* 8 8 */
		int m_nNumCmdBuffers; /* 16 4 */
		bool m_bLastFenceForFrame; /* 20 1 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* vulkan/memorymgrvulkan.h:377 */
	enum VmaAsyncDefragState_t {
		DEFRAG_STATE_NONE = 0,
		DEFRAG_STATE_REQUESTED = 1,
		DEFRAG_STATE_COMPUTE_PASS = 2,
		DEFRAG_STATE_GENERATE_COPIES = 3,
		DEFRAG_STATE_SUBMIT_AND_SWAP = 4,
		DEFRAG_STATE_WAIT_FOR_OLD_OBJECTS = 5,
	};
	/* vulkan/memorymgrvulkan.h:386 */
	struct VmaQueuedResourceMove_t {
		VmaDefragmentationMove * pMove; /* 0 8 */
		IVmaAllocationBase * pVmaAllocation; /* 8 8 */
		VmaAllocationObjectType_t nObjectType; /* 16 4 */
		uint64_t nOldObject; /* 24 8 */
		uint64_t nNewObject; /* 32 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* vulkan/memorymgrvulkan.h:396 */
	struct VmaDefragThreadState_t {
		CThreadMutex m_vmaDefragMutex; /* 0 72 */
		ThreadHandle_t m_hVmaDefragThread; /* 72 8 */
		VmaAsyncDefragState_t m_vmaDefragState; /* 80 4 */
		VmaDefragmentationPassMoveInfo m_vmaQueuedDefragPassMoveInfo; /* 88 16 */
		uint32 m_nCurrentMoveStart; /* 104 4 */
		VmaDefragmentationContext m_vmaDefragCtx; /* 112 8 */
		VkResult m_vmaDefragResult; /* 120 4 */
		CUtlVector<CMemoryManagerVulkan::VmaQueuedResourceMove_t, CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMove_t, int> > m_vmaQueuedResourceMoves; /* 128 32 */
		uint32 m_nLastFrameToWaitFor; /* 160 4 */
		CThreadEvent m_vmaDefragThreadEvent; /* 168 128 */
		CThreadEvent m_vmaDefragFinishedThreadEvent; /* 296 128 */
		RenderDefragFlags_t m_vmaDefragFlags; /* 424 1 */
		CRenderContextVulkan * m_pCopyContext; /* 432 8 */
		volatile bool m_bVmaDefragShutdown; /* 440 1 */
		volatile bool m_bAllocationRequested; /* 441 1 */
		bool m_bAsyncDefrag; /* 442 1 */
		void ~VmaDefragThreadState_t(VmaDefragThreadState_t* );
		void VmaDefragThreadState_t(VmaDefragThreadState_t* );
	};
	/* vulkan/memorymgrvulkan.h:452 */
	struct VmaQueuedDeletion_t {
		uint32 nLastFrameUsed; /* 0 4 */
		VmaAllocation pVmaAllocation; /* 8 8 */
		VkImage pImage; /* 16 8 */
		VkBuffer pBuffer; /* 24 8 */
		CRefCountedVulkanObjectBase * m_pVulkanObject; /* 32 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* vulkan/memorymgrvulkan.h:471 */
	class CCommandMemberInitializer_OnVmaGpuMemDump {
		/* vulkan/memorymgrvulkan.h:471 */
		void CCommandMemberInitializer_OnVmaGpuMemDump(CCommandMemberInitializer_OnVmaGpuMemDump* );
	private:
		CConCommandMemberAccessor<CMemoryManagerVulkan> m_ConCommandAccessor; /* 0 160 */
		void ~CCommandMemberInitializer_OnVmaGpuMemDump(CCommandMemberInitializer_OnVmaGpuMemDump* );
	};
	/* vulkan/memorymgrvulkan.h:472 */
	class CCommandMemberInitializer_OnVmaDefrag {
		/* vulkan/memorymgrvulkan.h:472 */
		void CCommandMemberInitializer_OnVmaDefrag(CCommandMemberInitializer_OnVmaDefrag* );
	private:
		CConCommandMemberAccessor<CMemoryManagerVulkan> m_ConCommandAccessor; /* 0 160 */
		void ~CCommandMemberInitializer_OnVmaDefrag(CCommandMemberInitializer_OnVmaDefrag* );
	};
	/* vulkan/memorymgrvulkan.h:473 */
	class CCommandMemberInitializer_OnPrintStats {
		/* vulkan/memorymgrvulkan.h:473 */
		void CCommandMemberInitializer_OnPrintStats(CCommandMemberInitializer_OnPrintStats* );
	private:
		CConCommandMemberAccessor<CMemoryManagerVulkan> m_ConCommandAccessor; /* 0 160 */
		void ~CCommandMemberInitializer_OnPrintStats(CCommandMemberInitializer_OnPrintStats* );
	};
	/* vulkan/memorymgrvulkan.h:474 */
	class CCommandMemberInitializer_OnPrintFragmentationStats {
		/* vulkan/memorymgrvulkan.h:474 */
		void CCommandMemberInitializer_OnPrintFragmentationStats(CCommandMemberInitializer_OnPrintFragmentationStats* );
	private:
		CConCommandMemberAccessor<CMemoryManagerVulkan> m_ConCommandAccessor; /* 0 160 */
		void ~CCommandMemberInitializer_OnPrintFragmentationStats(CCommandMemberInitializer_OnPrintFragmentationStats* );
	};
	void CMemoryManagerVulkan(CMemoryManagerVulkan* , const CMemoryManagerVulkan& );
	int ()(void) * * _vptr.CMemoryManagerVulkan; /* 0 8 */
	/* vulkan/memorymgrvulkan.cpp:75 */
	void CMemoryManagerVulkan(CMemoryManagerVulkan* );
	/* vulkan/memorymgrvulkan.cpp:101 */
	virtual void ~CMemoryManagerVulkan(CMemoryManagerVulkan* );
	/* vulkan/memorymgrvulkan.cpp:756 */
	bool Init(CMemoryManagerVulkan* , VkDevice, VkQueue, const VulkanPhysicalDeviceInfo_t* , bool);
	/* vulkan/memorymgrvulkan.cpp:834 */
	void Shutdown(CMemoryManagerVulkan* );
	/* vulkan/memorymgrvulkan.cpp:817 */
	void ShutdownCommandBufferPool(CMemoryManagerVulkan* , PerThreadDataVulkan_t* , CommandBufferPool_t* );
	/* vulkan/memorymgrvulkan.cpp:1440 */
	bool AllocatePooled(CMemoryManagerVulkan* , IVmaAllocationBase* , VulkanMemoryPoolType_t, size_t, size_t, VkMemoryPropertyFlags, VmaAllocation* , VkBuffer* , const char* );
	/* vulkan/memorymgrvulkan.cpp:1114 */
	bool AllocateForObjectPooled(CMemoryManagerVulkan* , IVmaAllocationBase* , VulkanMemoryPoolType_t, bool, VkBuffer, VkImage, VmaAllocation* , const char* );
	/* vulkan/memorymgrvulkan.cpp:1804 */
	bool Allocate(CMemoryManagerVulkan* , IVmaAllocationBase* , size_t, VkMemoryPropertyFlags, VkBufferUsageFlags, VmaAllocation* , VkBuffer* , const char* , VulkanMemoryPoolType_t);
	/* vulkan/memorymgrvulkan.h:237 */
	VmaAllocator GetVmaAllocator(CMemoryManagerVulkan* );
	/* vulkan/memorymgrvulkan.cpp:712 */
	void FreeBufferAllocation(CMemoryManagerVulkan* , VmaAllocation, VkBuffer);
	/* vulkan/memorymgrvulkan.cpp:727 */
	void FreeImageAllocation(CMemoryManagerVulkan* , VmaAllocation, VkImage);
	/* vulkan/memorymgrvulkan.cpp:744 */
	void QueueForDeletion(CMemoryManagerVulkan* , CRefCountedVulkanObjectBase* );
	/* vulkan/memorymgrvulkan.cpp:1524 */
	void SetVmaAllocation(CMemoryManagerVulkan* , IVmaAllocationBase* , VmaAllocation);
	/* vulkan/memorymgrvulkan.cpp:1347 */
	VkBufferUsageFlags GetStaticPoolBufferUsage(CMemoryManagerVulkan* , VulkanMemoryPoolType_t);
	/* vulkan/memorymgrvulkan.cpp:944 */
	bool AllocateForObject(CMemoryManagerVulkan* , VkBuffer, VkImage, VkMemoryPropertyFlags, bool, VkDeviceMemory* , VkDeviceSize* , const char* , VulkanMemoryPoolType_t);
	/* vulkan/memorymgrvulkan.cpp:1769 */
	bool Allocate(CMemoryManagerVulkan* , size_t, VkMemoryPropertyFlags, VkBufferUsageFlags, VkDeviceMemory* , VkBuffer* , const char* , VulkanMemoryPoolType_t);
	/* vulkan/memorymgrvulkan.cpp:1843 */
	bool Allocate(CMemoryManagerVulkan* , const VkMemoryAllocateInfo* , VkDeviceMemory* , const char* , VulkanMemoryPoolType_t);
	/* vulkan/memorymgrvulkan.cpp:1534 */
	VulkanMemoryPool_t* AcquireDynamicPMBMemoryPool(CMemoryManagerVulkan* , VulkanMemoryPoolType_t, size_t, VkDeviceSize* );
	/* vulkan/memorymgrvulkan.cpp:1744 */
	void DestroyAllDynamicPMBMemoryPools(CMemoryManagerVulkan* );
	/* vulkan/memorymgrvulkan.cpp:1693 */
	void TrimStagingDynamicPMBMemoryPools(CMemoryManagerVulkan* );
	/* vulkan/memorymgrvulkan.cpp:1859 */
	void AddFencedResources(CMemoryManagerVulkan* , int, VulkanCommandBufferAndPool_t* , CVulkanPooledFenceObject* );
	/* vulkan/memorymgrvulkan.cpp:1930 */
	void PurgeFencedResources(CMemoryManagerVulkan* , bool);
	/* vulkan/memorymgrvulkan.cpp:2035 */
	void PurgeUnbalancedCommandBufferPools(CMemoryManagerVulkan* );
	/* vulkan/memorymgrvulkan.cpp:1914 */
	void ProcessDefragDeletionQueue(CMemoryManagerVulkan* , bool);
	/* vulkan/memorymgrvulkan.cpp:1874 */
	void MarkLastFenceOfFrame(CMemoryManagerVulkan* , bool);
	/* vulkan/memorymgrvulkan.cpp:1897 */
	void AddBufferMemoryBarrier(CMemoryManagerVulkan* , VkCommandBuffer, VkAccessFlags, VkAccessFlags, VkPipelineStageFlags, VkPipelineStageFlags, VkBuffer, VkDeviceSize, VkDeviceSize);
	/* vulkan/memorymgrvulkan.h:482 */
	uint GetHighestFrameCompletedOnGPU(const CMemoryManagerVulkan* );
	/* vulkan/memorymgrvulkan.cpp:2143 */
	VkCommandBuffer GetCommandBuffer(CMemoryManagerVulkan* , PerThreadDataVulkan_t* , VulkanCommandBufferType_t, CommandBufferPool_t** );
	/* vulkan/memorymgrvulkan.cpp:2240 */
	void ReleaseCommandBuffer(CMemoryManagerVulkan* , VkCommandBuffer, VulkanCommandBufferType_t, CommandBufferPool_t* );
	/* vulkan/memorymgrvulkan.cpp:2355 */
	void AppendStatsSummaryString(CMemoryManagerVulkan* , CBufferString* );
	/* vulkan/memorymgrvulkan.cpp:2445 */
	void UpdateStats(const CMemoryManagerVulkan* );
	/* vulkan/memorymgrvulkan.cpp:2247 */
	uint64 GetTotalFragmentation(const CMemoryManagerVulkan* );
	/* vulkan/memorymgrvulkan.cpp:637 */
	void VmaDefrag(CMemoryManagerVulkan* , RenderDefragFlags_t, bool);
	/* vulkan/memorymgrvulkan.cpp:298 */
	void VmaUpdateDefragMainThread(CMemoryManagerVulkan* , bool);
	/* vulkan/memorymgrvulkan.h:292 */
	bool VmaAllocationRequestedDuringDefrag(const CMemoryManagerVulkan* );
private:
	/* vulkan/memorymgrvulkan.cpp:859 */
	void BuildAllocInfo(CMemoryManagerVulkan* , size_t, uint32_t, VkMemoryAllocateInfo* );
	/* vulkan/memorymgrvulkan.cpp:869 */
	bool FindMemoryTypeIndexForProperty(CMemoryManagerVulkan* , uint32_t, VkMemoryPropertyFlags, uint32_t* );
	/* vulkan/memorymgrvulkan.cpp:1407 */
	VkBufferUsageFlags GetDynamicPoolBufferUsage(CMemoryManagerVulkan* , VulkanMemoryPoolType_t);
	/* vulkan/memorymgrvulkan.cpp:924 */
	bool UseBufferDeviceAddress(const CMemoryManagerVulkan* , VulkanMemoryPoolType_t);
	/* vulkan/memorymgrvulkan.cpp:2328 */
	void VmaPrintFragmentationStats(const CMemoryManagerVulkan* , LoggingSeverity_t);
	/* vulkan/memorymgrvulkan.cpp:584 */
	void VmaDefragProcessDeletionQueueInternal(CMemoryManagerVulkan* , bool);
	/* vulkan/memorymgrvulkan.cpp:108 */
	bool VmaInit(CMemoryManagerVulkan* );
	/* vulkan/memorymgrvulkan.cpp:139 */
	void VmaShutdown(CMemoryManagerVulkan* );
	/* vulkan/memorymgrvulkan.h:310 */
	void VmaMarkAllocationRequested(CMemoryManagerVulkan* );
	/* vulkan/memorymgrvulkan.cpp:1243 */
	VkResult VmaAllocateInCustomPool(CMemoryManagerVulkan* , IVmaAllocationBase* , VulkanMemoryPoolType_t, uint32, VkBuffer, VkImage, VmaAllocationCreateInfo* , VmaAllocation* );
	/* vulkan/memorymgrvulkan.cpp:1313 */
	void VmaFreeCustomPoolIfEmpty(CMemoryManagerVulkan* , VmaPool);
	/* vulkan/memorymgrvulkan.cpp:178 */
	uintp VmaRunDefragThread(void* );
	VkDevice m_pDeviceVulkan; /* 8 8 */
	VkQueue m_pQueueVulkan; /* 16 8 */
	const class VulkanPhysicalDeviceInfo_t * m_pPhysicalDeviceInfo; /* 24 8 */
	CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false> m_pendingFencedResourceQueue __attribute__((__aligned__(16))); /* 32 64 */
	CUtlLinkedList<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int>, short unsigned int> > m_fencedResourceList; /* 96 40 */
	CThreadFastMutex m_fencedResourceMutex; /* 136 24 */
	int32 m_nCommandBufferPoolThreshold; /* 160 4 */
	CThreadFastMutex m_commandBufferMutex; /* 168 24 */
	bool m_bAggressiveCommandPoolRebalancing; /* 192 1 */
	CUtlVector<VmaPool_T*, CUtlMemory<VmaPool_T*, int> > m_customVMAPools[9]; /* 200 288 */
	int m_nCurrentCustomVMAPoolIndex[9]; /* 488 36 */
	CThreadMutex m_customVMAPoolsMutex; /* 528 72 */
	bool m_bRayTracing; /* 600 1 */
	CInterlockedUInt m_nHighestFrameCompletedOnGPU __attribute__((__aligned__(4))); /* 604 4 */
	CInterlockedUInt m_nHibernatedFrameCount __attribute__((__aligned__(4))); /* 608 4 */
	static const const size_t g_sDynamicPoolSize[9]; /* 0 0 */
	/* vulkan/memorymgrvulkan.h:356 */
	typedef struct CUtlFixedLinkedList<VulkanMemoryPool_t*> VulkanMemoryPoolList_t;
	VulkanMemoryPoolList_t m_DynamicMemoryPoolsPMB[9]; /* 616 720 */
	IndexType_t m_CurrentDynamicMemoryPoolIndexPMB[9]; /* 1336 72 */
	CThreadRWLock_FastRead m_DynamicMemoryPoolRWLock[9] __attribute__((__aligned__(8))); /* 1408 3672 */
	bool m_bHasDeviceLocalHostCoherentHeap; /* 5080 1 */
	uint32 m_nTotalPMBCount[9]; /* 5084 36 */
	VkDeviceSize m_nTotalPMBSize[9]; /* 5120 72 */
	VkDeviceSize m_nStagingPMBSizeLimit; /* 5192 8 */
	VmaDefragThreadState_t m_vmaDefragThreadState; /* 5200 448 */
	VmaAllocator m_pVmaAllocator; /* 5648 8 */
	CThreadMutex m_vmaDeletionQueueMutex; /* 5656 72 */
	CUtlLinkedList<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int>, unsigned int> > m_vmaDeletionQueue; /* 5728 48 */
	/* vulkan/memorymgrvulkan.cpp:2393 */
	void OnVmaGpuMemDump(CMemoryManagerVulkan* , const CCommandContext& , const CCommand& );
	CCommandMemberInitializer_OnVmaGpuMemDump m_OnVmaGpuMemDump_register; /* 5776 160 */
	/* vulkan/memorymgrvulkan.cpp:2428 */
	void OnVmaDefrag(CMemoryManagerVulkan* , const CCommandContext& , const CCommand& );
	CCommandMemberInitializer_OnVmaDefrag m_OnVmaDefrag_register; /* 5936 160 */
	/* vulkan/memorymgrvulkan.cpp:2269 */
	void OnPrintStats(CMemoryManagerVulkan* , const CCommandContext& , const CCommand& );
	CCommandMemberInitializer_OnPrintStats m_OnPrintStats_register; /* 6096 160 */
	/* vulkan/memorymgrvulkan.cpp:2347 */
	void OnPrintFragmentationStats(CMemoryManagerVulkan* , const CCommandContext& , const CCommand& );
	CCommandMemberInitializer_OnPrintFragmentationStats m_OnPrintFragmentationStats_register; /* 6256 160 */
	void CMemoryManagerVulkan(class CMemoryManagerVulkan *, const class CMemoryManagerVulkan  &); /* linkage=_ZN20CMemoryManagerVulkanC4ERKS_ */
	void CMemoryManagerVulkan(class CMemoryManagerVulkan *); /* linkage=_ZN20CMemoryManagerVulkanC4Ev */
	virtual void ~CMemoryManagerVulkan(class CMemoryManagerVulkan *); /* linkage=_ZN20CMemoryManagerVulkanD4Ev */
	bool Init(class CMemoryManagerVulkan *, VkDevice, VkQueue, const class VulkanPhysicalDeviceInfo_t  *, bool); /* linkage=_ZN20CMemoryManagerVulkan4InitEP10VkDevice_TP9VkQueue_TPK26VulkanPhysicalDeviceInfo_tb */
	void Shutdown(class CMemoryManagerVulkan *); /* linkage=_ZN20CMemoryManagerVulkan8ShutdownEv */
	void ShutdownCommandBufferPool(class CMemoryManagerVulkan *, class PerThreadDataVulkan_t *, class CommandBufferPool_t *); /* linkage=_ZN20CMemoryManagerVulkan25ShutdownCommandBufferPoolEP21PerThreadDataVulkan_tP19CommandBufferPool_t */
	bool AllocatePooled(class CMemoryManagerVulkan *, class IVmaAllocationBase *, enum VulkanMemoryPoolType_t, size_t, size_t, VkMemoryPropertyFlags, VmaAllocation *, VkBuffer *, const char  *); /* linkage=_ZN20CMemoryManagerVulkan14AllocatePooledEP18IVmaAllocationBase22VulkanMemoryPoolType_tmmjPP15VmaAllocation_TPP10VkBuffer_TPKc */
	bool AllocateForObjectPooled(class CMemoryManagerVulkan *, class IVmaAllocationBase *, enum VulkanMemoryPoolType_t, bool, VkBuffer, VkImage, VmaAllocation *, const char  *); /* linkage=_ZN20CMemoryManagerVulkan23AllocateForObjectPooledEP18IVmaAllocationBase22VulkanMemoryPoolType_tbP10VkBuffer_TP9VkImage_TPP15VmaAllocation_TPKc */
	bool Allocate(class CMemoryManagerVulkan *, class IVmaAllocationBase *, size_t, VkMemoryPropertyFlags, VkBufferUsageFlags, VmaAllocation *, VkBuffer *, const char  *, enum VulkanMemoryPoolType_t); /* linkage=_ZN20CMemoryManagerVulkan8AllocateEP18IVmaAllocationBasemjjPP15VmaAllocation_TPP10VkBuffer_TPKc22VulkanMemoryPoolType_t */
	VmaAllocator GetVmaAllocator(class CMemoryManagerVulkan *); /* linkage=_ZN20CMemoryManagerVulkan15GetVmaAllocatorEv */
	void FreeBufferAllocation(class CMemoryManagerVulkan *, VmaAllocation, VkBuffer); /* linkage=_ZN20CMemoryManagerVulkan20FreeBufferAllocationEP15VmaAllocation_TP10VkBuffer_T */
	void FreeImageAllocation(class CMemoryManagerVulkan *, VmaAllocation, VkImage); /* linkage=_ZN20CMemoryManagerVulkan19FreeImageAllocationEP15VmaAllocation_TP9VkImage_T */
	void QueueForDeletion(class CMemoryManagerVulkan *, CRefCountedVulkanObjectBase *); /* linkage=_ZN20CMemoryManagerVulkan16QueueForDeletionEP11CRefCountedI20CRefCountServiceBaseILb1E6CRefMTEE */
	void SetVmaAllocation(class CMemoryManagerVulkan *, class IVmaAllocationBase *, VmaAllocation); /* linkage=_ZN20CMemoryManagerVulkan16SetVmaAllocationEP18IVmaAllocationBaseP15VmaAllocation_T */
	VkBufferUsageFlags GetStaticPoolBufferUsage(class CMemoryManagerVulkan *, enum VulkanMemoryPoolType_t); /* linkage=_ZN20CMemoryManagerVulkan24GetStaticPoolBufferUsageE22VulkanMemoryPoolType_t */
	bool AllocateForObject(class CMemoryManagerVulkan *, VkBuffer, VkImage, VkMemoryPropertyFlags, bool, VkDeviceMemory *, VkDeviceSize *, const char  *, enum VulkanMemoryPoolType_t); /* linkage=_ZN20CMemoryManagerVulkan17AllocateForObjectEP10VkBuffer_TP9VkImage_TjbPP16VkDeviceMemory_TPmPKc22VulkanMemoryPoolType_t */
	bool Allocate(class CMemoryManagerVulkan *, size_t, VkMemoryPropertyFlags, VkBufferUsageFlags, VkDeviceMemory *, VkBuffer *, const char  *, enum VulkanMemoryPoolType_t); /* linkage=_ZN20CMemoryManagerVulkan8AllocateEmjjPP16VkDeviceMemory_TPP10VkBuffer_TPKc22VulkanMemoryPoolType_t */
	bool Allocate(class CMemoryManagerVulkan *, const VkMemoryAllocateInfo  *, VkDeviceMemory *, const char  *, enum VulkanMemoryPoolType_t); /* linkage=_ZN20CMemoryManagerVulkan8AllocateEPK20VkMemoryAllocateInfoPP16VkDeviceMemory_TPKc22VulkanMemoryPoolType_t */
	class VulkanMemoryPool_t * AcquireDynamicPMBMemoryPool(class CMemoryManagerVulkan *, enum VulkanMemoryPoolType_t, size_t, VkDeviceSize *); /* linkage=_ZN20CMemoryManagerVulkan27AcquireDynamicPMBMemoryPoolE22VulkanMemoryPoolType_tmPm */
	void DestroyAllDynamicPMBMemoryPools(class CMemoryManagerVulkan *); /* linkage=_ZN20CMemoryManagerVulkan31DestroyAllDynamicPMBMemoryPoolsEv */
	void TrimStagingDynamicPMBMemoryPools(class CMemoryManagerVulkan *); /* linkage=_ZN20CMemoryManagerVulkan32TrimStagingDynamicPMBMemoryPoolsEv */
	void AddFencedResources(class CMemoryManagerVulkan *, int, class VulkanCommandBufferAndPool_t *, class CVulkanPooledFenceObject *); /* linkage=_ZN20CMemoryManagerVulkan18AddFencedResourcesEiP28VulkanCommandBufferAndPool_tP24CVulkanPooledFenceObject */
	void PurgeFencedResources(class CMemoryManagerVulkan *, bool); /* linkage=_ZN20CMemoryManagerVulkan20PurgeFencedResourcesEb */
	void PurgeUnbalancedCommandBufferPools(class CMemoryManagerVulkan *); /* linkage=_ZN20CMemoryManagerVulkan33PurgeUnbalancedCommandBufferPoolsEv */
	void ProcessDefragDeletionQueue(class CMemoryManagerVulkan *, bool); /* linkage=_ZN20CMemoryManagerVulkan26ProcessDefragDeletionQueueEb */
	void MarkLastFenceOfFrame(class CMemoryManagerVulkan *, bool); /* linkage=_ZN20CMemoryManagerVulkan20MarkLastFenceOfFrameEb */
	void AddBufferMemoryBarrier(class CMemoryManagerVulkan *, VkCommandBuffer, VkAccessFlags, VkAccessFlags, VkPipelineStageFlags, VkPipelineStageFlags, VkBuffer, VkDeviceSize, VkDeviceSize); /* linkage=_ZN20CMemoryManagerVulkan22AddBufferMemoryBarrierEP17VkCommandBuffer_TjjjjP10VkBuffer_Tmm */
	uint GetHighestFrameCompletedOnGPU(const class CMemoryManagerVulkan  *); /* linkage=_ZNK20CMemoryManagerVulkan29GetHighestFrameCompletedOnGPUEv */
	VkCommandBuffer GetCommandBuffer(class CMemoryManagerVulkan *, class PerThreadDataVulkan_t *, enum VulkanCommandBufferType_t, class CommandBufferPool_t * *); /* linkage=_ZN20CMemoryManagerVulkan16GetCommandBufferEP21PerThreadDataVulkan_t25VulkanCommandBufferType_tPP19CommandBufferPool_t */
	void ReleaseCommandBuffer(class CMemoryManagerVulkan *, VkCommandBuffer, enum VulkanCommandBufferType_t, class CommandBufferPool_t *); /* linkage=_ZN20CMemoryManagerVulkan20ReleaseCommandBufferEP17VkCommandBuffer_T25VulkanCommandBufferType_tP19CommandBufferPool_t */
	void AppendStatsSummaryString(class CMemoryManagerVulkan *, class CBufferString *); /* linkage=_ZN20CMemoryManagerVulkan24AppendStatsSummaryStringEP13CBufferString */
	void UpdateStats(const class CMemoryManagerVulkan  *); /* linkage=_ZNK20CMemoryManagerVulkan11UpdateStatsEv */
	uint64 GetTotalFragmentation(const class CMemoryManagerVulkan  *); /* linkage=_ZNK20CMemoryManagerVulkan21GetTotalFragmentationEv */
	/* <5a7408> vulkan/memorymgrvulkan.cpp:637 */
	void VmaDefrag(class CMemoryManagerVulkan *, enum RenderDefragFlags_t, bool); /* linkage=_ZN20CMemoryManagerVulkan9VmaDefragE19RenderDefragFlags_tb */
	void VmaUpdateDefragMainThread(class CMemoryManagerVulkan *, bool); /* linkage=_ZN20CMemoryManagerVulkan25VmaUpdateDefragMainThreadEb */
	bool VmaAllocationRequestedDuringDefrag(const class CMemoryManagerVulkan  *); /* linkage=_ZNK20CMemoryManagerVulkan34VmaAllocationRequestedDuringDefragEv */
	void BuildAllocInfo(class CMemoryManagerVulkan *, size_t, uint32_t, VkMemoryAllocateInfo *); /* linkage=_ZN20CMemoryManagerVulkan14BuildAllocInfoEmjP20VkMemoryAllocateInfo */
	bool FindMemoryTypeIndexForProperty(class CMemoryManagerVulkan *, uint32_t, VkMemoryPropertyFlags, uint32_t *); /* linkage=_ZN20CMemoryManagerVulkan30FindMemoryTypeIndexForPropertyEjjPj */
	/* <5a66e0> vulkan/memorymgrvulkan.cpp:1407 */
	VkBufferUsageFlags GetDynamicPoolBufferUsage(class CMemoryManagerVulkan *, enum VulkanMemoryPoolType_t); /* linkage=_ZN20CMemoryManagerVulkan25GetDynamicPoolBufferUsageE22VulkanMemoryPoolType_t */
	/* <5a6635> vulkan/memorymgrvulkan.cpp:924 */
	bool UseBufferDeviceAddress(const class CMemoryManagerVulkan  *, enum VulkanMemoryPoolType_t); /* linkage=_ZNK20CMemoryManagerVulkan22UseBufferDeviceAddressE22VulkanMemoryPoolType_t */
	void VmaPrintFragmentationStats(const class CMemoryManagerVulkan  *, enum LoggingSeverity_t); /* linkage=_ZNK20CMemoryManagerVulkan26VmaPrintFragmentationStatsE17LoggingSeverity_t */
	void VmaDefragProcessDeletionQueueInternal(class CMemoryManagerVulkan *, bool); /* linkage=_ZN20CMemoryManagerVulkan37VmaDefragProcessDeletionQueueInternalEb */
	bool VmaInit(class CMemoryManagerVulkan *); /* linkage=_ZN20CMemoryManagerVulkan7VmaInitEv */
	/* <5a660a> vulkan/memorymgrvulkan.cpp:139 */
	void VmaShutdown(class CMemoryManagerVulkan *); /* linkage=_ZN20CMemoryManagerVulkan11VmaShutdownEv */
	void VmaMarkAllocationRequested(class CMemoryManagerVulkan *); /* linkage=_ZN20CMemoryManagerVulkan26VmaMarkAllocationRequestedEv */
	VkResult VmaAllocateInCustomPool(class CMemoryManagerVulkan *, class IVmaAllocationBase *, enum VulkanMemoryPoolType_t, uint32, VkBuffer, VkImage, VmaAllocationCreateInfo *, VmaAllocation *); /* linkage=_ZN20CMemoryManagerVulkan23VmaAllocateInCustomPoolEP18IVmaAllocationBase22VulkanMemoryPoolType_tjP10VkBuffer_TP9VkImage_TP23VmaAllocationCreateInfoPP15VmaAllocation_T */
	void VmaFreeCustomPoolIfEmpty(class CMemoryManagerVulkan *, VmaPool); /* linkage=_ZN20CMemoryManagerVulkan24VmaFreeCustomPoolIfEmptyEP9VmaPool_T */
	uintp VmaRunDefragThread(void *); /* linkage=_ZN20CMemoryManagerVulkan18VmaRunDefragThreadEPv */
	void OnVmaGpuMemDump(class CMemoryManagerVulkan *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN20CMemoryManagerVulkan15OnVmaGpuMemDumpERK15CCommandContextRK8CCommand */
	void OnVmaDefrag(class CMemoryManagerVulkan *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN20CMemoryManagerVulkan11OnVmaDefragERK15CCommandContextRK8CCommand */
	void OnPrintStats(class CMemoryManagerVulkan *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN20CMemoryManagerVulkan12OnPrintStatsERK15CCommandContextRK8CCommand */
	void OnPrintFragmentationStats(class CMemoryManagerVulkan *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN20CMemoryManagerVulkan25OnPrintFragmentationStatsERK15CCommandContextRK8CCommand */
} __attribute__((__aligned__(16)));

// <009A6D82> vulkan/memorymgrvulkan.h:221
void CMemoryManagerVulkan::CMemoryManagerVulkan()
{
} /* size: 0 */

// <009A694F> vulkan/memorymgrvulkan.h:222
void CMemoryManagerVulkan::~CMemoryManagerVulkan()
{
} /* size: 0 */

// <005A4691> vulkan/memorymgrvulkan.h:292
inline void CMemoryManagerVulkan::VmaAllocationRequestedDuringDefrag()
{
} /* size: 0 */

// <005A4678> vulkan/memorymgrvulkan.h:310
inline void CMemoryManagerVulkan::VmaMarkAllocationRequested()
{
} /* size: 0 */

// <005A4222> vulkan/memorymgrvulkan.h:396
void VmaDefragThreadState_t::VmaDefragThreadState_t()
{
} /* size: 0 */

// <005A4205> vulkan/memorymgrvulkan.h:396
inline void VmaDefragThreadState_t::VmaDefragThreadState_t()
{
} /* size: 0 */

// <005A41EE> vulkan/memorymgrvulkan.h:396
void VmaDefragThreadState_t::~VmaDefragThreadState_t()
{
} /* size: 0 */

// <005A41D1> vulkan/memorymgrvulkan.h:396
inline void VmaDefragThreadState_t::~VmaDefragThreadState_t()
{
} /* size: 0 */

// <005A4661> vulkan/memorymgrvulkan.h:471
void CCommandMemberInitializer_OnVmaGpuMemDump::CCommandMemberInitializer_OnVmaGpuMemDump()
{
} /* size: 0 */

// <005A4648> vulkan/memorymgrvulkan.h:471
inline void CCommandMemberInitializer_OnVmaGpuMemDump::CCommandMemberInitializer_OnVmaGpuMemDump()
{
} /* size: 0 */

// <005A41AF> vulkan/memorymgrvulkan.h:471
void CCommandMemberInitializer_OnVmaGpuMemDump::~CCommandMemberInitializer_OnVmaGpuMemDump()
{
} /* size: 0 */

// <005A4192> vulkan/memorymgrvulkan.h:471
inline void CCommandMemberInitializer_OnVmaGpuMemDump::~CCommandMemberInitializer_OnVmaGpuMemDump()
{
} /* size: 0 */

// <005A4631> vulkan/memorymgrvulkan.h:472
void CCommandMemberInitializer_OnVmaDefrag::CCommandMemberInitializer_OnVmaDefrag()
{
} /* size: 0 */

// <005A4618> vulkan/memorymgrvulkan.h:472
inline void CCommandMemberInitializer_OnVmaDefrag::CCommandMemberInitializer_OnVmaDefrag()
{
} /* size: 0 */

// <005A417B> vulkan/memorymgrvulkan.h:472
void CCommandMemberInitializer_OnVmaDefrag::~CCommandMemberInitializer_OnVmaDefrag()
{
} /* size: 0 */

// <005A415E> vulkan/memorymgrvulkan.h:472
inline void CCommandMemberInitializer_OnVmaDefrag::~CCommandMemberInitializer_OnVmaDefrag()
{
} /* size: 0 */

// <005A4601> vulkan/memorymgrvulkan.h:473
void CCommandMemberInitializer_OnPrintStats::CCommandMemberInitializer_OnPrintStats()
{
} /* size: 0 */

// <005A45E8> vulkan/memorymgrvulkan.h:473
inline void CCommandMemberInitializer_OnPrintStats::CCommandMemberInitializer_OnPrintStats()
{
} /* size: 0 */

// <005A4147> vulkan/memorymgrvulkan.h:473
void CCommandMemberInitializer_OnPrintStats::~CCommandMemberInitializer_OnPrintStats()
{
} /* size: 0 */

// <005A412A> vulkan/memorymgrvulkan.h:473
inline void CCommandMemberInitializer_OnPrintStats::~CCommandMemberInitializer_OnPrintStats()
{
} /* size: 0 */

// <005A45D1> vulkan/memorymgrvulkan.h:474
void CCommandMemberInitializer_OnPrintFragmentationStats::CCommandMemberInitializer_OnPrintFragmentationStats()
{
} /* size: 0 */

// <005A45B8> vulkan/memorymgrvulkan.h:474
inline void CCommandMemberInitializer_OnPrintFragmentationStats::CCommandMemberInitializer_OnPrintFragmentationStats()
{
} /* size: 0 */

// <005A4113> vulkan/memorymgrvulkan.h:474
void CCommandMemberInitializer_OnPrintFragmentationStats::~CCommandMemberInitializer_OnPrintFragmentationStats()
{
} /* size: 0 */

// <005A40F6> vulkan/memorymgrvulkan.h:474
inline void CCommandMemberInitializer_OnPrintFragmentationStats::~CCommandMemberInitializer_OnPrintFragmentationStats()
{
} /* size: 0 */

// <00A5971A> vulkan/memorymgrvulkan.h:482
inline void CMemoryManagerVulkan::GetHighestFrameCompletedOnGPU()
{
} /* size: 0 */

