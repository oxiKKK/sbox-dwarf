
//
// rendersystem/renderresource.h
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 15
//	classes: 2
//

// <00028FF5> rendersystem/renderresource.h:49
// member functions: 16
// member variables: 5
// vtable entry: 1
// class size: 16
class CRenderResource {
	void CRenderResource(CRenderResource* , const CRenderResource& );
	int ()(void) * * _vptr.CRenderResource; /* 0 8 */
	/* rendersystem/renderresource.h:71 */
	void CRenderResource(CRenderResource* , RenderResourceType_t);
	/* rendersystem/renderresource.h:53 */
	virtual void ~CRenderResource(CRenderResource* );
	/* rendersystem/renderresource.h:78 */
	void MarkUsed(CRenderResource* , uint);
	/* rendersystem/renderresource.h:84 */
	bool IsInUse(const CRenderResource* , uint);
	/* rendersystem/renderresource.h:89 */
	RenderResourceType_t GetResourceType(const CRenderResource* );
	/* rendersystem/renderresource.h:57 */
	uint GetLastFrameUsed(const CRenderResource* );
	/* rendersystem/renderresource.h:60 */
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

// <003C520C> rendersystem/renderresource.h:53
void CRenderResource::~CRenderResource()
{
} /* size: 5 */

// <003C518A> rendersystem/renderresource.h:53
// function call: 1
void CRenderResource::~CRenderResource()
{
	CRenderResource::~CRenderResource(); // 53
} /* size: 14, inline expansions: 1 (0 bytes) */

// <003C5171> rendersystem/renderresource.h:53
inline void CRenderResource::~CRenderResource()
{
} /* size: 0 */

// <003C512A> rendersystem/renderresource.h:60
void CRenderResource::DeleteThis()
{
} /* size: 10 */

// <003C5106> rendersystem/renderresource.h:71
void CRenderResource::CRenderResource(RenderResourceType_t nType)
{
	{
		{
		}
	}
} /* size: 0 */

// <003C50C2> rendersystem/renderresource.h:71
// variables: 2
inline void CRenderResource::CRenderResource(RenderResourceType_t nType)
{
	const char   __FUNCTION__; // 876
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 75
	}
} /* size: 0, variables: 1 */

// <00213D21> rendersystem/renderresource.h:71
// variables: 2
inline void CRenderResource::CRenderResource(RenderResourceType_t nType)
{
	const char   __FUNCTION__; // 3920
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 75
	}
} /* size: 0, variables: 1 */

// <001A8BF3> rendersystem/renderresource.h:71
// variables: 2
inline void CRenderResource::CRenderResource(RenderResourceType_t nType)
{
	const char   __FUNCTION__; // 2631
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 75
	}
} /* size: 0, variables: 1 */

// <0002AEF5> rendersystem/renderresource.h:71
// variables: 2
inline void CRenderResource::CRenderResource(RenderResourceType_t nType)
{
	const char   __FUNCTION__; // 57041
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 75
	}
} /* size: 0, variables: 1 */

// <0034B590> rendersystem/renderresource.h:71
// variables: 2
inline void CRenderResource::CRenderResource(RenderResourceType_t nType)
{
	const char   __FUNCTION__; // 62311
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 75
	}
} /* size: 0, variables: 1 */

// <001A3F8B> rendersystem/renderresource.h:71
// variables: 2
inline void CRenderResource::CRenderResource(RenderResourceType_t nType)
{
	const char   __FUNCTION__; // 32006
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 75
	}
} /* size: 0, variables: 1 */

// <001A4D80> rendersystem/renderresource.h:98
void CRenderResourceMgr::~CRenderResourceMgr()
{
} /* size: 0 */

// <001A4D64> rendersystem/renderresource.h:98
inline void CRenderResourceMgr::~CRenderResourceMgr()
{
} /* size: 0 */

// <001570C7> rendersystem/renderresource.h:98
// member functions: 23
// member variables: 3
// class size: 64
class CRenderResourceMgr {
	/* rendersystem/renderresource.h:101 */
	void CRenderResourceMgr(CRenderResourceMgr* );
	/* rendersystem/renderresource.h:113 */
	void Free(CRenderResourceMgr* , RenderResourceHandle_t);
	/* rendersystem/renderresource.h:130 */
	bool IsHandleValid(const CRenderResourceMgr* , RenderResourceHandle_t);
	/* rendersystem/renderresource.h:136 */
	RenderResourceHandle_t GetHandle(CRenderResourceMgr* , CRenderResource* );
	/* rendersystem/renderresource.h:150 */
	void MarkUsed(CRenderResourceMgr* , RenderResourceHandle_t, int);
	/* rendersystem/renderresource.h:159 */
	void PerformQueuedDeletions(CRenderResourceMgr* , uint);
private:
	CThreadFastMutex m_Lock; /* 0 24 */
	CUtlVector<CRenderResource*, CUtlMemory<CRenderResource*, int> > m_QueuedDeletions; /* 24 32 */
	bool m_bPerformingQueuedDeletions; /* 56 1 */
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

// <001A8BA8> rendersystem/renderresource.h:101
void CRenderResourceMgr::CRenderResourceMgr()
{
} /* size: 0 */

// <001A8B8F> rendersystem/renderresource.h:101
inline void CRenderResourceMgr::CRenderResourceMgr()
{
} /* size: 0 */

