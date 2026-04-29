
//
// engine2/engine2.cpp
//
//	referenced by: libengine2.so
//
//	functions: 60
//	class: 1
//	structs: 2
//

// <00141995> engine2/engine2.cpp:238
bool HasCommandLineRenderSystemOptionImpl(void)
{
} /* size: 0 */

// <00141469> engine2/engine2.cpp:246
// variables: 4
// function calls: 8
void vmem_dump(const CCommandContext& ctx, const CCommand& args)
{
	CVirtualMemorySnapshot* pReport; // 248
	CVirtualMemorySnapshot* pDiff; // 249
	CVirtualMemorySnapshot* pSnap; // 251
	{
		const CVirtualMemorySnapshot* pOld; // 271
		CVirtualMemorySnapshot::HasCapture(); // 276
	}
	CCommand::ArgC(); // 259
	CCommand::Arg(
		int nIndex);  // 189
	CCommand::operator[](
			int nIndex);  // 261
	V_strcmp(const char* s1,
		const char* s2);  // 261
	V_strcmp(const char* s1,
		const char* s2);  // 268
	V_strcmp(const char* s1,
		const char* s2);  // 269
	V_strcmp(const char* s1,
		const char* s2);  // 285
} /* size: 515, variables: 3, inline expansions: 7 (79 bytes) */

// <0014140E> engine2/engine2.cpp:309
void quit(const CCommandContext& ctx, const CCommand& args)
{
} /* size: 9 */

// <0015F237> engine2/engine2.cpp:317
// variables: 3
// function calls: 4
void crash(const CCommandContext& ctx, const CCommand& args)
{
	int crashtype; // 319
	int dummy; // 320
	CCommand::ArgC(); // 321
	CCommand::Arg(
		int nIndex);  // 189
	CCommand::operator[](
			int nIndex);  // 323
	{
		int* _pCrash; // 337
	}
	crash(const CCommandContext& ctx,
		const CCommand& args);  // 317
} /* size: 125, variables: 2, inline expansions: 4 (24 bytes) */

// <00141387> engine2/engine2.cpp:317
// variables: 6
void crash(const CCommandContext& ctx, const CCommand& args)
{
	int crashtype; // 319
	int dummy; // 320
	const char   __FUNCTION__; // 13190
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 334
	}
	{
		int* _pCrash; // 337
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 339
	}
} /* size: 0, variables: 3 */

// <00119E6C> engine2/engine2.cpp:348
// member variable: 1
// struct size: 4
struct CrashItem_t {
	int x; /* 0 4 */
};

// <00141359> engine2/engine2.cpp:353
// variable: 1
void ParallelCrash(CrashItem_t& item)
{
	{
		char* p; // 358
	}
} /* size: 0 */

// <00140F13> engine2/engine2.cpp:367
// variable: 1
// function calls: 15
void crash_job(const CCommandContext& ctx, const CCommand& args)
{
	CrashItem_t crashChances; // 369
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 811
	CInterlockedPtr<CrashItem_t>::CInterlockedPtr(); // 811
	CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1>::CParallelProcessor(
				const char* pszDescription);  // 955
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 800
	CInterlockedPtr<CrashItem_t>::operator=(
			CrashItem_t* newValue);  // 819
	CParallelProcessorAbstract_Base::CParallelProcessorAbstract_Base(
					IThreadPool* pThreadPool);  // 564
	IMultipleWorkerJob::IMultipleWorkerJob(); // 564
	CParallelProcessorAbstract<CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> >::CParallelProcessorAbstract(
					CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1>* pController,
					IThreadPool* pThreadPool);  // 825
	IMultipleWorkerJob::~IMultipleWorkerJob(); // 559
	CParallelProcessorAbstract<CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> >::~CParallelProcessorAbstract(); // 827
	CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1>::Run(
		CrashItem_t* pItems,
		unsigned int nItems,
		int nChunkSize,
		int nMaxParallel,
		IThreadPool* pThreadPool);  // 814
	CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1>::Run(
		CrashItem_t* pItems,
		unsigned int nItems,
		int nChunkSize,
		int nMaxParallel,
		IThreadPool* pThreadPool);  // 957
	CFuncJobItemProcessor<CrashItem_t>::Init(
		void (*pfnProcess)(CrashItem_t &),
		void (*pfnBegin)(void),
		void (*pfnEnd)(void));  // 956
	ParallelProcess<CrashItem_t>(const char* pszDescription,
					CrashItem_t* pItems,
					unsigned int nItems,
					void (*pfnProcess)(CrashItem_t &),
					void (*pfnBegin)(void),
					void (*pfnEnd)(void),
					int nMaxParallel);  // 370
} /* size: 295, variables: 1, inline expansions: 15 (891 bytes) */

// <00140EA9> engine2/engine2.cpp:374
// variable: 1
uintp CrashThreadProc(void* pParam)
{
	char* p; // 377
} /* size: 32, variables: 1 */

// <00140DB4> engine2/engine2.cpp:382
// function call: 1
void crash_thread(const CCommandContext& ctx, const CCommand& args)
{
	CreateSimpleThread(ThreadFunc_t pfnThread,
				void* pParam,
				unsigned int stackSize,
				const char* szName,
				size_t nDuplicateParamSize);  // 384
} /* size: 51, inline expansions: 1 (30 bytes) */

// <00140C97> engine2/engine2.cpp:388
// variables: 2
// function call: 1
void crash_error(const CCommandContext& ctx, const CCommand& args)
{
	const char   __FUNCTION__; // 13347
	{
		int* _pCrash; // 390
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 390
} /* size: 118, variables: 1, inline expansions: 1 (29 bytes) */

// <00140C03> engine2/engine2.cpp:393
void VerifyTest(bool bPass)
{
	{
	}
} /* size: 0 */

// <00140BC1> engine2/engine2.cpp:407
// variables: 2
void AssertTest(bool bPass)
{
	const char   __FUNCTION__; // 13320
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 409
	}
} /* size: 0, variables: 1 */

// <00140B7F> engine2/engine2.cpp:413
// variables: 2
void AssertMsgTest(bool bPass)
{
	const char   __FUNCTION__; // 13396
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 415
	}
} /* size: 0, variables: 1 */

// <00140B3D> engine2/engine2.cpp:419
// variables: 2
void AssertOnceTest(bool bPass)
{
	const char   __FUNCTION__; // 13423
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 421
	}
} /* size: 0, variables: 1 */

// <00140551> engine2/engine2.cpp:428
// variable: 1
// function calls: 6
void force_assert(const CCommandContext& ctx, const CCommand& args)
{
	bool bPass; // 431
	CCommand::ArgC(); // 431
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 395
	}
	VerifyTest(bool bPass); // 434
	{
	}
	AssertTest(bool bPass); // 437
	{
	}
	AssertMsgTest(bool bPass); // 440
	{
	}
	AssertOnceTest(bool bPass); // 443
} /* size: 0, variables: 1, inline expansions: 5 (605 bytes) */

// <001403C4> engine2/engine2.cpp:449
// variables: 2
// function calls: 2
void force_fatal_error(const CCommandContext& ctx, const CCommand& args)
{
	const char   __FUNCTION__; // 13504
	{
		int* _pCrash; // 452
	}
	CCommand::ArgC(); // 452
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 452
} /* size: 166, variables: 1, inline expansions: 2 (29 bytes) */

// <0015FB00> engine2/engine2.cpp:459
// variable: 1
// function call: 1
void force_hibernate(const CCommandContext& ctx, const CCommand& args)
{
	uint32 nHibernationState; // 461
	force_hibernate(const CCommandContext& ctx,
			const CCommand& args);  // 459
} /* size: 78, variables: 1, inline expansions: 1 (27 bytes) */

// <0014038D> engine2/engine2.cpp:459
// variable: 1
void force_hibernate(const CCommandContext& ctx, const CCommand& args)
{
	uint32 nHibernationState; // 461
} /* size: 0, variables: 1 */

// <0013FDF2> engine2/engine2.cpp:472
// function calls: 6
void console_test(const CCommandContext& ctx, const CCommand& args)
{
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 488
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 487
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 486
} /* size: 762, inline expansions: 6 (0 bytes) */

// <0013FDB7> engine2/engine2.cpp:492
bool SafeGetBoolFromKeyValues(KeyValues* pKeys, const char* pKeyName, bool bDefault)
{
} /* size: 0 */

// <0013FD7C> engine2/engine2.cpp:504
const char* SafeGetStringFromKeyValues(KeyValues* pKeys, const char* pKeyName, const char* pDefault)
{
} /* size: 0 */

// <0013FD41> engine2/engine2.cpp:516
int SafeGetIntFromKeyValues(KeyValues* pKeys, const char* pKeyName, int nDefault)
{
} /* size: 0 */

// <0013FB9C> engine2/engine2.cpp:528
// variables: 2
// function calls: 4
bool GetEngine2Bool(const char* pEngineKeyName, bool bDefault)
{
	KeyValues* pGameInfo; // 530
	KeyValues* pEngineKeys; // 531
	CAppSystemDict::GetGameInfo(); // 105
	CTier1Application::GetGameInfo(); // 530
	KeyValues::GetBool(
		const char* keyName,
		bool defaultValue);  // 496
	SafeGetBoolFromKeyValues(KeyValues* pKeys,
				const char* pKeyName,
				bool bDefault);  // 532
} /* size: 135, variables: 2, inline expansions: 4 (61 bytes) */

// <0013FA2C> engine2/engine2.cpp:535
// variables: 2
// function calls: 3
const char* GetEngine2String(const char* pEngineKeyName, const char* pDefault)
{
	KeyValues* pGameInfo; // 537
	KeyValues* pEngineKeys; // 538
	CAppSystemDict::GetGameInfo(); // 105
	CTier1Application::GetGameInfo(); // 537
	SafeGetStringFromKeyValues(KeyValues* pKeys,
					const char* pKeyName,
					const char* pDefault);  // 539
} /* size: 135, variables: 2, inline expansions: 3 (43 bytes) */

// <0013F8C6> engine2/engine2.cpp:542
// variables: 2
// function calls: 3
int GetEngine2Int(const char* pEngineKeyName, int nDefault)
{
	KeyValues* pGameInfo; // 544
	KeyValues* pEngineKeys; // 545
	CAppSystemDict::GetGameInfo(); // 105
	CTier1Application::GetGameInfo(); // 544
	SafeGetIntFromKeyValues(KeyValues* pKeys,
				const char* pKeyName,
				int nDefault);  // 546
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

// <0013F5F3> engine2/engine2.cpp:552
// variables: 4
// function calls: 4
void ComputeModPath(const char* pExePath, const char* pModName, char* pModPath, int nBufLen)
{
	char pAbsModPath; // 554
	{
		const char* pPath; // 566
		const char* pDot; // 570
		char pRelativeModPath; // 576
		strrchr(const char* __s,
			int __c);  // 570
		V_ComposeFileName<long unsigned int>(const char* path,
							const char* filename,
							char* dest,
							long unsigned int destSize);  // 577
		V_ComposeFileName<long unsigned int>(const char* path,
							const char* filename,
							char* dest,
							long unsigned int destSize);  // 578
	}
	V_FixupPathName<int>(char* pOut,
				int nOutLen,
				const char* pPath,
				bool bLowercaseName);  // 580
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <0013F583> engine2/engine2.cpp:591
void SteamWarningHook(int severity, const char* msg)
{
} /* size: 18 */

// <0013F555> engine2/engine2.cpp:600
// variable: 1
void InitSteamLogin(bool bIsDedicatedServer)
{
	char szAppId; // 602
} /* size: 0, variables: 1 */

// <0013F52F> engine2/engine2.cpp:640
bool InitSteam(bool bIsDedicatedServer)
{
} /* size: 0 */

// <0013F150> engine2/engine2.cpp:651
// variables: 6
// function calls: 4
void InitThreading(bool bInToolsMode)
{
	int nMainThreadPriority; // 653
	int nThreadCount; // 666
	const char* pThreadArgument; // 667
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 660
	}
	{
		ThreadPoolStartParams_t sparms; // 675
		int nDefExeStackSize; // 676
		int nExplicitStackSize; // 694
		ThreadPoolStartParams_t::ThreadPoolStartParams_t(
					unsigned int _nThreads,
					uint64* _pAffinities,
					ThreadPoolDistribute_t _fDistribute,
					unsigned int _nStackSize,
					int _iThreadPriority,
					ThreadAffinityPreference_t _affinityPref,
					ThreadAffinityPreferenceFlag_t _nAffinityPrefFlags);  // 675
	}
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 654
	atoi(const char* __nptr); // 670
} /* size: 0, variables: 3, inline expansions: 2 (41 bytes) */

// <0013EFCC> engine2/engine2.cpp:715
// variables: 23
bool Source2PreInit(CMaterialSystem2AppSystemDict& appDict, const char* pModName)
{
	CPathBufferString modNameBuf; // 732
	KeyValues* pGameInfo; // 743
	const char   __FUNCTION__; // 13423
	KeyValues* pEngineKeys; // 750
	char pPlatExtended; // 752
	const char* pPlatExtra; // 753
	RenderMultisampleType_t nInitialMultisampleType; // 818
	int nTemp; // 819
	const bool  bSkipSteam; // 884
	const char* pRequireCommandLine; // 912
	{
		const char* buffer; // 736
	}
	{
		int* _pCrash; // 746
	}
	{
		int nAllocWarnLimitMB; // 768
		int nAllocFailLimitMB; // 769
		int nReserveWarnLimitMB; // 770
	}
	{
		bool bDiscardMouseFocusClick; // 808
	}
	{
		KeyValues* pVideoKeys; // 824
		const char* szCoreDirectory; // 825
		CPathBufferString videoCfgPath; // 826
		CUtlBuffer buf; // 828
		{
			bool bSuccess; // 831
		}
	}
	{
		CFmtStr steamid; // 901
		const char* personaName; // 902
	}
} /* size: 0, variables: 10 */

// <0013D2DB> engine2/engine2.cpp:929
// variables: 5
// function calls: 112
bool LoadAppSystems(CMaterialSystem2AppSystemDict& appDict)
{
	CUtlVector<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> > appSystems; // 943
	const char   __FUNCTION__; // 13423
	{
		CRelativeTickTimer timer; // 980
		CRelativeTickCount::Init(); // 547
		CRelativeTickCount::CRelativeTickCount(); // 613
		CRelativeTickTimer::CRelativeTickTimer(); // 980
		CRelativeTickCount::Sample(); // 618
		CRelativeTickTimer::Start(); // 981
		CMaterialSystem2AppSystemDict::GetAppWindowSwapChain(); // 984
		CRelativeTickTimer::End(); // 986
		CRelativeTickCount::GetMillisecondsF(); // 987
	}
	{
		AppSystemInfo_t appSystemsTools; // 997
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 995
		}
		AppSystemInfo_t::AppSystemInfo_t(
				const char* pModuleName,
				const char* pInterfaceName);  // 1000
	}
	SteamUtils(void); // 936
	SteamUtils(void); // 936
	CFileSystemPassThru::SetContentCorruptionReportingEnabled(
						bool bEnabled);  // 215
	CFileSystemPassThru::SetContentCorruptionReportingEnabled(
						bool bEnabled);  // 215
	CFileSystemPassThru::SetContentCorruptionReportingEnabled(
						bool bEnabled);  // 215
	CFileSystemPassThru::SetContentCorruptionReportingEnabled(
						bool bEnabled);  // 215
	CFileSystemPassThru::SetContentCorruptionReportingEnabled(
						bool bEnabled);  // 215
	CFileSystemPassThru::SetContentCorruptionReportingEnabled(
						bool bEnabled);  // 215
	CFileSystemPassThru::SetContentCorruptionReportingEnabled(
						bool bEnabled);  // 215
	CFileSystemPassThru::SetContentCorruptionReportingEnabled(
						bool bEnabled);  // 215
	CFileSystemPassThru::SetContentCorruptionReportingEnabled(
						bool bEnabled);  // 938
	CUtlMemory<AppSystemInfo_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<AppSystemInfo_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::CUtlVector(); // 943
	AppSystemInfo_t::AppSystemInfo_t(
			const char* pModuleName,
			const char* pInterfaceName);  // 945
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::GrowMemory(
			int num);  // 1249
	Construct<AppSystemInfo_t, AppSystemInfo_t>(AppSystemInfo_t* pMemory); // 1252
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::AddToTail(
			AppSystemInfo_t& src);  // 945
	CUtlMemory<AppSystemInfo_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::Element(
		int i);  // 1252
	Construct<AppSystemInfo_t, AppSystemInfo_t>(AppSystemInfo_t* pMemory); // 1252
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::AddToTail(
			AppSystemInfo_t& src);  // 946
	AppSystemInfo_t::AppSystemInfo_t(
			const char* pModuleName,
			const char* pInterfaceName);  // 946
	Construct<AppSystemInfo_t, AppSystemInfo_t>(AppSystemInfo_t* pMemory); // 1252
	CUtlMemory<AppSystemInfo_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::Element(
		int i);  // 1252
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::AddToTail(
			AppSystemInfo_t& src);  // 947
	AppSystemInfo_t::AppSystemInfo_t(
			const char* pModuleName,
			const char* pInterfaceName);  // 947
	Construct<AppSystemInfo_t, AppSystemInfo_t>(AppSystemInfo_t* pMemory); // 1252
	CUtlMemory<AppSystemInfo_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::Element(
		int i);  // 1252
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::AddToTail(
			AppSystemInfo_t& src);  // 948
	AppSystemInfo_t::AppSystemInfo_t(
			const char* pModuleName,
			const char* pInterfaceName);  // 948
	CUtlMemory<AppSystemInfo_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::Element(
		int i);  // 1252
	Construct<AppSystemInfo_t, AppSystemInfo_t>(AppSystemInfo_t* pMemory); // 1252
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::AddToTail(
			AppSystemInfo_t& src);  // 949
	AppSystemInfo_t::AppSystemInfo_t(
			const char* pModuleName,
			const char* pInterfaceName);  // 949
	Construct<AppSystemInfo_t, AppSystemInfo_t>(AppSystemInfo_t* pMemory); // 1252
	CUtlMemory<AppSystemInfo_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::Element(
		int i);  // 1252
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::AddToTail(
			AppSystemInfo_t& src);  // 950
	AppSystemInfo_t::AppSystemInfo_t(
			const char* pModuleName,
			const char* pInterfaceName);  // 950
	Construct<AppSystemInfo_t, AppSystemInfo_t>(AppSystemInfo_t* pMemory); // 1252
	CUtlMemory<AppSystemInfo_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::Element(
		int i);  // 1252
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::AddToTail(
			AppSystemInfo_t& src);  // 951
	AppSystemInfo_t::AppSystemInfo_t(
			const char* pModuleName,
			const char* pInterfaceName);  // 951
	CAppSystemDict::IsDedicatedServer(); // 953
	CAppSystemDict::IsInToolsMode(); // 955
	AppSystemInfo_t::AppSystemInfo_t(
			const char* pModuleName,
			const char* pInterfaceName);  // 960
	CUtlMemory<AppSystemInfo_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::Element(
		int i);  // 1252
	Construct<AppSystemInfo_t, AppSystemInfo_t>(AppSystemInfo_t* pMemory); // 1252
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::AddToTail(
			AppSystemInfo_t& src);  // 960
	CUtlMemory<AppSystemInfo_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::Element(
		int i);  // 1252
	Construct<AppSystemInfo_t, AppSystemInfo_t>(AppSystemInfo_t* pMemory); // 1252
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::AddToTail(
			AppSystemInfo_t& src);  // 961
	AppSystemInfo_t::AppSystemInfo_t(
			const char* pModuleName,
			const char* pInterfaceName);  // 961
	CUtlMemory<AppSystemInfo_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::Element(
		int i);  // 1252
	Construct<AppSystemInfo_t, AppSystemInfo_t>(AppSystemInfo_t* pMemory); // 1252
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::AddToTail(
			AppSystemInfo_t& src);  // 962
	AppSystemInfo_t::AppSystemInfo_t(
			const char* pModuleName,
			const char* pInterfaceName);  // 962
	CUtlMemory<AppSystemInfo_t, int>::Purge(); // 903
	CUtlMemory<AppSystemInfo_t, int>::Purge(); // 1799
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::Purge(); // 560
	ValidateAlignment<AppSystemInfo_t>(void); // 508
	CUtlMemory<AppSystemInfo_t, int>::Purge(); // 510
	CUtlMemory<AppSystemInfo_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::~CUtlVector(); // 1020
	ResourceTypeName(void); // 683
	IResourceSystem::InstallNullTypeManager<500152889462>(); // 966
	CAppSystemDict::IsInToolsMode(); // 993
	AppSystemInfo_t::AppSystemInfo_t(
			const char* pModuleName,
			const char* pInterfaceName);  // 957
	CUtlMemory<AppSystemInfo_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::Element(
		int i);  // 1252
	Construct<AppSystemInfo_t, AppSystemInfo_t>(AppSystemInfo_t* pMemory); // 1252
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<AppSystemInfo_t, CUtlMemory<AppSystemInfo_t, int> >::AddToTail(
			AppSystemInfo_t& src);  // 957
} /* size: 2294, variables: 2, inline expansions: 103 (3645 bytes) */

// <0013C60B> engine2/engine2.cpp:1035
// variables: 3
// function calls: 46
void AddSpewRecord(const char* pMsg)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_1038; // 1038
	bool s_bReentrancyGuard; // 1040
	uint16 i; // 1061
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
			int nLineNumber);  // 1038
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 1066
	Count(const CUtlLinkedList<CUtlString, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtl this); // 1045
	ConVar::GetInt(); // 1045
	CBufferString::LengthAllocated(); // 1053
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 1059
	CUtlMemory<UtlLinkedListElem_t<CUtlString, short unsigned int>, short unsigned int>::IsIdxValid(
			short unsigned int i);  // 588
	CUtlMemory<UtlLinkedListElem_t<CUtlString, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 594
	IsValidIndex(const CUtlLinkedList<CUtlString, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtl this,
			short unsigned int i);  // 583
	CUtlMemory<UtlLinkedListElem_t<CUtlString, short unsigned int>, short unsigned int>::IsIdxAfter(
			short unsigned int i,
			const Iterator_t& it);  // 591
	IsValidIndex(const CUtlLinkedList<CUtlString, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtl this,
			short unsigned int i);  // 977
	{
	}
	CUtlMemory<UtlLinkedListElem_t<CUtlString, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 367
	InternalElement(const CUtlLinkedList<CUtlString, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlString this,
			short unsigned int i);  // 982
	CUtlMemory<UtlLinkedListElem_t<CUtlString, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 367
	InternalElement(const CUtlLinkedList<CUtlString, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlString this,
			short unsigned int i);  // 1011
	LinkBefore(const CUtlLinkedList<CUtlString, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlString this,
			short unsigned int before,
			short unsigned int elem);  // 771
	CUtlString::CUtlString(); // 1479
	Construct<CUtlString>(CUtlString* pMemory); // 774
	InsertBefore(const CUtlLinkedList<CUtlString, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlString this,
			short unsigned int before);  // 805
	AddToTail(const CUtlLinkedList<CUtlString, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlString this); // 1061
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 1062
	CUtlMemory<UtlLinkedListElem_t<CUtlString, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 494
	operator[](const CUtlLinkedList<CUtlString, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlString this,
			short unsigned int i);  // 1062
	CUtlString::operator=(
			const char* src);  // 1062
	Head(const CUtlLinkedList<CUtlString, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtl this); // 1047
	CUtlMemory<UtlLinkedListElem_t<CUtlString, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 594
	IsValidIndex(const CUtlLinkedList<CUtlString, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtl this,
			short unsigned int i);  // 583
	CUtlMemory<UtlLinkedListElem_t<CUtlString, short unsigned int>, short unsigned int>::IsIdxValid(
			short unsigned int i);  // 588
	CUtlMemory<UtlLinkedListElem_t<CUtlString, short unsigned int>, short unsigned int>::IsIdxAfter(
			short unsigned int i,
			const Iterator_t& it);  // 591
	IsValidIndex(const CUtlLinkedList<CUtlString, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtl this,
			short unsigned int i);  // 749
	{
	}
	CUtlMemory<UtlLinkedListElem_t<CUtlString, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 367
	InternalElement(const CUtlLinkedList<CUtlString, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlString this,
			short unsigned int i);  // 752
	CUtlString::~CUtlString(); // 1526
	Destruct<CUtlString>(CUtlString* pMemory); // 753
	Free(const CUtlLinkedList<CUtlString, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlString this,
		short unsigned int elem);  // 907
	Remove(const CUtlLinkedList<CUtlString, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlString this,
		short unsigned int elem);  // 1047
} /* size: 0, variables: 3, inline expansions: 46 (2049 bytes) */

// <0011C80F> engine2/engine2.cpp:1068
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 8
class CEngineConsoleLoggingListener : public ILoggingListener {
public:
	/* class ILoggingListener <ancestor>; */ /* 0 8 */
	void ~CEngineConsoleLoggingListener(CEngineConsoleLoggingListener* );
	void CEngineConsoleLoggingListener(CEngineConsoleLoggingListener* , CEngineConsoleLoggingListener& );
	void CEngineConsoleLoggingListener(CEngineConsoleLoggingListener* , const CEngineConsoleLoggingListener& );
	void CEngineConsoleLoggingListener(CEngineConsoleLoggingListener* );
	/* engine2/engine2.cpp:1089 */
	virtual void Log(CEngineConsoleLoggingListener* , const LoggingContext_t* , const tchar* );
	void ~CEngineConsoleLoggingListener(class CEngineConsoleLoggingListener *); /* linkage=_ZN29CEngineConsoleLoggingListenerD4Ev */
	void CEngineConsoleLoggingListener(class CEngineConsoleLoggingListener *, class CEngineConsoleLoggingListener &); /* linkage=_ZN29CEngineConsoleLoggingListenerC4EOS_ */
	void CEngineConsoleLoggingListener(class CEngineConsoleLoggingListener *, const class CEngineConsoleLoggingListener  &); /* linkage=_ZN29CEngineConsoleLoggingListenerC4ERKS_ */
	void CEngineConsoleLoggingListener(class CEngineConsoleLoggingListener *); /* linkage=_ZN29CEngineConsoleLoggingListenerC4Ev */
	/* <1646a9> engine2/engine2.cpp:1089 */
	virtual void Log(class CEngineConsoleLoggingListener *, const class LoggingContext_t  *, const tchar  *); /* linkage=_ZN29CEngineConsoleLoggingListener3LogEPK16LoggingContext_tPKc */
};

// <0013C5C1> engine2/engine2.cpp:1074
// variables: 2
void ManagedPrintEngineMessage(const LoggingContext_t* pContext, const tchar* pMessage)
{
	const char* channelName; // 1079
	{
		const LoggingChannel_t* pChan; // 1082
	}
} /* size: 0, variables: 1 */

// <001646A9> engine2/engine2.cpp:1089
// variable: 1
// function calls: 3
void CEngineConsoleLoggingListener::Log(const LoggingContext_t* pContext, const tchar* pMessage)
{
	{
		const LoggingChannel_t* pChan; // 1082
	}
	ManagedPrintEngineMessage(const LoggingContext_t* pContext,
					const tchar* pMessage);  // 1074
	ManagedPrintEngineMessage(const LoggingContext_t* pContext,
					const tchar* pMessage);  // 1106
	CEngineConsoleLoggingListener::Log(
		const LoggingContext_t* pContext,
		const tchar* pMessage);  // 1089
} /* size: 120, inline expansions: 3 (197 bytes) */

// <0013C58E> engine2/engine2.cpp:1089
void CEngineConsoleLoggingListener::Log(const LoggingContext_t* pContext, const tchar* pMessage)
{
} /* size: 0 */

// <0013C57E> engine2/engine2.cpp:1113
void InitSource2Logging(void)
{
} /* size: 0 */

// <0013C56E> engine2/engine2.cpp:1119
void ShutdownSource2Logging(void)
{
} /* size: 0 */

// <0013C55E> engine2/engine2.cpp:1126
void ShutdownThreading(void)
{
} /* size: 0 */

// <0013BC2A> engine2/engine2.cpp:1136
// variables: 7
// function calls: 35
bool FindAndLoadAssetInPrimaryTool(const char* pAssetFileName)
{
	IAsset* pAsset; // 1144
	const char* pExtension; // 1166
	IAssetType* pAssetType; // 1167
	{
		EngineToolID_t id; // 1170
		IToolSystem2* pTool; // 1171
		{
			CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > files; // 1174
			CUtlString::CUtlString(
					const char* pString);  // 1175
			CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
			CUtlMemory<CUtlString, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 1174
			CUtlMemory<CUtlString, int>::NumAllocated(); // 1247
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
				int i);  // 1252
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 1514
			Construct<CUtlString, CUtlString>(CUtlString* pMemory); // 1252
			CUtlMemory<CUtlString, int>::Base(); // 112
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
					CUtlString& src);  // 1175
			CUtlString::~CUtlString(); // 1175
			{
				int i; // 1721
				CUtlMemory<CUtlString, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
					int i);  // 1723
				CUtlString::~CUtlString(); // 1526
				Destruct<CUtlString>(CUtlString* pMemory); // 1723
			}
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
			CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CUtlString, int>::Purge(); // 903
			CUtlMemory<CUtlString, int>::Purge(); // 1799
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
			ValidateAlignment<CUtlString>(void); // 508
			CUtlMemory<CUtlString, int>::Purge(); // 510
			CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
			CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 1178
		}
	}
	CUtlTypesafeInt<EngineToolID_t_id::CUtlTypesafeInt(
			unsigned char nVal);  // 1153
	CUtlString::CUtlString(
			const char* pString);  // 1167
	CUtlString::~CUtlString(); // 1167
} /* size: 658, variables: 3, inline expansions: 3 (41 bytes) */

// <0013BB4B> engine2/engine2.cpp:1184
// function calls: 2
void CC_Open_Asset(const CCommandContext& ctx, const CCommand& args)
{
	CCommand::Arg(
		int nIndex);  // 189
	CCommand::operator[](
			int nIndex);  // 1186
} /* size: 28, inline expansions: 2 (38 bytes) */

// <0013B7EE> engine2/engine2.cpp:1193
// variables: 2
// function calls: 6
void CC_DisablePriorityBoost(const CCommandContext& ctx, const CCommand& args)
{
	ProcessHandle_t hProcess; // 1195
	bool bIsPriorityBoostDisabled; // 1197
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1209
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1213
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1201
} /* size: 191, variables: 2, inline expansions: 6 (0 bytes) */

// <0013B48D> engine2/engine2.cpp:1221
// variables: 2
// function calls: 6
void CC_EnablePriorityBoost(const CCommandContext& ctx, const CCommand& args)
{
	ProcessHandle_t hProcess; // 1224
	bool bIsPriorityBoostDisabled; // 1225
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1243
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1238
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1234
} /* size: 192, variables: 2, inline expansions: 6 (0 bytes) */

// <0013B2FB> engine2/engine2.cpp:1252
// variable: 1
void InitializeProcessPriority(void)
{
	{
		bool bDisablePriortyBoost; // 1277
	}
} /* size: 246 */

// <0013B2DA> engine2/engine2.cpp:1288
// variable: 1
bool InstallUrlHandler(void)
{
	const char* pURLName; // 1290
} /* size: 0, variables: 1 */

// <0013A36C> engine2/engine2.cpp:1304
// variables: 5
// function calls: 62
bool Source2Init(CMaterialSystem2AppSystemDict& appDict)
{
	EventProfileStorageAvailable_t eventMsg; // 1312
	{
		KeyValues* pInitKeys; // 1317
	}
	InstallUrlHandler(void); // 1308
	CUtlMemory<int, int>::CUtlMemory(
			int* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<int, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<int, int>::CUtlMemoryFixedGrowable_Base(
					int* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<4, int, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<4, int>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<4, int, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<int, 4, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<int, 4>::CUtlVectorFixedGrowable(
				int growSize);  // 79
	DelegateIterator_Base_t::DelegateIterator_Base_t(); // 106
	DelegateIterator_t::DelegateIterator_t(); // 773
	GetDefaultReturnValue(void); // 155
	CEventDispatcher_WrappedReturnType(const CEventDispatcher_WrappedReturnType<CEventIDManager_SchemaBinding::EventDescription<EventProfileStorageAvailable_t>, this); // 772
	{
		CUtlDelegate<void()> delegate; // 776
		{
			const EventListenerInfo_t* pListener; // 777
			FastDelegate0<void>::operator()(const FastDelegate0<void>* this); // 784
			FastDelegate1<const EventProfileStorageAvailable_t&, void>::operator(
					const EventProfileStorageAvailable_t& p1);  // 785
			{
				bool bContinue; // 791
				FastDelegate0<bool>::operator()(const FastDelegate0<bool>* this); // 794
				MergeReturnValueAndContinueIterating(ReturnType_t& dest,
									const ReturnType_t& other);  // 164
				MergeReturnValueAndContinueIterating(const CEventDispatcher_WrappedReturnType<CEventIDManager_SchemaBinding::EventDescription<EventProfileStorageAvailable_t>, this,
									const ReturnType_t& other);  // 794
				FastDelegate1<const EventProfileStorageAvailable_t&, bool>::operator(
						const EventProfileStorageAvailable_t& p1);  // 795
				MergeReturnValueAndContinueIterating(ReturnType_t& dest,
									const ReturnType_t& other);  // 164
				MergeReturnValueAndContinueIterating(const CEventDispatcher_WrappedReturnType<CEventIDManager_SchemaBinding::EventDescription<EventProfileStorageAvailable_t>, this,
									const ReturnType_t& other);  // 795
				{
				}
			}
			CUtlAbstractDelegate::SetMementoFrom(
					const CUtlAbstractDelegate& right);  // 843
			ClosurePtr<void (detail::GenericClass::::CopyFrom<FastDelegate0<void> >(
							FastDelegate0<void>* pParent,
							const CUtlAbstractDelegate& right);  // 1058
			FastDelegate0<void>::SetAbstractDelegate(
						const CUtlAbstractDelegate& any);  // 779
		}
		CUtlAbstractDelegate::CUtlAbstractDelegate(); // 734
		ClosurePtr<void (detail::GenericClass::::ClosurePtr()(), void (*)(), void (*)()>* this); // 957
		FastDelegate0<void>::Clear(); // 957
		FastDelegate0<void>::FastDelegate0(); // 2120
		CUtlDelegate<void()>::CUtlDelegate()>* this); // 776
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 1263
		CEventDispatcher_Identified<CEventIDManager_Default>::IterateListeners_End(
					DelegateIterator_t& iterationStruct);  // 806
	}
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 577
	CUtlMemory<int, int>::ConvertToExternalMemory(
				int* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<int, int>::Purge_FixedGrowable(
				int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<int, int>::Purge_FixedGrowable(
				int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<4, int, 4>::Base(); // 237
	CUtlMemoryFixedGrowable<int, 4, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::Base(); // 368
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<int, 4, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<int, 4>::~CUtlVectorFixedGrowable(); // 79
	DelegateIterator_Base_t::~DelegateIterator_Base_t(); // 106
	DelegateIterator_t::~DelegateIterator_t(); // 809
	{
		CUtlDelegate<void()> delegate; // 776
		{
			const EventListenerInfo_t* pListener; // 777
			{
			}
		}
	}
	CEvent_Dispatch<CEventIDManager_Default, EventProfileStorageAvailable_t, 1>::DispatchEvent(
			Param1Type_t param1,
			bool bIterateForward,
			EventID_t EventID);  // 768
	CEvent_Dispatch<CEventIDManager_Default, EventProfileStorageAvailable_t, 1>::DispatchEvent(
			Param1Type_t param1,
			bool bIterateForward,
			EventID_t EventID);  // 1313
	GetPrimaryBinding(void); // 57
	Schema_StaticBinding(void); // 237
	GetEventID(void); // 1313
} /* size: 0, variables: 1, inline expansions: 41 (1469 bytes) */

// <0013A1F5> engine2/engine2.cpp:1332
// function calls: 3
void Source2Shutdown(void)
{
	ShutdownSource2Logging(void); // 1336
	ShutdownThreading(void); // 1126
	ShutdownThreading(void); // 1337
} /* size: 191, inline expansions: 3 (130 bytes) */

// <0013995A> engine2/engine2.cpp:1347
// variables: 10
// function calls: 29
void CheckMinimumPhysicalMemoryMB(void)
{
	KeyValues* pGameInfo; // 1349
	KeyValues* pEngineKeys; // 1350
	int nMinimumPhysicalMemoryMB; // 1356
	OsMemoryStatus_t memStatus; // 1362
	const uint32  nMB; // 1369
	CBufferStringN<20> actualStr; // 1385
	CBufferStringN<20> minStr; // 1395
	{
		CBufferStringN<100> failStr; // 1407
		const char* pTitle; // 1408
		const char* pBody; // 1409
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<100>::CBufferStringN(); // 1407
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 1409
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 1409
		CBufferString::~CBufferString(); // 587
		CBufferStringN<100>::~CBufferStringN(); // 1411
	}
	CAppSystemDict::GetGameInfo(); // 105
	CTier1Application::GetGameInfo(); // 1349
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<20>::CBufferStringN(); // 1385
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<20>::CBufferStringN(); // 1395
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 1414
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 1414
	CBufferString::~CBufferString(); // 587
	CBufferStringN<20>::~CBufferStringN(); // 1428
	CBufferString::~CBufferString(); // 587
	CBufferStringN<20>::~CBufferStringN(); // 1428
} /* size: 1038, variables: 7, inline expansions: 18 (485 bytes) */

// <0011D38E> engine2/engine2.cpp:1470
// member variables: 2
// struct size: 16
struct StackStats_Dump_EnumInstances_Context_t {
	const char * partial; /* 0 8 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > * pCommands; /* 8 8 */
};

// <00139234> engine2/engine2.cpp:1476
// variables: 3
// function calls: 34
bool StackStats_Dump_EnumInstances_Callback(CCallStackStatsGatherer_Base* pInstance, const char* szRegistrationName, void* pContext)
{
	StackStats_Dump_EnumInstances_Context_t* pCastContext; // 1478
	{
		CFmtStrN<2048> formattedString; // 1482
		{
			int i; // 1487
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 1487
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 80
			CFmtStrN<2048>::Get(); // 1489
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
				int i);  // 1489
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 1489
			V_strcmp(const char* s1,
				const char* s2);  // 1489
		}
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<2048>::CBufferStringN(); // 29
		CFmtStrN<2048>::CFmtStrN(); // 1482
		CUtlMemory<CUtlString, int>::NumAllocated(); // 1143
		CUtlString::CUtlString(); // 1479
		Construct<CUtlString>(CUtlString* pMemory); // 1148
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1148
		CUtlMemory<CUtlString, int>::Base(); // 112
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
				int num);  // 1145
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(); // 1156
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1156
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTailGetPtr(); // 1496
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 80
		CFmtStrN<2048>::Get(); // 1496
		CBufferString::~CBufferString(); // 587
		CBufferStringN<2048>::~CBufferStringN(); // 41
		CFmtStrN<2048>::~CFmtStrN(); // 1497
	}
} /* size: 537, variables: 1 */

// <0015F630> engine2/engine2.cpp:1502
// variable: 1
// function calls: 3
void StackStats_Dump_Completion(const char* partial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
	StackStats_Dump_EnumInstances_Context_t context; // 1509
	{
		V_strnicmp_fast<int>(const char* s1,
					const char* s2,
					int n);  // 1504
	}
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 1504
	}
	StackStats_Dump_Completion(const char* partial,
					CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands);  // 1502
} /* size: 0, variables: 1, inline expansions: 1 (19 bytes) */

// <00139186> engine2/engine2.cpp:1502
// variable: 1
void StackStats_Dump_Completion(const char* partial, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& commands)
{
	StackStats_Dump_EnumInstances_Context_t context; // 1509
	{
	}
} /* size: 0, variables: 1 */

// <00138C4F> engine2/engine2.cpp:1513
// variables: 4
// function calls: 15
void StackStats_Dump(const CCommandContext& ctx, const CCommand& args)
{
	const char* szStruct; // 1515
	const char* szFileName; // 1526
	char szAbsolutePathScratch; // 1536
	CFmtStrN<1024> extensionScratch; // 1545
	CCommand::ArgC(); // 1516
	CCommand::Arg(
		int nIndex);  // 1518
	CCommand::Arg(
		int nIndex);  // 1529
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<1024>::CBufferStringN(); // 29
	CFmtStrN<1024>::CFmtStrN(); // 1545
	CBufferString::~CBufferString(); // 587
	CBufferStringN<1024>::~CBufferStringN(); // 41
	CFmtStrN<1024>::~CFmtStrN(); // 1560
	V_MakeAbsolutePath<long unsigned int>(char* pOut,
						long unsigned int outLen,
						const char* pPath,
						const char* pStartingDir,
						bool bLowercaseName);  // 1539
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 803
	CBufferString::Access(); // 84
	CFmtStrN<1024>::Access(); // 1549
} /* size: 529, variables: 4, inline expansions: 15 (379 bytes) */

// <00138BBC> engine2/engine2.cpp:1563
// variables: 2
void test_assert(const CCommandContext& ctx, const CCommand& args)
{
	const char   __FUNCTION__; // 13347
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1565
	}
} /* size: 27, variables: 1 */

// <00138B29> engine2/engine2.cpp:1568
// variables: 2
void test_fatal_assert(const CCommandContext& ctx, const CCommand& args)
{
	const char   __FUNCTION__; // 13504
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1570
	}
} /* size: 27, variables: 1 */

// <00138AC8> engine2/engine2.cpp:1575
void Managed_ExitProcessHandler(int nCode)
{
} /* size: 44 */

// <001389AD> engine2/engine2.cpp:1583
// function calls: 2
bool SourceEngineUnitTestInit(void)
{
	TestForBreakImmediatelyInDebugger(void); // 1586
	InitSteam(bool bIsDedicatedServer); // 1588
} /* size: 108, inline expansions: 2 (71 bytes) */

// <00137D1D> engine2/engine2.cpp:1593
// variables: 10
// function calls: 28
bool SourceEnginePreInit(const char* lpCmdLine, CMaterialSystem2AppSystemDict* appDict)
{
	rlimit fdOrigLimit; // 1640
	const rlim_t  nDesiredLimit; // 1641
	rlimit fdCurLimit; // 1649
	const bool  bUseABTesting; // 1678
	CPathBufferString gamePath; // 1712
	{
		rlimit fdChangeLimit; // 1644
	}
	{
		const char* pEnglishUSLocale; // 1665
		const char* pCurrentLocale; // 1670
	}
	{
		CUniformRandomStream abTestStream; // 1681
		const bool  bIsTestSubject; // 1683
	}
	TestForBreakImmediatelyInDebugger(void); // 1600
	CAppSystemDict::IsInToolsMode(); // 1605
	CAppSystemDict::IsDedicatedServer(); // 1606
	CAppSystemDict::IsInToolsMode(); // 1616
	CAppSystemDict::IsDedicatedServer(); // 1620
	CAppSystemDict::IsDedicatedServer(); // 1631
	CAppSystemDict::IsConsoleApp(); // 717
	CAppSystemDict::IsInTestMode(); // 718
	Source2PreInit(CMaterialSystem2AppSystemDict& appDict,
			const char* pModName);  // 1688
	CTier2AppSystemDict::SuppressStartupManifestLoad(
					bool bEnable);  // 1693
	CAppSystemDict::SuppressCOMInitialization(); // 1696
	CAppSystemDict::IsConsoleApp(); // 1704
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 1712
	IFileSystem::GetSearchPath(
			const char* pathID,
			CBufferString* pPath,
			int nMaxElements);  // 1713
	CAppSystemDict::IsInToolsMode(); // 1714
	CFileSystemPassThru::ResetProjectPaths(
				bool includeCloudAssets);  // 222
	CFileSystemPassThru::ResetProjectPaths(
				bool includeCloudAssets);  // 222
	CFileSystemPassThru::ResetProjectPaths(
				bool includeCloudAssets);  // 222
	CFileSystemPassThru::ResetProjectPaths(
				bool includeCloudAssets);  // 222
	CFileSystemPassThru::ResetProjectPaths(
				bool includeCloudAssets);  // 222
	CFileSystemPassThru::ResetProjectPaths(
				bool includeCloudAssets);  // 222
	CFileSystemPassThru::ResetProjectPaths(
				bool includeCloudAssets);  // 222
	CFileSystemPassThru::ResetProjectPaths(
				bool includeCloudAssets);  // 222
	CFileSystemPassThru::ResetProjectPaths(
				bool includeCloudAssets);  // 1714
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1724
} /* size: 1493, variables: 5, inline expansions: 28 (1483 bytes) */

// <0013727A> engine2/engine2.cpp:1726
// variables: 7
// function calls: 32
bool SourceEngineInit(CMaterialSystem2AppSystemDict* appDict)
{
	{
		int nChannelCount; // 1784
		{
			int i; // 1785
			{
				const LoggingChannel_t* pChannel; // 1787
			}
		}
	}
	{
		uint64 totalMemory; // 1793
		const CPUInformation& cpui; // 1799
		{
			OsMemoryStatus_t memStatus; // 1794
		}
	}
	{
		const RenderAdapterInfo_t& info; // 1806
	}
	CMaterialSystem2AppSystemDict::HasCommandLineRenderSystemOption(); // 1728
	CAppSystemDict::IsInToolsMode(); // 1736
	CAppSystemDict::IsInDeveloperMode(); // 115
	CTier1Application::IsInDeveloperMode(); // 1736
	CFileSystemPassThru::SetContentCorruptionReportingEnabled(
						bool bEnabled);  // 215
	CFileSystemPassThru::SetContentCorruptionReportingEnabled(
						bool bEnabled);  // 215
	CFileSystemPassThru::SetContentCorruptionReportingEnabled(
						bool bEnabled);  // 215
	CFileSystemPassThru::SetContentCorruptionReportingEnabled(
						bool bEnabled);  // 215
	CFileSystemPassThru::SetContentCorruptionReportingEnabled(
						bool bEnabled);  // 215
	CFileSystemPassThru::SetContentCorruptionReportingEnabled(
						bool bEnabled);  // 215
	CFileSystemPassThru::SetContentCorruptionReportingEnabled(
						bool bEnabled);  // 215
	CFileSystemPassThru::SetContentCorruptionReportingEnabled(
						bool bEnabled);  // 215
	CFileSystemPassThru::SetContentCorruptionReportingEnabled(
						bool bEnabled);  // 215
	CFileSystemPassThru::SetContentCorruptionReportingEnabled(
						bool bEnabled);  // 215
	CFileSystemPassThru::SetContentCorruptionReportingEnabled(
						bool bEnabled);  // 1747
	CFileSystemPassThru::SetContentCorruptionReportingEnabled(
						bool bEnabled);  // 215
	CFileSystemPassThru::SetContentCorruptionReportingEnabled(
						bool bEnabled);  // 215
	CFileSystemPassThru::SetContentCorruptionReportingEnabled(
						bool bEnabled);  // 215
	CFileSystemPassThru::SetContentCorruptionReportingEnabled(
						bool bEnabled);  // 215
	CFileSystemPassThru::SetContentCorruptionReportingEnabled(
						bool bEnabled);  // 215
	CFileSystemPassThru::SetContentCorruptionReportingEnabled(
						bool bEnabled);  // 215
	CFileSystemPassThru::SetContentCorruptionReportingEnabled(
						bool bEnabled);  // 215
	CFileSystemPassThru::SetContentCorruptionReportingEnabled(
						bool bEnabled);  // 215
	CFileSystemPassThru::SetContentCorruptionReportingEnabled(
						bool bEnabled);  // 215
	CFileSystemPassThru::SetContentCorruptionReportingEnabled(
						bool bEnabled);  // 1738
	{
	}
	CAppSystemDict::IsInToolsMode(); // 565
	CAppSystemDict::IsConsoleApp(); // 566
	CTier2AppSystemDict::LoadStartupManifest(); // 502
	CTier2AppSystemDict::SuppressStartupManifestLoad(
					bool bEnable);  // 488
	CTier2AppSystemDict::SuppressStartupManifestLoad(
					bool bEnable);  // 1777
	CAppSystemDict::IsConsoleApp(); // 1804
	CAppSystemDict::IsInToolsMode(); // 1811
} /* size: 0, inline expansions: 32 (3418 bytes) */

// <001370B0> engine2/engine2.cpp:1821
// variables: 2
// function calls: 3
bool SourceEngineFrame(CMaterialSystem2AppSystemDict* appDict, double currentTime, double prevTime)
{
	{
		Scope scope; // 1829
		MainLoopResult_t res; // 1835
		Scope::Scope(
			const char* name,
			const char* data,
			uint32 color);  // 1829
		Scope::~Scope(); // 1840
		Scope::~Scope(); // 1840
	}
} /* size: 105 */

// <00136117> engine2/engine2.cpp:1852
// variables: 4
// function calls: 62
void SourceEngineShutdown(CMaterialSystem2AppSystemDict* appDict, bool forced)
{
	{
		EventAppShutdown_t shutdownMsg; // 1879
		EventAppShutdown_t::EventAppShutdown_t(); // 1879
		CUtlMemory<int, int>::CUtlMemory(
				int* pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 197
		CUtlMemory<int, int>::EnsureCapacity(
				int num);  // 199
		CUtlMemoryFixedGrowable_Base<int, int>::CUtlMemoryFixedGrowable_Base(
						int* pFixedMemory,
						int nFixedElements,
						int nGrowSize,
						int nInitAllocationCount);  // 228
		AlignedByteArrayExplicit_t<4, int, 4>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<4, int>::AlignedByteArray_t(); // 228
		AlignedByteArrayExplicit_t<4, int, 4>::Base(); // 231
		CUtlMemoryFixedGrowable<int, 4, int>::CUtlMemoryFixedGrowable(
					int nGrowSize,
					int nInitSize);  // 527
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 484
		CUtlVectorFixedGrowable<int, 4>::CUtlVectorFixedGrowable(
					int growSize);  // 79
		DelegateIterator_Base_t::DelegateIterator_Base_t(); // 106
		DelegateIterator_t::DelegateIterator_t(); // 773
		GetDefaultReturnValue(void); // 155
		CEventDispatcher_WrappedReturnType<CEventIDManager_SchemaBinding::EventDescription<EventAppShutdown_t>, bool>::CEventDispatcher_WrappedReturnType(); // 772
		{
			CUtlDelegate<void()> delegate; // 776
			CUtlAbstractDelegate::CUtlAbstractDelegate(); // 734
			ClosurePtr<void (detail::GenericClass::::ClosurePtr()(), void (*)(), void (*)()>* this); // 957
			FastDelegate0<void>::Clear(); // 957
			FastDelegate0<void>::FastDelegate0(); // 2120
			CUtlDelegate<void()>::CUtlDelegate()>* this); // 776
			{
				const EventListenerInfo_t* pListener; // 777
				CUtlAbstractDelegate::SetMementoFrom(
						const CUtlAbstractDelegate& right);  // 843
				ClosurePtr<void (detail::GenericClass::::CopyFrom<FastDelegate0<void> >(
								FastDelegate0<void>* pParent,
								const CUtlAbstractDelegate& right);  // 1058
				FastDelegate0<void>::SetAbstractDelegate(
							const CUtlAbstractDelegate& any);  // 779
				FastDelegate0<void>::operator()(const FastDelegate0<void>* this); // 784
				FastDelegate1<const EventAppShutdown_t&, void>::operator(
						const EventAppShutdown_t& p1);  // 785
				{
					bool bContinue; // 791
					FastDelegate0<bool>::operator()(const FastDelegate0<bool>* this); // 794
					MergeReturnValueAndContinueIterating(ReturnType_t& dest,
										const ReturnType_t& other);  // 164
					CEventDispatcher_WrappedReturnType<CEventIDManager_SchemaBinding::EventDescription<EventAppShutdown_t>, bool>::MergeReturnValueAndContinueIterating(
										const ReturnType_t& other);  // 794
					FastDelegate1<const EventAppShutdown_t&, bool>::operator(
							const EventAppShutdown_t& p1);  // 795
					MergeReturnValueAndContinueIterating(ReturnType_t& dest,
										const ReturnType_t& other);  // 164
					CEventDispatcher_WrappedReturnType<CEventIDManager_SchemaBinding::EventDescription<EventAppShutdown_t>, bool>::MergeReturnValueAndContinueIterating(
										const ReturnType_t& other);  // 795
					{
					}
				}
			}
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 1263
			CEventDispatcher_Identified<CEventIDManager_Default>::IterateListeners_End(
						DelegateIterator_t& iterationStruct);  // 806
		}
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::RemoveAll(); // 1798
		CUtlMemory<int, int>::IsExternallyAllocated(); // 577
		CUtlMemory<int, int>::ConvertToExternalMemory(
					int* pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<int, int>::Purge_FixedGrowable(
					int* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<int, int>::Purge_FixedGrowable(
					int* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		AlignedByteArrayExplicit_t<4, int, 4>::Base(); // 237
		CUtlMemoryFixedGrowable<int, 4, int>::Purge(
			int numElements);  // 1799
		CUtlMemory<int, int>::Base(); // 112
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::Base(); // 368
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::ResetDbgInfo(); // 1800
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<int, 4, int>::~CUtlMemoryFixedGrowable(); // 562
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::~CUtlVectorBase(); // 478
		CUtlVectorFixedGrowable<int, 4>::~CUtlVectorFixedGrowable(); // 79
		DelegateIterator_Base_t::~DelegateIterator_Base_t(); // 106
		DelegateIterator_t::~DelegateIterator_t(); // 809
		{
			CUtlDelegate<void()> delegate; // 776
			{
				const EventListenerInfo_t* pListener; // 777
				{
				}
			}
		}
		CEvent_Dispatch<CEventIDManager_Default, EventAppShutdown_t, 1>::DispatchEvent(
				Param1Type_t param1,
				bool bIterateForward,
				EventID_t EventID);  // 768
		CEvent_Dispatch<CEventIDManager_Default, EventAppShutdown_t, 1>::DispatchEvent(
				Param1Type_t param1,
				bool bIterateForward,
				EventID_t EventID);  // 1880
		GetPrimaryBinding(void); // 341
		Schema_StaticBinding(void); // 237
		GetEventID(void); // 1880
	}
} /* size: 0 */

