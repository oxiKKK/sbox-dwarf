
//
// engine2/vrsystem.h
//
//	referenced by: libengine2.so
//
//	functions: 4
//	class: 1
//

// <01E834F1> engine2/vrsystem.h:6
void CVRSystem::CVRSystem()
{
} /* size: 0 */

// <01E834D5> engine2/vrsystem.h:6
inline void CVRSystem::CVRSystem()
{
} /* size: 0 */

// <01E7E073> engine2/vrsystem.h:6
// function calls: 8
void CVRSystem::~CVRSystem()
{
	CUtlMemory<ResourceManifestDesc_t::IsExternallyAllocated(); // 905
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 903
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 1799
	CUtlVectorBase<ResourceManifestDesc_t::RemoveAll(); // 1798
	CUtlVectorBase<ResourceManifestDesc_t::Purge(); // 560
	CUtlVectorBase<ResourceManifestDesc_t::~CUtlVectorBase(); // 410
	CUtlVector<ResourceManifestDesc_t::~CUtlVector(); // 42
	CTier2AppSystem<IVRSystem, 0>::~CTier2AppSystem(); // 6
} /* size: 49, inline expansions: 8 (198 bytes) */

// <01E7E057> engine2/vrsystem.h:6
inline void CVRSystem::~CVRSystem()
{
} /* size: 0 */

// <01E76C6C> engine2/vrsystem.h:6
// member functions: 26
// member variable: 1
// vtable entries: 9
// class size: 48
class CVRSystem : public CTier2AppSystem<IVRSystem, 0> {
public:
	/* class CTier2AppSystem<IVRSystem, 0> <ancestor>; */ /* 0 48 */
	void CVRSystem(CVRSystem* , CVRSystem& );
	void CVRSystem(CVRSystem* , const CVRSystem& );
	void CVRSystem(CVRSystem* );
	/* engine2/vrsystem.cpp:20 */
	virtual const AppSystemInfo_t* GetDependencies(CVRSystem* );
	/* engine2/vrsystem.cpp:25 */
	virtual InitReturnVal_t Init(CVRSystem* );
	/* engine2/vrsystem.cpp:30 */
	virtual void Shutdown(CVRSystem* );
	/* engine2/vrsystem.cpp:36 */
	virtual bool IsActive(CVRSystem* );
	/* engine2/vrsystem.cpp:41 */
	virtual bool Submit(CVRSystem* , HRenderTexture* , HRenderTexture* );
	/* engine2/vrsystem.cpp:71 */
	virtual void BeginFrame(CVRSystem* );
	/* engine2/vrsystem.cpp:76 */
	virtual void EndFrame(CVRSystem* );
	/* engine2/vrsystem.cpp:55 */
	virtual bool GetVulkanInstanceExtensionsRequired(CVRSystem* , CUtlStringList& );
	/* engine2/vrsystem.cpp:63 */
	virtual bool GetVulkanDeviceExtensionsRequired(CVRSystem* , CUtlStringList& );
	void ~CVRSystem(CVRSystem* );
	void CVRSystem(class CVRSystem *, class CVRSystem &); /* linkage=_ZN9CVRSystemC4EOS_ */
	void CVRSystem(class CVRSystem *, const class CVRSystem  &); /* linkage=_ZN9CVRSystemC4ERKS_ */
	void CVRSystem(class CVRSystem *); /* linkage=_ZN9CVRSystemC4Ev */
	virtual const class AppSystemInfo_t  * GetDependencies(class CVRSystem *); /* linkage=_ZN9CVRSystem15GetDependenciesEv */
	virtual enum InitReturnVal_t Init(class CVRSystem *); /* linkage=_ZN9CVRSystem4InitEv */
	virtual void Shutdown(class CVRSystem *); /* linkage=_ZN9CVRSystem8ShutdownEv */
	virtual bool IsActive(class CVRSystem *); /* linkage=_ZN9CVRSystem8IsActiveEv */
	virtual bool Submit(class CVRSystem *, HRenderTexture *, HRenderTexture *); /* linkage=_ZN9CVRSystem6SubmitEP11CWeakHandleI31InfoForResourceTypeCTextureBaseES3_ */
	virtual void BeginFrame(class CVRSystem *); /* linkage=_ZN9CVRSystem10BeginFrameEv */
	virtual void EndFrame(class CVRSystem *); /* linkage=_ZN9CVRSystem8EndFrameEv */
	virtual bool GetVulkanInstanceExtensionsRequired(class CVRSystem *, class CUtlStringList &); /* linkage=_ZN9CVRSystem35GetVulkanInstanceExtensionsRequiredER14CUtlStringList */
	virtual bool GetVulkanDeviceExtensionsRequired(class CVRSystem *, class CUtlStringList &); /* linkage=_ZN9CVRSystem33GetVulkanDeviceExtensionsRequiredER14CUtlStringList */
	void ~CVRSystem(class CVRSystem *); /* linkage=_ZN9CVRSystemD4Ev */
};

