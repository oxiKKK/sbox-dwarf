
//
// sbox/rendertools.h
//
//	referenced by: libengine2.so
//
//	functions: 7
//	classes: 2
//

// <012A213C> sbox/rendertools.h:31
void VertexLayout::~VertexLayout()
{
} /* size: 0 */

// <012A2120> sbox/rendertools.h:31
inline void VertexLayout::~VertexLayout()
{
} /* size: 0 */

// <011ED98B> sbox/rendertools.h:31
// member functions: 10
// member variables: 5
// class size: 80
class VertexLayout {
	/* sbox/rendertools.h:35 */
	void VertexLayout(VertexLayout* , const char* , int);
	/* sbox/rendertools.h:47 */
	void Add(VertexLayout* , const char* , int, uint, int);
	/* sbox/rendertools.h:61 */
	void Free(VertexLayout* );
	/* sbox/rendertools.h:80 */
	void Build(VertexLayout* );
	CUtlString m_name; /* 0 8 */
	CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> > m_fields; /* 8 32 */
	int m_Size; /* 40 4 */
	RenderInputLayout_t m_layout; /* 48 8 */
	RenderInputLayout_t m_layout_conc[3]; /* 56 24 */
	void ~VertexLayout(VertexLayout* );
	void VertexLayout(class VertexLayout *, const char  *, int); /* linkage=_ZN12VertexLayoutC4EPKci */
	void Add(class VertexLayout *, const char  *, int, uint, int); /* linkage=_ZN12VertexLayout3AddEPKciji */
	void Free(class VertexLayout *); /* linkage=_ZN12VertexLayout4FreeEv */
	void Build(class VertexLayout *); /* linkage=_ZN12VertexLayout5BuildEv */
	void ~VertexLayout(class VertexLayout *); /* linkage=_ZN12VertexLayoutD4Ev */
};

// <017F7EDF> sbox/rendertools.h:31
// member functions: 9
// member variables: 5
// class size: 80
class VertexLayout {
	/* sbox/rendertools.h:35 */
	void VertexLayout(VertexLayout* , const char* , int);
	/* sbox/rendertools.h:47 */
	void Add(VertexLayout* , const char* , int, uint, int);
	/* sbox/rendertools.h:61 */
	void Free(VertexLayout* );
	/* sbox/rendertools.h:80 */
	void Build(VertexLayout* );
	CUtlString m_name; /* 0 8 */
	CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> > m_fields; /* 8 32 */
	int m_Size; /* 40 4 */
	RenderInputLayout_t m_layout; /* 48 8 */
	RenderInputLayout_t m_layout_conc[3]; /* 56 24 */
	void VertexLayout(class VertexLayout *, const char  *, int); /* linkage=_ZN12VertexLayoutC4EPKci */
	void Add(class VertexLayout *, const char  *, int, uint, int); /* linkage=_ZN12VertexLayout3AddEPKciji */
	void Free(class VertexLayout *); /* linkage=_ZN12VertexLayout4FreeEv */
	void Build(class VertexLayout *); /* linkage=_ZN12VertexLayout5BuildEv */
	void ~VertexLayout(class VertexLayout *); /* linkage=_ZN12VertexLayoutD4Ev */
};

// <013393F0> sbox/rendertools.h:35
// variable: 1
void VertexLayout::VertexLayout(const char* name, int size)
{
	{
		int i; // 41
	}
} /* size: 0 */

// <013393B3> sbox/rendertools.h:35
// variable: 1
inline void VertexLayout::VertexLayout(const char* name, int size)
{
	{
		int i; // 41
	}
} /* size: 0 */

// <01339360> sbox/rendertools.h:47
// variable: 1
inline void VertexLayout::Add(const char* semanticName, int semanticIndex, uint format, int offset)
{
	int i; // 49
} /* size: 0, variables: 1 */

// <01339000> sbox/rendertools.h:61
// variables: 2
// function calls: 10
void VertexLayout::Free()
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_63; // 63
	{
		int i; // 65
	}
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
			int nLineNumber);  // 63
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 78
} /* size: 243, variables: 1, inline expansions: 10 (371 bytes) */

// <01338FDB> sbox/rendertools.h:80
// variable: 1
inline void VertexLayout::Build()
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_84; // 84
} /* size: 0, variables: 1 */

