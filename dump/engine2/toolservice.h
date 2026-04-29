
//
// engine2/toolservice.h
//
//	referenced by: libengine2.so
//
//	class: 1
//

// <007390A9> engine2/toolservice.h:18
// member functions: 30
// member variable: 1
// vtable entries: 12
// class size: 64
class CToolService : public CBaseEngineService<IToolService> {
public:
	/* class CBaseEngineService<IToolService> <ancestor>; */ /* 0 64 */
	void CToolService(CToolService* , const CToolService& );
	/* engine2/toolservice.cpp:42 */
	virtual const EngineServiceDependencies_t* GetServiceDependencies(CToolService* );
	/* engine2/toolservice.cpp:57 */
	virtual InitReturnVal_t Init(CToolService* );
	/* engine2/toolservice.cpp:66 */
	virtual void Shutdown(CToolService* );
	/* engine2/toolservice.cpp:87 */
	virtual EngineServiceActivateType_t ShouldActivate(CToolService* , const char* );
	/* engine2/toolservice.cpp:96 */
	virtual void OnLoopDeactivate(CToolService* , const EngineLoopState_t& , CEventDispatcher<CEventIDManager_Default>* );
	/* engine2/toolservice.cpp:75 */
	virtual void SubmitConsoleCommand(CToolService* , const char* );
	/* engine2/toolservice.cpp:103 */
	virtual CSceneObject* UpdateStandardLight(CToolService* , ISceneWorld* , const LightDesc_t& , HDeferredLight& );
	/* engine2/toolservice.cpp:119 */
	virtual void DeleteStandardLight(CToolService* , HDeferredLight);
	/* engine2/toolservice.cpp:128 */
	virtual void GetModelCombineInfo(CToolService* , HModel, HModelStrongCopyable* , int* , const CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCModel>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCM, const CUtlVector<int, CUtlMemory<int, int> >** );
	/* engine2/toolservice.cpp:137 */
	virtual float GetPlayerTonemappingScale(const CToolService* );
	/* engine2/toolservice.cpp:143 */
	virtual bool ExtractVPK(CToolService* , const CUtlString& , const CUtlString& );
	/* engine2/toolservice.cpp:193 */
	virtual bool CreateVPK(CToolService* , const CUtlString& );
	/* engine2/toolservice.cpp:30 */
	void CToolService(CToolService* );
	/* engine2/toolservice.cpp:34 */
	virtual void ~CToolService(CToolService* );
	void CToolService(class CToolService *, const class CToolService  &); /* linkage=_ZN12CToolServiceC4ERKS_ */
	virtual const class EngineServiceDependencies_t  * GetServiceDependencies(class CToolService *); /* linkage=_ZN12CToolService22GetServiceDependenciesEv */
	/* <758ac8> engine2/toolservice.cpp:57 */
	virtual enum InitReturnVal_t Init(class CToolService *); /* linkage=_ZN12CToolService4InitEv */
	virtual void Shutdown(class CToolService *); /* linkage=_ZN12CToolService8ShutdownEv */
	virtual enum EngineServiceActivateType_t ShouldActivate(class CToolService *, const char  *); /* linkage=_ZN12CToolService14ShouldActivateEPKc */
	virtual void OnLoopDeactivate(class CToolService *, const class EngineLoopState_t  &, class CEventDispatcher<CEventIDManager_Default> *); /* linkage=_ZN12CToolService16OnLoopDeactivateERK17EngineLoopState_tP16CEventDispatcherI23CEventIDManager_DefaultE */
	virtual void SubmitConsoleCommand(class CToolService *, const char  *); /* linkage=_ZN12CToolService20SubmitConsoleCommandEPKc */
	/* <75b92d> engine2/toolservice.cpp:103 */
	virtual class CSceneObject * UpdateStandardLight(class CToolService *, class ISceneWorld *, const class LightDesc_t  &, HDeferredLight &); /* linkage=_ZN12CToolService19UpdateStandardLightEP11ISceneWorldRK11LightDesc_tRP16HDeferredLight__ */
	virtual void DeleteStandardLight(class CToolService *, HDeferredLight); /* linkage=_ZN12CToolService19DeleteStandardLightEP16HDeferredLight__ */
	virtual void GetModelCombineInfo(class CToolService *, HModel, HModelStrongCopyable *, int *, const class CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCModel>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCM, const class CUtlVector<int, CUtlMemory<int, int> >  * *); /* linkage=_ZN12CToolService19GetModelCombineInfoE11CWeakHandleI25InfoForResourceTypeCModelEP21CStrongHandleCopyableIS1_EPiPPK10CUtlVectorIS4_10CUtlMemoryIS4_iEEPPKS7_IiS8_IiiEE */
	virtual float GetPlayerTonemappingScale(const class CToolService  *); /* linkage=_ZNK12CToolService25GetPlayerTonemappingScaleEv */
	virtual bool ExtractVPK(class CToolService *, const class CUtlString  &, const class CUtlString  &); /* linkage=_ZN12CToolService10ExtractVPKERK10CUtlStringS2_ */
	/* <75c4fe> engine2/toolservice.cpp:193 */
	virtual bool CreateVPK(class CToolService *, const class CUtlString  &); /* linkage=_ZN12CToolService9CreateVPKERK10CUtlString */
	void CToolService(class CToolService *); /* linkage=_ZN12CToolServiceC4Ev */
	virtual void ~CToolService(class CToolService *); /* linkage=_ZN12CToolServiceD4Ev */
};

