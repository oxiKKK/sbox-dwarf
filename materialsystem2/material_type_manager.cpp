
//
// materialsystem2/material_type_manager.cpp
//
//	referenced by: libmaterialsystem2.so
//
//	functions: 19
//	class: 1
//

// <0034A85B> materialsystem2/material_type_manager.cpp:11
// variable: 1
inline void GetEventId(void)
{
	EventId_t s_nEventId; // 11
} /* size: 0, variables: 1 */

// <0034114F> materialsystem2/material_type_manager.cpp:11
// member function: 1
// member variable: 1
// class size: 1
class EMaterialReloaded : public CEventSignature<EMaterialReloaded> {
public:
	/* class CEventSignature<EMaterialReloaded> <ancestor>; */ /* 0 0 */
	/* materialsystem2/material_type_manager.cpp:11 */
	EventId_t GetEventId(void);
};

// <0034A756> materialsystem2/material_type_manager.cpp:15
// variables: 2
// function call: 1
ResourceManifestDesc_t* InitManifestDesc<VMatError::CTemplateArg>(CTemplateArg& def)
{
	ResourceManifestDesc_t s_Manifest; // 15
	ManifestEntryGroupList_t s_pManifestEntries; // 15
	ResourceManifestEntry_t::ResourceManifestEntry_t(
				const char* pResourceName,
				bool bResourceNameIsManifestName,
				CStrongHandleVoid* pHandle);  // 17
} /* size: 170, variables: 2, inline expansions: 1 (50 bytes) */

// <0034A634> materialsystem2/material_type_manager.cpp:20
// function calls: 2
void CMaterialTypeManager::CMaterialTypeManager()
{
	CTypesafeIntrospectedToKV3TypeManager<1952542070, MaterialResourceData_t>::CTypesafeIntrospectedToKV3TypeManager(); // 20
	CMaterial2::SetToFallbackMaterial(); // 23
} /* size: 94, inline expansions: 2 (14 bytes) */

// <0034A61B> materialsystem2/material_type_manager.cpp:20
void CMaterialTypeManager::CMaterialTypeManager()
{
} /* size: 0 */

// <0034A5CE> materialsystem2/material_type_manager.cpp:29
void CMaterialTypeManager::~CMaterialTypeManager()
{
} /* size: 24 */

// <0034A4DB> materialsystem2/material_type_manager.cpp:29
// function calls: 3
void CMaterialTypeManager::~CMaterialTypeManager()
{
	CBaseIntrospectedToKV3TypeManager::~CBaseIntrospectedToKV3TypeManager(); // 113
	CTypesafeIntrospectedToKV3TypeManager<1952542070, MaterialResourceData_t>::~CTypesafeIntrospectedToKV3TypeManager(); // 31
	CMaterialTypeManager::~CMaterialTypeManager(); // 31
} /* size: 54, inline expansions: 3 (20 bytes) */

// <0034A3F3> materialsystem2/material_type_manager.cpp:34
// function calls: 2
void CMaterialTypeManager::InstallResourceType()
{
	ResourceTypeName(void); // 673
	IResourceSystem::InstallTypeManager<1952542070>(
					IResourceTypeManager* pTypeManager,
					const char* pErrorManifestName);  // 36
} /* size: 45, inline expansions: 2 (28 bytes) */

// <0034A3AC> materialsystem2/material_type_manager.cpp:39
void CMaterialTypeManager::RemoveResourceType()
{
} /* size: 26 */

// <0034BAC3> materialsystem2/material_type_manager.cpp:47
// variable: 1
// function calls: 10
void* CMaterialTypeManager::GetErrorResource()
{
	CMaterial2* pMaterial; // 58
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 49
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator==(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource);  // 49
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 58
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeIMaterial2>(const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource); // 58
	CMaterialTypeManager::GetErrorResource(); // 47
} /* size: 165, variables: 1, inline expansions: 10 (125 bytes) */

// <0034A382> materialsystem2/material_type_manager.cpp:47
// variable: 1
void* CMaterialTypeManager::GetErrorResource()
{
	CMaterial2* pMaterial; // 58
} /* size: 0, variables: 1 */

// <0034789B> materialsystem2/material_type_manager.cpp:62
// variables: 2
// function calls: 30
void CMaterialTypeManager::AllocateTypesafe(MaterialResourceData_t* pDataFromDisk, IKV3ResourceAllocatorUtils* pUtils)
{
	CPathBufferString shaderPath; // 64
	CMaterial2* pMaterial; // 70
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 601
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 596
	CBufferStringN<200>::CBufferStringN(
			const char* pString,
			int nChars,
			bool bExact,
			bool bGrowable);  // 64
	CUtlString::Get(); // 99
	CUtlString::String(); // 64
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 66
	CBufferStringN<200>::operator=(
			CBufferString& rhs);  // 66
	CBufferString::~CBufferString(); // 66
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 68
	CUtlString::operator=(
			const char* src);  // 68
	CUtlMemoryPool<CMaterial2>::Alloc(); // 276
	operator new(size_t size); // 70
	CAllocatorUtils::GetDataUtils(); // 71
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 71
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 160
	CAllocatorUtils::GetResourceHandle(); // 71
	CWeakHandle<InfoForResourceTypeIMaterial2>::operator ResourceHandle_t(); // 71
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 71
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 76
} /* size: 619, variables: 2, inline expansions: 30 (601 bytes) */

// <00347673> materialsystem2/material_type_manager.cpp:78
// function calls: 9
void CMaterialTypeManager::OnReallocateTypesafe(const IMaterial2* pOldData, IMaterial2* pNewData)
{
	CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 351
	IRefCounted::IRefCounted(); // 380
	CFunctorData::CFunctorData(); // 351
	CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> >::CRefCounted1(); // 601
	CFunctorData0::CFunctorData0(); // 823
	CreateFunctorData(void); // 134
	RegisterEvent(const char* pEventName); // 11
	GetEventId(void); // 135
	Post(void); // 80
} /* size: 164, inline expansions: 9 (252 bytes) */

// <0034BD0D> materialsystem2/material_type_manager.cpp:83
// variable: 1
// function calls: 4
void CMaterialTypeManager::DeallocateTypesafe(IMaterial2* pData, IKV3ResourceDeallocatorUtils* pUtils)
{
	CMaterial2* pMaterial; // 92
	CDeallocatorUtils::GetDeallocUtils(); // 85
	CResourceDeallocatorUtils::GetDeallocationType(); // 85
	CMaterial2::HasOutstandingIORequests(); // 93
	{
	}
	CMaterialTypeManager::DeallocateTypesafe(
				IMaterial2* pData,
				IKV3ResourceDeallocatorUtils* pUtils);  // 83
} /* size: 0, variables: 1, inline expansions: 4 (76 bytes) */

// <00347612> materialsystem2/material_type_manager.cpp:83
// variables: 3
void CMaterialTypeManager::DeallocateTypesafe(IMaterial2* pData, IKV3ResourceDeallocatorUtils* pUtils)
{
	CMaterial2* pMaterial; // 92
	const char   __FUNCTION__; // 65114
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 93
	}
} /* size: 0, variables: 2 */

// <0034752A> materialsystem2/material_type_manager.cpp:97
// variables: 3
void CMaterialTypeManager::NotifyResourceWithWorkPendingLoadCancelled(ResourceHandle_t hResource, void* pData)
{
	CMaterial2* pMat; // 99
	const char   __FUNCTION__; // 126
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 100
	}
} /* size: 0, variables: 2 */

// <0034C14D> materialsystem2/material_type_manager.cpp:104
// variable: 1
// function calls: 9
void CMaterialTypeManager::FinalizeResource(ResourceHandle_t hResource, ResourceLoadType_t nLoadType)
{
	CMaterial2* pMat; // 109
	CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntyped(
			ResourceHandle_t hUntypedResource);  // 235
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 234
	FromUntypedHandle(ResourceHandle_t hResource); // 109
	CInterlockedIntT<int, 4>::operator int(); // 288
	ResourceHandleToNonConstData<InfoForResourceTypeIMaterial2>(const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource); // 109
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 234
	CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntyped(
			ResourceHandle_t hUntypedResource);  // 235
	FromUntypedHandle(ResourceHandle_t hResource); // 110
	CMaterialTypeManager::FinalizeResource(
			ResourceHandle_t hResource,
			ResourceLoadType_t nLoadType);  // 104
} /* size: 392, variables: 1, inline expansions: 9 (722 bytes) */

// <003474ED> materialsystem2/material_type_manager.cpp:104
// variable: 1
void CMaterialTypeManager::FinalizeResource(ResourceHandle_t hResource, ResourceLoadType_t nLoadType)
{
	CMaterial2* pMat; // 109
} /* size: 0, variables: 1 */

// <003474B0> materialsystem2/material_type_manager.cpp:117
void CMaterialTypeManager::FrameUpdate(int nFinishedFrameCount)
{
} /* size: 5 */

// <00347496> materialsystem2/material_type_manager.cpp:121
void GetManualResourceManifest(void)
{
} /* size: 12 */

