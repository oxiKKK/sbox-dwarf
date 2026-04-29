
//
// public/engine2/itoolservice.h
//
//	referenced by: libengine2.so
//
//	functions: 4
//	class: 1
//

// <00744C60> ../public/engine2/itoolservice.h:20
void IToolService::~IToolService()
{
} /* size: 0 */

// <00744C2D> ../public/engine2/itoolservice.h:20
inline void IToolService::~IToolService()
{
} /* size: 0 */

// <007432D6> ../public/engine2/itoolservice.h:20
void IToolService::IToolService()
{
} /* size: 0 */

// <007432BA> ../public/engine2/itoolservice.h:20
inline void IToolService::IToolService()
{
} /* size: 0 */

// <006A2647> ../public/engine2/itoolservice.h:20
// member functions: 22
// member variable: 1
// vtable entries: 7
// class size: 8
class IToolService : public IEngineService {
public:
	/* class IEngineService <ancestor>; */ /* 0 8 */
	void IToolService(IToolService* , IToolService& );
	void IToolService(IToolService* , const IToolService& );
	void IToolService(IToolService* );
	/* ../public/engine2/itoolservice.h:25 */
	virtual void SubmitConsoleCommand(IToolService* , const char* );
	/* ../public/engine2/itoolservice.h:28 */
	virtual CSceneObject* UpdateStandardLight(IToolService* , ISceneWorld* , const LightDesc_t& , HDeferredLight& );
	/* ../public/engine2/itoolservice.h:29 */
	virtual void DeleteStandardLight(IToolService* , HDeferredLight);
	/* ../public/engine2/itoolservice.h:32 */
	virtual void GetModelCombineInfo(IToolService* , HModel, HModelStrongCopyable* , int* , const CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCModel>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCM, const CUtlVector<int, CUtlMemory<int, int> >** );
	/* ../public/engine2/itoolservice.h:34 */
	virtual float GetPlayerTonemappingScale(const IToolService* );
	/* ../public/engine2/itoolservice.h:36 */
	virtual bool ExtractVPK(IToolService* , const CUtlString& , const CUtlString& );
	/* ../public/engine2/itoolservice.h:37 */
	virtual bool CreateVPK(IToolService* , const CUtlString& );
	virtual void ~IToolService(IToolService* );
	void IToolService(class IToolService *, class IToolService &); /* linkage=_ZN12IToolServiceC4EOS_ */
	void IToolService(class IToolService *, const class IToolService  &); /* linkage=_ZN12IToolServiceC4ERKS_ */
	void IToolService(class IToolService *); /* linkage=_ZN12IToolServiceC4Ev */
	virtual void SubmitConsoleCommand(class IToolService *, const char  *); /* linkage=_ZN12IToolService20SubmitConsoleCommandEPKc */
	virtual class CSceneObject * UpdateStandardLight(class IToolService *, class ISceneWorld *, const class LightDesc_t  &, HDeferredLight &); /* linkage=_ZN12IToolService19UpdateStandardLightEP11ISceneWorldRK11LightDesc_tRP16HDeferredLight__ */
	virtual void DeleteStandardLight(class IToolService *, HDeferredLight); /* linkage=_ZN12IToolService19DeleteStandardLightEP16HDeferredLight__ */
	virtual void GetModelCombineInfo(class IToolService *, HModel, HModelStrongCopyable *, int *, const class CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCModel>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCM, const class CUtlVector<int, CUtlMemory<int, int> >  * *); /* linkage=_ZN12IToolService19GetModelCombineInfoE11CWeakHandleI25InfoForResourceTypeCModelEP21CStrongHandleCopyableIS1_EPiPPK10CUtlVectorIS4_10CUtlMemoryIS4_iEEPPKS7_IiS8_IiiEE */
	virtual float GetPlayerTonemappingScale(const class IToolService  *); /* linkage=_ZNK12IToolService25GetPlayerTonemappingScaleEv */
	virtual bool ExtractVPK(class IToolService *, const class CUtlString  &, const class CUtlString  &); /* linkage=_ZN12IToolService10ExtractVPKERK10CUtlStringS2_ */
	virtual bool CreateVPK(class IToolService *, const class CUtlString  &); /* linkage=_ZN12IToolService9CreateVPKERK10CUtlString */
	virtual void ~IToolService(class IToolService *); /* linkage=_ZN12IToolServiceD4Ev */
};

