
//
// tier0/assert_dialog.cpp
//
//	referenced by: libtier0.so
//
//	functions: 46
//	classes: 4
//	structs: 4
//

// <0002F0EE> tier0/assert_dialog.cpp:42
void SetAssertionCallback(AssertionCallbackType pCallback)
{
} /* size: 12 */

// <0002F0BC> tier0/assert_dialog.cpp:47
void RemoveAssertionCallback(AssertionCallbackType pCallback)
{
} /* size: 28 */

// <0002B995> tier0/assert_dialog.cpp:75
void DialogInitInfo_t::DialogInitInfo_t()
{
} /* size: 0 */

// <0002B979> tier0/assert_dialog.cpp:75
inline void DialogInitInfo_t::DialogInitInfo_t()
{
} /* size: 0 */

// <00023277> tier0/assert_dialog.cpp:75
// member function: 1
// member variables: 9
// struct size: 4,136
struct DialogInitInfo_t {
	const char * m_pFilename; /* 0 8 */
	int m_iLine; /* 8 4 */
	const char * m_pExpression; /* 16 8 */
	AssertAction_t m_result; /* 24 4 */
	int m_nIgnoreTimes; /* 28 4 */
	BroadcastMinidumpType_t m_type; /* 32 4 */
	bool m_bAutoSelectDebugger; /* 36 1 */
	bool m_bContinueLoggingFailures; /* 37 1 */
	char m_szMinidumpNotes[4096]; /* 38 4096 */
	void DialogInitInfo_t(DialogInitInfo_t* );
};

// <0002333B> tier0/assert_dialog.cpp:88
// member variables: 3
// struct size: 24
struct DialogParams_t {
	DialogInitInfo_t * pInfo; /* 0 8 */
	char * pSzDefaultNotes; /* 8 8 */
	bool bUsingFullDialog; /* 16 1 */
};

// <0002F07B> tier0/assert_dialog.cpp:98
void SendActionToAssertDialog(AssertAction_t assertAction, const char* pMinidumpNotes)
{
} /* size: 5 */

// <000233B1> tier0/assert_dialog.cpp:166
// member functions: 4
// member variables: 8
// class size: 56
class CAssertionState {
	/* tier0/assert_dialog.cpp:169 */
	void CAssertionState(CAssertionState* , void* , const char* , int, const char* , const char* );
	const const void * m_pReturnAddress; /* 0 8 */
	const const char * m_szFile; /* 8 8 */
	const const char * m_szFunction; /* 16 8 */
	const const char * m_szExpression; /* 24 8 */
	const int32 m_nLine; /* 32 4 */
	uint32 m_nHitCount; /* 36 4 */
	bool m_bSkipAssert; /* 40 1 */
	CAssertionState * m_pNext; /* 48 8 */
	/* tier0/assert_dialog.cpp:192 */
	bool IsSameSource(const CAssertionState* , const void* , const char* , int, const char* , const char* );
	void CAssertionState(class CAssertionState *, void *, const char  *, int, const char  *, const char  *); /* linkage=_ZN15CAssertionStateC4EPvPKciS2_S2_ */
	bool IsSameSource(const class CAssertionState  *, const void  *, const char  *, int, const char  *, const char  *); /* linkage=_ZNK15CAssertionState12IsSameSourceEPKvPKciS3_S3_ */
};

// <0002F04B> tier0/assert_dialog.cpp:169
void CAssertionState::CAssertionState(void* pReturnAddress, const char* szFile, int nLine, const char* szFunction, const char* szExpression)
{
} /* size: 0 */

// <0002EFF6> tier0/assert_dialog.cpp:169
inline void CAssertionState::CAssertionState(void* pReturnAddress, const char* szFile, int nLine, const char* szFunction, const char* szExpression)
{
} /* size: 0 */

// <0002EFA1> tier0/assert_dialog.cpp:192
inline void CAssertionState::IsSameSource(const void* pReturnAddress, const char* szFile, int nLine, const char* szFunction, const char* szExpression)
{
} /* size: 0 */

// <000234BE> tier0/assert_dialog.cpp:212
// member variables: 6
// class size: 536
class CAssertDisable {
	char m_Filename[512]; /* 0 512 */
	int m_LineMin; /* 512 4 */
	int m_LineMax; /* 516 4 */
	int m_nIgnoreTimes; /* 520 4 */
	bool m_bContinueLogging; /* 524 1 */
	CAssertDisable * m_pNext; /* 528 8 */
};

// <000251A4> tier0/assert_dialog.cpp:240
void CAssertGlobals::~CAssertGlobals()
{
} /* size: 0 */

// <00025188> tier0/assert_dialog.cpp:240
inline void CAssertGlobals::~CAssertGlobals()
{
} /* size: 0 */

// <00023569> tier0/assert_dialog.cpp:240
// member functions: 4
// member variables: 13
// class size: 528
class CAssertGlobals {
	CInterlockedInt nGlobalAssertIgnoredFlags __attribute__((__aligned__(4))); /* 0 4 */
	CThreadMutex AssertDisableMutex; /* 8 72 */
	CAssertDisable * pAssertDisables; /* 80 8 */
	CInterlockedInt nLastIgnoreNumTimes __attribute__((__aligned__(4))); /* 88 4 */
	CThreadMutex AssertStateMutex; /* 96 72 */
	CAssertionState * pStateList; /* 168 8 */
	AssertionPrompt_t CodeAssertionPrompt; /* 176 4 */
	AssertionPrompt_t ContentAssertionPrompt; /* 180 4 */
	bool bContinueLoggingAssertionFailuresDefaultValue; /* 184 1 */
	CThreadEvent requestAssert; /* 192 128 */
	CThreadEvent assertReply; /* 320 128 */
	CThreadMutex assertLock; /* 448 72 */
	int nCount; /* 520 4 */
	/* tier0/assert_dialog.cpp:271 */
	void CAssertGlobals(CAssertGlobals* );
	void ~CAssertGlobals(CAssertGlobals* );
	void CAssertGlobals(class CAssertGlobals *); /* linkage=_ZN14CAssertGlobalsC4Ev */
	void ~CAssertGlobals(class CAssertGlobals *); /* linkage=_ZN14CAssertGlobalsD4Ev */
} __attribute__((__aligned__(8)));

// <0002EF8A> tier0/assert_dialog.cpp:271
void CAssertGlobals::CAssertGlobals()
{
} /* size: 0 */

// <0002EF71> tier0/assert_dialog.cpp:271
inline void CAssertGlobals::CAssertGlobals()
{
} /* size: 0 */

// <0002EF47> tier0/assert_dialog.cpp:329
// variable: 1
bool IsDebugBreakEnabled(void)
{
	bool bResult; // 331
} /* size: 0, variables: 1 */

// <0002EEA6> tier0/assert_dialog.cpp:335
// variable: 1
bool ClearPersistentIgnores(void)
{
	bool bResult; // 337
} /* size: 104, variables: 1 */

// <0002EE97> tier0/assert_dialog.cpp:348
bool EvaluateIfCapableOfDisplayingDialogs(void)
{
} /* size: 0 */

// <0002EE6D> tier0/assert_dialog.cpp:368
// variable: 1
bool CapableOfDisplayingDialogs(void)
{
	bool bResult; // 370
} /* size: 0, variables: 1 */

// <00023E4B> tier0/assert_dialog.cpp:374
// member variables: 5
// struct size: 4,120
struct Persistent_Ignored_Assertion_LL_t {
	uint64 m_nTimeSubmitted; /* 0 8 */
	uint m_nSecondsToIgnore; /* 8 4 */
	char m_szFileName[4096]; /* 12 4096 */
	uint m_nFileLine; /* 4108 4 */
	Persistent_Ignored_Assertion_LL_t * m_pNext; /* 4112 8 */
};

// <00023EB4> tier0/assert_dialog.cpp:388
// member functions: 12
// member variables: 2
// class size: 16
class CPersistedIgnores {
	/* tier0/assert_dialog.cpp:391 */
	void CPersistedIgnores(CPersistedIgnores* );
	/* tier0/assert_dialog.cpp:406 */
	bool GetPersistentIgnoresFileName(CPersistedIgnores* , CBufferString* );
	/* tier0/assert_dialog.cpp:424 */
	bool IsPersistedIgnore(CPersistedIgnores* , const char* , int);
	/* tier0/assert_dialog.cpp:450 */
	void SavePersistentIgnores(CPersistedIgnores* );
	/* tier0/assert_dialog.cpp:477 */
	void LoadPersistentIgnores(CPersistedIgnores* );
	/* tier0/assert_dialog.cpp:670 */
	void CreatePersistedAssertDisable(CPersistedIgnores* , const char* , uint, uint);
private:
	bool m_bFileHasBeenLoaded; /* 0 1 */
	Persistent_Ignored_Assertion_LL_t * m_pPersistentIgnores; /* 8 8 */
	void CPersistedIgnores(class CPersistedIgnores *); /* linkage=_ZN17CPersistedIgnoresC4Ev */
	bool GetPersistentIgnoresFileName(class CPersistedIgnores *, class CBufferString *); /* linkage=_ZN17CPersistedIgnores28GetPersistentIgnoresFileNameEP13CBufferString */
	bool IsPersistedIgnore(class CPersistedIgnores *, const char  *, int); /* linkage=_ZN17CPersistedIgnores17IsPersistedIgnoreEPKci */
	void SavePersistentIgnores(class CPersistedIgnores *); /* linkage=_ZN17CPersistedIgnores21SavePersistentIgnoresEv */
	void LoadPersistentIgnores(class CPersistedIgnores *); /* linkage=_ZN17CPersistedIgnores21LoadPersistentIgnoresEv */
	void CreatePersistedAssertDisable(class CPersistedIgnores *, const char  *, uint, uint); /* linkage=_ZN17CPersistedIgnores28CreatePersistedAssertDisableEPKcjj */
};

// <0002EE16> tier0/assert_dialog.cpp:391
// variable: 1
void CPersistedIgnores::CPersistedIgnores()
{
	{
		CPathBufferString persistentIgnoresFile; // 396
	}
} /* size: 0 */

// <0002EDEE> tier0/assert_dialog.cpp:391
// variable: 1
inline void CPersistedIgnores::CPersistedIgnores()
{
	{
		CPathBufferString persistentIgnoresFile; // 396
	}
} /* size: 0 */

// <0002EDC8> tier0/assert_dialog.cpp:406
inline void CPersistedIgnores::GetPersistentIgnoresFileName(CBufferString* pOut)
{
} /* size: 0 */

// <0002ED79> tier0/assert_dialog.cpp:424
// variables: 2
inline void CPersistedIgnores::IsPersistedIgnore(const char* pFilename, int iLine)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_426; // 426
	{
		Persistent_Ignored_Assertion_LL_t* pPersistentIterator; // 432
	}
} /* size: 0, variables: 1 */

// <0002E703> tier0/assert_dialog.cpp:450
// variables: 4
// function calls: 22
void CPersistedIgnores::SavePersistentIgnores()
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_452; // 452
	CPathBufferString persistentIgnoresFile; // 457
	{
		FILE* pFile; // 460
		{
			Persistent_Ignored_Assertion_LL_t* pPersistentIterator; // 465
		}
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 460
	}
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::InternalGetRawAutomaticReference(); // 497
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::GetRaw<>(); // 527
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::operator->(); // 452
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 452
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 457
	CPersistedIgnores::GetPersistentIgnoresFileName(
					CBufferString* pOut);  // 406
	CPersistedIgnores::GetPersistentIgnoresFileName(
					CBufferString* pOut);  // 458
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 475
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 475
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 475
} /* size: 526, variables: 2, inline expansions: 19 (789 bytes) */

// <0002DCAB> tier0/assert_dialog.cpp:477
// variables: 19
// function calls: 28
void CPersistedIgnores::LoadPersistentIgnores()
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_479; // 479
	uint64 nTimeStamp_Now; // 486
	Persistent_Ignored_Assertion_LL_t** pLLWrite; // 488
	bool bSaveImmediately; // 490
	CPathBufferString persistentIgnoresFile; // 492
	{
		FILE* pFile; // 501
		{
			size_t nFileSize; // 505
			{
				char* pFileContents; // 509
				{
					bool bFirstLine; // 514
					char* pStop; // 516
					char* pLineParser; // 517
					{
						char* pLineStart; // 521
						{
							uint nFileVersion; // 542
						}
						{
							char* pFieldParser; // 552
							char* pFieldStart; // 553
							uint64 nTimeStamp; // 570
							int nIgnoreSeconds; // 594
							int nFileLine; // 618
							Persistent_Ignored_Assertion_LL_t* pNewEntry; // 633
							V_strcpy_safe<4096>(char& pDest,
										const char* pSrc);  // 637
						}
					}
				}
			}
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 658
		}
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 501
	}
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::InternalGetRawAutomaticReference(); // 497
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::GetRaw<>(); // 527
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::operator->(); // 479
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 479
	CPersistedIgnores::GetPersistentIgnoresFileName(
					CBufferString* pOut);  // 406
	CPersistedIgnores::GetPersistentIgnoresFileName(
					CBufferString* pOut);  // 493
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 497
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 492
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 668
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 668
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 668
} /* size: 1619, variables: 5, inline expansions: 21 (863 bytes) */

// <0002DC1B> tier0/assert_dialog.cpp:670
// variables: 6
inline void CPersistedIgnores::CreatePersistedAssertDisable(const char* pFilename, uint nFileLine, uint nSeconds)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_672; // 672
	uint64 nTimeStamp_Now; // 675
	Persistent_Ignored_Assertion_LL_t* pPersistentIterator; // 677
	Persistent_Ignored_Assertion_LL_t* pNewEntry; // 705
	{
		uint64 nTargetEnd; // 685
		uint64 nEntryEnd; // 686
	}
} /* size: 0, variables: 4 */

// <0002DBA3> tier0/assert_dialog.cpp:724
// variables: 5
int GetAssertionIgnoredFlagsForFileLine(const char* pFilename, int iLine)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_726; // 726
	CAssertDisable** pPrev; // 728
	CAssertDisable* pNext; // 729
	{
		CAssertDisable* pCur; // 730
		{
			bool bAssertsEnabled; // 737
		}
	}
} /* size: 0, variables: 3 */

// <0002D7B3> tier0/assert_dialog.cpp:771
// variable: 1
// function calls: 11
CAssertDisable* CreateAssertDisable(AssertIgnoreInfo_t* pInfo, const char* pFilename)
{
	CAssertDisable* pDisable; // 778
	{
		RunInThreadMemory<CreateAssertDisable(AssertIgnoreInfo_t*, char const*)::<lambda()> >(class& runFunctor); // 775
	}
	V_strcpy_safe<512>(char& pDest,
				const char* pSrc);  // 791
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::InternalGetRawAutomaticReference(); // 497
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::GetRaw<>(); // 527
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::operator->(); // 795
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::InternalGetRawAutomaticReference(); // 497
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::GetRaw<>(); // 527
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::operator->(); // 796
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::InternalGetRawAutomaticReference(); // 497
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::GetRaw<>(); // 527
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::operator->(); // 784
} /* size: 420, variables: 1, inline expansions: 10 (521 bytes) */

// <0002D523> tier0/assert_dialog.cpp:801
// variable: 1
// function calls: 9
void IgnoreAssertsInCurrentFile(AssertIgnoreInfo_t* pInfo)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_803; // 803
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::InternalGetRawAutomaticReference(); // 497
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::GetRaw<>(); // 527
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::operator->(); // 803
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 803
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 805
} /* size: 175, variables: 1, inline expansions: 9 (414 bytes) */

// <0002CEBA> tier0/assert_dialog.cpp:807
// variables: 3
// function calls: 20
void IgnoreAssertForADay(AssertIgnoreInfo_t* pInfo)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_809; // 809
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::InternalGetRawAutomaticReference(); // 497
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::GetRaw<>(); // 527
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::operator->(); // 809
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 809
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::InternalGetRawAutomaticReference(); // 497
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::GetRaw<>(); // 527
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::operator->(); // 672
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 672
	{
		uint64 nTargetEnd; // 685
		uint64 nEntryEnd; // 686
	}
	V_strcpy_safe<4096>(char& pDest,
				const char* pSrc);  // 709
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 713
	CPersistedIgnores::CreatePersistedAssertDisable(
					const char* pFilename,
					uint nFileLine,
					uint nSeconds);  // 811
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 812
} /* size: 595, variables: 1, inline expansions: 20 (1318 bytes) */

// <0002CBEB> tier0/assert_dialog.cpp:814
// variables: 2
// function calls: 9
void IgnoreAssertsNearby(AssertIgnoreInfo_t* pInfo, int nRange, int nCount)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_816; // 816
	CAssertDisable* pDisable; // 817
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::InternalGetRawAutomaticReference(); // 497
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::GetRaw<>(); // 527
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::operator->(); // 816
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 816
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 824
} /* size: 243, variables: 2, inline expansions: 9 (468 bytes) */

// <0002CBBB> tier0/assert_dialog.cpp:826
void InitAssertIgnoreInfo(const DialogInitInfo_t* pInitInfo, AssertIgnoreInfo_t* pIgnoreInfo)
{
} /* size: 0 */

// <0002CB91> tier0/assert_dialog.cpp:834
// variable: 1
void IgnoreAssertsInCurrentFile(DialogInitInfo_t* pInitInfo)
{
	AssertIgnoreInfo_t ignoreInfo; // 836
} /* size: 0, variables: 1 */

// <0002CB67> tier0/assert_dialog.cpp:841
// variable: 1
void IgnoreAssertForADay(DialogInitInfo_t* pInitInfo)
{
	AssertIgnoreInfo_t ignoreInfo; // 843
} /* size: 0, variables: 1 */

// <0002CB23> tier0/assert_dialog.cpp:848
// variable: 1
void IgnoreAssertsNearby(DialogInitInfo_t* pInitInfo, int nRange, int nCount)
{
	AssertIgnoreInfo_t ignoreInfo; // 850
} /* size: 0, variables: 1 */

// <0002C74F> tier0/assert_dialog.cpp:1548
// variables: 4
// function calls: 12
uint32 GetAssertionResponseFlags(AssertionType_t type)
{
	uint32 nFlags; // 1550
	AssertionPrompt_t promptType; // 1567
	const char   __FUNCTION__; // 2450
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1576
	}
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::InternalGetRawAutomaticReference(); // 497
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::GetRaw<>(); // 527
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::operator->(); // 1574
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::InternalGetRawAutomaticReference(); // 497
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::GetRaw<>(); // 527
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::operator->(); // 1571
	Plat_IsInDebugSession(void); // 1590
	CapableOfDisplayingDialogs(void); // 1630
	Plat_IsInDebugSession(void); // 1633
	Plat_IsInDebugSession(void); // 1560
	Plat_IsInDebugSession(void); // 1610
	Plat_IsInDebugSession(void); // 1600
} /* size: 0, variables: 3, inline expansions: 12 (496 bytes) */

// <0002C4A5> tier0/assert_dialog.cpp:1646
// function calls: 12
void SetAssertionPrompt(AssertionType_t type, AssertionPrompt_t promptType)
{
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::InternalGetRawAutomaticReference(); // 497
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::GetRaw<>(); // 527
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::operator->(); // 1657
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::InternalGetRawAutomaticReference(); // 497
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::GetRaw<>(); // 527
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::operator->(); // 1658
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::InternalGetRawAutomaticReference(); // 497
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::GetRaw<>(); // 527
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::operator->(); // 1654
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::InternalGetRawAutomaticReference(); // 497
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::GetRaw<>(); // 527
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::operator->(); // 1651
} /* size: 284, inline expansions: 12 (639 bytes) */

// <0002BABD> tier0/assert_dialog.cpp:1663
// variable: 1
// function calls: 42
bool ProcessAssertDialogAction(DialogInitInfo_t& info)
{
	bool bBreak; // 1665
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::InternalGetRawAutomaticReference(); // 497
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::GetRaw<>(); // 527
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::operator->(); // 1720
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::InternalGetRawAutomaticReference(); // 497
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::GetRaw<>(); // 527
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::operator->(); // 1682
	InitAssertIgnoreInfo(const DialogInitInfo_t* pInitInfo,
				AssertIgnoreInfo_t* pIgnoreInfo);  // 851
	IgnoreAssertsNearby(DialogInitInfo_t* pInitInfo,
				int nRange,
				int nCount);  // 1713
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::InternalGetRawAutomaticReference(); // 497
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::GetRaw<>(); // 527
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::operator->(); // 1714
	InitAssertIgnoreInfo(const DialogInitInfo_t* pInitInfo,
				AssertIgnoreInfo_t* pIgnoreInfo);  // 837
	IgnoreAssertsInCurrentFile(DialogInitInfo_t* pInitInfo); // 1671
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::InternalGetRawAutomaticReference(); // 497
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::GetRaw<>(); // 527
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::operator->(); // 1672
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::InternalGetRawAutomaticReference(); // 497
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::GetRaw<>(); // 527
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::operator->(); // 1707
	CInterlockedIntT<int, 4>::operator|(
			int operand);  // 1707
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::InternalGetRawAutomaticReference(); // 497
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::GetRaw<>(); // 527
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::operator->(); // 1707
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 1707
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::InternalGetRawAutomaticReference(); // 497
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::GetRaw<>(); // 527
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::operator->(); // 1708
	InitAssertIgnoreInfo(const DialogInitInfo_t* pInitInfo,
				AssertIgnoreInfo_t* pIgnoreInfo);  // 851
	IgnoreAssertsNearby(DialogInitInfo_t* pInitInfo,
				int nRange,
				int nCount);  // 1686
	InitAssertIgnoreInfo(const DialogInitInfo_t* pInitInfo,
				AssertIgnoreInfo_t* pIgnoreInfo);  // 844
	IgnoreAssertForADay(DialogInitInfo_t* pInitInfo); // 1719
	InitAssertIgnoreInfo(const DialogInitInfo_t* pInitInfo,
				AssertIgnoreInfo_t* pIgnoreInfo);  // 844
	IgnoreAssertForADay(DialogInitInfo_t* pInitInfo); // 1743
	InitAssertIgnoreInfo(const DialogInitInfo_t* pInitInfo,
				AssertIgnoreInfo_t* pIgnoreInfo);  // 851
	IgnoreAssertsNearby(DialogInitInfo_t* pInitInfo,
				int nRange,
				int nCount);  // 1679
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::InternalGetRawAutomaticReference(); // 497
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::GetRaw<>(); // 527
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::operator->(); // 1680
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 1680
	Plat_IsInDebugSession(void); // 1699
} /* size: 990, variables: 1, inline expansions: 42 (1407 bytes) */

// <0002BA1E> tier0/assert_dialog.cpp:1769
bool CanDoSDLDialog(void)
{
} /* size: 91 */

// <0002B9AC> tier0/assert_dialog.cpp:1793
// variables: 4
bool DoSDLDialog(DialogInitInfo_t& info, SDL_MessageBoxData* pMessageBoxData)
{
	_BlockRequiresSDLMainThread_t blockRequiresSDLMainThread___LINE__; // 1800
	SDL_Window* pOldGrab; // 1806
	int nButtonId; // 1812
	int nRet; // 1813
} /* size: 0, variables: 4 */

// <0002B0A6> tier0/assert_dialog.cpp:1860
// variables: 9
// function calls: 27
bool DoAssertDialog(AssertionType_t type, const char* pFilename, int line, const char* pExpression)
{
	DialogInitInfo_t info; // 1873
	{
		SDL_MessageBoxData messageBoxData; // 1913
		const char* pDefaultAction; // 1915
		SDL_MessageBoxButtonData buttonData; // 1919
		CPathBufferString text; // 1929
		{
			bool bTruncated; // 1938
			const int  k_nMaxLength; // 1939
			int nNewLines; // 1946
			{
				const char* pParse; // 1947
			}
		}
		Plat_IsInDebugSession(void); // 1915
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 1929
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 798
		CBufferString::GetTailChar(); // 796
		CBufferString::GetTailChar(); // 1967
		V_isspace(int c); // 1967
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 1972
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1978
		CBufferString::Length(); // 983
		CBufferString::RemoveTail(
				int nChars);  // 1969
	}
	IsDebugBreakEnabled(void); // 1864
	DialogInitInfo_t::DialogInitInfo_t(); // 1873
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::InternalGetRawAutomaticReference(); // 497
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::GetRaw<>(); // 527
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::operator->(); // 1881
	Plat_IsInDebugSession(void); // 1896
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1902
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1998
	Plat_IsInDebugSession(void); // 1869
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 1906
	Plat_IsInDebugSession(void); // 2008
} /* size: 1224, variables: 1, inline expansions: 11 (339 bytes) */

// <0002AA96> tier0/assert_dialog.cpp:2022
// variables: 5
// function calls: 22
bool DoUndebuggableAssertDialog(AssertionType_t type, const char* pFilename, int line, const char* pExpression)
{
	DialogInitInfo_t info; // 2024
	{
		SDL_MessageBoxData messageBoxData; // 2045
		const char* pDefaultAction; // 2047
		SDL_MessageBoxButtonData buttonData; // 2051
		CPathBufferString text; // 2058
		Plat_IsInDebugSession(void); // 2047
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 2058
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 798
		CBufferString::GetTailChar(); // 796
		CBufferString::GetTailChar(); // 2060
		V_isspace(int c); // 2060
		CBufferString::Length(); // 983
		CBufferString::RemoveTail(
				int nChars);  // 2062
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 2065
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 2071
	}
	DialogInitInfo_t::DialogInitInfo_t(); // 2024
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::InternalGetRawAutomaticReference(); // 497
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::GetRaw<>(); // 527
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::operator->(); // 2032
	COrderedConstructor_DependencyManagement<void>::IsConstructed(); // 2073
	Plat_IsInDebugSession(void); // 2078
} /* size: 818, variables: 1, inline expansions: 6 (242 bytes) */

// <0002A3FA> tier0/assert_dialog.cpp:2082
// variables: 5
// function calls: 22
bool DoErrorDialog(const char* pFilename, int line, const char* pExpression)
{
	DialogInitInfo_t info; // 2090
	{
		SDL_MessageBoxData messageBoxData; // 2111
		const char* pDefaultAction; // 2112
		SDL_MessageBoxButtonData buttonData; // 2113
		CPathBufferString text; // 2119
		Plat_IsInDebugSession(void); // 2112
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 2119
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 798
		CBufferString::GetTailChar(); // 796
		CBufferString::GetTailChar(); // 2121
		V_isspace(int c); // 2121
		CBufferString::Length(); // 983
		CBufferString::RemoveTail(
				int nChars);  // 2123
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 2126
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 2132
	}
	DialogInitInfo_t::DialogInitInfo_t(); // 2090
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::InternalGetRawAutomaticReference(); // 497
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::GetRaw<>(); // 527
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::operator->(); // 2098
	Plat_IsInDebugSession(void); // 2135
	Plat_IsInDebugSession(void); // 2087
} /* size: 850, variables: 1, inline expansions: 6 (220 bytes) */

// <00024037> tier0/assert_dialog.cpp:2138
// member variables: 3
// struct size: 3
struct AssertMsg_ConditionFailed_Internal_Result_t {
	bool bBreak; /* 0 1 */
	bool bAbort; /* 1 1 */
	bool bIgnored; /* 2 1 */
};

// <0002A276> tier0/assert_dialog.cpp:2145
// variables: 17
AssertMsg_ConditionFailed_Internal_Result_t AssertMsg_ConditionFailed_Internal(LoggingChannelID_t nChannel, CAssertionState* pState, AssertionType_t type, AssertionFlags_t flags, const char* szFormattedMessage)
{
	COrderedReferenceScope generated_id_2147; // 2147
	const bool  bFatal; // 2148
	const bool  bAssertOnce; // 2149
	const bool  bUseDialog; // 2150
	AssertMsg_ConditionFailed_Internal_Result_t result; // 2154
	int nMessageChars; // 2161
	bool bMessageEndsWithNewLine; // 2162
	const char* pFileLineMessageFormat; // 2163
	uint32 nResponseFlags; // 2188
	int nIgnoreFlags; // 2209
	LoggingSeverity_t severity; // 2226
	LoggingResponse_t ret; // 2230
	const char   __FUNCTION__; // 57961
	bool bDialogBreak; // 2290
	{
		DialogInitInfo_t assertInfo; // 2245
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2288
	}
	{
		DialogResult_t nDialogResult; // 2299
	}
} /* size: 0, variables: 14 */

// <00029C2A> tier0/assert_dialog.cpp:2348
// variables: 3
// function calls: 19
CAssertionState* FindOrCreateAssertMsgState(void* pReturnAddress, const char* pFile, int nLine, const char* pFunction, const char* szExpression)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_2350; // 2350
	CAssertionState* pEntry; // 2362
	{
		CAssertionState* pHead; // 2354
		COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::GetRaw<>(); // 527
		COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::operator->(); // 2354
		CAssertionState::IsSameSource(
				const void* pReturnAddress,
				const char* szFile,
				int nLine,
				const char* szFunction,
				const char* szExpression);  // 192
		CAssertionState::IsSameSource(
				const void* pReturnAddress,
				const char* szFile,
				int nLine,
				const char* szFunction,
				const char* szExpression);  // 2356
	}
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::GetRaw<>(); // 527
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::operator->(); // 2350
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 2350
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::GetRaw<>(); // 527
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::operator->(); // 2352
	CAssertionState::CAssertionState(
			void* pReturnAddress,
			const char* szFile,
			int nLine,
			const char* szFunction,
			const char* szExpression);  // 2362
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::GetRaw<>(); // 527
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::operator->(); // 2363
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::GetRaw<>(); // 527
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::operator->(); // 2364
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 2367
} /* size: 345, variables: 2, inline expansions: 15 (343 bytes) */

// <00027778> tier0/assert_dialog.cpp:2372
// variables: 27
// function calls: 113
bool AssertMsg_ConditionFailed_State(CAssertionState* pState, LoggingChannelID_t* pChannel, AssertionType_t eType, AssertionFlags_t eFlags, const char* pFormat, va_list& args)
{
	ThreadId_t nThreadID; // 2392
	uint32 nQueueID; // 2405
	const char* pFunction; // 2407
	const char* pExpressionString; // 2408
	char message; // 2452
	int nCharCount; // 2455
	const char* pBaseMessage; // 2461
	AssertMsg_ConditionFailed_Internal_Result_t internalResult; // 2475
	bool bReturn; // 2498
	{
		RunInThreadMemory<AssertMsg_ConditionFailed_State(CAssertionState*, LoggingChannelID_t*, AssertionType_t, AssertionFlags_t, char const*, __va_list_tag (&)[1])::<lambda()> >(class& runFunctor); // 2383
	}
	{
		bool s_bIgnoreRecursionBreak; // 2397
		Plat_IsInDebugSession(void); // 2400
	}
	{
		const char* pSearch; // 2412
		{
			const char  szLambdaStart; // 2415
			const char  szLambdaEnd; // 2416
			int nFunctionLength; // 2418
			{
				const char* pFunctionEnd; // 2421
			}
		}
		{
			int nLength; // 2445
			char* pReplacementFunctionName; // 2446
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 2447
		}
	}
	{
		const bool  bFatal; // 2481
		AssertionFailureInfo_t failureInfo; // 2483
	}
	CInterlockedIntT<unsigned int, 4>::operator unsigned int(); // 71
	CInterlockedIntT<unsigned int, 4>::operator unsigned int(); // 72
	CInterlockedIntT<long long unsigned int, 8>::operator long long unsigned int(); // 74
	CMaximumWaitQueue::IsOwnedByThread(
			ThreadId_t nThreadID);  // 2395
	CCycleCount::Init(
		uint64 cycles);  // 238
	CCycleCount::CCycleCount(); // 63
	CFastTimer::CFastTimer(); // 79
	PLAT_CPU_TIME(void); // 263
	CCycleCount::Sample(); // 335
	CFastTimer::Start(); // 80
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 582
	CInterlockedIntT<unsigned int, 4>::operator++(
			int);  // 82
	CInterlockedIntT<unsigned int, 4>::operator unsigned int(); // 84
	{
		uint32 nAutoIncrement_ProcessingNumber; // 87
		uint64 nLastHeartBeat; // 88
		CFastTimer autoIncrementTimer; // 89
		CInterlockedIntT<unsigned int, 4>::operator unsigned int(); // 87
		CInterlockedIntT<long long unsigned int, 8>::operator long long unsigned int(); // 88
		CCycleCount::Init(
			uint64 cycles);  // 238
		CCycleCount::CCycleCount(); // 63
		CFastTimer::CFastTimer(); // 89
		PLAT_CPU_TIME(void); // 263
		CCycleCount::Sample(); // 335
		CFastTimer::Start(); // 90
		CInterlockedIntT<unsigned int, 4>::operator unsigned int(); // 106
		CInterlockedIntT<long long unsigned int, 8>::operator long long unsigned int(); // 107
		PLAT_CPU_TIME(void); // 263
		CCycleCount::Sample(); // 335
		CFastTimer::Start(); // 108
		CInterlockedIntT<unsigned int, 4>::operator unsigned int(); // 125
		ThreadPause(void); // 93
		CCycleCount::Init(
			uint64 cycles);  // 238
		CCycleCount::CCycleCount(); // 356
		PLAT_CPU_TIME(void); // 263
		CCycleCount::Sample(); // 357
		CCycleCount::Init(
			uint64 cycles);  // 238
		CCycleCount::CCycleCount(); // 359
		CFastTimer::GetDurationInProgress(); // 95
		Plat_TickDiffMilliSec(uint64 nStartTicks,
					uint64 nEndTicks,
					uint64 nFreq);  // 316
		CCycleCount::GetMilliseconds64(); // 95
		CInterlockedIntT<long long unsigned int, 8>::operator long long unsigned int(); // 103
		CInterlockedIntT<unsigned int, 4>::operator unsigned int(); // 104
		CCycleCount::Init(
			uint64 cycles);  // 238
		CCycleCount::CCycleCount(); // 356
		PLAT_CPU_TIME(void); // 263
		CCycleCount::Sample(); // 357
		CCycleCount::Init(
			uint64 cycles);  // 238
		CCycleCount::CCycleCount(); // 359
		CFastTimer::GetDurationInProgress(); // 111
		Plat_TickDiffMilliSec(uint64 nStartTicks,
					uint64 nEndTicks,
					uint64 nFreq);  // 316
		CCycleCount::GetMilliseconds64(); // 111
		ThreadInterlockedAssignIf(volatile int32* p,
						int32 value,
						int32 comparand);  // 597
		CInterlockedIntT<unsigned int, 4>::AssignIf(
			unsigned int conditionValue,
			unsigned int newValue);  // 114
	}
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 647
	CInterlockedIntT<long long unsigned int, 8>::operator=(
			long long unsigned int newValue);  // 128
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 647
	CInterlockedIntT<long long unsigned int, 8>::operator=(
			long long unsigned int newValue);  // 129
	CMaximumWaitQueue::Wait(
		ThreadId_t nThreadID,
		uint64 nIncrememntalWaitMS,
		uint64 nMaxWaitMS,
		void (*pFN_OncePerWaitCallback)(void *),
		void* pContext);  // 2405
	COrderedConstructor_DependencyManagement<CAssertGlobals>::ToGenericDependencyManagement(); // 988
	COrderedReferenceScope::COrderedReferenceScope<CAssertGlobals, COrderedResolve_NoResolve, true>(
										COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>& orderedType);  // 2147
	V_strlen(const char* str); // 2161
	COrderedConstructor_DependencyManagement<void>::IsConstructed(); // 2176
	FromGenericDependencyManagement(COrderedSystem_DependencyManagement* pFrom); // 1187
	StaticRelease(COrderedSystem_DependencyManagement* pThis); // 994
	COrderedReferenceScope::~COrderedReferenceScope(); // 2343
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::InternalGetRawAutomaticReference(); // 497
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::GetRaw<>(); // 527
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::operator->(); // 726
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 726
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::InternalGetRawAutomaticReference(); // 497
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::GetRaw<>(); // 527
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::operator->(); // 728
	{
		CAssertDisable* pCur; // 730
		COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::InternalGetRawAutomaticReference(); // 497
		COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::GetRaw<>(); // 527
		COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::operator->(); // 730
		{
			bool bAssertsEnabled; // 737
		}
	}
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 768
	GetAssertionIgnoredFlagsForFileLine(const char* pFilename,
						int iLine);  // 2212
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 2178
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::InternalGetRawAutomaticReference(); // 497
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::GetRaw<>(); // 527
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::operator->(); // 2209
	CInterlockedIntT<int, 4>::operator int(); // 2209
	COrderedConstructor_DependencyManagement<void>::IsConstructed(); // 2231
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::InternalGetRawAutomaticReference(); // 497
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::GetRaw<>(); // 527
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::operator->(); // 426
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 426
	{
		Persistent_Ignored_Assertion_LL_t* pPersistentIterator; // 432
	}
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 448
	CPersistedIgnores::IsPersistedIgnore(
				const char* pFilename,
				int iLine);  // 2242
	{
		DialogInitInfo_t assertInfo; // 2245
		DialogInitInfo_t::DialogInitInfo_t(); // 2245
		InitAssertIgnoreInfo(const DialogInitInfo_t* pInitInfo,
					AssertIgnoreInfo_t* pIgnoreInfo);  // 851
		IgnoreAssertsNearby(DialogInitInfo_t* pInitInfo,
					int nRange,
					int nCount);  // 2254
	}
	{
	}
	{
		DialogResult_t nDialogResult; // 2299
	}
	CapableOfDisplayingDialogs(void); // 2264
	Plat_IsInDebugSession(void); // 2271
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 2233
	AssertMsg_ConditionFailed_Internal(LoggingChannelID_t nChannel,
						CAssertionState* pState,
						AssertionType_t type,
						AssertionFlags_t flags,
						const char* szFormattedMessage);  // 2475
	ThreadInterlockedAssignIf(volatile int32* p,
					int32 value,
					int32 comparand);  // 597
	CInterlockedIntT<unsigned int, 4>::AssignIf(
		unsigned int conditionValue,
		unsigned int newValue);  // 136
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 600
	CInterlockedIntT<long long unsigned int, 8>::AssignIf(
		long long unsigned int conditionValue,
		long long unsigned int newValue);  // 138
	CMaximumWaitQueue::Release(
		ThreadId_t nThreadID,
		uint32 nQueueID);  // 2518
	Plat_IsInDebugSession(void); // 2500
} /* size: 0, variables: 9, inline expansions: 67 (5351 bytes) */

// <00027758> tier0/assert_dialog.cpp:2522
uint32 GetLineFromConstants(const _AssertCompileTimeConstantStruct_t& Constants)
{
} /* size: 0 */

// <00026E2C> tier0/assert_dialog.cpp:2679
// variable: 1
// function calls: 12
void AssertsMarkFrame(void)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_2681; // 2681
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::InternalGetRawAutomaticReference(); // 497
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::GetRaw<>(); // 527
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::operator->(); // 2681
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 2681
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::InternalGetRawAutomaticReference(); // 497
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::GetRaw<>(); // 527
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::operator->(); // 2682
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 2683
} /* size: 325, variables: 1, inline expansions: 12 (840 bytes) */

// <00026D67> tier0/assert_dialog.cpp:2685
// function calls: 3
int AssertsGetCount(void)
{
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::InternalGetRawAutomaticReference(); // 497
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::GetRaw<>(); // 527
	COrderedConstructor_Create<CAssertGlobals, COrderedResolve_NoResolve, true>::operator->(); // 2687
} /* size: 77, inline expansions: 3 (132 bytes) */

