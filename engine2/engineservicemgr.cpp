
//
// engine2/engineservicemgr.cpp
//
//	referenced by: libengine2.so
//
//	functions: 69
//	classes: 2
//

// <0023C1C7> engine2/engineservicemgr.cpp:46
void* __CreateCEngineServiceMgrIEngineServiceMgr_interface(void)
{
} /* size: 12 */

// <0023B1FC> engine2/engineservicemgr.cpp:62
// function calls: 57
void CEngineServiceMgr::CEngineServiceMgr()
{
	IAppSystem::IAppSystem(); // 355
	IEngineServiceMgr::IEngineServiceMgr(); // 120
	CBaseAppSystem<IEngineServiceMgr>::CBaseAppSystem(); // 171
	CTier0AppSystem<IEngineServiceMgr, 0>::CTier0AppSystem(); // 225
	CTier1AppSystem<IEngineServiceMgr, 0>::CTier1AppSystem(); // 48
	CUtlMemory<ResourceManifestDesc_t::ValidateGrowSize(); // 475
	CUtlMemory<ResourceManifestDesc_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ResourceManifestDesc_t::ResetDbgInfo(); // 530
	CUtlVectorBase<ResourceManifestDesc_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ResourceManifestDesc_t::CUtlVector(); // 48
	CTier2AppSystem<IEngineServiceMgr, 0>::CTier2AppSystem(); // 18
	CTier3AppSystem<IEngineServiceMgr, 0>::CTier3AppSystem(); // 62
	IPrerequisiteRegistry::IPrerequisiteRegistry(); // 207
	ILoopModePrerequisiteRegistry::ILoopModePrerequisiteRegistry(); // 62
	CUtlMemory<CLoopTypeBase::ValidateGrowSize(); // 475
	CUtlMemory<CLoopTypeBase::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CLoopTypeBase::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CLoopTypeBase::ResetDbgInfo(); // 530
	CUtlVectorBase<CLoopTypeBase::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<CLoopTypeBase::CUtlVector(
			int growSize,
			int initCapacity);  // 30
	CUtlStringMap<CLoopTypeBase::CUtlStringMap(
			bool caseInsensitive,
			int growSize,
			int initSize);  // 62
	CUtlMemory<IPrerequisite::ValidateGrowSize(); // 475
	CUtlMemory<IPrerequisite::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<IPrerequisite::ResetDbgInfo(); // 530
	CUtlVectorBase<IPrerequisite::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<IPrerequisite::CUtlVector(); // 62
	CUtlMemory<IEngineService::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<IEngineService::ValidateGrowSize(); // 475
	CUtlMemory<IEngineService::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<IEngineService::ResetDbgInfo(); // 530
	CUtlVectorBase<IEngineService::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<IEngineService::CUtlVector(
			int growSize,
			int initCapacity);  // 30
	CUtlStringMap<IEngineService::CUtlStringMap(
			bool caseInsensitive,
			int growSize,
			int initSize);  // 62
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 63
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CSchemaClassInfo::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CSchemaClassInfo::ValidateGrowSize(); // 475
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CSchemaClassInfo::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CSchemaClassInfo::InvalidIterator(); // 489
	CUtlRBTree<CUtlMap<const CSchemaClassInfo::ResetDbgInfo(); // 491
	CUtlRBTree<CUtlMap<const CSchemaClassInfo::CUtlRBTree(
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 63
	CUtlMap<const CSchemaClassInfo::CUtlMap(
		int growSize,
		int initSize,
		LessFunc_t lessfunc);  // 1128
	CEventDispatcher_Identified<CEventIDManager_Default>::CEventDispatcher_Identified(
					int nInitialEventCount);  // 1108
	CEventDispatcher<CEventIDManager_Default>::CEventDispatcher(
			int nInitialEventCount);  // 62
	V_memset(void* dest,
		int fill,
		size_t count);  // 213
	RenderDisplayMode_t::RenderDisplayMode_t(); // 239
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 239
	RenderDeviceInfo_t::RenderDeviceInfo_t(); // 55
	VideoModeChange_t::VideoModeChange_t(); // 62
	CUtlMemory<ISwitchLoopModeStatusNotify::ValidateGrowSize(); // 475
	CUtlMemory<ISwitchLoopModeStatusNotify::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ISwitchLoopModeStatusNotify::ResetDbgInfo(); // 530
	CUtlVectorBase<ISwitchLoopModeStatusNotify::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ISwitchLoopModeStatusNotify::CUtlVector(); // 62
} /* size: 541, inline expansions: 57 (1253 bytes) */

// <0023B1E3> engine2/engineservicemgr.cpp:62
void CEngineServiceMgr::CEngineServiceMgr()
{
} /* size: 0 */

// <0023B0BE> engine2/engineservicemgr.cpp:78
// function calls: 2
void CEngineServiceMgr::Connect(CreateInterfaceFn factory)
{
	CTier0AppSystem<IEngineServiceMgr, 0>::Connect(
		CreateInterfaceFn factory);  // 54
	CTier2AppSystem<IEngineServiceMgr, 0>::Connect(
		CreateInterfaceFn factory);  // 80
} /* size: 110, inline expansions: 2 (54 bytes) */

// <0023B096> engine2/engineservicemgr.cpp:92
// variables: 2
void WatchdogHandler(void)
{
	const char   __FUNCTION__; // 19922
	{
		int* _pCrash; // 105
	}
} /* size: 0, variables: 1 */

// <0023AFDD> engine2/engineservicemgr.cpp:112
// function call: 1
void CEngineWatchdogThread::~CEngineWatchdogThread()
{
	CUtlString::~CUtlString(); // 112
} /* size: 61, inline expansions: 1 (15 bytes) */

// <0023AF11> engine2/engineservicemgr.cpp:112
// function calls: 2
void CEngineWatchdogThread::~CEngineWatchdogThread()
{
	CUtlString::~CUtlString(); // 112
	CEngineWatchdogThread::~CEngineWatchdogThread(); // 112
} /* size: 74, inline expansions: 2 (55 bytes) */

// <0023AEF5> engine2/engineservicemgr.cpp:112
inline void CEngineWatchdogThread::~CEngineWatchdogThread()
{
} /* size: 0 */

// <0022255E> engine2/engineservicemgr.cpp:112
// member functions: 17
// member variables: 4
// vtable entry: 1
// class size: 424
class CEngineWatchdogThread : public CThread {
public:
	/* class CThread <ancestor>; */ /* 0 0 */
	void CEngineWatchdogThread(CEngineWatchdogThread* , CEngineWatchdogThread& );
	void CEngineWatchdogThread(CEngineWatchdogThread* , const CEngineWatchdogThread& );
	/* engine2/engineservicemgr.cpp:115 */
	void CEngineWatchdogThread(CEngineWatchdogThread* );
	/* engine2/engineservicemgr.cpp:122 */
	CEngineWatchdogThread& GetWatchdogThread(void);
	/* engine2/engineservicemgr.cpp:128 */
	void StartRun(CEngineWatchdogThread* );
	/* engine2/engineservicemgr.cpp:136 */
	void ScheduleShutdown(CEngineWatchdogThread* , int, const char* , void (*)(void));
	/* engine2/engineservicemgr.cpp:152 */
	virtual int Run(CEngineWatchdogThread* );
private:
	double m_flShutdownTime; /* 400 8 */
	CUtlString m_strShutdownReason; /* 408 8 */
	void (*m_pCallback)(void); /* 416 8* /
	virtual void ~CEngineWatchdogThread(CEngineWatchdogThread* );
	void CEngineWatchdogThread(class CEngineWatchdogThread *, class CEngineWatchdogThread &); /* linkage=_ZN21CEngineWatchdogThreadC4EOS_ */
	void CEngineWatchdogThread(class CEngineWatchdogThread *, const class CEngineWatchdogThread  &); /* linkage=_ZN21CEngineWatchdogThreadC4ERKS_ */
	void CEngineWatchdogThread(class CEngineWatchdogThread *); /* linkage=_ZN21CEngineWatchdogThreadC4Ev */
	class CEngineWatchdogThread & GetWatchdogThread(void); /* linkage=_ZN21CEngineWatchdogThread17GetWatchdogThreadEv */
	void StartRun(class CEngineWatchdogThread *); /* linkage=_ZN21CEngineWatchdogThread8StartRunEv */
	void ScheduleShutdown(class CEngineWatchdogThread *, int, const char  *, void (*)(void)); /* linkage=_ZN21CEngineWatchdogThread16ScheduleShutdownEiPKcPFvvE */
	virtual int Run(class CEngineWatchdogThread *); /* linkage=_ZN21CEngineWatchdogThread3RunEv */
	virtual void ~CEngineWatchdogThread(class CEngineWatchdogThread *); /* linkage=_ZN21CEngineWatchdogThreadD4Ev */
};

// <0023B07F> engine2/engineservicemgr.cpp:115
void CEngineWatchdogThread::CEngineWatchdogThread()
{
} /* size: 0 */

// <0023B066> engine2/engineservicemgr.cpp:115
inline void CEngineWatchdogThread::CEngineWatchdogThread()
{
} /* size: 0 */

// <0023AECD> engine2/engineservicemgr.cpp:122
// variable: 1
inline void GetWatchdogThread(void)
{
	CEngineWatchdogThread s_instance; // 124
} /* size: 0, variables: 1 */

// <0023AEB4> engine2/engineservicemgr.cpp:128
inline void CEngineWatchdogThread::StartRun()
{
} /* size: 0 */

// <0023AE77> engine2/engineservicemgr.cpp:136
inline void CEngineWatchdogThread::ScheduleShutdown(int nSecondsFromNow, const char* pszReason, void (*pCallback)(void))
{
} /* size: 0 */

// <0023AC96> engine2/engineservicemgr.cpp:152
// variables: 3
// function calls: 3
void CEngineWatchdogThread::Run()
{
	{
		double flShutdownTime; // 163
		{
			double flNow; // 167
			CUtlString::Get(); // 170
		}
		{
			int* _pCrash; // 105
		}
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 105
		WatchdogHandler(void); // 159
	}
} /* size: 261 */

// <0023AC79> engine2/engineservicemgr.cpp:196
void WatchdogHandlerSetTrigger(void)
{
} /* size: 12 */

// <0023AC6B> engine2/engineservicemgr.cpp:204
inline bool ShouldUseWatchdog(void)
{
} /* size: 0 */

// <0023A96A> engine2/engineservicemgr.cpp:210
// variables: 2
// function calls: 9
void CEngineServiceMgr::Init()
{
	InitReturnVal_t nRetVal; // 212
	const char   __FUNCTION__; // 19630
	CTier0AppSystem<IEngineServiceMgr, 0>::Init(); // 71
	CTier2AppSystem<IEngineServiceMgr, 0>::Init(); // 212
	Plat_IsInDebugSession(void); // 206
	ShouldUseWatchdog(void); // 216
	CUtlString::CUtlString(); // 117
	CEngineWatchdogThread::CEngineWatchdogThread(); // 124
	GetWatchdogThread(void); // 122
	GetWatchdogThread(void); // 218
	CEngineWatchdogThread::StartRun(); // 218
} /* size: 292, variables: 2, inline expansions: 9 (435 bytes) */

// <0024FCDE> engine2/engineservicemgr.cpp:236
void CEngineServiceMgr::CheapHeapValidity(const char* pTag)
{
} /* size: 0 */

// <0023A50C> engine2/engineservicemgr.cpp:252
// variables: 3
// function calls: 17
void CEngineServiceMgr::Shutdown()
{
	int nCount; // 254
	const char   __FUNCTION__; // 19733
	{
		UtlSymId_t i; // 255
		CUtlVectorBase<CLoopTypeBase::Count(); // 53
		{
		}
		CUtlMemory<CLoopTypeBase::operator[](
				int i);  // 588
		CUtlVectorBase<CLoopTypeBase::operator[](
				int i);  // 54
		CUtlStringMap<CLoopTypeBase::operator[](
				IndexType_t n);  // 257
		CUtlMemory<CLoopTypeBase::operator[](
				int i);  // 588
		CUtlVectorBase<CLoopTypeBase::operator[](
				int i);  // 54
		CUtlVectorBase<CLoopTypeBase::Count(); // 53
		{
		}
		CUtlStringMap<CLoopTypeBase::operator[](
				IndexType_t n);  // 259
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
	CUtlSymbolTable::GetNumStrings(); // 177
	CUtlStringMap<CLoopTypeBase::GetNumStrings(); // 254
	CUtlVectorBase<CLoopTypeBase::RemoveAll(); // 194
	CUtlStringMap<CLoopTypeBase::Clear(); // 262
	CUtlVectorBase<IEngineService::RemoveAll(); // 194
	CUtlStringMap<IEngineService::Clear(); // 266
	CTier0AppSystem<IEngineServiceMgr, 0>::Shutdown(); // 85
	CTier2AppSystem<IEngineServiceMgr, 0>::Shutdown(); // 270
} /* size: 0, variables: 2, inline expansions: 9 (128 bytes) */

// <0023A465> engine2/engineservicemgr.cpp:277
void SetEngineState(PlatWindow_t hWnd, SwapChainHandle_t hSwapChain)
{
} /* size: 62 */

// <0023A44B> engine2/engineservicemgr.cpp:288
void ResetEngineState(void)
{
} /* size: 27 */

// <0023A41D> engine2/engineservicemgr.cpp:302
void CEngineServiceMgr::GetEngineWindow()
{
} /* size: 12 */

// <0023A3EF> engine2/engineservicemgr.cpp:307
void CEngineServiceMgr::GetEngineSwapChain()
{
} /* size: 12 */

// <0023A3BB> engine2/engineservicemgr.cpp:312
void CEngineServiceMgr::GetEngineDeviceInfo()
{
} /* size: 30 */

// <0024FD11> engine2/engineservicemgr.cpp:317
// variable: 1
// function call: 1
void GetSwapChainSize(int* pWidth, int* pHeight)
{
	const RenderDeviceInfo_t& info; // 319
	RenderDeviceInfo_t::DoesCoverMonitor(); // 320
} /* size: 87, variables: 1, inline expansions: 1 (0 bytes) */

// <0023A388> engine2/engineservicemgr.cpp:317
// variable: 1
void GetSwapChainSize(int* pWidth, int* pHeight)
{
	const RenderDeviceInfo_t& info; // 319
} /* size: 0, variables: 1 */

// <0023A2B8> engine2/engineservicemgr.cpp:332
// function calls: 2
void CEngineServiceMgr::GetEngineSwapChainSize(int* pWidth, int* pHeight)
{
	RenderDeviceInfo_t::DoesCoverMonitor(); // 320
	GetSwapChainSize(int* pWidth,
			int* pHeight);  // 334
} /* size: 87, inline expansions: 2 (59 bytes) */

// <0023A28A> engine2/engineservicemgr.cpp:337
void CEngineServiceMgr::GetEventDispatcher()
{
} /* size: 12 */

// <0023A25C> engine2/engineservicemgr.cpp:342
void CEngineServiceMgr::GetDebugVisualizerMgr()
{
} /* size: 12 */

// <00239DCA> engine2/engineservicemgr.cpp:351
// variables: 3
// function calls: 12
void CEngineServiceMgr::RegisterEngineService(const char* pName, IEngineService* pService)
{
	const char   __FUNCTION__; // 20074
	UtlSymId_t nServiceIndex; // 361
	{
		int* _pCrash; // 355
	}
	CUtlSymbol::IsValid(); // 85
	CUtlStringMap<IEngineService::Defined(
		const char* pString);  // 353
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 355
	CTier1Application::AddSystem(
			IAppSystem* pAppSystem,
			const char* pInterfaceName);  // 359
	CUtlSymbol::IsValid(); // 64
	CUtlSymbolTable::AddStringElement(
			const char* pString);  // 95
	CUtlVectorBase<IEngineService::Count(); // 96
	CUtlStringMap<IEngineService::AddString(
			const char* pString);  // 361
	CUtlMemory<IEngineService::operator[](
			int i);  // 588
	CUtlVectorBase<IEngineService::operator[](
			int i);  // 54
	CUtlVectorBase<IEngineService::Count(); // 53
	{
	}
	CUtlStringMap<IEngineService::operator[](
			IndexType_t n);  // 363
} /* size: 0, variables: 2, inline expansions: 12 (284 bytes) */

// <002399B5> engine2/engineservicemgr.cpp:366
// function calls: 12
void CEngineServiceMgr::UnregisterEngineService(const char* pName, IEngineService* pService)
{
	CUtlSymbol::IsValid(); // 85
	CUtlStringMap<IEngineService::Defined(
		const char* pString);  // 368
	CTier1Application::RemoveSystem(
			IAppSystem* pAppSystem);  // 371
	CUtlSymbol::IsValid(); // 64
	CUtlSymbolTable::AddStringElement(
			const char* pString);  // 37
	CUtlVectorBase<IEngineService::Count(); // 43
	CUtlMemory<IEngineService::operator[](
			int i);  // 588
	CUtlVectorBase<IEngineService::operator[](
			int i);  // 47
	{
	}
	CUtlMemory<IEngineService::operator[](
			int i);  // 588
	CUtlVectorBase<IEngineService::operator[](
			int i);  // 41
	CUtlStringMap<IEngineService::operator[](
			const char* pString);  // 35
	CUtlStringMap<IEngineService::operator[](
			const char* pString);  // 372
} /* size: 0, inline expansions: 12 (273 bytes) */

// <002391D7> engine2/engineservicemgr.cpp:379
// variables: 7
// function calls: 21
void CEngineServiceMgr::RegisterLoopMode(const char* pLoopName, ILoopModeFactory* pFactory, void** ppGlobalPointer)
{
	UtlSymId_t id; // 381
	const char   __FUNCTION__; // 19949
	CLoopTypeBase* pLoopType; // 388
	LoopModeType_t clientLoopType; // 389
	{
		int* _pCrash; // 384
	}
	{
		int* _pCrash; // 397
	}
	{
		int* _pCrash; // 403
	}
	CUtlSymbol::IsValid(); // 88
	CUtlSymbolTable::FindElement(
			const char* pString);  // 90
	CUtlStringMap<CLoopTypeBase::Find(
		const char* pString);  // 381
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 384
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 403
	ILoopType::ILoopType(); // 33
	CUtlMemory<IEngineService::ValidateGrowSize(); // 475
	CUtlMemory<IEngineService::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<IEngineService::ResetDbgInfo(); // 530
	CUtlVectorBase<IEngineService::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<IEngineService::CUtlVector(); // 33
	CUtlMemory<IEngineService::ValidateGrowSize(); // 475
	CUtlMemory<IEngineService::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<IEngineService::ResetDbgInfo(); // 530
	CUtlVectorBase<IEngineService::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<IEngineService::CUtlVector(); // 33
	CLoopTypeBase::CLoopTypeBase(); // 35
	IRenderDeviceEventListener::IRenderDeviceEventListener(); // 20
	CSboxRenderTargetFlusher::CSboxRenderTargetFlusher(); // 35
	CLoopTypeSimple::CLoopTypeSimple(); // 393
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 397
} /* size: 552, variables: 4, inline expansions: 21 (485 bytes) */

// <00238C56> engine2/engineservicemgr.cpp:410
// variables: 2
// function calls: 19
void CEngineServiceMgr::UnregisterLoopMode(const char* pLoopName, ILoopModeFactory* pFactory, void** ppGlobalPointer)
{
	UtlSymId_t id; // 412
	CLoopTypeBase* pLoopType; // 417
	CUtlSymbol::IsValid(); // 88
	CUtlSymbolTable::FindElement(
			const char* pString);  // 90
	CUtlStringMap<CLoopTypeBase::Find(
		const char* pString);  // 412
	CUtlVectorBase<CLoopTypeBase::Count(); // 53
	{
	}
	CUtlMemory<CLoopTypeBase::operator[](
			int i);  // 588
	CUtlVectorBase<CLoopTypeBase::operator[](
			int i);  // 54
	CUtlStringMap<CLoopTypeBase::operator[](
			IndexType_t n);  // 417
	CUtlMemory<CLoopTypeBase::operator[](
			int i);  // 588
	CUtlVectorBase<CLoopTypeBase::operator[](
			int i);  // 54
	CUtlVectorBase<CLoopTypeBase::Count(); // 53
	{
	}
	CUtlStringMap<CLoopTypeBase::operator[](
			IndexType_t n);  // 419
	CUtlVectorBase<CLoopTypeBase::Count(); // 53
	{
	}
	CUtlMemory<CLoopTypeBase::operator[](
			int i);  // 588
	CUtlVectorBase<CLoopTypeBase::operator[](
			int i);  // 54
	CUtlStringMap<CLoopTypeBase::operator[](
			IndexType_t n);  // 420
	CUtlVectorBase<CLoopTypeBase::Count(); // 53
	{
	}
	CUtlMemory<CLoopTypeBase::operator[](
			int i);  // 588
	CUtlVectorBase<CLoopTypeBase::operator[](
			int i);  // 54
	CUtlStringMap<CLoopTypeBase::operator[](
			IndexType_t n);  // 421
} /* size: 0, variables: 2, inline expansions: 19 (353 bytes) */

// <00238BB3> engine2/engineservicemgr.cpp:424
// function call: 1
void LoopRequest_t::~LoopRequest_t()
{
	CUtlString::~CUtlString(); // 431
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00238B96> engine2/engineservicemgr.cpp:424
void LoopRequest_t::~LoopRequest_t()
{
} /* size: 0 */

// <00238854> engine2/engineservicemgr.cpp:433
// variables: 4
// function calls: 7
void CEngineServiceMgr::SwitchToLoop(const char* pLoopName, KeyValues* pInfo, uint32 unRequestId, bool bIdle)
{
	UtlSymId_t loopId; // 435
	const char   __FUNCTION__; // 19841
	LoopRequest_t* loopRequest; // 442
	{
		int* _pCrash; // 438
	}
	CUtlSymbol::IsValid(); // 88
	CUtlSymbolTable::FindElement(
			const char* pString);  // 90
	CUtlStringMap<CLoopTypeBase::Find(
		const char* pString);  // 435
	CUtlString::operator=(
			const char* src);  // 446
	CUtlString::CUtlString(); // 105
	LoopRequest_t::LoopRequest_t(); // 442
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 438
} /* size: 314, variables: 3, inline expansions: 7 (137 bytes) */

// <002384AA> engine2/engineservicemgr.cpp:460
// variables: 7
// function calls: 9
void CEngineServiceMgr::DiscardLoopRequest(LoopRequest_t** ppRequest, bool bSuccess)
{
	const char   __FUNCTION__; // 19998
	LoopRequest_t* pRequest; // 463
	CUtlString loopName; // 465
	uint32 unRequestId; // 466
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 462
	}
	{
		int i; // 472
		{
			ISwitchLoopModeStatusNotify* pNotify; // 474
			CUtlString::Get(); // 475
			CUtlMemory<ISwitchLoopModeStatusNotify::operator[](
					int i);  // 588
			CUtlVectorBase<ISwitchLoopModeStatusNotify::operator[](
					int i);  // 474
		}
		CUtlVectorBase<ISwitchLoopModeStatusNotify::Count(); // 472
	}
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 465
	CUtlString::~CUtlString(); // 431
	LoopRequest_t::~LoopRequest_t(); // 469
	CUtlString::~CUtlString(); // 479
} /* size: 0, variables: 4, inline expansions: 5 (139 bytes) */

// <0023831E> engine2/engineservicemgr.cpp:481
// variable: 1
// function calls: 6
void CEngineServiceMgr::GetActiveLoopName()
{
	CLoopTypeBase* pLoop; // 483
	CUtlVectorBase<CLoopTypeBase::Count(); // 53
	{
	}
	CUtlMemory<CLoopTypeBase::operator[](
			int i);  // 588
	CUtlVectorBase<CLoopTypeBase::operator[](
			int i);  // 54
	CUtlStringMap<CLoopTypeBase::operator[](
			IndexType_t n);  // 491
	CEngineServiceMgr::GetActiveLoop(); // 483
	CLoopTypeBase::GetName(); // 484
} /* size: 0, variables: 1, inline expansions: 6 (136 bytes) */

// <0024FD8D> engine2/engineservicemgr.cpp:487
// function calls: 4
void CEngineServiceMgr::GetActiveLoop()
{
	CUtlVectorBase<CLoopTypeBase::Count(); // 53
	{
	}
	CUtlMemory<CLoopTypeBase::operator[](
			int i);  // 588
	CUtlVectorBase<CLoopTypeBase::operator[](
			int i);  // 54
	CUtlStringMap<CLoopTypeBase::operator[](
			IndexType_t n);  // 491
} /* size: 0, inline expansions: 4 (0 bytes) */

// <00238305> engine2/engineservicemgr.cpp:487
void CEngineServiceMgr::GetActiveLoop()
{
} /* size: 0 */

// <002380DB> engine2/engineservicemgr.cpp:494
// variable: 1
// function calls: 7
void CEngineServiceMgr::FindService(const char* pServiceName)
{
	UtlSymId_t serviceId; // 496
	CUtlSymbol::IsValid(); // 88
	CUtlSymbolTable::FindElement(
			const char* pString);  // 90
	CUtlStringMap<IEngineService::Find(
		const char* pString);  // 496
	CUtlVectorBase<IEngineService::Count(); // 53
	{
	}
	CUtlMemory<IEngineService::operator[](
			int i);  // 588
	CUtlVectorBase<IEngineService::operator[](
			int i);  // 54
	CUtlStringMap<IEngineService::operator[](
			IndexType_t n);  // 499
} /* size: 0, variables: 1, inline expansions: 7 (105 bytes) */

// <0023805C> engine2/engineservicemgr.cpp:502
// function calls: 2
void CEngineServiceMgr::ExitMainLoop()
{
	CAppSystemDict::IsInToolsMode(); // 110
	CTier1Application::IsInToolsMode(); // 504
} /* size: 132, inline expansions: 2 (22 bytes) */

// <00237EA3> engine2/engineservicemgr.cpp:519
// variables: 2
// function calls: 4
void CEngineServiceMgr::DeactivateCurrentLoop(const EngineLoopState_t& state)
{
	bool bChanged; // 522
	{
		CLoopTypeBase* pLoop; // 526
		CUtlVectorBase<CLoopTypeBase::Count(); // 53
		{
		}
		CUtlMemory<CLoopTypeBase::operator[](
				int i);  // 588
		CUtlVectorBase<CLoopTypeBase::operator[](
				int i);  // 54
		CUtlStringMap<CLoopTypeBase::operator[](
				IndexType_t n);  // 526
	}
} /* size: 0, variables: 1 */

// <00237CDC> engine2/engineservicemgr.cpp:548
// variables: 2
// function calls: 6
void CEngineServiceMgr::ClearPrerequisites()
{
	{
		int i; // 551
		{
			IPrerequisite* prereq; // 553
			{
			}
			IPrerequisite::Release(); // 135
			IPrerequisite::Release(); // 554
			CUtlMemory<IPrerequisite::operator[](
					int i);  // 588
			CUtlVectorBase<IPrerequisite::operator[](
					int i);  // 553
		}
		CUtlVectorBase<IPrerequisite::Count(); // 551
	}
	CUtlVectorBase<IPrerequisite::RemoveAll(); // 556
} /* size: 0, inline expansions: 1 (11 bytes) */

// <00237B6F> engine2/engineservicemgr.cpp:564
// function calls: 4
void CEngineServiceMgr::CleanupQueuedLoop()
{
	CUtlVectorBase<CLoopTypeBase::Count(); // 53
	{
	}
	CUtlMemory<CLoopTypeBase::operator[](
			int i);  // 588
	CUtlVectorBase<CLoopTypeBase::operator[](
			int i);  // 54
	CUtlStringMap<CLoopTypeBase::operator[](
			IndexType_t n);  // 569
} /* size: 0, inline expansions: 4 (46 bytes) */

// <00237B13> engine2/engineservicemgr.cpp:579
void CEngineServiceMgr::LookupLocalizationToken(const char* pToken)
{
} /* size: 35 */

// <002517DB> engine2/engineservicemgr.cpp:590
// function calls: 11
void CEngineServiceMgr::AddPrerequisite(IPrerequisite* pPrerequisite)
{
	IPrerequisite::AddRef(); // 592
	CUtlMemory<IPrerequisite::NumAllocated(); // 1196
	CUtlMemory<IPrerequisite::operator[](
			int i);  // 602
	CUtlVectorBase<IPrerequisite::Element(
		int i);  // 1201
	CopyConstruct<IPrerequisite*>(IPrerequisite** pMemory,
					IPrerequisite* const& src);  // 1201
	CUtlMemory<IPrerequisite::Base(); // 112
	CUtlVectorBase<IPrerequisite::Base(); // 368
	CUtlVectorBase<IPrerequisite::ResetDbgInfo(); // 824
	CUtlVectorBase<IPrerequisite::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<IPrerequisite::AddToTail(
			IPrerequisite* const& src);  // 593
	CUtlVectorBase<IPrerequisite::Count(); // 594
} /* size: 186, inline expansions: 11 (225 bytes) */

// <00237AED> engine2/engineservicemgr.cpp:590
void CEngineServiceMgr::AddPrerequisite(IPrerequisite* pPrerequisite)
{
} /* size: 0 */

// <00237730> engine2/engineservicemgr.cpp:597
// variable: 1
// function calls: 16
void CEngineServiceMgr::RemovePrerequisite(IPrerequisite* pPrerequisite)
{
	{
		int i; // 1531
		CUtlVectorBase<IPrerequisite::Count(); // 1531
		CUtlMemory<IPrerequisite::operator[](
				int i);  // 609
		CUtlVectorBase<IPrerequisite::Element(
			int i);  // 1533
	}
	CUtlVectorBase<IPrerequisite::Find(
		IPrerequisite* const& src);  // 1617
	CUtlMemory<IPrerequisite::operator[](
			int i);  // 602
	CUtlVectorBase<IPrerequisite::Element(
		int i);  // 1114
	CUtlMemory<IPrerequisite::operator[](
			int i);  // 602
	CUtlVectorBase<IPrerequisite::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<IPrerequisite::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<IPrerequisite::Remove(
		int elem);  // 1620
	CUtlVectorBase<IPrerequisite::FindAndRemove(
			IPrerequisite* const& src);  // 599
	{
	}
	IPrerequisite::Release(); // 135
	IPrerequisite::Release(); // 601
	CUtlVectorBase<IPrerequisite::Count(); // 602
} /* size: 0, inline expansions: 13 (611 bytes) */

// <002374D1> engine2/engineservicemgr.cpp:606
// variables: 3
// function calls: 8
void CEngineServiceMgr::GetPrerequisiteStatus(float64 flTimeoutTime)
{
	{
		int i; // 608
		{
			PrerequisiteStatus_t nStatus; // 610
			IPrerequisite* pTemp; // 619
			CUtlMemory<IPrerequisite::operator[](
					int i);  // 588
			CUtlVectorBase<IPrerequisite::operator[](
					int i);  // 619
			CUtlMemory<IPrerequisite::operator[](
					int i);  // 588
			CUtlVectorBase<IPrerequisite::operator[](
					int i);  // 620
			CUtlMemory<IPrerequisite::operator[](
					int i);  // 588
			CUtlVectorBase<IPrerequisite::operator[](
					int i);  // 621
			CUtlMemory<IPrerequisite::operator[](
					int i);  // 588
			CUtlVectorBase<IPrerequisite::operator[](
					int i);  // 610
		}
	}
} /* size: 201 */

// <0024FEB1> engine2/engineservicemgr.cpp:634
// function calls: 2
void CEngineServiceMgr::SerializeAsyncFileReads()
{
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 636
} /* size: 0, inline expansions: 2 (0 bytes) */

// <0024E355> engine2/engineservicemgr.cpp:634
// variables: 2
// function call: 1
void CEngineServiceMgr::SerializeAsyncFileReads()
{
	{
		bool bReportingSyncOpens; // 639
		int reportLevel; // 640
		ConVar::GetInt(); // 639
	}
} /* size: 186 */

// <00237485> engine2/engineservicemgr.cpp:634
// variables: 3
void CEngineServiceMgr::SerializeAsyncFileReads()
{
	{
		ConVar* pSyncReportConVar; // 638
		bool bReportingSyncOpens; // 639
		int reportLevel; // 640
	}
} /* size: 0 */

// <002371A7> engine2/engineservicemgr.cpp:659
// function calls: 7
void CEngineServiceMgr::SetGameWatchdogShutdownTime(int nSecondsFromNow, const char* pszReason, void (*pCallback)(void))
{
	CUtlString::CUtlString(); // 117
	CEngineWatchdogThread::CEngineWatchdogThread(); // 124
	GetWatchdogThread(void); // 122
	GetWatchdogThread(void); // 661
	CEngineWatchdogThread::StartRun(); // 138
	CUtlString::operator=(
			const char* src);  // 148
	CEngineWatchdogThread::ScheduleShutdown(
			int nSecondsFromNow,
			const char* pszReason,
			void (*pCallback)(void));  // 661
} /* size: 296, inline expansions: 7 (473 bytes) */

// <0023710D> engine2/engineservicemgr.cpp:672
// variable: 1
void CEngineServiceMgr::MainLoop(float64 flCurrTime, float64 flPrevTime)
{
	MainLoopResult_t mlr; // 674
} /* size: 43, variables: 1 */

// <00220BDE> engine2/engineservicemgr.cpp:684
// member functions: 4
// class size: 1
class CDedicatedWatchdogTimerScope {
	/* engine2/engineservicemgr.cpp:687 */
	void CDedicatedWatchdogTimerScope(CDedicatedWatchdogTimerScope* , int);
	/* engine2/engineservicemgr.cpp:695 */
	void ~CDedicatedWatchdogTimerScope(CDedicatedWatchdogTimerScope* );
	void CDedicatedWatchdogTimerScope(class CDedicatedWatchdogTimerScope *, int); /* linkage=_ZN28CDedicatedWatchdogTimerScopeC4Ei */
	void ~CDedicatedWatchdogTimerScope(class CDedicatedWatchdogTimerScope *); /* linkage=_ZN28CDedicatedWatchdogTimerScopeD4Ev */
};

// <002370F1> engine2/engineservicemgr.cpp:687
void CDedicatedWatchdogTimerScope::CDedicatedWatchdogTimerScope(int seconds)
{
} /* size: 0 */

// <002370CB> engine2/engineservicemgr.cpp:687
inline void CDedicatedWatchdogTimerScope::CDedicatedWatchdogTimerScope(int seconds)
{
} /* size: 0 */

// <002370B4> engine2/engineservicemgr.cpp:695
void CDedicatedWatchdogTimerScope::~CDedicatedWatchdogTimerScope()
{
} /* size: 0 */

// <0023709B> engine2/engineservicemgr.cpp:695
inline void CDedicatedWatchdogTimerScope::~CDedicatedWatchdogTimerScope()
{
} /* size: 0 */

// <00236603> engine2/engineservicemgr.cpp:704
// variables: 16
// function calls: 26
void CEngineServiceMgr::_MainLoop(float64 flCurrTime, float64 flPrevTime)
{
	CDedicatedWatchdogTimerScope dedicatedWatchdogTimerScope; // 708
	double t; // 711
	int nWndX; // 714
	int nWndY; // 714
	float flContentsScale; // 717
	EngineLoopState_t state; // 735
	const char   __FUNCTION__; // 19760
	float64 flCurTime; // 850
	PrerequisiteStatus_t nStatus; // 851
	int nLoopIndex; // 873
	{
		eToolsQuitState quitState; // 742
	}
	{
		const int  MAX_RESOURCE_SYSTEM_UPDATE_TIME_NS; // 797
	}
	{
		bool bRequestedLoopIsCurrentLoop; // 812
		int loopid; // 832
		CLoopTypeBase* pMainLoop; // 833
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 828
		}
		CUtlVectorBase<CLoopTypeBase::Count(); // 53
		{
		}
		CUtlMemory<CLoopTypeBase::operator[](
				int i);  // 588
		CUtlVectorBase<CLoopTypeBase::operator[](
				int i);  // 54
		CUtlStringMap<CLoopTypeBase::operator[](
				IndexType_t n);  // 833
		CLoopTypeBase::SetRequestId(
				uint32 unRequestId);  // 835
	}
	Plat_IsInDebugSession(void); // 206
	ShouldUseWatchdog(void); // 689
	CDedicatedWatchdogTimerScope::CDedicatedWatchdogTimerScope(
					int seconds);  // 708
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 636
	CEngineServiceMgr::SerializeAsyncFileReads(); // 726
	CUtlVectorBase<CLoopTypeBase::Count(); // 53
	{
	}
	CUtlMemory<CLoopTypeBase::operator[](
			int i);  // 588
	CUtlVectorBase<CLoopTypeBase::operator[](
			int i);  // 54
	CUtlStringMap<CLoopTypeBase::operator[](
			IndexType_t n);  // 789
	CUtlString::Get(); // 99
	CUtlString::String(); // 859
	CDedicatedWatchdogTimerScope::~CDedicatedWatchdogTimerScope(); // 889
	CUtlString::Get(); // 99
	CUtlString::String(); // 880
	CUtlVectorBase<CLoopTypeBase::Count(); // 53
	{
	}
	CUtlMemory<CLoopTypeBase::operator[](
			int i);  // 588
	CUtlVectorBase<CLoopTypeBase::operator[](
			int i);  // 54
	CUtlStringMap<CLoopTypeBase::operator[](
			IndexType_t n);  // 882
	CUtlString::Get(); // 99
	CUtlString::String(); // 879
} /* size: 0, variables: 10, inline expansions: 21 (389 bytes) */

// <002361CB> engine2/engineservicemgr.cpp:891
// function calls: 15
void CEngineServiceMgr::PrintStatus()
{
	CUtlString::Get(); // 99
	CUtlString::String(); // 900
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
	CUtlStringMap<CLoopTypeBase::String(
		int n);  // 904
	CUtlString::Get(); // 99
	CUtlString::String(); // 896
} /* size: 398, inline expansions: 15 (368 bytes) */

// <00236107> engine2/engineservicemgr.cpp:908
// variables: 2
// function call: 1
void CEngineServiceMgr::ChangeVideoMode(RenderDeviceInfo_t& deviceInfo)
{
	const char   __FUNCTION__; // 19922
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 912
	}
	RenderDisplayMode_t::IsValid(); // 910
} /* size: 0, variables: 1, inline expansions: 1 (22 bytes) */

// <002360D9> engine2/engineservicemgr.cpp:921
void CEngineServiceMgr::GetVideoModeChange()
{
} /* size: 25 */

// <002353FD> engine2/engineservicemgr.cpp:929
// variables: 13
// function calls: 48
void CEngineServiceMgr::ActivateServicesForLoop(const char* pLoopModeName, const CUtlVector<IEngineService*, CUtlMemory<IEngineService*, int> >& existingServices, CUtlVector<IEngineService*, CUtlMemory<IEngineService*, int> >& activeServices)
{
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > checkedServices; // 931
	int nExistingServices; // 934
	const char   __FUNCTION__; // 20123
	UtlSymId_t nFirstSearchIndex; // 954
	int nStrings; // 955
	{
		int i; // 936
		{
			IEngineService* pService; // 938
			EngineServiceActivateType_t nActivateType; // 939
			UtlSymId_t nServiceIndex; // 946
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 947
			}
			CUtlMemory<IEngineService::Base(); // 112
			CUtlVectorBase<IEngineService::Base(); // 368
			CUtlVectorBase<IEngineService::ResetDbgInfo(); // 824
			CUtlVectorBase<IEngineService::GrowMemory(
					int num);  // 1198
			CUtlMemory<IEngineService::NumAllocated(); // 1196
			CUtlMemory<IEngineService::operator[](
					int i);  // 602
			CUtlVectorBase<IEngineService::Element(
				int i);  // 1201
			CopyConstruct<IEngineService*>(IEngineService** pMemory,
							IEngineService* const& src);  // 1201
			CUtlVectorBase<IEngineService::AddToTail(
					IEngineService* const& src);  // 942
			CUtlMemory<IEngineService::operator[](
					int i);  // 595
			CUtlVectorBase<IEngineService::operator[](
					int i);  // 938
		}
	}
	{
		UtlSymId_t nIndex; // 958
		{
			IEngineService* pService; // 969
			EngineServiceActivateType_t nActivateType; // 970
			CUtlMemory<short unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
					int i);  // 962
			CUtlVectorBase<IEngineService::Count(); // 53
			{
			}
			CUtlMemory<IEngineService::operator[](
					int i);  // 588
			CUtlVectorBase<IEngineService::operator[](
					int i);  // 54
			CUtlStringMap<IEngineService::operator[](
					IndexType_t n);  // 969
			CUtlMemory<IEngineService::NumAllocated(); // 1196
			CUtlMemory<IEngineService::operator[](
					int i);  // 602
			CUtlVectorBase<IEngineService::Element(
				int i);  // 1201
			CopyConstruct<IEngineService*>(IEngineService** pMemory,
							IEngineService* const& src);  // 1201
			CUtlMemory<IEngineService::Base(); // 112
			CUtlVectorBase<IEngineService::Base(); // 368
			CUtlVectorBase<IEngineService::ResetDbgInfo(); // 824
			CUtlVectorBase<IEngineService::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<IEngineService::AddToTail(
					IEngineService* const& src);  // 973
		}
	}
	CUtlVectorBase<IEngineService::Count(); // 934
	CUtlMemory<short unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<short unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::CUtlVector(); // 931
	CUtlMemory<short unsigned int, int>::Grow(
		int num);  // 806
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
				int num);  // 1071
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::EnsureCount(
			int num);  // 935
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
	CUtlSymbolTable::GetNumStrings(); // 177
	CUtlStringMap<IEngineService::GetNumStrings(); // 955
	CUtlMemory<short unsigned int, int>::Purge(); // 903
	CUtlMemory<short unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Purge(); // 560
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVector(); // 977
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Sort(
		int (*pfnCompare)(const short unsigned int *, const short unsigned int *));  // 952
} /* size: 0, variables: 5, inline expansions: 22 (844 bytes) */

// <0024EF11> engine2/engineservicemgr.cpp:979
// variable: 1
// function calls: 19
void CEngineServiceMgr::GetActiveLoop(ActiveLoop_t& info)
{
	CLoopTypeBase* pLoop; // 988
	CUtlVectorBase<CLoopTypeBase::Count(); // 53
	{
	}
	CUtlMemory<CLoopTypeBase::operator[](
			int i);  // 588
	CUtlVectorBase<CLoopTypeBase::operator[](
			int i);  // 54
	CUtlStringMap<CLoopTypeBase::operator[](
			IndexType_t n);  // 988
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
	CUtlStringMap<CLoopTypeBase::String(
		int n);  // 989
	CUtlString::operator=(
			const char* src);  // 989
	CLoopTypeBase::GetRequestId(); // 990
	CLoopTypeBase::GetInitInfo(); // 991
	CEngineServiceMgr::GetActiveLoop(
			ActiveLoop_t& info);  // 979
} /* size: 0, variables: 1, inline expansions: 19 (505 bytes) */

// <002353CA> engine2/engineservicemgr.cpp:979
// variable: 1
void CEngineServiceMgr::GetActiveLoop(ActiveLoop_t& info)
{
	CLoopTypeBase* pLoop; // 988
} /* size: 0, variables: 1 */

// <0023501E> engine2/engineservicemgr.cpp:995
// variable: 1
// function calls: 15
void CEngineServiceMgr::InstallSwitchLoopModeStatusNotify(ISwitchLoopModeStatusNotify* pNotify)
{
	{
		int i; // 1531
		CUtlVectorBase<ISwitchLoopModeStatusNotify::Count(); // 1531
		CUtlMemory<ISwitchLoopModeStatusNotify::operator[](
				int i);  // 609
		CUtlVectorBase<ISwitchLoopModeStatusNotify::Element(
			int i);  // 1533
	}
	CUtlVectorBase<ISwitchLoopModeStatusNotify::Find(
		ISwitchLoopModeStatusNotify* const& src);  // 997
	CUtlMemory<ISwitchLoopModeStatusNotify::NumAllocated(); // 1196
	CUtlMemory<ISwitchLoopModeStatusNotify::operator[](
			int i);  // 602
	CUtlVectorBase<ISwitchLoopModeStatusNotify::Element(
		int i);  // 1201
	CopyConstruct<ISwitchLoopModeStatusNotify*>(ISwitchLoopModeStatusNotify** pMemory,
							ISwitchLoopModeStatusNotify* const& src);  // 1201
	CUtlMemory<ISwitchLoopModeStatusNotify::IsGrowable(); // 823
	CUtlMemory<ISwitchLoopModeStatusNotify::IsExternallyAllocated(); // 859
	CUtlMemory<ISwitchLoopModeStatusNotify::IsExternallyAllocated(); // 861
	CUtlMemory<ISwitchLoopModeStatusNotify::Grow(
		int num);  // 806
	CUtlVectorBase<ISwitchLoopModeStatusNotify::ResetDbgInfo(); // 824
	CUtlVectorBase<ISwitchLoopModeStatusNotify::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<ISwitchLoopModeStatusNotify::AddToTail(
			ISwitchLoopModeStatusNotify* const& src);  // 999
} /* size: 416, inline expansions: 12 (928 bytes) */

// <00234D1A> engine2/engineservicemgr.cpp:1002
// variable: 1
// function calls: 13
void CEngineServiceMgr::UninstallSwitchLoopModeStatusNotify(ISwitchLoopModeStatusNotify* pNotify)
{
	{
		int i; // 1531
		CUtlVectorBase<ISwitchLoopModeStatusNotify::Count(); // 1531
		CUtlMemory<ISwitchLoopModeStatusNotify::operator[](
				int i);  // 609
		CUtlVectorBase<ISwitchLoopModeStatusNotify::Element(
			int i);  // 1533
	}
	CUtlVectorBase<ISwitchLoopModeStatusNotify::Find(
		ISwitchLoopModeStatusNotify* const& src);  // 1617
	CUtlMemory<ISwitchLoopModeStatusNotify::operator[](
			int i);  // 602
	CUtlVectorBase<ISwitchLoopModeStatusNotify::Element(
		int i);  // 1114
	CUtlMemory<ISwitchLoopModeStatusNotify::operator[](
			int i);  // 602
	CUtlVectorBase<ISwitchLoopModeStatusNotify::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<ISwitchLoopModeStatusNotify::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<ISwitchLoopModeStatusNotify::Remove(
		int elem);  // 1620
	CUtlVectorBase<ISwitchLoopModeStatusNotify::FindAndRemove(
			ISwitchLoopModeStatusNotify* const& src);  // 1004
} /* size: 149, inline expansions: 10 (377 bytes) */

// <00234B7B> engine2/engineservicemgr.cpp:1010
// variable: 1
// function calls: 4
void ConsoleLogSuffixCallback(IConVar* var, const char* pOldValue, float flOldValue)
{
	const char* pNewValue; // 1012
	ConVar::GetString(); // 1012
	V_strcmp(const char* s1,
		const char* s2);  // 1013
	ConVar::GetString(); // 1018
	CTier1Application::ChangeLogFileSuffix(
				const char* suffix);  // 1018
} /* size: 199, variables: 1, inline expansions: 4 (87 bytes) */

