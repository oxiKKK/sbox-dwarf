
//
// public/rendersystem/indexdata.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemvulkan.so
//
//	functions: 72
//	classes: 5
//

// <00991DC7> ../public/rendersystem/indexdata.h:14
// member functions: 26
// member variables: 8
// class size: 32
class CIndexDataBase<unsigned int> {
	/* ../public/rendersystem/indexdata.h:83 */
	void CIndexDataBase(CIndexDataBase<unsigned int>* );
	/* ../public/rendersystem/indexdata.h:105 */
	void ~CIndexDataBase(CIndexDataBase<unsigned int>* );
	/* ../public/rendersystem/indexdata.h:136 */
	int IndexCount(const CIndexDataBase<unsigned int>* );
	/* ../public/rendersystem/indexdata.h:126 */
	int GetBufferIndexCount(const CIndexDataBase<unsigned int>* );
	/* ../public/rendersystem/indexdata.h:143 */
	void AdvanceIndexCount(CIndexDataBase<unsigned int>* , int);
	/* ../public/rendersystem/indexdata.h:30 */
	IRenderContext* GetRenderContext(CIndexDataBase<unsigned int>* );
	/* ../public/rendersystem/indexdata.h:155 */
	void SetCurrentIndexValue(CIndexDataBase<unsigned int>* , unsigned int);
	/* ../public/rendersystem/indexdata.h:171 */
	const unsigned int* Index(CIndexDataBase<unsigned int>* );
	/* ../public/rendersystem/indexdata.h:190 */
	void Index(CIndexDataBase<unsigned int>* , unsigned int);
	/* ../public/rendersystem/indexdata.h:212 */
	void Index2(CIndexDataBase<unsigned int>* , unsigned int, unsigned int);
	/* ../public/rendersystem/indexdata.h:204 */
	void Index3(CIndexDataBase<unsigned int>* , unsigned int, unsigned int, unsigned int);
	/* ../public/rendersystem/indexdata.h:117 */
	unsigned int* Base(const CIndexDataBase<unsigned int>* );
protected:
	/* ../public/rendersystem/indexdata.h:93 */
	void ClearIndexFields(CIndexDataBase<unsigned int>* );
	unsigned int * m_pMemory; /* 0 8 */
	int m_nIndexCount; /* 8 4 */
	int m_nIndexIncrement; /* 12 4 */
	IRenderContext * m_pRenderContext; /* 16 8 */
	int m_nMaxIndexCount; /* 24 4 */
	uint32 m_nBufferIndexCount:30; /* 28: 0 4 */
	uint32 m_bShouldDeallocate:1; /* 28:30 4 */
	uint32 m_bBufferInstalled:1; /* 28:31 4 */
	void CIndexDataBase(class CIndexDataBase<unsigned int> *); /* linkage=_ZN14CIndexDataBaseIjEC4Ev */
	void ~CIndexDataBase(class CIndexDataBase<unsigned int> *); /* linkage=_ZN14CIndexDataBaseIjED4Ev */
	int IndexCount(const class CIndexDataBase<unsigned int>  *); /* linkage=_ZNK14CIndexDataBaseIjE10IndexCountEv */
	int GetBufferIndexCount(const class CIndexDataBase<unsigned int>  *); /* linkage=_ZNK14CIndexDataBaseIjE19GetBufferIndexCountEv */
	void AdvanceIndexCount(class CIndexDataBase<unsigned int> *, int); /* linkage=_ZN14CIndexDataBaseIjE17AdvanceIndexCountEi */
	class IRenderContext * GetRenderContext(class CIndexDataBase<unsigned int> *); /* linkage=_ZN14CIndexDataBaseIjE16GetRenderContextEv */
	void SetCurrentIndexValue(class CIndexDataBase<unsigned int> *, unsigned int); /* linkage=_ZN14CIndexDataBaseIjE20SetCurrentIndexValueEj */
	const unsigned int  * Index(class CIndexDataBase<unsigned int> *); /* linkage=_ZN14CIndexDataBaseIjE5IndexEv */
	void Index(class CIndexDataBase<unsigned int> *, unsigned int); /* linkage=_ZN14CIndexDataBaseIjE5IndexEj */
	void Index2(class CIndexDataBase<unsigned int> *, unsigned int, unsigned int); /* linkage=_ZN14CIndexDataBaseIjE6Index2Ejj */
	void Index3(class CIndexDataBase<unsigned int> *, unsigned int, unsigned int, unsigned int); /* linkage=_ZN14CIndexDataBaseIjE6Index3Ejjj */
	unsigned int * Base(const class CIndexDataBase<unsigned int>  *); /* linkage=_ZNK14CIndexDataBaseIjE4BaseEv */
	void ClearIndexFields(class CIndexDataBase<unsigned int> *); /* linkage=_ZN14CIndexDataBaseIjE16ClearIndexFieldsEv */
};

// <02DDF305> ../public/rendersystem/indexdata.h:14
// member functions: 26
// member variables: 8
// class size: 32
class CIndexDataBase<short unsigned int> {
	/* ../public/rendersystem/indexdata.h:83 */
	void CIndexDataBase(CIndexDataBase<short unsigned int>* );
	/* ../public/rendersystem/indexdata.h:105 */
	void ~CIndexDataBase(CIndexDataBase<short unsigned int>* );
	/* ../public/rendersystem/indexdata.h:136 */
	int IndexCount(const CIndexDataBase<short unsigned int>* );
	/* ../public/rendersystem/indexdata.h:126 */
	int GetBufferIndexCount(const CIndexDataBase<short unsigned int>* );
	/* ../public/rendersystem/indexdata.h:143 */
	void AdvanceIndexCount(CIndexDataBase<short unsigned int>* , int);
	/* ../public/rendersystem/indexdata.h:30 */
	IRenderContext* GetRenderContext(CIndexDataBase<short unsigned int>* );
	/* ../public/rendersystem/indexdata.h:155 */
	void SetCurrentIndexValue(CIndexDataBase<short unsigned int>* , short unsigned int);
	/* ../public/rendersystem/indexdata.h:171 */
	const short unsigned int* Index(CIndexDataBase<short unsigned int>* );
	/* ../public/rendersystem/indexdata.h:190 */
	void Index(CIndexDataBase<short unsigned int>* , short unsigned int);
	/* ../public/rendersystem/indexdata.h:212 */
	void Index2(CIndexDataBase<short unsigned int>* , short unsigned int, short unsigned int);
	/* ../public/rendersystem/indexdata.h:204 */
	void Index3(CIndexDataBase<short unsigned int>* , short unsigned int, short unsigned int, short unsigned int);
	/* ../public/rendersystem/indexdata.h:117 */
	short unsigned int* Base(const CIndexDataBase<short unsigned int>* );
protected:
	/* ../public/rendersystem/indexdata.h:93 */
	void ClearIndexFields(CIndexDataBase<short unsigned int>* );
	short unsigned int * m_pMemory; /* 0 8 */
	int m_nIndexCount; /* 8 4 */
	int m_nIndexIncrement; /* 12 4 */
	IRenderContext * m_pRenderContext; /* 16 8 */
	int m_nMaxIndexCount; /* 24 4 */
	uint32 m_nBufferIndexCount:30; /* 28: 0 4 */
	uint32 m_bShouldDeallocate:1; /* 28:30 4 */
	uint32 m_bBufferInstalled:1; /* 28:31 4 */
	void CIndexDataBase(class CIndexDataBase<short unsigned int> *); /* linkage=_ZN14CIndexDataBaseItEC4Ev */
	void ~CIndexDataBase(class CIndexDataBase<short unsigned int> *); /* linkage=_ZN14CIndexDataBaseItED4Ev */
	int IndexCount(const class CIndexDataBase<short unsigned int>  *); /* linkage=_ZNK14CIndexDataBaseItE10IndexCountEv */
	int GetBufferIndexCount(const class CIndexDataBase<short unsigned int>  *); /* linkage=_ZNK14CIndexDataBaseItE19GetBufferIndexCountEv */
	void AdvanceIndexCount(class CIndexDataBase<short unsigned int> *, int); /* linkage=_ZN14CIndexDataBaseItE17AdvanceIndexCountEi */
	class IRenderContext * GetRenderContext(class CIndexDataBase<short unsigned int> *); /* linkage=_ZN14CIndexDataBaseItE16GetRenderContextEv */
	void SetCurrentIndexValue(class CIndexDataBase<short unsigned int> *, short unsigned int); /* linkage=_ZN14CIndexDataBaseItE20SetCurrentIndexValueEt */
	const short unsigned int  * Index(class CIndexDataBase<short unsigned int> *); /* linkage=_ZN14CIndexDataBaseItE5IndexEv */
	void Index(class CIndexDataBase<short unsigned int> *, short unsigned int); /* linkage=_ZN14CIndexDataBaseItE5IndexEt */
	void Index2(class CIndexDataBase<short unsigned int> *, short unsigned int, short unsigned int); /* linkage=_ZN14CIndexDataBaseItE6Index2Ett */
	void Index3(class CIndexDataBase<short unsigned int> *, short unsigned int, short unsigned int, short unsigned int); /* linkage=_ZN14CIndexDataBaseItE6Index3Ettt */
	short unsigned int * Base(const class CIndexDataBase<short unsigned int>  *); /* linkage=_ZNK14CIndexDataBaseItE4BaseEv */
	void ClearIndexFields(class CIndexDataBase<short unsigned int> *); /* linkage=_ZN14CIndexDataBaseItE16ClearIndexFieldsEv */
};

// <064523EC> ../public/rendersystem/indexdata.h:83
void CIndexDataBase<unsigned int>::CIndexDataBase()
{
} /* size: 0 */

// <064523D3> ../public/rendersystem/indexdata.h:83
inline void CIndexDataBase<unsigned int>::CIndexDataBase()
{
} /* size: 0 */

// <03C17BEA> ../public/rendersystem/indexdata.h:83
void CIndexDataBase<short unsigned int>::CIndexDataBase()
{
} /* size: 0 */

// <03C17BD1> ../public/rendersystem/indexdata.h:83
inline void CIndexDataBase<short unsigned int>::CIndexDataBase()
{
} /* size: 0 */

// <06450155> ../public/rendersystem/indexdata.h:93
inline void CIndexDataBase<unsigned int>::ClearIndexFields()
{
} /* size: 0 */

// <03C17820> ../public/rendersystem/indexdata.h:93
inline void CIndexDataBase<short unsigned int>::ClearIndexFields()
{
} /* size: 0 */

// <064523BC> ../public/rendersystem/indexdata.h:105
void CIndexDataBase<unsigned int>::~CIndexDataBase()
{
} /* size: 0 */

// <064523A3> ../public/rendersystem/indexdata.h:105
inline void CIndexDataBase<unsigned int>::~CIndexDataBase()
{
} /* size: 0 */

// <03C17DAE> ../public/rendersystem/indexdata.h:105
void CIndexDataBase<short unsigned int>::~CIndexDataBase()
{
	{
		{
		}
	}
} /* size: 0 */

// <03C17D6C> ../public/rendersystem/indexdata.h:105
// variables: 2
inline void CIndexDataBase<short unsigned int>::~CIndexDataBase()
{
	const char   __FUNCTION__; // 59555
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 109
	}
} /* size: 0, variables: 1 */

// <033AC9F6> ../public/rendersystem/indexdata.h:105
// variables: 2
inline void CIndexDataBase<short unsigned int>::~CIndexDataBase()
{
	const char   __FUNCTION__; // 54198
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 109
	}
} /* size: 0, variables: 1 */

// <02E94840> ../public/rendersystem/indexdata.h:105
// variables: 2
inline void CIndexDataBase<short unsigned int>::~CIndexDataBase()
{
	const char   __FUNCTION__; // 63574
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 109
	}
} /* size: 0, variables: 1 */

// <009EF363> ../public/rendersystem/indexdata.h:105
void CIndexDataBase<unsigned int>::~CIndexDataBase()
{
	{
		{
		}
	}
} /* size: 0 */

// <009EF320> ../public/rendersystem/indexdata.h:105
// variables: 2
inline void CIndexDataBase<unsigned int>::~CIndexDataBase()
{
	const char   __FUNCTION__; // 57689
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 109
	}
} /* size: 0, variables: 1 */

// <0083B03C> ../public/rendersystem/indexdata.h:105
// variables: 2
inline void CIndexDataBase<short unsigned int>::~CIndexDataBase()
{
	const char   __FUNCTION__; // 22967
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 109
	}
} /* size: 0, variables: 1 */

// <00439B49> ../public/rendersystem/indexdata.h:105
// variables: 2
inline void CIndexDataBase<short unsigned int>::~CIndexDataBase()
{
	const char   __FUNCTION__; // 58034
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 109
	}
} /* size: 0, variables: 1 */

// <03C196DD> ../public/rendersystem/indexdata.h:117
inline void CIndexDataBase<short unsigned int>::Base()
{
} /* size: 0 */

// <03C196F6> ../public/rendersystem/indexdata.h:126
inline void CIndexDataBase<short unsigned int>::GetBufferIndexCount()
{
} /* size: 0 */

// <03C19620> ../public/rendersystem/indexdata.h:136
inline void CIndexDataBase<short unsigned int>::IndexCount()
{
} /* size: 0 */

// <009F2F7D> ../public/rendersystem/indexdata.h:136
inline void CIndexDataBase<unsigned int>::IndexCount()
{
} /* size: 0 */

// <03C1A922> ../public/rendersystem/indexdata.h:143
// variables: 2
inline void CIndexDataBase<short unsigned int>::AdvanceIndexCount(int nNumIndices)
{
	const char   __FUNCTION__; // 59609
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 145
	}
} /* size: 0, variables: 1 */

// <03C1A970> ../public/rendersystem/indexdata.h:155
// variables: 2
inline void CIndexDataBase<short unsigned int>::SetCurrentIndexValue(short unsigned int nIndex)
{
	const char   __FUNCTION__; // 59685
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 158
	}
} /* size: 0, variables: 1 */

// <0657D266> ../public/rendersystem/indexdata.h:190
inline void CIndexDataBase<unsigned int>::Index(unsigned int nIndex)
{
} /* size: 0 */

// <033AF788> ../public/rendersystem/indexdata.h:190
// variables: 2
inline void CIndexDataBase<short unsigned int>::Index(short unsigned int nIndex)
{
	const char   __FUNCTION__; // 53948
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 193
	}
} /* size: 0, variables: 1 */

// <009F2E72> ../public/rendersystem/indexdata.h:190
// variables: 2
inline void CIndexDataBase<unsigned int>::Index(unsigned int nIndex)
{
	const char   __FUNCTION__; // 57434
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 193
	}
} /* size: 0, variables: 1 */

// <00441E46> ../public/rendersystem/indexdata.h:190
// variables: 2
inline void CIndexDataBase<short unsigned int>::Index(short unsigned int nIndex)
{
	const char   __FUNCTION__; // 57774
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 193
	}
} /* size: 0, variables: 1 */

// <00441ACA> ../public/rendersystem/indexdata.h:204
inline void CIndexDataBase<short unsigned int>::Index3(short unsigned int nIndex0, short unsigned int nIndex1, short unsigned int nIndex2)
{
} /* size: 0 */

// <033C6A07> ../public/rendersystem/indexdata.h:222
// variables: 3
inline void CIndexDataBase<short unsigned int>::Index2(uint16 nIndex1, uint16 nIndex2)
{
	const char   __FUNCTION__; // 53975
	uint32 nIndices; // 226
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 224
	}
} /* size: 0, variables: 2 */

// <02F19C09> ../public/rendersystem/indexdata.h:222
// variables: 3
inline void CIndexDataBase<short unsigned int>::Index2(uint16 nIndex1, uint16 nIndex2)
{
	const char   __FUNCTION__; // 63331
	uint32 nIndices; // 226
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 224
	}
} /* size: 0, variables: 2 */

// <008767FE> ../public/rendersystem/indexdata.h:222
// variables: 3
inline void CIndexDataBase<short unsigned int>::Index2(uint16 nIndex1, uint16 nIndex2)
{
	const char   __FUNCTION__; // 22724
	uint32 nIndices; // 226
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 224
	}
} /* size: 0, variables: 2 */

// <004985F4> ../public/rendersystem/indexdata.h:222
// variables: 3
inline void CIndexDataBase<short unsigned int>::Index2(uint16 nIndex1, uint16 nIndex2)
{
	const char   __FUNCTION__; // 57801
	uint32 nIndices; // 226
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 224
	}
} /* size: 0, variables: 2 */

// <00993C04> ../public/rendersystem/indexdata.h:259
// member functions: 30
// member variables: 2
// class size: 40
class CIndexData<unsigned int> : public CIndexDataBase<unsigned int> {
public:
	/* class CIndexDataBase<unsigned int> <ancestor>; */ /* 0 32 */
	/* ../public/rendersystem/indexdata.h:311 */
	void CIndexData(CIndexData<unsigned int>* );
	/* ../public/rendersystem/indexdata.h:318 */
	void CIndexData(CIndexData<unsigned int>* , unsigned int* , int);
	/* ../public/rendersystem/indexdata.h:325 */
	void CIndexData(CIndexData<unsigned int>* , IRenderContext* , IndexBufferHandle_t);
	/* ../public/rendersystem/indexdata.h:332 */
	void CIndexData(CIndexData<unsigned int>* , IRenderContext* , RenderBufferType_t, int, const char* , const char* );
	/* ../public/rendersystem/indexdata.h:340 */
	void ~CIndexData(CIndexData<unsigned int>* );
	/* ../public/rendersystem/indexdata.h:438 */
	bool Lock(CIndexData<unsigned int>* , int);
	/* ../public/rendersystem/indexdata.h:480 */
	void Unlock(CIndexData<unsigned int>* );
	/* ../public/rendersystem/indexdata.h:511 */
	void Bind(CIndexData<unsigned int>* , int);
	/* ../public/rendersystem/indexdata.h:278 */
	void UnlockAndBind(CIndexData<unsigned int>* , int);
	/* ../public/rendersystem/indexdata.h:417 */
	IndexBufferHandle_t TakeOwnership(CIndexData<unsigned int>* );
	/* ../public/rendersystem/indexdata.h:428 */
	void ReleaseBuffer(CIndexData<unsigned int>* );
protected:
	/* ../public/rendersystem/indexdata.h:347 */
	void Init(CIndexData<unsigned int>* , unsigned int* , int);
	/* ../public/rendersystem/indexdata.h:363 */
	void Init(CIndexData<unsigned int>* , IRenderContext* , IndexBufferHandle_t);
	/* ../public/rendersystem/indexdata.h:380 */
	void Init(CIndexData<unsigned int>* , IRenderContext* , RenderBufferType_t, int, const char* , const char* );
	/* ../public/rendersystem/indexdata.h:402 */
	void Release(CIndexData<unsigned int>* );
private:
	IndexBufferHandle_t m_hIndexBuffer; /* 32 8 */
	void CIndexData(class CIndexData<unsigned int> *); /* linkage=_ZN10CIndexDataIjEC4Ev */
	void CIndexData(class CIndexData<unsigned int> *, unsigned int *, int); /* linkage=_ZN10CIndexDataIjEC4EPji */
	void CIndexData(class CIndexData<unsigned int> *, class IRenderContext *, IndexBufferHandle_t); /* linkage=_ZN10CIndexDataIjEC4EP14IRenderContextP21IndexBufferHandle_t__ */
	void CIndexData(class CIndexData<unsigned int> *, class IRenderContext *, enum RenderBufferType_t, int, const char  *, const char  *); /* linkage=_ZN10CIndexDataIjEC4EP14IRenderContext18RenderBufferType_tiPKcS5_ */
	void ~CIndexData(class CIndexData<unsigned int> *); /* linkage=_ZN10CIndexDataIjED4Ev */
	bool Lock(class CIndexData<unsigned int> *, int); /* linkage=_ZN10CIndexDataIjE4LockEi */
	void Unlock(class CIndexData<unsigned int> *); /* linkage=_ZN10CIndexDataIjE6UnlockEv */
	void Bind(class CIndexData<unsigned int> *, int); /* linkage=_ZN10CIndexDataIjE4BindEi */
	void UnlockAndBind(class CIndexData<unsigned int> *, int); /* linkage=_ZN10CIndexDataIjE13UnlockAndBindEi */
	IndexBufferHandle_t TakeOwnership(class CIndexData<unsigned int> *); /* linkage=_ZN10CIndexDataIjE13TakeOwnershipEv */
	void ReleaseBuffer(class CIndexData<unsigned int> *); /* linkage=_ZN10CIndexDataIjE13ReleaseBufferEv */
	void Init(class CIndexData<unsigned int> *, unsigned int *, int); /* linkage=_ZN10CIndexDataIjE4InitEPji */
	void Init(class CIndexData<unsigned int> *, class IRenderContext *, IndexBufferHandle_t); /* linkage=_ZN10CIndexDataIjE4InitEP14IRenderContextP21IndexBufferHandle_t__ */
	void Init(class CIndexData<unsigned int> *, class IRenderContext *, enum RenderBufferType_t, int, const char  *, const char  *); /* linkage=_ZN10CIndexDataIjE4InitEP14IRenderContext18RenderBufferType_tiPKcS5_ */
	/* <64714e6> ../public/rendersystem/indexdata.h:402 */
	void Release(class CIndexData<unsigned int> *); /* linkage=_ZN10CIndexDataIjE7ReleaseEv */
};

// <033A5567> ../public/rendersystem/indexdata.h:259
// member functions: 15
// member variables: 2
// class size: 40
class CIndexData<short unsigned int> : public CIndexDataBase<short unsigned int> {
public:
	/* class CIndexDataBase<short unsigned int> <ancestor>; */ /* 0 32 */
	/* ../public/rendersystem/indexdata.h:311 */
	void CIndexData(CIndexData<short unsigned int>* );
	/* ../public/rendersystem/indexdata.h:318 */
	void CIndexData(CIndexData<short unsigned int>* , short unsigned int* , int);
	/* ../public/rendersystem/indexdata.h:325 */
	void CIndexData(CIndexData<short unsigned int>* , IRenderContext* , IndexBufferHandle_t);
	/* ../public/rendersystem/indexdata.h:332 */
	void CIndexData(CIndexData<short unsigned int>* , IRenderContext* , RenderBufferType_t, int, const char* , const char* );
	/* ../public/rendersystem/indexdata.h:340 */
	void ~CIndexData(CIndexData<short unsigned int>* );
	/* ../public/rendersystem/indexdata.h:438 */
	bool Lock(CIndexData<short unsigned int>* , int);
	/* ../public/rendersystem/indexdata.h:480 */
	void Unlock(CIndexData<short unsigned int>* );
	/* ../public/rendersystem/indexdata.h:511 */
	void Bind(CIndexData<short unsigned int>* , int);
	/* ../public/rendersystem/indexdata.h:278 */
	void UnlockAndBind(CIndexData<short unsigned int>* , int);
	/* ../public/rendersystem/indexdata.h:417 */
	IndexBufferHandle_t TakeOwnership(CIndexData<short unsigned int>* );
	/* ../public/rendersystem/indexdata.h:428 */
	void ReleaseBuffer(CIndexData<short unsigned int>* );
protected:
	/* ../public/rendersystem/indexdata.h:347 */
	void Init(CIndexData<short unsigned int>* , short unsigned int* , int);
	/* ../public/rendersystem/indexdata.h:363 */
	void Init(CIndexData<short unsigned int>* , IRenderContext* , IndexBufferHandle_t);
	/* ../public/rendersystem/indexdata.h:380 */
	void Init(CIndexData<short unsigned int>* , IRenderContext* , RenderBufferType_t, int, const char* , const char* );
	/* ../public/rendersystem/indexdata.h:402 */
	void Release(CIndexData<short unsigned int>* );
private:
	IndexBufferHandle_t m_hIndexBuffer; /* 32 8 */
};

// <03C1892F> ../public/rendersystem/indexdata.h:318
void CIndexData<short unsigned int>::CIndexData(short unsigned int* pIB, int nBufferIndexCount)
{
} /* size: 0 */

// <03C188FC> ../public/rendersystem/indexdata.h:318
inline void CIndexData<short unsigned int>::CIndexData(short unsigned int* pIB, int nBufferIndexCount)
{
} /* size: 0 */

// <033AF8CC> ../public/rendersystem/indexdata.h:325
void CIndexData<short unsigned int>::CIndexData(IRenderContext* pRenderContext, IndexBufferHandle_t hIndexBuffer)
{
} /* size: 0 */

// <033AF899> ../public/rendersystem/indexdata.h:325
inline void CIndexData<short unsigned int>::CIndexData(IRenderContext* pRenderContext, IndexBufferHandle_t hIndexBuffer)
{
} /* size: 0 */

// <009F3196> ../public/rendersystem/indexdata.h:325
void CIndexData<unsigned int>::CIndexData(IRenderContext* pRenderContext, IndexBufferHandle_t hIndexBuffer)
{
} /* size: 0 */

// <009F3163> ../public/rendersystem/indexdata.h:325
inline void CIndexData<unsigned int>::CIndexData(IRenderContext* pRenderContext, IndexBufferHandle_t hIndexBuffer)
{
} /* size: 0 */

// <06455E71> ../public/rendersystem/indexdata.h:332
void CIndexData<unsigned int>::CIndexData(IRenderContext* pRenderContext, RenderBufferType_t nType, int nIndexCount, const char* pDebugName, const char* pBudgetGroup)
{
} /* size: 0 */

// <06455E17> ../public/rendersystem/indexdata.h:332
inline void CIndexData<unsigned int>::CIndexData(IRenderContext* pRenderContext, RenderBufferType_t nType, int nIndexCount, const char* pDebugName, const char* pBudgetGroup)
{
} /* size: 0 */

// <06455E00> ../public/rendersystem/indexdata.h:340
void CIndexData<unsigned int>::~CIndexData()
{
} /* size: 0 */

// <06455DE7> ../public/rendersystem/indexdata.h:340
inline void CIndexData<unsigned int>::~CIndexData()
{
} /* size: 0 */

// <03C189BD> ../public/rendersystem/indexdata.h:340
void CIndexData<short unsigned int>::~CIndexData()
{
} /* size: 0 */

// <03C189A4> ../public/rendersystem/indexdata.h:340
inline void CIndexData<short unsigned int>::~CIndexData()
{
} /* size: 0 */

// <03C17B53> ../public/rendersystem/indexdata.h:347
// variables: 3
inline void CIndexData<short unsigned int>::Init(short unsigned int* pIB, int nBufferIndexCount)
{
	const char   __FUNCTION__; // 59268
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 350
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 357
	}
} /* size: 0, variables: 1 */

// <033AC996> ../public/rendersystem/indexdata.h:363
// variables: 3
inline void CIndexData<short unsigned int>::Init(IRenderContext* pRenderContext, IndexBufferHandle_t hIndexBuffer)
{
	const char   __FUNCTION__; // 53921
	BufferDesc_t desc; // 371
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 365
	}
} /* size: 0, variables: 2 */

// <009EF2BF> ../public/rendersystem/indexdata.h:363
// variables: 3
inline void CIndexData<unsigned int>::Init(IRenderContext* pRenderContext, IndexBufferHandle_t hIndexBuffer)
{
	const char   __FUNCTION__; // 57407
	BufferDesc_t desc; // 371
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 365
	}
} /* size: 0, variables: 2 */

// <0645233C> ../public/rendersystem/indexdata.h:380
// variable: 1
inline void CIndexData<unsigned int>::Init(IRenderContext* pRenderContext, RenderBufferType_t nType, int nIndexCount, const char* pDebugName, const char* pBudgetGroup)
{
	BufferDesc_t indexDesc; // 386
} /* size: 0, variables: 1 */

// <064714E6> ../public/rendersystem/indexdata.h:402
// function call: 1
void CIndexData<unsigned int>::Release()
{
	CIndexData<unsigned int>::Release(); // 402
} /* size: 81, inline expansions: 1 (41 bytes) */

// <064522E1> ../public/rendersystem/indexdata.h:402
void CIndexData<unsigned int>::Release()
{
} /* size: 0 */

// <03C46B66> ../public/rendersystem/indexdata.h:402
// function call: 1
void CIndexData<short unsigned int>::Release()
{
	CIndexData<short unsigned int>::Release(); // 402
} /* size: 81, inline expansions: 1 (41 bytes) */

// <03C17D53> ../public/rendersystem/indexdata.h:402
void CIndexData<short unsigned int>::Release()
{
} /* size: 0 */

// <06455D65> ../public/rendersystem/indexdata.h:417
inline void CIndexData<unsigned int>::TakeOwnership()
{
} /* size: 0 */

// <03C189D4> ../public/rendersystem/indexdata.h:428
inline void CIndexData<short unsigned int>::ReleaseBuffer()
{
} /* size: 0 */

// <064522FA> ../public/rendersystem/indexdata.h:438
// variables: 2
inline void CIndexData<unsigned int>::Lock(int nMaxIndexCount)
{
	{
		LockDesc_t desc; // 459
		bool bOk; // 460
	}
} /* size: 0 */

// <03C1AB33> ../public/rendersystem/indexdata.h:438
// variables: 5
inline void CIndexData<short unsigned int>::Lock(int nMaxIndexCount)
{
	const char   __FUNCTION__; // 59268
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 447
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 448
	}
	{
		LockDesc_t desc; // 459
		bool bOk; // 460
	}
} /* size: 0, variables: 1 */

// <033AF7D6> ../public/rendersystem/indexdata.h:438
// variables: 5
inline void CIndexData<short unsigned int>::Lock(int nMaxIndexCount)
{
	const char   __FUNCTION__; // 53921
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 447
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 448
	}
	{
		LockDesc_t desc; // 459
		bool bOk; // 460
	}
} /* size: 0, variables: 1 */

// <009F309D> ../public/rendersystem/indexdata.h:438
// variables: 5
inline void CIndexData<unsigned int>::Lock(int nMaxIndexCount)
{
	const char   __FUNCTION__; // 57407
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 447
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 448
	}
	{
		LockDesc_t desc; // 459
		bool bOk; // 460
	}
} /* size: 0, variables: 1 */

// <06455D97> ../public/rendersystem/indexdata.h:480
// variable: 1
inline void CIndexData<unsigned int>::Unlock()
{
	{
		LockDesc_t desc; // 492
	}
} /* size: 0 */

// <03C195CB> ../public/rendersystem/indexdata.h:480
// variables: 3
inline void CIndexData<short unsigned int>::Unlock()
{
	const char   __FUNCTION__; // 59322
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 484
	}
	{
		LockDesc_t desc; // 492
	}
} /* size: 0, variables: 1 */

// <033AF732> ../public/rendersystem/indexdata.h:480
// variables: 3
inline void CIndexData<short unsigned int>::Unlock()
{
	const char   __FUNCTION__; // 53975
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 484
	}
	{
		LockDesc_t desc; // 492
	}
} /* size: 0, variables: 1 */

// <009F2FAF> ../public/rendersystem/indexdata.h:480
// variables: 3
inline void CIndexData<unsigned int>::Unlock()
{
	const char   __FUNCTION__; // 57461
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 484
	}
	{
		LockDesc_t desc; // 492
	}
} /* size: 0, variables: 1 */

// <02DFBBAE> ../public/rendersystem/indexdata.h:521
// member functions: 16
// member variables: 7
// class size: 64
class CDynamicIndexData<short unsigned int> : public CIndexDataBase<short unsigned int> {
public:
	/* class CIndexDataBase<short unsigned int> <ancestor>; */ /* 0 32 */
	/* ../public/rendersystem/indexdata.h:572 */
	void CDynamicIndexData(CDynamicIndexData<short unsigned int>* , IRenderContext* , int, const char* , const char* );
	/* ../public/rendersystem/indexdata.h:584 */
	void CDynamicIndexData(CDynamicIndexData<short unsigned int>* , IRenderContext* );
	/* ../public/rendersystem/indexdata.h:605 */
	void ~CDynamicIndexData(CDynamicIndexData<short unsigned int>* );
	/* ../public/rendersystem/indexdata.h:595 */
	void Init(CDynamicIndexData<short unsigned int>* , int, const char* , const char* );
	/* ../public/rendersystem/indexdata.h:658 */
	void Unlock(CDynamicIndexData<short unsigned int>* );
	/* ../public/rendersystem/indexdata.h:688 */
	void Bind(CDynamicIndexData<short unsigned int>* , int);
	/* ../public/rendersystem/indexdata.h:538 */
	void UnlockAndBind(CDynamicIndexData<short unsigned int>* , int);
private:
	/* ../public/rendersystem/indexdata.h:615 */
	void Lock(CDynamicIndexData<short unsigned int>* , int);
	DynamicIndexBufferHandle_t m_hIndexBuffer; /* 32 8 */
	const char * m_pDebugName; /* 40 8 */
	const char * m_pBudgetGroupName; /* 48 8 */
	int m_nStartOffsetInBytes; /* 56 4 */
	bool m_bOkToLock; /* 60 1 */
	bool m_bLocked; /* 61 1 */
	void CDynamicIndexData(class CDynamicIndexData<short unsigned int> *, class IRenderContext *, int, const char  *, const char  *); /* linkage=_ZN17CDynamicIndexDataItEC4EP14IRenderContextiPKcS4_ */
	void CDynamicIndexData(class CDynamicIndexData<short unsigned int> *, class IRenderContext *); /* linkage=_ZN17CDynamicIndexDataItEC4EP14IRenderContext */
	void ~CDynamicIndexData(class CDynamicIndexData<short unsigned int> *); /* linkage=_ZN17CDynamicIndexDataItED4Ev */
	void Init(class CDynamicIndexData<short unsigned int> *, int, const char  *, const char  *); /* linkage=_ZN17CDynamicIndexDataItE4InitEiPKcS2_ */
	void Unlock(class CDynamicIndexData<short unsigned int> *); /* linkage=_ZN17CDynamicIndexDataItE6UnlockEv */
	void Bind(class CDynamicIndexData<short unsigned int> *, int); /* linkage=_ZN17CDynamicIndexDataItE4BindEi */
	void UnlockAndBind(class CDynamicIndexData<short unsigned int> *, int); /* linkage=_ZN17CDynamicIndexDataItE13UnlockAndBindEi */
	void Lock(class CDynamicIndexData<short unsigned int> *, int); /* linkage=_ZN17CDynamicIndexDataItE4LockEi */
};

// <02EA6674> ../public/rendersystem/indexdata.h:538
inline void CDynamicIndexData<short unsigned int>::UnlockAndBind(int nBindOffset)
{
} /* size: 0 */

// <02EA6717> ../public/rendersystem/indexdata.h:572
void CDynamicIndexData<short unsigned int>::CDynamicIndexData(IRenderContext* pRenderContext, int nIndexCount, const char* pDebugName, const char* pBudgetGroup)
{
} /* size: 0 */

// <02EA66CA> ../public/rendersystem/indexdata.h:572
inline void CDynamicIndexData<short unsigned int>::CDynamicIndexData(IRenderContext* pRenderContext, int nIndexCount, const char* pDebugName, const char* pBudgetGroup)
{
} /* size: 0 */

// <02EA66B3> ../public/rendersystem/indexdata.h:605
void CDynamicIndexData<short unsigned int>::~CDynamicIndexData()
{
} /* size: 0 */

// <02EA669A> ../public/rendersystem/indexdata.h:605
inline void CDynamicIndexData<short unsigned int>::~CDynamicIndexData()
{
} /* size: 0 */

// <02E947C7> ../public/rendersystem/indexdata.h:615
// variables: 5
inline void CDynamicIndexData<short unsigned int>::Lock(int nIndexCount)
{
	const char   __FUNCTION__; // 63277
	BufferDesc_t indexDesc; // 623
	DynamicLockDesc_t desc; // 629
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 619
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 620
	}
} /* size: 0, variables: 3 */

// <0083AFC3> ../public/rendersystem/indexdata.h:615
// variables: 5
inline void CDynamicIndexData<short unsigned int>::Lock(int nIndexCount)
{
	const char   __FUNCTION__; // 22670
	BufferDesc_t indexDesc; // 623
	DynamicLockDesc_t desc; // 629
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 619
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 620
	}
} /* size: 0, variables: 3 */

// <00439ACF> ../public/rendersystem/indexdata.h:615
// variables: 5
inline void CDynamicIndexData<short unsigned int>::Lock(int nIndexCount)
{
	const char   __FUNCTION__; // 57747
	BufferDesc_t indexDesc; // 623
	DynamicLockDesc_t desc; // 629
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 619
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 620
	}
} /* size: 0, variables: 3 */

// <02E947AE> ../public/rendersystem/indexdata.h:658
void CDynamicIndexData<short unsigned int>::Unlock()
{
} /* size: 0 */

// <0087ED03> ../public/rendersystem/indexdata.h:658
// function calls: 12
void CDynamicIndexData<short unsigned int>::Unlock()
{
	WordSwapC<short unsigned int>(short unsigned int w); // 253
	CBigEndianValue<short unsigned int>::GetValue(); // 285
	WordSwapC<short unsigned int>(short unsigned int w); // 268
	CBigEndianValue<short unsigned int>::operator=(
			short unsigned int val);  // 285
	CBigEndianValue<short unsigned int>::operator+=(
			short unsigned int val);  // 289
	CBigEndianValue<short unsigned int>::operator++(
			int);  // 3098
	DWordSwapC<unsigned int>(unsigned int dw); // 257
	CBigEndianValue<unsigned int>::GetValue(); // 285
	DWordSwapC<unsigned int>(unsigned int dw); // 272
	CBigEndianValue<unsigned int>::operator=(
			unsigned int val);  // 285
	CBigEndianValue<unsigned int>::operator+=(
			unsigned int val);  // 3099
	CRenderContextVulkan::UnlockDynamicIndexBuffer(
				DynamicIndexBufferHandle_t hIndexBuffer,
				int nWrittenSizeInBytes);  // 666
} /* size: 164, inline expansions: 12 (154 bytes) */

// <02E94788> ../public/rendersystem/indexdata.h:688
inline void CDynamicIndexData<short unsigned int>::Bind(int nOffset)
{
} /* size: 0 */

