
//
// public/resourcesystem/resourcesystemhelpers.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//
//	functions: 10
//	classes: 2
//

// <00D6B363> ../public/resourcesystem/resourcesystemhelpers.h:16
// member functions: 15
// member variables: 5
// vtable entries: 5
// class size: 40
class CResourceDeallocatorUtils : public IResourceDeallocatorUtils {
public:
	/* class IResourceDeallocatorUtils <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/resourcesystemhelpers.h:19 */
	void CResourceDeallocatorUtils(CResourceDeallocatorUtils* , ResourceHandle_t, bool, ResourceDeallocationType_t);
	/* ../public/resourcesystem/resourcesystemhelpers.h:28 */
	virtual void ReleaseControl(CResourceDeallocatorUtils* , const void* );
	/* ../public/resourcesystem/resourcesystemhelpers.h:34 */
	virtual ResourceDeallocationType_t GetDeallocationType(const CResourceDeallocatorUtils* );
	/* ../public/resourcesystem/resourcesystemhelpers.h:39 */
	virtual ResourceHandle_t GetResourceHandle(const CResourceDeallocatorUtils* );
	/* ../public/resourcesystem/resourcesystemhelpers.h:44 */
	virtual bool IsQueuedReloadDeallocate(const CResourceDeallocatorUtils* );
	/* ../public/resourcesystem/resourcesystemhelpers.h:49 */
	virtual void* GetReleasedData(const CResourceDeallocatorUtils* );
private:
	void * m_pReleasedData; /* 8 8 */
	ResourceDeallocationType_t m_nDeallocationType; /* 16 4 */
	ResourceHandle_t m_hResource; /* 24 8 */
	bool m_bIsQueuedReloadDeallocate; /* 32 1 */
	void CResourceDeallocatorUtils(class CResourceDeallocatorUtils *, ResourceHandle_t, bool, enum ResourceDeallocationType_t); /* linkage=_ZN25CResourceDeallocatorUtilsC4EPK21ResourceBindingBase_tb26ResourceDeallocationType_t */
	virtual void ReleaseControl(class CResourceDeallocatorUtils *, const void  *); /* linkage=_ZN25CResourceDeallocatorUtils14ReleaseControlEPKv */
	/* <6714615> ../public/resourcesystem/resourcesystemhelpers.h:34 */
	virtual enum ResourceDeallocationType_t GetDeallocationType(const class CResourceDeallocatorUtils  *); /* linkage=_ZNK25CResourceDeallocatorUtils19GetDeallocationTypeEv */
	/* <21d64dd> ../public/resourcesystem/resourcesystemhelpers.h:39 */
	virtual ResourceHandle_t GetResourceHandle(const class CResourceDeallocatorUtils  *); /* linkage=_ZNK25CResourceDeallocatorUtils17GetResourceHandleEv */
	/* <21d6507> ../public/resourcesystem/resourcesystemhelpers.h:44 */
	virtual bool IsQueuedReloadDeallocate(const class CResourceDeallocatorUtils  *); /* linkage=_ZNK25CResourceDeallocatorUtils24IsQueuedReloadDeallocateEv */
	virtual void * GetReleasedData(const class CResourceDeallocatorUtils  *); /* linkage=_ZNK25CResourceDeallocatorUtils15GetReleasedDataEv */
	void ~CResourceDeallocatorUtils(class CResourceDeallocatorUtils *); /* linkage=_ZN25CResourceDeallocatorUtilsD4Ev */
	void CResourceDeallocatorUtils(class CResourceDeallocatorUtils *, class CResourceDeallocatorUtils &); /* linkage=_ZN25CResourceDeallocatorUtilsC4EOS_ */
	void CResourceDeallocatorUtils(class CResourceDeallocatorUtils *, const class CResourceDeallocatorUtils  &); /* linkage=_ZN25CResourceDeallocatorUtilsC4ERKS_ */
};

// <02343518> ../public/resourcesystem/resourcesystemhelpers.h:16
// member functions: 18
// member variables: 5
// vtable entries: 5
// class size: 40
class CResourceDeallocatorUtils : public IResourceDeallocatorUtils {
public:
	/* class IResourceDeallocatorUtils <ancestor>; */ /* 0 8 */
	void ~CResourceDeallocatorUtils(CResourceDeallocatorUtils* );
	void CResourceDeallocatorUtils(CResourceDeallocatorUtils* , CResourceDeallocatorUtils& );
	void CResourceDeallocatorUtils(CResourceDeallocatorUtils* , const CResourceDeallocatorUtils& );
	/* ../public/resourcesystem/resourcesystemhelpers.h:19 */
	void CResourceDeallocatorUtils(CResourceDeallocatorUtils* , ResourceHandle_t, bool, ResourceDeallocationType_t);
	/* ../public/resourcesystem/resourcesystemhelpers.h:28 */
	virtual void ReleaseControl(CResourceDeallocatorUtils* , const void* );
	/* ../public/resourcesystem/resourcesystemhelpers.h:34 */
	virtual ResourceDeallocationType_t GetDeallocationType(const CResourceDeallocatorUtils* );
	/* ../public/resourcesystem/resourcesystemhelpers.h:39 */
	virtual ResourceHandle_t GetResourceHandle(const CResourceDeallocatorUtils* );
	/* ../public/resourcesystem/resourcesystemhelpers.h:44 */
	virtual bool IsQueuedReloadDeallocate(const CResourceDeallocatorUtils* );
	/* ../public/resourcesystem/resourcesystemhelpers.h:49 */
	virtual void* GetReleasedData(const CResourceDeallocatorUtils* );
private:
	void * m_pReleasedData; /* 8 8 */
	ResourceDeallocationType_t m_nDeallocationType; /* 16 4 */
	ResourceHandle_t m_hResource; /* 24 8 */
	bool m_bIsQueuedReloadDeallocate; /* 32 1 */
	void CResourceDeallocatorUtils(class CResourceDeallocatorUtils *, ResourceHandle_t, bool, enum ResourceDeallocationType_t); /* linkage=_ZN25CResourceDeallocatorUtilsC4EPK21ResourceBindingBase_tb26ResourceDeallocationType_t */
	virtual void ReleaseControl(class CResourceDeallocatorUtils *, const void  *); /* linkage=_ZN25CResourceDeallocatorUtils14ReleaseControlEPKv */
	/* <6714615> ../public/resourcesystem/resourcesystemhelpers.h:34 */
	virtual enum ResourceDeallocationType_t GetDeallocationType(const class CResourceDeallocatorUtils  *); /* linkage=_ZNK25CResourceDeallocatorUtils19GetDeallocationTypeEv */
	/* <21d64dd> ../public/resourcesystem/resourcesystemhelpers.h:39 */
	virtual ResourceHandle_t GetResourceHandle(const class CResourceDeallocatorUtils  *); /* linkage=_ZNK25CResourceDeallocatorUtils17GetResourceHandleEv */
	/* <21d6507> ../public/resourcesystem/resourcesystemhelpers.h:44 */
	virtual bool IsQueuedReloadDeallocate(const class CResourceDeallocatorUtils  *); /* linkage=_ZNK25CResourceDeallocatorUtils24IsQueuedReloadDeallocateEv */
	virtual void * GetReleasedData(const class CResourceDeallocatorUtils  *); /* linkage=_ZNK25CResourceDeallocatorUtils15GetReleasedDataEv */
	void ~CResourceDeallocatorUtils(class CResourceDeallocatorUtils *); /* linkage=_ZN25CResourceDeallocatorUtilsD4Ev */
	void CResourceDeallocatorUtils(class CResourceDeallocatorUtils *, class CResourceDeallocatorUtils &); /* linkage=_ZN25CResourceDeallocatorUtilsC4EOS_ */
	void CResourceDeallocatorUtils(class CResourceDeallocatorUtils *, const class CResourceDeallocatorUtils  &); /* linkage=_ZN25CResourceDeallocatorUtilsC4ERKS_ */
};

// <02382B47> ../public/resourcesystem/resourcesystemhelpers.h:19
void CResourceDeallocatorUtils::CResourceDeallocatorUtils(ResourceHandle_t hResource, bool bIsQueuedReloadDeallocate, ResourceDeallocationType_t nDeallocationType)
{
} /* size: 0 */

// <02382B0A> ../public/resourcesystem/resourcesystemhelpers.h:19
inline void CResourceDeallocatorUtils::CResourceDeallocatorUtils(ResourceHandle_t hResource, bool bIsQueuedReloadDeallocate, ResourceDeallocationType_t nDeallocationType)
{
} /* size: 0 */

// <02382A6B> ../public/resourcesystem/resourcesystemhelpers.h:28
// variables: 2
void CResourceDeallocatorUtils::ReleaseControl(const void* pData)
{
	const char   __FUNCTION__; // 58559
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 30
	}
} /* size: 63, variables: 1 */

// <06714615> ../public/resourcesystem/resourcesystemhelpers.h:34
void CResourceDeallocatorUtils::GetDeallocationType()
{
} /* size: 8 */

// <06713CA0> ../public/resourcesystem/resourcesystemhelpers.h:34
inline void CResourceDeallocatorUtils::GetDeallocationType()
{
} /* size: 0 */

// <02382A24> ../public/resourcesystem/resourcesystemhelpers.h:39
void CResourceDeallocatorUtils::GetResourceHandle()
{
} /* size: 9 */

// <021D558B> ../public/resourcesystem/resourcesystemhelpers.h:39
inline void CResourceDeallocatorUtils::GetResourceHandle()
{
} /* size: 0 */

// <023829F6> ../public/resourcesystem/resourcesystemhelpers.h:44
void CResourceDeallocatorUtils::IsQueuedReloadDeallocate()
{
} /* size: 9 */

// <021D5572> ../public/resourcesystem/resourcesystemhelpers.h:44
inline void CResourceDeallocatorUtils::IsQueuedReloadDeallocate()
{
} /* size: 0 */

// <023829C3> ../public/resourcesystem/resourcesystemhelpers.h:49
void* CResourceDeallocatorUtils::GetReleasedData()
{
} /* size: 9 */

