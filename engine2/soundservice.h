
//
// engine2/soundservice.h
//
//	referenced by: libengine2.so
//
//	functions: 8
//	class: 1
//

// <0066D852> engine2/soundservice.h:20
// function calls: 12
void CSoundService::~CSoundService()
{
	CConCommandMemberAccessor<CSoundService>::~CConCommandMemberAccessor(); // 37
	CCommandMemberInitializer_PlaySoundCommand::~CCommandMemberInitializer_PlaySoundCommand(); // 20
	CUtlMemory<ResourceManifestDesc_t::IsExternallyAllocated(); // 905
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 903
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 1799
	CUtlVectorBase<ResourceManifestDesc_t::RemoveAll(); // 1798
	CUtlVectorBase<ResourceManifestDesc_t::Purge(); // 560
	CUtlVectorBase<ResourceManifestDesc_t::~CUtlVectorBase(); // 410
	CUtlVector<ResourceManifestDesc_t::~CUtlVector(); // 42
	CTier2AppSystem<ISoundService, 0>::~CTier2AppSystem(); // 18
	CTier3AppSystem<ISoundService, 0>::~CTier3AppSystem(); // 167
	CBaseEngineService<ISoundService>::~CBaseEngineService(); // 20
} /* size: 133, inline expansions: 12 (396 bytes) */

// <0066D432> engine2/soundservice.h:20
// function calls: 21
void CSoundService::~CSoundService()
{
	CConCommandMemberAccessor<CSoundService>::~CConCommandMemberAccessor(); // 37
	CCommandMemberInitializer_PlaySoundCommand::~CCommandMemberInitializer_PlaySoundCommand(); // 20
	CUtlMemory<ResourceManifestDesc_t::IsExternallyAllocated(); // 905
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 903
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 1799
	CUtlVectorBase<ResourceManifestDesc_t::RemoveAll(); // 1798
	CUtlVectorBase<ResourceManifestDesc_t::Purge(); // 560
	ValidateAlignment<ResourceManifestDesc_t*>(void); // 508
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 510
	CUtlMemory<ResourceManifestDesc_t::~CUtlMemory(); // 562
	CUtlVectorBase<ResourceManifestDesc_t::~CUtlVectorBase(); // 410
	CUtlVector<ResourceManifestDesc_t::~CUtlVector(); // 42
	IEngineService::~IEngineService(); // 9
	ISoundService::~ISoundService(); // 120
	CBaseAppSystem<ISoundService>::~CBaseAppSystem(); // 171
	CTier0AppSystem<ISoundService, 0>::~CTier0AppSystem(); // 225
	CTier1AppSystem<ISoundService, 0>::~CTier1AppSystem(); // 42
	CTier2AppSystem<ISoundService, 0>::~CTier2AppSystem(); // 18
	CTier3AppSystem<ISoundService, 0>::~CTier3AppSystem(); // 167
	CBaseEngineService<ISoundService>::~CBaseEngineService(); // 20
	CSoundService::~CSoundService(); // 20
} /* size: 137, inline expansions: 21 (470 bytes) */

// <0066D416> engine2/soundservice.h:20
inline void CSoundService::~CSoundService()
{
} /* size: 0 */

// <00625FC3> engine2/soundservice.h:20
// member functions: 38
// member variables: 5
// vtable entries: 7
// class size: 232
class CSoundService : public CBaseEngineService<ISoundService> {
	/* engine2/soundservice.h:37 */
	class CCommandMemberInitializer_PlaySoundCommand {
		/* engine2/soundservice.h:37 */
		void CCommandMemberInitializer_PlaySoundCommand(CCommandMemberInitializer_PlaySoundCommand* );
	private:
		CConCommandMemberAccessor<CSoundService> m_ConCommandAccessor; /* 0 160 */
		void ~CCommandMemberInitializer_PlaySoundCommand(CCommandMemberInitializer_PlaySoundCommand* );
	};
public:
	/* class CBaseEngineService<ISoundService> <ancestor>; */ /* 0 64 */
	void CSoundService(CSoundService* , CSoundService& );
	void CSoundService(CSoundService* , const CSoundService& );
	CEventMapEmptyRegistrar<CEventIDManager_Default> m_EventMapRegistrar; /* 60 0 */
	/* engine2/soundservice.h:25 */
	virtual void RegisterEventMap(CSoundService* , CEventDispatcher<CEventIDManager_Default>* , EventMapRegistrationType_t);
	/* engine2/soundservice.cpp:38 */
	void CSoundService(CSoundService* );
	/* engine2/soundservice.cpp:50 */
	void OnClientOutput(CSoundService* , const EventClientOutput_t& );
	/* engine2/soundservice.cpp:70 */
	void OnClientPostOutput(CSoundService* , const EventClientPostOutput_t& );
	/* engine2/soundservice.h:35 */
	void PlaySound(CSoundService* , const char* );
	/* engine2/soundservice.cpp:168 */
	void PlaySoundCommand(CSoundService* , const CCommandContext& , const CCommand& );
	/* engine2/soundservice.cpp:213 */
	void SoundResource_CompletionFunc(CSoundService* , const char* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	CCommandMemberInitializer_PlaySoundCommand m_PlaySoundCommand_register; /* 64 160 */
	/* engine2/soundservice.cpp:235 */
	virtual EngineServiceActivateType_t ShouldActivate(CSoundService* , const char* );
	/* engine2/soundservice.cpp:259 */
	virtual InitReturnVal_t Init(CSoundService* );
	/* engine2/soundservice.cpp:276 */
	virtual void Shutdown(CSoundService* );
	/* engine2/soundservice.cpp:283 */
	virtual void OnAppShutdown(CSoundService* , const EventAppShutdown_t& );
	/* engine2/soundservice.cpp:245 */
	virtual void OnLoopActivate(CSoundService* , const EngineLoopState_t& , CEventDispatcher<CEventIDManager_Default>* );
	/* engine2/soundservice.cpp:253 */
	virtual void OnLoopDeactivate(CSoundService* , const EngineLoopState_t& , CEventDispatcher<CEventIDManager_Default>* );
private:
	/* engine2/soundservice.cpp:134 */
	void BuildList(CSoundService* , const char* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	/* engine2/soundservice.cpp:140 */
	void FilterList(CSoundService* , const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& , CUtlString& , const char* );
	bool m_bAppIsActive; /* 224 1 */
	bool m_bGameIsActive; /* 225 1 */
	virtual void ~CSoundService(CSoundService* );
	void CSoundService(class CSoundService *, class CSoundService &); /* linkage=_ZN13CSoundServiceC4EOS_ */
	void CSoundService(class CSoundService *, const class CSoundService  &); /* linkage=_ZN13CSoundServiceC4ERKS_ */
	virtual void RegisterEventMap(class CSoundService *, class CEventDispatcher<CEventIDManager_Default> *, enum EventMapRegistrationType_t); /* linkage=_ZN13CSoundService16RegisterEventMapEP16CEventDispatcherI23CEventIDManager_DefaultE26EventMapRegistrationType_t */
	void CSoundService(class CSoundService *); /* linkage=_ZN13CSoundServiceC4Ev */
	/* <68e535> engine2/soundservice.cpp:50 */
	void OnClientOutput(class CSoundService *, const class EventClientOutput_t  &); /* linkage=_ZN13CSoundService14OnClientOutputERK19EventClientOutput_t */
	/* <68e638> engine2/soundservice.cpp:70 */
	void OnClientPostOutput(class CSoundService *, const class EventClientPostOutput_t  &); /* linkage=_ZN13CSoundService18OnClientPostOutputERK23EventClientPostOutput_t */
	void PlaySound(class CSoundService *, const char  *); /* linkage=_ZN13CSoundService9PlaySoundEPKc */
	void PlaySoundCommand(class CSoundService *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN13CSoundService16PlaySoundCommandERK15CCommandContextRK8CCommand */
	void SoundResource_CompletionFunc(class CSoundService *, const char  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZN13CSoundService28SoundResource_CompletionFuncEPKcR10CUtlVectorI10CUtlString10CUtlMemoryIS3_iEE */
	virtual enum EngineServiceActivateType_t ShouldActivate(class CSoundService *, const char  *); /* linkage=_ZN13CSoundService14ShouldActivateEPKc */
	virtual enum InitReturnVal_t Init(class CSoundService *); /* linkage=_ZN13CSoundService4InitEv */
	virtual void Shutdown(class CSoundService *); /* linkage=_ZN13CSoundService8ShutdownEv */
	virtual void OnAppShutdown(class CSoundService *, const class EventAppShutdown_t  &); /* linkage=_ZN13CSoundService13OnAppShutdownERK18EventAppShutdown_t */
	virtual void OnLoopActivate(class CSoundService *, const class EngineLoopState_t  &, class CEventDispatcher<CEventIDManager_Default> *); /* linkage=_ZN13CSoundService14OnLoopActivateERK17EngineLoopState_tP16CEventDispatcherI23CEventIDManager_DefaultE */
	virtual void OnLoopDeactivate(class CSoundService *, const class EngineLoopState_t  &, class CEventDispatcher<CEventIDManager_Default> *); /* linkage=_ZN13CSoundService16OnLoopDeactivateERK17EngineLoopState_tP16CEventDispatcherI23CEventIDManager_DefaultE */
	/* <6917e3> engine2/soundservice.cpp:134 */
	void BuildList(class CSoundService *, const char  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZN13CSoundService9BuildListEPKcR10CUtlVectorI10CUtlString10CUtlMemoryIS3_iEE */
	void FilterList(class CSoundService *, const class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >  &, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &, class CUtlString &, const char  *); /* linkage=_ZN13CSoundService10FilterListERK10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEERS4_RS1_PKc */
	virtual void ~CSoundService(class CSoundService *); /* linkage=_ZN13CSoundServiceD4Ev */
};

// <0068BF54> engine2/soundservice.h:25
void CSoundService::RegisterEventMap(CEventDispatcher<CEventIDManager_Default>* pEventDispatcher, EventMapRegistrationType_t nRegistrationType)
{
} /* size: 20 */

// <0068BF3D> engine2/soundservice.h:37
void CCommandMemberInitializer_PlaySoundCommand::CCommandMemberInitializer_PlaySoundCommand()
{
} /* size: 0 */

// <0068BF24> engine2/soundservice.h:37
inline void CCommandMemberInitializer_PlaySoundCommand::CCommandMemberInitializer_PlaySoundCommand()
{
} /* size: 0 */

// <0067D1B1> engine2/soundservice.h:37
void CCommandMemberInitializer_PlaySoundCommand::~CCommandMemberInitializer_PlaySoundCommand()
{
} /* size: 0 */

// <0067D195> engine2/soundservice.h:37
inline void CCommandMemberInitializer_PlaySoundCommand::~CCommandMemberInitializer_PlaySoundCommand()
{
} /* size: 0 */

