
//
// public/engine2/iengineservicemgr.h
//
//	referenced by: libengine2.so
//
//	functions: 104
//	classes: 13
//	structs: 3
//

// <001A9EF3> ../public/engine2/iengineservicemgr.h:41
// member variables: 2
// struct size: 16
struct EngineServiceDependencies_t {
	const char * m_pServiceName; /* 0 8 */
	uint32 m_nFlags; /* 8 4 */
};

// <0023BF7C> ../public/engine2/iengineservicemgr.h:55
void VideoModeChange_t::VideoModeChange_t()
{
} /* size: 0 */

// <0023BF60> ../public/engine2/iengineservicemgr.h:55
inline void VideoModeChange_t::VideoModeChange_t()
{
} /* size: 0 */

// <001A9F49> ../public/engine2/iengineservicemgr.h:55
// member functions: 2
// member variables: 2
// struct size: 52
struct VideoModeChange_t {
	RenderDeviceInfo_t m_deviceInfo; /* 0 48 */
	bool m_bChangeQueued; /* 48 1 */
	/* ../public/engine2/iengineservicemgr.h:60 */
	void ModeChangeComplete(VideoModeChange_t* );
	void VideoModeChange_t(VideoModeChange_t* );
};

// <005AAE04> ../public/engine2/iengineservicemgr.h:60
inline void VideoModeChange_t::ModeChangeComplete()
{
} /* size: 0 */

// <00743309> ../public/engine2/iengineservicemgr.h:78
void IEngineService::IEngineService()
{
} /* size: 0 */

// <007432ED> ../public/engine2/iengineservicemgr.h:78
inline void IEngineService::IEngineService()
{
} /* size: 0 */

// <001AB48D> ../public/engine2/iengineservicemgr.h:78
// member functions: 28
// member variable: 1
// vtable entries: 11
// class size: 8
class IEngineService : public IAppSystem {
public:
	/* class IAppSystem <ancestor>; */ /* 0 8 */
	IEngineService& operator=(IEngineService* , const IEngineService& );
	/* ../public/engine2/iengineservicemgr.h:84 */
	virtual const EngineServiceDependencies_t* GetServiceDependencies(IEngineService* );
	/* ../public/engine2/iengineservicemgr.h:87 */
	virtual const char* GetName(const IEngineService* );
	/* ../public/engine2/iengineservicemgr.h:92 */
	virtual EngineServiceActivateType_t ShouldActivate(IEngineService* , const char* );
	/* ../public/engine2/iengineservicemgr.h:96 */
	virtual void OnLoopActivate(IEngineService* , const EngineLoopState_t& , CEventDispatcher<CEventIDManager_Default>* );
	/* ../public/engine2/iengineservicemgr.h:99 */
	virtual void OnLoopDeactivate(IEngineService* , const EngineLoopState_t& , CEventDispatcher<CEventIDManager_Default>* );
	/* ../public/engine2/iengineservicemgr.h:102 */
	virtual bool IsActive(const IEngineService* );
protected:
	/* ../public/engine2/iengineservicemgr.h:106 */
	virtual void SetActive(IEngineService* , bool);
	/* ../public/engine2/iengineservicemgr.h:109 */
	virtual void SetName(IEngineService* , const char* );
	/* ../public/engine2/iengineservicemgr.h:112 */
	virtual void RegisterEventMap(IEngineService* , CEventDispatcher<CEventIDManager_Default>* , EventMapRegistrationType_t);
	/* ../public/engine2/iengineservicemgr.h:115 */
	virtual UtlSymId_t GetServiceIndex(IEngineService* );
	/* ../public/engine2/iengineservicemgr.h:116 */
	virtual void SetServiceIndex(IEngineService* , UtlSymId_t);
	/* ../public/engine2/iengineservicemgr.h:119 */
	virtual void ~IEngineService(IEngineService* );
	class IEngineService & operator=(class IEngineService *, const class IEngineService  &); /* linkage=_ZN14IEngineServiceaSERKS_ */
	virtual const class EngineServiceDependencies_t  * GetServiceDependencies(class IEngineService *); /* linkage=_ZN14IEngineService22GetServiceDependenciesEv */
	virtual const char  * GetName(const class IEngineService  *); /* linkage=_ZNK14IEngineService7GetNameEv */
	virtual enum EngineServiceActivateType_t ShouldActivate(class IEngineService *, const char  *); /* linkage=_ZN14IEngineService14ShouldActivateEPKc */
	virtual void OnLoopActivate(class IEngineService *, const class EngineLoopState_t  &, class CEventDispatcher<CEventIDManager_Default> *); /* linkage=_ZN14IEngineService14OnLoopActivateERK17EngineLoopState_tP16CEventDispatcherI23CEventIDManager_DefaultE */
	virtual void OnLoopDeactivate(class IEngineService *, const class EngineLoopState_t  &, class CEventDispatcher<CEventIDManager_Default> *); /* linkage=_ZN14IEngineService16OnLoopDeactivateERK17EngineLoopState_tP16CEventDispatcherI23CEventIDManager_DefaultE */
	virtual bool IsActive(const class IEngineService  *); /* linkage=_ZNK14IEngineService8IsActiveEv */
	virtual void SetActive(class IEngineService *, bool); /* linkage=_ZN14IEngineService9SetActiveEb */
	virtual void SetName(class IEngineService *, const char  *); /* linkage=_ZN14IEngineService7SetNameEPKc */
	virtual void RegisterEventMap(class IEngineService *, class CEventDispatcher<CEventIDManager_Default> *, enum EventMapRegistrationType_t); /* linkage=_ZN14IEngineService16RegisterEventMapEP16CEventDispatcherI23CEventIDManager_DefaultE26EventMapRegistrationType_t */
	virtual UtlSymId_t GetServiceIndex(class IEngineService *); /* linkage=_ZN14IEngineService15GetServiceIndexEv */
	virtual void SetServiceIndex(class IEngineService *, UtlSymId_t); /* linkage=_ZN14IEngineService15SetServiceIndexEt */
	virtual void ~IEngineService(class IEngineService *); /* linkage=_ZN14IEngineServiceD4Ev */
	void IEngineService(class IEngineService *, const class IEngineService  &); /* linkage=_ZN14IEngineServiceC4ERKS_ */
	void IEngineService(class IEngineService *); /* linkage=_ZN14IEngineServiceC4Ev */
};

// <00757110> ../public/engine2/iengineservicemgr.h:119
void IEngineService::~IEngineService()
{
} /* size: 0 */

// <007570E0> ../public/engine2/iengineservicemgr.h:119
inline void IEngineService::~IEngineService()
{
} /* size: 0 */

// <00353A45> ../public/engine2/iengineservicemgr.h:143
// member functions: 28
// member variables: 4
// vtable entries: 11
// class size: 64
class CBaseEngineService<IEngineService> : public CTier3AppSystem<IEngineService, 0> {
public:
	/* class CTier3AppSystem<IEngineService, 0> <ancestor>; */ /* 0 48 */
	void CBaseEngineService(CBaseEngineService<IEngineService>* , const CBaseEngineService<IEngineService>& );
	/* ../public/engine2/iengineservicemgr.h:149 */
	void CBaseEngineService(CBaseEngineService<IEngineService>* );
	/* ../public/engine2/iengineservicemgr.h:150 */
	virtual EngineServiceActivateType_t ShouldActivate(CBaseEngineService<IEngineService>* , const char* );
	/* ../public/engine2/iengineservicemgr.h:151 */
	virtual void OnLoopActivate(CBaseEngineService<IEngineService>* , const EngineLoopState_t& , CEventDispatcher<CEventIDManager_Default>* );
	/* ../public/engine2/iengineservicemgr.h:152 */
	virtual void OnLoopDeactivate(CBaseEngineService<IEngineService>* , const EngineLoopState_t& , CEventDispatcher<CEventIDManager_Default>* );
	/* ../public/engine2/iengineservicemgr.h:153 */
	virtual bool IsActive(const CBaseEngineService<IEngineService>* );
	/* ../public/engine2/iengineservicemgr.h:154 */
	virtual const char* GetName(const CBaseEngineService<IEngineService>* );
	/* ../public/engine2/iengineservicemgr.h:155 */
	virtual const EngineServiceDependencies_t* GetServiceDependencies(CBaseEngineService<IEngineService>* );
	/* ../public/engine2/iengineservicemgr.h:156 */
	virtual UtlSymId_t GetServiceIndex(CBaseEngineService<IEngineService>* );
	/* ../public/engine2/iengineservicemgr.h:160 */
	virtual void SetServiceIndex(CBaseEngineService<IEngineService>* , UtlSymId_t);
protected:
	/* ../public/engine2/iengineservicemgr.h:167 */
	virtual void ~CBaseEngineService(CBaseEngineService<IEngineService>* );
	/* ../public/engine2/iengineservicemgr.h:169 */
	virtual void SetName(CBaseEngineService<IEngineService>* , const char* );
	/* ../public/engine2/iengineservicemgr.h:170 */
	virtual void SetActive(CBaseEngineService<IEngineService>* , bool);
	/* ../public/engine2/iengineservicemgr.h:171 */
	virtual void RegisterEventMap(CBaseEngineService<IEngineService>* , CEventDispatcher<CEventIDManager_Default>* , EventMapRegistrationType_t);
private:
	const char * m_pName; /* 48 8 */
	bool m_bIsActive; /* 56 1 */
	UtlSymId_t m_nServiceIndex; /* 58 2 */
	void CBaseEngineService(class CBaseEngineService<IEngineService> *, const class CBaseEngineService<IEngineService>  &); /* linkage=_ZN18CBaseEngineServiceI14IEngineServiceEC4ERKS1_ */
	void CBaseEngineService(class CBaseEngineService<IEngineService> *); /* linkage=_ZN18CBaseEngineServiceI14IEngineServiceEC4Ev */
	virtual enum EngineServiceActivateType_t ShouldActivate(class CBaseEngineService<IEngineService> *, const char  *); /* linkage=_ZN18CBaseEngineServiceI14IEngineServiceE14ShouldActivateEPKc */
	virtual void OnLoopActivate(class CBaseEngineService<IEngineService> *, const class EngineLoopState_t  &, class CEventDispatcher<CEventIDManager_Default> *); /* linkage=_ZN18CBaseEngineServiceI14IEngineServiceE14OnLoopActivateERK17EngineLoopState_tP16CEventDispatcherI23CEventIDManager_DefaultE */
	virtual void OnLoopDeactivate(class CBaseEngineService<IEngineService> *, const class EngineLoopState_t  &, class CEventDispatcher<CEventIDManager_Default> *); /* linkage=_ZN18CBaseEngineServiceI14IEngineServiceE16OnLoopDeactivateERK17EngineLoopState_tP16CEventDispatcherI23CEventIDManager_DefaultE */
	virtual bool IsActive(const class CBaseEngineService<IEngineService>  *); /* linkage=_ZNK18CBaseEngineServiceI14IEngineServiceE8IsActiveEv */
	virtual const char  * GetName(const class CBaseEngineService<IEngineService>  *); /* linkage=_ZNK18CBaseEngineServiceI14IEngineServiceE7GetNameEv */
	virtual const class EngineServiceDependencies_t  * GetServiceDependencies(class CBaseEngineService<IEngineService> *); /* linkage=_ZN18CBaseEngineServiceI14IEngineServiceE22GetServiceDependenciesEv */
	virtual UtlSymId_t GetServiceIndex(class CBaseEngineService<IEngineService> *); /* linkage=_ZN18CBaseEngineServiceI14IEngineServiceE15GetServiceIndexEv */
	virtual void SetServiceIndex(class CBaseEngineService<IEngineService> *, UtlSymId_t); /* linkage=_ZN18CBaseEngineServiceI14IEngineServiceE15SetServiceIndexEt */
	virtual void ~CBaseEngineService(class CBaseEngineService<IEngineService> *); /* linkage=_ZN18CBaseEngineServiceI14IEngineServiceED4Ev */
	virtual void SetName(class CBaseEngineService<IEngineService> *, const char  *); /* linkage=_ZN18CBaseEngineServiceI14IEngineServiceE7SetNameEPKc */
	virtual void SetActive(class CBaseEngineService<IEngineService> *, bool); /* linkage=_ZN18CBaseEngineServiceI14IEngineServiceE9SetActiveEb */
	virtual void RegisterEventMap(class CBaseEngineService<IEngineService> *, class CEventDispatcher<CEventIDManager_Default> *, enum EventMapRegistrationType_t); /* linkage=_ZN18CBaseEngineServiceI14IEngineServiceE16RegisterEventMapEP16CEventDispatcherI23CEventIDManager_DefaultE26EventMapRegistrationType_t */
};

// <004A1170> ../public/engine2/iengineservicemgr.h:143
// member functions: 15
// member variables: 4
// vtable entries: 11
// class size: 64
class CBaseEngineService<IInputService> : public CTier3AppSystem<IInputService, 0> {
public:
	/* class CTier3AppSystem<IInputService, 0> <ancestor>; */ /* 0 48 */
	void CBaseEngineService(CBaseEngineService<IInputService>* , const CBaseEngineService<IInputService>& );
	CBaseEngineService<IInputService>& operator=(CBaseEngineService<IInputService>* , const CBaseEngineService<IInputService>& );
	/* ../public/engine2/iengineservicemgr.h:149 */
	void CBaseEngineService(CBaseEngineService<IInputService>* );
	/* ../public/engine2/iengineservicemgr.h:150 */
	virtual EngineServiceActivateType_t ShouldActivate(CBaseEngineService<IInputService>* , const char* );
	/* ../public/engine2/iengineservicemgr.h:151 */
	virtual void OnLoopActivate(CBaseEngineService<IInputService>* , const EngineLoopState_t& , CEventDispatcher<CEventIDManager_Default>* );
	/* ../public/engine2/iengineservicemgr.h:152 */
	virtual void OnLoopDeactivate(CBaseEngineService<IInputService>* , const EngineLoopState_t& , CEventDispatcher<CEventIDManager_Default>* );
	/* ../public/engine2/iengineservicemgr.h:153 */
	virtual bool IsActive(const CBaseEngineService<IInputService>* );
	/* ../public/engine2/iengineservicemgr.h:154 */
	virtual const char* GetName(const CBaseEngineService<IInputService>* );
	/* ../public/engine2/iengineservicemgr.h:155 */
	virtual const EngineServiceDependencies_t* GetServiceDependencies(CBaseEngineService<IInputService>* );
	/* ../public/engine2/iengineservicemgr.h:156 */
	virtual UtlSymId_t GetServiceIndex(CBaseEngineService<IInputService>* );
	/* ../public/engine2/iengineservicemgr.h:160 */
	virtual void SetServiceIndex(CBaseEngineService<IInputService>* , UtlSymId_t);
protected:
	/* ../public/engine2/iengineservicemgr.h:167 */
	virtual void ~CBaseEngineService(CBaseEngineService<IInputService>* );
	/* ../public/engine2/iengineservicemgr.h:169 */
	virtual void SetName(CBaseEngineService<IInputService>* , const char* );
	/* ../public/engine2/iengineservicemgr.h:170 */
	virtual void SetActive(CBaseEngineService<IInputService>* , bool);
	/* ../public/engine2/iengineservicemgr.h:171 */
	virtual void RegisterEventMap(CBaseEngineService<IInputService>* , CEventDispatcher<CEventIDManager_Default>* , EventMapRegistrationType_t);
private:
	const char * m_pName; /* 48 8 */
	bool m_bIsActive; /* 56 1 */
	UtlSymId_t m_nServiceIndex; /* 58 2 */
};

// <00588317> ../public/engine2/iengineservicemgr.h:143
// member functions: 14
// member variables: 4
// vtable entries: 11
// class size: 64
class CBaseEngineService<IRenderService> : public CTier3AppSystem<IRenderService, 0> {
public:
	/* class CTier3AppSystem<IRenderService, 0> <ancestor>; */ /* 0 48 */
	void CBaseEngineService(CBaseEngineService<IRenderService>* , const CBaseEngineService<IRenderService>& );
	/* ../public/engine2/iengineservicemgr.h:149 */
	void CBaseEngineService(CBaseEngineService<IRenderService>* );
	/* ../public/engine2/iengineservicemgr.h:150 */
	virtual EngineServiceActivateType_t ShouldActivate(CBaseEngineService<IRenderService>* , const char* );
	/* ../public/engine2/iengineservicemgr.h:151 */
	virtual void OnLoopActivate(CBaseEngineService<IRenderService>* , const EngineLoopState_t& , CEventDispatcher<CEventIDManager_Default>* );
	/* ../public/engine2/iengineservicemgr.h:152 */
	virtual void OnLoopDeactivate(CBaseEngineService<IRenderService>* , const EngineLoopState_t& , CEventDispatcher<CEventIDManager_Default>* );
	/* ../public/engine2/iengineservicemgr.h:153 */
	virtual bool IsActive(const CBaseEngineService<IRenderService>* );
	/* ../public/engine2/iengineservicemgr.h:154 */
	virtual const char* GetName(const CBaseEngineService<IRenderService>* );
	/* ../public/engine2/iengineservicemgr.h:155 */
	virtual const EngineServiceDependencies_t* GetServiceDependencies(CBaseEngineService<IRenderService>* );
	/* ../public/engine2/iengineservicemgr.h:156 */
	virtual UtlSymId_t GetServiceIndex(CBaseEngineService<IRenderService>* );
	/* ../public/engine2/iengineservicemgr.h:160 */
	virtual void SetServiceIndex(CBaseEngineService<IRenderService>* , UtlSymId_t);
protected:
	/* ../public/engine2/iengineservicemgr.h:167 */
	virtual void ~CBaseEngineService(CBaseEngineService<IRenderService>* );
	/* ../public/engine2/iengineservicemgr.h:169 */
	virtual void SetName(CBaseEngineService<IRenderService>* , const char* );
	/* ../public/engine2/iengineservicemgr.h:170 */
	virtual void SetActive(CBaseEngineService<IRenderService>* , bool);
	/* ../public/engine2/iengineservicemgr.h:171 */
	virtual void RegisterEventMap(CBaseEngineService<IRenderService>* , CEventDispatcher<CEventIDManager_Default>* , EventMapRegistrationType_t);
private:
	const char * m_pName; /* 48 8 */
	bool m_bIsActive; /* 56 1 */
	UtlSymId_t m_nServiceIndex; /* 58 2 */
};

// <00665876> ../public/engine2/iengineservicemgr.h:143
// member functions: 14
// member variables: 4
// vtable entries: 11
// class size: 64
class CBaseEngineService<ISoundService> : public CTier3AppSystem<ISoundService, 0> {
public:
	/* class CTier3AppSystem<ISoundService, 0> <ancestor>; */ /* 0 48 */
	void CBaseEngineService(CBaseEngineService<ISoundService>* , const CBaseEngineService<ISoundService>& );
	/* ../public/engine2/iengineservicemgr.h:149 */
	void CBaseEngineService(CBaseEngineService<ISoundService>* );
	/* ../public/engine2/iengineservicemgr.h:150 */
	virtual EngineServiceActivateType_t ShouldActivate(CBaseEngineService<ISoundService>* , const char* );
	/* ../public/engine2/iengineservicemgr.h:151 */
	virtual void OnLoopActivate(CBaseEngineService<ISoundService>* , const EngineLoopState_t& , CEventDispatcher<CEventIDManager_Default>* );
	/* ../public/engine2/iengineservicemgr.h:152 */
	virtual void OnLoopDeactivate(CBaseEngineService<ISoundService>* , const EngineLoopState_t& , CEventDispatcher<CEventIDManager_Default>* );
	/* ../public/engine2/iengineservicemgr.h:153 */
	virtual bool IsActive(const CBaseEngineService<ISoundService>* );
	/* ../public/engine2/iengineservicemgr.h:154 */
	virtual const char* GetName(const CBaseEngineService<ISoundService>* );
	/* ../public/engine2/iengineservicemgr.h:155 */
	virtual const EngineServiceDependencies_t* GetServiceDependencies(CBaseEngineService<ISoundService>* );
	/* ../public/engine2/iengineservicemgr.h:156 */
	virtual UtlSymId_t GetServiceIndex(CBaseEngineService<ISoundService>* );
	/* ../public/engine2/iengineservicemgr.h:160 */
	virtual void SetServiceIndex(CBaseEngineService<ISoundService>* , UtlSymId_t);
protected:
	/* ../public/engine2/iengineservicemgr.h:167 */
	virtual void ~CBaseEngineService(CBaseEngineService<ISoundService>* );
	/* ../public/engine2/iengineservicemgr.h:169 */
	virtual void SetName(CBaseEngineService<ISoundService>* , const char* );
	/* ../public/engine2/iengineservicemgr.h:170 */
	virtual void SetActive(CBaseEngineService<ISoundService>* , bool);
	/* ../public/engine2/iengineservicemgr.h:171 */
	virtual void RegisterEventMap(CBaseEngineService<ISoundService>* , CEventDispatcher<CEventIDManager_Default>* , EventMapRegistrationType_t);
private:
	const char * m_pName; /* 48 8 */
	bool m_bIsActive; /* 56 1 */
	UtlSymId_t m_nServiceIndex; /* 58 2 */
};

// <00739604> ../public/engine2/iengineservicemgr.h:143
// member functions: 14
// member variables: 4
// vtable entries: 11
// class size: 64
class CBaseEngineService<IToolService> : public CTier3AppSystem<IToolService, 0> {
public:
	/* class CTier3AppSystem<IToolService, 0> <ancestor>; */ /* 0 48 */
	void CBaseEngineService(CBaseEngineService<IToolService>* , const CBaseEngineService<IToolService>& );
	/* ../public/engine2/iengineservicemgr.h:149 */
	void CBaseEngineService(CBaseEngineService<IToolService>* );
	/* ../public/engine2/iengineservicemgr.h:150 */
	virtual EngineServiceActivateType_t ShouldActivate(CBaseEngineService<IToolService>* , const char* );
	/* ../public/engine2/iengineservicemgr.h:151 */
	virtual void OnLoopActivate(CBaseEngineService<IToolService>* , const EngineLoopState_t& , CEventDispatcher<CEventIDManager_Default>* );
	/* ../public/engine2/iengineservicemgr.h:152 */
	virtual void OnLoopDeactivate(CBaseEngineService<IToolService>* , const EngineLoopState_t& , CEventDispatcher<CEventIDManager_Default>* );
	/* ../public/engine2/iengineservicemgr.h:153 */
	virtual bool IsActive(const CBaseEngineService<IToolService>* );
	/* ../public/engine2/iengineservicemgr.h:154 */
	virtual const char* GetName(const CBaseEngineService<IToolService>* );
	/* ../public/engine2/iengineservicemgr.h:155 */
	virtual const EngineServiceDependencies_t* GetServiceDependencies(CBaseEngineService<IToolService>* );
	/* ../public/engine2/iengineservicemgr.h:156 */
	virtual UtlSymId_t GetServiceIndex(CBaseEngineService<IToolService>* );
	/* ../public/engine2/iengineservicemgr.h:160 */
	virtual void SetServiceIndex(CBaseEngineService<IToolService>* , UtlSymId_t);
protected:
	/* ../public/engine2/iengineservicemgr.h:167 */
	virtual void ~CBaseEngineService(CBaseEngineService<IToolService>* );
	/* ../public/engine2/iengineservicemgr.h:169 */
	virtual void SetName(CBaseEngineService<IToolService>* , const char* );
	/* ../public/engine2/iengineservicemgr.h:170 */
	virtual void SetActive(CBaseEngineService<IToolService>* , bool);
	/* ../public/engine2/iengineservicemgr.h:171 */
	virtual void RegisterEventMap(CBaseEngineService<IToolService>* , CEventDispatcher<CEventIDManager_Default>* , EventMapRegistrationType_t);
private:
	const char * m_pName; /* 48 8 */
	bool m_bIsActive; /* 56 1 */
	UtlSymId_t m_nServiceIndex; /* 58 2 */
};

// <00744A3D> ../public/engine2/iengineservicemgr.h:149
void CBaseEngineService<IToolService>::CBaseEngineService()
{
} /* size: 0 */

// <00744A24> ../public/engine2/iengineservicemgr.h:149
inline void CBaseEngineService<IToolService>::CBaseEngineService()
{
} /* size: 0 */

// <00676597> ../public/engine2/iengineservicemgr.h:149
void CBaseEngineService<ISoundService>::CBaseEngineService()
{
} /* size: 0 */

// <0067657E> ../public/engine2/iengineservicemgr.h:149
inline void CBaseEngineService<ISoundService>::CBaseEngineService()
{
} /* size: 0 */

// <00597D42> ../public/engine2/iengineservicemgr.h:149
void CBaseEngineService<IRenderService>::CBaseEngineService()
{
} /* size: 0 */

// <00597D29> ../public/engine2/iengineservicemgr.h:149
inline void CBaseEngineService<IRenderService>::CBaseEngineService()
{
} /* size: 0 */

// <004B6670> ../public/engine2/iengineservicemgr.h:149
void CBaseEngineService<IInputService>::CBaseEngineService()
{
} /* size: 0 */

// <004B6657> ../public/engine2/iengineservicemgr.h:149
inline void CBaseEngineService<IInputService>::CBaseEngineService()
{
} /* size: 0 */

// <0036110E> ../public/engine2/iengineservicemgr.h:149
void CBaseEngineService<IEngineService>::CBaseEngineService()
{
} /* size: 0 */

// <003610F5> ../public/engine2/iengineservicemgr.h:149
inline void CBaseEngineService<IEngineService>::CBaseEngineService()
{
} /* size: 0 */

// <00740437> ../public/engine2/iengineservicemgr.h:150
void CBaseEngineService<IToolService>::ShouldActivate(const char* pLoopName)
{
} /* size: 0 */

// <0066C588> ../public/engine2/iengineservicemgr.h:150
void CBaseEngineService<ISoundService>::ShouldActivate(const char* pLoopName)
{
} /* size: 0 */

// <0058EF5C> ../public/engine2/iengineservicemgr.h:150
void CBaseEngineService<IRenderService>::ShouldActivate(const char* pLoopName)
{
} /* size: 0 */

// <004A8ACE> ../public/engine2/iengineservicemgr.h:150
void CBaseEngineService<IInputService>::ShouldActivate(const char* pLoopName)
{
} /* size: 10 */

// <0035AC9B> ../public/engine2/iengineservicemgr.h:150
void CBaseEngineService<IEngineService>::ShouldActivate(const char* pLoopName)
{
} /* size: 10 */

// <0074097D> ../public/engine2/iengineservicemgr.h:151
void CBaseEngineService<IToolService>::OnLoopActivate(const EngineLoopState_t& state, CEventDispatcher<CEventIDManager_Default>* pEventDispatcher)
{
} /* size: 5 */

// <0066C558> ../public/engine2/iengineservicemgr.h:151
void CBaseEngineService<ISoundService>::OnLoopActivate(const EngineLoopState_t& state, CEventDispatcher<CEventIDManager_Default>* pEventDispatcher)
{
} /* size: 0 */

// <00597BAE> ../public/engine2/iengineservicemgr.h:151
inline void CBaseEngineService<IRenderService>::OnLoopActivate(const EngineLoopState_t& state, CEventDispatcher<CEventIDManager_Default>* pEventDispatcher)
{
} /* size: 0 */

// <004A8A82> ../public/engine2/iengineservicemgr.h:151
void CBaseEngineService<IInputService>::OnLoopActivate(const EngineLoopState_t& state, CEventDispatcher<CEventIDManager_Default>* pEventDispatcher)
{
} /* size: 5 */

// <0035AAF4> ../public/engine2/iengineservicemgr.h:151
void CBaseEngineService<IEngineService>::OnLoopActivate(const EngineLoopState_t& state, CEventDispatcher<CEventIDManager_Default>* pEventDispatcher)
{
} /* size: 0 */

// <00740407> ../public/engine2/iengineservicemgr.h:152
void CBaseEngineService<IToolService>::OnLoopDeactivate(const EngineLoopState_t& state, CEventDispatcher<CEventIDManager_Default>* pEventDispatcher)
{
} /* size: 0 */

// <0066C528> ../public/engine2/iengineservicemgr.h:152
void CBaseEngineService<ISoundService>::OnLoopDeactivate(const EngineLoopState_t& state, CEventDispatcher<CEventIDManager_Default>* pEventDispatcher)
{
} /* size: 0 */

// <0058F43F> ../public/engine2/iengineservicemgr.h:152
void CBaseEngineService<IRenderService>::OnLoopDeactivate(const EngineLoopState_t& state, CEventDispatcher<CEventIDManager_Default>* pEventDispatcher)
{
} /* size: 5 */

// <004A8A36> ../public/engine2/iengineservicemgr.h:152
void CBaseEngineService<IInputService>::OnLoopDeactivate(const EngineLoopState_t& state, CEventDispatcher<CEventIDManager_Default>* pEventDispatcher)
{
} /* size: 5 */

// <0035AAC4> ../public/engine2/iengineservicemgr.h:152
void CBaseEngineService<IEngineService>::OnLoopDeactivate(const EngineLoopState_t& state, CEventDispatcher<CEventIDManager_Default>* pEventDispatcher)
{
} /* size: 0 */

// <0074094F> ../public/engine2/iengineservicemgr.h:153
void CBaseEngineService<IToolService>::IsActive()
{
} /* size: 9 */

// <0066CB2F> ../public/engine2/iengineservicemgr.h:153
void CBaseEngineService<ISoundService>::IsActive()
{
} /* size: 9 */

// <0058F411> ../public/engine2/iengineservicemgr.h:153
void CBaseEngineService<IRenderService>::IsActive()
{
} /* size: 9 */

// <004A8A08> ../public/engine2/iengineservicemgr.h:153
void CBaseEngineService<IInputService>::IsActive()
{
} /* size: 9 */

// <0035AC6D> ../public/engine2/iengineservicemgr.h:153
void CBaseEngineService<IEngineService>::IsActive()
{
} /* size: 9 */

// <007409C9> ../public/engine2/iengineservicemgr.h:154
void CBaseEngineService<IToolService>::GetName()
{
} /* size: 9 */

// <0066CB5D> ../public/engine2/iengineservicemgr.h:154
void CBaseEngineService<ISoundService>::GetName()
{
} /* size: 9 */

// <0058F48B> ../public/engine2/iengineservicemgr.h:154
void CBaseEngineService<IRenderService>::GetName()
{
} /* size: 9 */

// <004A8B0B> ../public/engine2/iengineservicemgr.h:154
void CBaseEngineService<IInputService>::GetName()
{
} /* size: 9 */

// <0035ACD8> ../public/engine2/iengineservicemgr.h:154
void CBaseEngineService<IEngineService>::GetName()
{
} /* size: 9 */

// <0074045B> ../public/engine2/iengineservicemgr.h:155
void CBaseEngineService<IToolService>::GetServiceDependencies()
{
} /* size: 0 */

// <0066CB8B> ../public/engine2/iengineservicemgr.h:155
void CBaseEngineService<ISoundService>::GetServiceDependencies()
{
} /* size: 7 */

// <0058F4B9> ../public/engine2/iengineservicemgr.h:155
void CBaseEngineService<IRenderService>::GetServiceDependencies()
{
} /* size: 7 */

// <004A8420> ../public/engine2/iengineservicemgr.h:155
void CBaseEngineService<IInputService>::GetServiceDependencies()
{
} /* size: 0 */

// <0035AB24> ../public/engine2/iengineservicemgr.h:155
void CBaseEngineService<IEngineService>::GetServiceDependencies()
{
} /* size: 0 */

// <0074085B> ../public/engine2/iengineservicemgr.h:156
void CBaseEngineService<IToolService>::GetServiceIndex()
{
} /* size: 9 */

// <0066CA87> ../public/engine2/iengineservicemgr.h:156
void CBaseEngineService<ISoundService>::GetServiceIndex()
{
} /* size: 9 */

// <0058F369> ../public/engine2/iengineservicemgr.h:156
void CBaseEngineService<IRenderService>::GetServiceIndex()
{
} /* size: 9 */

// <004A8914> ../public/engine2/iengineservicemgr.h:156
void CBaseEngineService<IInputService>::GetServiceIndex()
{
} /* size: 9 */

// <0035AB79> ../public/engine2/iengineservicemgr.h:156
void CBaseEngineService<IEngineService>::GetServiceIndex()
{
} /* size: 9 */

// <0074081E> ../public/engine2/iengineservicemgr.h:160
void CBaseEngineService<IToolService>::SetServiceIndex(UtlSymId_t nIndex)
{
} /* size: 9 */

// <0066CA4A> ../public/engine2/iengineservicemgr.h:160
void CBaseEngineService<ISoundService>::SetServiceIndex(UtlSymId_t nIndex)
{
} /* size: 9 */

// <0058F32C> ../public/engine2/iengineservicemgr.h:160
void CBaseEngineService<IRenderService>::SetServiceIndex(UtlSymId_t nIndex)
{
} /* size: 9 */

// <004A88D7> ../public/engine2/iengineservicemgr.h:160
void CBaseEngineService<IInputService>::SetServiceIndex(UtlSymId_t nIndex)
{
} /* size: 9 */

// <0035AB3C> ../public/engine2/iengineservicemgr.h:160
void CBaseEngineService<IEngineService>::SetServiceIndex(UtlSymId_t nIndex)
{
} /* size: 9 */

// <00744A0D> ../public/engine2/iengineservicemgr.h:167
void CBaseEngineService<IToolService>::~CBaseEngineService()
{
} /* size: 0 */

// <007449DD> ../public/engine2/iengineservicemgr.h:167
inline void CBaseEngineService<IToolService>::~CBaseEngineService()
{
} /* size: 0 */

// <00676567> ../public/engine2/iengineservicemgr.h:167
void CBaseEngineService<ISoundService>::~CBaseEngineService()
{
} /* size: 0 */

// <00676537> ../public/engine2/iengineservicemgr.h:167
inline void CBaseEngineService<ISoundService>::~CBaseEngineService()
{
} /* size: 0 */

// <00597D12> ../public/engine2/iengineservicemgr.h:167
void CBaseEngineService<IRenderService>::~CBaseEngineService()
{
} /* size: 0 */

// <00597CE2> ../public/engine2/iengineservicemgr.h:167
inline void CBaseEngineService<IRenderService>::~CBaseEngineService()
{
} /* size: 0 */

// <004B6640> ../public/engine2/iengineservicemgr.h:167
void CBaseEngineService<IInputService>::~CBaseEngineService()
{
} /* size: 0 */

// <004B6610> ../public/engine2/iengineservicemgr.h:167
inline void CBaseEngineService<IInputService>::~CBaseEngineService()
{
} /* size: 0 */

// <003610DE> ../public/engine2/iengineservicemgr.h:167
void CBaseEngineService<IEngineService>::~CBaseEngineService()
{
} /* size: 0 */

// <003610AE> ../public/engine2/iengineservicemgr.h:167
inline void CBaseEngineService<IEngineService>::~CBaseEngineService()
{
} /* size: 0 */

// <007408D5> ../public/engine2/iengineservicemgr.h:169
void CBaseEngineService<IToolService>::SetName(const char* pName)
{
} /* size: 9 */

// <0066CAB5> ../public/engine2/iengineservicemgr.h:169
void CBaseEngineService<ISoundService>::SetName(const char* pName)
{
} /* size: 9 */

// <0058F397> ../public/engine2/iengineservicemgr.h:169
void CBaseEngineService<IRenderService>::SetName(const char* pName)
{
} /* size: 9 */

// <004A898E> ../public/engine2/iengineservicemgr.h:169
void CBaseEngineService<IInputService>::SetName(const char* pName)
{
} /* size: 9 */

// <0035ABF3> ../public/engine2/iengineservicemgr.h:169
void CBaseEngineService<IEngineService>::SetName(const char* pName)
{
} /* size: 9 */

// <00740912> ../public/engine2/iengineservicemgr.h:170
void CBaseEngineService<IToolService>::SetActive(bool bActive)
{
} /* size: 9 */

// <0066CAF2> ../public/engine2/iengineservicemgr.h:170
void CBaseEngineService<ISoundService>::SetActive(bool bActive)
{
} /* size: 9 */

// <0058F3D4> ../public/engine2/iengineservicemgr.h:170
void CBaseEngineService<IRenderService>::SetActive(bool bActive)
{
} /* size: 9 */

// <004A89CB> ../public/engine2/iengineservicemgr.h:170
void CBaseEngineService<IInputService>::SetActive(bool bActive)
{
} /* size: 9 */

// <0035AC30> ../public/engine2/iengineservicemgr.h:170
void CBaseEngineService<IEngineService>::SetActive(bool bActive)
{
} /* size: 9 */

// <00740889> ../public/engine2/iengineservicemgr.h:171
void CBaseEngineService<IToolService>::RegisterEventMap(CEventDispatcher<CEventIDManager_Default>* pEventDispatcher, EventMapRegistrationType_t nRegistrationType)
{
} /* size: 5 */

// <0066C4F8> ../public/engine2/iengineservicemgr.h:171
void CBaseEngineService<ISoundService>::RegisterEventMap(CEventDispatcher<CEventIDManager_Default>* pEventDispatcher, EventMapRegistrationType_t nRegistrationType)
{
} /* size: 0 */

// <0058EF2C> ../public/engine2/iengineservicemgr.h:171
void CBaseEngineService<IRenderService>::RegisterEventMap(CEventDispatcher<CEventIDManager_Default>* pEventDispatcher, EventMapRegistrationType_t nRegistrationType)
{
} /* size: 0 */

// <004A8942> ../public/engine2/iengineservicemgr.h:171
void CBaseEngineService<IInputService>::RegisterEventMap(CEventDispatcher<CEventIDManager_Default>* pEventDispatcher, EventMapRegistrationType_t nRegistrationType)
{
} /* size: 5 */

// <0035ABA7> ../public/engine2/iengineservicemgr.h:171
void CBaseEngineService<IEngineService>::RegisterEventMap(CEventDispatcher<CEventIDManager_Default>* pEventDispatcher, EventMapRegistrationType_t nRegistrationType)
{
} /* size: 5 */

// <0023999E> ../public/engine2/iengineservicemgr.h:195
void ILoopType::ILoopType()
{
} /* size: 0 */

// <00239982> ../public/engine2/iengineservicemgr.h:195
inline void ILoopType::ILoopType()
{
} /* size: 0 */

// <00225683> ../public/engine2/iengineservicemgr.h:195
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 8
class ILoopType {
	void ILoopType(ILoopType* , ILoopType& );
	void ILoopType(ILoopType* , const ILoopType& );
	void ILoopType(ILoopType* );
	void ~ILoopType(ILoopType* );
	int ()(void) * * _vptr.ILoopType; /* 0 8 */
	/* ../public/engine2/iengineservicemgr.h:199 */
	virtual void AddEngineService(ILoopType* , const char* );
	void ILoopType(class ILoopType *, class ILoopType &); /* linkage=_ZN9ILoopTypeC4EOS_ */
	void ILoopType(class ILoopType *, const class ILoopType  &); /* linkage=_ZN9ILoopTypeC4ERKS_ */
	void ILoopType(class ILoopType *); /* linkage=_ZN9ILoopTypeC4Ev */
	void ~ILoopType(class ILoopType *); /* linkage=_ZN9ILoopTypeD4Ev */
	virtual void AddEngineService(class ILoopType *, const char  *); /* linkage=_ZN9ILoopType16AddEngineServiceEPKc */
};

// <0029C918> ../public/engine2/iengineservicemgr.h:195
// member functions: 7
// member variable: 1
// vtable entry: 1
// class size: 8
class ILoopType {
	void ~ILoopType(ILoopType* );
	int ()(void) * * _vptr.ILoopType; /* 0 8 */
	/* ../public/engine2/iengineservicemgr.h:199 */
	virtual void AddEngineService(ILoopType* , const char* );
	void ILoopType(class ILoopType *, class ILoopType &); /* linkage=_ZN9ILoopTypeC4EOS_ */
	void ILoopType(class ILoopType *, const class ILoopType  &); /* linkage=_ZN9ILoopTypeC4ERKS_ */
	void ILoopType(class ILoopType *); /* linkage=_ZN9ILoopTypeC4Ev */
	void ~ILoopType(class ILoopType *); /* linkage=_ZN9ILoopTypeD4Ev */
	virtual void AddEngineService(class ILoopType *, const char  *); /* linkage=_ZN9ILoopType16AddEngineServiceEPKc */
};

// <0023C0E3> ../public/engine2/iengineservicemgr.h:207
void ILoopModePrerequisiteRegistry::ILoopModePrerequisiteRegistry()
{
} /* size: 0 */

// <0023C0C7> ../public/engine2/iengineservicemgr.h:207
inline void ILoopModePrerequisiteRegistry::ILoopModePrerequisiteRegistry()
{
} /* size: 0 */

// <002227F1> ../public/engine2/iengineservicemgr.h:207
// member functions: 12
// member variable: 1
// class size: 8
class ILoopModePrerequisiteRegistry : public IPrerequisiteRegistry {
public:
	/* class IPrerequisiteRegistry <ancestor>; */ /* 0 8 */
	void ~ILoopModePrerequisiteRegistry(ILoopModePrerequisiteRegistry* );
	void ILoopModePrerequisiteRegistry(ILoopModePrerequisiteRegistry* , ILoopModePrerequisiteRegistry& );
	void ILoopModePrerequisiteRegistry(ILoopModePrerequisiteRegistry* , const ILoopModePrerequisiteRegistry& );
	void ILoopModePrerequisiteRegistry(ILoopModePrerequisiteRegistry* );
	ILoopModePrerequisiteRegistry& operator=(ILoopModePrerequisiteRegistry* , ILoopModePrerequisiteRegistry& );
	ILoopModePrerequisiteRegistry& operator=(ILoopModePrerequisiteRegistry* , const ILoopModePrerequisiteRegistry& );
	void ~ILoopModePrerequisiteRegistry(class ILoopModePrerequisiteRegistry *); /* linkage=_ZN29ILoopModePrerequisiteRegistryD4Ev */
	void ILoopModePrerequisiteRegistry(class ILoopModePrerequisiteRegistry *, class ILoopModePrerequisiteRegistry &); /* linkage=_ZN29ILoopModePrerequisiteRegistryC4EOS_ */
	void ILoopModePrerequisiteRegistry(class ILoopModePrerequisiteRegistry *, const class ILoopModePrerequisiteRegistry  &); /* linkage=_ZN29ILoopModePrerequisiteRegistryC4ERKS_ */
	void ILoopModePrerequisiteRegistry(class ILoopModePrerequisiteRegistry *); /* linkage=_ZN29ILoopModePrerequisiteRegistryC4Ev */
	class ILoopModePrerequisiteRegistry & operator=(class ILoopModePrerequisiteRegistry *, class ILoopModePrerequisiteRegistry &); /* linkage=_ZN29ILoopModePrerequisiteRegistryaSEOS_ */
	class ILoopModePrerequisiteRegistry & operator=(class ILoopModePrerequisiteRegistry *, const class ILoopModePrerequisiteRegistry  &); /* linkage=_ZN29ILoopModePrerequisiteRegistryaSERKS_ */
};

// <00786042> ../public/engine2/iengineservicemgr.h:232
void ILoopMode::ILoopMode()
{
} /* size: 0 */

// <00786025> ../public/engine2/iengineservicemgr.h:232
inline void ILoopMode::ILoopMode()
{
} /* size: 0 */

// <00784B90> ../public/engine2/iengineservicemgr.h:232
// member functions: 18
// member variable: 1
// vtable entries: 5
// class size: 8
class ILoopMode {
	void ~ILoopMode(ILoopMode* );
	void ILoopMode(ILoopMode* , ILoopMode& );
	void ILoopMode(ILoopMode* , const ILoopMode& );
	void ILoopMode(ILoopMode* );
	int ()(void) * * _vptr.ILoopMode; /* 0 8 */
	/* ../public/engine2/iengineservicemgr.h:243 */
	virtual bool LoopInit(ILoopMode* , KeyValues* , ILoopModePrerequisiteRegistry* );
	/* ../public/engine2/iengineservicemgr.h:247 */
	virtual void LoopShutdown(ILoopMode* );
	/* ../public/engine2/iengineservicemgr.h:250 */
	virtual void OnLoopActivate(ILoopMode* , const EngineLoopState_t& , CEventDispatcher<CEventIDManager_Default>* );
	/* ../public/engine2/iengineservicemgr.h:253 */
	virtual void OnLoopDeactivate(ILoopMode* , const EngineLoopState_t& , CEventDispatcher<CEventIDManager_Default>* );
	/* ../public/engine2/iengineservicemgr.h:257 */
	virtual void RegisterEventMap(ILoopMode* , CEventDispatcher<CEventIDManager_Default>* , EventMapRegistrationType_t);
	void ~ILoopMode(class ILoopMode *); /* linkage=_ZN9ILoopModeD4Ev */
	void ILoopMode(class ILoopMode *, class ILoopMode &); /* linkage=_ZN9ILoopModeC4EOS_ */
	void ILoopMode(class ILoopMode *, const class ILoopMode  &); /* linkage=_ZN9ILoopModeC4ERKS_ */
	void ILoopMode(class ILoopMode *); /* linkage=_ZN9ILoopModeC4Ev */
	virtual bool LoopInit(class ILoopMode *, class KeyValues *, class ILoopModePrerequisiteRegistry *); /* linkage=_ZN9ILoopMode8LoopInitEP9KeyValuesP29ILoopModePrerequisiteRegistry */
	virtual void LoopShutdown(class ILoopMode *); /* linkage=_ZN9ILoopMode12LoopShutdownEv */
	virtual void OnLoopActivate(class ILoopMode *, const class EngineLoopState_t  &, class CEventDispatcher<CEventIDManager_Default> *); /* linkage=_ZN9ILoopMode14OnLoopActivateERK17EngineLoopState_tP16CEventDispatcherI23CEventIDManager_DefaultE */
	virtual void OnLoopDeactivate(class ILoopMode *, const class EngineLoopState_t  &, class CEventDispatcher<CEventIDManager_Default> *); /* linkage=_ZN9ILoopMode16OnLoopDeactivateERK17EngineLoopState_tP16CEventDispatcherI23CEventIDManager_DefaultE */
	virtual void RegisterEventMap(class ILoopMode *, class CEventDispatcher<CEventIDManager_Default> *, enum EventMapRegistrationType_t); /* linkage=_ZN9ILoopMode16RegisterEventMapEP16CEventDispatcherI23CEventIDManager_DefaultE26EventMapRegistrationType_t */
};

// <0078600E> ../public/engine2/iengineservicemgr.h:278
void CLoopModeBase::CLoopModeBase()
{
} /* size: 0 */

// <00785FF0> ../public/engine2/iengineservicemgr.h:278
inline void CLoopModeBase::CLoopModeBase()
{
} /* size: 0 */

// <007849A2> ../public/engine2/iengineservicemgr.h:278
// member functions: 22
// member variable: 1
// vtable entries: 5
// class size: 8
class CLoopModeBase : public ILoopMode {
public:
	/* class ILoopMode <ancestor>; */ /* 0 8 */
	void ~CLoopModeBase(CLoopModeBase* );
	void CLoopModeBase(CLoopModeBase* , CLoopModeBase& );
	void CLoopModeBase(CLoopModeBase* , const CLoopModeBase& );
	void CLoopModeBase(CLoopModeBase* );
	/* ../public/engine2/iengineservicemgr.h:282 */
	virtual bool LoopInit(CLoopModeBase* , KeyValues* , ILoopModePrerequisiteRegistry* );
	/* ../public/engine2/iengineservicemgr.h:287 */
	virtual void LoopShutdown(CLoopModeBase* );
	/* ../public/engine2/iengineservicemgr.h:292 */
	virtual void OnLoopActivate(CLoopModeBase* , const EngineLoopState_t& , CEventDispatcher<CEventIDManager_Default>* );
	/* ../public/engine2/iengineservicemgr.h:293 */
	virtual void OnLoopDeactivate(CLoopModeBase* , const EngineLoopState_t& , CEventDispatcher<CEventIDManager_Default>* );
	/* ../public/engine2/iengineservicemgr.h:294 */
	virtual void RegisterEventMap(CLoopModeBase* , CEventDispatcher<CEventIDManager_Default>* , EventMapRegistrationType_t);
	/* ../public/engine2/iengineservicemgr.h:297 */
	bool StaticInit(ILoopType* );
	/* ../public/engine2/iengineservicemgr.h:298 */
	void StaticShutdown(void);
	/* <378422> ../public/engine2/iengineservicemgr.h:294 */
	virtual void RegisterEventMap(class CLoopModeBase *, class CEventDispatcher<CEventIDManager_Default> *, enum EventMapRegistrationType_t); /* linkage=_ZN13CLoopModeBase16RegisterEventMapEP16CEventDispatcherI23CEventIDManager_DefaultE26EventMapRegistrationType_t */
	/* <3783ea> ../public/engine2/iengineservicemgr.h:293 */
	virtual void OnLoopDeactivate(class CLoopModeBase *, const class EngineLoopState_t  &, class CEventDispatcher<CEventIDManager_Default> *); /* linkage=_ZN13CLoopModeBase16OnLoopDeactivateERK17EngineLoopState_tP16CEventDispatcherI23CEventIDManager_DefaultE */
	/* <3783b2> ../public/engine2/iengineservicemgr.h:292 */
	virtual void OnLoopActivate(class CLoopModeBase *, const class EngineLoopState_t  &, class CEventDispatcher<CEventIDManager_Default> *); /* linkage=_ZN13CLoopModeBase14OnLoopActivateERK17EngineLoopState_tP16CEventDispatcherI23CEventIDManager_DefaultE */
	/* <378388> ../public/engine2/iengineservicemgr.h:287 */
	virtual void LoopShutdown(class CLoopModeBase *); /* linkage=_ZN13CLoopModeBase12LoopShutdownEv */
	/* <378350> ../public/engine2/iengineservicemgr.h:282 */
	virtual bool LoopInit(class CLoopModeBase *, class KeyValues *, class ILoopModePrerequisiteRegistry *); /* linkage=_ZN13CLoopModeBase8LoopInitEP9KeyValuesP29ILoopModePrerequisiteRegistry */
	void ~CLoopModeBase(class CLoopModeBase *); /* linkage=_ZN13CLoopModeBaseD4Ev */
	void CLoopModeBase(class CLoopModeBase *, class CLoopModeBase &); /* linkage=_ZN13CLoopModeBaseC4EOS_ */
	void CLoopModeBase(class CLoopModeBase *, const class CLoopModeBase  &); /* linkage=_ZN13CLoopModeBaseC4ERKS_ */
	void CLoopModeBase(class CLoopModeBase *); /* linkage=_ZN13CLoopModeBaseC4Ev */
	bool StaticInit(class ILoopType *); /* linkage=_ZN13CLoopModeBase10StaticInitEP9ILoopType */
	void StaticShutdown(void); /* linkage=_ZN13CLoopModeBase14StaticShutdownEv */
};

// <007861AA> ../public/engine2/iengineservicemgr.h:282
inline void CLoopModeBase::LoopInit(KeyValues* pKeyValues, ILoopModePrerequisiteRegistry* pRegistry)
{
} /* size: 0 */

// <00378350> ../public/engine2/iengineservicemgr.h:282
void CLoopModeBase::LoopInit(KeyValues* pKeyValues, ILoopModePrerequisiteRegistry* pRegistry)
{
} /* size: 10 */

// <0078617C> ../public/engine2/iengineservicemgr.h:287
void CLoopModeBase::LoopShutdown()
{
} /* size: 5 */

// <003769F2> ../public/engine2/iengineservicemgr.h:287
inline void CLoopModeBase::LoopShutdown()
{
} /* size: 0 */

// <00786149> ../public/engine2/iengineservicemgr.h:292
inline void CLoopModeBase::OnLoopActivate(const EngineLoopState_t& state, CEventDispatcher<CEventIDManager_Default>* pEventDispatcher)
{
} /* size: 0 */

// <003783B2> ../public/engine2/iengineservicemgr.h:292
void CLoopModeBase::OnLoopActivate(const EngineLoopState_t& state, CEventDispatcher<CEventIDManager_Default>* pEventDispatcher)
{
} /* size: 5 */

// <00786116> ../public/engine2/iengineservicemgr.h:293
inline void CLoopModeBase::OnLoopDeactivate(const EngineLoopState_t& state, CEventDispatcher<CEventIDManager_Default>* pEventDispatcher)
{
} /* size: 0 */

// <003783EA> ../public/engine2/iengineservicemgr.h:293
void CLoopModeBase::OnLoopDeactivate(const EngineLoopState_t& state, CEventDispatcher<CEventIDManager_Default>* pEventDispatcher)
{
} /* size: 5 */

// <007860C8> ../public/engine2/iengineservicemgr.h:294
void CLoopModeBase::RegisterEventMap(CEventDispatcher<CEventIDManager_Default>* pEventDispatcher, EventMapRegistrationType_t nRegistrationType)
{
} /* size: 5 */

// <00376959> ../public/engine2/iengineservicemgr.h:294
inline void CLoopModeBase::RegisterEventMap(CEventDispatcher<CEventIDManager_Default>* pEventDispatcher, EventMapRegistrationType_t nRegistrationType)
{
} /* size: 0 */

// <00785E6C> ../public/engine2/iengineservicemgr.h:317
void ILoopModeFactory::ILoopModeFactory()
{
} /* size: 0 */

// <00785E4E> ../public/engine2/iengineservicemgr.h:317
inline void ILoopModeFactory::ILoopModeFactory()
{
} /* size: 0 */

// <00784548> ../public/engine2/iengineservicemgr.h:317
// member functions: 18
// member variable: 1
// vtable entries: 5
// class size: 8
class ILoopModeFactory {
	void ~ILoopModeFactory(ILoopModeFactory* );
	void ILoopModeFactory(ILoopModeFactory* , ILoopModeFactory& );
	void ILoopModeFactory(ILoopModeFactory* , const ILoopModeFactory& );
	void ILoopModeFactory(ILoopModeFactory* );
	int ()(void) * * _vptr.ILoopModeFactory; /* 0 8 */
	/* ../public/engine2/iengineservicemgr.h:321 */
	virtual bool Init(ILoopModeFactory* , ILoopType* );
	/* ../public/engine2/iengineservicemgr.h:324 */
	virtual void Shutdown(ILoopModeFactory* );
	/* ../public/engine2/iengineservicemgr.h:327 */
	virtual ILoopMode* CreateLoopMode(ILoopModeFactory* );
	/* ../public/engine2/iengineservicemgr.h:330 */
	virtual void DestroyLoopMode(ILoopModeFactory* , ILoopMode* );
	/* ../public/engine2/iengineservicemgr.h:333 */
	virtual LoopModeType_t GetLoopModeType(const ILoopModeFactory* );
	void ~ILoopModeFactory(class ILoopModeFactory *); /* linkage=_ZN16ILoopModeFactoryD4Ev */
	void ILoopModeFactory(class ILoopModeFactory *, class ILoopModeFactory &); /* linkage=_ZN16ILoopModeFactoryC4EOS_ */
	void ILoopModeFactory(class ILoopModeFactory *, const class ILoopModeFactory  &); /* linkage=_ZN16ILoopModeFactoryC4ERKS_ */
	void ILoopModeFactory(class ILoopModeFactory *); /* linkage=_ZN16ILoopModeFactoryC4Ev */
	virtual bool Init(class ILoopModeFactory *, class ILoopType *); /* linkage=_ZN16ILoopModeFactory4InitEP9ILoopType */
	virtual void Shutdown(class ILoopModeFactory *); /* linkage=_ZN16ILoopModeFactory8ShutdownEv */
	virtual class ILoopMode * CreateLoopMode(class ILoopModeFactory *); /* linkage=_ZN16ILoopModeFactory14CreateLoopModeEv */
	virtual void DestroyLoopMode(class ILoopModeFactory *, class ILoopMode *); /* linkage=_ZN16ILoopModeFactory15DestroyLoopModeEP9ILoopMode */
	virtual enum LoopModeType_t GetLoopModeType(const class ILoopModeFactory  *); /* linkage=_ZNK16ILoopModeFactory15GetLoopModeTypeEv */
};

// <001AB358> ../public/engine2/iengineservicemgr.h:336
// member function: 1
// member variables: 4
// struct size: 32
struct ActiveLoop_t {
	/* ../public/engine2/iengineservicemgr.h:338 */
	void ActiveLoop_t(ActiveLoop_t* );
	CUtlString m_LoopName; /* 0 8 */
	uint32 m_unRequestId; /* 8 4 */
	KeyValues * m_pInitKeys; /* 16 8 */
	bool m_bValid; /* 24 1 */
};

// <002329D5> ../public/engine2/iengineservicemgr.h:355
void IEngineServiceMgr::IEngineServiceMgr()
{
} /* size: 0 */

// <002329B8> ../public/engine2/iengineservicemgr.h:355
inline void IEngineServiceMgr::IEngineServiceMgr()
{
} /* size: 0 */

// <001760D4> ../public/engine2/iengineservicemgr.h:355
// member functions: 58
// member variable: 1
// vtable entries: 23
// class size: 8
class IEngineServiceMgr : public IAppSystem {
public:
	/* class IAppSystem <ancestor>; */ /* 0 8 */
	void ~IEngineServiceMgr(IEngineServiceMgr* );
	void IEngineServiceMgr(IEngineServiceMgr* , IEngineServiceMgr& );
	void IEngineServiceMgr(IEngineServiceMgr* , const IEngineServiceMgr& );
	void IEngineServiceMgr(IEngineServiceMgr* );
	IEngineServiceMgr& operator=(IEngineServiceMgr* , IEngineServiceMgr& );
	IEngineServiceMgr& operator=(IEngineServiceMgr* , const IEngineServiceMgr& );
	/* ../public/engine2/iengineservicemgr.h:359 */
	virtual void RegisterEngineService(IEngineServiceMgr* , const char* , IEngineService* );
	/* ../public/engine2/iengineservicemgr.h:360 */
	virtual void UnregisterEngineService(IEngineServiceMgr* , const char* , IEngineService* );
	/* ../public/engine2/iengineservicemgr.h:363 */
	virtual void RegisterLoopMode(IEngineServiceMgr* , const char* , ILoopModeFactory* , void** );
	/* ../public/engine2/iengineservicemgr.h:364 */
	virtual void UnregisterLoopMode(IEngineServiceMgr* , const char* , ILoopModeFactory* , void** );
	/* ../public/engine2/iengineservicemgr.h:368 */
	virtual void SwitchToLoop(IEngineServiceMgr* , const char* , KeyValues* , uint32, bool);
	/* ../public/engine2/iengineservicemgr.h:371 */
	virtual const char* GetActiveLoopName(const IEngineServiceMgr* );
	/* ../public/engine2/iengineservicemgr.h:374 */
	virtual IEngineService* FindService(IEngineServiceMgr* , const char* );
	/* ../public/engine2/iengineservicemgr.h:377 */
	virtual PlatWindow_t GetEngineWindow(const IEngineServiceMgr* );
	/* ../public/engine2/iengineservicemgr.h:378 */
	virtual SwapChainHandle_t GetEngineSwapChain(const IEngineServiceMgr* );
	/* ../public/engine2/iengineservicemgr.h:379 */
	virtual const RenderDeviceInfo_t& GetEngineDeviceInfo(const IEngineServiceMgr* );
	/* ../public/engine2/iengineservicemgr.h:380 */
	virtual void GetEngineSwapChainSize(const IEngineServiceMgr* , int* , int* );
	/* ../public/engine2/iengineservicemgr.h:383 */
	virtual CEventDispatcher<CEventIDManager_Default>* GetEventDispatcher(IEngineServiceMgr* );
	/* ../public/engine2/iengineservicemgr.h:386 */
	virtual IDebugVisualizerMgr* GetDebugVisualizerMgr(IEngineServiceMgr* );
	/* ../public/engine2/iengineservicemgr.h:388 */
	virtual void PrintStatus(IEngineServiceMgr* );
	/* ../public/engine2/iengineservicemgr.h:390 */
	virtual void GetActiveLoop(IEngineServiceMgr* , ActiveLoop_t& );
	/* ../public/engine2/iengineservicemgr.h:392 */
	virtual void ChangeVideoMode(IEngineServiceMgr* , RenderDeviceInfo_t& );
	/* ../public/engine2/iengineservicemgr.h:393 */
	virtual VideoModeChange_t* GetVideoModeChange(IEngineServiceMgr* );
	/* ../public/engine2/iengineservicemgr.h:395 */
	virtual void InstallSwitchLoopModeStatusNotify(IEngineServiceMgr* , ISwitchLoopModeStatusNotify* );
	/* ../public/engine2/iengineservicemgr.h:396 */
	virtual void UninstallSwitchLoopModeStatusNotify(IEngineServiceMgr* , ISwitchLoopModeStatusNotify* );
	/* ../public/engine2/iengineservicemgr.h:401 */
	virtual void SetGameWatchdogShutdownTime(IEngineServiceMgr* , int, const char* , void (*)(void));
	/* ../public/engine2/iengineservicemgr.h:404 */
	virtual void ExitMainLoop(IEngineServiceMgr* );
	/* ../public/engine2/iengineservicemgr.h:407 */
	virtual void AddPrerequisite(IEngineServiceMgr* , IPrerequisite* );
	/* ../public/engine2/iengineservicemgr.h:410 */
	virtual const char* LookupLocalizationToken(IEngineServiceMgr* , const char* );
	void ~IEngineServiceMgr(class IEngineServiceMgr *); /* linkage=_ZN17IEngineServiceMgrD4Ev */
	void IEngineServiceMgr(class IEngineServiceMgr *, class IEngineServiceMgr &); /* linkage=_ZN17IEngineServiceMgrC4EOS_ */
	void IEngineServiceMgr(class IEngineServiceMgr *, const class IEngineServiceMgr  &); /* linkage=_ZN17IEngineServiceMgrC4ERKS_ */
	void IEngineServiceMgr(class IEngineServiceMgr *); /* linkage=_ZN17IEngineServiceMgrC4Ev */
	class IEngineServiceMgr & operator=(class IEngineServiceMgr *, class IEngineServiceMgr &); /* linkage=_ZN17IEngineServiceMgraSEOS_ */
	class IEngineServiceMgr & operator=(class IEngineServiceMgr *, const class IEngineServiceMgr  &); /* linkage=_ZN17IEngineServiceMgraSERKS_ */
	virtual void RegisterEngineService(class IEngineServiceMgr *, const char  *, class IEngineService *); /* linkage=_ZN17IEngineServiceMgr21RegisterEngineServiceEPKcP14IEngineService */
	virtual void UnregisterEngineService(class IEngineServiceMgr *, const char  *, class IEngineService *); /* linkage=_ZN17IEngineServiceMgr23UnregisterEngineServiceEPKcP14IEngineService */
	virtual void RegisterLoopMode(class IEngineServiceMgr *, const char  *, class ILoopModeFactory *, void * *); /* linkage=_ZN17IEngineServiceMgr16RegisterLoopModeEPKcP16ILoopModeFactoryPPv */
	virtual void UnregisterLoopMode(class IEngineServiceMgr *, const char  *, class ILoopModeFactory *, void * *); /* linkage=_ZN17IEngineServiceMgr18UnregisterLoopModeEPKcP16ILoopModeFactoryPPv */
	virtual void SwitchToLoop(class IEngineServiceMgr *, const char  *, class KeyValues *, uint32, bool); /* linkage=_ZN17IEngineServiceMgr12SwitchToLoopEPKcP9KeyValuesjb */
	virtual const char  * GetActiveLoopName(const class IEngineServiceMgr  *); /* linkage=_ZNK17IEngineServiceMgr17GetActiveLoopNameEv */
	virtual class IEngineService * FindService(class IEngineServiceMgr *, const char  *); /* linkage=_ZN17IEngineServiceMgr11FindServiceEPKc */
	virtual PlatWindow_t GetEngineWindow(const class IEngineServiceMgr  *); /* linkage=_ZNK17IEngineServiceMgr15GetEngineWindowEv */
	virtual SwapChainHandle_t GetEngineSwapChain(const class IEngineServiceMgr  *); /* linkage=_ZNK17IEngineServiceMgr18GetEngineSwapChainEv */
	virtual const class RenderDeviceInfo_t  & GetEngineDeviceInfo(const class IEngineServiceMgr  *); /* linkage=_ZNK17IEngineServiceMgr19GetEngineDeviceInfoEv */
	virtual void GetEngineSwapChainSize(const class IEngineServiceMgr  *, int *, int *); /* linkage=_ZNK17IEngineServiceMgr22GetEngineSwapChainSizeEPiS0_ */
	virtual class CEventDispatcher<CEventIDManager_Default> * GetEventDispatcher(class IEngineServiceMgr *); /* linkage=_ZN17IEngineServiceMgr18GetEventDispatcherEv */
	virtual class IDebugVisualizerMgr * GetDebugVisualizerMgr(class IEngineServiceMgr *); /* linkage=_ZN17IEngineServiceMgr21GetDebugVisualizerMgrEv */
	virtual void PrintStatus(class IEngineServiceMgr *); /* linkage=_ZN17IEngineServiceMgr11PrintStatusEv */
	virtual void GetActiveLoop(class IEngineServiceMgr *, class ActiveLoop_t &); /* linkage=_ZN17IEngineServiceMgr13GetActiveLoopER12ActiveLoop_t */
	virtual void ChangeVideoMode(class IEngineServiceMgr *, class RenderDeviceInfo_t &); /* linkage=_ZN17IEngineServiceMgr15ChangeVideoModeER18RenderDeviceInfo_t */
	virtual class VideoModeChange_t * GetVideoModeChange(class IEngineServiceMgr *); /* linkage=_ZN17IEngineServiceMgr18GetVideoModeChangeEv */
	virtual void InstallSwitchLoopModeStatusNotify(class IEngineServiceMgr *, class ISwitchLoopModeStatusNotify *); /* linkage=_ZN17IEngineServiceMgr33InstallSwitchLoopModeStatusNotifyEP27ISwitchLoopModeStatusNotify */
	virtual void UninstallSwitchLoopModeStatusNotify(class IEngineServiceMgr *, class ISwitchLoopModeStatusNotify *); /* linkage=_ZN17IEngineServiceMgr35UninstallSwitchLoopModeStatusNotifyEP27ISwitchLoopModeStatusNotify */
	virtual void SetGameWatchdogShutdownTime(class IEngineServiceMgr *, int, const char  *, void (*)(void)); /* linkage=_ZN17IEngineServiceMgr27SetGameWatchdogShutdownTimeEiPKcPFvvE */
	virtual void ExitMainLoop(class IEngineServiceMgr *); /* linkage=_ZN17IEngineServiceMgr12ExitMainLoopEv */
	virtual void AddPrerequisite(class IEngineServiceMgr *, class IPrerequisite *); /* linkage=_ZN17IEngineServiceMgr15AddPrerequisiteEP13IPrerequisite */
	virtual const char  * LookupLocalizationToken(class IEngineServiceMgr *, const char  *); /* linkage=_ZN17IEngineServiceMgr23LookupLocalizationTokenEPKc */
};

