
//
// engine2/renderservice.h
//
//	referenced by: libengine2.so
//
//	function: 1
//	class: 1
//

// <0055A700> engine2/renderservice.h:46
// member functions: 30
// member variables: 3
// static member variable: 1
// vtable entries: 8
// class size: 72
class CRenderService : public CBaseEngineService<IRenderService> {
public:
	/* class CBaseEngineService<IRenderService> <ancestor>; */ /* 0 64 */
	void CRenderService(CRenderService* , const CRenderService& );
private:
	CEventMapEmptyRegistrar<CEventIDManager_Default> m_EventMapRegistrar; /* 60 0 */
	/* engine2/renderservice.h:48 */
	virtual void RegisterEventMap(CRenderService* , CEventDispatcher<CEventIDManager_Default>* , EventMapRegistrationType_t);
	/* engine2/renderservice.cpp:66 */
	virtual EngineServiceActivateType_t ShouldActivate(CRenderService* , const char* );
	/* engine2/renderservice.cpp:79 */
	virtual InitReturnVal_t Init(CRenderService* );
	/* engine2/renderservice.cpp:95 */
	virtual void Shutdown(CRenderService* );
	/* engine2/renderservice.cpp:243 */
	virtual void OnLoopActivate(CRenderService* , const EngineLoopState_t& , CEventDispatcher<CEventIDManager_Default>* );
	/* engine2/renderservice.cpp:104 */
	void OnVideoModeChanged(CRenderService* , SwapChainHandle_t, const RenderDeviceInfo_t& , RenderMultisampleType_t);
	/* engine2/renderservice.cpp:167 */
	virtual void SetVideoMode(CRenderService* , const RenderDeviceInfo_t& );
	/* engine2/renderservice.cpp:159 */
	virtual RenderMultisampleType_t GetMultisampleType(const CRenderService* );
	/* engine2/renderservice.cpp:57 */
	void CRenderService(CRenderService* );
	/* engine2/renderservice.cpp:61 */
	virtual void ~CRenderService(CRenderService* );
	/* engine2/renderservice.cpp:49 */
	void SetInitialMultisampleType(RenderMultisampleType_t);
	/* engine2/renderservice.cpp:267 */
	virtual IManagedRenderPipeline* GetManagedRenderPipeline(CRenderService* );
	/* engine2/renderservice.cpp:257 */
	void OnFrameBoundary(CRenderService* , const EventFrameBoundary_t& );
	/* engine2/renderservice.cpp:251 */
	void OnClientOutput(CRenderService* , const EventClientOutput_t& );
	RenderMultisampleType_t m_nMultisampleType; /* 64 4 */
	static enum RenderMultisampleType_t sm_nMultisampleType; /* 0 0 */
	void CRenderService(class CRenderService *, const class CRenderService  &); /* linkage=_ZN14CRenderServiceC4ERKS_ */
	virtual void RegisterEventMap(class CRenderService *, class CEventDispatcher<CEventIDManager_Default> *, enum EventMapRegistrationType_t); /* linkage=_ZN14CRenderService16RegisterEventMapEP16CEventDispatcherI23CEventIDManager_DefaultE26EventMapRegistrationType_t */
	virtual enum EngineServiceActivateType_t ShouldActivate(class CRenderService *, const char  *); /* linkage=_ZN14CRenderService14ShouldActivateEPKc */
	/* <5b1f54> engine2/renderservice.cpp:79 */
	virtual enum InitReturnVal_t Init(class CRenderService *); /* linkage=_ZN14CRenderService4InitEv */
	virtual void Shutdown(class CRenderService *); /* linkage=_ZN14CRenderService8ShutdownEv */
	virtual void OnLoopActivate(class CRenderService *, const class EngineLoopState_t  &, class CEventDispatcher<CEventIDManager_Default> *); /* linkage=_ZN14CRenderService14OnLoopActivateERK17EngineLoopState_tP16CEventDispatcherI23CEventIDManager_DefaultE */
	/* <5b1ecd> engine2/renderservice.cpp:104 */
	void OnVideoModeChanged(class CRenderService *, SwapChainHandle_t, const class RenderDeviceInfo_t  &, enum RenderMultisampleType_t); /* linkage=_ZN14CRenderService18OnVideoModeChangedEP19SwapChainHandle_t__RK18RenderDeviceInfo_t23RenderMultisampleType_t */
	virtual void SetVideoMode(class CRenderService *, const class RenderDeviceInfo_t  &); /* linkage=_ZN14CRenderService12SetVideoModeERK18RenderDeviceInfo_t */
	virtual enum RenderMultisampleType_t GetMultisampleType(const class CRenderService  *); /* linkage=_ZNK14CRenderService18GetMultisampleTypeEv */
	void CRenderService(class CRenderService *); /* linkage=_ZN14CRenderServiceC4Ev */
	virtual void ~CRenderService(class CRenderService *); /* linkage=_ZN14CRenderServiceD4Ev */
	void SetInitialMultisampleType(enum RenderMultisampleType_t); /* linkage=_ZN14CRenderService25SetInitialMultisampleTypeE23RenderMultisampleType_t */
	virtual class IManagedRenderPipeline * GetManagedRenderPipeline(class CRenderService *); /* linkage=_ZN14CRenderService24GetManagedRenderPipelineEv */
	void OnFrameBoundary(class CRenderService *, const class EventFrameBoundary_t  &); /* linkage=_ZN14CRenderService15OnFrameBoundaryERK20EventFrameBoundary_t */
	void OnClientOutput(class CRenderService *, const class EventClientOutput_t  &); /* linkage=_ZN14CRenderService14OnClientOutputERK19EventClientOutput_t */
};

// <005AA991> engine2/renderservice.h:48
void CRenderService::RegisterEventMap(CEventDispatcher<CEventIDManager_Default>* pEventDispatcher, EventMapRegistrationType_t nRegistrationType)
{
} /* size: 20 */

