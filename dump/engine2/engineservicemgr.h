
//
// engine2/engineservicemgr.h
//
//	referenced by: libengine2.so
//
//	functions: 4
//	class: 1
//

// <0022AAC8> engine2/engineservicemgr.h:34
// function calls: 64
void CEngineServiceMgr::~CEngineServiceMgr()
{
	CUtlMemory<ISwitchLoopModeStatusNotify::IsExternallyAllocated(); // 905
	CUtlMemory<ISwitchLoopModeStatusNotify::Purge(); // 903
	CUtlMemory<ISwitchLoopModeStatusNotify::Purge(); // 1799
	CUtlVectorBase<ISwitchLoopModeStatusNotify::RemoveAll(); // 1798
	CUtlVectorBase<ISwitchLoopModeStatusNotify::Purge(); // 560
	ValidateAlignment<ISwitchLoopModeStatusNotify*>(void); // 508
	CUtlMemory<ISwitchLoopModeStatusNotify::Purge(); // 510
	CUtlMemory<ISwitchLoopModeStatusNotify::~CUtlMemory(); // 562
	CUtlVectorBase<ISwitchLoopModeStatusNotify::~CUtlVectorBase(); // 410
	CUtlVector<ISwitchLoopModeStatusNotify::~CUtlVector(); // 34
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CSchemaClassInfo::IsExternallyAllocated(); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CSchemaClassInfo::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CSchemaClassInfo::Purge(); // 1287
	Iterator_t::Iterator_t(
			unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CSchemaClassInfo::InvalidIterator(); // 1288
	CUtlRBTree<CUtlMap<const CSchemaClassInfo::Purge(); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<const CSchemaClassInfo*, CUtlVector<CEventDispatcher_Base::EventListenerInfo_t>, unsigned int, bool (*)(const CSchemaClassInfo* const&, const CSchemaClassInfo* const&)>::Node_t, unsigned int> >(void); // 508
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CSchemaClassInfo::Purge(); // 510
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<const CSchemaClassInfo::~CUtlMemory(); // 510
	CUtlRBTree<CUtlMap<const CSchemaClassInfo::~CUtlRBTree(); // 47
	CUtlMap<const CSchemaClassInfo::~CUtlMap(); // 100
	CEventDispatcher_Identified<CEventIDManager_Default>::~CEventDispatcher_Identified(); // 1105
	CEventDispatcher<CEventIDManager_Default>::~CEventDispatcher(); // 34
	CUtlVectorBase<IEngineService::RemoveAll(); // 1798
	CUtlMemory<IEngineService::IsExternallyAllocated(); // 905
	CUtlMemory<IEngineService::Purge(); // 903
	CUtlMemory<IEngineService::Purge(); // 1799
	CUtlVectorBase<IEngineService::Purge(); // 560
	ValidateAlignment<IEngineService*>(void); // 508
	CUtlMemory<IEngineService::Purge(); // 510
	CUtlMemory<IEngineService::~CUtlMemory(); // 562
	CUtlVectorBase<IEngineService::~CUtlVectorBase(); // 410
	CUtlVector<IEngineService::~CUtlVector(); // 15
	CUtlStringMap<IEngineService::~CUtlStringMap(); // 34
	CUtlVectorBase<IPrerequisite::RemoveAll(); // 1798
	CUtlMemory<IPrerequisite::IsExternallyAllocated(); // 905
	CUtlMemory<IPrerequisite::Purge(); // 903
	CUtlMemory<IPrerequisite::Purge(); // 1799
	CUtlVectorBase<IPrerequisite::Purge(); // 560
	ValidateAlignment<IPrerequisite*>(void); // 508
	CUtlMemory<IPrerequisite::Purge(); // 510
	CUtlMemory<IPrerequisite::~CUtlMemory(); // 562
	CUtlVectorBase<IPrerequisite::~CUtlVectorBase(); // 410
	CUtlVector<IPrerequisite::~CUtlVector(); // 34
	CUtlVectorBase<CLoopTypeBase::RemoveAll(); // 1798
	CUtlMemory<CLoopTypeBase::IsExternallyAllocated(); // 905
	CUtlMemory<CLoopTypeBase::Purge(); // 903
	CUtlMemory<CLoopTypeBase::Purge(); // 1799
	CUtlVectorBase<CLoopTypeBase::Purge(); // 560
	ValidateAlignment<CLoopTypeBase*>(void); // 508
	CUtlMemory<CLoopTypeBase::Purge(); // 510
	CUtlMemory<CLoopTypeBase::~CUtlMemory(); // 562
	CUtlVectorBase<CLoopTypeBase::~CUtlVectorBase(); // 410
	CUtlVector<CLoopTypeBase::~CUtlVector(); // 15
	CUtlStringMap<CLoopTypeBase::~CUtlStringMap(); // 34
	CUtlMemory<ResourceManifestDesc_t::IsExternallyAllocated(); // 905
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 903
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 1799
	CUtlVectorBase<ResourceManifestDesc_t::RemoveAll(); // 1798
	CUtlVectorBase<ResourceManifestDesc_t::Purge(); // 560
	CUtlVectorBase<ResourceManifestDesc_t::~CUtlVectorBase(); // 410
	CUtlVector<ResourceManifestDesc_t::~CUtlVector(); // 42
	CTier2AppSystem<IEngineServiceMgr, 0>::~CTier2AppSystem(); // 18
	CTier3AppSystem<IEngineServiceMgr, 0>::~CTier3AppSystem(); // 34
} /* size: 326, inline expansions: 64 (1300 bytes) */

// <0022AAAC> engine2/engineservicemgr.h:34
inline void CEngineServiceMgr::~CEngineServiceMgr()
{
} /* size: 0 */

// <001E54FA> engine2/engineservicemgr.h:34
// member functions: 94
// member variables: 16
// static member variable: 1
// vtable entries: 27
// class size: 696
class CEngineServiceMgr : public CTier3AppSystem<IEngineServiceMgr, 0>, public ILoopModePrerequisiteRegistry {
	/* engine2/engineservicemgr.h:103 */
	struct LoopRequest_t {
		/* engine2/engineservicemgr.h:105 */
		void LoopRequest_t(LoopRequest_t* );
		/* engine2/engineservicemgr.h:109 */
		void ~LoopRequest_t(LoopRequest_t* );
		CUtlString m_LoopName; /* 0 8 */
		int m_nLoopIndex; /* 8 4 */
		KeyValues * m_pRequestedKeyValues; /* 16 8 */
		bool m_bIsIdleLoop; /* 24 1 */
		uint32 m_unRequestId; /* 28 4 */
	private:
		/* engine2/engineservicemgr.h:118 */
		LoopRequest_t& operator=(LoopRequest_t* , const LoopRequest_t& );
		/* engine2/engineservicemgr.h:119 */
		void LoopRequest_t(LoopRequest_t* , const LoopRequest_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* engine2/engineservicemgr.h:157 */
	enum ExitState_t {
		NOT_EXITING = 0,
		EXIT_PENDING = 1,
		EXITING = 2,
	};
public:
	/* class CTier3AppSystem<IEngineServiceMgr, 0> <ancestor>; */ /* 0 48 */
	/* class ILoopModePrerequisiteRegistry <ancestor>; */ /* 48 8 */
	void CEngineServiceMgr(CEngineServiceMgr* , CEngineServiceMgr& );
	void CEngineServiceMgr(CEngineServiceMgr* , const CEngineServiceMgr& );
	/* engine2/engineservicemgr.cpp:78 */
	virtual bool Connect(CEngineServiceMgr* , CreateInterfaceFn);
	/* engine2/engineservicemgr.cpp:210 */
	virtual InitReturnVal_t Init(CEngineServiceMgr* );
	/* engine2/engineservicemgr.cpp:252 */
	virtual void Shutdown(CEngineServiceMgr* );
	/* engine2/engineservicemgr.cpp:351 */
	virtual void RegisterEngineService(CEngineServiceMgr* , const char* , IEngineService* );
	/* engine2/engineservicemgr.cpp:366 */
	virtual void UnregisterEngineService(CEngineServiceMgr* , const char* , IEngineService* );
	/* engine2/engineservicemgr.cpp:379 */
	virtual void RegisterLoopMode(CEngineServiceMgr* , const char* , ILoopModeFactory* , void** );
	/* engine2/engineservicemgr.cpp:410 */
	virtual void UnregisterLoopMode(CEngineServiceMgr* , const char* , ILoopModeFactory* , void** );
	/* engine2/engineservicemgr.cpp:433 */
	virtual void SwitchToLoop(CEngineServiceMgr* , const char* , KeyValues* , uint32, bool);
	/* engine2/engineservicemgr.cpp:481 */
	virtual const char* GetActiveLoopName(const CEngineServiceMgr* );
	/* engine2/engineservicemgr.cpp:494 */
	virtual IEngineService* FindService(CEngineServiceMgr* , const char* );
	/* engine2/engineservicemgr.cpp:502 */
	virtual void ExitMainLoop(CEngineServiceMgr* );
	/* engine2/engineservicemgr.cpp:302 */
	virtual PlatWindow_t GetEngineWindow(const CEngineServiceMgr* );
	/* engine2/engineservicemgr.cpp:307 */
	virtual SwapChainHandle_t GetEngineSwapChain(const CEngineServiceMgr* );
	/* engine2/engineservicemgr.cpp:312 */
	virtual const RenderDeviceInfo_t& GetEngineDeviceInfo(const CEngineServiceMgr* );
	/* engine2/engineservicemgr.cpp:332 */
	virtual void GetEngineSwapChainSize(const CEngineServiceMgr* , int* , int* );
	/* engine2/engineservicemgr.cpp:337 */
	virtual CEventDispatcher<CEventIDManager_Default>* GetEventDispatcher(CEngineServiceMgr* );
	/* engine2/engineservicemgr.cpp:342 */
	virtual IDebugVisualizerMgr* GetDebugVisualizerMgr(CEngineServiceMgr* );
	/* engine2/engineservicemgr.cpp:891 */
	virtual void PrintStatus(CEngineServiceMgr* );
	/* engine2/engineservicemgr.cpp:979 */
	virtual void GetActiveLoop(CEngineServiceMgr* , ActiveLoop_t& );
	/* engine2/engineservicemgr.cpp:908 */
	virtual void ChangeVideoMode(CEngineServiceMgr* , RenderDeviceInfo_t& );
	/* engine2/engineservicemgr.cpp:921 */
	virtual VideoModeChange_t* GetVideoModeChange(CEngineServiceMgr* );
	/* engine2/engineservicemgr.cpp:995 */
	virtual void InstallSwitchLoopModeStatusNotify(CEngineServiceMgr* , ISwitchLoopModeStatusNotify* );
	/* engine2/engineservicemgr.cpp:1002 */
	virtual void UninstallSwitchLoopModeStatusNotify(CEngineServiceMgr* , ISwitchLoopModeStatusNotify* );
	/* engine2/engineservicemgr.cpp:579 */
	virtual const char* LookupLocalizationToken(CEngineServiceMgr* , const char* );
	/* engine2/engineservicemgr.cpp:659 */
	virtual void SetGameWatchdogShutdownTime(CEngineServiceMgr* , int, const char* , void (*)(void));
	/* engine2/engineservicemgr.cpp:590 */
	virtual void AddPrerequisite(CEngineServiceMgr* , IPrerequisite* );
	/* engine2/engineservicemgr.cpp:597 */
	virtual void RemovePrerequisite(CEngineServiceMgr* , IPrerequisite* );
	/* engine2/engineservicemgr.cpp:62 */
	void CEngineServiceMgr(CEngineServiceMgr* );
	/* engine2/engineservicemgr.cpp:277 */
	void SetEngineState(PlatWindow_t, SwapChainHandle_t);
	/* engine2/engineservicemgr.cpp:288 */
	void ResetEngineState(void);
	/* engine2/engineservicemgr.cpp:317 */
	void GetSwapChainSize(int* , int* );
	/* engine2/engineservicemgr.cpp:672 */
	MainLoopResult_t MainLoop(CEngineServiceMgr* , float64, float64);
	/* engine2/engineservicemgr.cpp:704 */
	MainLoopResult_t _MainLoop(CEngineServiceMgr* , float64, float64);
	/* engine2/engineservicemgr.cpp:487 */
	CLoopTypeBase* GetActiveLoop(CEngineServiceMgr* );
	/* engine2/engineservicemgr.cpp:929 */
	void ActivateServicesForLoop(CEngineServiceMgr* , const char* , const CUtlVector<IEngineService*, CUtlMemory<IEngineService*, int> >& , CUtlVector<IEngineService*, CUtlMemory<IEngineService*, int> >& );
private:
	/* engine2/engineservicemgr.cpp:564 */
	void CleanupQueuedLoop(CEngineServiceMgr* );
	/* engine2/engineservicemgr.cpp:548 */
	void ClearPrerequisites(CEngineServiceMgr* );
	/* engine2/engineservicemgr.cpp:519 */
	void DeactivateCurrentLoop(CEngineServiceMgr* , const EngineLoopState_t& );
	/* engine2/engineservicemgr.cpp:606 */
	PrerequisiteStatus_t GetPrerequisiteStatus(CEngineServiceMgr* , float64);
	/* engine2/engineservicemgr.cpp:236 */
	void CheapHeapValidity(const CEngineServiceMgr* , const char* );
	/* engine2/engineservicemgr.cpp:634 */
	void SerializeAsyncFileReads(CEngineServiceMgr* );
	/* engine2/engineservicemgr.cpp:460 */
	void DiscardLoopRequest(CEngineServiceMgr* , LoopRequest_t** , bool);
	CUtlStringMap<CLoopTypeBase*, CUtlSymbolTable> m_MainLoops; /* 56 176 */
	int m_nCurrentLoopIndex; /* 232 4 */
	LoopRequest_t * m_pRequestedLoop; /* 240 8 */
	LoopRequest_t * m_pQueuedLoop; /* 248 8 */
	CUtlVector<IPrerequisite*, CUtlMemory<IPrerequisite*, int> > m_Prerequisites; /* 256 32 */
	int m_nUnsatisfiedPrerequisiteCount; /* 288 4 */
	bool m_bStatusChanged; /* 292 1 */
	static struct EngineLoopState_t sm_EngineLoopState; /* 0 0 */
	CUtlStringMap<IEngineService*, CUtlSymbolTable> m_EngineServices; /* 296 176 */
	ExitState_t m_queuedExitState; /* 472 4 */
	CEventDispatcher<CEventIDManager_Default> m_EventDispatcher; /* 480 80 */
	CDebugVisualizerMgr m_DebugVisualizers; /* 560 0 */
	bool m_bCheckHeap; /* 608 1 */
	VideoModeChange_t m_modeChange; /* 612 52 */
	CUtlVector<ISwitchLoopModeStatusNotify*, CUtlMemory<ISwitchLoopModeStatusNotify*, int> > m_SwitchLoopModeNotifyHandlers; /* 664 32 */
	void ~CEngineServiceMgr(CEngineServiceMgr* );
	void CEngineServiceMgr(class CEngineServiceMgr *, class CEngineServiceMgr &); /* linkage=_ZN17CEngineServiceMgrC4EOS_ */
	void CEngineServiceMgr(class CEngineServiceMgr *, const class CEngineServiceMgr  &); /* linkage=_ZN17CEngineServiceMgrC4ERKS_ */
	virtual bool Connect(class CEngineServiceMgr *, CreateInterfaceFn); /* linkage=_ZN17CEngineServiceMgr7ConnectEPFPvPKcPiE */
	virtual enum InitReturnVal_t Init(class CEngineServiceMgr *); /* linkage=_ZN17CEngineServiceMgr4InitEv */
	virtual void Shutdown(class CEngineServiceMgr *); /* linkage=_ZN17CEngineServiceMgr8ShutdownEv */
	virtual void RegisterEngineService(class CEngineServiceMgr *, const char  *, class IEngineService *); /* linkage=_ZN17CEngineServiceMgr21RegisterEngineServiceEPKcP14IEngineService */
	virtual void UnregisterEngineService(class CEngineServiceMgr *, const char  *, class IEngineService *); /* linkage=_ZN17CEngineServiceMgr23UnregisterEngineServiceEPKcP14IEngineService */
	virtual void RegisterLoopMode(class CEngineServiceMgr *, const char  *, class ILoopModeFactory *, void * *); /* linkage=_ZN17CEngineServiceMgr16RegisterLoopModeEPKcP16ILoopModeFactoryPPv */
	virtual void UnregisterLoopMode(class CEngineServiceMgr *, const char  *, class ILoopModeFactory *, void * *); /* linkage=_ZN17CEngineServiceMgr18UnregisterLoopModeEPKcP16ILoopModeFactoryPPv */
	virtual void SwitchToLoop(class CEngineServiceMgr *, const char  *, class KeyValues *, uint32, bool); /* linkage=_ZN17CEngineServiceMgr12SwitchToLoopEPKcP9KeyValuesjb */
	virtual const char  * GetActiveLoopName(const class CEngineServiceMgr  *); /* linkage=_ZNK17CEngineServiceMgr17GetActiveLoopNameEv */
	virtual class IEngineService * FindService(class CEngineServiceMgr *, const char  *); /* linkage=_ZN17CEngineServiceMgr11FindServiceEPKc */
	virtual void ExitMainLoop(class CEngineServiceMgr *); /* linkage=_ZN17CEngineServiceMgr12ExitMainLoopEv */
	virtual PlatWindow_t GetEngineWindow(const class CEngineServiceMgr  *); /* linkage=_ZNK17CEngineServiceMgr15GetEngineWindowEv */
	virtual SwapChainHandle_t GetEngineSwapChain(const class CEngineServiceMgr  *); /* linkage=_ZNK17CEngineServiceMgr18GetEngineSwapChainEv */
	virtual const class RenderDeviceInfo_t  & GetEngineDeviceInfo(const class CEngineServiceMgr  *); /* linkage=_ZNK17CEngineServiceMgr19GetEngineDeviceInfoEv */
	virtual void GetEngineSwapChainSize(const class CEngineServiceMgr  *, int *, int *); /* linkage=_ZNK17CEngineServiceMgr22GetEngineSwapChainSizeEPiS0_ */
	virtual class CEventDispatcher<CEventIDManager_Default> * GetEventDispatcher(class CEngineServiceMgr *); /* linkage=_ZN17CEngineServiceMgr18GetEventDispatcherEv */
	virtual class IDebugVisualizerMgr * GetDebugVisualizerMgr(class CEngineServiceMgr *); /* linkage=_ZN17CEngineServiceMgr21GetDebugVisualizerMgrEv */
	virtual void PrintStatus(class CEngineServiceMgr *); /* linkage=_ZN17CEngineServiceMgr11PrintStatusEv */
	/* <24ef11> engine2/engineservicemgr.cpp:979 */
	virtual void GetActiveLoop(class CEngineServiceMgr *, class ActiveLoop_t &); /* linkage=_ZN17CEngineServiceMgr13GetActiveLoopER12ActiveLoop_t */
	virtual void ChangeVideoMode(class CEngineServiceMgr *, class RenderDeviceInfo_t &); /* linkage=_ZN17CEngineServiceMgr15ChangeVideoModeER18RenderDeviceInfo_t */
	virtual class VideoModeChange_t * GetVideoModeChange(class CEngineServiceMgr *); /* linkage=_ZN17CEngineServiceMgr18GetVideoModeChangeEv */
	virtual void InstallSwitchLoopModeStatusNotify(class CEngineServiceMgr *, class ISwitchLoopModeStatusNotify *); /* linkage=_ZN17CEngineServiceMgr33InstallSwitchLoopModeStatusNotifyEP27ISwitchLoopModeStatusNotify */
	virtual void UninstallSwitchLoopModeStatusNotify(class CEngineServiceMgr *, class ISwitchLoopModeStatusNotify *); /* linkage=_ZN17CEngineServiceMgr35UninstallSwitchLoopModeStatusNotifyEP27ISwitchLoopModeStatusNotify */
	virtual const char  * LookupLocalizationToken(class CEngineServiceMgr *, const char  *); /* linkage=_ZN17CEngineServiceMgr23LookupLocalizationTokenEPKc */
	virtual void SetGameWatchdogShutdownTime(class CEngineServiceMgr *, int, const char  *, void (*)(void)); /* linkage=_ZN17CEngineServiceMgr27SetGameWatchdogShutdownTimeEiPKcPFvvE */
	/* <2517db> engine2/engineservicemgr.cpp:590 */
	virtual void AddPrerequisite(class CEngineServiceMgr *, class IPrerequisite *); /* linkage=_ZN17CEngineServiceMgr15AddPrerequisiteEP13IPrerequisite */
	virtual void RemovePrerequisite(class CEngineServiceMgr *, class IPrerequisite *); /* linkage=_ZN17CEngineServiceMgr18RemovePrerequisiteEP13IPrerequisite */
	void CEngineServiceMgr(class CEngineServiceMgr *); /* linkage=_ZN17CEngineServiceMgrC4Ev */
	void SetEngineState(PlatWindow_t, SwapChainHandle_t); /* linkage=_ZN17CEngineServiceMgr14SetEngineStateEP14PlatWindow_t__P19SwapChainHandle_t__ */
	void ResetEngineState(void); /* linkage=_ZN17CEngineServiceMgr16ResetEngineStateEv */
	/* <24fd11> engine2/engineservicemgr.cpp:317 */
	void GetSwapChainSize(int *, int *); /* linkage=_ZN17CEngineServiceMgr16GetSwapChainSizeEPiS0_ */
	enum MainLoopResult_t MainLoop(class CEngineServiceMgr *, float64, float64); /* linkage=_ZN17CEngineServiceMgr8MainLoopEdd */
	enum MainLoopResult_t _MainLoop(class CEngineServiceMgr *, float64, float64); /* linkage=_ZN17CEngineServiceMgr9_MainLoopEdd */
	/* <24fd8d> engine2/engineservicemgr.cpp:487 */
	class CLoopTypeBase * GetActiveLoop(class CEngineServiceMgr *); /* linkage=_ZN17CEngineServiceMgr13GetActiveLoopEv */
	void ActivateServicesForLoop(class CEngineServiceMgr *, const char  *, const class CUtlVector<IEngineService*, CUtlMemory<IEngineService*, int> >  &, class CUtlVector<IEngineService*, CUtlMemory<IEngineService*, int> > &); /* linkage=_ZN17CEngineServiceMgr23ActivateServicesForLoopEPKcRK10CUtlVectorIP14IEngineService10CUtlMemoryIS4_iEERS7_ */
	void CleanupQueuedLoop(class CEngineServiceMgr *); /* linkage=_ZN17CEngineServiceMgr17CleanupQueuedLoopEv */
	void ClearPrerequisites(class CEngineServiceMgr *); /* linkage=_ZN17CEngineServiceMgr18ClearPrerequisitesEv */
	void DeactivateCurrentLoop(class CEngineServiceMgr *, const class EngineLoopState_t  &); /* linkage=_ZN17CEngineServiceMgr21DeactivateCurrentLoopERK17EngineLoopState_t */
	enum PrerequisiteStatus_t GetPrerequisiteStatus(class CEngineServiceMgr *, float64); /* linkage=_ZN17CEngineServiceMgr21GetPrerequisiteStatusEd */
	/* <24fcde> engine2/engineservicemgr.cpp:236 */
	void CheapHeapValidity(const class CEngineServiceMgr  *, const char  *); /* linkage=_ZNK17CEngineServiceMgr17CheapHeapValidityEPKc */
	/* <24feb1> engine2/engineservicemgr.cpp:634 */
	void SerializeAsyncFileReads(class CEngineServiceMgr *); /* linkage=_ZN17CEngineServiceMgr23SerializeAsyncFileReadsEv */
	void DiscardLoopRequest(class CEngineServiceMgr *, class LoopRequest_t * *, bool); /* linkage=_ZN17CEngineServiceMgr18DiscardLoopRequestEPPNS_13LoopRequest_tEb */
	void ~CEngineServiceMgr(class CEngineServiceMgr *); /* linkage=_ZN17CEngineServiceMgrD4Ev */
};

// <002474A1> engine2/engineservicemgr.h:105
void LoopRequest_t::LoopRequest_t()
{
} /* size: 0 */

// <00247488> engine2/engineservicemgr.h:105
inline void LoopRequest_t::LoopRequest_t()
{
} /* size: 0 */

