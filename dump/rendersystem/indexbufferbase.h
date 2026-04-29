
//
// rendersystem/indexbufferbase.h
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 10
//	class: 1
//

// <000295E7> rendersystem/indexbufferbase.h:29
// member functions: 38
// member variables: 12
// static member variables: 2
// vtable entries: 2
// class size: 96
class CIndexBufferBase : public CRenderResource {
public:
	/* class CRenderResource <ancestor>; */ /* 0 16 */
	void CIndexBufferBase(CIndexBufferBase* , const CIndexBufferBase& );
	/* rendersystem/indexbufferbase.cpp:26 */
	void CIndexBufferBase(CIndexBufferBase* , RenderBufferType_t, const BufferDesc_t& );
	/* rendersystem/indexbufferbase.cpp:50 */
	virtual void ~CIndexBufferBase(CIndexBufferBase* );
	/* rendersystem/indexbufferbase.h:123 */
	int GetIndexCount(const CIndexBufferBase* );
	/* rendersystem/indexbufferbase.h:130 */
	int GetIndexCapacity(const CIndexBufferBase* );
	/* rendersystem/indexbufferbase.h:116 */
	int GetIndexSize(const CIndexBufferBase* );
	/* rendersystem/indexbufferbase.h:111 */
	int GetBufferSizeInBytes(const CIndexBufferBase* );
	/* rendersystem/indexbufferbase.h:150 */
	void SetResourceHandle(CIndexBufferBase* , IndexBufferHandle_t);
	/* rendersystem/indexbufferbase.h:155 */
	IndexBufferHandle_t GetResourceHandle(CIndexBufferBase* );
	/* rendersystem/indexbufferbase.h:106 */
	RenderBufferType_t GetBufferType(const CIndexBufferBase* );
	/* rendersystem/indexbufferbase.cpp:59 */
	const char* GetDebugName(const CIndexBufferBase* );
	/* rendersystem/indexbufferbase.h:137 */
	const char* GetBudgetGroupName(const CIndexBufferBase* );
	/* rendersystem/indexbufferbase.h:58 */
	int GetBufferCount(void);
	/* rendersystem/indexbufferbase.h:59 */
	int GetAllocatedBufferMemory(void);
protected:
	/* rendersystem/indexbufferbase.cpp:113 */
	void RegisterAllocation(CIndexBufferBase* , int);
	/* rendersystem/indexbufferbase.cpp:130 */
	void RegisterDeallocation(CIndexBufferBase* , int);
	/* rendersystem/indexbufferbase.cpp:79 */
	virtual void* AllocateBackingStore(CIndexBufferBase* , int);
	/* rendersystem/indexbufferbase.cpp:93 */
	virtual void FreeBackingStore(CIndexBufferBase* );
	/* rendersystem/indexbufferbase.h:142 */
	void* GetBackingStore(CIndexBufferBase* );
	void * m_pBackingStore; /* 16 8 */
	int m_nIndexCount; /* 24 4 */
	int m_nIndexSize; /* 28 4 */
	int m_nBufferSize; /* 32 4 */
	IndexBufferHandle_t m_hResourceBuffer; /* 40 8 */
private:
	RenderBufferType_t m_nBufferType; /* 48 4 */
	const char * m_pBudgetGroupName; /* 56 8 */
	static CInterlockedInt s_nIndexBufferCount; /* 0 0 */
	static CInterlockedInt s_nIndexBufferMemory; /* 0 0 */
	CUtlString m_DebugName; /* 64 8 */
	CIndexBufferBase * m_pNext; /* 72 8 */
	CIndexBufferBase * m_pPrev; /* 80 8 */
	CIndexBufferBase * m_pPooledIndexBufferNext; /* 88 8 */
	void CIndexBufferBase(class CIndexBufferBase *, const class CIndexBufferBase  &); /* linkage=_ZN16CIndexBufferBaseC4ERKS_ */
	void CIndexBufferBase(class CIndexBufferBase *, enum RenderBufferType_t, const class BufferDesc_t  &); /* linkage=_ZN16CIndexBufferBaseC4E18RenderBufferType_tRK12BufferDesc_t */
	virtual void ~CIndexBufferBase(class CIndexBufferBase *); /* linkage=_ZN16CIndexBufferBaseD4Ev */
	int GetIndexCount(const class CIndexBufferBase  *); /* linkage=_ZNK16CIndexBufferBase13GetIndexCountEv */
	int GetIndexCapacity(const class CIndexBufferBase  *); /* linkage=_ZNK16CIndexBufferBase16GetIndexCapacityEv */
	int GetIndexSize(const class CIndexBufferBase  *); /* linkage=_ZNK16CIndexBufferBase12GetIndexSizeEv */
	int GetBufferSizeInBytes(const class CIndexBufferBase  *); /* linkage=_ZNK16CIndexBufferBase20GetBufferSizeInBytesEv */
	void SetResourceHandle(class CIndexBufferBase *, IndexBufferHandle_t); /* linkage=_ZN16CIndexBufferBase17SetResourceHandleEP21IndexBufferHandle_t__ */
	IndexBufferHandle_t GetResourceHandle(class CIndexBufferBase *); /* linkage=_ZN16CIndexBufferBase17GetResourceHandleEv */
	enum RenderBufferType_t GetBufferType(const class CIndexBufferBase  *); /* linkage=_ZNK16CIndexBufferBase13GetBufferTypeEv */
	const char  * GetDebugName(const class CIndexBufferBase  *); /* linkage=_ZNK16CIndexBufferBase12GetDebugNameEv */
	const char  * GetBudgetGroupName(const class CIndexBufferBase  *); /* linkage=_ZNK16CIndexBufferBase18GetBudgetGroupNameEv */
	int GetBufferCount(void); /* linkage=_ZN16CIndexBufferBase14GetBufferCountEv */
	int GetAllocatedBufferMemory(void); /* linkage=_ZN16CIndexBufferBase24GetAllocatedBufferMemoryEv */
	void RegisterAllocation(class CIndexBufferBase *, int); /* linkage=_ZN16CIndexBufferBase18RegisterAllocationEi */
	void RegisterDeallocation(class CIndexBufferBase *, int); /* linkage=_ZN16CIndexBufferBase20RegisterDeallocationEi */
	virtual void * AllocateBackingStore(class CIndexBufferBase *, int); /* linkage=_ZN16CIndexBufferBase20AllocateBackingStoreEi */
	/* <2b2df> rendersystem/indexbufferbase.cpp:93 */
	virtual void FreeBackingStore(class CIndexBufferBase *); /* linkage=_ZN16CIndexBufferBase16FreeBackingStoreEv */
	void * GetBackingStore(class CIndexBufferBase *); /* linkage=_ZN16CIndexBufferBase15GetBackingStoreEv */
};

// <001A8A87> rendersystem/indexbufferbase.h:58
inline void GetBufferCount(void)
{
} /* size: 0 */

// <001EE46E> rendersystem/indexbufferbase.h:59
inline void GetAllocatedBufferMemory(void)
{
} /* size: 0 */

// <001A8A67> rendersystem/indexbufferbase.h:106
inline void CIndexBufferBase::GetBufferType()
{
} /* size: 0 */

// <001A8A4E> rendersystem/indexbufferbase.h:111
inline void CIndexBufferBase::GetBufferSizeInBytes()
{
} /* size: 0 */

// <001A8A16> rendersystem/indexbufferbase.h:116
// variables: 2
inline void CIndexBufferBase::GetIndexSize()
{
	const char   __FUNCTION__; // 2550
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 119
	}
} /* size: 0, variables: 1 */

// <001A3DAE> rendersystem/indexbufferbase.h:116
// variables: 2
inline void CIndexBufferBase::GetIndexSize()
{
	const char   __FUNCTION__; // 31925
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 119
	}
} /* size: 0, variables: 1 */

// <001A89DE> rendersystem/indexbufferbase.h:123
// variables: 2
inline void CIndexBufferBase::GetIndexCount()
{
	const char   __FUNCTION__; // 2577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 126
	}
} /* size: 0, variables: 1 */

// <001A3D76> rendersystem/indexbufferbase.h:123
// variables: 2
inline void CIndexBufferBase::GetIndexCount()
{
	const char   __FUNCTION__; // 31952
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 126
	}
} /* size: 0, variables: 1 */

// <001A89A6> rendersystem/indexbufferbase.h:130
// variables: 2
inline void CIndexBufferBase::GetIndexCapacity()
{
	const char   __FUNCTION__; // 2658
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 133
	}
} /* size: 0, variables: 1 */

// <001A3D3E> rendersystem/indexbufferbase.h:130
// variables: 2
inline void CIndexBufferBase::GetIndexCapacity()
{
	const char   __FUNCTION__; // 32033
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 133
	}
} /* size: 0, variables: 1 */

