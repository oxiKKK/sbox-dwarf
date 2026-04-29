
//
// tier0/threadtools.cpp
//
//	referenced by: libtier0.so
//
//	functions: 185
//	classes: 2
//	structs: 6
//	union: 1
//

// <004C4336> tier0/threadtools.cpp:77
union semun {
	int val; /* 0 4 */
	semid_ds * buf; /* 0 8 */
	short unsigned int * array; /* 0 8 */
	seminfo * __buf; /* 0 8 */
};

// <004E36D1> tier0/threadtools.cpp:88
void ReapChildProcesses(int sig)
{
} /* size: 39 */

// <004E33D8> tier0/threadtools.cpp:221
// variables: 3
int Plat_GetThreadIndex(void)
{
	const char   __FUNCTION__; // 29490
	{
		CThreadLocalScope* pThreadLocalScope; // 231
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 238
		}
	}
} /* size: 0, variables: 1 */

// <004C7A8A> tier0/threadtools.cpp:247
// member functions: 5
// member variable: 1
// class size: 56
class CThreadLocalScope_ProtectedAccess : public CThreadLocalScope {
	/* tier0/threadtools.cpp:247 */
	using ::InternalConstruct<void (&)(CThreadLocalScope*, bool)>;
public:
	/* class CThreadLocalScope <ancestor>; */ /* 0 56 */
	/* tier0/threadtools.cpp:251 */
	void CThreadLocalScope_ProtectedAccess(CThreadLocalScope_ProtectedAccess* , ThreadHandle_t);
	/* tier0/threadtools.cpp:253 */
	int& AccessThreadID(CThreadLocalScope_ProtectedAccess* );
	void CThreadLocalScope_ProtectedAccess(class CThreadLocalScope_ProtectedAccess *, ThreadHandle_t); /* linkage=_ZN33CThreadLocalScope_ProtectedAccessC4EP16ThreadHandle_t__ */
	int & AccessThreadID(class CThreadLocalScope_ProtectedAccess *); /* linkage=_ZN33CThreadLocalScope_ProtectedAccess14AccessThreadIDEv */
};

// <004E33BF> tier0/threadtools.cpp:253
inline void CThreadLocalScope_ProtectedAccess::AccessThreadID()
{
} /* size: 0 */

// <004E2C6B> tier0/threadtools.cpp:271
// variables: 11
// function calls: 22
void ThreadScopeChangeEventHandler_ThreadID(CThreadLocalScope* pScope, bool bCreated)
{
	COrderedReferenceScope generated_id_273; // 273
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_274; // 274
	CThreadLocalScope_ProtectedAccess* pScope_ProtectedAccess; // 276
	const char   __FUNCTION__; // 29230
	{
		int nIntIndex; // 280
		{
			int nBitIndex; // 291
			{
				int nThreadID; // 296
			}
		}
	}
	{
		int* _pCrash; // 317
	}
	{
		int nThreadID; // 322
		{
			int nIntIndex; // 325
			int nBitIndex; // 326
		}
	}
	COrderedConstructor_DependencyManagement<CThreadFastMutex>::ToGenericDependencyManagement(); // 988
	COrderedReferenceScope::COrderedReferenceScope<CThreadFastMutex, COrderedResolve_NoResolve, false>(
											COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>& orderedType);  // 273
	{
	}
	COrderedConstructor_DependencyManagement<CThreadFastMutex>::GetRaw(); // 501
	COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>::GetRaw<>(); // 523
	COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>::operator const CThreadFastMutex&<const CThreadFastMutex>(); // 274
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
			int nLineNumber);  // 274
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 317
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 330
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 330
	FromGenericDependencyManagement(COrderedSystem_DependencyManagement* pFrom); // 1187
	StaticRelease(COrderedSystem_DependencyManagement* pThis); // 994
	COrderedReferenceScope::~COrderedReferenceScope(); // 330
} /* size: 0, variables: 4, inline expansions: 22 (823 bytes) */

// <004E2C4A> tier0/threadtools.cpp:332
void ResolveOrderedConstructor_ThreadCreationEventHandler_ThreadID(COrderedConstructor_DependencyManagement<CThreadLocalScope::CScopeCreatedOrDestroyedHandler>& owner)
{
} /* size: 0 */

// <004E2073> tier0/threadtools.cpp:343
void ThreadProcInfo_t::ThreadProcInfo_t()
{
} /* size: 0 */

// <004E2056> tier0/threadtools.cpp:343
inline void ThreadProcInfo_t::ThreadProcInfo_t()
{
} /* size: 0 */

// <004C8F89> tier0/threadtools.cpp:343
// member functions: 3
// member variables: 11
// struct size: 80
struct ThreadProcInfo_t {
	/* tier0/threadtools.cpp:345 */
	void Set(ThreadProcInfo_t* , ThreadFunc_t, void* , bool, const char* , size_t, bool);
	/* tier0/threadtools.cpp:358 */
	void Release(ThreadProcInfo_t* );
	ThreadFunc_t pfnThread; /* 0 8 */
	void * pParam; /* 8 8 */
	CInterlockedInt m_nRefCount __attribute__((__aligned__(4))); /* 16 4 */
	CInterlockedPtr<unsigned char> m_hThreadHandle; /* 24 8 */
	bool m_bCreateSuspended; /* 32 1 */
	const char * m_szName; /* 40 8 */
	size_t m_nStackSize; /* 48 8 */
	CInterlockedPtr<CThreadLocalScope> pLocalScope; /* 56 8 */
	CInterlockedPtr<CFiber> pThreadFiber; /* 64 8 */
	bool m_bFreeParam; /* 72 1 */
	bool m_bFreeOnZeroRefs; /* 73 1 */
	void ThreadProcInfo_t(ThreadProcInfo_t* );
} __attribute__((__aligned__(8)));

// <004E2BE3> tier0/threadtools.cpp:345
inline void ThreadProcInfo_t::Set(ThreadFunc_t _pfnThread, void* _pParam, bool bCreateSuspended, const char* szName, size_t nStackSize, bool bFreeParam)
{
} /* size: 0 */

// <004E2B94> tier0/threadtools.cpp:358
// variables: 3
inline void ThreadProcInfo_t::Release()
{
	const char   __FUNCTION__; // 6869
	int nRefs; // 361
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 360
	}
} /* size: 0, variables: 2 */

// <004E2A89> tier0/threadtools.cpp:504
// variables: 3
// function call: 1
bool ThreadInitOnceCall_ShouldRun(ThreadInitOnce_t* pMarker)
{
	const char   __FUNCTION__; // 27139
	{
		ThreadInitOnce_t nState; // 510
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 524
		}
		ThreadInterlockedCompareExchange(volatile int32* p,
						int32 value,
						int32 comparand);  // 510
	}
} /* size: 0, variables: 1 */

// <004E2A05> tier0/threadtools.cpp:530
// variables: 2
void ThreadInitOnceCall_Finish(ThreadInitOnce_t* pMarker)
{
	const char   __FUNCTION__; // 60918
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 533
	}
} /* size: 0, variables: 1 */

// <004E29C6> tier0/threadtools.cpp:537
// variable: 1
uintp ThreadProcWrapped(ThreadFunc_t pFunc, void* pParam)
{
	uintp nRet; // 539
} /* size: 0, variables: 1 */

// <004E235E> tier0/threadtools.cpp:607
// variables: 10
// function calls: 19
void* ThreadProcConvert(void* pParam)
{
	ThreadProcInfo_t& paramRef; // 609
	CThreadFiber threadFiber; // 629
	CThreadLocalScope* pOwnedThreadLocalsScope; // 630
	ThreadFunc_t pfnThread; // 645
	void* pFuncParam; // 646
	bool bCreateSuspended; // 647
	size_t nStackSize; // 650
	bool bFreeParam; // 652
	void* retVal; // 663
	{
		CFiber* pThreadFiber; // 658
	}
	CInterlockedPtr<unsigned char>::GetRaw(); // 624
	ThreadSetDebugNameS2(const char* pszName); // 640
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 803
	CInterlockedPtr<CThreadLocalScope>::AtomicSet(
			CThreadLocalScope* newValue);  // 648
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 803
	CInterlockedPtr<CFiber>::AtomicSet(
			CFiber* newValue);  // 649
	CInterlockedIntT<int, 4>::GetRaw(); // 360
	{
	}
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 361
	ThreadProcInfo_t::Release(); // 358
	ThreadProcInfo_t::Release(); // 653
	ThreadProcWrapped(ThreadFunc_t pFunc,
				void* pParam);  // 666
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 146
	CFiber::Release(); // 365
	CThreadFiber::~CThreadFiber(); // 683
	CInterlockedPtr<unsigned char>::GetRaw(); // 634
} /* size: 0, variables: 9, inline expansions: 19 (237 bytes) */

// <004E234E> tier0/threadtools.cpp:686
void OnThreadAttached(void)
{
} /* size: 0 */

// <004E2149> tier0/threadtools.cpp:719
// variables: 7
// function call: 1
ThreadHandle_t* CreateTestThreads(ThreadFunc_t fnThread, int numThreads, int nProcessorsToDistribute)
{
	ThreadHandle_t* pHandles; // 721
	{
		int i; // 723
		{
			ThreadHandle_t hThread; // 726
			const unsigned int  nDefaultStackSize; // 727
			{
				int nDistIndex; // 738
				uint16 nProcGroup; // 739
				uint64 mask; // 740
			}
			CreateSimpleThread(ThreadFunc_t pfnThread,
						void* pParam,
						unsigned int stackSize,
						const char* szName,
						size_t nDuplicateParamSize);  // 728
		}
	}
} /* size: 0, variables: 1 */

// <004E208A> tier0/threadtools.cpp:762
// variables: 2
void JoinTestThreads(ThreadHandle_t* pHandles)
{
	int nCount; // 764
	{
		int i; // 770
	}
} /* size: 0, variables: 1 */

// <004C90E0> tier0/threadtools.cpp:892
// member variables: 4
// struct size: 32
struct CaptureSpecialThreadContext_t {
	ThreadFunc_t pFN_Callback; /* 0 8 */
	void * pCallbackContext; /* 8 8 */
	CThreadSwapTarget * pSwapTarget; /* 16 8 */
	uintp * pResult; /* 24 8 */
};

// <004E1639> tier0/threadtools.cpp:900
// variable: 1
uintp _CaptureSpecialThread_NewThread(void* pContext)
{
	CaptureSpecialThreadContext_t* pCaptureContext; // 902
} /* size: 0, variables: 1 */

// <004E14DA> tier0/threadtools.cpp:908
// variables: 4
uintp Plat_HookSpecialThread(SpecialThreadID_t specialThreadID, ThreadFunc_t pFN_Callback, void* pParam, size_t nReplacementThreadStackSize, const char* szReplacementThreadName, size_t nDuplicateParamSize)
{
	CThreadSwapTarget* pTarget; // 910
	uintp nResult; // 928
	CaptureSpecialThreadContext_t captureContext; // 929
	ThreadHandle_t hReplacementThread; // 930
} /* size: 19, variables: 4 */

// <004E1418> tier0/threadtools.cpp:1003
// variable: 1
void ThreadNanoSleep(unsigned int ns)
{
	timespec tm; // 1009
} /* size: 74, variables: 1 */

// <004E1347> tier0/threadtools.cpp:1018
// variable: 1
// function calls: 3
void ThreadSpin(unsigned int nCycles)
{
	const uint64_t  end; // 1022
	PLAT_CPU_TIME(void); // 1022
	ThreadPause(void); // 1025
	PLAT_CPU_TIME(void); // 1023
} /* size: 41, variables: 1, inline expansions: 3 (20 bytes) */

// <004E12DD> tier0/threadtools.cpp:1050
ThreadHandle_t ThreadGetCurrentHandle(void)
{
} /* size: 9 */

// <004E12AB> tier0/threadtools.cpp:1063
// variable: 1
bool ThreadIsThreadIdRunning(ThreadId_t uThreadId)
{
	int iResult; // 1082
} /* size: 0, variables: 1 */

// <004E1231> tier0/threadtools.cpp:1135
// variable: 1
bool ThreadSetPriority(ThreadPriorityEnum_t priority)
{
	SDL_ThreadPriority sdlPriority; // 1142
} /* size: 51, variables: 1 */

// <004C9135> tier0/threadtools.cpp:1264
// member variables: 2
// struct size: 16
struct ThreadAffinityPrefSlotInfo_t {
	uint16 m_nGroup; /* 0 2 */
	uint64 m_nMask; /* 8 8 */
};

// <004C9191> tier0/threadtools.cpp:1276
// member variables: 2
// struct size: 8
struct ThreadAffinityPrefSlots_t {
	int m_nSlotCount; /* 0 4 */
	int m_nSlotCur; /* 4 4 */
};

// <004E48C1> tier0/threadtools.cpp:1293
// variables: 4
// function call: 1
void CollectProcessorRangeMasks(ThreadAffinityPreference_t pref, const CPULogicalProcessor_t* pLogicalProcs, uint16* pSortedProcs, uint16 nScanStart, uint16 nScanEnd, const char* pDesc)
{
	uint16 nScanProc; // 1305
	uint16 nWriteSlot; // 1306
	{
		uint16 nGroup; // 1309
		uint64 nMask; // 1310
		CPULogicalProcessor_t::IsSameCore(
				const CPULogicalProcessor_t& other);  // 1326
		{
		}
	}
} /* size: 0, variables: 2 */

// <004E0F88> tier0/threadtools.cpp:1293
// variables: 6
void CollectProcessorRangeMasks(const char* pDesc, ThreadAffinityPreference_t pref, const CPULogicalProcessor_t* pLogicalProcs, uint16* pSortedProcs, uint16 nScanStart, uint16 nScanEnd)
{
	uint16 nScanProc; // 1305
	uint16 nWriteSlot; // 1306
	const char   __FUNCTION__; // 20164
	{
		uint16 nGroup; // 1309
		uint64 nMask; // 1310
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1332
		}
	}
} /* size: 0, variables: 3 */

// <004E0E1E> tier0/threadtools.cpp:1355
// variables: 8
void SetNoAffinityPrefs(const CPULogicalProcessor_t* pLogicalProcs, uint16* pSortedProcs, uint16 nSortedProcs)
{
	const CPUInformation& cpuInfo; // 1357
	ThreadAffinityPreference_t pref; // 1366
	const char   __FUNCTION__; // 34614
	{
		uint16 nSlotMax; // 1383
		uint16 nSmtSize; // 1389
		uint64 nSmtMask; // 1391
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1390
		}
		{
			uint16 j; // 1395
		}
	}
} /* size: 0, variables: 3 */

// <004E0D4F> tier0/threadtools.cpp:1413
// variables: 5
int PerfSortLogical(void* pV0, const void* pV1, const void* pV2)
{
	const CPULogicalProcessor_t* pProcs; // 1415
	const uint16  nI1; // 1416
	const uint16  nI2; // 1417
	const CPULogicalProcessor_t* pProc1; // 1418
	const CPULogicalProcessor_t* pProc2; // 1419
} /* size: 161, variables: 5 */

// <004E0B4E> tier0/threadtools.cpp:1481
// variables: 7
// function calls: 2
uint16 GetPerfSortedLogicalProcessors(uint16* pSortIndices, uint16 nSortIndices)
{
	const CPUInformation& cpuInfo; // 1483
	const CPULogicalProcessor_t* pLogicalProcs; // 1484
	uint16 sortedProcs; // 1497
	uint16 nLogicalMax; // 1499
	const char   __FUNCTION__; // 18877
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1500
	}
	{
		uint16 i; // 1506
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 1518
} /* size: 0, variables: 5, inline expansions: 2 (22 bytes) */

// <004E086A> tier0/threadtools.cpp:1522
// variables: 12
// function calls: 2
void ComputeAffinityPreferenceSlots(void)
{
	const CPUInformation& cpuInfo; // 1524
	const CPULogicalProcessor_t* pLogicalProcs; // 1525
	bool bDisablePreferences; // 1526
	uint16 sortedProcs; // 1570
	uint16 nSortMax; // 1571
	int nSpeeds; // 1591
	uint16 nPrefChange; // 1592
	uint16 nCores; // 1593
	const char   __FUNCTION__; // 18877
	{
		uint16 i; // 1594
		{
			bool bDifferentCores; // 1596
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1607
			}
			CPULogicalProcessor_t::IsSameCore(
					const CPULogicalProcessor_t& other);  // 1625
			CPULogicalProcessor_t::IsSameCore(
					const CPULogicalProcessor_t& other);  // 1597
		}
	}
} /* size: 0, variables: 9 */

// <004E0373> tier0/threadtools.cpp:1774
ThreadId_t InitMainThread(void)
{
} /* size: 0 */

// <004C91FE> tier0/threadtools.cpp:1783
// member function: 1
// member variable: 1
// struct size: 8
class CConstructedMainThreadID {
	/* tier0/threadtools.cpp:1786 */
	void CConstructedMainThreadID(CConstructedMainThreadID* );
	ThreadId_t m_nCurrentThread; /* 0 8 */
};

// <004E035C> tier0/threadtools.cpp:1786
void CConstructedMainThreadID::CConstructedMainThreadID()
{
} /* size: 0 */

// <004E0343> tier0/threadtools.cpp:1786
inline void CConstructedMainThreadID::CConstructedMainThreadID()
{
} /* size: 0 */

// <004E0197> tier0/threadtools.cpp:1805
// function calls: 3
void DeclareCurrentThreadIsMainThread(void)
{
	{
	}
	COrderedConstructor_DependencyManagement<CConstructedMainThreadID>::GetRaw(); // 501
	COrderedConstructor_Create<CConstructedMainThreadID, COrderedResolve_NoResolve, false>::GetRaw<>(); // 527
	COrderedConstructor_Create<CConstructedMainThreadID, COrderedResolve_NoResolve, false>::operator->(); // 1807
} /* size: 0, inline expansions: 3 (195 bytes) */

// <004DFB8A> tier0/threadtools.cpp:1874
// variables: 5
// function calls: 12
void ThreadSetDebugNameS2(ThreadHandle_t hThread, const char* pszName)
{
	bool bThreadIsCurThread; // 1879
	CThreadFastMutex& threadLocalScopeMutex; // 1890
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_1891; // 1891
	CThreadLocalScope_ProtectedAccess* pScope; // 1893
	{
		char szTruncatedThreadName; // 1952
		V_strncpy<long unsigned int>(char* pDest,
						const char* pSrc,
						long unsigned int maxLenInChars);  // 1953
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
			int nLineNumber);  // 1891
	V_strncpy<long unsigned int>(char* pDest,
					const char* pSrc,
					long unsigned int maxLenInChars);  // 1914
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 1991
} /* size: 482, variables: 4, inline expansions: 11 (376 bytes) */

// <004DF7F4> tier0/threadtools.cpp:1993
// variables: 4
// function calls: 11
void ThreadTools_ReportThreadNames(void)
{
	bool bIsInDebugSession; // 1995
	CThreadFastMutex& threadLocalScopeMutex; // 1996
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_1997; // 1997
	{
		CThreadLocalScope_ProtectedAccess* pIter; // 1998
	}
	Plat_IsInDebugSession(void); // 1995
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
			int nLineNumber);  // 1997
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2010
} /* size: 0, variables: 3, inline expansions: 11 (0 bytes) */

// <004DF369> tier0/threadtools.cpp:2013
// variables: 3
// function calls: 12
bool ThreadGetDebugNameForThreadHandle(ThreadHandle_t hThread, char* pszNameOut, size_t nNameOutSize)
{
	CThreadFastMutex& threadLocalScopeMutex; // 2018
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2019; // 2019
	CThreadLocalScope_ProtectedAccess* pScope; // 2021
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
			int nLineNumber);  // 2019
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2033
	Min<long unsigned int>(const long unsigned int& val1,
				const long unsigned int& val2);  // 2024
	V_strncpy<long unsigned int>(char* pDest,
					const char* pSrc,
					long unsigned int maxLenInChars);  // 2024
} /* size: 214, variables: 3, inline expansions: 12 (337 bytes) */

// <004DEF1D> tier0/threadtools.cpp:2036
// variables: 3
// function calls: 12
bool ThreadGetDebugNameForThreadId(ThreadId_t nThreadId, char* pszNameOut, size_t nNameOutSize)
{
	CThreadFastMutex& threadLocalScopeMutex; // 2041
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2042; // 2042
	CThreadLocalScope_ProtectedAccess* pScope; // 2044
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
			int nLineNumber);  // 2042
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2056
	Min<long unsigned int>(const long unsigned int& val1,
				const long unsigned int& val2);  // 2047
	V_strncpy<long unsigned int>(char* pDest,
					const char* pSrc,
					long unsigned int maxLenInChars);  // 2047
} /* size: 214, variables: 3, inline expansions: 12 (337 bytes) */

// <004DEEE9> tier0/threadtools.cpp:2063
void SetThreadedLoadLibraryFunc(ThreadedLoadLibraryFunc_t func)
{
} /* size: 12 */

// <004DEEC6> tier0/threadtools.cpp:2068
ThreadedLoadLibraryFunc_t GetThreadedLoadLibraryFunc(void)
{
} /* size: 12 */

// <004DECAC> tier0/threadtools.cpp:2080
// variables: 6
int CreateSimpleProcess(const char* pCommandLine, uint nFlags, ProcessHandle_t* pHandle)
{
	pid_t pid; // 2115
	{
		sigset_t sigset; // 2123
		int nRet; // 2155
		{
			rlimit fd_lim; // 2130
			long int fd_max; // 2131
			{
				int i; // 2140
			}
		}
	}
} /* size: 309, variables: 1 */

// <004DEC51> tier0/threadtools.cpp:2173
bool ThreadCloseProcess(ProcessHandle_t hProcess)
{
} /* size: 39 */

// <004DEC1C> tier0/threadtools.cpp:2184
uint ThreadGetCurrentProcessId(void)
{
} /* size: 9 */

// <004DEBE7> tier0/threadtools.cpp:2193
ProcessHandle_t ThreadGetCurrentProcessHandle(void)
{
} /* size: 9 */

// <004DEB26> tier0/threadtools.cpp:2213
// variables: 2
bool PosixIsActive(ProcessHandle_t hProcess, bool bWait, int32* pExitCode)
{
	int nRet; // 2222
	int nRawCode; // 2223
} /* size: 0, variables: 2 */

// <004DEAB8> tier0/threadtools.cpp:2246
// variable: 1
bool ThreadIsProcessIdActive(uint dwProcessId)
{
	int ret; // 2264
} /* size: 61, variables: 1 */

// <004DE714> tier0/threadtools.cpp:2339
// variable: 1
ThreadProcessPriority_t ThreadGetProcessPriority(ProcessHandle_t hProcess)
{
	int nPriority; // 2360
} /* size: 119, variables: 1 */

// <004DE5E0> tier0/threadtools.cpp:2435
void CThreadSyncObject::CThreadSyncObject()
{
} /* size: 51 */

// <004DE515> tier0/threadtools.cpp:2453
// function call: 1
void CThreadSyncObject::~CThreadSyncObject()
{
	CThreadSyncObject::~CThreadSyncObject(); // 2453
} /* size: 131, inline expansions: 1 (78 bytes) */

// <004DE4FC> tier0/threadtools.cpp:2453
void CThreadSyncObject::~CThreadSyncObject()
{
} /* size: 0 */

// <004DE4CE> tier0/threadtools.cpp:2483
void CThreadSyncObject::operator!()
{
} /* size: 12 */

// <004E4B50> tier0/threadtools.cpp:2494
// function call: 1
void CThreadSyncObject::AssertUseable()
{
	{
	}
	CThreadSyncObject::AssertUseable(); // 2494
} /* size: 0, inline expansions: 1 (26 bytes) */

// <004DE47C> tier0/threadtools.cpp:2494
// variables: 2
void CThreadSyncObject::AssertUseable()
{
	const char   __FUNCTION__; // 9021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2500
	}
} /* size: 0, variables: 1 */

// <004E4BCB> tier0/threadtools.cpp:2508
// function call: 1
void CThreadSyncObject::Wait(uint32 dwTimeout)
{
	CThreadSyncObject::Wait(
		uint32 dwTimeout);  // 2508
} /* size: 57, inline expansions: 1 (8 bytes) */

// <004DE456> tier0/threadtools.cpp:2508
void CThreadSyncObject::Wait(uint32 dwTimeout)
{
} /* size: 0 */

// <004DE2FF> tier0/threadtools.cpp:2535
// variables: 5
void CThreadSyncObject::WaitImpl(uint32 dwTimeoutMsec)
{
	bool bRet; // 2537
	int nBroadcastCount; // 2540
	{
		int ret; // 2543
		{
			timeval tv; // 2556
			timespec tm; // 2558
		}
	}
} /* size: 409, variables: 2 */

// <004DE2C1> tier0/threadtools.cpp:2590
void CThreadSyncObject::SaveNameToFile(const char* pszName)
{
} /* size: 10 */

// <004DE05C> tier0/threadtools.cpp:2617
// variables: 6
void CThreadSyncObject::CreateAnonymousSyncObjectInternal(int32 nInitialValue, bool bManualReset)
{
	int iErr; // 2619
	pthread_mutexattr_t Attr; // 2623
	const char   __FUNCTION__; // 8496
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2627
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2637
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2645
	}
} /* size: 307, variables: 3 */

// <004DDFB4> tier0/threadtools.cpp:2658
// variable: 1
void CThreadSyncObject::SignalThreadSyncObjectInternal()
{
	int ret; // 2660
} /* size: 93, variables: 1 */

// <004DDF53> tier0/threadtools.cpp:2680
void CThreadSyncObject::ResetThreadSyncObjectInternal()
{
} /* size: 52 */

// <004DDE10> tier0/threadtools.cpp:2688
// variables: 4
void CThreadSyncObject::IsSemaphoreOrphanedInternal(sem_type sem, int nIgnorePid)
{
	int nWaiters; // 2702
	pid_t lastpid; // 2710
	bool bLastUserAlive; // 2717
	{
		int ret; // 2720
	}
} /* size: 143, variables: 3 */

// <004DD8B2> tier0/threadtools.cpp:2728
// variables: 16
void CThreadSyncObject::CreateSemaphoreInternal(const char* pszName, int32 cInitialCount, bool bCrossUser, bool* bCreated)
{
	sem_type sem; // 2733
	key_t semkey; // 2755
	const char* userName; // 2756
	int semflags; // 2768
	const char   __FUNCTION__; // 56076
	{
		int nHits; // 2783
		{
			uint i; // 2784
		}
	}
	{
		union semun sun; // 2837
		semid_ds idbuf; // 2838
		bool bReady; // 2840
		const int  k_cMaxRetries; // 2841
		{
			int i; // 2850
		}
	}
	{
		const char* pchErr; // 2876
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2877
		}
	}
	{
		union semun sun; // 2887
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2888
		}
	}
} /* size: 0, variables: 5 */

// <004DD72B> tier0/threadtools.cpp:2901
// variables: 3
void CThreadSyncObject::OpenSemaphoreInternal(const char* pszName, bool bCrossUser)
{
	key_t semkey; // 2906
	const char* userName; // 2907
	sem_type sem; // 2919
} /* size: 190, variables: 3 */

// <004DD51D> tier0/threadtools.cpp:2929
// variables: 7
// function call: 1
void CThreadSyncObject::AcquireSemaphoreInternal(uint32 nMsTimeout)
{
	bool bRet; // 2931
	{
		int ret; // 2934
		{
			sembuf sb; // 2940
		}
	}
	{
		int nMicrosecondsLeft; // 2969
		{
			sembuf sb; // 2975
			int ret; // 2979
			int sleeptime; // 3000
			Min<int>(const int& val1,
				const int& val2);  // 3000
		}
	}
} /* size: 326, variables: 1 */

// <004DD47E> tier0/threadtools.cpp:3009
// variable: 1
void CThreadSyncObject::ReleaseSemaphoreInternal(sem_type sem, int32 nReleaseCount)
{
	sembuf sb; // 3021
} /* size: 94, variables: 1 */

// <004E4D05> tier0/threadtools.cpp:3030
// function call: 1
void CThreadSyncObject::CloseSemaphoreInternal(sem_type sem, bool bSemOwner, const char* pszSemName)
{
	CThreadSyncObject::CloseSemaphoreInternal(
				sem_type sem,
				bool bSemOwner,
				const char* pszSemName);  // 3030
} /* size: 82, inline expansions: 1 (13 bytes) */

// <004DD43E> tier0/threadtools.cpp:3030
void CThreadSyncObject::CloseSemaphoreInternal(sem_type sem, bool bSemOwner, const char* pszSemName)
{
} /* size: 0 */

// <004DD37D> tier0/threadtools.cpp:3053
// variables: 2
void CThreadSyncObject::EnsureSemaphoreClearedInternal(sem_type sem)
{
	{
		sembuf sb; // 3060
		int ret; // 3064
	}
} /* size: 148 */

// <004DD2A9> tier0/threadtools.cpp:3075
// variables: 2
void CThreadSyncObject::EnsureSemaphorePostedInternal(sem_type sem)
{
	int ret; // 3077
	{
		sembuf sb; // 3083
	}
} /* size: 188, variables: 1 */

// <004DD0A9> tier0/threadtools.cpp:3130
// variables: 4
// function call: 1
void WaitForMultiple(int nObjects, CThreadSyncObject** ppObjects, bool bWaitAll, uint32 dwTimeout)
{
	uint32 dwStartTime; // 3145
	char* pWasTriggered; // 3151
	int nTriggered; // 3152
	{
		int i; // 3161
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 3156
} /* size: 557, variables: 3, inline expansions: 1 (19 bytes) */

// <004DCFC8> tier0/threadtools.cpp:3196
// variables: 2
void WaitForMultiple(int nObjects, CThreadSyncObject* pObjects, bool bWaitAll, uint32 dwTimeout)
{
	CThreadSyncObject** ppObjects; // 3215
	{
		int i; // 3216
	}
} /* size: 213, variables: 1 */

// <004DCF27> tier0/threadtools.cpp:3227
void WaitForMultiple(int nObjects, CThreadEvent* pObjects, bool bWaitAll, uint32 dwTimeout)
{
} /* size: 12 */

// <004DCE86> tier0/threadtools.cpp:3235
void WaitForMultiple(int nObjects, CThreadEvent** ppObjects, bool bWaitAll, uint32 dwTimeout)
{
} /* size: 12 */

// <004DCE07> tier0/threadtools.cpp:3248
void CThreadEvent::CThreadEvent(bool bManualReset)
{
} /* size: 57 */

// <004DC904> tier0/threadtools.cpp:3261
// variables: 10
// function calls: 3
void CThreadEvent::CThreadEvent(const char* name, bool initialState, bool bManualReset)
{
	{
		{
			bool bCrossUserSession; // 3267
			size_t len; // 3270
			size_t maxlen; // 3271
			char rgchSemNameT; // 3287
			sem_type tsem; // 3289
			{
			}
			{
			}
			{
			}
		}
	}
	{
		{
			bool bCrossUserSession; // 3267
			size_t len; // 3270
			size_t maxlen; // 3271
			char rgchSemNameT; // 3287
			sem_type tsem; // 3289
			{
			}
			snprintf(char* __s,
				size_t __n,
				const char* __fmt, ...);  // 3274
			{
			}
			snprintf(char* __s,
				size_t __n,
				const char* __fmt, ...);  // 3288
			{
			}
			V_strncpy<int>(char* pDest,
					const char* pSrc,
					int maxLenInChars);  // 3300
		}
	}
} /* size: 0 */

// <004DC811> tier0/threadtools.cpp:3261
// variables: 9
void CThreadEvent::CThreadEvent(const char* name, bool initialState, bool bManualReset)
{
	const char   __FUNCTION__; // 6991
	{
		bool bCrossUserSession; // 3267
		size_t len; // 3270
		size_t maxlen; // 3271
		char rgchSemNameT; // 3287
		sem_type tsem; // 3289
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3272
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3280
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3294
		}
	}
} /* size: 0, variables: 1 */

// <004DC79A> tier0/threadtools.cpp:3352
void CThreadEvent::Set()
{
} /* size: 54 */

// <004DC723> tier0/threadtools.cpp:3408
void CThreadEvent::Reset()
{
} /* size: 54 */

// <004DC6BA> tier0/threadtools.cpp:3429
void CThreadEvent::Check()
{
} /* size: 33 */

// <004DC4D3> tier0/threadtools.cpp:3446
// variables: 2
// function call: 1
void CThreadSemaphore::CThreadSemaphore(int32 initialValue, int32 maxValue, const char* pszName, bool bAllAccess)
{
	{
		{
			size_t uNameLen; // 3478
			{
			}
		}
	}
	{
		{
			size_t uNameLen; // 3478
			{
			}
			V_strncpy<int>(char* pDest,
					const char* pSrc,
					int maxLenInChars);  // 3481
		}
	}
} /* size: 0 */

// <004DC453> tier0/threadtools.cpp:3446
// variables: 3
void CThreadSemaphore::CThreadSemaphore(int32 initialValue, int32 maxValue, const char* pszName, bool bAllAccess)
{
	const char   __FUNCTION__; // 64371
	{
		size_t uNameLen; // 3478
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3479
		}
	}
} /* size: 0, variables: 1 */

// <004DC40A> tier0/threadtools.cpp:3500
void CThreadSemaphore::~CThreadSemaphore()
{
} /* size: 23 */

// <004DC14D> tier0/threadtools.cpp:3512
// variables: 9
void CThreadSemaphore::WaitImpl(uint32 dwTimeout)
{
	const char   __FUNCTION__; // 45701
	int rc; // 3524
	timeval tv; // 3531
	timespec tm; // 3533
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3522
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3527
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3555
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3562
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3570
	}
} /* size: 0, variables: 4 */

// <004E4DEE> tier0/threadtools.cpp:3583
// variables: 2
// function call: 1
void CThreadSemaphore::Release(int32 releaseCount, int32* pPreviousCount)
{
	{
	}
	{
		int rc; // 3594
		{
		}
		{
		}
		{
			int i; // 3611
			{
			}
		}
	}
	CThreadSemaphore::Release(
		int32 releaseCount,
		int32* pPreviousCount);  // 3583
} /* size: 0, inline expansions: 1 (181 bytes) */

// <004DC069> tier0/threadtools.cpp:3583
// variables: 7
void CThreadSemaphore::Release(int32 releaseCount, int32* pPreviousCount)
{
	const char   __FUNCTION__; // 6869
	{
		int rc; // 3594
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3597
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3607
		}
		{
			int i; // 3611
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3615
			}
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3627
	}
} /* size: 0, variables: 1 */

// <004DBD04> tier0/threadtools.cpp:3641
// variables: 4
// function call: 1
void CThreadFullMutex::CThreadFullMutex(bool bEstablishInitialOwnership, const char* pszName, bool bAllAccess, bool bInherit)
{
	{
		{
			bool bValidName; // 3652
			{
			}
			{
			}
			{
			}
			{
				size_t uNameLen; // 3732
				{
				}
			}
		}
	}
	{
		{
			bool bValidName; // 3652
			{
			}
			{
				size_t uNameLen; // 3732
				{
				}
				V_strncpy<int>(char* pDest,
						const char* pSrc,
						int maxLenInChars);  // 3735
			}
			{
			}
			{
			}
		}
	}
} /* size: 0 */

// <004DBC09> tier0/threadtools.cpp:3641
// variables: 7
void CThreadFullMutex::CThreadFullMutex(bool bEstablishInitialOwnership, const char* pszName, bool bAllAccess, bool bInherit)
{
	const char   __FUNCTION__; // 64371
	{
		bool bValidName; // 3652
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3665
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3714
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3718
		}
		{
			size_t uNameLen; // 3732
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3733
			}
		}
	}
} /* size: 0, variables: 1 */

// <004DBBA7> tier0/threadtools.cpp:3776
void CThreadFullMutex::Release()
{
} /* size: 37 */

// <004DBB79> tier0/threadtools.cpp:3799
void CThreadFullMutex::IsCreator()
{
} /* size: 21 */

// <004C9A14> tier0/threadtools.cpp:3829
// member variables: 4
// struct size: 24
struct ThreadMultiWaitObjectSet_t {
	ThreadMultiWaitItem_t * m_pItems; /* 0 8 */
	ThreadMultiWaitExtra_t * m_pExtra; /* 8 8 */
	int m_nItems; /* 16 4 */
	int m_nEpoll; /* 20 4 */
};

// <004DBB24> tier0/threadtools.cpp:3852
// variable: 1
bool InitEventfdInEpoll(int nEpoll, int nIndex, ThreadMultiWaitItem_t* pItem, ThreadMultiWaitExtra_t* pExtra)
{
	epoll_event epollEvent; // 3855
} /* size: 0, variables: 1 */

// <004DBA7F> tier0/threadtools.cpp:3918
// variable: 1
ThreadMultiWaitObjectSet_t* AllocWaitObjectSet(int nObjects)
{
	ThreadMultiWaitObjectSet_t* pSet; // 3924
} /* size: 133, variables: 1 */

// <004DB979> tier0/threadtools.cpp:3931
// variable: 1
// function call: 1
bool FinishWaitObjectSetCreate(ThreadMultiWaitObjectSet_t* pSet)
{
	{
		int i; // 3941
		InitEventfdInEpoll(int nEpoll,
					int nIndex,
					ThreadMultiWaitItem_t* pItem,
					ThreadMultiWaitExtra_t* pExtra);  // 3943
	}
} /* size: 196 */

// <004DB67A> tier0/threadtools.cpp:4011
void ThreadMultiWaitObjectSetDestroy(ThreadMultiWaitObjectSet_t* pSet)
{
} /* size: 73 */

// <004DB265> tier0/threadtools.cpp:4673
void CThreadMultiWaitObject::CThreadMultiWaitObject()
{
} /* size: 13 */

// <004DB207> tier0/threadtools.cpp:4695
void CThreadMultiWaitObject::~CThreadMultiWaitObject()
{
} /* size: 11 */

// <004DB10B> tier0/threadtools.cpp:4714
// variables: 2
// function call: 1
void CThreadMultiWaitObject::Signal()
{
	const char   __FUNCTION__; // 5355
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 4726
	}
	CThreadMultiWaitObject::GetObjectTypeBits(); // 4716
} /* size: 0, variables: 1, inline expansions: 1 (6 bytes) */

// <004DAF87> tier0/threadtools.cpp:4782
// variables: 2
// function calls: 2
void CThreadMultiWaitSemaphore::CThreadMultiWaitSemaphore()
{
	{
		{
			int* _pCrash; // 4796
		}
	}
	{
	}
	{
		int* _pCrash; // 4796
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 4796
	CThreadMultiWaitSemaphore::CThreadMultiWaitSemaphore(); // 4782
} /* size: 183, inline expansions: 2 (127 bytes) */

// <004DAF3B> tier0/threadtools.cpp:4782
// variables: 2
void CThreadMultiWaitSemaphore::CThreadMultiWaitSemaphore()
{
	const char   __FUNCTION__; // 60918
	{
		int* _pCrash; // 4796
	}
} /* size: 0, variables: 1 */

// <004DAEF2> tier0/threadtools.cpp:4815
void CThreadMultiWaitSemaphore::~CThreadMultiWaitSemaphore()
{
} /* size: 9 */

// <004DAE62> tier0/threadtools.cpp:4819
// variable: 1
void CThreadMultiWaitSemaphore::Release()
{
	uint64 nVal; // 4824
} /* size: 73, variables: 1 */

// <004DACCC> tier0/threadtools.cpp:4881
// variables: 2
// function calls: 2
void CThreadMultiWaitEvent::CThreadMultiWaitEvent(bool bManualReset)
{
	{
		{
			int* _pCrash; // 4895
		}
	}
	{
	}
	{
		int* _pCrash; // 4895
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 4895
	CThreadMultiWaitEvent::CThreadMultiWaitEvent(
				bool bManualReset);  // 4881
} /* size: 199, inline expansions: 2 (127 bytes) */

// <004DAC88> tier0/threadtools.cpp:4881
// variables: 2
void CThreadMultiWaitEvent::CThreadMultiWaitEvent(bool bManualReset)
{
	const char   __FUNCTION__; // 41458
	{
		int* _pCrash; // 4895
	}
} /* size: 0, variables: 1 */

// <004DAC3F> tier0/threadtools.cpp:4918
void CThreadMultiWaitEvent::~CThreadMultiWaitEvent()
{
} /* size: 9 */

// <004DABAF> tier0/threadtools.cpp:4922
// variable: 1
void CThreadMultiWaitEvent::Set()
{
	uint64 nVal; // 4932
} /* size: 73, variables: 1 */

// <004DAB1E> tier0/threadtools.cpp:4963
// variable: 1
// function call: 1
void CThreadMultiWaitEvent::Reset()
{
	uint64 nVal; // 4970
	read(int __fd,
		void* __buf,
		size_t __nbytes);  // 4971
} /* size: 63, variables: 1, inline expansions: 1 (29 bytes) */

// <004DAA85> tier0/threadtools.cpp:5102
// variable: 1
void CThreadMutex::TryLock(const char* pFileName, int nLineNumber)
{
	ThreadId_t thisThreadID; // 5104
} /* size: 78, variables: 1 */

// <004E4F97> tier0/threadtools.cpp:5203
// variable: 1
// function calls: 21
void CThreadFastMutex::Lock(const char* pFileName, int nLineNumber, const ThreadId_t threadId, unsigned int nSpinSleepTime)
{
	int i; // 5213
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 812
	CThreadFastMutex::TryLock(
		const char* pFileName,
		int nLineNumber,
		const ThreadId_t  threadId);  // 5229
	ThreadPause(void); // 5234
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 812
	CThreadFastMutex::TryLock(
		const char* pFileName,
		int nLineNumber,
		const ThreadId_t  threadId);  // 5239
	ThreadPause(void); // 5244
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 812
	CThreadFastMutex::TryLock(
		const char* pFileName,
		int nLineNumber,
		const ThreadId_t  threadId);  // 5268
	ThreadPause(void); // 5274
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 812
	CThreadFastMutex::TryLock(
		const char* pFileName,
		int nLineNumber,
		const ThreadId_t  threadId);  // 5285
	ThreadPause(void); // 5291
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		const ThreadId_t  threadId,
		unsigned int nSpinSleepTime);  // 5203
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 812
	CThreadFastMutex::TryLock(
		const char* pFileName,
		int nLineNumber,
		const ThreadId_t  threadId);  // 5299
	ThreadPause(void); // 5305
} /* size: 295, variables: 1, inline expansions: 21 (555 bytes) */

// <004DAA29> tier0/threadtools.cpp:5203
// variable: 1
void CThreadFastMutex::Lock(const char* pFileName, int nLineNumber, const ThreadId_t threadId, unsigned int nSpinSleepTime)
{
	int i; // 5213
} /* size: 0, variables: 1 */

// <004DA918> tier0/threadtools.cpp:5321
// function calls: 2
void CThreadRWLock::WaitForRead()
{
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 5327
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 5329
} /* size: 154, inline expansions: 2 (84 bytes) */

// <004DA7A1> tier0/threadtools.cpp:5336
// variable: 1
// function calls: 2
void CThreadRWLock::TryLockForWrite(const char* pFileName, int nLineNumber)
{
	bool bWait; // 5341
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 5350
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 5344
} /* size: 145, variables: 1, inline expansions: 2 (57 bytes) */

// <004DA604> tier0/threadtools.cpp:5356
// variable: 1
// function calls: 2
void CThreadRWLock::LockForWrite(const char* pFileName, int nLineNumber)
{
	bool bWait; // 5359
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 5358
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 5362
} /* size: 210, variables: 1, inline expansions: 2 (97 bytes) */

// <004DA4B4> tier0/threadtools.cpp:5370
// function calls: 2
void CThreadRWLock::UnlockWrite(const char* pFileName, int nLineNumber)
{
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 5372
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 5385
} /* size: 162, inline expansions: 2 (96 bytes) */

// <004DA309> tier0/threadtools.cpp:5388
// variable: 1
// function calls: 2
void CThreadRWLock::UnlockRead_LockForWrite(const char* pFileName, int nLineNumber)
{
	bool bWaitForWrite; // 5396
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 5390
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 5415
} /* size: 274, variables: 1, inline expansions: 2 (120 bytes) */

// <004DA141> tier0/threadtools.cpp:5428
// function calls: 3
void CThreadRWLock::UnlockWrite_LockForRead(const char* pFileName, int nLineNumber)
{
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 5430
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 5436
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 5444
} /* size: 194, inline expansions: 3 (97 bytes) */

// <004D9F27> tier0/threadtools.cpp:5455
// function calls: 5
void CThreadRWLock_FastRead::CThreadRWLock_FastRead(bool bWriteLocksHaltReadsImmediately)
{
	CInterlockedIntT<unsigned int, 4>::CInterlockedIntT(
			unsigned int value);  // 5456
	CInterlockedIntT<int, 4>::CInterlockedIntT(
			int value);  // 5457
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 5482
	CThreadRWLock_FastRead::CThreadRWLock_FastRead(
				bool bWriteLocksHaltReadsImmediately);  // 5455
} /* size: 223, inline expansions: 5 (50 bytes) */

// <004D9EFD> tier0/threadtools.cpp:5455
void CThreadRWLock_FastRead::CThreadRWLock_FastRead(bool bWriteLocksHaltReadsImmediately)
{
} /* size: 0 */

// <004E5562> tier0/threadtools.cpp:5486
// variables: 3
// function calls: 9
void CThreadRWLock_FastRead::UnlockWrite(const char* pFileName, int nLineNumber)
{
	{
		bool bWriteLocksHaltReadsImmediately; // 5493
		CInterlockedIntT<int, 4>::GetRaw(); // 5493
		{
			uint32 nSwapInterlock; // 5521
			CInterlockedIntT<unsigned int, 4>::operator unsigned int(); // 5521
			ThreadInterlockedAssignIf(volatile int32* p,
							int32 value,
							int32 comparand);  // 597
			CInterlockedIntT<unsigned int, 4>::AssignIf(
				unsigned int conditionValue,
				unsigned int newValue);  // 5524
			ThreadInterlockedExchangeAdd(volatile int32* p,
							int32 value);  // 660
			CInterlockedIntT<unsigned int, 4>::AtomicAdd(
					unsigned int add);  // 5538
		}
		{
			uint32 nPostDecrement; // 5498
			ThreadInterlockedExchangeAdd(volatile int32* p,
							int32 value);  // 660
			CInterlockedIntT<unsigned int, 4>::AtomicAdd(
					unsigned int add);  // 5498
		}
	}
	CThreadRWLock_FastRead::UnlockWrite(
			const char* pFileName,
			int nLineNumber);  // 5486
} /* size: 151, inline expansions: 1 (132 bytes) */

// <004D9E95> tier0/threadtools.cpp:5486
// variables: 3
void CThreadRWLock_FastRead::UnlockWrite(const char* pFileName, int nLineNumber)
{
	{
		bool bWriteLocksHaltReadsImmediately; // 5493
		{
			uint32 nPostDecrement; // 5498
		}
		{
			uint32 nSwapInterlock; // 5521
		}
	}
} /* size: 0 */

// <004D9C9D> tier0/threadtools.cpp:5547
// variables: 3
// function calls: 5
void CThreadRWLock_FastRead::UnlockRead_LockForWrite(const char* pFileName, int nLineNumber)
{
	ThreadId_t threadID; // 5550
	uint32 nNoWaitingWritesTestValue; // 5555
	uint32 nPrelockValue; // 5565
	CInterlockedIntT<int, 4>::GetRaw(); // 5556
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<unsigned int, 4>::AtomicAdd(
			unsigned int add);  // 5565
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 5571
} /* size: 191, variables: 3, inline expansions: 5 (47 bytes) */

// <004D991F> tier0/threadtools.cpp:5608
// variables: 6
// function calls: 8
void CThreadRWLock_FastRead::UnlockWrite_LockForRead(const char* pFileName, int nLineNumber)
{
	const char   __FUNCTION__; // 56076
	bool bWriteLocksHaltReadsImmediately; // 5615
	uint32 nPostlockValue; // 5620
	bool bLastWriteLock; // 5621
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5613
	}
	{
		uint32 nSwapInterlock; // 5635
		CInterlockedIntT<unsigned int, 4>::operator unsigned int(); // 5635
		ThreadInterlockedAssignIf(volatile int32* p,
						int32 value,
						int32 comparand);  // 597
		CInterlockedIntT<unsigned int, 4>::AssignIf(
			unsigned int conditionValue,
			unsigned int newValue);  // 5639
		ThreadInterlockedExchangeAdd(volatile int32* p,
						int32 value);  // 660
		CInterlockedIntT<unsigned int, 4>::AtomicAdd(
				unsigned int add);  // 5654
	}
	CInterlockedIntT<int, 4>::GetRaw(); // 5615
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<unsigned int, 4>::AtomicAdd(
			unsigned int add);  // 5627
} /* size: 0, variables: 4, inline expansions: 3 (47 bytes) */

// <004D93D2> tier0/threadtools.cpp:5693
// variables: 4
// function calls: 18
void CThreadRWLock_FastRead::HandleFirstWriteLockTransition()
{
	bool bWriteLocksHaltReadsImmediately; // 5696
	{
		uint32 nReaderSnapshot; // 5727
		{
			uint32 nCurVal; // 5758
			CInterlockedIntT<unsigned int, 4>::GetRaw(); // 5758
			CInterlockedIntT<int, 4>::GetRaw(); // 5754
			ThreadInterlockedAssignIf(volatile int32* p,
							int32 value,
							int32 comparand);  // 597
			CInterlockedIntT<unsigned int, 4>::AssignIf(
				unsigned int conditionValue,
				unsigned int newValue);  // 5762
		}
		ThreadInterlockedExchangeAdd(volatile int32* p,
						int32 value);  // 660
		CInterlockedIntT<unsigned int, 4>::AtomicAdd(
				unsigned int add);  // 5727
		ThreadInterlockedExchangeAdd(volatile int32* p,
						int32 value);  // 660
		CInterlockedIntT<int, 4>::AtomicAdd(
				int add);  // 5733
		CInterlockedIntT<int, 4>::GetRaw(); // 5739
		ThreadInterlockedExchangeAdd(volatile int32* p,
						int32 value);  // 660
		CInterlockedIntT<int, 4>::AtomicAdd(
				int add);  // 5749
	}
	{
		uint32 nReaderSnapshot; // 5774
		ThreadInterlockedExchangeAdd(volatile int32* p,
						int32 value);  // 660
		CInterlockedIntT<unsigned int, 4>::AtomicAdd(
				unsigned int add);  // 5774
		ThreadInterlockedExchangeAdd(volatile int32* p,
						int32 value);  // 660
		CInterlockedIntT<int, 4>::AtomicAdd(
				int add);  // 5775
	}
	CInterlockedIntT<int, 4>::GetRaw(); // 5696
	CInterlockedIntT<int, 4>::GetRaw(); // 5711
	CInterlockedIntT<int, 4>::GetRaw(); // 5717
} /* size: 301, variables: 1, inline expansions: 3 (10 bytes) */

// <004D8F98> tier0/threadtools.cpp:5781
// variables: 3
// function calls: 14
void CThreadRWLock_FastRead::EncounteredComplexReadLockOperation(uint32 nInterlockVal, bool bWaitForReadLock, const char* pFileName, int nLineNumber)
{
	bool bLeftReadEventReset; // 5814
	{
		uint32 nDecrement; // 5800
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<unsigned int, 4>::operator--(); // 5800
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 5804
	}
	{
		uint32 nUpdatedInterlock; // 5818
		ThreadInterlockedExchangeAdd(volatile int32* p,
						int32 value);  // 660
		CInterlockedIntT<unsigned int, 4>::AtomicAdd(
				unsigned int add);  // 5839
		ThreadInterlockedExchangeAdd(volatile int32* p,
						int32 value);  // 660
		CInterlockedIntT<unsigned int, 4>::AtomicAdd(
				unsigned int add);  // 5818
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 5822
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 5845
	}
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 5787
} /* size: 368, variables: 1, inline expansions: 2 (10 bytes) */

// <004D8E74> tier0/threadtools.cpp:5868
// function calls: 2
void CThreadRWLock_FastRead::UnlockReadAccounting(const char* pFileName, int nLineNumber, uint32 nInterlockVal)
{
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 5872
} /* size: 124, inline expansions: 2 (26 bytes) */

// <004E5852> tier0/threadtools.cpp:5894
// variable: 1
// function calls: 20
void CThreadSpinRWLock::SpinLockForWrite(const char* pFileName, int nLineNumber, const ThreadId_t threadId)
{
	int i; // 5896
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 3226
	CThreadSpinRWLock::AssignIf(
		const union LockInfo_t& newValue,
		const union LockInfo_t& comparand);  // 3257
	CThreadSpinRWLock::TryLockForWrite(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 5898
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 3226
	CThreadSpinRWLock::AssignIf(
		const union LockInfo_t& newValue,
		const union LockInfo_t& comparand);  // 3257
	CThreadSpinRWLock::TryLockForWrite(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 5905
	ThreadPause(void); // 5909
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 3226
	CThreadSpinRWLock::AssignIf(
		const union LockInfo_t& newValue,
		const union LockInfo_t& comparand);  // 3257
	CThreadSpinRWLock::TryLockForWrite(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 5938
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 3226
	CThreadSpinRWLock::AssignIf(
		const union LockInfo_t& newValue,
		const union LockInfo_t& comparand);  // 3257
	CThreadSpinRWLock::TryLockForWrite(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 5914
	ThreadPause(void); // 5918
	ThreadPause(void); // 5932
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 3226
	CThreadSpinRWLock::AssignIf(
		const union LockInfo_t& newValue,
		const union LockInfo_t& comparand);  // 3257
	CThreadSpinRWLock::TryLockForWrite(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 5927
	ThreadPause(void); // 5943
	CThreadSpinRWLock::SpinLockForWrite(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 5894
} /* size: 400, variables: 1, inline expansions: 20 (724 bytes) */

// <004D8E25> tier0/threadtools.cpp:5894
// variable: 1
void CThreadSpinRWLock::SpinLockForWrite(const char* pFileName, int nLineNumber, const ThreadId_t threadId)
{
	int i; // 5896
} /* size: 0, variables: 1 */

// <004E5E29> tier0/threadtools.cpp:5948
// variables: 2
// function calls: 25
void CThreadSpinRWLock::LockForRead(const char* pFileName, int nLineNumber)
{
	const char* pLockName; // 5950
	int i; // 5954
	CInterlockedIntT<int, 4>::operator!=(
			int rhs);  // 3278
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 3226
	CThreadSpinRWLock::AssignIf(
		const union LockInfo_t& newValue,
		const union LockInfo_t& comparand);  // 3293
	CThreadSpinRWLock::TryLockForRead(
			const char* pFileName,
			int nLineNumber);  // 5955
	ThreadPause(void); // 5966
	CInterlockedIntT<int, 4>::operator!=(
			int rhs);  // 3278
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 3226
	CThreadSpinRWLock::AssignIf(
		const union LockInfo_t& newValue,
		const union LockInfo_t& comparand);  // 3293
	CThreadSpinRWLock::TryLockForRead(
			const char* pFileName,
			int nLineNumber);  // 5962
	CInterlockedIntT<int, 4>::operator!=(
			int rhs);  // 3278
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 3226
	CThreadSpinRWLock::AssignIf(
		const union LockInfo_t& newValue,
		const union LockInfo_t& comparand);  // 3293
	CThreadSpinRWLock::TryLockForRead(
			const char* pFileName,
			int nLineNumber);  // 5995
	CInterlockedIntT<int, 4>::operator!=(
			int rhs);  // 3278
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 3226
	CThreadSpinRWLock::AssignIf(
		const union LockInfo_t& newValue,
		const union LockInfo_t& comparand);  // 3293
	CThreadSpinRWLock::TryLockForRead(
			const char* pFileName,
			int nLineNumber);  // 5971
	ThreadPause(void); // 5975
	ThreadPause(void); // 5989
	CInterlockedIntT<int, 4>::operator!=(
			int rhs);  // 3278
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 3226
	CThreadSpinRWLock::AssignIf(
		const union LockInfo_t& newValue,
		const union LockInfo_t& comparand);  // 3293
	CThreadSpinRWLock::TryLockForRead(
			const char* pFileName,
			int nLineNumber);  // 5984
	ThreadPause(void); // 6000
	CThreadSpinRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 5948
} /* size: 343, variables: 2, inline expansions: 25 (501 bytes) */

// <004D8DB6> tier0/threadtools.cpp:5948
// variables: 3
void CThreadSpinRWLock::LockForRead(const char* pFileName, int nLineNumber)
{
	const char* pLockName; // 5950
	const char   __FUNCTION__; // 52372
	int i; // 5954
} /* size: 0, variables: 3 */

// <004D88F2> tier0/threadtools.cpp:6005
// variables: 3
// function calls: 15
void CThreadSpinRWLock::UnlockRead(const char* pFileName, int nLineNumber)
{
	int i; // 6007
	union LockInfo_t oldValue; // 6013
	union LockInfo_t newValue; // 6014
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 3226
	CThreadSpinRWLock::AssignIf(
		const union LockInfo_t& newValue,
		const union LockInfo_t& comparand);  // 6023
	ThreadPause(void); // 6026
	ThreadPause(void); // 6034
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 3226
	CThreadSpinRWLock::AssignIf(
		const union LockInfo_t& newValue,
		const union LockInfo_t& comparand);  // 6032
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 3226
	CThreadSpinRWLock::AssignIf(
		const union LockInfo_t& newValue,
		const union LockInfo_t& comparand);  // 6041
	ThreadPause(void); // 6043
	ThreadPause(void); // 6056
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 3226
	CThreadSpinRWLock::AssignIf(
		const union LockInfo_t& newValue,
		const union LockInfo_t& comparand);  // 6054
	ThreadPause(void); // 6066
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 3226
	CThreadSpinRWLock::AssignIf(
		const union LockInfo_t& newValue,
		const union LockInfo_t& comparand);  // 6064
} /* size: 440, variables: 3, inline expansions: 15 (188 bytes) */

// <004D8778> tier0/threadtools.cpp:6073
// variable: 1
// function calls: 4
void CThreadSpinRWLock::UnlockWrite(const char* pFileName, int nLineNumber)
{
	const union LockInfo_t  newValue; // 6078
	ThreadInterlockedExchange128(volatile int128* pDest,
					int128 value);  // 6082
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 6091
} /* size: 119, variables: 1, inline expansions: 4 (113 bytes) */

// <004D831D> tier0/threadtools.cpp:6094
// variables: 2
// function calls: 14
void CThreadSpinRWLock::UnlockRead_LockForWrite(const char* pFileName, int nLineNumber)
{
	{
		const union LockInfo_t  oldValue; // 6102
		union LockInfo_t newValue; // 6103
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 6100
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 3226
		CThreadSpinRWLock::AssignIf(
			const union LockInfo_t& newValue,
			const union LockInfo_t& comparand);  // 6104
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 6108
	}
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 3305
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 3226
	CThreadSpinRWLock::AssignIf(
		const union LockInfo_t& newValue,
		const union LockInfo_t& comparand);  // 3257
	CThreadSpinRWLock::TryLockForWrite(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 3307
	ThreadPause(void); // 3309
	CThreadSpinRWLock::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 6113
} /* size: 197, inline expansions: 8 (175 bytes) */

// <004D8149> tier0/threadtools.cpp:6117
// variables: 2
// function calls: 4
void CThreadSpinRWLock::UnlockWrite_LockForRead(const char* pFileName, int nLineNumber)
{
	const union LockInfo_t  newValue; // 6122
	union LockInfo_t oldValue; // 6123
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 3226
	CThreadSpinRWLock::AssignIf(
		const union LockInfo_t& newValue,
		const union LockInfo_t& comparand);  // 6126
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 6128
} /* size: 96, variables: 2, inline expansions: 4 (34 bytes) */

// <004D80CD> tier0/threadtools.cpp:6141
void CWorkerThread::CWorkerThread()
{
} /* size: 86 */

// <004D800F> tier0/threadtools.cpp:6151
void CWorkerThread::CallWorker(unsigned int dw, unsigned int timeout, bool fBoostWorkerPriorityToMaster)
{
} /* size: 15 */

// <004D7F84> tier0/threadtools.cpp:6158
void CWorkerThread::CallMaster(unsigned int dw, unsigned int timeout)
{
} /* size: 14 */

// <004D7F56> tier0/threadtools.cpp:6165
void CWorkerThread::GetCallHandle()
{
} /* size: 12 */

// <004D7F28> tier0/threadtools.cpp:6172
void CWorkerThread::GetCallParam()
{
} /* size: 11 */

// <004D7E7A> tier0/threadtools.cpp:6195
uint32 DefaultWaitFunc(uint32 nHandles, CThreadEvent** ppHandles, int bWaitAll, uint32 timeout)
{
} /* size: 17 */

// <004D7B5D> tier0/threadtools.cpp:6201
// variables: 3
// function calls: 6
void CWorkerThread::Call(unsigned int dwParam, unsigned int timeout, bool fBoostPriority, WaitFunc_t waitFunc)
{
	const char   __FUNCTION__; // 42445
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_6205; // 6205
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6203
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 6205
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 6232
} /* size: 0, variables: 2, inline expansions: 6 (219 bytes) */

// <004D7AF2> tier0/threadtools.cpp:6239
void CWorkerThread::WaitForReply(unsigned int timeout)
{
} /* size: 11 */

// <004D7923> tier0/threadtools.cpp:6244
// variables: 6
// function call: 1
void CWorkerThread::WaitForReply(unsigned int timeout, WaitFunc_t pfnWait)
{
	CThreadEvent* waits; // 6257
	unsigned int result; // 6267
	bool bInDebugger; // 6268
	uint32 dwActualTimeout; // 6270
	const char   __FUNCTION__; // 6991
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6277
	}
	Plat_IsInDebugSession(void); // 6268
} /* size: 0, variables: 5, inline expansions: 1 (10 bytes) */

// <004D78B7> tier0/threadtools.cpp:6310
void CWorkerThread::WaitForCall(unsigned int* pResult)
{
} /* size: 17 */

// <004D7827> tier0/threadtools.cpp:6317
// variable: 1
void CWorkerThread::WaitForCall(unsigned int dwTimeout, unsigned int* pResult)
{
	bool returnVal; // 6319
} /* size: 49, variables: 1 */

// <004D77C8> tier0/threadtools.cpp:6330
void CWorkerThread::PeekCall(unsigned int* pParam)
{
} /* size: 53 */

// <004D774D> tier0/threadtools.cpp:6351
void CWorkerThread::Reply(unsigned int dw)
{
} /* size: 61 */

// <004D75E7> tier0/threadtools.cpp:6372
// function calls: 3
void CThread::CThread()
{
	CThreadMutex::CThreadMutex(
			const char* pName);  // 6381
	CThreadManualEvent::CThreadManualEvent(); // 6381
	CThreadSyncValue<bool>::CThreadSyncValue<bool>(); // 6378
} /* size: 213, inline expansions: 3 (96 bytes) */

// <004D75CE> tier0/threadtools.cpp:6372
void CThread::CThread()
{
} /* size: 0 */

// <004D747C> tier0/threadtools.cpp:6390
// function calls: 4
void CThread::~CThread()
{
	{
	}
	{
		CThreadEvent::~CThreadEvent(); // 1637
		CThreadManualEvent::~CThreadManualEvent(); // 6406
		CThreadEvent::~CThreadEvent(); // 6406
		CThreadMutex::~CThreadMutex(); // 6406
	}
} /* size: 89 */

// <004D7416> tier0/threadtools.cpp:6390
void CThread::~CThread()
{
} /* size: 36 */

// <004D73CE> tier0/threadtools.cpp:6390
// variables: 2
void CThread::~CThread()
{
	const char   __FUNCTION__; // 45701
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6396
	}
} /* size: 0, variables: 1 */

// <004D7183> tier0/threadtools.cpp:6411
// variable: 1
// function calls: 7
void CThread::GetName()
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_6413; // 6413
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 6413
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 6424
	snprintf(char* __s,
		size_t __n,
		const char* __fmt, ...);  // 6419
} /* size: 226, variables: 1, inline expansions: 7 (325 bytes) */

// <004D6EF9> tier0/threadtools.cpp:6428
// variable: 1
// function calls: 7
void CThread::SetName(const char* pszName)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_6430; // 6430
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 6430
	V_strncpy<long unsigned int>(char* pDest,
					const char* pSrc,
					long unsigned int maxLenInChars);  // 6431
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 6436
} /* size: 165, variables: 1, inline expansions: 7 (250 bytes) */

// <004D695D> tier0/threadtools.cpp:6443
// variables: 11
// function calls: 10
void CThread::Start(unsigned int nBytesStack, ThreadPriorityEnum_t nPriority)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_6445; // 6445
	const char   __FUNCTION__; // 44392
	bool bInitSuccess; // 6453
	CThreadEvent createComplete; // 6454
	ThreadInit_t init; // 6455
	ThreadId_t threadID; // 6470
	ThreadHandle_t hThread; // 6471
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6449
	}
	{
		int iValidEntries; // 6459
		{
			int i; // 6460
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6474
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 6445
	CThreadSyncValue<bool>::Store(
		bool value);  // 6469
	CThreadSyncValue<bool>::Store(
		bool value);  // 6477
	CThread::WaitForCreateComplete(
				CThreadEvent* pEvent);  // 6491
	CThreadEvent::~CThreadEvent(); // 6518
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 6518
} /* size: 0, variables: 7, inline expansions: 10 (301 bytes) */

// <004D68FF> tier0/threadtools.cpp:6525
// function call: 1
void CThread::IsAlive()
{
	CThreadSyncValue<bool>::Load(); // 6530
} /* size: 12, inline expansions: 1 (0 bytes) */

// <004D67BA> tier0/threadtools.cpp:6535
// variables: 4
// function call: 1
void CThread::Join(unsigned int timeoutIsIgnored)
{
	bool result; // 6537
	const char   __FUNCTION__; // 42445
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6544
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6559
	}
	CThreadSyncValue<bool>::Load(); // 6559
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <004D678C> tier0/threadtools.cpp:6565
void CThread::GetThreadHandle()
{
} /* size: 12 */

// <004D675E> tier0/threadtools.cpp:6577
void CThread::GetResult()
{
} /* size: 11 */

// <004D6621> tier0/threadtools.cpp:6589
// variables: 3
void CThread::Stop(int exitCode)
{
	const char   __FUNCTION__; // 42445
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6593
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6615
	}
} /* size: 0, variables: 1 */

// <004D650F> tier0/threadtools.cpp:6653
// variables: 2
// function call: 1
void CThread::Suspend()
{
	const char   __FUNCTION__; // 6869
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6655
	}
	Plat_IsInDebugSession(void); // 6659
} /* size: 0, variables: 1, inline expansions: 1 (7 bytes) */

// <004D6477> tier0/threadtools.cpp:6671
void CThread::Resume()
{
} /* size: 78 */

// <004D641A> tier0/threadtools.cpp:6684
void CThread::Terminate(int exitCode)
{
} /* size: 55 */

// <004D63FF> tier0/threadtools.cpp:6713
void GetCurrentCThread(void)
{
} /* size: 29 */

// <004D63B5> tier0/threadtools.cpp:6724
void Sleep(unsigned int duration)
{
} /* size: 9 */

// <004E4340> tier0/threadtools.cpp:6735
void CThread::Init()
{
} /* size: 10 */

// <004E436B> tier0/threadtools.cpp:6743
void CThread::OnExit()
{
} /* size: 5 */

// <004E4C90> tier0/threadtools.cpp:6746
void CThread::WaitForCreateComplete(CThreadEvent* pEvent)
{
} /* size: 0 */

// <004E4396> tier0/threadtools.cpp:6746
void CThreadEvent::WaitForCreateComplete()
{
	{
	}
} /* size: 34 */

// <004D6324> tier0/threadtools.cpp:6746
// variables: 2
void CThread::WaitForCreateComplete(CThreadEvent* pEvent)
{
	const char   __FUNCTION__; // 41458
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 6751
	}
} /* size: 0, variables: 1 */

// <004D62AB> tier0/threadtools.cpp:6757
// function call: 1
void CThread::IsThreadRunning()
{
	ThreadIsThreadIdRunning(ThreadId_t uThreadId); // 6759
} /* size: 29, inline expansions: 1 (19 bytes) */

// <004D6020> tier0/threadtools.cpp:6762
// variables: 4
// function calls: 5
void ThreadProc(LPVOID pv)
{
	ThreadInit_t* pInit; // 6765
	CThread* pThread; // 6771
	CStackTop_ReferenceParentStack stackTop; // 6792
	bool bInitSuccess; // 6795
	AlignValue<CThread**>(CThread** val,
				uintp alignment);  // 6787
	CDeferredCallStackMarker::CDeferredCallStackMarker(); // 6792
	CThreadSyncValue<bool>::Store(
		bool value);  // 6829
	ThreadSetDebugNameS2(const char* pszName); // 6776
	CThreadSyncValue<bool>::Store(
		bool value);  // 6819
} /* size: 516, variables: 4, inline expansions: 5 (53 bytes) */

// <004D5C86> tier0/threadtools.cpp:7148
uint ThreadShellExecute(const char* lpApplicationName, const char* pchCommandLine, const char* pchCurrentDirectory)
{
} /* size: 20 */

// <004D5822> tier0/threadtools.cpp:7173
// variables: 2
// function calls: 10
void ResolveOrderedConstructor_MainThreadThreadLocalConstructionScope(COrderedConstructor_DependencyManagement<CThreadLocalScope>& owner)
{
	OrderedDependency_t dependOn_g_ThreadMainThreadID; // 7175
	OrderedDependency_t dependOn_s_ThreadScopeMutex; // 7179
	COrderedConstructor_DependencyManagement<CConstructedMainThreadID>::ToGenericDependencyManagement(); // 1435
	{
	}
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 1447
	}
	OrderedDependency_t::LinkDependency<CConstructedMainThreadID, CThreadLocalScope>(
									COrderedConstructor_DependencyManagement<CThreadLocalScope>& dependant,
									COrderedConstructor_DependencyManagement<CConstructedMainThreadID>& dependsOn);  // 1430
	OrderedDependency_t::LinkDependency<CConstructedMainThreadID, CThreadLocalScope>(
									COrderedConstructor_DependencyManagement<CThreadLocalScope>& dependant,
									COrderedConstructor_DependencyManagement<CConstructedMainThreadID>& dependsOn);  // 7175
	COrderedConstructor_DependencyManagement<CThreadFastMutex>::ToGenericDependencyManagement(); // 1435
	{
	}
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 1447
	}
	OrderedDependency_t::LinkDependency<CThreadFastMutex, CThreadLocalScope>(
								COrderedConstructor_DependencyManagement<CThreadLocalScope>& dependant,
								COrderedConstructor_DependencyManagement<CThreadFastMutex>& dependsOn);  // 1430
	OrderedDependency_t::LinkDependency<CThreadFastMutex, CThreadLocalScope>(
								COrderedConstructor_DependencyManagement<CThreadLocalScope>& dependant,
								COrderedConstructor_DependencyManagement<CThreadFastMutex>& dependsOn);  // 7179
	OrderedDependency_t::OrderedDependency_t(); // 7175
	OrderedDependency_t::OrderedDependency_t(); // 7179
} /* size: 0, variables: 2, inline expansions: 8 (407 bytes) */

// <004CA21A> tier0/threadtools.cpp:7184
// member functions: 3
// member variable: 1
// class size: 56
class CThreadLocalScopeIter : public CThreadLocalScope {
	/* tier0/threadtools.cpp:7184 */
	using ::operator();
public:
	/* class CThreadLocalScope <ancestor>; */ /* 0 56 */
	/* tier0/threadtools.cpp:7187 */
	void CThreadLocalScopeIter(CThreadLocalScopeIter* , ThreadHandle_t);
	/* tier0/threadtools.cpp:7191 */
	void ScopeHandlerChange(CThreadLocalScope* , FN_OnScopeChange, bool);
};

// <004D57A1> tier0/threadtools.cpp:7191
// variables: 4
inline void ScopeHandlerChange(CThreadLocalScope* pLocalScope, FN_OnScopeChange pFN_Handler, bool bCreated)
{
	const char   __FUNCTION__; // 34614
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 7193
	}
	{
		CScopeCreatedOrDestroyedHandler* pIter; // 7197
	}
	{
		CThreadLocalScope* pIter; // 7205
	}
} /* size: 0, variables: 1 */

// <004D513E> tier0/threadtools.cpp:7213
// variables: 3
// function calls: 18
void CThreadLocalScope::CThreadLocalScope(ThreadHandle_t hThreadHandle, bool bDeleteOnThreadDetach)
{
	{
		{
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_7259; // 7259
			{
			}
		}
	}
	{
		{
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_7259; // 7259
			{
			}
			COrderedConstructor_DependencyManagement<CThreadFastMutex>::GetRaw(); // 501
			COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>::GetRaw<>(); // 7259
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
					int nLineNumber);  // 7259
			COrderedConstructor_DependencyManagement<CThreadFastMutex>::IsConstructed(); // 7193
			{
			}
			COrderedConstructor_DependencyManagement<CThreadFastMutex>::GetRaw(); // 501
			COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>::GetRaw<>(); // 7193
			CThreadFastMutex::OwnedByCurrentThread(); // 7193
			{
			}
			{
				CScopeCreatedOrDestroyedHandler* pIter; // 7197
			}
			ScopeHandlerChange(CThreadLocalScope* pLocalScope,
						FN_OnScopeChange pFN_Handler,
						bool bCreated);  // 7270
			CManuallyConstructedClass<CThreadLocalScope>::CastPointer(); // 7273
			{
			}
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 7274
		}
	}
} /* size: 0 */

// <004D50BF> tier0/threadtools.cpp:7213
// variables: 3
void CThreadLocalScope::CThreadLocalScope(ThreadHandle_t hThreadHandle, bool bDeleteOnThreadDetach)
{
	const char   __FUNCTION__; // 36781
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_7259; // 7259
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 7273
		}
	}
} /* size: 0, variables: 1 */

// <004D48C7> tier0/threadtools.cpp:7282
// variables: 13
// function calls: 22
void CThreadLocalScope::~CThreadLocalScope()
{
	{
		{
			COrderedReferenceScope generated_id_7286; // 7286
			{
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_7290; // 7290
				{
					CThreadLocalScope* pFound; // 7319
					CThreadLocalScope* pFoundLast; // 7320
					{
						CThreadLocalScope* pLast; // 7322
						{
							CThreadLocalScope* pIter; // 7323
						}
					}
				}
			}
			{
			}
		}
	}
	{
		{
			COrderedReferenceScope generated_id_7286; // 7286
			COrderedConstructor_DependencyManagement<CThreadFastMutex>::ToGenericDependencyManagement(); // 988
			COrderedReferenceScope::COrderedReferenceScope<CThreadFastMutex, COrderedResolve_NoResolve, false>(
													COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>& orderedType);  // 7286
			{
			}
			{
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_7290; // 7290
				{
				}
				COrderedConstructor_DependencyManagement<CThreadFastMutex>::GetRaw(); // 501
				COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>::GetRaw<>(); // 7290
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
						int nLineNumber);  // 7290
				COrderedConstructor_DependencyManagement<CThreadFastMutex>::IsConstructed(); // 7193
				{
				}
				COrderedConstructor_DependencyManagement<CThreadFastMutex>::GetRaw(); // 501
				COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>::GetRaw<>(); // 7193
				CThreadFastMutex::OwnedByCurrentThread(); // 7193
				{
				}
				{
					CScopeCreatedOrDestroyedHandler* pIter; // 7197
				}
				ScopeHandlerChange(CThreadLocalScope* pLocalScope,
							FN_OnScopeChange pFN_Handler,
							bool bCreated);  // 7312
				{
					CThreadLocalScope* pFound; // 7319
					CThreadLocalScope* pFoundLast; // 7320
					{
						CThreadLocalScope* pLast; // 7322
						{
							CThreadLocalScope* pIter; // 7323
						}
					}
				}
				ThreadInterlockedExchange64(volatile int64* p,
								int64 value);  // 874
				CThreadFastMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 944
				Unlock(CThreadFastMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 7374
			}
			FromGenericDependencyManagement(COrderedSystem_DependencyManagement* pFrom); // 1187
			StaticRelease(COrderedSystem_DependencyManagement* pThis); // 994
			COrderedReferenceScope::~COrderedReferenceScope(); // 7379
		}
	}
} /* size: 0 */

// <004D4815> tier0/threadtools.cpp:7282
// variables: 8
void CThreadLocalScope::~CThreadLocalScope()
{
	const char   __FUNCTION__; // 34614
	{
		COrderedReferenceScope generated_id_7286; // 7286
		{
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_7290; // 7290
			{
				CThreadLocalScope* pFound; // 7319
				CThreadLocalScope* pFoundLast; // 7320
				{
					CThreadLocalScope* pLast; // 7322
					{
						CThreadLocalScope* pIter; // 7323
					}
				}
			}
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 7377
		}
	}
} /* size: 0, variables: 1 */

// <004D47DB> tier0/threadtools.cpp:7394
void CThreadLocalScope::IsLocalThreadScope()
{
} /* size: 44 */

// <004D46D1> tier0/threadtools.cpp:7399
// function calls: 4
void GetScopeListMutex(void)
{
	COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>::ConstructIfNotConstructed(); // 7401
	{
	}
	COrderedConstructor_DependencyManagement<CThreadFastMutex>::GetRaw(); // 501
	COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>::GetRaw<>(); // 523
	COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>::operator CThreadFastMutex&<CThreadFastMutex>(); // 7402
} /* size: 0, inline expansions: 4 (203 bytes) */

// <004E678D> tier0/threadtools.cpp:7406
// variables: 3
// function calls: 18
void FindScopeForThreadHandle(ThreadHandle_t hThreadHandle)
{
	COrderedReferenceScope generated_id_7421; // 7421
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_7422; // 7422
	COrderedConstructor_DependencyManagement<CThreadFastMutex>::ToGenericDependencyManagement(); // 988
	COrderedReferenceScope::COrderedReferenceScope<CThreadFastMutex, COrderedResolve_NoResolve, false>(
											COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>& orderedType);  // 7421
	{
	}
	COrderedConstructor_DependencyManagement<CThreadFastMutex>::GetRaw(); // 501
	COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>::GetRaw<>(); // 7422
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
			int nLineNumber);  // 7422
	{
		CThreadLocalScope* pIter; // 7424
	}
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 7432
	FromGenericDependencyManagement(COrderedSystem_DependencyManagement* pFrom); // 1187
	StaticRelease(COrderedSystem_DependencyManagement* pThis); // 994
	COrderedReferenceScope::~COrderedReferenceScope(); // 7432
	FindScopeForThreadHandle(ThreadHandle_t hThreadHandle); // 7406
} /* size: 0, variables: 2, inline expansions: 18 (933 bytes) */

// <004D468B> tier0/threadtools.cpp:7406
// variables: 3
void FindScopeForThreadHandle(ThreadHandle_t hThreadHandle)
{
	COrderedReferenceScope generated_id_7421; // 7421
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_7422; // 7422
	{
		CThreadLocalScope* pIter; // 7424
	}
} /* size: 0, variables: 2 */

// <004D4158> tier0/threadtools.cpp:7434
// variables: 3
// function calls: 17
void FindScopeForThreadId(ThreadId_t nThreadId)
{
	COrderedReferenceScope generated_id_7444; // 7444
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_7445; // 7445
	{
		CThreadLocalScope* pIter; // 7447
	}
	COrderedConstructor_DependencyManagement<CThreadFastMutex>::ToGenericDependencyManagement(); // 988
	COrderedReferenceScope::COrderedReferenceScope<CThreadFastMutex, COrderedResolve_NoResolve, false>(
											COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>& orderedType);  // 7444
	{
	}
	COrderedConstructor_DependencyManagement<CThreadFastMutex>::GetRaw(); // 501
	COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>::GetRaw<>(); // 7445
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
			int nLineNumber);  // 7445
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 7462
	FromGenericDependencyManagement(COrderedSystem_DependencyManagement* pFrom); // 1187
	StaticRelease(COrderedSystem_DependencyManagement* pThis); // 994
	COrderedReferenceScope::~COrderedReferenceScope(); // 7462
} /* size: 0, variables: 2, inline expansions: 17 (624 bytes) */

// <004D40F4> tier0/threadtools.cpp:7464
void CThreadLocalScope::SetThreadName(const char* pBuffer)
{
} /* size: 25 */

// <004D3AD8> tier0/threadtools.cpp:7474
// variables: 7
// function calls: 18
void CScopeCreatedOrDestroyedHandler::CScopeCreatedOrDestroyedHandler(FN_OnScopeChange pHandler)
{
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_7482; // 7482
		{
			CScopeCreatedOrDestroyedHandler** pWrite; // 7487
			{
				CScopeCreatedOrDestroyedHandler* pIter; // 7488
			}
		}
	}
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_7482; // 7482
		{
		}
		COrderedConstructor_DependencyManagement<CThreadFastMutex>::GetRaw(); // 501
		COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>::GetRaw<>(); // 7482
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
				int nLineNumber);  // 7482
		{
			CScopeCreatedOrDestroyedHandler** pWrite; // 7487
			{
				CScopeCreatedOrDestroyedHandler* pIter; // 7488
			}
		}
		COrderedConstructor_DependencyManagement<CThreadFastMutex>::IsConstructed(); // 7193
		{
		}
		COrderedConstructor_DependencyManagement<CThreadFastMutex>::GetRaw(); // 501
		COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>::GetRaw<>(); // 7193
		CThreadFastMutex::OwnedByCurrentThread(); // 7193
		{
		}
		{
			CThreadLocalScope* pIter; // 7205
		}
		ScopeHandlerChange(CThreadLocalScope* pLocalScope,
					FN_OnScopeChange pFN_Handler,
					bool bCreated);  // 7497
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 7498
	}
	CScopeCreatedOrDestroyedHandler::CScopeCreatedOrDestroyedHandler(
					FN_OnScopeChange pHandler);  // 7474
} /* size: 0, inline expansions: 1 (418 bytes) */

// <004D3A7B> tier0/threadtools.cpp:7474
// variables: 3
void CScopeCreatedOrDestroyedHandler::CScopeCreatedOrDestroyedHandler(FN_OnScopeChange pHandler)
{
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_7482; // 7482
		{
			CScopeCreatedOrDestroyedHandler** pWrite; // 7487
			{
				CScopeCreatedOrDestroyedHandler* pIter; // 7488
			}
		}
	}
} /* size: 0 */

// <004D34B4> tier0/threadtools.cpp:7501
// variables: 7
// function calls: 17
void CScopeCreatedOrDestroyedHandler::~CScopeCreatedOrDestroyedHandler()
{
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_7505; // 7505
		{
			CScopeCreatedOrDestroyedHandler* pLast; // 7509
			{
				CScopeCreatedOrDestroyedHandler* pIter; // 7510
			}
		}
	}
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_7505; // 7505
		{
		}
		COrderedConstructor_DependencyManagement<CThreadFastMutex>::GetRaw(); // 501
		COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>::GetRaw<>(); // 7505
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
				int nLineNumber);  // 7505
		{
			CScopeCreatedOrDestroyedHandler* pLast; // 7509
			{
				CScopeCreatedOrDestroyedHandler* pIter; // 7510
			}
		}
		COrderedConstructor_DependencyManagement<CThreadFastMutex>::IsConstructed(); // 7193
		{
		}
		COrderedConstructor_DependencyManagement<CThreadFastMutex>::GetRaw(); // 501
		COrderedConstructor_Create<CThreadFastMutex, COrderedResolve_NoResolve, false>::GetRaw<>(); // 7193
		CThreadFastMutex::OwnedByCurrentThread(); // 7193
		{
		}
		{
			CThreadLocalScope* pIter; // 7205
		}
		ScopeHandlerChange(CThreadLocalScope* pLocalScope,
					FN_OnScopeChange pFN_Handler,
					bool bCreated);  // 7528
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 7529
	}
} /* size: 0 */

// <004D346A> tier0/threadtools.cpp:7501
// variables: 3
void CScopeCreatedOrDestroyedHandler::~CScopeCreatedOrDestroyedHandler()
{
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_7505; // 7505
		{
			CScopeCreatedOrDestroyedHandler* pLast; // 7509
			{
				CScopeCreatedOrDestroyedHandler* pIter; // 7510
			}
		}
	}
} /* size: 0 */

