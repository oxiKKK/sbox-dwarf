
//
// meshsystem/meshsystem.h
//
//	referenced by: libmeshsystem.so
//
//	functions: 4
//	classes: 2
//

// <00172726> meshsystem/meshsystem.h:20
void CModelTypeManager::~CModelTypeManager()
{
} /* size: 0 */

// <0017270A> meshsystem/meshsystem.h:20
inline void CModelTypeManager::~CModelTypeManager()
{
} /* size: 0 */

// <00152310> meshsystem/meshsystem.h:20
// member functions: 49
// member variables: 5
// vtable entries: 11
// class size: 112
class CModelTypeManager : public CTypesafeIntrospectedToKV3TypeManager<1818520950, PermModelData_t>, public IToolsResourceListener {
	/* meshsystem/meshsystem.cpp:71 */
	class AsyncProcessDataResults : public IAsyncProcessedDataResult {
		/* meshsystem/meshsystem.cpp:79 */
		struct MeshData {
			unique_ptr<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData>, std::default_delete<CEmbeddedIntrospectedOrKV3BlockHelper<CMorphSetData> > > m_pMorphHelper; /* 0 8 */
			RuntimeBuffersInfo_t m_runtimeBuffersInfo __attribute__((__aligned__(8))); /* 8 632 */
			CKeyValues3Context m_meshBlockContext; /* 640 1584 */
			const char * m_pMeshName; /* 2224 8 */
			const char * m_pMorphTextureName; /* 2232 8 */
			int m_nMeshIndex; /* 2240 4 */
			void ~MeshData(MeshData* );
			void MeshData(MeshData* );
		} __attribute__((__aligned__(8)));
		/* tag__fprintf: const_type tag not supported! */;
		/* meshsystem/meshsystem.cpp:89 */
		struct AnimData {
			CEmbeddedIntrospectedOrKV3BlockHelper<CAnimationGroup> m_animGroupHandler; /* 0 1624 */
			CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData> m_animDataHandler; /* 1624 1624 */
			CEmbeddedIntrospectedOrKV3BlockHelper<CSequenceGroupData> m_seqGroupHandler; /* 3248 1624 */
			void ~AnimData(AnimData* );
			void AnimData(AnimData* );
		};
		/* meshsystem/meshsystem.cpp:96 */
		struct PhysData {
			CEmbeddedIntrospectedOrKV3BlockHelper<VPhysXAggregateData_t> m_blockHandler; /* 0 1624 */
			void ~PhysData(PhysData* );
			void PhysData(PhysData* );
		};
	public:
		/* class IAsyncProcessedDataResult <ancestor>; */ /* 0 8 */
		void AsyncProcessDataResults(AsyncProcessDataResults* , const AsyncProcessDataResults& );
		void AsyncProcessDataResults(AsyncProcessDataResults* );
		/* meshsystem/meshsystem.cpp:74 */
		virtual void ~AsyncProcessDataResults(AsyncProcessDataResults* );
		unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> > m_pBaseClassAsyncResult; /* 8 8 */
		CUtlVectorFixedGrowable<CModelTypeManager::AsyncProcessDataResults::MeshData*, 4> m_Meshes __attribute__((__aligned__(8))); /* 16 64 */
		unique_ptr<CModelTypeManager::AsyncProcessDataResults::AnimData, std::default_delete<CModelTypeManager::AsyncProcessDataResults::AnimData> > m_pAnimData; /* 80 8 */
		unique_ptr<CModelTypeManager::AsyncProcessDataResults::PhysData, std::default_delete<CModelTypeManager::AsyncProcessDataResults::PhysData> > m_pPhysData; /* 88 8 */
		CKeyValues3Context m_controlBlockData; /* 96 1584 */
		CUtlString m_controlBlockErrorMsg; /* 1680 8 */
		bool m_bHasEmbeddedControlBlock; /* 1688 1 */
		bool m_bBlocksAreKV3; /* 1689 1 */
		bool m_bSuccess; /* 1690 1 */
	} __attribute__((__aligned__(8)));
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class CTypesafeIntrospectedToKV3TypeManager<1818520950, PermModelData_t> <ancestor>; */ /* 0 32 */
	/* class IToolsResourceListener <ancestor>; */ /* 32 8 */
	void ~CModelTypeManager(CModelTypeManager* );
	void CModelTypeManager(CModelTypeManager* , CModelTypeManager& );
	void CModelTypeManager(CModelTypeManager* , const CModelTypeManager& );
	/* meshsystem/meshsystem.cpp:229 */
	virtual bool WantsAsyncProcessData(const CModelTypeManager* );
	/* meshsystem/meshsystem.cpp:237 */
	virtual unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> > AsyncProcessData(CModelTypeManager* , ResourceHandle_t, const ResourceFileHeader_t* );
	/* meshsystem/meshsystem.cpp:461 */
	virtual void AllocateResource(CModelTypeManager* , ResourceHandle_t, ResourceId_t, const ResourceFileHeader_t* , IRD_RegisterResourceDataUtils* );
	/* meshsystem/meshsystem.cpp:54 */
	virtual void* GetErrorResource(CModelTypeManager* );
	/* meshsystem/meshsystem.cpp:504 */
	virtual CModel* AllocateTypesafe(CModelTypeManager* , PermModelData_t* , IKV3ResourceAllocatorUtils* );
	/* meshsystem/meshsystem.cpp:516 */
	virtual void DeallocateTypesafe(CModelTypeManager* , CModel* , IKV3ResourceDeallocatorUtils* );
	/* meshsystem/meshsystem.cpp:531 */
	virtual void FinalizeResource(CModelTypeManager* , ResourceHandle_t, ResourceLoadType_t);
	/* meshsystem/meshsystem.h:35 */
	virtual bool RequiresFinalizeResourceCall(const CModelTypeManager* );
	/* meshsystem/meshsystem.h:36 */
	virtual bool NeedsFrameUpdate(const CModelTypeManager* );
	/* meshsystem/meshsystem.cpp:589 */
	virtual void FrameUpdate(CModelTypeManager* , int);
	/* meshsystem/meshsystem.cpp:562 */
	virtual void NotifyResourceStatusChange(CModelTypeManager* , const ResourceStatusChange_t* , int);
	/* meshsystem/meshsystem.cpp:631 */
	void CModelTypeManager(CModelTypeManager* );
	/* meshsystem/meshsystem.cpp:638 */
	void InstallResourceType(CModelTypeManager* );
	/* meshsystem/meshsystem.cpp:647 */
	void RemoveResourceType(CModelTypeManager* );
private:
	/* meshsystem/meshsystem.cpp:116 */
	bool ProcessControlBlock(CModelTypeManager* , CModel_Imp* , const ResourceFileHeader_t* , const AsyncProcessDataResults& , IRD_RegisterResourceDataUtils* , ResourceHandle_t, ResourceId_t);
	/* meshsystem/meshsystem.cpp:201 */
	void OnAnimGraphsReloaded(CModelTypeManager* );
	CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCModel>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCModel>, int> > m_reloadedModelList; /* 40 32 */
	CUtlVector<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>, int> > m_reloadedAnimGraphList; /* 72 32 */
	int32 m_nMaterialReloadEventCount; /* 104 4 */
	void ~CModelTypeManager(class CModelTypeManager *); /* linkage=_ZN17CModelTypeManagerD4Ev */
	void CModelTypeManager(class CModelTypeManager *, class CModelTypeManager &); /* linkage=_ZN17CModelTypeManagerC4EOS_ */
	void CModelTypeManager(class CModelTypeManager *, const class CModelTypeManager  &); /* linkage=_ZN17CModelTypeManagerC4ERKS_ */
	virtual bool WantsAsyncProcessData(const class CModelTypeManager  *); /* linkage=_ZNK17CModelTypeManager21WantsAsyncProcessDataEv */
	virtual class unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> > AsyncProcessData(class CModelTypeManager *, ResourceHandle_t, const class ResourceFileHeader_t  *); /* linkage=_ZN17CModelTypeManager16AsyncProcessDataEPK21ResourceBindingBase_tPK20ResourceFileHeader_t */
	virtual void AllocateResource(class CModelTypeManager *, ResourceHandle_t, class ResourceId_t, const class ResourceFileHeader_t  *, class IRD_RegisterResourceDataUtils *); /* linkage=_ZN17CModelTypeManager16AllocateResourceEPK21ResourceBindingBase_t12ResourceId_tPK20ResourceFileHeader_tP29IRD_RegisterResourceDataUtils */
	virtual void * GetErrorResource(class CModelTypeManager *); /* linkage=_ZN17CModelTypeManager16GetErrorResourceEv */
	virtual class CModel * AllocateTypesafe(class CModelTypeManager *, class PermModelData_t *, class IKV3ResourceAllocatorUtils *); /* linkage=_ZN17CModelTypeManager16AllocateTypesafeEP15PermModelData_tPN37CTypesafeIntrospectedToKV3TypeManagerILy1818520950ES0_E26IKV3ResourceAllocatorUtilsE */
	/* <18ce0c> meshsystem/meshsystem.cpp:516 */
	virtual void DeallocateTypesafe(class CModelTypeManager *, class CModel *, class IKV3ResourceDeallocatorUtils *); /* linkage=_ZN17CModelTypeManager18DeallocateTypesafeEP6CModelPN37CTypesafeIntrospectedToKV3TypeManagerILy1818520950E15PermModelData_tE28IKV3ResourceDeallocatorUtilsE */
	virtual void FinalizeResource(class CModelTypeManager *, ResourceHandle_t, enum ResourceLoadType_t); /* linkage=_ZN17CModelTypeManager16FinalizeResourceEPK21ResourceBindingBase_t18ResourceLoadType_t */
	virtual bool RequiresFinalizeResourceCall(const class CModelTypeManager  *); /* linkage=_ZNK17CModelTypeManager28RequiresFinalizeResourceCallEv */
	virtual bool NeedsFrameUpdate(const class CModelTypeManager  *); /* linkage=_ZNK17CModelTypeManager16NeedsFrameUpdateEv */
	virtual void FrameUpdate(class CModelTypeManager *, int); /* linkage=_ZN17CModelTypeManager11FrameUpdateEi */
	virtual void NotifyResourceStatusChange(class CModelTypeManager *, const class ResourceStatusChange_t  *, int); /* linkage=_ZN17CModelTypeManager26NotifyResourceStatusChangeEPK22ResourceStatusChange_ti */
	void CModelTypeManager(class CModelTypeManager *); /* linkage=_ZN17CModelTypeManagerC4Ev */
	void InstallResourceType(class CModelTypeManager *); /* linkage=_ZN17CModelTypeManager19InstallResourceTypeEv */
	/* <18e7dc> meshsystem/meshsystem.cpp:647 */
	void RemoveResourceType(class CModelTypeManager *); /* linkage=_ZN17CModelTypeManager18RemoveResourceTypeEv */
	bool ProcessControlBlock(class CModelTypeManager *, class CModel_Imp *, const class ResourceFileHeader_t  *, const class AsyncProcessDataResults  &, class IRD_RegisterResourceDataUtils *, ResourceHandle_t, class ResourceId_t); /* linkage=_ZN17CModelTypeManager19ProcessControlBlockEP10CModel_ImpPK20ResourceFileHeader_tRKNS_23AsyncProcessDataResultsEP29IRD_RegisterResourceDataUtilsPK21ResourceBindingBase_t12ResourceId_t */
	void OnAnimGraphsReloaded(class CModelTypeManager *); /* linkage=_ZN17CModelTypeManager20OnAnimGraphsReloadedEv */
};

// <00187B69> meshsystem/meshsystem.h:35
void CModelTypeManager::RequiresFinalizeResourceCall()
{
} /* size: 10 */

// <00187B3B> meshsystem/meshsystem.h:36
void CModelTypeManager::NeedsFrameUpdate()
{
} /* size: 10 */

// <00132C22> meshsystem/meshsystem.h:68
// member functions: 86
// member variables: 4
// vtable entries: 29
// class size: 184
class CMeshSystem : public CTier3AppSystem<IMeshSystem, 0> {
public:
	/* class CTier3AppSystem<IMeshSystem, 0> <ancestor>; */ /* 0 48 */
	void CMeshSystem(CMeshSystem* , const CMeshSystem& );
	/* meshsystem/meshsystem.cpp:657 */
	virtual const AppSystemInfo_t* GetDependencies(CMeshSystem* );
	/* meshsystem/meshsystem.cpp:674 */
	virtual void* QueryInterface(CMeshSystem* , const char* );
	/* meshsystem/meshsystem.cpp:683 */
	virtual InitReturnVal_t Init(CMeshSystem* );
	/* meshsystem/meshsystem.cpp:693 */
	virtual void Shutdown(CMeshSystem* );
	/* meshsystem/meshsystem.cpp:702 */
	virtual void PrepareRenderMesh(CMeshSystem* , CRenderMesh* );
	/* meshsystem/meshsystem.cpp:714 */
	virtual HModel FindOrCreateProceduralModel(CMeshSystem* , const char* , bool, CModelBuilder* );
	/* meshsystem/meshsystem.cpp:736 */
	virtual void DrawRenderable(CMeshSystem* , IRenderContext* , HModel, RenderShaderHandle_t, RenderShaderHandle_t, int);
	/* meshsystem/meshsystem.cpp:770 */
	virtual void GetModelBounds(CMeshSystem* , HModel, Vector& , Vector& );
	/* meshsystem/meshsystem.cpp:792 */
	virtual CMeshInstance* CreateMeshInstance(CMeshSystem* , ISceneObjectDesc* , uint32);
	/* meshsystem/meshsystem.cpp:822 */
	virtual void DestroyMeshInstance(CMeshSystem* , CMeshInstance* );
	/* meshsystem/meshsystem.h:90 */
	virtual CSceneObject* CreateSceneObject(CMeshSystem* , HModel, const CTransform& , const char* , ESceneObjectFlags, ESceneObjectTypeFlags, ISceneWorld* , SceneObjectCreationFlags_t, int);
	/* meshsystem/meshsystem.h:91 */
	virtual CSceneObject* CreateSceneObject(CMeshSystem* , HModel, const matrix3x4_t& , const char* , ESceneObjectFlags, ESceneObjectTypeFlags, ISceneWorld* , SceneObjectCreationFlags_t, int);
	/* meshsystem/meshsystem.h:92 */
	virtual bool CreateSceneObjects(CMeshSystem* , HModel, ESceneObjectFlags, ISceneWorld* , CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> >* , SceneObjectCreationFlags_t, int);
	/* meshsystem/meshsystem.h:93 */
	virtual CSceneObject* CreateSceneObjectForSceneObjectData(CMeshSystem* , CModelMeshHandle, int, ESceneObjectFlags, ISceneWorld* , SceneObjectCreationFlags_t, ISceneObjectDesc* , int);
	/* meshsystem/meshsystem.h:94 */
	virtual void ChangeModel(CMeshSystem* , CSceneObject* , HModel);
	/* meshsystem/meshsystem.h:97 */
	virtual uint RemoveUnusedMeshGroups(CMeshSystem* , CSceneObject* , MeshGroupMask_t);
	/* meshsystem/meshsystem.cpp:852 */
	virtual void EnableTraceLines(CMeshSystem* );
	/* meshsystem/meshsystem.cpp:949 */
	virtual ESceneObjectFlags ComputeSceneObjectTranslucencyFlags(CMeshSystem* , RenderMeshTranslucencyType_t, ESceneObjectFlags);
	/* meshsystem/meshsystem.h:104 */
	virtual void UpdateTranslucencyFlagsOnMaterialChange(CMeshSystem* , CSceneObject* );
	/* meshsystem/meshsystem.cpp:936 */
	void CMeshSystem(CMeshSystem* );
	/* meshsystem/meshsystem.cpp:940 */
	virtual void ~CMeshSystem(CMeshSystem* );
	/* meshsystem/meshsystem.h:110 */
	virtual void ClearHighWaterMarks(CMeshSystem* );
	/* meshsystem/meshsystem.cpp:753 */
	virtual void GetRenderableBounds(CMeshSystem* , const CRenderMesh* , Vector& , Vector& );
	/* meshsystem/meshsystem.cpp:803 */
	virtual CMeshInstance* CreateMeshInstance(CMeshSystem* , ISceneObjectDesc* , uint32, CModelMeshHandle, int, ESceneObjectFlags, CSceneObject* , MeshGroupMask_t, LODGroupMask_t, const int16* );
	/* meshsystem/meshsystem.h:116 */
	virtual bool CreateSceneObjectsFromMesh(CMeshSystem* , CModelMeshHandle, ESceneObjectFlags, ISceneWorld* , CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> >* , SceneObjectCreationFlags_t, int);
	/* meshsystem/meshsystem.cpp:944 */
	virtual ESceneObjectFlags ComputeSceneObjectTranslucencyFlags(CMeshSystem* , const CRenderMesh* , ESceneObjectFlags);
	/* meshsystem/meshsystem.cpp:890 */
	virtual IMeshRayTrace* FindOrCreateMeshRayTrace(CMeshSystem* , const CRenderMesh* );
	/* meshsystem/meshsystem.cpp:857 */
	virtual void GetToolsGeometryInfo(CMeshSystem* , const CRenderMesh* , const CUtlVector<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >** );
	/* meshsystem/meshsystem.cpp:874 */
	virtual CSmartPtr<CRenderMesh, CRefCountAccessor> CreateRenderMesh(const CMeshSystem* , const char* );
	/* meshsystem/meshsystem.cpp:885 */
	virtual void InvalidateMeshRayTrace(const CMeshSystem* , CRenderMesh* );
	/* meshsystem/meshsystem.h:125 */
	void ClearOverridenInstanceMeshData(CMeshSystem* , const CRenderMesh* );
	/* meshsystem/meshsystem.h:127 */
	CMeshInstance* CreateMeshInstanceChain(CMeshSystem* , HModel, Vector& , Vector& , RenderMeshTranslucencyType_t& , ESceneObjectFlags& , ISceneObjectDesc* );
	/* meshsystem/meshsystem.h:128 */
	void FindAllSceneObjectsWithModel(CMeshSystem* , HModel, CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> >& );
	/* meshsystem/meshsystem.h:129 */
	void FindAllMeshInstancesWithMesh(CMeshSystem* , const CRenderMesh* , CUtlVector<CMeshInstance*, CUtlMemory<CMeshInstance*, int> >& );
	/* meshsystem/meshsystem.h:132 */
	bool UpdateDrawCallFlags(CMeshSystem* , CMaterialDrawDescriptor* , int, int* , bool);
	/* meshsystem/meshsystem.h:133 */
	RenderMeshTranslucencyType_t GetTranslucencyType(CMeshSystem* , int, int);
	/* meshsystem/meshsystem.h:134 */
	void UpdateTranslucencyAndDescForSceneObject(CMeshSystem* , CSceneObject* , ESceneObjectFlags, RenderMeshTranslucencyType_t);
private:
	/* meshsystem/meshsystem.cpp:761 */
	RenderMeshTranslucencyType_t GetMeshTranslucencyType(CMeshSystem* , const CRenderMesh* );
	/* meshsystem/meshsystem.cpp:898 */
	void UpdateTranslucencyFlagsForAllLoadedMeshes(CMeshSystem* );
	/* meshsystem/meshsystem.cpp:847 */
	void DeleteSceneWorldInfo(CMeshSystem* , ISceneWorld* );
	/* meshsystem/meshsystem.cpp:782 */
	ISceneObjectDesc* GetAnimatableDesc(CMeshSystem* );
	CRenderMeshManager m_RenderableManager; /* 48 0 */
	CModelTypeManager m_modelTypeManager; /* 64 112 */
	ISceneObjectDesc * m_pAnimatableDesc; /* 176 8 */
	/* meshsystem/meshsystem.cpp:726 */
	virtual HRenderMesh_Internal FindOrCreateProceduralMesh(CMeshSystem* , const char* , bool);
	virtual void ClearHighWaterMarks(class CMeshSystem *); /* linkage=_ZN11CMeshSystem19ClearHighWaterMarksEv */
	void CMeshSystem(class CMeshSystem *, const class CMeshSystem  &); /* linkage=_ZN11CMeshSystemC4ERKS_ */
	/* <18c867> meshsystem/meshsystem.cpp:657 */
	virtual const class AppSystemInfo_t  * GetDependencies(class CMeshSystem *); /* linkage=_ZN11CMeshSystem15GetDependenciesEv */
	virtual void * QueryInterface(class CMeshSystem *, const char  *); /* linkage=_ZN11CMeshSystem14QueryInterfaceEPKc */
	virtual enum InitReturnVal_t Init(class CMeshSystem *); /* linkage=_ZN11CMeshSystem4InitEv */
	virtual void Shutdown(class CMeshSystem *); /* linkage=_ZN11CMeshSystem8ShutdownEv */
	virtual void PrepareRenderMesh(class CMeshSystem *, class CRenderMesh *); /* linkage=_ZN11CMeshSystem17PrepareRenderMeshEP11CRenderMesh */
	virtual HModel FindOrCreateProceduralModel(class CMeshSystem *, const char  *, bool, class CModelBuilder *); /* linkage=_ZN11CMeshSystem27FindOrCreateProceduralModelEPKcbP13CModelBuilder */
	virtual void DrawRenderable(class CMeshSystem *, class IRenderContext *, HModel, RenderShaderHandle_t, RenderShaderHandle_t, int); /* linkage=_ZN11CMeshSystem14DrawRenderableEP14IRenderContext11CWeakHandleI25InfoForResourceTypeCModelEP22RenderShaderHandle_t__S6_i */
	/* <18cb75> meshsystem/meshsystem.cpp:770 */
	virtual void GetModelBounds(class CMeshSystem *, HModel, class Vector &, class Vector &); /* linkage=_ZN11CMeshSystem14GetModelBoundsE11CWeakHandleI25InfoForResourceTypeCModelER6VectorS4_ */
	virtual class CMeshInstance * CreateMeshInstance(class CMeshSystem *, class ISceneObjectDesc *, uint32); /* linkage=_ZN11CMeshSystem18CreateMeshInstanceEP16ISceneObjectDescj */
	/* <18ceff> meshsystem/meshsystem.cpp:822 */
	virtual void DestroyMeshInstance(class CMeshSystem *, class CMeshInstance *); /* linkage=_ZN11CMeshSystem19DestroyMeshInstanceEP13CMeshInstance */
	virtual class CSceneObject * CreateSceneObject(class CMeshSystem *, HModel, const class CTransform  &, const char  *, enum ESceneObjectFlags, enum ESceneObjectTypeFlags, class ISceneWorld *, SceneObjectCreationFlags_t, int); /* linkage=_ZN11CMeshSystem17CreateSceneObjectE11CWeakHandleI25InfoForResourceTypeCModelERK10CTransformPKc17ESceneObjectFlags21ESceneObjectTypeFlagsP11ISceneWorldji */
	virtual class CSceneObject * CreateSceneObject(class CMeshSystem *, HModel, const class matrix3x4_t  &, const char  *, enum ESceneObjectFlags, enum ESceneObjectTypeFlags, class ISceneWorld *, SceneObjectCreationFlags_t, int); /* linkage=_ZN11CMeshSystem17CreateSceneObjectE11CWeakHandleI25InfoForResourceTypeCModelERK11matrix3x4_tPKc17ESceneObjectFlags21ESceneObjectTypeFlagsP11ISceneWorldji */
	virtual bool CreateSceneObjects(class CMeshSystem *, HModel, enum ESceneObjectFlags, class ISceneWorld *, class CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> > *, SceneObjectCreationFlags_t, int); /* linkage=_ZN11CMeshSystem18CreateSceneObjectsE11CWeakHandleI25InfoForResourceTypeCModelE17ESceneObjectFlagsP11ISceneWorldP10CUtlVectorIP12CSceneObject10CUtlMemoryIS8_iEEji */
	virtual class CSceneObject * CreateSceneObjectForSceneObjectData(class CMeshSystem *, class CModelMeshHandle, int, enum ESceneObjectFlags, class ISceneWorld *, SceneObjectCreationFlags_t, class ISceneObjectDesc *, int); /* linkage=_ZN11CMeshSystem35CreateSceneObjectForSceneObjectDataE16CModelMeshHandlei17ESceneObjectFlagsP11ISceneWorldjP16ISceneObjectDesci */
	virtual void ChangeModel(class CMeshSystem *, class CSceneObject *, HModel); /* linkage=_ZN11CMeshSystem11ChangeModelEP12CSceneObject11CWeakHandleI25InfoForResourceTypeCModelE */
	virtual uint RemoveUnusedMeshGroups(class CMeshSystem *, class CSceneObject *, MeshGroupMask_t); /* linkage=_ZN11CMeshSystem22RemoveUnusedMeshGroupsEP12CSceneObjecty */
	virtual void EnableTraceLines(class CMeshSystem *); /* linkage=_ZN11CMeshSystem16EnableTraceLinesEv */
	/* <18ca82> meshsystem/meshsystem.cpp:949 */
	virtual enum ESceneObjectFlags ComputeSceneObjectTranslucencyFlags(class CMeshSystem *, enum RenderMeshTranslucencyType_t, enum ESceneObjectFlags); /* linkage=_ZN11CMeshSystem35ComputeSceneObjectTranslucencyFlagsE28RenderMeshTranslucencyType_t17ESceneObjectFlags */
	virtual void UpdateTranslucencyFlagsOnMaterialChange(class CMeshSystem *, class CSceneObject *); /* linkage=_ZN11CMeshSystem39UpdateTranslucencyFlagsOnMaterialChangeEP12CSceneObject */
	void CMeshSystem(class CMeshSystem *); /* linkage=_ZN11CMeshSystemC4Ev */
	virtual void ~CMeshSystem(class CMeshSystem *); /* linkage=_ZN11CMeshSystemD4Ev */
	virtual void GetRenderableBounds(class CMeshSystem *, const class CRenderMesh  *, class Vector &, class Vector &); /* linkage=_ZN11CMeshSystem19GetRenderableBoundsEPK11CRenderMeshR6VectorS4_ */
	virtual class CMeshInstance * CreateMeshInstance(class CMeshSystem *, class ISceneObjectDesc *, uint32, class CModelMeshHandle, int, enum ESceneObjectFlags, class CSceneObject *, MeshGroupMask_t, LODGroupMask_t, const int16  *); /* linkage=_ZN11CMeshSystem18CreateMeshInstanceEP16ISceneObjectDescj16CModelMeshHandlei17ESceneObjectFlagsP12CSceneObjectyhPKs */
	virtual bool CreateSceneObjectsFromMesh(class CMeshSystem *, class CModelMeshHandle, enum ESceneObjectFlags, class ISceneWorld *, class CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> > *, SceneObjectCreationFlags_t, int); /* linkage=_ZN11CMeshSystem26CreateSceneObjectsFromMeshE16CModelMeshHandle17ESceneObjectFlagsP11ISceneWorldP10CUtlVectorIP12CSceneObject10CUtlMemoryIS6_iEEji */
	virtual enum ESceneObjectFlags ComputeSceneObjectTranslucencyFlags(class CMeshSystem *, const class CRenderMesh  *, enum ESceneObjectFlags); /* linkage=_ZN11CMeshSystem35ComputeSceneObjectTranslucencyFlagsEPK11CRenderMesh17ESceneObjectFlags */
	virtual class IMeshRayTrace * FindOrCreateMeshRayTrace(class CMeshSystem *, const class CRenderMesh  *); /* linkage=_ZN11CMeshSystem24FindOrCreateMeshRayTraceEPK11CRenderMesh */
	virtual void GetToolsGeometryInfo(class CMeshSystem *, const class CRenderMesh  *, const class CUtlVector<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >  * *); /* linkage=_ZN11CMeshSystem20GetToolsGeometryInfoEPK11CRenderMeshPPK10CUtlVectorI18TraceDataForDraw_t10CUtlMemoryIS4_iEE */
	virtual class CSmartPtr<CRenderMesh, CRefCountAccessor> CreateRenderMesh(const class CMeshSystem  *, const char  *); /* linkage=_ZNK11CMeshSystem16CreateRenderMeshEPKc */
	virtual void InvalidateMeshRayTrace(const class CMeshSystem  *, class CRenderMesh *); /* linkage=_ZNK11CMeshSystem22InvalidateMeshRayTraceEP11CRenderMesh */
	void ClearOverridenInstanceMeshData(class CMeshSystem *, const class CRenderMesh  *); /* linkage=_ZN11CMeshSystem30ClearOverridenInstanceMeshDataEPK11CRenderMesh */
	class CMeshInstance * CreateMeshInstanceChain(class CMeshSystem *, HModel, class Vector &, class Vector &, enum RenderMeshTranslucencyType_t &, enum ESceneObjectFlags &, class ISceneObjectDesc *); /* linkage=_ZN11CMeshSystem23CreateMeshInstanceChainE11CWeakHandleI25InfoForResourceTypeCModelER6VectorS4_R28RenderMeshTranslucencyType_tR17ESceneObjectFlagsP16ISceneObjectDesc */
	void FindAllSceneObjectsWithModel(class CMeshSystem *, HModel, class CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> > &); /* linkage=_ZN11CMeshSystem28FindAllSceneObjectsWithModelE11CWeakHandleI25InfoForResourceTypeCModelER10CUtlVectorIP12CSceneObject10CUtlMemoryIS5_iEE */
	void FindAllMeshInstancesWithMesh(class CMeshSystem *, const class CRenderMesh  *, class CUtlVector<CMeshInstance*, CUtlMemory<CMeshInstance*, int> > &); /* linkage=_ZN11CMeshSystem28FindAllMeshInstancesWithMeshEPK11CRenderMeshR10CUtlVectorIP13CMeshInstance10CUtlMemoryIS5_iEE */
	bool UpdateDrawCallFlags(class CMeshSystem *, class CMaterialDrawDescriptor *, int, int *, bool); /* linkage=_ZN11CMeshSystem19UpdateDrawCallFlagsEP23CMaterialDrawDescriptoriPib */
	/* <4ebeed> meshsystem/sceneobjecthelpers.cpp:139 */
	enum RenderMeshTranslucencyType_t GetTranslucencyType(class CMeshSystem *, int, int); /* linkage=_ZN11CMeshSystem19GetTranslucencyTypeEii */
	/* <4ebf25> meshsystem/sceneobjecthelpers.cpp:153 */
	void UpdateTranslucencyAndDescForSceneObject(class CMeshSystem *, class CSceneObject *, enum ESceneObjectFlags, enum RenderMeshTranslucencyType_t); /* linkage=_ZN11CMeshSystem39UpdateTranslucencyAndDescForSceneObjectEP12CSceneObject17ESceneObjectFlags28RenderMeshTranslucencyType_t */
	/* <18e834> meshsystem/meshsystem.cpp:761 */
	enum RenderMeshTranslucencyType_t GetMeshTranslucencyType(class CMeshSystem *, const class CRenderMesh  *); /* linkage=_ZN11CMeshSystem23GetMeshTranslucencyTypeEPK11CRenderMesh */
	void UpdateTranslucencyFlagsForAllLoadedMeshes(class CMeshSystem *); /* linkage=_ZN11CMeshSystem41UpdateTranslucencyFlagsForAllLoadedMeshesEv */
	void DeleteSceneWorldInfo(class CMeshSystem *, class ISceneWorld *); /* linkage=_ZN11CMeshSystem20DeleteSceneWorldInfoEP11ISceneWorld */
	/* <18e888> meshsystem/meshsystem.cpp:782 */
	class ISceneObjectDesc * GetAnimatableDesc(class CMeshSystem *); /* linkage=_ZN11CMeshSystem17GetAnimatableDescEv */
	virtual HRenderMesh_Internal FindOrCreateProceduralMesh(class CMeshSystem *, const char  *, bool); /* linkage=_ZN11CMeshSystem26FindOrCreateProceduralMeshEPKcb */
};

