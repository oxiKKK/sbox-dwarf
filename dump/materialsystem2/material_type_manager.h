
//
// materialsystem2/material_type_manager.h
//
//	referenced by: libmaterialsystem2.so
//
//	functions: 7
//	class: 1
//

// <003412A5> materialsystem2/material_type_manager.h:23
// member functions: 38
// member variables: 3
// vtable entries: 11
// class size: 8,288
class CMaterialTypeManager : public CTypesafeIntrospectedToKV3TypeManager<1952542070, MaterialResourceData_t> {
public:
	/* class CTypesafeIntrospectedToKV3TypeManager<1952542070, MaterialResourceData_t> <ancestor>; */ /* 0 32 */
	void CMaterialTypeManager(CMaterialTypeManager* , const CMaterialTypeManager& );
	/* materialsystem2/material_type_manager.cpp:20 */
	void CMaterialTypeManager(CMaterialTypeManager* );
	/* materialsystem2/material_type_manager.cpp:29 */
	virtual void ~CMaterialTypeManager(CMaterialTypeManager* );
	/* materialsystem2/material_type_manager.cpp:34 */
	void InstallResourceType(CMaterialTypeManager* );
	/* materialsystem2/material_type_manager.cpp:39 */
	void RemoveResourceType(CMaterialTypeManager* );
	/* materialsystem2/material_type_manager.h:32 */
	IResourceSystemUtils* GetResourceSystemUtils(CMaterialTypeManager* );
	/* materialsystem2/material_type_manager.cpp:47 */
	virtual void* GetErrorResource(CMaterialTypeManager* );
	/* materialsystem2/material_type_manager.cpp:62 */
	virtual IMaterial2* AllocateTypesafe(CMaterialTypeManager* , MaterialResourceData_t* , IKV3ResourceAllocatorUtils* );
	/* materialsystem2/material_type_manager.cpp:83 */
	virtual void DeallocateTypesafe(CMaterialTypeManager* , IMaterial2* , IKV3ResourceDeallocatorUtils* );
	/* materialsystem2/material_type_manager.cpp:78 */
	virtual void OnReallocateTypesafe(CMaterialTypeManager* , const IMaterial2* , IMaterial2* );
	/* materialsystem2/material_type_manager.h:40 */
	virtual bool NeedsFrameUpdate(const CMaterialTypeManager* );
	/* materialsystem2/material_type_manager.cpp:117 */
	virtual void FrameUpdate(CMaterialTypeManager* , int);
	/* materialsystem2/material_type_manager.h:42 */
	virtual ResourceStreamingType_t GetStreamingType(const CMaterialTypeManager* );
	/* materialsystem2/material_type_manager.h:43 */
	virtual int GetNonStreamingDataLoadSize(const CMaterialTypeManager* , ResourceHandle_t, bool);
	/* materialsystem2/material_type_manager.cpp:97 */
	virtual void NotifyResourceWithWorkPendingLoadCancelled(CMaterialTypeManager* , ResourceHandle_t, void* );
	/* materialsystem2/material_type_manager.h:46 */
	virtual bool RequiresFinalizeResourceCall(const CMaterialTypeManager* );
	/* materialsystem2/material_type_manager.cpp:104 */
	virtual void FinalizeResource(CMaterialTypeManager* , ResourceHandle_t, ResourceLoadType_t);
	/* materialsystem2/material_type_manager.h:50 */
	void MarkLoadingWorkPending(CMaterialTypeManager* , ResourceHandle_t, bool);
	/* materialsystem2/material_type_manager.cpp:121 */
	ResourceManifestDesc_t* GetManualResourceManifest(void);
private:
	CMaterial2 m_fallbackMaterial __attribute__((__aligned__(16))); /* 32 0 */
	bool m_bBlockingMaterialLoads; /* 8272 1 */
	void MarkLoadingWorkPending(class CMaterialTypeManager *, ResourceHandle_t, bool); /* linkage=_ZN20CMaterialTypeManager22MarkLoadingWorkPendingEPK21ResourceBindingBase_tb */
	void CMaterialTypeManager(class CMaterialTypeManager *, const class CMaterialTypeManager  &); /* linkage=_ZN20CMaterialTypeManagerC4ERKS_ */
	void CMaterialTypeManager(class CMaterialTypeManager *); /* linkage=_ZN20CMaterialTypeManagerC4Ev */
	virtual void ~CMaterialTypeManager(class CMaterialTypeManager *); /* linkage=_ZN20CMaterialTypeManagerD4Ev */
	void InstallResourceType(class CMaterialTypeManager *); /* linkage=_ZN20CMaterialTypeManager19InstallResourceTypeEv */
	void RemoveResourceType(class CMaterialTypeManager *); /* linkage=_ZN20CMaterialTypeManager18RemoveResourceTypeEv */
	class IResourceSystemUtils * GetResourceSystemUtils(class CMaterialTypeManager *); /* linkage=_ZN20CMaterialTypeManager22GetResourceSystemUtilsEv */
	/* <34bac3> materialsystem2/material_type_manager.cpp:47 */
	virtual void * GetErrorResource(class CMaterialTypeManager *); /* linkage=_ZN20CMaterialTypeManager16GetErrorResourceEv */
	virtual class IMaterial2 * AllocateTypesafe(class CMaterialTypeManager *, class MaterialResourceData_t *, class IKV3ResourceAllocatorUtils *); /* linkage=_ZN20CMaterialTypeManager16AllocateTypesafeEP22MaterialResourceData_tPN37CTypesafeIntrospectedToKV3TypeManagerILy1952542070ES0_E26IKV3ResourceAllocatorUtilsE */
	/* <34bd0d> materialsystem2/material_type_manager.cpp:83 */
	virtual void DeallocateTypesafe(class CMaterialTypeManager *, class IMaterial2 *, class IKV3ResourceDeallocatorUtils *); /* linkage=_ZN20CMaterialTypeManager18DeallocateTypesafeEP10IMaterial2PN37CTypesafeIntrospectedToKV3TypeManagerILy1952542070E22MaterialResourceData_tE28IKV3ResourceDeallocatorUtilsE */
	virtual void OnReallocateTypesafe(class CMaterialTypeManager *, const class IMaterial2  *, class IMaterial2 *); /* linkage=_ZN20CMaterialTypeManager20OnReallocateTypesafeEPK10IMaterial2PS0_ */
	virtual bool NeedsFrameUpdate(const class CMaterialTypeManager  *); /* linkage=_ZNK20CMaterialTypeManager16NeedsFrameUpdateEv */
	virtual void FrameUpdate(class CMaterialTypeManager *, int); /* linkage=_ZN20CMaterialTypeManager11FrameUpdateEi */
	virtual enum ResourceStreamingType_t GetStreamingType(const class CMaterialTypeManager  *); /* linkage=_ZNK20CMaterialTypeManager16GetStreamingTypeEv */
	virtual int GetNonStreamingDataLoadSize(const class CMaterialTypeManager  *, ResourceHandle_t, bool); /* linkage=_ZNK20CMaterialTypeManager27GetNonStreamingDataLoadSizeEPK21ResourceBindingBase_tb */
	virtual void NotifyResourceWithWorkPendingLoadCancelled(class CMaterialTypeManager *, ResourceHandle_t, void *); /* linkage=_ZN20CMaterialTypeManager42NotifyResourceWithWorkPendingLoadCancelledEPK21ResourceBindingBase_tPv */
	virtual bool RequiresFinalizeResourceCall(const class CMaterialTypeManager  *); /* linkage=_ZNK20CMaterialTypeManager28RequiresFinalizeResourceCallEv */
	/* <34c14d> materialsystem2/material_type_manager.cpp:104 */
	virtual void FinalizeResource(class CMaterialTypeManager *, ResourceHandle_t, enum ResourceLoadType_t); /* linkage=_ZN20CMaterialTypeManager16FinalizeResourceEPK21ResourceBindingBase_t18ResourceLoadType_t */
	class ResourceManifestDesc_t * GetManualResourceManifest(void); /* linkage=_ZN20CMaterialTypeManager25GetManualResourceManifestEv */
} __attribute__((__aligned__(16)));

// <0008A83B> materialsystem2/material_type_manager.h:27
void CMaterialTypeManager::CMaterialTypeManager()
{
} /* size: 0 */

// <000C04C7> materialsystem2/material_type_manager.h:32
inline void CMaterialTypeManager::GetResourceSystemUtils()
{
} /* size: 0 */

// <0034A92A> materialsystem2/material_type_manager.h:40
void CMaterialTypeManager::NeedsFrameUpdate()
{
} /* size: 10 */

// <0034A8FC> materialsystem2/material_type_manager.h:42
void CMaterialTypeManager::GetStreamingType()
{
} /* size: 10 */

// <0034A8B0> materialsystem2/material_type_manager.h:43
void CMaterialTypeManager::GetNonStreamingDataLoadSize(ResourceHandle_t hResource, bool bIsReloading)
{
} /* size: 7 */

// <0034A882> materialsystem2/material_type_manager.h:46
void CMaterialTypeManager::RequiresFinalizeResourceCall()
{
} /* size: 10 */

// <0019AAF7> materialsystem2/material_type_manager.h:50
inline void CMaterialTypeManager::MarkLoadingWorkPending(ResourceHandle_t hMaterial, bool bPending)
{
} /* size: 0 */

