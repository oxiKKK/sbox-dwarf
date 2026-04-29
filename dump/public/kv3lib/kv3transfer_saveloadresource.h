
//
// public/kv3lib/kv3transfer_saveloadresource.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//
//	functions: 32
//	classes: 4
//

// <009D7DB1> ../public/kv3lib/kv3transfer_saveloadresource.h:15
// member functions: 14
// member variables: 4
// vtable entries: 2
// class size: 32
class CKV3Transfer_ResourceLoadInterface : public IKV3TransferInterface_ResourceLoad {
public:
	/* class IKV3TransferInterface_ResourceLoad <ancestor>; */ /* 0 8 */
	void ~CKV3Transfer_ResourceLoadInterface(CKV3Transfer_ResourceLoadInterface* );
	void CKV3Transfer_ResourceLoadInterface(CKV3Transfer_ResourceLoadInterface* , CKV3Transfer_ResourceLoadInterface& );
	void CKV3Transfer_ResourceLoadInterface(CKV3Transfer_ResourceLoadInterface* , const CKV3Transfer_ResourceLoadInterface& );
	/* ../public/kv3lib/kv3transfer_saveloadresource.h:18 */
	void CKV3Transfer_ResourceLoadInterface(CKV3Transfer_ResourceLoadInterface* , IRD_RegisterResourceDataUtils* , ResourceHandle_t, ResourceId_t);
	/* ../public/kv3lib/kv3transfer_saveloadresource.h:25 */
	virtual bool LoadStrongHandle(CKV3Transfer_ResourceLoadInterface* , CKV3TransferLoadContext* , const KeyValues3* , ResourceType_t, CStrongHandleBase* );
	/* ../public/kv3lib/kv3transfer_saveloadresource.h:31 */
	virtual ResourceHandle_t FindExistingResource(CKV3Transfer_ResourceLoadInterface* , ResourceType_t, const char* , bool);
	/* ../public/kv3lib/kv3transfer_saveloadresource.h:50 */
	bool HandleResourceReference(CKV3Transfer_ResourceLoadInterface* , CKV3TransferLoadContext* , ResourceType_t, const KeyValues3* , CStrongHandleVoid* );
	IRD_RegisterResourceDataUtils * m_pDataUtils; /* 8 8 */
	ResourceHandle_t m_hOriginatingResource; /* 16 8 */
	ResourceId_t m_nOriginatingResourceId; /* 24 8 */
	void ~CKV3Transfer_ResourceLoadInterface(class CKV3Transfer_ResourceLoadInterface *); /* linkage=_ZN34CKV3Transfer_ResourceLoadInterfaceD4Ev */
	void CKV3Transfer_ResourceLoadInterface(class CKV3Transfer_ResourceLoadInterface *, class CKV3Transfer_ResourceLoadInterface &); /* linkage=_ZN34CKV3Transfer_ResourceLoadInterfaceC4EOS_ */
	void CKV3Transfer_ResourceLoadInterface(class CKV3Transfer_ResourceLoadInterface *, const class CKV3Transfer_ResourceLoadInterface  &); /* linkage=_ZN34CKV3Transfer_ResourceLoadInterfaceC4ERKS_ */
	void CKV3Transfer_ResourceLoadInterface(class CKV3Transfer_ResourceLoadInterface *, class IRD_RegisterResourceDataUtils *, ResourceHandle_t, class ResourceId_t); /* linkage=_ZN34CKV3Transfer_ResourceLoadInterfaceC4EP29IRD_RegisterResourceDataUtilsPK21ResourceBindingBase_t12ResourceId_t */
	virtual bool LoadStrongHandle(class CKV3Transfer_ResourceLoadInterface *, class CKV3TransferLoadContext *, const class KeyValues3  *, ResourceType_t, class CStrongHandleBase *); /* linkage=_ZN34CKV3Transfer_ResourceLoadInterface16LoadStrongHandleEP23CKV3TransferLoadContextPK10KeyValues3yP17CStrongHandleBase */
	virtual ResourceHandle_t FindExistingResource(class CKV3Transfer_ResourceLoadInterface *, ResourceType_t, const char  *, bool); /* linkage=_ZN34CKV3Transfer_ResourceLoadInterface20FindExistingResourceEyPKcb */
	bool HandleResourceReference(class CKV3Transfer_ResourceLoadInterface *, class CKV3TransferLoadContext *, ResourceType_t, const class KeyValues3  *, class CStrongHandleVoid *); /* linkage=_ZN34CKV3Transfer_ResourceLoadInterface23HandleResourceReferenceEP23CKV3TransferLoadContextyPK10KeyValues3P17CStrongHandleVoid */
};

// <041A570F> ../public/kv3lib/kv3transfer_saveloadresource.h:15
// member functions: 11
// member variables: 4
// vtable entries: 2
// class size: 32
class CKV3Transfer_ResourceLoadInterface : public IKV3TransferInterface_ResourceLoad {
public:
	/* class IKV3TransferInterface_ResourceLoad <ancestor>; */ /* 0 8 */
	/* ../public/kv3lib/kv3transfer_saveloadresource.h:18 */
	void CKV3Transfer_ResourceLoadInterface(CKV3Transfer_ResourceLoadInterface* , IRD_RegisterResourceDataUtils* , ResourceHandle_t, ResourceId_t);
	/* ../public/kv3lib/kv3transfer_saveloadresource.h:25 */
	virtual bool LoadStrongHandle(CKV3Transfer_ResourceLoadInterface* , CKV3TransferLoadContext* , const KeyValues3* , ResourceType_t, CStrongHandleBase* );
	/* ../public/kv3lib/kv3transfer_saveloadresource.h:31 */
	virtual ResourceHandle_t FindExistingResource(CKV3Transfer_ResourceLoadInterface* , ResourceType_t, const char* , bool);
	/* ../public/kv3lib/kv3transfer_saveloadresource.h:50 */
	bool HandleResourceReference(CKV3Transfer_ResourceLoadInterface* , CKV3TransferLoadContext* , ResourceType_t, const KeyValues3* , CStrongHandleVoid* );
	IRD_RegisterResourceDataUtils * m_pDataUtils; /* 8 8 */
	ResourceHandle_t m_hOriginatingResource; /* 16 8 */
	ResourceId_t m_nOriginatingResourceId; /* 24 8 */
	void ~CKV3Transfer_ResourceLoadInterface(class CKV3Transfer_ResourceLoadInterface *); /* linkage=_ZN34CKV3Transfer_ResourceLoadInterfaceD4Ev */
	void CKV3Transfer_ResourceLoadInterface(class CKV3Transfer_ResourceLoadInterface *, class CKV3Transfer_ResourceLoadInterface &); /* linkage=_ZN34CKV3Transfer_ResourceLoadInterfaceC4EOS_ */
	void CKV3Transfer_ResourceLoadInterface(class CKV3Transfer_ResourceLoadInterface *, const class CKV3Transfer_ResourceLoadInterface  &); /* linkage=_ZN34CKV3Transfer_ResourceLoadInterfaceC4ERKS_ */
	void CKV3Transfer_ResourceLoadInterface(class CKV3Transfer_ResourceLoadInterface *, class IRD_RegisterResourceDataUtils *, ResourceHandle_t, class ResourceId_t); /* linkage=_ZN34CKV3Transfer_ResourceLoadInterfaceC4EP29IRD_RegisterResourceDataUtilsPK21ResourceBindingBase_t12ResourceId_t */
	virtual bool LoadStrongHandle(class CKV3Transfer_ResourceLoadInterface *, class CKV3TransferLoadContext *, const class KeyValues3  *, ResourceType_t, class CStrongHandleBase *); /* linkage=_ZN34CKV3Transfer_ResourceLoadInterface16LoadStrongHandleEP23CKV3TransferLoadContextPK10KeyValues3yP17CStrongHandleBase */
	virtual ResourceHandle_t FindExistingResource(class CKV3Transfer_ResourceLoadInterface *, ResourceType_t, const char  *, bool); /* linkage=_ZN34CKV3Transfer_ResourceLoadInterface20FindExistingResourceEyPKcb */
	bool HandleResourceReference(class CKV3Transfer_ResourceLoadInterface *, class CKV3TransferLoadContext *, ResourceType_t, const class KeyValues3  *, class CStrongHandleVoid *); /* linkage=_ZN34CKV3Transfer_ResourceLoadInterface23HandleResourceReferenceEP23CKV3TransferLoadContextyPK10KeyValues3P17CStrongHandleVoid */
};

// <06713B71> ../public/kv3lib/kv3transfer_saveloadresource.h:18
void CKV3Transfer_ResourceLoadInterface::CKV3Transfer_ResourceLoadInterface(IRD_RegisterResourceDataUtils* pDataUtils, ResourceHandle_t hOriginatingResource, ResourceId_t nOriginatingResourceId)
{
} /* size: 0 */

// <06713B34> ../public/kv3lib/kv3transfer_saveloadresource.h:18
inline void CKV3Transfer_ResourceLoadInterface::CKV3Transfer_ResourceLoadInterface(IRD_RegisterResourceDataUtils* pDataUtils, ResourceHandle_t hOriginatingResource, ResourceId_t nOriginatingResourceId)
{
} /* size: 0 */

// <067136BB> ../public/kv3lib/kv3transfer_saveloadresource.h:25
// variable: 1
// function calls: 12
void CKV3Transfer_ResourceLoadInterface::LoadStrongHandle(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, ResourceType_t nResourceType, CStrongHandleBase* pStrongHandleBase)
{
	bool bSuccess; // 27
	{
	}
	KeyValues3::GetAllFlags(); // 892
	KeyValues3::HasFlag(
		KeyValues3Flag_t nFlag);  // 60
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 74
	CStrongHandle<ResourceBindingVoid_t>::Init(
		ResourceHandleTyped_t hResource);  // 659
	CStrongHandle<ResourceBindingVoid_t>::operator=(
			ResourceHandleTyped_t hResource);  // 275
	CStrongHandleVoid::operator=(
			ResourceHandle_t hResource);  // 69
	CStrongHandle<ResourceBindingVoid_t>::Init(
		ResourceHandleTyped_t hResource);  // 659
	CStrongHandle<ResourceBindingVoid_t>::operator=(
			ResourceHandleTyped_t hResource);  // 275
	CStrongHandleVoid::operator=(
			ResourceHandle_t hResource);  // 56
	CKV3Transfer_ResourceLoadInterface::HandleResourceReference(
				CKV3TransferLoadContext* pContext,
				ResourceType_t nResourceType,
				const KeyValues3* pLoadFromValue,
				CStrongHandleVoid* pOutHandle);  // 27
} /* size: 369, variables: 1, inline expansions: 12 (475 bytes) */

// <042FD1BB> ../public/kv3lib/kv3transfer_saveloadresource.h:25
// variable: 1
void CKV3Transfer_ResourceLoadInterface::LoadStrongHandle(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, ResourceType_t nResourceType, CStrongHandleBase* pStrongHandleBase)
{
	bool bSuccess; // 27
} /* size: 0, variables: 1 */

// <06713393> ../public/kv3lib/kv3transfer_saveloadresource.h:31
// variables: 4
// function calls: 8
void CKV3Transfer_ResourceLoadInterface::FindExistingResource(ResourceType_t nResourceType, const char* pResourceName, bool bAddReference)
{
	CResourceName resourceName; // 38
	ResourceHandle_t hResource; // 39
	const char   __FUNCTION__; // 56961
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 40
	}
	IResourceSystem::FindExistingResourceByName(
					const CResourceName& resourceName);  // 39
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 48
	ResourceId_t::GetRaw(); // 44
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 71
	ResourceAddRef(ResourceHandle_t hResource,
			uintp nLeakTrackingPairingID,
			ResourceLeakTrackingGroup_t leakTrackingGroup);  // 44
} /* size: 333, variables: 3, inline expansions: 8 (194 bytes) */

// <0111175B> ../public/kv3lib/kv3transfer_saveloadresource.h:31
// variables: 4
// function calls: 8
void CKV3Transfer_ResourceLoadInterface::FindExistingResource(ResourceType_t nResourceType, const char* pResourceName, bool bAddReference)
{
	CResourceName resourceName; // 38
	ResourceHandle_t hResource; // 39
	const char   __FUNCTION__; // 54649
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 40
	}
	IResourceSystem::FindExistingResourceByName(
					const CResourceName& resourceName);  // 39
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 48
	ResourceId_t::GetRaw(); // 44
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 71
	ResourceAddRef(ResourceHandle_t hResource,
			uintp nLeakTrackingPairingID,
			ResourceLeakTrackingGroup_t leakTrackingGroup);  // 44
} /* size: 333, variables: 3, inline expansions: 8 (194 bytes) */

// <00A17DDB> ../public/kv3lib/kv3transfer_saveloadresource.h:31
// variables: 4
// function calls: 8
void CKV3Transfer_ResourceLoadInterface::FindExistingResource(ResourceType_t nResourceType, const char* pResourceName, bool bAddReference)
{
	CResourceName resourceName; // 38
	ResourceHandle_t hResource; // 39
	const char   __FUNCTION__; // 57819
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 40
	}
	IResourceSystem::FindExistingResourceByName(
					const CResourceName& resourceName);  // 39
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 48
	ResourceId_t::GetRaw(); // 44
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 71
	ResourceAddRef(ResourceHandle_t hResource,
			uintp nLeakTrackingPairingID,
			ResourceLeakTrackingGroup_t leakTrackingGroup);  // 44
} /* size: 333, variables: 3, inline expansions: 8 (194 bytes) */

// <0315E5A9> ../public/kv3lib/kv3transfer_saveloadresource.h:31
// variables: 4
// function calls: 8
void CKV3Transfer_ResourceLoadInterface::FindExistingResource(ResourceType_t nResourceType, const char* pResourceName, bool bAddReference)
{
	CResourceName resourceName; // 38
	ResourceHandle_t hResource; // 39
	const char   __FUNCTION__; // 24460
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 40
	}
	IResourceSystem::FindExistingResourceByName(
					const CResourceName& resourceName);  // 39
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 48
	ResourceId_t::GetRaw(); // 44
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 71
	ResourceAddRef(ResourceHandle_t hResource,
			uintp nLeakTrackingPairingID,
			ResourceLeakTrackingGroup_t leakTrackingGroup);  // 44
} /* size: 333, variables: 3, inline expansions: 8 (194 bytes) */

// <00D19306> ../public/kv3lib/kv3transfer_saveloadresource.h:31
// variables: 4
// function calls: 8
void CKV3Transfer_ResourceLoadInterface::FindExistingResource(ResourceType_t nResourceType, const char* pResourceName, bool bAddReference)
{
	CResourceName resourceName; // 38
	ResourceHandle_t hResource; // 39
	const char   __FUNCTION__; // 22195
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 40
	}
	IResourceSystem::FindExistingResourceByName(
					const CResourceName& resourceName);  // 39
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 48
	ResourceId_t::GetRaw(); // 44
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 71
	ResourceAddRef(ResourceHandle_t hResource,
			uintp nLeakTrackingPairingID,
			ResourceLeakTrackingGroup_t leakTrackingGroup);  // 44
} /* size: 333, variables: 3, inline expansions: 8 (194 bytes) */

// <019C4065> ../public/kv3lib/kv3transfer_saveloadresource.h:31
// variables: 4
// function calls: 8
void CKV3Transfer_ResourceLoadInterface::FindExistingResource(ResourceType_t nResourceType, const char* pResourceName, bool bAddReference)
{
	CResourceName resourceName; // 38
	ResourceHandle_t hResource; // 39
	const char   __FUNCTION__; // 63416
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 40
	}
	IResourceSystem::FindExistingResourceByName(
					const CResourceName& resourceName);  // 39
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 48
	ResourceId_t::GetRaw(); // 44
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 71
	ResourceAddRef(ResourceHandle_t hResource,
			uintp nLeakTrackingPairingID,
			ResourceLeakTrackingGroup_t leakTrackingGroup);  // 44
} /* size: 333, variables: 3, inline expansions: 8 (194 bytes) */

// <00413953> ../public/kv3lib/kv3transfer_saveloadresource.h:31
// variables: 4
// function calls: 8
void CKV3Transfer_ResourceLoadInterface::FindExistingResource(ResourceType_t nResourceType, const char* pResourceName, bool bAddReference)
{
	CResourceName resourceName; // 38
	ResourceHandle_t hResource; // 39
	const char   __FUNCTION__; // 50580
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 40
	}
	IResourceSystem::FindExistingResourceByName(
					const CResourceName& resourceName);  // 39
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 48
	ResourceId_t::GetRaw(); // 44
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 71
	ResourceAddRef(ResourceHandle_t hResource,
			uintp nLeakTrackingPairingID,
			ResourceLeakTrackingGroup_t leakTrackingGroup);  // 44
} /* size: 333, variables: 3, inline expansions: 8 (194 bytes) */

// <00CF6CEF> ../public/kv3lib/kv3transfer_saveloadresource.h:31
// variables: 4
// function calls: 8
void CKV3Transfer_ResourceLoadInterface::FindExistingResource(ResourceType_t nResourceType, const char* pResourceName, bool bAddReference)
{
	CResourceName resourceName; // 38
	ResourceHandle_t hResource; // 39
	const char   __FUNCTION__; // 49090
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 40
	}
	IResourceSystem::FindExistingResourceByName(
					const CResourceName& resourceName);  // 39
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 48
	ResourceId_t::GetRaw(); // 44
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 71
	ResourceAddRef(ResourceHandle_t hResource,
			uintp nLeakTrackingPairingID,
			ResourceLeakTrackingGroup_t leakTrackingGroup);  // 44
} /* size: 333, variables: 3, inline expansions: 8 (194 bytes) */

// <0671330A> ../public/kv3lib/kv3transfer_saveloadresource.h:50
// variables: 4
inline void CKV3Transfer_ResourceLoadInterface::HandleResourceReference(CKV3TransferLoadContext* pContext, ResourceType_t nResourceType, const KeyValues3* pLoadFromValue, CStrongHandleVoid* pOutHandle)
{
	const char   __FUNCTION__; // 57032
	const char* pResourceName; // 53
	CResourceName resourceName; // 66
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 52
	}
} /* size: 0, variables: 3 */

// <042FD13B> ../public/kv3lib/kv3transfer_saveloadresource.h:50
// variables: 4
void CKV3Transfer_ResourceLoadInterface::HandleResourceReference(CKV3TransferLoadContext* pContext, ResourceType_t nResourceType, const KeyValues3* pLoadFromValue, CStrongHandleVoid* pOutHandle)
{
	const char   __FUNCTION__; // 46966
	const char* pResourceName; // 53
	CResourceName resourceName; // 66
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 52
	}
} /* size: 0, variables: 3 */

// <041C0BC2> ../public/kv3lib/kv3transfer_saveloadresource.h:50
// variables: 4
void CKV3Transfer_ResourceLoadInterface::HandleResourceReference(CKV3TransferLoadContext* pContext, ResourceType_t nResourceType, const KeyValues3* pLoadFromValue, CStrongHandleVoid* pOutHandle)
{
	const char   __FUNCTION__; // 39282
	const char* pResourceName; // 53
	CResourceName resourceName; // 66
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 52
	}
} /* size: 0, variables: 3 */

// <011116D0> ../public/kv3lib/kv3transfer_saveloadresource.h:50
// variables: 4
inline void CKV3Transfer_ResourceLoadInterface::HandleResourceReference(CKV3TransferLoadContext* pContext, ResourceType_t nResourceType, const KeyValues3* pLoadFromValue, CStrongHandleVoid* pOutHandle)
{
	const char   __FUNCTION__; // 54720
	const char* pResourceName; // 53
	CResourceName resourceName; // 66
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 52
	}
} /* size: 0, variables: 3 */

// <00F40D15> ../public/kv3lib/kv3transfer_saveloadresource.h:50
// variables: 4
inline void CKV3Transfer_ResourceLoadInterface::HandleResourceReference(CKV3TransferLoadContext* pContext, ResourceType_t nResourceType, const KeyValues3* pLoadFromValue, CStrongHandleVoid* pOutHandle)
{
	const char   __FUNCTION__; // 52758
	const char* pResourceName; // 53
	CResourceName resourceName; // 66
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 52
	}
} /* size: 0, variables: 3 */

// <00A17D4E> ../public/kv3lib/kv3transfer_saveloadresource.h:50
// variables: 4
inline void CKV3Transfer_ResourceLoadInterface::HandleResourceReference(CKV3TransferLoadContext* pContext, ResourceType_t nResourceType, const KeyValues3* pLoadFromValue, CStrongHandleVoid* pOutHandle)
{
	const char   __FUNCTION__; // 57895
	const char* pResourceName; // 53
	CResourceName resourceName; // 66
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 52
	}
} /* size: 0, variables: 3 */

// <0315E520> ../public/kv3lib/kv3transfer_saveloadresource.h:50
// variables: 4
inline void CKV3Transfer_ResourceLoadInterface::HandleResourceReference(CKV3TransferLoadContext* pContext, ResourceType_t nResourceType, const KeyValues3* pLoadFromValue, CStrongHandleVoid* pOutHandle)
{
	const char   __FUNCTION__; // 24531
	const char* pResourceName; // 53
	CResourceName resourceName; // 66
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 52
	}
} /* size: 0, variables: 3 */

// <00D1927C> ../public/kv3lib/kv3transfer_saveloadresource.h:50
// variables: 4
inline void CKV3Transfer_ResourceLoadInterface::HandleResourceReference(CKV3TransferLoadContext* pContext, ResourceType_t nResourceType, const KeyValues3* pLoadFromValue, CStrongHandleVoid* pOutHandle)
{
	const char   __FUNCTION__; // 22276
	const char* pResourceName; // 53
	CResourceName resourceName; // 66
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 52
	}
} /* size: 0, variables: 3 */

// <019C3FDC> ../public/kv3lib/kv3transfer_saveloadresource.h:50
// variables: 4
inline void CKV3Transfer_ResourceLoadInterface::HandleResourceReference(CKV3TransferLoadContext* pContext, ResourceType_t nResourceType, const KeyValues3* pLoadFromValue, CStrongHandleVoid* pOutHandle)
{
	const char   __FUNCTION__; // 63487
	const char* pResourceName; // 53
	CResourceName resourceName; // 66
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 52
	}
} /* size: 0, variables: 3 */

// <00CF6C66> ../public/kv3lib/kv3transfer_saveloadresource.h:50
// variables: 4
inline void CKV3Transfer_ResourceLoadInterface::HandleResourceReference(CKV3TransferLoadContext* pContext, ResourceType_t nResourceType, const KeyValues3* pLoadFromValue, CStrongHandleVoid* pOutHandle)
{
	const char   __FUNCTION__; // 49161
	const char* pResourceName; // 53
	CResourceName resourceName; // 66
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 52
	}
} /* size: 0, variables: 3 */

// <05BA6050> ../public/kv3lib/kv3transfer_saveloadresource.h:84
// member functions: 14
// member variable: 1
// vtable entries: 2
// class size: 8
class CKV3Transfer_EmptyResourceLoadInterface : public IKV3TransferInterface_ResourceLoad {
public:
	/* class IKV3TransferInterface_ResourceLoad <ancestor>; */ /* 0 8 */
	void ~CKV3Transfer_EmptyResourceLoadInterface(CKV3Transfer_EmptyResourceLoadInterface* );
	void CKV3Transfer_EmptyResourceLoadInterface(CKV3Transfer_EmptyResourceLoadInterface* , CKV3Transfer_EmptyResourceLoadInterface& );
	void CKV3Transfer_EmptyResourceLoadInterface(CKV3Transfer_EmptyResourceLoadInterface* , const CKV3Transfer_EmptyResourceLoadInterface& );
	void CKV3Transfer_EmptyResourceLoadInterface(CKV3Transfer_EmptyResourceLoadInterface* );
	/* ../public/kv3lib/kv3transfer_saveloadresource.h:87 */
	virtual bool LoadStrongHandle(CKV3Transfer_EmptyResourceLoadInterface* , CKV3TransferLoadContext* , const KeyValues3* , ResourceType_t, CStrongHandleBase* );
	/* ../public/kv3lib/kv3transfer_saveloadresource.h:95 */
	virtual ResourceHandle_t FindExistingResource(CKV3Transfer_EmptyResourceLoadInterface* , ResourceType_t, const char* , bool);
	/* ../public/kv3lib/kv3transfer_saveloadresource.h:100 */
	ResourceHandle_t GetHandleForResource(CKV3Transfer_EmptyResourceLoadInterface* , const KeyValues3* , ResourceType_t);
	void ~CKV3Transfer_EmptyResourceLoadInterface(class CKV3Transfer_EmptyResourceLoadInterface *); /* linkage=_ZN39CKV3Transfer_EmptyResourceLoadInterfaceD4Ev */
	void CKV3Transfer_EmptyResourceLoadInterface(class CKV3Transfer_EmptyResourceLoadInterface *, class CKV3Transfer_EmptyResourceLoadInterface &); /* linkage=_ZN39CKV3Transfer_EmptyResourceLoadInterfaceC4EOS_ */
	void CKV3Transfer_EmptyResourceLoadInterface(class CKV3Transfer_EmptyResourceLoadInterface *, const class CKV3Transfer_EmptyResourceLoadInterface  &); /* linkage=_ZN39CKV3Transfer_EmptyResourceLoadInterfaceC4ERKS_ */
	void CKV3Transfer_EmptyResourceLoadInterface(class CKV3Transfer_EmptyResourceLoadInterface *); /* linkage=_ZN39CKV3Transfer_EmptyResourceLoadInterfaceC4Ev */
	virtual bool LoadStrongHandle(class CKV3Transfer_EmptyResourceLoadInterface *, class CKV3TransferLoadContext *, const class KeyValues3  *, ResourceType_t, class CStrongHandleBase *); /* linkage=_ZN39CKV3Transfer_EmptyResourceLoadInterface16LoadStrongHandleEP23CKV3TransferLoadContextPK10KeyValues3yP17CStrongHandleBase */
	virtual ResourceHandle_t FindExistingResource(class CKV3Transfer_EmptyResourceLoadInterface *, ResourceType_t, const char  *, bool); /* linkage=_ZN39CKV3Transfer_EmptyResourceLoadInterface20FindExistingResourceEyPKcb */
	ResourceHandle_t GetHandleForResource(class CKV3Transfer_EmptyResourceLoadInterface *, const class KeyValues3  *, ResourceType_t); /* linkage=_ZN39CKV3Transfer_EmptyResourceLoadInterface20GetHandleForResourceEPK10KeyValues3y */
};

// <05BE1020> ../public/kv3lib/kv3transfer_saveloadresource.h:87
// variable: 1
// function calls: 9
void CKV3Transfer_EmptyResourceLoadInterface::LoadStrongHandle(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, ResourceType_t nResourceType, CStrongHandleBase* pStrongHandleBase)
{
	ResourceHandle_t hResource; // 89
	{
	}
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 118
	CKV3Transfer_EmptyResourceLoadInterface::GetHandleForResource(
				const KeyValues3* pLoadFromValue,
				ResourceType_t nResourceType);  // 89
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<ResourceBindingVoid_t>::Init(
		ResourceHandleTyped_t hResource);  // 659
	CStrongHandle<ResourceBindingVoid_t>::operator=(
			ResourceHandleTyped_t hResource);  // 275
	CStrongHandleVoid::operator=(
			ResourceHandle_t hResource);  // 90
} /* size: 0, variables: 1, inline expansions: 9 (0 bytes) */

// <042FD0E6> ../public/kv3lib/kv3transfer_saveloadresource.h:87
// variable: 1
void CKV3Transfer_EmptyResourceLoadInterface::LoadStrongHandle(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, ResourceType_t nResourceType, CStrongHandleBase* pStrongHandleBase)
{
	ResourceHandle_t hResource; // 89
} /* size: 0, variables: 1 */

// <05BE0FC3> ../public/kv3lib/kv3transfer_saveloadresource.h:95
void CKV3Transfer_EmptyResourceLoadInterface::FindExistingResource(ResourceType_t nResourceType, const char* pResourceName, bool bAddReference)
{
} /* size: 0 */

// <05BE0F51> ../public/kv3lib/kv3transfer_saveloadresource.h:100
// variables: 4
inline void CKV3Transfer_EmptyResourceLoadInterface::GetHandleForResource(const KeyValues3* pLoadFromValue, ResourceType_t nResourceType)
{
	const char   __FUNCTION__; // 39639
	const char* pResourceName; // 104
	CResourceName resourceName; // 110
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 102
	}
} /* size: 0, variables: 3 */

// <042FD07E> ../public/kv3lib/kv3transfer_saveloadresource.h:100
// variables: 4
void CKV3Transfer_EmptyResourceLoadInterface::GetHandleForResource(const KeyValues3* pLoadFromValue, ResourceType_t nResourceType)
{
	const char   __FUNCTION__; // 46890
	const char* pResourceName; // 104
	CResourceName resourceName; // 110
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 102
	}
} /* size: 0, variables: 3 */

// <041C0B07> ../public/kv3lib/kv3transfer_saveloadresource.h:100
// variables: 4
void CKV3Transfer_EmptyResourceLoadInterface::GetHandleForResource(const KeyValues3* pLoadFromValue, ResourceType_t nResourceType)
{
	const char   __FUNCTION__; // 39206
	const char* pResourceName; // 104
	CResourceName resourceName; // 110
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 102
	}
} /* size: 0, variables: 3 */

// <02D22499> ../public/kv3lib/kv3transfer_saveloadresource.h:100
// variables: 4
inline void CKV3Transfer_EmptyResourceLoadInterface::GetHandleForResource(const KeyValues3* pLoadFromValue, ResourceType_t nResourceType)
{
	const char   __FUNCTION__; // 32532
	const char* pResourceName; // 104
	CResourceName resourceName; // 110
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 102
	}
} /* size: 0, variables: 3 */

// <0150C0D1> ../public/kv3lib/kv3transfer_saveloadresource.h:100
// variables: 4
inline void CKV3Transfer_EmptyResourceLoadInterface::GetHandleForResource(const KeyValues3* pLoadFromValue, ResourceType_t nResourceType)
{
	const char   __FUNCTION__; // 22716
	const char* pResourceName; // 104
	CResourceName resourceName; // 110
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 102
	}
} /* size: 0, variables: 3 */

// <0184F595> ../public/kv3lib/kv3transfer_saveloadresource.h:124
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 8
class CKV3TransferInterface_ResourceSave : public IKV3TransferInterface_ResourceSave {
public:
	/* class IKV3TransferInterface_ResourceSave <ancestor>; */ /* 0 8 */
	void ~CKV3TransferInterface_ResourceSave(CKV3TransferInterface_ResourceSave* );
	void CKV3TransferInterface_ResourceSave(CKV3TransferInterface_ResourceSave* , CKV3TransferInterface_ResourceSave& );
	void CKV3TransferInterface_ResourceSave(CKV3TransferInterface_ResourceSave* , const CKV3TransferInterface_ResourceSave& );
	void CKV3TransferInterface_ResourceSave(CKV3TransferInterface_ResourceSave* );
	/* ../public/kv3lib/kv3transfer_saveloadresource.h:127 */
	virtual bool SaveStrongHandle(CKV3TransferInterface_ResourceSave* , CKV3TransferSaveContext* , KeyValues3* , ResourceType_t, CStrongHandleBase* );
	void ~CKV3TransferInterface_ResourceSave(class CKV3TransferInterface_ResourceSave *); /* linkage=_ZN34CKV3TransferInterface_ResourceSaveD4Ev */
	void CKV3TransferInterface_ResourceSave(class CKV3TransferInterface_ResourceSave *, class CKV3TransferInterface_ResourceSave &); /* linkage=_ZN34CKV3TransferInterface_ResourceSaveC4EOS_ */
	void CKV3TransferInterface_ResourceSave(class CKV3TransferInterface_ResourceSave *, const class CKV3TransferInterface_ResourceSave  &); /* linkage=_ZN34CKV3TransferInterface_ResourceSaveC4ERKS_ */
	void CKV3TransferInterface_ResourceSave(class CKV3TransferInterface_ResourceSave *); /* linkage=_ZN34CKV3TransferInterface_ResourceSaveC4Ev */
	/* <42fe130> ../public/kv3lib/kv3transfer_saveloadresource.h:127 */
	virtual bool SaveStrongHandle(class CKV3TransferInterface_ResourceSave *, class CKV3TransferSaveContext *, class KeyValues3 *, ResourceType_t, class CStrongHandleBase *); /* linkage=_ZN34CKV3TransferInterface_ResourceSave16SaveStrongHandleEP23CKV3TransferSaveContextP10KeyValues3yP17CStrongHandleBase */
};

// <042FE130> ../public/kv3lib/kv3transfer_saveloadresource.h:127
// variables: 2
// function calls: 13
void CKV3TransferInterface_ResourceSave::SaveStrongHandle(CKV3TransferSaveContext* pContext, KeyValues3* pSaveToValue, ResourceType_t nResourceType, CStrongHandleBase* pStrongHandleBase)
{
	CPathBufferString resourceName; // 132
	const ResourceBindingBase_t* pBinding; // 133
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 132
	CStrongHandleBase::GetResourceBindingBase(); // 133
	CUtlSymbolLarge::String(); // 148
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 148
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CBufferString* pOutBuffer,
			bool bAppend);  // 172
	ResourceGetName(ResourceHandle_t hResource,
			CBufferString* pOutBuffer,
			bool bAppend);  // 137
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 138
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 141
} /* size: 297, variables: 2, inline expansions: 13 (352 bytes) */

// <042FCFA1> ../public/kv3lib/kv3transfer_saveloadresource.h:127
// variables: 2
inline void CKV3TransferInterface_ResourceSave::SaveStrongHandle(CKV3TransferSaveContext* pContext, KeyValues3* pSaveToValue, ResourceType_t nResourceType, CStrongHandleBase* pStrongHandleBase)
{
	CPathBufferString resourceName; // 132
	const ResourceBindingBase_t* pBinding; // 133
} /* size: 0, variables: 2 */

