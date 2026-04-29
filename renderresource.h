
//
// ./renderresource.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 25
//	classes: 4
//

// <0048FE98> ./renderresource.h:49
// member functions: 16
// member variables: 5
// vtable entry: 1
// class size: 16
class CRenderResource {
	void CRenderResource(CRenderResource* , const CRenderResource& );
	int ()(void) * * _vptr.CRenderResource; /* 0 8 */
	/* ./renderresource.h:71 */
	void CRenderResource(CRenderResource* , RenderResourceType_t);
	/* ./renderresource.h:53 */
	virtual void ~CRenderResource(CRenderResource* );
	/* ./renderresource.h:78 */
	void MarkUsed(CRenderResource* , uint);
	/* ./renderresource.h:84 */
	bool IsInUse(const CRenderResource* , uint);
	/* ./renderresource.h:89 */
	RenderResourceType_t GetResourceType(const CRenderResource* );
	/* ./renderresource.h:57 */
	uint GetLastFrameUsed(const CRenderResource* );
	/* ./renderresource.h:60 */
	virtual void DeleteThis(CRenderResource* );
private:
	uint m_nLastFrameUsed; /* 8 4 */
	uint8 m_nResourceType; /* 12 1 */
	bool m_bMarkedForDeletion; /* 13 1 */
	bool m_bWasEverUsed; /* 14 1 */
	void CRenderResource(class CRenderResource *, const class CRenderResource  &); /* linkage=_ZN15CRenderResourceC4ERKS_ */
	void CRenderResource(class CRenderResource *, enum RenderResourceType_t); /* linkage=_ZN15CRenderResourceC4E20RenderResourceType_t */
	virtual void ~CRenderResource(class CRenderResource *); /* linkage=_ZN15CRenderResourceD4Ev */
	void MarkUsed(class CRenderResource *, uint); /* linkage=_ZN15CRenderResource8MarkUsedEj */
	bool IsInUse(const class CRenderResource  *, uint); /* linkage=_ZNK15CRenderResource7IsInUseEj */
	enum RenderResourceType_t GetResourceType(const class CRenderResource  *); /* linkage=_ZNK15CRenderResource15GetResourceTypeEv */
	uint GetLastFrameUsed(const class CRenderResource  *); /* linkage=_ZNK15CRenderResource16GetLastFrameUsedEv */
	virtual void DeleteThis(class CRenderResource *); /* linkage=_ZN15CRenderResource10DeleteThisEv */
};

// <00A5A61F> ./renderresource.h:53
void CRenderResource::~CRenderResource()
{
} /* size: 0 */

// <00A5A5EF> ./renderresource.h:53
inline void CRenderResource::~CRenderResource()
{
} /* size: 0 */

// <007BFCB4> ./renderresource.h:53
// function call: 1
void CRenderResource::~CRenderResource()
{
	CRenderResource::~CRenderResource(); // 53
} /* size: 14, inline expansions: 1 (0 bytes) */

// <00A5A5D6> ./renderresource.h:60
void CRenderResource::DeleteThis()
{
} /* size: 0 */

// <007BFC2F> ./renderresource.h:71
void CRenderResource::CRenderResource(RenderResourceType_t nType)
{
	{
		{
		}
	}
} /* size: 0 */

// <007BFBE1> ./renderresource.h:71
// variables: 2
inline void CRenderResource::CRenderResource(RenderResourceType_t nType)
{
	const char   __FUNCTION__; // 40986
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 75
	}
} /* size: 0, variables: 1 */

// <00C869D8> ./renderresource.h:78
inline void CRenderResource::MarkUsed(uint nFrameNumber)
{
} /* size: 0 */

// <00A5A58C> ./renderresource.h:84
inline void CRenderResource::IsInUse(uint nCompletedFrameNumber)
{
} /* size: 0 */

// <00A5A573> ./renderresource.h:89
inline void CRenderResource::GetResourceType()
{
} /* size: 0 */

// <00A53E84> ./renderresource.h:98
void CRenderResourceMgr::~CRenderResourceMgr()
{
} /* size: 0 */

// <00A53E67> ./renderresource.h:98
inline void CRenderResourceMgr::~CRenderResourceMgr()
{
} /* size: 0 */

// <00782B5F> ./renderresource.h:98
// member functions: 23
// member variables: 3
// class size: 64
class CRenderResourceMgr {
	/* ./renderresource.h:101 */
	void CRenderResourceMgr(CRenderResourceMgr* );
	/* ./renderresource.h:113 */
	void Free(CRenderResourceMgr* , RenderResourceHandle_t);
	/* ./renderresource.h:130 */
	bool IsHandleValid(const CRenderResourceMgr* , RenderResourceHandle_t);
	/* ./renderresource.h:136 */
	RenderResourceHandle_t GetHandle(CRenderResourceMgr* , CRenderResource* );
	/* ./renderresource.h:150 */
	void MarkUsed(CRenderResourceMgr* , RenderResourceHandle_t, int);
	/* ./renderresource.h:159 */
	void PerformQueuedDeletions(CRenderResourceMgr* , uint);
private:
	CThreadFastMutex m_Lock; /* 0 24 */
	CUtlVector<CRenderResource*, CUtlMemory<CRenderResource*, int> > m_QueuedDeletions; /* 24 32 */
	bool m_bPerformingQueuedDeletions; /* 56 1 */
	/* ./renderresource.h:142 */
	CVertexBufferVulkan* GetImplClass<CVertexBufferVulkan>(CRenderResourceMgr* , RenderResourceHandle_t, bool);
	void CRenderResourceMgr(class CRenderResourceMgr *); /* linkage=_ZN18CRenderResourceMgrC4Ev */
	void Free(class CRenderResourceMgr *, RenderResourceHandle_t); /* linkage=_ZN18CRenderResourceMgr4FreeEP24RenderResourceHandle_t__ */
	bool IsHandleValid(const class CRenderResourceMgr  *, RenderResourceHandle_t); /* linkage=_ZNK18CRenderResourceMgr13IsHandleValidEP24RenderResourceHandle_t__ */
	RenderResourceHandle_t GetHandle(class CRenderResourceMgr *, class CRenderResource *); /* linkage=_ZN18CRenderResourceMgr9GetHandleEP15CRenderResource */
	void MarkUsed(class CRenderResourceMgr *, RenderResourceHandle_t, int); /* linkage=_ZN18CRenderResourceMgr8MarkUsedEP24RenderResourceHandle_t__i */
	void PerformQueuedDeletions(class CRenderResourceMgr *, uint); /* linkage=_ZN18CRenderResourceMgr22PerformQueuedDeletionsEj */
	void ~CRenderResourceMgr(class CRenderResourceMgr *); /* linkage=_ZN18CRenderResourceMgrD4Ev */
	class CVertexBufferVulkan * GetImplClass<CVertexBufferVulkan>(class CRenderResourceMgr *, RenderResourceHandle_t, bool); /* linkage=_ZN18CRenderResourceMgr12GetImplClassI19CVertexBufferVulkanEEPT_P24RenderResourceHandle_t__b */
	class CIndexBufferVulkan * GetImplClass<CIndexBufferVulkan>(class CRenderResourceMgr *, RenderResourceHandle_t, bool); /* linkage=_ZN18CRenderResourceMgr12GetImplClassI18CIndexBufferVulkanEEPT_P24RenderResourceHandle_t__b */
	RenderResourceHandle_t RegisterAllocation<CRayTraceShaderBindingTableVulkan>(class CRenderResourceMgr *, class CRayTraceShaderBindingTableVulkan *); /* linkage=_ZN18CRenderResourceMgr18RegisterAllocationI33CRayTraceShaderBindingTableVulkanEEP24RenderResourceHandle_t__PT_ */
	RenderResourceHandle_t RegisterAllocation<CRayTracePipelineVulkan>(class CRenderResourceMgr *, class CRayTracePipelineVulkan *); /* linkage=_ZN18CRenderResourceMgr18RegisterAllocationI23CRayTracePipelineVulkanEEP24RenderResourceHandle_t__PT_ */
	RenderResourceHandle_t RegisterAllocation<CTLASVulkan>(class CRenderResourceMgr *, class CTLASVulkan *); /* linkage=_ZN18CRenderResourceMgr18RegisterAllocationI11CTLASVulkanEEP24RenderResourceHandle_t__PT_ */
	RenderResourceHandle_t RegisterAllocation<CBLASVulkan>(class CRenderResourceMgr *, class CBLASVulkan *); /* linkage=_ZN18CRenderResourceMgr18RegisterAllocationI11CBLASVulkanEEP24RenderResourceHandle_t__PT_ */
	RenderResourceHandle_t RegisterAllocation<CConstantBufferVulkan>(class CRenderResourceMgr *, class CConstantBufferVulkan *); /* linkage=_ZN18CRenderResourceMgr18RegisterAllocationI21CConstantBufferVulkanEEP24RenderResourceHandle_t__PT_ */
	RenderResourceHandle_t RegisterAllocation<CIndexBufferVulkan>(class CRenderResourceMgr *, class CIndexBufferVulkan *); /* linkage=_ZN18CRenderResourceMgr18RegisterAllocationI18CIndexBufferVulkanEEP24RenderResourceHandle_t__PT_ */
	RenderResourceHandle_t RegisterAllocation<CVertexBufferVulkan>(class CRenderResourceMgr *, class CVertexBufferVulkan *); /* linkage=_ZN18CRenderResourceMgr18RegisterAllocationI19CVertexBufferVulkanEEP24RenderResourceHandle_t__PT_ */
};

// <007FE6F8> ./renderresource.h:98
// member functions: 24
// member variables: 3
// class size: 64
class CRenderResourceMgr {
	/* ./renderresource.h:101 */
	void CRenderResourceMgr(CRenderResourceMgr* );
	/* ./renderresource.h:113 */
	void Free(CRenderResourceMgr* , RenderResourceHandle_t);
	/* ./renderresource.h:130 */
	bool IsHandleValid(const CRenderResourceMgr* , RenderResourceHandle_t);
	/* ./renderresource.h:136 */
	RenderResourceHandle_t GetHandle(CRenderResourceMgr* , CRenderResource* );
	/* ./renderresource.h:150 */
	void MarkUsed(CRenderResourceMgr* , RenderResourceHandle_t, int);
	/* ./renderresource.h:159 */
	void PerformQueuedDeletions(CRenderResourceMgr* , uint);
private:
	CThreadFastMutex m_Lock; /* 0 24 */
	CUtlVector<CRenderResource*, CUtlMemory<CRenderResource*, int> > m_QueuedDeletions; /* 24 32 */
	bool m_bPerformingQueuedDeletions; /* 56 1 */
	/* ./renderresource.h:142 */
	CIndexBufferVulkan* GetImplClass<CIndexBufferVulkan>(CRenderResourceMgr* , RenderResourceHandle_t, bool);
	/* ./renderresource.h:142 */
	CVertexBufferVulkan* GetImplClass<CVertexBufferVulkan>(CRenderResourceMgr* , RenderResourceHandle_t, bool);
	void CRenderResourceMgr(class CRenderResourceMgr *); /* linkage=_ZN18CRenderResourceMgrC4Ev */
	void Free(class CRenderResourceMgr *, RenderResourceHandle_t); /* linkage=_ZN18CRenderResourceMgr4FreeEP24RenderResourceHandle_t__ */
	bool IsHandleValid(const class CRenderResourceMgr  *, RenderResourceHandle_t); /* linkage=_ZNK18CRenderResourceMgr13IsHandleValidEP24RenderResourceHandle_t__ */
	RenderResourceHandle_t GetHandle(class CRenderResourceMgr *, class CRenderResource *); /* linkage=_ZN18CRenderResourceMgr9GetHandleEP15CRenderResource */
	void MarkUsed(class CRenderResourceMgr *, RenderResourceHandle_t, int); /* linkage=_ZN18CRenderResourceMgr8MarkUsedEP24RenderResourceHandle_t__i */
	void PerformQueuedDeletions(class CRenderResourceMgr *, uint); /* linkage=_ZN18CRenderResourceMgr22PerformQueuedDeletionsEj */
	void ~CRenderResourceMgr(class CRenderResourceMgr *); /* linkage=_ZN18CRenderResourceMgrD4Ev */
	class CVertexBufferVulkan * GetImplClass<CVertexBufferVulkan>(class CRenderResourceMgr *, RenderResourceHandle_t, bool); /* linkage=_ZN18CRenderResourceMgr12GetImplClassI19CVertexBufferVulkanEEPT_P24RenderResourceHandle_t__b */
	class CIndexBufferVulkan * GetImplClass<CIndexBufferVulkan>(class CRenderResourceMgr *, RenderResourceHandle_t, bool); /* linkage=_ZN18CRenderResourceMgr12GetImplClassI18CIndexBufferVulkanEEPT_P24RenderResourceHandle_t__b */
	RenderResourceHandle_t RegisterAllocation<CRayTraceShaderBindingTableVulkan>(class CRenderResourceMgr *, class CRayTraceShaderBindingTableVulkan *); /* linkage=_ZN18CRenderResourceMgr18RegisterAllocationI33CRayTraceShaderBindingTableVulkanEEP24RenderResourceHandle_t__PT_ */
	RenderResourceHandle_t RegisterAllocation<CRayTracePipelineVulkan>(class CRenderResourceMgr *, class CRayTracePipelineVulkan *); /* linkage=_ZN18CRenderResourceMgr18RegisterAllocationI23CRayTracePipelineVulkanEEP24RenderResourceHandle_t__PT_ */
	RenderResourceHandle_t RegisterAllocation<CTLASVulkan>(class CRenderResourceMgr *, class CTLASVulkan *); /* linkage=_ZN18CRenderResourceMgr18RegisterAllocationI11CTLASVulkanEEP24RenderResourceHandle_t__PT_ */
	RenderResourceHandle_t RegisterAllocation<CBLASVulkan>(class CRenderResourceMgr *, class CBLASVulkan *); /* linkage=_ZN18CRenderResourceMgr18RegisterAllocationI11CBLASVulkanEEP24RenderResourceHandle_t__PT_ */
	RenderResourceHandle_t RegisterAllocation<CConstantBufferVulkan>(class CRenderResourceMgr *, class CConstantBufferVulkan *); /* linkage=_ZN18CRenderResourceMgr18RegisterAllocationI21CConstantBufferVulkanEEP24RenderResourceHandle_t__PT_ */
	RenderResourceHandle_t RegisterAllocation<CIndexBufferVulkan>(class CRenderResourceMgr *, class CIndexBufferVulkan *); /* linkage=_ZN18CRenderResourceMgr18RegisterAllocationI18CIndexBufferVulkanEEP24RenderResourceHandle_t__PT_ */
	RenderResourceHandle_t RegisterAllocation<CVertexBufferVulkan>(class CRenderResourceMgr *, class CVertexBufferVulkan *); /* linkage=_ZN18CRenderResourceMgr18RegisterAllocationI19CVertexBufferVulkanEEP24RenderResourceHandle_t__PT_ */
};

// <009174ED> ./renderresource.h:98
// member functions: 32
// member variables: 3
// class size: 64
class CRenderResourceMgr {
	/* ./renderresource.h:101 */
	void CRenderResourceMgr(CRenderResourceMgr* );
	/* ./renderresource.h:113 */
	void Free(CRenderResourceMgr* , RenderResourceHandle_t);
	/* ./renderresource.h:130 */
	bool IsHandleValid(const CRenderResourceMgr* , RenderResourceHandle_t);
	/* ./renderresource.h:136 */
	RenderResourceHandle_t GetHandle(CRenderResourceMgr* , CRenderResource* );
	/* ./renderresource.h:150 */
	void MarkUsed(CRenderResourceMgr* , RenderResourceHandle_t, int);
	/* ./renderresource.h:159 */
	void PerformQueuedDeletions(CRenderResourceMgr* , uint);
private:
	CThreadFastMutex m_Lock; /* 0 24 */
	CUtlVector<CRenderResource*, CUtlMemory<CRenderResource*, int> > m_QueuedDeletions; /* 24 32 */
	bool m_bPerformingQueuedDeletions; /* 56 1 */
	/* ./renderresource.h:106 */
	RenderResourceHandle_t RegisterAllocation<CRayTraceShaderBindingTableVulkan>(CRenderResourceMgr* , CRayTraceShaderBindingTableVulkan* );
	/* ./renderresource.h:106 */
	RenderResourceHandle_t RegisterAllocation<CRayTracePipelineVulkan>(CRenderResourceMgr* , CRayTracePipelineVulkan* );
	/* ./renderresource.h:106 */
	RenderResourceHandle_t RegisterAllocation<CTLASVulkan>(CRenderResourceMgr* , CTLASVulkan* );
	/* ./renderresource.h:106 */
	RenderResourceHandle_t RegisterAllocation<CBLASVulkan>(CRenderResourceMgr* , CBLASVulkan* );
	/* ./renderresource.h:106 */
	RenderResourceHandle_t RegisterAllocation<CConstantBufferVulkan>(CRenderResourceMgr* , CConstantBufferVulkan* );
	/* ./renderresource.h:106 */
	RenderResourceHandle_t RegisterAllocation<CIndexBufferVulkan>(CRenderResourceMgr* , CIndexBufferVulkan* );
	/* ./renderresource.h:106 */
	RenderResourceHandle_t RegisterAllocation<CVertexBufferVulkan>(CRenderResourceMgr* , CVertexBufferVulkan* );
	/* ./renderresource.h:142 */
	CIndexBufferVulkan* GetImplClass<CIndexBufferVulkan>(CRenderResourceMgr* , RenderResourceHandle_t, bool);
	/* ./renderresource.h:142 */
	CVertexBufferVulkan* GetImplClass<CVertexBufferVulkan>(CRenderResourceMgr* , RenderResourceHandle_t, bool);
	void ~CRenderResourceMgr(CRenderResourceMgr* );
	void CRenderResourceMgr(class CRenderResourceMgr *); /* linkage=_ZN18CRenderResourceMgrC4Ev */
	void Free(class CRenderResourceMgr *, RenderResourceHandle_t); /* linkage=_ZN18CRenderResourceMgr4FreeEP24RenderResourceHandle_t__ */
	bool IsHandleValid(const class CRenderResourceMgr  *, RenderResourceHandle_t); /* linkage=_ZNK18CRenderResourceMgr13IsHandleValidEP24RenderResourceHandle_t__ */
	RenderResourceHandle_t GetHandle(class CRenderResourceMgr *, class CRenderResource *); /* linkage=_ZN18CRenderResourceMgr9GetHandleEP15CRenderResource */
	void MarkUsed(class CRenderResourceMgr *, RenderResourceHandle_t, int); /* linkage=_ZN18CRenderResourceMgr8MarkUsedEP24RenderResourceHandle_t__i */
	void PerformQueuedDeletions(class CRenderResourceMgr *, uint); /* linkage=_ZN18CRenderResourceMgr22PerformQueuedDeletionsEj */
	void ~CRenderResourceMgr(class CRenderResourceMgr *); /* linkage=_ZN18CRenderResourceMgrD4Ev */
	class CVertexBufferVulkan * GetImplClass<CVertexBufferVulkan>(class CRenderResourceMgr *, RenderResourceHandle_t, bool); /* linkage=_ZN18CRenderResourceMgr12GetImplClassI19CVertexBufferVulkanEEPT_P24RenderResourceHandle_t__b */
	class CIndexBufferVulkan * GetImplClass<CIndexBufferVulkan>(class CRenderResourceMgr *, RenderResourceHandle_t, bool); /* linkage=_ZN18CRenderResourceMgr12GetImplClassI18CIndexBufferVulkanEEPT_P24RenderResourceHandle_t__b */
	RenderResourceHandle_t RegisterAllocation<CRayTraceShaderBindingTableVulkan>(class CRenderResourceMgr *, class CRayTraceShaderBindingTableVulkan *); /* linkage=_ZN18CRenderResourceMgr18RegisterAllocationI33CRayTraceShaderBindingTableVulkanEEP24RenderResourceHandle_t__PT_ */
	RenderResourceHandle_t RegisterAllocation<CRayTracePipelineVulkan>(class CRenderResourceMgr *, class CRayTracePipelineVulkan *); /* linkage=_ZN18CRenderResourceMgr18RegisterAllocationI23CRayTracePipelineVulkanEEP24RenderResourceHandle_t__PT_ */
	RenderResourceHandle_t RegisterAllocation<CTLASVulkan>(class CRenderResourceMgr *, class CTLASVulkan *); /* linkage=_ZN18CRenderResourceMgr18RegisterAllocationI11CTLASVulkanEEP24RenderResourceHandle_t__PT_ */
	RenderResourceHandle_t RegisterAllocation<CBLASVulkan>(class CRenderResourceMgr *, class CBLASVulkan *); /* linkage=_ZN18CRenderResourceMgr18RegisterAllocationI11CBLASVulkanEEP24RenderResourceHandle_t__PT_ */
	RenderResourceHandle_t RegisterAllocation<CConstantBufferVulkan>(class CRenderResourceMgr *, class CConstantBufferVulkan *); /* linkage=_ZN18CRenderResourceMgr18RegisterAllocationI21CConstantBufferVulkanEEP24RenderResourceHandle_t__PT_ */
	RenderResourceHandle_t RegisterAllocation<CIndexBufferVulkan>(class CRenderResourceMgr *, class CIndexBufferVulkan *); /* linkage=_ZN18CRenderResourceMgr18RegisterAllocationI18CIndexBufferVulkanEEP24RenderResourceHandle_t__PT_ */
	RenderResourceHandle_t RegisterAllocation<CVertexBufferVulkan>(class CRenderResourceMgr *, class CVertexBufferVulkan *); /* linkage=_ZN18CRenderResourceMgr18RegisterAllocationI19CVertexBufferVulkanEEP24RenderResourceHandle_t__PT_ */
};

// <00A5A528> ./renderresource.h:101
void CRenderResourceMgr::CRenderResourceMgr()
{
} /* size: 0 */

// <00A5A50F> ./renderresource.h:101
inline void CRenderResourceMgr::CRenderResourceMgr()
{
} /* size: 0 */

// <009E58ED> ./renderresource.h:106
inline void CRenderResourceMgr::RegisterAllocation<CVertexBufferVulkan>(CVertexBufferVulkan* pClass)
{
} /* size: 0 */

// <009E55C9> ./renderresource.h:106
inline void CRenderResourceMgr::RegisterAllocation<CIndexBufferVulkan>(CIndexBufferVulkan* pClass)
{
} /* size: 0 */

// <009E2C03> ./renderresource.h:106
inline void CRenderResourceMgr::RegisterAllocation<CConstantBufferVulkan>(CConstantBufferVulkan* pClass)
{
} /* size: 0 */

// <009E22DA> ./renderresource.h:106
inline void CRenderResourceMgr::RegisterAllocation<CBLASVulkan>(CBLASVulkan* pClass)
{
} /* size: 0 */

// <009E2288> ./renderresource.h:106
inline void CRenderResourceMgr::RegisterAllocation<CTLASVulkan>(CTLASVulkan* pClass)
{
} /* size: 0 */

// <009E2236> ./renderresource.h:106
inline void CRenderResourceMgr::RegisterAllocation<CRayTracePipelineVulkan>(CRayTracePipelineVulkan* pClass)
{
} /* size: 0 */

// <009E21BE> ./renderresource.h:106
inline void CRenderResourceMgr::RegisterAllocation<CRayTraceShaderBindingTableVulkan>(CRayTraceShaderBindingTableVulkan* pClass)
{
} /* size: 0 */

// <00A59EAA> ./renderresource.h:113
// variables: 4
// function calls: 23
void CRenderResourceMgr::Free(RenderResourceHandle_t hResource)
{
	const char   __FUNCTION__; // 28462
	CRenderResource* pClass; // 117
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 115
	}
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_125; // 125
		ThreadInterlockedAssignIf64(volatile int64* pDest,
						int64 value,
						int64 comparand);  // 800
		CThreadFastMutex::TryLockInline(
				const char* pFileName,
				int nLineNumber,
				const ThreadId_t  threadId);  // 837
		ThreadPause(void); // 839
		CThreadFastMutex::Lock(
			const char* pFileName,
			int nLineNumber,
			unsigned int nSpinSleepTime);  // 943
		Lock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
				const CThreadFastMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 125
		CUtlMemory<CRenderResource::NumAllocated(); // 1196
		CUtlMemory<CRenderResource::Base(); // 112
		CUtlVectorBase<CRenderResource::Base(); // 368
		CUtlVectorBase<CRenderResource::ResetDbgInfo(); // 824
		CUtlMemory<CRenderResource::IsGrowable(); // 823
		CUtlMemory<CRenderResource::IsExternallyAllocated(); // 859
		CUtlMemory<CRenderResource::IsExternallyAllocated(); // 861
		CUtlMemory<CRenderResource::Grow(
			int num);  // 806
		CUtlVectorBase<CRenderResource::GrowMemory(
				int num);  // 1198
		CUtlMemory<CRenderResource::operator[](
				int i);  // 602
		CUtlVectorBase<CRenderResource::Element(
			int i);  // 1201
		CopyConstruct<CRenderResource*>(CRenderResource** pMemory,
						CRenderResource* const& src);  // 1201
		CUtlVectorBase<CRenderResource::AddToTail(
				CRenderResource* const& src);  // 126
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 127
	}
} /* size: 517, variables: 2 */

// <009E9BE6> ./renderresource.h:142
// variable: 1
inline void CRenderResourceMgr::GetImplClass<CVertexBufferVulkan>(RenderResourceHandle_t hResource, bool bAllowDeleted)
{
	CVertexBufferVulkan* pClass; // 144
} /* size: 0, variables: 1 */

// <009E9BA2> ./renderresource.h:142
// variable: 1
inline void CRenderResourceMgr::GetImplClass<CIndexBufferVulkan>(RenderResourceHandle_t hResource, bool bAllowDeleted)
{
	CIndexBufferVulkan* pClass; // 144
} /* size: 0, variables: 1 */

// <00A59E6D> ./renderresource.h:150
// variable: 1
inline void CRenderResourceMgr::MarkUsed(RenderResourceHandle_t hResource, int nFrameCount)
{
	CRenderResource* pClass; // 152
} /* size: 0, variables: 1 */

// <00A59DF5> ./renderresource.h:159
// variables: 5
inline void CRenderResourceMgr::PerformQueuedDeletions(uint nFinishedFrameNumber)
{
	const char   __FUNCTION__; // 28943
	int nCount; // 166
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 161
	}
	{
		int i; // 167
		{
			CRenderResource* pRenderResource; // 169
		}
	}
} /* size: 0, variables: 2 */

