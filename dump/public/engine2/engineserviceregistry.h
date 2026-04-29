
//
// public/engine2/engineserviceregistry.h
//
//	referenced by: libengine2.so
//
//	function: 1
//	class: 1
//

// <001AB3CB> ../public/engine2/engineserviceregistry.h:22
// member functions: 8
// member variables: 3
// static member variable: 1
// class size: 24
class CEngineServiceRegistry {
	/* ../public/engine2/engineserviceregistry.h:26 */
	void RegisterEngineServices(void);
	/* ../public/engine2/engineserviceregistry.h:27 */
	void UnregisterEngineServices(void);
	/* ../public/engine2/engineserviceregistry.h:31 */
	void CEngineServiceRegistry(CEngineServiceRegistry* , const char* , IEngineService* );
private:
	/* ../public/engine2/engineserviceregistry.h:35 */
	void CEngineServiceRegistry(CEngineServiceRegistry* );
	CEngineServiceRegistry * m_pNext; /* 0 8 */
	static class CEngineServiceRegistry * sm_pFirst; /* 0 0 */
	IEngineService * m_pService; /* 8 8 */
	const char * m_pServiceName; /* 16 8 */
	void RegisterEngineServices(void); /* linkage=_ZN22CEngineServiceRegistry22RegisterEngineServicesEv */
	void UnregisterEngineServices(void); /* linkage=_ZN22CEngineServiceRegistry24UnregisterEngineServicesEv */
	void CEngineServiceRegistry(class CEngineServiceRegistry *, const char  *, class IEngineService *); /* linkage=_ZN22CEngineServiceRegistryC4EPKcP14IEngineService */
	void CEngineServiceRegistry(class CEngineServiceRegistry *); /* linkage=_ZN22CEngineServiceRegistryC4Ev */
};

// <0073EDFE> ../public/engine2/engineserviceregistry.h:31
void CEngineServiceRegistry::CEngineServiceRegistry(const char* pServiceName, IEngineService* pService)
{
} /* size: 0 */

