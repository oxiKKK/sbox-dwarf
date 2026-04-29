
//
// public/engine2/ivrsystem.h
//
//	referenced by: libengine2.so
//
//	functions: 2
//	class: 1
//

// <01E817EF> ../public/engine2/ivrsystem.h:8
void IVRSystem::IVRSystem()
{
} /* size: 0 */

// <01E817D3> ../public/engine2/ivrsystem.h:8
inline void IVRSystem::IVRSystem()
{
} /* size: 0 */

// <01DE406E> ../public/engine2/ivrsystem.h:8
// member functions: 20
// member variable: 1
// vtable entries: 6
// class size: 8
class IVRSystem : public IAppSystem {
public:
	/* class IAppSystem <ancestor>; */ /* 0 8 */
	void ~IVRSystem(IVRSystem* );
	void IVRSystem(IVRSystem* , IVRSystem& );
	void IVRSystem(IVRSystem* , const IVRSystem& );
	void IVRSystem(IVRSystem* );
	/* ../public/engine2/ivrsystem.h:12 */
	virtual bool IsActive(IVRSystem* );
	/* ../public/engine2/ivrsystem.h:15 */
	virtual bool Submit(IVRSystem* , HRenderTexture* , HRenderTexture* );
	/* ../public/engine2/ivrsystem.h:17 */
	virtual void BeginFrame(IVRSystem* );
	/* ../public/engine2/ivrsystem.h:18 */
	virtual void EndFrame(IVRSystem* );
	/* ../public/engine2/ivrsystem.h:21 */
	virtual bool GetVulkanInstanceExtensionsRequired(IVRSystem* , CUtlStringList& );
	/* ../public/engine2/ivrsystem.h:24 */
	virtual bool GetVulkanDeviceExtensionsRequired(IVRSystem* , CUtlStringList& );
	void ~IVRSystem(class IVRSystem *); /* linkage=_ZN9IVRSystemD4Ev */
	void IVRSystem(class IVRSystem *, class IVRSystem &); /* linkage=_ZN9IVRSystemC4EOS_ */
	void IVRSystem(class IVRSystem *, const class IVRSystem  &); /* linkage=_ZN9IVRSystemC4ERKS_ */
	void IVRSystem(class IVRSystem *); /* linkage=_ZN9IVRSystemC4Ev */
	virtual bool IsActive(class IVRSystem *); /* linkage=_ZN9IVRSystem8IsActiveEv */
	virtual bool Submit(class IVRSystem *, HRenderTexture *, HRenderTexture *); /* linkage=_ZN9IVRSystem6SubmitEP11CWeakHandleI31InfoForResourceTypeCTextureBaseES3_ */
	virtual void BeginFrame(class IVRSystem *); /* linkage=_ZN9IVRSystem10BeginFrameEv */
	virtual void EndFrame(class IVRSystem *); /* linkage=_ZN9IVRSystem8EndFrameEv */
	virtual bool GetVulkanInstanceExtensionsRequired(class IVRSystem *, class CUtlStringList &); /* linkage=_ZN9IVRSystem35GetVulkanInstanceExtensionsRequiredER14CUtlStringList */
	virtual bool GetVulkanDeviceExtensionsRequired(class IVRSystem *, class CUtlStringList &); /* linkage=_ZN9IVRSystem33GetVulkanDeviceExtensionsRequiredER14CUtlStringList */
};

