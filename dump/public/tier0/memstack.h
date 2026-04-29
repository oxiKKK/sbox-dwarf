
//
// public/tier0/memstack.h
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//				   libtier0.so
//
//	functions: 9
//	class: 1
//

// <00158904> ../public/tier0/memstack.h:24
// member functions: 42
// member variables: 12
// class size: 96
class CMemoryStack {
	/* ../public/tier0/memstack.h:27 */
	void CMemoryStack(CMemoryStack* );
	/* ../public/tier0/memstack.h:28 */
	void ~CMemoryStack(CMemoryStack* );
	/* ../public/tier0/memstack.h:30 */
	bool Init(CMemoryStack* , const char* , unsigned int, unsigned int, unsigned int, unsigned int);
	/* ../public/tier0/memstack.h:31 */
	void Term(CMemoryStack* );
	/* ../public/tier0/memstack.h:33 */
	int GetSize(const CMemoryStack* );
	/* ../public/tier0/memstack.h:34 */
	int GetMaxSize(const CMemoryStack* );
	/* ../public/tier0/memstack.h:35 */
	int GetUsed(const CMemoryStack* );
	/* ../public/tier0/memstack.h:37 */
	void* Alloc(CMemoryStack* , unsigned int, bool);
	/* ../public/tier0/memstack.h:39 */
	MemoryStackMark_t GetCurrentAllocPoint(const CMemoryStack* );
	/* ../public/tier0/memstack.h:40 */
	void FreeToAllocPoint(CMemoryStack* , MemoryStackMark_t, bool);
	/* ../public/tier0/memstack.h:41 */
	void FreeAll(CMemoryStack* , bool);
	/* ../public/tier0/memstack.h:43 */
	void Access(CMemoryStack* , void** , unsigned int* );
	/* ../public/tier0/memstack.h:45 */
	void PrintContents(const CMemoryStack* );
	/* ../public/tier0/memstack.h:47 */
	void* GetBase(CMemoryStack* );
	/* ../public/tier0/memstack.h:48 */
	const void* GetBase(const CMemoryStack* );
	/* ../public/tier0/memstack.h:50 */
	bool CommitSize(CMemoryStack* , int);
	/* ../public/tier0/memstack.h:52 */
	const char* GetName(const CMemoryStack* );
	/* ../public/tier0/memstack.h:54 */
	bool WillAllocSucceed(const CMemoryStack* , unsigned int);
private:
	/* ../public/tier0/memstack.h:57 */
	bool CommitTo(CMemoryStack* , byte* );
	/* ../public/tier0/memstack.h:59 */
	void RegisterAllocation(CMemoryStack* , uint32);
	/* ../public/tier0/memstack.h:60 */
	void RegisterDeallocation(CMemoryStack* );
	byte * m_pNextAlloc; /* 0 8 */
	byte * m_pCommitLimit; /* 8 8 */
	byte * m_pAllocLimit; /* 16 8 */
	byte * m_pHighestAllocLimit; /* 24 8 */
	byte * m_pBase; /* 32 8 */
	unsigned int m_maxSize; /* 40 4 */
	unsigned int m_alignment; /* 44 4 */
	unsigned int m_commitIncrement; /* 48 4 */
	unsigned int m_minCommit; /* 52 4 */
	uint32 m_nAllocStatsId; /* 56 4 */
	CUtlString m_name; /* 64 8 */
	CThreadFastMutex m_allocMutex; /* 72 24 */
	void CMemoryStack(class CMemoryStack *); /* linkage=_ZN12CMemoryStackC4Ev */
	void ~CMemoryStack(class CMemoryStack *); /* linkage=_ZN12CMemoryStackD4Ev */
	bool Init(class CMemoryStack *, const char  *, unsigned int, unsigned int, unsigned int, unsigned int); /* linkage=_ZN12CMemoryStack4InitEPKcjjjj */
	void Term(class CMemoryStack *); /* linkage=_ZN12CMemoryStack4TermEv */
	int GetSize(const class CMemoryStack  *); /* linkage=_ZNK12CMemoryStack7GetSizeEv */
	int GetMaxSize(const class CMemoryStack  *); /* linkage=_ZNK12CMemoryStack10GetMaxSizeEv */
	int GetUsed(const class CMemoryStack  *); /* linkage=_ZNK12CMemoryStack7GetUsedEv */
	void * Alloc(class CMemoryStack *, unsigned int, bool); /* linkage=_ZN12CMemoryStack5AllocEjb */
	MemoryStackMark_t GetCurrentAllocPoint(const class CMemoryStack  *); /* linkage=_ZNK12CMemoryStack20GetCurrentAllocPointEv */
	void FreeToAllocPoint(class CMemoryStack *, MemoryStackMark_t, bool); /* linkage=_ZN12CMemoryStack16FreeToAllocPointEjb */
	void FreeAll(class CMemoryStack *, bool); /* linkage=_ZN12CMemoryStack7FreeAllEb */
	void Access(class CMemoryStack *, void * *, unsigned int *); /* linkage=_ZN12CMemoryStack6AccessEPPvPj */
	void PrintContents(const class CMemoryStack  *); /* linkage=_ZNK12CMemoryStack13PrintContentsEv */
	void * GetBase(class CMemoryStack *); /* linkage=_ZN12CMemoryStack7GetBaseEv */
	const void  * GetBase(const class CMemoryStack  *); /* linkage=_ZNK12CMemoryStack7GetBaseEv */
	bool CommitSize(class CMemoryStack *, int); /* linkage=_ZN12CMemoryStack10CommitSizeEi */
	const char  * GetName(const class CMemoryStack  *); /* linkage=_ZNK12CMemoryStack7GetNameEv */
	bool WillAllocSucceed(const class CMemoryStack  *, unsigned int); /* linkage=_ZNK12CMemoryStack16WillAllocSucceedEj */
	bool CommitTo(class CMemoryStack *, byte *); /* linkage=_ZN12CMemoryStack8CommitToEPh */
	/* <3658ca> tier0/memstack.cpp:234 */
	void RegisterAllocation(class CMemoryStack *, uint32); /* linkage=_ZN12CMemoryStack18RegisterAllocationEj */
	/* <36591f> tier0/memstack.cpp:269 */
	void RegisterDeallocation(class CMemoryStack *); /* linkage=_ZN12CMemoryStack20RegisterDeallocationEv */
};

// <0016D264> ../public/tier0/memstack.h:27
void CMemoryStack::CMemoryStack()
{
} /* size: 0 */

// <0016D280> ../public/tier0/memstack.h:28
void CMemoryStack::~CMemoryStack()
{
} /* size: 0 */

// <001A6A00> ../public/tier0/memstack.h:85
// variables: 5
inline void* CMemoryStack::Alloc(unsigned int bytes, bool bClear)
{
	const char   __FUNCTION__; // 2361
	byte* pResult; // 95
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
	{
		byte* pNextAlloc; // 99
		{
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_103; // 103
		}
	}
} /* size: 0, variables: 2 */

// <00265C47> ../public/tier0/memstack.h:85
// variables: 5
// function calls: 21
void* CMemoryStack::Alloc(unsigned int bytes, bool bClear)
{
	const char   __FUNCTION__; // 4051
	byte* pResult; // 95
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
	{
		byte* pNextAlloc; // 99
		{
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_103; // 103
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
					int nLineNumber);  // 103
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 112
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 112
		}
		ReadVolatileMemory<unsigned char*>(unsigned char* const* pPtr); // 98
		ThreadInterlockedAssignIf64(volatile int64* pDest,
						int64 value,
						int64 comparand);  // 459
		InterlockedAssignIf<unsigned char*>(unsigned char** p,
							unsigned char* const& value,
							unsigned char* const& comparand);  // 115
	}
	AlignValue<unsigned int>(unsigned int val,
				uintp alignment);  // 93
	Max<unsigned char*>(unsigned char* const& val1,
				unsigned char* const& val2);  // 126
	memset(void* __dest,
		int __ch,
		size_t __len);  // 55
	V_memset(void* dest,
		int fill,
		uint count);  // 124
} /* size: 388, variables: 2, inline expansions: 4 (61 bytes) */

// <001A2470> ../public/tier0/memstack.h:85
// variables: 5
inline void* CMemoryStack::Alloc(unsigned int bytes, bool bClear)
{
	const char   __FUNCTION__; // 31741
	byte* pResult; // 95
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
	{
		byte* pNextAlloc; // 99
		{
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_103; // 103
		}
	}
} /* size: 0, variables: 2 */

// <001A69C0> ../public/tier0/memstack.h:131
// variables: 2
inline void CMemoryStack::WillAllocSucceed(unsigned int bytes)
{
	unsigned int max; // 138
	unsigned int used; // 139
} /* size: 0, variables: 2 */

// <001A69A4> ../public/tier0/memstack.h:162
inline void CMemoryStack::GetMaxSize()
{
} /* size: 0 */

// <001A6988> ../public/tier0/memstack.h:169
inline void CMemoryStack::GetUsed()
{
} /* size: 0 */

// <001A6968> ../public/tier0/memstack.h:176
inline void* CMemoryStack::GetBase()
{
} /* size: 0 */

