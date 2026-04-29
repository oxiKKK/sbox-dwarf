
//
// rendersystem/vertexbufferbase.h
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 11
//	class: 1
//

// <003C3178> rendersystem/vertexbufferbase.h:29
// member functions: 42
// member variables: 13
// static member variables: 2
// vtable entries: 2
// class size: 112
class CVertexBufferBase : public CRenderResource {
public:
	/* class CRenderResource <ancestor>; */ /* 0 16 */
	void CVertexBufferBase(CVertexBufferBase* , const CVertexBufferBase& );
	/* rendersystem/vertexbufferbase.cpp:36 */
	void CVertexBufferBase(CVertexBufferBase* , RenderBufferType_t, const BufferDesc_t& );
	/* rendersystem/vertexbufferbase.cpp:61 */
	virtual void ~CVertexBufferBase(CVertexBufferBase* );
	/* rendersystem/vertexbufferbase.h:126 */
	int GetVertexCount(const CVertexBufferBase* );
	/* rendersystem/vertexbufferbase.h:133 */
	int GetVertexCapacity(const CVertexBufferBase* );
	/* rendersystem/vertexbufferbase.h:119 */
	int GetVertexSize(const CVertexBufferBase* );
	/* rendersystem/vertexbufferbase.h:114 */
	int GetBufferSizeInBytes(const CVertexBufferBase* );
	/* rendersystem/vertexbufferbase.h:153 */
	void SetResourceHandle(CVertexBufferBase* , VertexBufferHandle_t);
	/* rendersystem/vertexbufferbase.h:158 */
	VertexBufferHandle_t GetResourceHandle(CVertexBufferBase* );
	/* rendersystem/vertexbufferbase.h:163 */
	RenderInputLayout_t GetInputLayout(CVertexBufferBase* );
	/* rendersystem/vertexbufferbase.h:109 */
	RenderBufferType_t GetBufferType(const CVertexBufferBase* );
	/* rendersystem/vertexbufferbase.cpp:70 */
	const char* GetDebugName(const CVertexBufferBase* );
	/* rendersystem/vertexbufferbase.h:140 */
	const char* GetBudgetGroupName(const CVertexBufferBase* );
	/* rendersystem/vertexbufferbase.cpp:159 */
	void CreateInputLayouts(CVertexBufferBase* , IRenderDevice* , int, const RenderInputLayoutField_t* , bool);
	/* rendersystem/vertexbufferbase.h:60 */
	int GetBufferCount(void);
	/* rendersystem/vertexbufferbase.h:61 */
	int GetAllocatedBufferMemory(void);
	RenderInputLayout_t m_hInputLayout; /* 16 8 */
protected:
	/* rendersystem/vertexbufferbase.cpp:124 */
	void RegisterAllocation(CVertexBufferBase* , int);
	/* rendersystem/vertexbufferbase.cpp:141 */
	void RegisterDeallocation(CVertexBufferBase* , int);
	/* rendersystem/vertexbufferbase.cpp:90 */
	virtual void* AllocateBackingStore(CVertexBufferBase* , int);
	/* rendersystem/vertexbufferbase.cpp:104 */
	virtual void FreeBackingStore(CVertexBufferBase* );
	/* rendersystem/vertexbufferbase.h:145 */
	void* GetBackingStore(CVertexBufferBase* );
	int m_nVertexCount; /* 24 4 */
	int m_nVertexSize; /* 28 4 */
	int m_nBufferSize; /* 32 4 */
	VertexBufferHandle_t m_hResourceBuffer; /* 40 8 */
	void * m_pBackingStore; /* 48 8 */
private:
	RenderBufferType_t m_nBufferType; /* 56 4 */
	const char * m_pBudgetGroupName; /* 64 8 */
	static CInterlockedInt s_nVertexBufferCount; /* 0 0 */
	static CInterlockedInt s_nVertexBufferMemory; /* 0 0 */
	CBufferString m_DebugName; /* 72 16 */
	CVertexBufferBase * m_pNext; /* 88 8 */
	CVertexBufferBase * m_pPrev; /* 96 8 */
	CVertexBufferBase * m_pPooledVertexBufferNext; /* 104 8 */
	const char  * GetDebugName(const class CVertexBufferBase  *); /* linkage=_ZNK17CVertexBufferBase12GetDebugNameEv */
	RenderInputLayout_t GetInputLayout(class CVertexBufferBase *); /* linkage=_ZN17CVertexBufferBase14GetInputLayoutEv */
	int GetVertexCapacity(const class CVertexBufferBase  *); /* linkage=_ZNK17CVertexBufferBase17GetVertexCapacityEv */
	int GetVertexCount(const class CVertexBufferBase  *); /* linkage=_ZNK17CVertexBufferBase14GetVertexCountEv */
	int GetVertexSize(const class CVertexBufferBase  *); /* linkage=_ZNK17CVertexBufferBase13GetVertexSizeEv */
	int GetBufferSizeInBytes(const class CVertexBufferBase  *); /* linkage=_ZNK17CVertexBufferBase20GetBufferSizeInBytesEv */
	enum RenderBufferType_t GetBufferType(const class CVertexBufferBase  *); /* linkage=_ZNK17CVertexBufferBase13GetBufferTypeEv */
	int GetAllocatedBufferMemory(void); /* linkage=_ZN17CVertexBufferBase24GetAllocatedBufferMemoryEv */
	int GetBufferCount(void); /* linkage=_ZN17CVertexBufferBase14GetBufferCountEv */
	void CVertexBufferBase(class CVertexBufferBase *, const class CVertexBufferBase  &); /* linkage=_ZN17CVertexBufferBaseC4ERKS_ */
	void CVertexBufferBase(class CVertexBufferBase *, enum RenderBufferType_t, const class BufferDesc_t  &); /* linkage=_ZN17CVertexBufferBaseC4E18RenderBufferType_tRK12BufferDesc_t */
	virtual void ~CVertexBufferBase(class CVertexBufferBase *); /* linkage=_ZN17CVertexBufferBaseD4Ev */
	void SetResourceHandle(class CVertexBufferBase *, VertexBufferHandle_t); /* linkage=_ZN17CVertexBufferBase17SetResourceHandleEP22VertexBufferHandle_t__ */
	VertexBufferHandle_t GetResourceHandle(class CVertexBufferBase *); /* linkage=_ZN17CVertexBufferBase17GetResourceHandleEv */
	const char  * GetBudgetGroupName(const class CVertexBufferBase  *); /* linkage=_ZNK17CVertexBufferBase18GetBudgetGroupNameEv */
	void CreateInputLayouts(class CVertexBufferBase *, class IRenderDevice *, int, const class RenderInputLayoutField_t  *, bool); /* linkage=_ZN17CVertexBufferBase18CreateInputLayoutsEP13IRenderDeviceiPK24RenderInputLayoutField_tb */
	void RegisterAllocation(class CVertexBufferBase *, int); /* linkage=_ZN17CVertexBufferBase18RegisterAllocationEi */
	void RegisterDeallocation(class CVertexBufferBase *, int); /* linkage=_ZN17CVertexBufferBase20RegisterDeallocationEi */
	virtual void * AllocateBackingStore(class CVertexBufferBase *, int); /* linkage=_ZN17CVertexBufferBase20AllocateBackingStoreEi */
	/* <3c5572> rendersystem/vertexbufferbase.cpp:104 */
	virtual void FreeBackingStore(class CVertexBufferBase *); /* linkage=_ZN17CVertexBufferBase16FreeBackingStoreEv */
	void * GetBackingStore(class CVertexBufferBase *); /* linkage=_ZN17CVertexBufferBase15GetBackingStoreEv */
};

// <001A8B88> rendersystem/vertexbufferbase.h:60
inline void GetBufferCount(void)
{
} /* size: 0 */

// <001EE475> rendersystem/vertexbufferbase.h:61
inline void GetAllocatedBufferMemory(void)
{
} /* size: 0 */

// <003C50A9> rendersystem/vertexbufferbase.h:109
inline void CVertexBufferBase::GetBufferType()
{
} /* size: 0 */

// <001A8B4F> rendersystem/vertexbufferbase.h:114
inline void CVertexBufferBase::GetBufferSizeInBytes()
{
} /* size: 0 */

// <001A8B17> rendersystem/vertexbufferbase.h:119
// variables: 2
inline void CVertexBufferBase::GetVertexSize()
{
	const char   __FUNCTION__; // 2577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 122
	}
} /* size: 0, variables: 1 */

// <001A3EAF> rendersystem/vertexbufferbase.h:119
// variables: 2
inline void CVertexBufferBase::GetVertexSize()
{
	const char   __FUNCTION__; // 31952
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 122
	}
} /* size: 0, variables: 1 */

// <001A8ADF> rendersystem/vertexbufferbase.h:126
// variables: 2
inline void CVertexBufferBase::GetVertexCount()
{
	const char   __FUNCTION__; // 2604
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 129
	}
} /* size: 0, variables: 1 */

// <001A3E77> rendersystem/vertexbufferbase.h:126
// variables: 2
inline void CVertexBufferBase::GetVertexCount()
{
	const char   __FUNCTION__; // 31979
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 129
	}
} /* size: 0, variables: 1 */

// <001A8AA7> rendersystem/vertexbufferbase.h:133
// variables: 2
inline void CVertexBufferBase::GetVertexCapacity()
{
	const char   __FUNCTION__; // 2685
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 136
	}
} /* size: 0, variables: 1 */

// <001A3E3F> rendersystem/vertexbufferbase.h:133
// variables: 2
inline void CVertexBufferBase::GetVertexCapacity()
{
	const char   __FUNCTION__; // 32060
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 136
	}
} /* size: 0, variables: 1 */

// <001A8A8E> rendersystem/vertexbufferbase.h:163
inline void CVertexBufferBase::GetInputLayout()
{
} /* size: 0 */

