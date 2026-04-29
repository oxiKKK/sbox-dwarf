
//
// public/resourcesystem/imanifestregistry.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libfilesystem_stdio.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 3
//	classes: 2
//

// <0238144D> ../public/resourcesystem/imanifestregistry.h:40
void IResourceManifestRegistry::IResourceManifestRegistry()
{
} /* size: 0 */

// <02381431> ../public/resourcesystem/imanifestregistry.h:40
inline void IResourceManifestRegistry::IResourceManifestRegistry()
{
} /* size: 0 */

// <022F216D> ../public/resourcesystem/imanifestregistry.h:40
// member functions: 16
// member variable: 1
// vtable entries: 4
// class size: 8
class IResourceManifestRegistry {
	void IResourceManifestRegistry(IResourceManifestRegistry* , IResourceManifestRegistry& );
	void IResourceManifestRegistry(IResourceManifestRegistry* , const IResourceManifestRegistry& );
	void IResourceManifestRegistry(IResourceManifestRegistry* );
	void ~IResourceManifestRegistry(IResourceManifestRegistry* );
	int ()(void) * * _vptr.IResourceManifestRegistry; /* 0 8 */
	/* ../public/resourcesystem/imanifestregistry.h:45 */
	virtual void RegisterResourceSystemUser(IResourceManifestRegistry* , uint32* );
	/* ../public/resourcesystem/imanifestregistry.h:46 */
	virtual void UnregisterResourceSystemUser(IResourceManifestRegistry* , uint32* );
private:
	/* ../public/resourcesystem/imanifestregistry.h:50 */
	virtual void RegisterNamedManifest(IResourceManifestRegistry* , ResourceManifestDesc_t* );
	/* ../public/resourcesystem/imanifestregistry.h:51 */
	virtual void UnregisterNamedManifest(IResourceManifestRegistry* , ResourceManifestDesc_t* );
	void IResourceManifestRegistry(class IResourceManifestRegistry *, class IResourceManifestRegistry &); /* linkage=_ZN25IResourceManifestRegistryC4EOS_ */
	void IResourceManifestRegistry(class IResourceManifestRegistry *, const class IResourceManifestRegistry  &); /* linkage=_ZN25IResourceManifestRegistryC4ERKS_ */
	void IResourceManifestRegistry(class IResourceManifestRegistry *); /* linkage=_ZN25IResourceManifestRegistryC4Ev */
	void ~IResourceManifestRegistry(class IResourceManifestRegistry *); /* linkage=_ZN25IResourceManifestRegistryD4Ev */
	virtual void RegisterResourceSystemUser(class IResourceManifestRegistry *, uint32 *); /* linkage=_ZN25IResourceManifestRegistry26RegisterResourceSystemUserEPj */
	virtual void UnregisterResourceSystemUser(class IResourceManifestRegistry *, uint32 *); /* linkage=_ZN25IResourceManifestRegistry28UnregisterResourceSystemUserEPj */
	virtual void RegisterNamedManifest(class IResourceManifestRegistry *, class ResourceManifestDesc_t *); /* linkage=_ZN25IResourceManifestRegistry21RegisterNamedManifestEP22ResourceManifestDesc_t */
	virtual void UnregisterNamedManifest(class IResourceManifestRegistry *, class ResourceManifestDesc_t *); /* linkage=_ZN25IResourceManifestRegistry23UnregisterNamedManifestEP22ResourceManifestDesc_t */
};

// <00A408AF> ../public/resourcesystem/imanifestregistry.h:60
// member functions: 10
// member variables: 2
// class size: 16
class CManifestRegistrar {
	/* ../public/resourcesystem/imanifestregistry.h:64 */
	void CManifestRegistrar(CManifestRegistrar* , ResourceManifestDesc_t* );
	/* ../public/resourcesystem/imanifestregistry.h:66 */
	void RegisterAll(void);
	/* ../public/resourcesystem/imanifestregistry.h:67 */
	void UnregisterManifest(ResourceManifestDesc_t* );
	/* ../public/resourcesystem/imanifestregistry.h:68 */
	void UnregisterManifests(ResourceManifestDesc_t** , int);
	/* ../public/resourcesystem/imanifestregistry.h:69 */
	void UnregisterAll(void);
	CManifestRegistrar * m_pNext; /* 0 8 */
	ResourceManifestDesc_t * m_pDesc; /* 8 8 */
	void CManifestRegistrar(class CManifestRegistrar *, class ResourceManifestDesc_t *); /* linkage=_ZN18CManifestRegistrarC4EP22ResourceManifestDesc_t */
	void RegisterAll(void); /* linkage=_ZN18CManifestRegistrar11RegisterAllEv */
	/* <6818a15> tier2/manifestregistrar.cpp:51 */
	void UnregisterManifest(class ResourceManifestDesc_t *); /* linkage=_ZN18CManifestRegistrar18UnregisterManifestEP22ResourceManifestDesc_t */
	void UnregisterManifests(class ResourceManifestDesc_t * *, int); /* linkage=_ZN18CManifestRegistrar19UnregisterManifestsEPP22ResourceManifestDesc_ti */
	void UnregisterAll(void); /* linkage=_ZN18CManifestRegistrar13UnregisterAllEv */
};

// <03A49E00> ../public/resourcesystem/imanifestregistry.h:64
void CManifestRegistrar::CManifestRegistrar(ResourceManifestDesc_t* pDesc)
{
} /* size: 0 */

