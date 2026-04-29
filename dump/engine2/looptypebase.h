
//
// engine2/looptypebase.h
//
//	referenced by: libengine2.so
//
//	functions: 18
//	classes: 2
//

// <003141AC> engine2/looptypebase.h:19
// member functions: 2
// member variables: 2
// class size: 16
class CEventRegistry {
	/* engine2/looptypebase.h:22 */
	void CEventRegistry(CEventRegistry* , CLoopTypeBase* );
private:
	CLoopTypeBase * m_pLoop; /* 0 8 */
	int m_nOrder; /* 8 4 */
	void CEventRegistry(class CEventRegistry *, class CLoopTypeBase *); /* linkage=_ZN14CEventRegistryC4EP13CLoopTypeBase */
};

// <0023996B> engine2/looptypebase.h:33
void CLoopTypeBase::CLoopTypeBase()
{
} /* size: 0 */

// <0023994F> engine2/looptypebase.h:33
inline void CLoopTypeBase::CLoopTypeBase()
{
} /* size: 0 */

// <00295456> engine2/looptypebase.h:33
// member functions: 45
// member variables: 10
// static member variable: 1
// vtable entries: 8
// class size: 112
class CLoopTypeBase : public ILoopType {
	/* engine2/looptypebase.h:70 */
	struct ServiceDependency_t {
		IEngineService * m_pService; /* 0 8 */
		bool m_bInsertedInList; /* 8 1 */
		CUtlVector<int, CUtlMemory<int, int> > m_DependentServices; /* 16 32 */
		/* engine2/looptypebase.h:79 */
		bool operator==(const ServiceDependency_t* , const ServiceDependency_t& );
		void ~ServiceDependency_t(ServiceDependency_t* );
		void ServiceDependency_t(ServiceDependency_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class ILoopType <ancestor>; */ /* 0 8 */
	/* engine2/looptypebase.h:37 */
	virtual void ~CLoopTypeBase(CLoopTypeBase* );
	/* engine2/looptypebase.cpp:33 */
	virtual void AddEngineService(CLoopTypeBase* , const char* );
	/* engine2/looptypebase.cpp:273 */
	virtual bool Init(CLoopTypeBase* , const char* , ILoopModeFactory* , void** );
	/* engine2/looptypebase.cpp:283 */
	virtual void Shutdown(CLoopTypeBase* );
	/* engine2/looptypebase.h:44 */
	virtual bool AllocateLoopMode(CLoopTypeBase* , uint32, KeyValues* , ILoopModePrerequisiteRegistry* );
	/* engine2/looptypebase.h:45 */
	virtual void DeallocateLoopMode(CLoopTypeBase* );
	/* engine2/looptypebase.cpp:297 */
	virtual void OnLoopActivate(CLoopTypeBase* , const EngineLoopState_t& , CEventDispatcher<CEventIDManager_Default>* );
	/* engine2/looptypebase.cpp:320 */
	virtual void OnLoopDeactivate(CLoopTypeBase* , const EngineLoopState_t& , CEventDispatcher<CEventIDManager_Default>* );
	/* engine2/looptypebase.cpp:337 */
	virtual void Update(CLoopTypeBase* , const EngineLoopState_t& , float64, float64);
	/* engine2/looptypebase.h:52 */
	const char* GetName(const CLoopTypeBase* );
	/* engine2/looptypebase.h:54 */
	void SetRequestId(CLoopTypeBase* , uint32);
	/* engine2/looptypebase.h:55 */
	uint32 GetRequestId(const CLoopTypeBase* );
	/* engine2/looptypebase.cpp:342 */
	void SetInitInfo(CLoopTypeBase* , KeyValues* );
	/* engine2/looptypebase.h:58 */
	KeyValues* GetInitInfo(CLoopTypeBase* );
protected:
	/* engine2/looptypebase.cpp:233 */
	bool LoadDependentServices(CLoopTypeBase* );
	bool m_bCanDraw; /* 8 1 */
	int m_nCallsToUpdate; /* 12 4 */
private:
	/* engine2/looptypebase.cpp:46 */
	bool AddDependentServices(CLoopTypeBase* , ServiceDependencies_t& );
	/* engine2/looptypebase.h:85 */
	typedef struct CUtlVector<CLoopTypeBase::ServiceDependency_t, CUtlMemory<CLoopTypeBase::ServiceDependency_t, int> > ServiceDependencies_t;
	/* engine2/looptypebase.cpp:86 */
	bool GenerateServiceDependencies(CLoopTypeBase* , ServiceDependencies_t& );
	/* engine2/looptypebase.cpp:147 */
	bool GenerateSecondaryDependencies(CLoopTypeBase* , ServiceDependencies_t& );
	/* engine2/looptypebase.cpp:190 */
	void SortServices(CLoopTypeBase* , ServiceDependencies_t& );
	const char * m_pName; /* 16 8 */
	bool m_bLoopActive; /* 24 1 */
	uint32 m_unRequestId; /* 28 4 */
	KeyValues * m_pInitInfo; /* 32 8 */
	uint64 m_nLongEventDispatchRelativeTicks; /* 40 8 */
	CUtlVector<IEngineService*, CUtlMemory<IEngineService*, int> > m_EngineServices; /* 48 32 */
	CUtlVector<IEngineService*, CUtlMemory<IEngineService*, int> > m_ActiveEngineServices; /* 80 32 */
	static class CUtlVector<char const*, CUtlMemory<char const*, int> > sm_EventTypes; /* 0 0 */
	virtual void AddEngineService(class CLoopTypeBase *, const char  *); /* linkage=_ZN13CLoopTypeBase16AddEngineServiceEPKc */
	void SetInitInfo(class CLoopTypeBase *, class KeyValues *); /* linkage=_ZN13CLoopTypeBase11SetInitInfoEP9KeyValues */
	virtual void Update(class CLoopTypeBase *, const class EngineLoopState_t  &, float64, float64); /* linkage=_ZN13CLoopTypeBase6UpdateERK17EngineLoopState_tdd */
	virtual bool Init(class CLoopTypeBase *, const char  *, class ILoopModeFactory *, void * *); /* linkage=_ZN13CLoopTypeBase4InitEPKcP16ILoopModeFactoryPPv */
	void CLoopTypeBase(class CLoopTypeBase *); /* linkage=_ZN13CLoopTypeBaseC4Ev */
	class KeyValues * GetInitInfo(class CLoopTypeBase *); /* linkage=_ZN13CLoopTypeBase11GetInitInfoEv */
	uint32 GetRequestId(const class CLoopTypeBase  *); /* linkage=_ZNK13CLoopTypeBase12GetRequestIdEv */
	void SetRequestId(class CLoopTypeBase *, uint32); /* linkage=_ZN13CLoopTypeBase12SetRequestIdEj */
	const char  * GetName(const class CLoopTypeBase  *); /* linkage=_ZNK13CLoopTypeBase7GetNameEv */
	virtual void ~CLoopTypeBase(class CLoopTypeBase *); /* linkage=_ZN13CLoopTypeBaseD4Ev */
	virtual void Shutdown(class CLoopTypeBase *); /* linkage=_ZN13CLoopTypeBase8ShutdownEv */
	virtual bool AllocateLoopMode(class CLoopTypeBase *, uint32, class KeyValues *, class ILoopModePrerequisiteRegistry *); /* linkage=_ZN13CLoopTypeBase16AllocateLoopModeEjP9KeyValuesP29ILoopModePrerequisiteRegistry */
	virtual void DeallocateLoopMode(class CLoopTypeBase *); /* linkage=_ZN13CLoopTypeBase18DeallocateLoopModeEv */
	virtual void OnLoopActivate(class CLoopTypeBase *, const class EngineLoopState_t  &, class CEventDispatcher<CEventIDManager_Default> *); /* linkage=_ZN13CLoopTypeBase14OnLoopActivateERK17EngineLoopState_tP16CEventDispatcherI23CEventIDManager_DefaultE */
	virtual void OnLoopDeactivate(class CLoopTypeBase *, const class EngineLoopState_t  &, class CEventDispatcher<CEventIDManager_Default> *); /* linkage=_ZN13CLoopTypeBase16OnLoopDeactivateERK17EngineLoopState_tP16CEventDispatcherI23CEventIDManager_DefaultE */
	bool LoadDependentServices(class CLoopTypeBase *); /* linkage=_ZN13CLoopTypeBase21LoadDependentServicesEv */
	bool AddDependentServices(class CLoopTypeBase *, ServiceDependencies_t &); /* linkage=_ZN13CLoopTypeBase20AddDependentServicesER10CUtlVectorINS_19ServiceDependency_tE10CUtlMemoryIS1_iEE */
	bool GenerateServiceDependencies(class CLoopTypeBase *, ServiceDependencies_t &); /* linkage=_ZN13CLoopTypeBase27GenerateServiceDependenciesER10CUtlVectorINS_19ServiceDependency_tE10CUtlMemoryIS1_iEE */
	bool GenerateSecondaryDependencies(class CLoopTypeBase *, ServiceDependencies_t &); /* linkage=_ZN13CLoopTypeBase29GenerateSecondaryDependenciesER10CUtlVectorINS_19ServiceDependency_tE10CUtlMemoryIS1_iEE */
	void SortServices(class CLoopTypeBase *, ServiceDependencies_t &); /* linkage=_ZN13CLoopTypeBase12SortServicesER10CUtlVectorINS_19ServiceDependency_tE10CUtlMemoryIS1_iEE */
	void DispatchEvent<EventFrameBoundary_t>(class CLoopTypeBase *, class CEventDispatcher<CEventIDManager_Default> *, const class EventFrameBoundary_t  &, class CEventRegistry &); /* linkage=_ZN13CLoopTypeBase13DispatchEventI20EventFrameBoundary_tEEvP16CEventDispatcherI23CEventIDManager_DefaultERKT_R14CEventRegistry */
	void DispatchEvent<EventClientPostOutput_t>(class CLoopTypeBase *, class CEventDispatcher<CEventIDManager_Default> *, const class EventClientPostOutput_t  &, class CEventRegistry &); /* linkage=_ZN13CLoopTypeBase13DispatchEventI23EventClientPostOutput_tEEvP16CEventDispatcherI23CEventIDManager_DefaultERKT_R14CEventRegistry */
	void DispatchEvent<EventClientOutput_t>(class CLoopTypeBase *, class CEventDispatcher<CEventIDManager_Default> *, const class EventClientOutput_t  &, class CEventRegistry &); /* linkage=_ZN13CLoopTypeBase13DispatchEventI19EventClientOutput_tEEvP16CEventDispatcherI23CEventIDManager_DefaultERKT_R14CEventRegistry */
};

// <00376485> engine2/looptypebase.h:37
void CLoopTypeBase::~CLoopTypeBase()
{
} /* size: 0 */

// <00376455> engine2/looptypebase.h:37
inline void CLoopTypeBase::~CLoopTypeBase()
{
} /* size: 0 */

// <002A5FFA> engine2/looptypebase.h:52
inline void CLoopTypeBase::GetName()
{
} /* size: 0 */

// <00247416> engine2/looptypebase.h:54
inline void CLoopTypeBase::SetRequestId(uint32 unRequestId)
{
} /* size: 0 */

// <002473FD> engine2/looptypebase.h:55
inline void CLoopTypeBase::GetRequestId()
{
} /* size: 0 */

// <002473D9> engine2/looptypebase.h:58
inline void CLoopTypeBase::GetInitInfo()
{
} /* size: 0 */

// <002A237C> engine2/looptypebase.h:70
void ServiceDependency_t::ServiceDependency_t()
{
} /* size: 0 */

// <002A235F> engine2/looptypebase.h:70
inline void ServiceDependency_t::ServiceDependency_t()
{
} /* size: 0 */

// <002A2348> engine2/looptypebase.h:70
void ServiceDependency_t::~ServiceDependency_t()
{
} /* size: 0 */

// <002A232B> engine2/looptypebase.h:70
inline void ServiceDependency_t::~ServiceDependency_t()
{
} /* size: 0 */

// <002A5FD5> engine2/looptypebase.h:79
inline void ServiceDependency_t::operator==(const ServiceDependency_t& src)
{
} /* size: 0 */

// <0036101F> engine2/looptypebase.h:126
// variables: 2
inline void CLoopTypeBase::DispatchEvent<EventClientOutput_t>(CEventDispatcher<CEventIDManager_Default>* pEventDispatcher, const EventClientOutput_t& msg, CEventRegistry& registry)
{
	Scope s; // 128
	CRelativeTickTimer timer; // 130
} /* size: 0, variables: 2 */

// <00360FC4> engine2/looptypebase.h:126
// variables: 2
inline void CLoopTypeBase::DispatchEvent<EventClientPostOutput_t>(CEventDispatcher<CEventIDManager_Default>* pEventDispatcher, const EventClientPostOutput_t& msg, CEventRegistry& registry)
{
	Scope s; // 128
	CRelativeTickTimer timer; // 130
} /* size: 0, variables: 2 */

// <00360F69> engine2/looptypebase.h:126
// variables: 2
inline void CLoopTypeBase::DispatchEvent<EventFrameBoundary_t>(CEventDispatcher<CEventIDManager_Default>* pEventDispatcher, const EventFrameBoundary_t& msg, CEventRegistry& registry)
{
	Scope s; // 128
	CRelativeTickTimer timer; // 130
} /* size: 0, variables: 2 */

// <00376439> engine2/looptypebase.h:144
void CEventRegistry::CEventRegistry(CLoopTypeBase* pLoop)
{
} /* size: 0 */

// <00376411> engine2/looptypebase.h:144
inline void CEventRegistry::CEventRegistry(CLoopTypeBase* pLoop)
{
} /* size: 0 */

