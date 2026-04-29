
//
// meshsystem/rendermesh_imp.h
//
//	referenced by: libmeshsystem.so
//
//	functions: 4
//	classes: 2
//

// <003F475D> meshsystem/rendermesh_imp.h:33
// member functions: 43
// member variables: 2
// vtable entries: 7
// class size: 16
class CRenderMeshManager : public IResourceTypeManager {
	/* meshsystem/rendermeshmgr.cpp:507 */
	struct AsyncProcessDataResult : public IAsyncProcessedDataResult {
	public:
		/* class IAsyncProcessedDataResult <ancestor>; */ /* 0 8 */
		void AsyncProcessDataResult(AsyncProcessDataResult* , AsyncProcessDataResult& );
		void AsyncProcessDataResult(AsyncProcessDataResult* , const AsyncProcessDataResult& );
		void AsyncProcessDataResult(AsyncProcessDataResult* );
		CKeyValues3Context m_diskKV3Data; /* 8 1584 */
		RuntimeBuffersInfo_t m_runtimeBuffersInfo __attribute__((__aligned__(8))); /* 1592 632 */
		virtual void ~AsyncProcessDataResult(AsyncProcessDataResult* );
	} __attribute__((__aligned__(8)));
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class IResourceTypeManager <ancestor>; */ /* 0 8 */
	void CRenderMeshManager(CRenderMeshManager* , const CRenderMeshManager& );
	/* meshsystem/rendermeshmgr.cpp:553 */
	virtual void AllocateResource(CRenderMeshManager* , ResourceHandle_t, ResourceId_t, const ResourceFileHeader_t* , IRD_RegisterResourceDataUtils* );
	/* meshsystem/rendermeshmgr.cpp:176 */
	virtual void DeallocateResource(CRenderMeshManager* , void* , IResourceDeallocatorUtils* );
	/* meshsystem/rendermeshmgr.cpp:162 */
	virtual void* GetErrorResource(CRenderMeshManager* );
	/* meshsystem/rendermeshmgr.cpp:193 */
	virtual void FinalizeResource(CRenderMeshManager* , ResourceHandle_t, ResourceLoadType_t);
	/* meshsystem/rendermesh_imp.h:42 */
	virtual bool RequiresFinalizeResourceCall(const CRenderMeshManager* );
	/* meshsystem/rendermeshmgr.cpp:513 */
	virtual bool WantsAsyncProcessData(const CRenderMeshManager* );
	/* meshsystem/rendermeshmgr.cpp:518 */
	virtual unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> > AsyncProcessData(CRenderMeshManager* , ResourceHandle_t, const ResourceFileHeader_t* );
	/* meshsystem/rendermeshmgr.cpp:147 */
	void CRenderMeshManager(CRenderMeshManager* );
	/* meshsystem/rendermeshmgr.cpp:154 */
	virtual void ~CRenderMeshManager(CRenderMeshManager* );
	/* meshsystem/rendermeshmgr.cpp:216 */
	void InstallResourceType(CRenderMeshManager* );
	/* meshsystem/rendermeshmgr.cpp:224 */
	void RemoveResourceType(CRenderMeshManager* );
	/* meshsystem/rendermeshmgr.cpp:229 */
	void EnableTraceLines(CRenderMeshManager* );
	/* meshsystem/rendermeshmgr.cpp:366 */
	void UpdateInputLayoutsForMesh(CRenderMeshManager* , CRenderMesh* );
	/* meshsystem/rendermeshmgr.cpp:385 */
	void UpdateTranslucencyFlags(CRenderMeshManager* , CRenderMesh* , int);
	/* meshsystem/rendermesh_imp.h:59 */
	void GetToolsGeometryInfo(CRenderMeshManager* , const CRenderMesh* , const CUtlVector<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >** );
	/* meshsystem/rendermeshmgr.cpp:350 */
	IMeshRayTrace* FindOrCreateMeshRayTrace(CRenderMeshManager* , const CRenderMesh* );
	/* meshsystem/rendermeshmgr.cpp:459 */
	CRenderMesh* CreateMeshFromData(CRenderMeshManager* , const char* , const CKeyValues3Context& , const RuntimeBuffersInfo_t& , bool, IRD_RegisterResourceDataUtils* , ResourceHandle_t, ResourceId_t);
	/* meshsystem/rendermeshmgr.cpp:206 */
	void FinalizeRenderMesh(CRenderMeshManager* , CRenderMesh* , bool);
	bool m_bTraceLinesEnabled; /* 8 1 */
	void CRenderMeshManager(class CRenderMeshManager *, const class CRenderMeshManager  &); /* linkage=_ZN18CRenderMeshManagerC4ERKS_ */
	virtual void AllocateResource(class CRenderMeshManager *, ResourceHandle_t, class ResourceId_t, const class ResourceFileHeader_t  *, class IRD_RegisterResourceDataUtils *); /* linkage=_ZN18CRenderMeshManager16AllocateResourceEPK21ResourceBindingBase_t12ResourceId_tPK20ResourceFileHeader_tP29IRD_RegisterResourceDataUtils */
	virtual void DeallocateResource(class CRenderMeshManager *, void *, class IResourceDeallocatorUtils *); /* linkage=_ZN18CRenderMeshManager18DeallocateResourceEPvP25IResourceDeallocatorUtils */
	virtual void * GetErrorResource(class CRenderMeshManager *); /* linkage=_ZN18CRenderMeshManager16GetErrorResourceEv */
	/* <4187a9> meshsystem/rendermeshmgr.cpp:193 */
	virtual void FinalizeResource(class CRenderMeshManager *, ResourceHandle_t, enum ResourceLoadType_t); /* linkage=_ZN18CRenderMeshManager16FinalizeResourceEPK21ResourceBindingBase_t18ResourceLoadType_t */
	virtual bool RequiresFinalizeResourceCall(const class CRenderMeshManager  *); /* linkage=_ZNK18CRenderMeshManager28RequiresFinalizeResourceCallEv */
	virtual bool WantsAsyncProcessData(const class CRenderMeshManager  *); /* linkage=_ZNK18CRenderMeshManager21WantsAsyncProcessDataEv */
	virtual class unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> > AsyncProcessData(class CRenderMeshManager *, ResourceHandle_t, const class ResourceFileHeader_t  *); /* linkage=_ZN18CRenderMeshManager16AsyncProcessDataEPK21ResourceBindingBase_tPK20ResourceFileHeader_t */
	void CRenderMeshManager(class CRenderMeshManager *); /* linkage=_ZN18CRenderMeshManagerC4Ev */
	virtual void ~CRenderMeshManager(class CRenderMeshManager *); /* linkage=_ZN18CRenderMeshManagerD4Ev */
	void InstallResourceType(class CRenderMeshManager *); /* linkage=_ZN18CRenderMeshManager19InstallResourceTypeEv */
	void RemoveResourceType(class CRenderMeshManager *); /* linkage=_ZN18CRenderMeshManager18RemoveResourceTypeEv */
	void EnableTraceLines(class CRenderMeshManager *); /* linkage=_ZN18CRenderMeshManager16EnableTraceLinesEv */
	void UpdateInputLayoutsForMesh(class CRenderMeshManager *, class CRenderMesh *); /* linkage=_ZN18CRenderMeshManager25UpdateInputLayoutsForMeshEP11CRenderMesh */
	/* <418cdb> meshsystem/rendermeshmgr.cpp:385 */
	void UpdateTranslucencyFlags(class CRenderMeshManager *, class CRenderMesh *, int); /* linkage=_ZN18CRenderMeshManager23UpdateTranslucencyFlagsEP11CRenderMeshi */
	void GetToolsGeometryInfo(class CRenderMeshManager *, const class CRenderMesh  *, const class CUtlVector<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >  * *); /* linkage=_ZN18CRenderMeshManager20GetToolsGeometryInfoEPK11CRenderMeshPPK10CUtlVectorI18TraceDataForDraw_t10CUtlMemoryIS4_iEE */
	class IMeshRayTrace * FindOrCreateMeshRayTrace(class CRenderMeshManager *, const class CRenderMesh  *); /* linkage=_ZN18CRenderMeshManager24FindOrCreateMeshRayTraceEPK11CRenderMesh */
	class CRenderMesh * CreateMeshFromData(class CRenderMeshManager *, const char  *, const class CKeyValues3Context  &, const class RuntimeBuffersInfo_t  &, bool, class IRD_RegisterResourceDataUtils *, ResourceHandle_t, class ResourceId_t); /* linkage=_ZN18CRenderMeshManager18CreateMeshFromDataEPKcRK18CKeyValues3ContextRK20RuntimeBuffersInfo_tbP29IRD_RegisterResourceDataUtilsPK21ResourceBindingBase_t12ResourceId_t */
	/* <418655> meshsystem/rendermeshmgr.cpp:206 */
	void FinalizeRenderMesh(class CRenderMeshManager *, class CRenderMesh *, bool); /* linkage=_ZN18CRenderMeshManager18FinalizeRenderMeshEP11CRenderMeshb */
};

// <004141A8> meshsystem/rendermesh_imp.h:42
void CRenderMeshManager::RequiresFinalizeResourceCall()
{
} /* size: 10 */

// <0015E19C> meshsystem/rendermesh_imp.h:48
void CRenderMeshManager::CRenderMeshManager()
{
} /* size: 0 */

// <0015E0E2> meshsystem/rendermesh_imp.h:49
void CRenderMeshManager::~CRenderMeshManager()
{
} /* size: 0 */

// <0015E25D> meshsystem/rendermesh_imp.h:80
void MeshSystemDrawRenderable(IRenderContext *, const CRenderMesh *, RenderShaderHandle_t, RenderShaderHandle_t, int)
{
} /* size: 0 */

// <003F936B> meshsystem/rendermesh_imp.h:85
// member functions: 17
// member variables: 4
// static member variable: 1
// vtable entries: 3
// class size: 576
class CMeshRayTrace : public CRefCounted1<IMeshRayTrace, CRefCountServiceBase<true, CRefMT> > {
	/* meshsystem/rendermesh_imp.h:104 */
	typedef struct CUtlMap<const CRenderMesh*, CMeshRayTrace*, short unsigned int, bool (*)(const CRenderMesh* const&, const CRenderMesh* const&)> CMeshHandleToRayTraceMap;
public:
	/* class CRefCounted1<IMeshRayTrace, CRefCountServiceBase<true, CRefMT> > <ancestor>; */ /* 0 24 */
	void CMeshRayTrace(CMeshRayTrace* , const CMeshRayTrace& );
	/* meshsystem/rendermeshmgr.cpp:36 */
	void CMeshRayTrace(CMeshRayTrace* , const CRenderMesh* );
	/* meshsystem/rendermeshmgr.cpp:77 */
	virtual void ~CMeshRayTrace(CMeshRayTrace* );
	/* meshsystem/rendermeshmgr.cpp:86 */
	IMeshRayTrace* Find(const CRenderMesh* );
	/* meshsystem/rendermeshmgr.cpp:102 */
	bool MarkOutOfDate(const CRenderMesh* );
	/* meshsystem/rendermeshmgr.cpp:117 */
	virtual RayTracingEnvironment& GetRayTracingEnvironment(CMeshRayTrace* );
	/* meshsystem/rendermeshmgr.cpp:123 */
	virtual const TraceDataForDraw_t* GetMeshTraceData(const CMeshRayTrace* , int);
	/* meshsystem/rendermeshmgr.cpp:139 */
	virtual bool IsOutOfDate(const CMeshRayTrace* );
private:
	RayTracingEnvironment m_RayTrace; /* 32 528 */
	const class CRenderMesh * m_pMeshData; /* 560 8 */
	bool m_bOutOfDate; /* 568 1 */
	static CMeshHandleToRayTraceMap ms_Registry; /* 0 0 */
	void CMeshRayTrace(class CMeshRayTrace *, const class CMeshRayTrace  &); /* linkage=_ZN13CMeshRayTraceC4ERKS_ */
	void CMeshRayTrace(class CMeshRayTrace *, const class CRenderMesh  *); /* linkage=_ZN13CMeshRayTraceC4EPK11CRenderMesh */
	virtual void ~CMeshRayTrace(class CMeshRayTrace *); /* linkage=_ZN13CMeshRayTraceD4Ev */
	class IMeshRayTrace * Find(const class CRenderMesh  *); /* linkage=_ZN13CMeshRayTrace4FindEPK11CRenderMesh */
	bool MarkOutOfDate(const class CRenderMesh  *); /* linkage=_ZN13CMeshRayTrace13MarkOutOfDateEPK11CRenderMesh */
	virtual class RayTracingEnvironment & GetRayTracingEnvironment(class CMeshRayTrace *); /* linkage=_ZN13CMeshRayTrace24GetRayTracingEnvironmentEv */
	virtual const class TraceDataForDraw_t  * GetMeshTraceData(const class CMeshRayTrace  *, int); /* linkage=_ZNK13CMeshRayTrace16GetMeshTraceDataEi */
	virtual bool IsOutOfDate(const class CMeshRayTrace  *); /* linkage=_ZNK13CMeshRayTrace11IsOutOfDateEv */
};

