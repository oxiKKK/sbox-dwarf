
//
// materialsystem2/shader_type_manager.h
//
//	referenced by: libmaterialsystem2.so
//
//	functions: 2
//	class: 1
//

// <0039C3F9> materialsystem2/shader_type_manager.h:7
// member functions: 22
// member variable: 1
// vtable entries: 5
// class size: 8
class CShaderTypeManager : public IResourceTypeManager {
public:
	/* class IResourceTypeManager <ancestor>; */ /* 0 8 */
	void CShaderTypeManager(CShaderTypeManager* , CShaderTypeManager& );
	void CShaderTypeManager(CShaderTypeManager* , const CShaderTypeManager& );
	/* materialsystem2/shader_type_manager.cpp:21 */
	void CShaderTypeManager(CShaderTypeManager* );
	/* materialsystem2/shader_type_manager.cpp:25 */
	void InstallResourceType(CShaderTypeManager* );
	/* materialsystem2/shader_type_manager.cpp:30 */
	void RemoveResourceType(CShaderTypeManager* );
	/* materialsystem2/shader_type_manager.cpp:44 */
	virtual void AllocateResource(CShaderTypeManager* , ResourceHandle_t, ResourceId_t, const ResourceFileHeader_t* , IRD_RegisterResourceDataUtils* );
	/* materialsystem2/shader_type_manager.cpp:116 */
	virtual void DeallocateResource(CShaderTypeManager* , void* , IResourceDeallocatorUtils* );
	/* materialsystem2/shader_type_manager.h:19 */
	virtual bool RequiresFinalizeResourceCall(const CShaderTypeManager* );
	/* materialsystem2/shader_type_manager.cpp:35 */
	virtual void FinalizeResource(CShaderTypeManager* , ResourceHandle_t, ResourceLoadType_t);
	/* materialsystem2/shader_type_manager.cpp:154 */
	virtual void* GetErrorResource(CShaderTypeManager* );
	/* materialsystem2/shader_type_manager.cpp:16 */
	ResourceManifestDesc_t* GetManualResourceManifest(void);
	void CShaderTypeManager(class CShaderTypeManager *, class CShaderTypeManager &); /* linkage=_ZN18CShaderTypeManagerC4EOS_ */
	void CShaderTypeManager(class CShaderTypeManager *, const class CShaderTypeManager  &); /* linkage=_ZN18CShaderTypeManagerC4ERKS_ */
	void CShaderTypeManager(class CShaderTypeManager *); /* linkage=_ZN18CShaderTypeManagerC4Ev */
	void InstallResourceType(class CShaderTypeManager *); /* linkage=_ZN18CShaderTypeManager19InstallResourceTypeEv */
	void RemoveResourceType(class CShaderTypeManager *); /* linkage=_ZN18CShaderTypeManager18RemoveResourceTypeEv */
	virtual void AllocateResource(class CShaderTypeManager *, ResourceHandle_t, class ResourceId_t, const class ResourceFileHeader_t  *, class IRD_RegisterResourceDataUtils *); /* linkage=_ZN18CShaderTypeManager16AllocateResourceEPK21ResourceBindingBase_t12ResourceId_tPK20ResourceFileHeader_tP29IRD_RegisterResourceDataUtils */
	/* <3a0c67> materialsystem2/shader_type_manager.cpp:116 */
	virtual void DeallocateResource(class CShaderTypeManager *, void *, class IResourceDeallocatorUtils *); /* linkage=_ZN18CShaderTypeManager18DeallocateResourceEPvP25IResourceDeallocatorUtils */
	virtual bool RequiresFinalizeResourceCall(const class CShaderTypeManager  *); /* linkage=_ZNK18CShaderTypeManager28RequiresFinalizeResourceCallEv */
	/* <3a10f2> materialsystem2/shader_type_manager.cpp:35 */
	virtual void FinalizeResource(class CShaderTypeManager *, ResourceHandle_t, enum ResourceLoadType_t); /* linkage=_ZN18CShaderTypeManager16FinalizeResourceEPK21ResourceBindingBase_t18ResourceLoadType_t */
	virtual void * GetErrorResource(class CShaderTypeManager *); /* linkage=_ZN18CShaderTypeManager16GetErrorResourceEv */
	class ResourceManifestDesc_t * GetManualResourceManifest(void); /* linkage=_ZN18CShaderTypeManager25GetManualResourceManifestEv */
};

// <0008A857> materialsystem2/shader_type_manager.h:11
void CShaderTypeManager::CShaderTypeManager()
{
} /* size: 0 */

// <003A00E8> materialsystem2/shader_type_manager.h:19
void CShaderTypeManager::RequiresFinalizeResourceCall()
{
} /* size: 10 */

