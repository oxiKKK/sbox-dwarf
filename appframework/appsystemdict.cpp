
//
// appframework/appsystemdict.cpp
//
//	referenced by: libengine2.so
//
//	functions: 45
//

// <0464877C> appframework/appsystemdict.cpp:74
// variables: 2
// function calls: 38
void CAppSystemDict::CAppSystemDict(bool bIsConsoleApp, void* hInstance, void* hPrevInstance, int nCmdShow, bool bIsGameApp, bool bIsDedicatedServer)
{
	{
		{
		}
		{
			CPathBufferString exeName; // 125
		}
	}
	{
		CUtlMemory<CAppSystemDict::ModuleInfo_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<CAppSystemDict::ModuleInfo_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CAppSystemDict::ModuleInfo_t, CUtlMemory<CAppSystemDict::ModuleInfo_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CAppSystemDict::ModuleInfo_t, CUtlMemory<CAppSystemDict::ModuleInfo_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CAppSystemDict::ModuleInfo_t, CUtlMemory<CAppSystemDict::ModuleInfo_t, int> >::CUtlVector(); // 74
		CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::ResetDbgInfo(); // 530
		CUtlMemory<CAppSystemDict::AppSystem_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<CAppSystemDict::AppSystem_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::CUtlVector(); // 74
		CUtlMemory<void::ValidateGrowSize()(char const*, int*), int>* this); // 475
		CUtlMemory<void::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<void::ResetDbgInfo()(char const*, int*), CUtlMemory<void* (*)(char const*, int*), int> >* this); // 530
		CUtlVectorBase<void::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<void::CUtlVector()(char const*, int*), CUtlMemory<void* (*)(char const*, int*), int> >* this); // 74
		CUtlMemory<char::ValidateGrowSize(); // 475
		CUtlMemory<char::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<char::ResetDbgInfo(); // 530
		CUtlVectorBase<char::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<char::CUtlVector(); // 11
		CUtlStringList_Base<CUtlVector<char::CUtlStringList_Base(); // 71
		CUtlStringList::CUtlStringList(); // 74
		CUtlMemory<short unsigned int, int>::ValidateGrowSize(); // 475
		CUtlMemory<short unsigned int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 472
		CUtlMemory<short unsigned int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 419
		CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::CUtlVector(
				int growSize,
				int initCapacity);  // 30
		CUtlStringMap<short unsigned int, CUtlSymbolTable>::CUtlStringMap(
				bool caseInsensitive,
				int growSize,
				int initSize);  // 74
		CUtlString::CUtlString(); // 74
		CUtlString::CUtlString(); // 74
		CUtlString::CUtlString(); // 74
		{
		}
		KeyValues::SetBool(
			const char* keyName,
			bool value);  // 99
		{
			CPathBufferString exeName; // 125
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 591
			CBufferStringN<200>::CBufferStringN(); // 125
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 129
		}
	}
} /* size: 0 */

// <046486E5> appframework/appsystemdict.cpp:74
// variables: 3
void CAppSystemDict::CAppSystemDict(bool bIsConsoleApp, void* hInstance, void* hPrevInstance, int nCmdShow, bool bIsGameApp, bool bIsDedicatedServer)
{
	const char   __FUNCTION__; // 29610
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 83
	}
	{
		CPathBufferString exeName; // 125
	}
} /* size: 0, variables: 1 */

// <046477BC> appframework/appsystemdict.cpp:135
// variables: 5
// function calls: 65
void CAppSystemDict::~CAppSystemDict()
{
	{
		{
			int nCount; // 157
			{
			}
			{
			}
			{
				int i; // 158
			}
		}
	}
	{
		{
			int nCount; // 157
			{
			}
			{
			}
			CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::Count(); // 157
			{
				int i; // 158
				CUtlMemory<CAppSystemDict::AppSystem_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::operator[](
						int i);  // 160
				CAppSystemDict::FreeSystemEntry(
						AppSystem_t* pSystemEntry);  // 160
			}
			CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::RemoveAll(); // 164
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::RemoveAll(); // 194
			CUtlStringMap<short unsigned int, CUtlSymbolTable>::Clear(); // 165
			CAppSystemDict::ShutdownSDL(); // 187
		}
		CUtlString::~CUtlString(); // 193
		CUtlString::~CUtlString(); // 193
		CUtlString::~CUtlString(); // 193
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::RemoveAll(); // 1798
		CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<short unsigned int, int>::Purge(); // 903
		CUtlMemory<short unsigned int, int>::Purge(); // 1799
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Purge(); // 560
		ValidateAlignment<short unsigned int>(void); // 508
		CUtlMemory<short unsigned int, int>::Purge(); // 510
		CUtlMemory<short unsigned int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVector(); // 15
		CUtlStringMap<short unsigned int, CUtlSymbolTable>::~CUtlStringMap(); // 193
		{
			int i; // 22
			CUtlVectorBase<char::Count(); // 22
			CUtlMemory<char::operator[](
					int i);  // 602
			CUtlVectorBase<char::Element(
				int i);  // 24
		}
		CUtlVectorBase<char::RemoveAll(); // 26
		CUtlStringList_Base<CUtlVector<char::PurgeAndFreeElements(); // 17
		CUtlMemory<char::IsExternallyAllocated(); // 905
		CUtlMemory<char::Purge(); // 903
		CUtlMemory<char::Purge(); // 1799
		CUtlVectorBase<char::Purge(); // 560
		ValidateAlignment<char*>(void); // 508
		CUtlMemory<char::Purge(); // 510
		CUtlMemory<char::~CUtlMemory(); // 562
		CUtlVectorBase<char::~CUtlVectorBase(); // 410
		CUtlVector<char::~CUtlVector(); // 18
		CUtlStringList_Base<CUtlVector<char::~CUtlStringList_Base(); // 66
		CUtlStringList::~CUtlStringList(); // 193
		CUtlVectorBase<void::RemoveAll()(char const*, int*), CUtlMemory<void* (*)(char const*, int*), int> >* this); // 1798
		CUtlMemory<void::IsExternallyAllocated()(char const*, int*), int>* this); // 905
		CUtlMemory<void::Purge()(char const*, int*), int>* this); // 903
		CUtlMemory<void::Purge()(char const*, int*), int>* this); // 1799
		CUtlVectorBase<void::Purge()(char const*, int*), CUtlMemory<void* (*)(char const*, int*), int> >* this); // 560
		ValidateAlignment<void* (*)(char const*, int*)>(void); // 508
		CUtlMemory<void::Purge()(char const*, int*), int>* this); // 510
		CUtlMemory<void::~CUtlMemory()(char const*, int*), int>* this); // 562
		CUtlVectorBase<void::~CUtlVectorBase()(char const*, int*), CUtlMemory<void* (*)(char const*, int*), int> >* this); // 410
		CUtlVector<void::~CUtlVector()(char const*, int*), CUtlMemory<void* (*)(char const*, int*), int> >* this); // 193
		CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::RemoveAll(); // 1798
		CUtlMemory<CAppSystemDict::AppSystem_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CAppSystemDict::AppSystem_t, int>::Purge(); // 903
		CUtlMemory<CAppSystemDict::AppSystem_t, int>::Purge(); // 1799
		CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::Purge(); // 560
		ValidateAlignment<CAppSystemDict::AppSystem_t>(void); // 508
		CUtlMemory<CAppSystemDict::AppSystem_t, int>::Purge(); // 510
		CUtlMemory<CAppSystemDict::AppSystem_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::~CUtlVector(); // 193
		CUtlVectorBase<CAppSystemDict::ModuleInfo_t, CUtlMemory<CAppSystemDict::ModuleInfo_t, int> >::RemoveAll(); // 1798
		CUtlMemory<CAppSystemDict::ModuleInfo_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CAppSystemDict::ModuleInfo_t, int>::Purge(); // 903
		CUtlMemory<CAppSystemDict::ModuleInfo_t, int>::Purge(); // 1799
		CUtlVectorBase<CAppSystemDict::ModuleInfo_t, CUtlMemory<CAppSystemDict::ModuleInfo_t, int> >::Purge(); // 560
		CUtlVectorBase<CAppSystemDict::ModuleInfo_t, CUtlMemory<CAppSystemDict::ModuleInfo_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<CAppSystemDict::ModuleInfo_t, CUtlMemory<CAppSystemDict::ModuleInfo_t, int> >::~CUtlVector(); // 193
	}
} /* size: 0 */

// <04647755> appframework/appsystemdict.cpp:135
void CAppSystemDict::~CAppSystemDict()
{
} /* size: 36 */

// <046476DC> appframework/appsystemdict.cpp:135
// variables: 5
void CAppSystemDict::~CAppSystemDict()
{
	const char   __FUNCTION__; // 29637
	{
		int nCount; // 157
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 137
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 150
		}
		{
			int i; // 158
		}
	}
} /* size: 0, variables: 1 */

// <0464C0BE> appframework/appsystemdict.cpp:201
// function calls: 6
void CAppSystemDict::CreateApplication()
{
	IAppSystem::IAppSystem(); // 44
	IApplication::IApplication(); // 120
	CBaseAppSystem<IApplication>::CBaseAppSystem(); // 171
	CTier0AppSystem<IApplication, 0>::CTier0AppSystem(); // 225
	CTier1AppSystem<IApplication, 0>::CTier1AppSystem(); // 33
	CTier1Application::CTier1Application(
				CAppSystemDict* pDict);  // 203
} /* size: 57, inline expansions: 6 (8 bytes) */

// <046476C3> appframework/appsystemdict.cpp:201
void CAppSystemDict::CreateApplication()
{
} /* size: 0 */

// <046473F1> appframework/appsystemdict.cpp:210
// function calls: 8
void CAppSystemDict::Init()
{
	IAppSystem::IAppSystem(); // 44
	IApplication::IApplication(); // 120
	CBaseAppSystem<IApplication>::CBaseAppSystem(); // 171
	CTier0AppSystem<IApplication, 0>::CTier0AppSystem(); // 225
	CTier1AppSystem<IApplication, 0>::CTier1AppSystem(); // 33
	CTier1Application::CTier1Application(
				CAppSystemDict* pDict);  // 203
	CAppSystemDict::CreateApplication(); // 213
	CAppSystemDict::InitSDL(
		uint32 nFlags);  // 224
} /* size: 305, inline expansions: 8 (111 bytes) */

// <0464CA36> appframework/appsystemdict.cpp:237
// variables: 2
// function calls: 4
void CAppSystemDict::PreShutdown()
{
	int nCount; // 245
	CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::Count(); // 245
	{
		int i; // 246
		CUtlMemory<CAppSystemDict::AppSystem_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::operator[](
				int i);  // 248
	}
	CAppSystemDict::PreShutdown(); // 237
} /* size: 121, variables: 1, inline expansions: 2 (42 bytes) */

// <046473BF> appframework/appsystemdict.cpp:237
// variables: 2
void CAppSystemDict::PreShutdown()
{
	int nCount; // 245
	{
		int i; // 246
	}
} /* size: 0, variables: 1 */

// <04646F8B> appframework/appsystemdict.cpp:252
// variables: 7
// function calls: 14
void CAppSystemDict::Shutdown(int nPhaseToShutdownTo)
{
	const char   __FUNCTION__; // 29458
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 256
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 257
	}
	{
		int i; // 262
		{
			IAppSystem* pAppSystem; // 268
			CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::Count(); // 270
			CUtlMemory<CAppSystemDict::AppSystem_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::operator[](
					int i);  // 270
		}
		CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::Count(); // 262
		CUtlMemory<CAppSystemDict::AppSystem_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::operator[](
				int i);  // 264
	}
	{
		int i; // 278
		CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::Count(); // 278
		CUtlMemory<CAppSystemDict::AppSystem_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::operator[](
				int i);  // 280
	}
	CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::Count(); // 245
	{
		int i; // 246
		CUtlMemory<CAppSystemDict::AppSystem_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::operator[](
				int i);  // 248
	}
	CAppSystemDict::PreShutdown(); // 237
	CAppSystemDict::PreShutdown(); // 254
} /* size: 0, variables: 1, inline expansions: 3 (162 bytes) */

// <0464CB48> appframework/appsystemdict.cpp:300
// variable: 1
void CAppSystemDict::InitSDL(uint32 nFlags)
{
	_BlockRequiresSDLMainThread_t blockRequiresSDLMainThread___LINE__; // 302
} /* size: 118, variables: 1 */

// <0464CC25> appframework/appsystemdict.cpp:315
// variable: 1
void CAppSystemDict::ShutdownSDL()
{
	_BlockRequiresSDLMainThread_t blockRequiresSDLMainThread___LINE__; // 317
} /* size: 82, variables: 1 */

// <04646A47> appframework/appsystemdict.cpp:321
// variables: 2
// function calls: 15
void CAppSystemDict::SetGameInfo(KeyValues* pKeyValues, const char* pModGameSubDir)
{
	CPathBufferString tmpPath; // 332
	CPathBufferString contentBuf; // 336
	CUtlString::operator=(
			const char* src);  // 329
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 332
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 336
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 596
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 601
	CBufferStringN<200>::CBufferStringN(
			const char* pString,
			int nChars,
			bool bExact,
			bool bGrowable);  // 336
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 340
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 340
} /* size: 356, variables: 2, inline expansions: 15 (307 bytes) */

// <04646919> appframework/appsystemdict.cpp:343
// variables: 5
// function calls: 3
void CAppSystemDict::GetBuildType()
{
	bool bHasDebugBuild; // 345
	AppSystemBuildType_t type; // 347
	int nCount; // 348
	{
		int i; // 349
		{
			AppSystemBuildType_t systemType; // 351
			CUtlMemory<CAppSystemDict::AppSystem_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::operator[](
					int i);  // 351
		}
	}
	CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::Count(); // 348
} /* size: 192, variables: 3, inline expansions: 1 (3 bytes) */

// <0464CCBE> appframework/appsystemdict.cpp:378
// variable: 1
void CAppSystemDict::SetInDeveloperMode(bool bInDeveloperMode)
{
	LoggingVerbosity_t verbosity; // 383
} /* size: 64, variables: 1 */

// <046468B8> appframework/appsystemdict.cpp:392
void CAppSystemDict::IsInVRMode()
{
} /* size: 7 */

// <04646737> appframework/appsystemdict.cpp:401
// variable: 1
// function calls: 6
void CAppSystemDict::SetModuleSearchPath(const char* pSearchPath)
{
	{
		int i; // 22
		CUtlVectorBase<char::Count(); // 22
		CUtlMemory<char::operator[](
				int i);  // 602
		CUtlVectorBase<char::Element(
			int i);  // 24
	}
	CUtlVectorBase<char::RemoveAll(); // 26
	CUtlStringList_Base<CUtlVector<char::PurgeAndFreeElements(); // 31
	CUtlStringList_Base<CUtlVector<char::PurgeAndDeleteElements(); // 405
} /* size: 99, inline expansions: 3 (109 bytes) */

// <0464CD3B> appframework/appsystemdict.cpp:413
void CAppSystemDict::SetInitializationPhase(int nPhase)
{
	{
	}
} /* size: 0 */

// <046466D2> appframework/appsystemdict.cpp:413
// variables: 2
void CAppSystemDict::SetInitializationPhase(int nPhase)
{
	const char   __FUNCTION__; // 29801
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 416
	}
} /* size: 0, variables: 1 */

// <0464CD83> appframework/appsystemdict.cpp:420
void CAppSystemDict::GetInitializationPhase()
{
} /* size: 11 */

// <04645F0F> appframework/appsystemdict.cpp:429
// variables: 6
// function calls: 27
void CAppSystemDict::AddSystem(IAppSystem* pAppSystem, const char* pInterfaceName)
{
	const char   __FUNCTION__; // 29485
	AppSystemRequest_t request; // 453
	CUtlVector<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> > requests; // 458
	{
		UtlSymId_t nId; // 436
		{
			AppSystem_t& existingSystem; // 439
			{
				int* _pCrash; // 443
			}
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 53
			{
			}
			CUtlMemory<short unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
					int i);  // 54
			CUtlStringMap<short unsigned int, CUtlSymbolTable>::operator[](
					IndexType_t n);  // 439
			CUtlMemory<CAppSystemDict::AppSystem_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::operator[](
					int i);  // 439
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 443
		}
		CUtlSymbol::IsValid(); // 88
		CUtlSymbolTable::FindElement(
				const char* pString);  // 90
		CUtlStringMap<short unsigned int, CUtlSymbolTable>::Find(
			const char* pString);  // 436
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 454
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 458
	CopyConstruct<CAppSystemDict::AppSystemRequest_t>(AppSystemRequest_t* pMemory,
								const AppSystemRequest_t& src);  // 1201
	CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::AddToTail(
			const AppSystemRequest_t& src);  // 459
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::Purge(); // 903
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::Purge(); // 1799
	CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::Purge(); // 560
	ValidateAlignment<CAppSystemDict::AppSystemRequest_t>(void); // 508
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::Purge(); // 510
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::~CUtlVector(); // 464
} /* size: 0, variables: 3, inline expansions: 17 (395 bytes) */

// <0464578F> appframework/appsystemdict.cpp:466
// variables: 6
// function calls: 27
void CAppSystemDict::AddSystem(CreateInterfaceFn factory, const char* pInterfaceName)
{
	UtlSymId_t nId; // 471
	const char   __FUNCTION__; // 29485
	AppSystemRequest_t request; // 483
	CUtlVector<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> > requests; // 489
	{
		AppSystem_t& existingSystem; // 474
		{
			int* _pCrash; // 478
		}
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 53
		{
		}
		CUtlMemory<short unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
				int i);  // 54
		CUtlStringMap<short unsigned int, CUtlSymbolTable>::operator[](
				IndexType_t n);  // 474
		CUtlMemory<CAppSystemDict::AppSystem_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::operator[](
				int i);  // 474
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 478
	}
	CUtlSymbol::IsValid(); // 88
	CUtlSymbolTable::FindElement(
			const char* pString);  // 90
	CUtlStringMap<short unsigned int, CUtlSymbolTable>::Find(
		const char* pString);  // 471
	memset(void* __dest,
		int __ch,
		size_t __len);  // 484
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 489
	CopyConstruct<CAppSystemDict::AppSystemRequest_t>(AppSystemRequest_t* pMemory,
								const AppSystemRequest_t& src);  // 1201
	CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::AddToTail(
			const AppSystemRequest_t& src);  // 490
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::Purge(); // 903
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::Purge(); // 1799
	CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::Purge(); // 560
	ValidateAlignment<CAppSystemDict::AppSystemRequest_t>(void); // 508
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::Purge(); // 510
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::~CUtlVector(); // 496
} /* size: 0, variables: 4, inline expansions: 20 (519 bytes) */

// <04644FD2> appframework/appsystemdict.cpp:498
// variables: 6
// function calls: 27
void CAppSystemDict::AddSystem(PlatModule_t hModule, const char* pInterfaceName, ErrorResponse_t errResponse)
{
	UtlSymId_t nId; // 503
	const char   __FUNCTION__; // 29485
	AppSystemRequest_t request; // 515
	CUtlVector<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> > requests; // 520
	{
		AppSystem_t& existingSystem; // 506
		{
			int* _pCrash; // 510
		}
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 53
		{
		}
		CUtlMemory<short unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
				int i);  // 54
		CUtlStringMap<short unsigned int, CUtlSymbolTable>::operator[](
				IndexType_t n);  // 506
		CUtlMemory<CAppSystemDict::AppSystem_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::operator[](
				int i);  // 506
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 510
	}
	CUtlSymbol::IsValid(); // 88
	CUtlSymbolTable::FindElement(
			const char* pString);  // 90
	CUtlStringMap<short unsigned int, CUtlSymbolTable>::Find(
		const char* pString);  // 503
	memset(void* __dest,
		int __ch,
		size_t __len);  // 516
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 520
	CopyConstruct<CAppSystemDict::AppSystemRequest_t>(AppSystemRequest_t* pMemory,
								const AppSystemRequest_t& src);  // 1201
	CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::AddToTail(
			const AppSystemRequest_t& src);  // 521
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::Purge(); // 903
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::Purge(); // 1799
	CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::Purge(); // 560
	ValidateAlignment<CAppSystemDict::AppSystemRequest_t>(void); // 508
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::Purge(); // 510
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::~CUtlVector(); // 527
} /* size: 0, variables: 4, inline expansions: 20 (598 bytes) */

// <04644402> appframework/appsystemdict.cpp:529
// variables: 7
// function calls: 44
void CAppSystemDict::AddSystem(const char* pModuleName, const char* pInterfaceName, ErrorResponse_t errResponse)
{
	UtlSymId_t nId; // 534
	const char   __FUNCTION__; // 29485
	AppSystemRequest_t request; // 552
	CUtlVector<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> > requests; // 557
	{
		AppSystem_t& existingSystem; // 537
		{
			CPathBufferString moduleBuf; // 542
			{
				int* _pCrash; // 546
			}
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 596
			CBufferString::Set(
				const char* pString,
				int nChars,
				bool bExact);  // 601
			CBufferStringN<200>::CBufferStringN(
					const char* pString,
					int nChars,
					bool bExact,
					bool bGrowable);  // 542
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 544
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 546
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 546
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 546
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 549
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 549
		}
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 53
		{
		}
		CUtlMemory<short unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
				int i);  // 54
		CUtlStringMap<short unsigned int, CUtlSymbolTable>::operator[](
				IndexType_t n);  // 537
		CUtlMemory<CAppSystemDict::AppSystem_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::operator[](
				int i);  // 537
	}
	CUtlSymbol::IsValid(); // 88
	CUtlSymbolTable::FindElement(
			const char* pString);  // 90
	CUtlStringMap<short unsigned int, CUtlSymbolTable>::Find(
		const char* pString);  // 534
	memset(void* __dest,
		int __ch,
		size_t __len);  // 553
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 557
	CopyConstruct<CAppSystemDict::AppSystemRequest_t>(AppSystemRequest_t* pMemory,
								const AppSystemRequest_t& src);  // 1201
	CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::AddToTail(
			const AppSystemRequest_t& src);  // 558
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::Purge(); // 903
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::Purge(); // 1799
	CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::Purge(); // 560
	ValidateAlignment<CAppSystemDict::AppSystemRequest_t>(void); // 508
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::Purge(); // 510
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::~CUtlVector(); // 564
} /* size: 0, variables: 4, inline expansions: 20 (613 bytes) */

// <046437D4> appframework/appsystemdict.cpp:570
// variables: 9
// function calls: 44
void CAppSystemDict::AddSystems(int nCount, const AppSystemInfo_t* pSystemList)
{
	const char   __FUNCTION__; // 29512
	CUtlVector<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> > requests; // 580
	AppSystemRequest_t request; // 581
	{
		int* _pCrash; // 575
	}
	{
		int i; // 583
		{
			UtlSymId_t nId; // 585
			{
				AppSystem_t& existingSystem; // 588
				{
					CPathBufferString moduleBuf; // 594
					{
						int* _pCrash; // 598
					}
					CBufferString::Set(
						const char* pString,
						int nChars,
						bool bExact);  // 601
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 712
					CBufferString::CBufferString(); // 596
					CBufferStringN<200>::CBufferStringN(
							const char* pString,
							int nChars,
							bool bExact,
							bool bGrowable);  // 594
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 781
					CBufferString::operator char const*(); // 596
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 776
					CBufferString::String(); // 598
					LeafCodeInfo_t::LeafCodeInfo_t(
							const char* szFile,
							int nLine,
							const char* szFunction);  // 598
					CBufferString::~CBufferString(); // 587
					CBufferStringN<200>::~CBufferStringN(); // 601
				}
				CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 53
				{
				}
				CUtlMemory<short unsigned int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
						int i);  // 54
				CUtlStringMap<short unsigned int, CUtlSymbolTable>::operator[](
						IndexType_t n);  // 588
				CUtlMemory<CAppSystemDict::AppSystem_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::operator[](
						int i);  // 588
			}
			CopyConstruct<CAppSystemDict::AppSystemRequest_t>(AppSystemRequest_t* pMemory,
										const AppSystemRequest_t& src);  // 1201
			CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::Element(
				int i);  // 1201
			CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::AddToTail(
					const AppSystemRequest_t& src);  // 606
			CUtlSymbol::IsValid(); // 88
			CUtlSymbolTable::FindElement(
					const char* pString);  // 90
			CUtlStringMap<short unsigned int, CUtlSymbolTable>::Find(
				const char* pString);  // 585
		}
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 575
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 580
	memset(void* __dest,
		int __ch,
		size_t __len);  // 582
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::Purge(); // 903
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::Purge(); // 1799
	CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::Purge(); // 560
	ValidateAlignment<CAppSystemDict::AppSystemRequest_t>(void); // 508
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::Purge(); // 510
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::~CUtlVector(); // 610
} /* size: 0, variables: 3, inline expansions: 16 (541 bytes) */

// <0464D318> appframework/appsystemdict.cpp:616
void CAppSystemDict::FreeSystemEntry(AppSystem_t* pSystemEntry)
{
} /* size: 0 */

// <04643361> appframework/appsystemdict.cpp:636
// variables: 4
// function calls: 14
void CAppSystemDict::RemoveSystem(IAppSystem* pAppSystem)
{
	int nId; // 638
	int nNumSystems; // 639
	{
		int iSystem; // 642
		CUtlMemory<CAppSystemDict::AppSystem_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::operator[](
				int i);  // 644
	}
	CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::Count(); // 639
	CUtlMemory<CAppSystemDict::AppSystem_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::operator[](
			int i);  // 659
	CAppSystemDict::FreeSystemEntry(
			AppSystem_t* pSystemEntry);  // 659
	CUtlMemory<CAppSystemDict::AppSystem_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::Element(
		int i);  // 1575
	{
		const bool  bNotLast; // 1578
		CUtlMemory<CAppSystemDict::AppSystem_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::Element(
			int i);  // 1584
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 1584
	}
	Destruct<CAppSystemDict::AppSystem_t>(AppSystem_t* pMemory); // 1575
	CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::FastRemove(
			int elem);  // 660
} /* size: 274, variables: 2, inline expansions: 8 (183 bytes) */

// <04642F7B> appframework/appsystemdict.cpp:669
// variables: 3
// function calls: 14
void CAppSystemDict::RebuildSystemDictionary()
{
	int nNumSystems; // 673
	{
		int iSystem; // 674
		{
			AppSystem_t& system; // 676
			CUtlSymbol::IsValid(); // 64
			CUtlSymbolTable::AddStringElement(
					const char* pString);  // 37
			CUtlMemory<short unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
					int i);  // 47
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 43
			{
			}
			CUtlMemory<short unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
					int i);  // 41
			CUtlStringMap<short unsigned int, CUtlSymbolTable>::operator[](
					const char* pString);  // 35
			CUtlStringMap<short unsigned int, CUtlSymbolTable>::operator[](
					const char* pString);  // 684
			CUtlMemory<CAppSystemDict::AppSystem_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::operator[](
					int i);  // 676
		}
	}
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::RemoveAll(); // 194
	CUtlStringMap<short unsigned int, CUtlSymbolTable>::Clear(); // 671
	CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::Count(); // 673
} /* size: 0, variables: 1, inline expansions: 3 (43 bytes) */

// <046426C8> appframework/appsystemdict.cpp:692
// variables: 8
// function calls: 28
void CAppSystemDict::ReplaceSystem(IAppSystem* pAppSystem, const char* pInterfaceName, bool bShutdownOldSystem)
{
	const char   __FUNCTION__; // 29583
	UtlSymId_t nId; // 703
	AppSystemRequest_t request; // 730
	CUtlVector<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> > requests; // 735
	{
		int* _pCrash; // 699
	}
	{
		AppSystem_t& existingSystem; // 706
		IAppSystem* pOldSystem; // 708
		{
			int* _pCrash; // 712
		}
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 53
		{
		}
		CUtlMemory<short unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
				int i);  // 54
		CUtlStringMap<short unsigned int, CUtlSymbolTable>::operator[](
				IndexType_t n);  // 706
		CUtlMemory<CAppSystemDict::AppSystem_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::operator[](
				int i);  // 706
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 712
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 699
	CUtlSymbol::IsValid(); // 88
	CUtlSymbolTable::FindElement(
			const char* pString);  // 90
	CUtlStringMap<short unsigned int, CUtlSymbolTable>::Find(
		const char* pString);  // 703
	memset(void* __dest,
		int __ch,
		size_t __len);  // 731
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 735
	CopyConstruct<CAppSystemDict::AppSystemRequest_t>(AppSystemRequest_t* pMemory,
								const AppSystemRequest_t& src);  // 1201
	CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::AddToTail(
			const AppSystemRequest_t& src);  // 736
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::Purge(); // 903
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::Purge(); // 1799
	CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::Purge(); // 560
	ValidateAlignment<CAppSystemDict::AppSystemRequest_t>(void); // 508
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::Purge(); // 510
	CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::~CUtlVector(); // 741
} /* size: 0, variables: 4, inline expansions: 21 (0 bytes) */

// <0464CDAD> appframework/appsystemdict.cpp:747
// variables: 7
// function calls: 16
void* CAppSystemDict::FindSystem(const char* pSystemName)
{
	UtlSymId_t nId; // 749
	int nCount; // 759
	int nExternalCount; // 770
	CUtlSymbol::IsValid(); // 88
	CUtlSymbolTable::FindElement(
			const char* pString);  // 90
	CUtlStringMap<short unsigned int, CUtlSymbolTable>::Find(
		const char* pString);  // 749
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 53
	{
	}
	CUtlMemory<short unsigned int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
			int i);  // 54
	CUtlStringMap<short unsigned int, CUtlSymbolTable>::operator[](
			IndexType_t n);  // 751
	CUtlMemory<CAppSystemDict::AppSystem_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::operator[](
			int i);  // 751
	CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::Count(); // 759
	{
		int i; // 760
		{
			void* pInterface; // 765
			CUtlMemory<CAppSystemDict::AppSystem_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::operator[](
					int i);  // 762
		}
	}
	CUtlVectorBase<void::Count()(char const*, int*), CUtlMemory<void* (*)(char const*, int*), int> >* this); // 770
	{
		int i; // 771
		{
			void* pInterface; // 773
			CUtlMemory<void::operator[](
					int i);  // 588
			CUtlVectorBase<void::operator[](
					int i);  // 773
		}
	}
	CAppSystemDict::FindSystem(
			const char* pSystemName);  // 747
} /* size: 0, variables: 3, inline expansions: 12 (283 bytes) */

// <0464263B> appframework/appsystemdict.cpp:747
// variables: 7
void* CAppSystemDict::FindSystem(const char* pSystemName)
{
	UtlSymId_t nId; // 749
	int nCount; // 759
	int nExternalCount; // 770
	{
		int i; // 760
		{
			void* pInterface; // 765
		}
	}
	{
		int i; // 771
		{
			void* pInterface; // 773
		}
	}
} /* size: 0, variables: 3 */

// <0464232E> appframework/appsystemdict.cpp:786
// function calls: 14
void CAppSystemDict::AddNonAppSystemFactory(CreateInterfaceFn fn)
{
	CUtlMemory<void::NumAllocated()(char const*, int*), int>* this); // 1196
	CUtlMemory<void::Base()(char const*, int*), int>* this); // 112
	CUtlVectorBase<void::Base()(char const*, int*), CUtlMemory<void* (*)(char const*, int*), int> >* this); // 368
	CUtlVectorBase<void::ResetDbgInfo()(char const*, int*), CUtlMemory<void* (*)(char const*, int*), int> >* this); // 824
	CUtlMemory<void::IsGrowable()(char const*, int*), int>* this); // 823
	CUtlMemory<void::IsExternallyAllocated()(char const*, int*), int>* this); // 859
	CUtlMemory<void::IsExternallyAllocated()(char const*, int*), int>* this); // 861
	CUtlMemory<void::Grow(
		int num);  // 806
	CUtlVectorBase<void::GrowMemory(
			int num);  // 1198
	CUtlMemory<void::operator[](
			int i);  // 602
	CUtlVectorBase<void::Element(
		int i);  // 1201
	CopyConstruct<void* (*)(char const*, int*)>(void* ()(const char *, int *)** pMemory,
							void* ()(const char *, int *)* const& src); // 1201
	CUtlVectorBase<void::AddToTail(
			void* ()(const char *, int *)* const& src);  // 788
} /* size: 322, inline expansions: 13 (854 bytes) */

// <0464202B> appframework/appsystemdict.cpp:795
// variable: 1
// function calls: 13
void CAppSystemDict::RemoveNonAppSystemFactory(CreateInterfaceFn fn)
{
	{
		int i; // 1531
		CUtlVectorBase<void::Count()(char const*, int*), CUtlMemory<void* (*)(char const*, int*), int> >* this); // 1531
		CUtlMemory<void::operator[](
				int i);  // 609
		CUtlVectorBase<void::Element(
			int i);  // 1533
	}
	CUtlVectorBase<void::Find(
		void* ()(const char *, int *)* const& src);  // 1617
	CUtlMemory<void::operator[](
			int i);  // 602
	CUtlVectorBase<void::Element(
		int i);  // 1114
	CUtlMemory<void::operator[](
			int i);  // 602
	CUtlVectorBase<void::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<void::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<void::Remove(
		int elem);  // 1620
	CUtlVectorBase<void::FindAndRemove(
			void* ()(const char *, int *)* const& src);  // 797
} /* size: 143, inline expansions: 10 (365 bytes) */

// <04641EB2> appframework/appsystemdict.cpp:804
// variables: 2
// function calls: 4
void CAppSystemDict::ReconnectSystems(const char* pInterfaceName)
{
	{
		int i; // 807
		{
			IAppSystem* pSystem; // 809
			CUtlMemory<CAppSystemDict::AppSystem_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::operator[](
					int i);  // 809
			CAppSystemDict::GetFactory(); // 810
		}
		CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::Count(); // 807
	}
} /* size: 97 */

// <046410A7> appframework/appsystemdict.cpp:818
// variables: 9
// function calls: 54
void CAppSystemDict::ComputeDependencies(LibraryDependencies_t& depend)
{
	bool bDone; // 820
	{
		int nCount; // 827
		{
			UtlSymId_t i; // 828
			{
				int nDependentCount; // 830
				{
					UtlSymId_t j; // 831
					{
						UtlSymId_t nIndex; // 833
						int nSecondaryDepCount; // 837
						{
							UtlSymId_t k; // 838
							{
								const char* pSecondaryDependency; // 841
								CUtlMemory<unsigned int, int>::operator[](
										int i);  // 609
								CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
									int i);  // 110
								CUtlMemoryBlockAllocator::PageFromBlock(
										blockpooloffset_t nBlock);  // 508
								CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
										int i);  // 509
								CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
										int i);  // 595
								CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
										int i);  // 511
								CUtlMemoryBlockAllocator::OffsetFromBlock(
										blockpooloffset_t nBlock);  // 511
								CUtlMemoryBlockAllocator::MemFromBlock(
										blockpooloffset_t nIndex);  // 186
								CUtlSymbolTable::StringFromIndex(
										const blockpooloffset_t& index);  // 110
								CUtlSymbolTable::GetElementString(
										int nElement);  // 182
								CUtlStringMap<CAppSystemDict::InterfaceInfo_t, CUtlSymbolTable>::String(
									int n);  // 846
								CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::Count(); // 53
								{
								}
								CUtlMemory<CAppSystemDict::InterfaceInfo_t, int>::operator[](
										int i);  // 588
								CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::operator[](
										int i);  // 54
								CUtlStringMap<CAppSystemDict::InterfaceInfo_t, CUtlSymbolTable>::operator[](
										IndexType_t n);  // 841
								CUtlSymbol::CUtlSymbol(
										UtlSymId_t id);  // 841
								CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::Count(); // 53
								{
								}
								CUtlMemory<CAppSystemDict::InterfaceInfo_t, int>::operator[](
										int i);  // 588
								CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::operator[](
										int i);  // 54
								CUtlStringMap<CAppSystemDict::InterfaceInfo_t, CUtlSymbolTable>::operator[](
										IndexType_t n);  // 842
								CUtlSymbol::operator==(
										UtlSymId_t id);  // 842
								CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::Count(); // 53
								{
								}
								CUtlMemory<CAppSystemDict::InterfaceInfo_t, int>::operator[](
										int i);  // 588
								CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::operator[](
										int i);  // 54
								CUtlStringMap<CAppSystemDict::InterfaceInfo_t, CUtlSymbolTable>::operator[](
										IndexType_t n);  // 853
								CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::Count(); // 53
								{
								}
								CUtlMemory<CAppSystemDict::InterfaceInfo_t, int>::operator[](
										int i);  // 588
								CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::operator[](
										int i);  // 54
								CUtlStringMap<CAppSystemDict::InterfaceInfo_t, CUtlSymbolTable>::operator[](
										IndexType_t n);  // 854
								CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
								CUtlSymbolTable::GetNumStrings(); // 854
							}
						}
						CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::Count(); // 53
						{
						}
						CUtlMemory<CAppSystemDict::InterfaceInfo_t, int>::operator[](
								int i);  // 588
						CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::operator[](
								int i);  // 54
						CUtlStringMap<CAppSystemDict::InterfaceInfo_t, CUtlSymbolTable>::operator[](
								IndexType_t n);  // 833
						CUtlSymbol::CUtlSymbol(
								UtlSymId_t id);  // 833
						CUtlSymbol::IsValid(); // 88
						CUtlSymbolTable::FindElement(
								const char* pString);  // 90
						CUtlStringMap<CAppSystemDict::InterfaceInfo_t, CUtlSymbolTable>::Find(
							const char* pString);  // 833
						CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::Count(); // 53
						{
						}
						CUtlMemory<CAppSystemDict::InterfaceInfo_t, int>::operator[](
								int i);  // 588
						CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::operator[](
								int i);  // 54
						CUtlStringMap<CAppSystemDict::InterfaceInfo_t, CUtlSymbolTable>::operator[](
								IndexType_t n);  // 837
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
						CUtlSymbolTable::GetNumStrings(); // 837
					}
				}
				CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::Count(); // 53
				{
				}
				CUtlMemory<CAppSystemDict::InterfaceInfo_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::operator[](
						int i);  // 54
				CUtlStringMap<CAppSystemDict::InterfaceInfo_t, CUtlSymbolTable>::operator[](
						IndexType_t n);  // 830
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
				CUtlSymbolTable::GetNumStrings(); // 830
			}
		}
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
		CUtlSymbolTable::GetNumStrings(); // 177
		CUtlStringMap<CAppSystemDict::InterfaceInfo_t, CUtlSymbolTable>::GetNumStrings(); // 827
	}
} /* size: 0, variables: 1 */

// <04640115> appframework/appsystemdict.cpp:865
// variables: 5
// function calls: 54
void DictSortLessFunc(LibraryDependencies_t& depend, const int& left, const int& right)
{
	const char* pLeftInterface; // 867
	const char* pRightInterface; // 868
	bool bRightDependsOnLeft; // 869
	const char   __FUNCTION__; // 29664
	{
		int* _pCrash; // 874
	}
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 186
	CUtlSymbolTable::StringFromIndex(
			const blockpooloffset_t& index);  // 110
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 609
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
		int i);  // 110
	CUtlSymbolTable::GetElementString(
			int nElement);  // 182
	CUtlStringMap<CAppSystemDict::InterfaceInfo_t, CUtlSymbolTable>::String(
		int n);  // 867
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 609
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
		int i);  // 110
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 186
	CUtlSymbolTable::StringFromIndex(
			const blockpooloffset_t& index);  // 110
	CUtlSymbolTable::GetElementString(
			int nElement);  // 182
	CUtlStringMap<CAppSystemDict::InterfaceInfo_t, CUtlSymbolTable>::String(
		int n);  // 868
	CUtlSymbol::IsValid(); // 64
	CUtlSymbolTable::AddStringElement(
			const char* pString);  // 37
	CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::Count(); // 43
	CUtlMemory<CAppSystemDict::InterfaceInfo_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::operator[](
			int i);  // 47
	CUtlStringMap<CAppSystemDict::InterfaceInfo_t, CUtlSymbolTable>::operator[](
			const char* pString);  // 869
	CUtlSymbol::operator==(
			UtlSymId_t id);  // 869
	CUtlSymbol::IsValid(); // 64
	CUtlSymbolTable::AddStringElement(
			const char* pString);  // 37
	CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::Count(); // 43
	CUtlMemory<CAppSystemDict::InterfaceInfo_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::operator[](
			int i);  // 47
	CUtlStringMap<CAppSystemDict::InterfaceInfo_t, CUtlSymbolTable>::operator[](
			const char* pString);  // 872
	CUtlSymbol::IsValid(); // 64
	CUtlSymbolTable::AddStringElement(
			const char* pString);  // 37
	CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::Count(); // 43
	CUtlMemory<CAppSystemDict::InterfaceInfo_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::operator[](
			int i);  // 47
	CUtlStringMap<CAppSystemDict::InterfaceInfo_t, CUtlSymbolTable>::operator[](
			const char* pString);  // 872
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 874
	CUtlSymbol::IsValid(); // 64
	CUtlSymbolTable::AddStringElement(
			const char* pString);  // 37
	CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::Count(); // 43
	CUtlMemory<CAppSystemDict::InterfaceInfo_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::operator[](
			int i);  // 47
	CUtlStringMap<CAppSystemDict::InterfaceInfo_t, CUtlSymbolTable>::operator[](
			const char* pString);  // 881
	CUtlSymbol::IsValid(); // 64
	CUtlSymbolTable::AddStringElement(
			const char* pString);  // 37
	CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::Count(); // 43
	CUtlMemory<CAppSystemDict::InterfaceInfo_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::operator[](
			int i);  // 47
	CUtlStringMap<CAppSystemDict::InterfaceInfo_t, CUtlSymbolTable>::operator[](
			const char* pString);  // 881
} /* size: 0, variables: 4, inline expansions: 54 (1402 bytes) */

// <0463EE4A> appframework/appsystemdict.cpp:887
// variables: 15
// function calls: 69
void CAppSystemDict::SortDependentLibraries(LibraryDependencies_t& depend, CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >* pOutIndicies)
{
	int nCount; // 889
	bool bChanged; // 900
	bool bDone; // 922
	const char   __FUNCTION__; // 29801
	{
		UtlSymId_t i; // 893
		CUtlMemory<short unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
				int i);  // 895
	}
	{
		int i; // 904
		{
			int j; // 906
			{
				UtlSymId_t nTmp; // 910
				CUtlMemory<short unsigned int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
						int i);  // 910
				CUtlMemory<short unsigned int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
						int i);  // 911
				CUtlMemory<short unsigned int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
						int i);  // 912
			}
			CUtlMemory<short unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
					int i);  // 908
			CUtlMemory<short unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
					int i);  // 908
		}
	}
	{
		int i; // 926
		{
			int nLeft; // 928
			int nRight; // 929
			const char* pLeftInterface; // 933
			const char* pRightInterface; // 934
			bool bRightDependsOnLeft; // 935
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 938
			}
			CUtlSymbol::IsValid(); // 64
			CUtlSymbolTable::AddStringElement(
					const char* pString);  // 37
			CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::Count(); // 43
			CUtlMemory<CAppSystemDict::InterfaceInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::operator[](
					int i);  // 47
			CUtlStringMap<CAppSystemDict::InterfaceInfo_t, CUtlSymbolTable>::operator[](
					const char* pString);  // 935
			CUtlMemory<short unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
					int i);  // 928
			CUtlMemory<short unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
					int i);  // 929
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 609
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
				int i);  // 110
			CUtlMemoryBlockAllocator::PageFromBlock(
					blockpooloffset_t nBlock);  // 508
			CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
					int i);  // 509
			CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
					int i);  // 511
			CUtlMemoryBlockAllocator::OffsetFromBlock(
					blockpooloffset_t nBlock);  // 511
			CUtlMemoryBlockAllocator::MemFromBlock(
					blockpooloffset_t nIndex);  // 186
			CUtlSymbolTable::StringFromIndex(
					const blockpooloffset_t& index);  // 110
			CUtlSymbolTable::GetElementString(
					int nElement);  // 182
			CUtlStringMap<CAppSystemDict::InterfaceInfo_t, CUtlSymbolTable>::String(
				int n);  // 933
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 609
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
				int i);  // 110
			CUtlMemoryBlockAllocator::PageFromBlock(
					blockpooloffset_t nBlock);  // 508
			CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
					int i);  // 509
			CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
					int i);  // 511
			CUtlMemoryBlockAllocator::OffsetFromBlock(
					blockpooloffset_t nBlock);  // 511
			CUtlMemoryBlockAllocator::MemFromBlock(
					blockpooloffset_t nIndex);  // 186
			CUtlSymbolTable::StringFromIndex(
					const blockpooloffset_t& index);  // 110
			CUtlSymbolTable::GetElementString(
					int nElement);  // 182
			CUtlStringMap<CAppSystemDict::InterfaceInfo_t, CUtlSymbolTable>::String(
				int n);  // 934
			CUtlSymbol::operator==(
					UtlSymId_t id);  // 935
			CUtlSymbol::IsValid(); // 64
			CUtlSymbolTable::AddStringElement(
					const char* pString);  // 37
			CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::Count(); // 43
			CUtlMemory<CAppSystemDict::InterfaceInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::operator[](
					int i);  // 47
			CUtlStringMap<CAppSystemDict::InterfaceInfo_t, CUtlSymbolTable>::operator[](
					const char* pString);  // 938
			CUtlSymbol::operator==(
					UtlSymId_t id);  // 938
			CUtlMemory<short unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
					int i);  // 939
			swap<short unsigned int>(short unsigned int& __a,
						short unsigned int& __b);  // 19
			V_swap<short unsigned int>(short unsigned int& x,
							short unsigned int& y);  // 939
		}
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
	CUtlSymbolTable::GetNumStrings(); // 177
	CUtlStringMap<CAppSystemDict::InterfaceInfo_t, CUtlSymbolTable>::GetNumStrings(); // 889
	CUtlMemory<short unsigned int, int>::NumAllocated(); // 782
	CUtlMemory<short unsigned int, int>::Base(); // 112
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Base(); // 368
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::SetCount(
		int count);  // 891
} /* size: 0, variables: 4, inline expansions: 13 (478 bytes) */

// <0463E7C3> appframework/appsystemdict.cpp:949
// variable: 1
// function calls: 22
void CAppSystemDict::GenerateModuleFullPath(const char* pBasePath, const char* pModuleName, CBufferString* pStrBuf)
{
	CPathBufferString fullPath; // 951
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 951
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 953
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 954
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 955
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 956
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 1256
	CBufferString::CopyAndFixupPathName(
				const char* pPath,
				char chSeparator);  // 956
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 958
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 960
} /* size: 436, variables: 1, inline expansions: 22 (649 bytes) */

// <0463D5D4> appframework/appsystemdict.cpp:966
// variables: 13
// function calls: 71
void CAppSystemDict::LoadModuleInPath(const char* pModuleName, int* pLoadError)
{
	int nLocalErr; // 968
	CPathBufferString moduleBuf; // 975
	const char* pRemap; // 978
	CTimestampedEventScopeHelper timestampEvent; // 995
	CRelativeTickTimer timer; // 997
	bool bFoundModule; // 1001
	PlatModule_t hModule; // 1002
	CPathBufferString fullPathFixed; // 1003
	int nIndex; // 1034
	{
		int i; // 986
		int nCount; // 986
		CUtlVectorBase<CAppSystemDict::ModuleInfo_t, CUtlMemory<CAppSystemDict::ModuleInfo_t, int> >::Count(); // 986
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 988
		CUtlMemory<CAppSystemDict::ModuleInfo_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CAppSystemDict::ModuleInfo_t, CUtlMemory<CAppSystemDict::ModuleInfo_t, int> >::operator[](
				int i);  // 988
		CUtlMemory<CAppSystemDict::ModuleInfo_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CAppSystemDict::ModuleInfo_t, CUtlMemory<CAppSystemDict::ModuleInfo_t, int> >::operator[](
				int i);  // 990
		CUtlMemory<CAppSystemDict::ModuleInfo_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CAppSystemDict::ModuleInfo_t, CUtlMemory<CAppSystemDict::ModuleInfo_t, int> >::operator[](
				int i);  // 991
	}
	{
		int i; // 1015
		int nCount; // 1015
		CUtlVectorBase<char::Count(); // 1015
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1017
		CUtlMemory<char::operator[](
				int i);  // 588
		CUtlVectorBase<char::operator[](
				int i);  // 1017
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1018
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1023
	}
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 601
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 596
	CBufferStringN<200>::CBufferStringN(
			const char* pString,
			int nChars,
			bool bExact,
			bool bGrowable);  // 975
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 981
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1043
	CRelativeTickCount::Init(); // 547
	CRelativeTickCount::CRelativeTickCount(); // 613
	CRelativeTickTimer::CRelativeTickTimer(); // 997
	CRelativeTickCount::Sample(); // 618
	CRelativeTickTimer::Start(); // 998
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1004
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 1003
	CUtlString::Get(); // 1004
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1005
	CUtlMemory<CAppSystemDict::ModuleInfo_t, int>::NumAllocated(); // 1143
	CUtlMemory<CAppSystemDict::ModuleInfo_t, int>::Base(); // 112
	CUtlVectorBase<CAppSystemDict::ModuleInfo_t, CUtlMemory<CAppSystemDict::ModuleInfo_t, int> >::Base(); // 368
	CUtlVectorBase<CAppSystemDict::ModuleInfo_t, CUtlMemory<CAppSystemDict::ModuleInfo_t, int> >::ResetDbgInfo(); // 824
	CUtlMemory<CAppSystemDict::ModuleInfo_t, int>::IsGrowable(); // 823
	CUtlMemory<CAppSystemDict::ModuleInfo_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CAppSystemDict::ModuleInfo_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CAppSystemDict::ModuleInfo_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CAppSystemDict::ModuleInfo_t, CUtlMemory<CAppSystemDict::ModuleInfo_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CAppSystemDict::ModuleInfo_t, CUtlMemory<CAppSystemDict::ModuleInfo_t, int> >::AddToTail(); // 1034
	CUtlMemory<CAppSystemDict::ModuleInfo_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAppSystemDict::ModuleInfo_t, CUtlMemory<CAppSystemDict::ModuleInfo_t, int> >::operator[](
			int i);  // 1035
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 1037
	CUtlMemory<CAppSystemDict::ModuleInfo_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAppSystemDict::ModuleInfo_t, CUtlMemory<CAppSystemDict::ModuleInfo_t, int> >::operator[](
			int i);  // 1036
	CUtlMemory<CAppSystemDict::ModuleInfo_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CAppSystemDict::ModuleInfo_t, CUtlMemory<CAppSystemDict::ModuleInfo_t, int> >::operator[](
			int i);  // 1037
	CRelativeTickTimer::End(); // 1039
	CRelativeTickCount::GetMillisecondsF(); // 1040
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1043
	CTimestampedEventScopeHelper::~CTimestampedEventScopeHelper(); // 1043
} /* size: 1266, variables: 9, inline expansions: 49 (1461 bytes) */

// <0463D1E6> appframework/appsystemdict.cpp:1045
// variables: 3
// function calls: 15
void CAppSystemDict::UnloadModule(PlatModule_t hModule)
{
	int nCount; // 1047
	{
		int i; // 1048
		CUtlMemory<CAppSystemDict::ModuleInfo_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CAppSystemDict::ModuleInfo_t, CUtlMemory<CAppSystemDict::ModuleInfo_t, int> >::operator[](
				int i);  // 1050
		CUtlMemory<CAppSystemDict::ModuleInfo_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CAppSystemDict::ModuleInfo_t, CUtlMemory<CAppSystemDict::ModuleInfo_t, int> >::operator[](
				int i);  // 1055
		CUtlMemory<CAppSystemDict::ModuleInfo_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CAppSystemDict::ModuleInfo_t, CUtlMemory<CAppSystemDict::ModuleInfo_t, int> >::operator[](
				int i);  // 1056
		CUtlMemory<CAppSystemDict::ModuleInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAppSystemDict::ModuleInfo_t, CUtlMemory<CAppSystemDict::ModuleInfo_t, int> >::Element(
			int i);  // 1575
		Destruct<CAppSystemDict::ModuleInfo_t>(ModuleInfo_t* pMemory); // 1575
		{
			const bool  bNotLast; // 1578
			CUtlMemory<CAppSystemDict::ModuleInfo_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CAppSystemDict::ModuleInfo_t, CUtlMemory<CAppSystemDict::ModuleInfo_t, int> >::Element(
				int i);  // 1584
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 1584
		}
		CUtlVectorBase<CAppSystemDict::ModuleInfo_t, CUtlMemory<CAppSystemDict::ModuleInfo_t, int> >::FastRemove(
				int elem);  // 1057
	}
	CUtlVectorBase<CAppSystemDict::ModuleInfo_t, CUtlMemory<CAppSystemDict::ModuleInfo_t, int> >::Count(); // 1047
} /* size: 192, variables: 1, inline expansions: 1 (3 bytes) */

// <04639F48> appframework/appsystemdict.cpp:1067
// variables: 46
// function calls: 175
void CAppSystemDict::LoadSystemAndDependencies(CUtlVector<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >& requests, ErrorResponse_t errResponse)
{
	LibraryDependencies_t dependencies; // 1069
	CreateInterfaceFn factory; // 1072
	const char   __FUNCTION__; // 29877
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > sortedIndicies; // 1240
	int nPrevSystemCount; // 1244
	int nCount; // 1245
	int nNewSystemCount; // 1288
	{
		int i; // 1073
		{
			AppSystemRequest_t& request; // 1075
			IAppSystem* pExistingSystem; // 1078
			IAppSystem* pSystem; // 1095
			CreateInterfaceFn reqFactory; // 1096
			PlatModule_t hModule; // 1097
			const char* pModuleName; // 1098
			int nLoadError; // 1099
			bool bTriedModuleLoad; // 1100
			UtlSymId_t nDepId; // 1203
			InterfaceInfo_t& instance; // 1204
			const AppSystemInfo_t* pDependencies; // 1213
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1082
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1090
			}
			{
				int retval; // 1187
				{
					const char* pLocToken; // 1134
					const char* pEngText; // 1135
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 81
					CFmtStrN<256>::String(); // 1150
					CBufferString::~CBufferString(); // 587
					CBufferStringN<256>::~CBufferStringN(); // 41
					CFmtStrN<256>::~CFmtStrN(); // 1151
				}
				{
					int* _pCrash; // 1172
				}
				{
					int* _pCrash; // 1179
				}
				{
					int* _pCrash; // 1191
				}
				LeafCodeInfo_t::LeafCodeInfo_t(
						const char* szFile,
						int nLine,
						const char* szFunction);  // 1191
				LeafCodeInfo_t::LeafCodeInfo_t(
						const char* szFile,
						int nLine,
						const char* szFunction);  // 1179
				LeafCodeInfo_t::LeafCodeInfo_t(
						const char* szFile,
						int nLine,
						const char* szFunction);  // 1172
			}
			{
				AppSystemRequest_t depRequest; // 1223
				CUtlMemory<CAppSystemDict::InterfaceInfo_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::operator[](
						int i);  // 47
				CUtlSymbol::IsValid(); // 64
				CUtlSymbolTable::AddStringElement(
						const char* pString);  // 37
				CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::Count(); // 43
				CUtlStringMap<CAppSystemDict::InterfaceInfo_t, CUtlSymbolTable>::operator[](
						const char* pString);  // 1221
				memset(void* __dest,
					int __ch,
					size_t __len);  // 1224
				CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::NumAllocated(); // 1196
				CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::Element(
					int i);  // 1201
				CopyConstruct<CAppSystemDict::AppSystemRequest_t>(AppSystemRequest_t* pMemory,
											const AppSystemRequest_t& src);  // 1201
				CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::Base(); // 112
				CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::Base(); // 368
				CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::AddToTail(
						const AppSystemRequest_t& src);  // 1229
				CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::operator[](
						int i);  // 1227
				CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::operator[](
						int i);  // 1221
			}
			CUtlSymbol::IsValid(); // 85
			CUtlStringMap<CAppSystemDict::InterfaceInfo_t, CUtlSymbolTable>::Defined(
				const char* pString);  // 1088
			CUtlSymbol::IsValid(); // 64
			CUtlSymbolTable::AddStringElement(
					const char* pString);  // 37
			CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::Count(); // 43
			CUtlMemory<CAppSystemDict::InterfaceInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::operator[](
					int i);  // 47
			CUtlStringMap<CAppSystemDict::InterfaceInfo_t, CUtlSymbolTable>::operator[](
					const char* pString);  // 1090
			CUtlSymbol::IsValid(); // 64
			CUtlSymbolTable::AddStringElement(
					const char* pString);  // 37
			CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::Count(); // 43
			CUtlMemory<CAppSystemDict::InterfaceInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::operator[](
					int i);  // 47
			CUtlStringMap<CAppSystemDict::InterfaceInfo_t, CUtlSymbolTable>::operator[](
					const char* pString);  // 1091
			CUtlMemory<CAppSystemDict::AppSystemRequest_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::operator[](
					int i);  // 1075
			AppSystemDictCreateInterfaceFn(const char* pName,
							int* pReturnCode);  // 1078
			CUtlSymbol::IsValid(); // 64
			CUtlSymbolTable::AddStringElement(
					const char* pString);  // 95
			CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::Count(); // 96
			CUtlStringMap<CAppSystemDict::InterfaceInfo_t, CUtlSymbolTable>::AddString(
					const char* pString);  // 1203
			CUtlMemory<CAppSystemDict::InterfaceInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::operator[](
					int i);  // 54
			CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::Count(); // 53
			{
			}
			CUtlStringMap<CAppSystemDict::InterfaceInfo_t, CUtlSymbolTable>::operator[](
					IndexType_t n);  // 1204
		}
		CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::Count(); // 1073
	}
	{
		int i; // 1246
		{
			int j; // 1248
			AppSystem_t& system; // 1249
			const InterfaceInfo_t& info; // 1250
			{
				CPathBufferString moduleBuf; // 1261
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 781
				CBufferString::operator char const*(); // 1263
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 601
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 712
				CBufferString::CBufferString(); // 596
				CBufferStringN<200>::CBufferStringN(
						const char* pString,
						int nChars,
						bool bExact,
						bool bGrowable);  // 1261
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 1264
			}
			CUtlMemory<CAppSystemDict::AppSystem_t, int>::NumAllocated(); // 1143
			CUtlMemory<CAppSystemDict::AppSystem_t, int>::Base(); // 112
			CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::Base(); // 368
			CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::ResetDbgInfo(); // 824
			CUtlMemory<CAppSystemDict::AppSystem_t, int>::IsGrowable(); // 823
			CUtlMemory<CAppSystemDict::AppSystem_t, int>::IsExternallyAllocated(); // 859
			CUtlMemory<CAppSystemDict::AppSystem_t, int>::IsExternallyAllocated(); // 861
			CUtlMemory<CAppSystemDict::AppSystem_t, int>::Grow(
				int num);  // 806
			CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::GrowMemory(
					int num);  // 1145
			CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::AddToTail(); // 1248
			CUtlMemory<CAppSystemDict::AppSystem_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::operator[](
					int i);  // 1249
			CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::Count(); // 53
			{
			}
			CUtlMemory<CAppSystemDict::InterfaceInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::operator[](
					int i);  // 54
			CUtlStringMap<CAppSystemDict::InterfaceInfo_t, CUtlSymbolTable>::operator[](
					IndexType_t n);  // 1250
			CUtlSymbol::IsValid(); // 64
			CUtlSymbolTable::AddStringElement(
					const char* pString);  // 37
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 43
			CUtlMemory<short unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
					int i);  // 47
			{
			}
			CUtlMemory<short unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
					int i);  // 41
			CUtlStringMap<short unsigned int, CUtlSymbolTable>::operator[](
					const char* pString);  // 35
			CUtlStringMap<short unsigned int, CUtlSymbolTable>::operator[](
					const char* pString);  // 1283
		}
	}
	{
		int i; // 1289
		{
			IAppSystem* pSystem; // 1291
			CRelativeTickTimer timer; // 1293
			CTimestampedEventScopeHelper timestampEvent; // 1296
			{
				int* _pCrash; // 1300
			}
			CRelativeTickTimer::End(); // 1304
			CRelativeTickCount::GetMillisecondsF(); // 1305
			CUtlMemory<CAppSystemDict::AppSystem_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::operator[](
					int i);  // 1305
			CTimestampedEventScopeHelper::~CTimestampedEventScopeHelper(); // 1306
			CUtlMemory<CAppSystemDict::AppSystem_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::operator[](
					int i);  // 1291
			CRelativeTickCount::Init(); // 547
			CRelativeTickCount::CRelativeTickCount(); // 613
			CRelativeTickTimer::CRelativeTickTimer(); // 1293
			CRelativeTickCount::Sample(); // 618
			CRelativeTickTimer::Start(); // 1294
			CUtlMemory<CAppSystemDict::AppSystem_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::operator[](
					int i);  // 1296
			CUtlMemory<CAppSystemDict::AppSystem_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::operator[](
					int i);  // 1300
			CUtlMemory<CAppSystemDict::AppSystem_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::operator[](
					int i);  // 1300
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 1300
			CTimestampedEventScopeHelper::~CTimestampedEventScopeHelper(); // 1306
		}
	}
	{
		int i; // 1309
		{
			IAppSystem* pSystem; // 1311
			CUtlMemory<CAppSystemDict::AppSystem_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::operator[](
					int i);  // 1311
		}
	}
	{
		int i; // 1315
		{
			IAppSystem* pSystem; // 1317
			CRelativeTickTimer timer; // 1319
			CTimestampedEventScopeHelper timestampEvent; // 1322
			{
				int* _pCrash; // 1326
			}
			CRelativeTickTimer::End(); // 1330
			CRelativeTickCount::GetMillisecondsF(); // 1331
			CUtlMemory<CAppSystemDict::AppSystem_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::operator[](
					int i);  // 1331
			CTimestampedEventScopeHelper::~CTimestampedEventScopeHelper(); // 1332
			CUtlMemory<CAppSystemDict::AppSystem_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::operator[](
					int i);  // 1317
			CRelativeTickCount::Init(); // 547
			CRelativeTickCount::CRelativeTickCount(); // 613
			CRelativeTickTimer::CRelativeTickTimer(); // 1319
			CRelativeTickCount::Sample(); // 618
			CRelativeTickTimer::Start(); // 1320
			CUtlMemory<CAppSystemDict::AppSystem_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::operator[](
					int i);  // 1322
			CUtlMemory<CAppSystemDict::AppSystem_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::operator[](
					int i);  // 1326
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 1326
			CUtlMemory<CAppSystemDict::AppSystem_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::operator[](
					int i);  // 1326
			CTimestampedEventScopeHelper::~CTimestampedEventScopeHelper(); // 1332
		}
	}
	CUtlMemory<CAppSystemDict::InterfaceInfo_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CAppSystemDict::InterfaceInfo_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CAppSystemDict::InterfaceInfo_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 30
	CUtlStringMap<CAppSystemDict::InterfaceInfo_t, CUtlSymbolTable>::CUtlStringMap(
			bool caseInsensitive,
			int growSize,
			int initSize);  // 1069
	CAppSystemDict::GetFactory(); // 1072
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
	CUtlSymbolTable::GetNumStrings(); // 177
	CUtlStringMap<CAppSystemDict::InterfaceInfo_t, CUtlSymbolTable>::GetNumStrings(); // 1234
	{
		int i; // 1721
		CUtlMemory<CAppSystemDict::InterfaceInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::Element(
			int i);  // 1723
		InterfaceInfo_t::~InterfaceInfo_t(); // 1526
		Destruct<CAppSystemDict::InterfaceInfo_t>(InterfaceInfo_t* pMemory); // 1723
	}
	CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CAppSystemDict::InterfaceInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAppSystemDict::InterfaceInfo_t, int>::Purge(); // 903
	CUtlMemory<CAppSystemDict::InterfaceInfo_t, int>::Purge(); // 1799
	CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::Purge(); // 560
	ValidateAlignment<CAppSystemDict::InterfaceInfo_t>(void); // 508
	CUtlMemory<CAppSystemDict::InterfaceInfo_t, int>::Purge(); // 510
	CUtlMemory<CAppSystemDict::InterfaceInfo_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CAppSystemDict::InterfaceInfo_t, CUtlMemory<CAppSystemDict::InterfaceInfo_t, int> >::~CUtlVector(); // 15
	CUtlStringMap<CAppSystemDict::InterfaceInfo_t, CUtlSymbolTable>::~CUtlStringMap(); // 1338
	CUtlVectorBase<CAppSystemDict::AppSystemRequest_t, CUtlMemory<CAppSystemDict::AppSystemRequest_t, int> >::Count(); // 1240
	CUtlMemory<short unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<short unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<short unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 1240
	CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::Count(); // 1244
	CUtlVectorBase<CAppSystemDict::AppSystem_t, CUtlMemory<CAppSystemDict::AppSystem_t, int> >::Count(); // 1288
	CUtlMemory<short unsigned int, int>::Purge(); // 903
	CUtlMemory<short unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Purge(); // 560
	ValidateAlignment<short unsigned int>(void); // 508
	CUtlMemory<short unsigned int, int>::Purge(); // 510
	CUtlMemory<short unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVector(); // 1338
} /* size: 0, variables: 7, inline expansions: 39 (1150 bytes) */

// <04639D15> appframework/appsystemdict.cpp:1344
// variables: 7
void CAppSystemDict::CreateAppWindow(const char* pTitle, int nPlatWindowFlags, int x, int y, int w, int h, int nRefreshRateHz)
{
	PlatWindow_t hWnd; // 1382
	{
		int nIgnoreWidth; // 1355
		int nIgnoreHeight; // 1355
	}
	{
		int nDesktopX; // 1367
		int nDesktopY; // 1368
		int nDesktopWidth; // 1369
		int nDesktopHeight; // 1370
	}
} /* size: 477, variables: 1 */

// <04639CD5> appframework/appsystemdict.cpp:1422
// variable: 1
void* AppSystemDictCreateInterfaceFn(const char* pName, int* pReturnCode)
{
	void* pInterface; // 1424
} /* size: 0, variables: 1 */

// <0464D38A> appframework/appsystemdict.cpp:1436
void CAppSystemDict::GetFactory()
{
} /* size: 12 */

