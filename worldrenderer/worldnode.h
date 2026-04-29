
//
// worldrenderer/worldnode.h
//
//	referenced by: libengine2.so
//
//	functions: 6
//	classes: 3
//

// <00F731CE> worldrenderer/worldnode.h:21
// member functions: 38
// member variables: 2
// class size: 16
class CWorldNode {
	/* worldrenderer/worldnode.h:41 */
	struct CreateSceneObjectsParams_t {
		HModel m_hModel; /* 0 8 */
		matrix3x4_t m_mTransform; /* 8 48 */
		ESceneObjectFlags m_nRenderableFlags; /* 56 8 */
		ISceneWorld * m_pSceneWorld; /* 64 8 */
		const class SceneObject_t * m_pMapSceneObjectData; /* 72 8 */
		const class CSceneSystemBakedLightingInfo * m_pBakedLightingInfo; /* 80 8 */
		CWorld * m_pWorld; /* 88 8 */
		WorldNode_t * m_pWorldNodeData; /* 96 8 */
		CNodeSceneObjectData * m_pNodeData; /* 104 8 */
		CUtlVector<int, CUtlMemory<int, int> > * m_pStreamOverrides; /* 112 8 */
		CUtlVector<int, CUtlMemory<int, int> > * m_pMaterialOverrides; /* 120 8 */
		int m_nCubeMapPrecomputedHandshake; /* 128 4 */
		int m_nLightProbeVolumePrecomputedHandshake; /* 132 4 */
		int m_nBoundsGroupIndex; /* 136 4 */
		int8 m_nLayerIndex; /* 140 1 */
		bool m_bCreateSingleSceneObject; /* 141 1 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* worldrenderer/worldnode.h:24 */
	void CWorldNode(CWorldNode* , WorldNode_t* );
	/* worldrenderer/worldnode.h:25 */
	void ~CWorldNode(CWorldNode* );
	/* worldrenderer/worldnode.h:27 */
	void ApplyStreamOverrides(const CWorldNode* , CWorldSceneObjectRef** , int, CNodeSceneObjectData* , const ExtraVertexStreamOverride_t* , int* , int);
	/* worldrenderer/worldnode.h:29 */
	void CreateSceneObjects(CWorldNode* , CWorld* , int, ISceneWorld* );
	/* worldrenderer/worldnode.h:31 */
	void DestroySceneObjects(CWorldNode* , CWorld* , int);
	/* worldrenderer/worldnode.h:33 */
	bool SetLayerVisibility(CWorldNode* , const char* , bool);
	/* worldrenderer/worldnode.h:34 */
	uint64 GetLayerVisibilityFlags(const CWorldNode* );
	/* worldrenderer/worldnode.h:35 */
	int GetLayerIndexByName(CWorldNode* , const char* );
	/* worldrenderer/worldnode.h:37 */
	WorldNode_t* GetWorldNodeData(CWorldNode* );
	/* worldrenderer/worldnode.h:38 */
	void CreateProceduralModelsForOldMeshes(CWorldNode* );
private:
	/* worldrenderer/worldnode.h:62 */
	void ApplyMaterialOverridesToMeshChain(const CWorldNode* , CMeshInstance* , const CUtlVector<int, CUtlMemory<int, int> >& );
	/* worldrenderer/worldnode.h:64 */
	void SetSingleObjectParams(const CWorldNode* , CSceneObject* , const CreateSceneObjectsParams_t& );
	/* worldrenderer/worldnode.h:65 */
	int InsertObjectRefs(const CWorldNode* , CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> >& , const CreateSceneObjectsParams_t& );
	/* worldrenderer/worldnode.h:66 */
	void ApplyStreamOverrides(const CWorldNode* , int, int, const CreateSceneObjectsParams_t& );
	/* worldrenderer/worldnode.h:67 */
	void CreateSceneObjectsForModel(const CWorldNode* , const CreateSceneObjectsParams_t& );
	/* worldrenderer/worldnode.h:69 */
	void CreateExtraVertexStreams(CWorldNode* , CNodeSceneObjectData* );
	/* worldrenderer/worldnode.h:70 */
	void CreateSceneObjects(CWorldNode* , CNodeSceneObjectData* , CWorld* , ISceneWorld* );
	/* worldrenderer/worldnode.h:71 */
	void CreateAggregateSceneObjects(CWorldNode* , CNodeSceneObjectData* , CWorld* , ISceneWorld* );
	/* worldrenderer/worldnode.h:72 */
	void ApplyTags(const CWorldNode* , CSceneObject* );
	WorldNode_t * m_pWorldNodeData; /* 0 8 */
	uint64 m_LayerVisibilityFlags; /* 8 8 */
	void CWorldNode(class CWorldNode *, class WorldNode_t *); /* linkage=_ZN10CWorldNodeC4EP11WorldNode_t */
	void ~CWorldNode(class CWorldNode *); /* linkage=_ZN10CWorldNodeD4Ev */
	void ApplyStreamOverrides(const class CWorldNode  *, class CWorldSceneObjectRef * *, int, class CNodeSceneObjectData *, const class ExtraVertexStreamOverride_t  *, int *, int); /* linkage=_ZNK10CWorldNode20ApplyStreamOverridesEPP20CWorldSceneObjectRefiP20CNodeSceneObjectDataPK27ExtraVertexStreamOverride_tPii */
	void CreateSceneObjects(class CWorldNode *, class CWorld *, int, class ISceneWorld *); /* linkage=_ZN10CWorldNode18CreateSceneObjectsEP6CWorldiP11ISceneWorld */
	void DestroySceneObjects(class CWorldNode *, class CWorld *, int); /* linkage=_ZN10CWorldNode19DestroySceneObjectsEP6CWorldi */
	bool SetLayerVisibility(class CWorldNode *, const char  *, bool); /* linkage=_ZN10CWorldNode18SetLayerVisibilityEPKcb */
	uint64 GetLayerVisibilityFlags(const class CWorldNode  *); /* linkage=_ZNK10CWorldNode23GetLayerVisibilityFlagsEv */
	int GetLayerIndexByName(class CWorldNode *, const char  *); /* linkage=_ZN10CWorldNode19GetLayerIndexByNameEPKc */
	class WorldNode_t * GetWorldNodeData(class CWorldNode *); /* linkage=_ZN10CWorldNode16GetWorldNodeDataEv */
	void CreateProceduralModelsForOldMeshes(class CWorldNode *); /* linkage=_ZN10CWorldNode34CreateProceduralModelsForOldMeshesEv */
	void ApplyMaterialOverridesToMeshChain(const class CWorldNode  *, class CMeshInstance *, const class CUtlVector<int, CUtlMemory<int, int> >  &); /* linkage=_ZNK10CWorldNode33ApplyMaterialOverridesToMeshChainEP13CMeshInstanceRK10CUtlVectorIi10CUtlMemoryIiiEE */
	void SetSingleObjectParams(const class CWorldNode  *, class CSceneObject *, const class CreateSceneObjectsParams_t  &); /* linkage=_ZNK10CWorldNode21SetSingleObjectParamsEP12CSceneObjectRKNS_26CreateSceneObjectsParams_tE */
	int InsertObjectRefs(const class CWorldNode  *, class CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> > &, const class CreateSceneObjectsParams_t  &); /* linkage=_ZNK10CWorldNode16InsertObjectRefsER10CUtlVectorIP12CSceneObject10CUtlMemoryIS2_iEERKNS_26CreateSceneObjectsParams_tE */
	/* <1116850> worldrenderer/worldnode.cpp:277 */
	void ApplyStreamOverrides(const class CWorldNode  *, int, int, const class CreateSceneObjectsParams_t  &); /* linkage=_ZNK10CWorldNode20ApplyStreamOverridesEiiRKNS_26CreateSceneObjectsParams_tE */
	void CreateSceneObjectsForModel(const class CWorldNode  *, const class CreateSceneObjectsParams_t  &); /* linkage=_ZNK10CWorldNode26CreateSceneObjectsForModelERKNS_26CreateSceneObjectsParams_tE */
	void CreateExtraVertexStreams(class CWorldNode *, class CNodeSceneObjectData *); /* linkage=_ZN10CWorldNode24CreateExtraVertexStreamsEP20CNodeSceneObjectData */
	void CreateSceneObjects(class CWorldNode *, class CNodeSceneObjectData *, class CWorld *, class ISceneWorld *); /* linkage=_ZN10CWorldNode18CreateSceneObjectsEP20CNodeSceneObjectDataP6CWorldP11ISceneWorld */
	/* <1116636> worldrenderer/worldnode.cpp:604 */
	void CreateAggregateSceneObjects(class CWorldNode *, class CNodeSceneObjectData *, class CWorld *, class ISceneWorld *); /* linkage=_ZN10CWorldNode27CreateAggregateSceneObjectsEP20CNodeSceneObjectDataP6CWorldP11ISceneWorld */
	void ApplyTags(const class CWorldNode  *, class CSceneObject *); /* linkage=_ZNK10CWorldNode9ApplyTagsEP12CSceneObject */
};

// <01055441> worldrenderer/worldnode.h:21
// member functions: 39
// member variables: 2
// class size: 16
class CWorldNode {
	/* worldrenderer/worldnode.h:41 */
	struct CreateSceneObjectsParams_t {
		HModel m_hModel; /* 0 8 */
		matrix3x4_t m_mTransform; /* 8 48 */
		ESceneObjectFlags m_nRenderableFlags; /* 56 8 */
		ISceneWorld * m_pSceneWorld; /* 64 8 */
		const class SceneObject_t * m_pMapSceneObjectData; /* 72 8 */
		const class CSceneSystemBakedLightingInfo * m_pBakedLightingInfo; /* 80 8 */
		CWorld * m_pWorld; /* 88 8 */
		WorldNode_t * m_pWorldNodeData; /* 96 8 */
		CNodeSceneObjectData * m_pNodeData; /* 104 8 */
		CUtlVector<int, CUtlMemory<int, int> > * m_pStreamOverrides; /* 112 8 */
		CUtlVector<int, CUtlMemory<int, int> > * m_pMaterialOverrides; /* 120 8 */
		int m_nCubeMapPrecomputedHandshake; /* 128 4 */
		int m_nLightProbeVolumePrecomputedHandshake; /* 132 4 */
		int m_nBoundsGroupIndex; /* 136 4 */
		int8 m_nLayerIndex; /* 140 1 */
		bool m_bCreateSingleSceneObject; /* 141 1 */
		void CreateSceneObjectsParams_t(CreateSceneObjectsParams_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* worldrenderer/worldnode.h:24 */
	void CWorldNode(CWorldNode* , WorldNode_t* );
	/* worldrenderer/worldnode.h:25 */
	void ~CWorldNode(CWorldNode* );
	/* worldrenderer/worldnode.h:27 */
	void ApplyStreamOverrides(const CWorldNode* , CWorldSceneObjectRef** , int, CNodeSceneObjectData* , const ExtraVertexStreamOverride_t* , int* , int);
	/* worldrenderer/worldnode.h:29 */
	void CreateSceneObjects(CWorldNode* , CWorld* , int, ISceneWorld* );
	/* worldrenderer/worldnode.h:31 */
	void DestroySceneObjects(CWorldNode* , CWorld* , int);
	/* worldrenderer/worldnode.h:33 */
	bool SetLayerVisibility(CWorldNode* , const char* , bool);
	/* worldrenderer/worldnode.h:34 */
	uint64 GetLayerVisibilityFlags(const CWorldNode* );
	/* worldrenderer/worldnode.h:35 */
	int GetLayerIndexByName(CWorldNode* , const char* );
	/* worldrenderer/worldnode.h:37 */
	WorldNode_t* GetWorldNodeData(CWorldNode* );
	/* worldrenderer/worldnode.h:38 */
	void CreateProceduralModelsForOldMeshes(CWorldNode* );
private:
	/* worldrenderer/worldnode.h:62 */
	void ApplyMaterialOverridesToMeshChain(const CWorldNode* , CMeshInstance* , const CUtlVector<int, CUtlMemory<int, int> >& );
	/* worldrenderer/worldnode.h:64 */
	void SetSingleObjectParams(const CWorldNode* , CSceneObject* , const CreateSceneObjectsParams_t& );
	/* worldrenderer/worldnode.h:65 */
	int InsertObjectRefs(const CWorldNode* , CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> >& , const CreateSceneObjectsParams_t& );
	/* worldrenderer/worldnode.h:66 */
	void ApplyStreamOverrides(const CWorldNode* , int, int, const CreateSceneObjectsParams_t& );
	/* worldrenderer/worldnode.h:67 */
	void CreateSceneObjectsForModel(const CWorldNode* , const CreateSceneObjectsParams_t& );
	/* worldrenderer/worldnode.h:69 */
	void CreateExtraVertexStreams(CWorldNode* , CNodeSceneObjectData* );
	/* worldrenderer/worldnode.h:70 */
	void CreateSceneObjects(CWorldNode* , CNodeSceneObjectData* , CWorld* , ISceneWorld* );
	/* worldrenderer/worldnode.h:71 */
	void CreateAggregateSceneObjects(CWorldNode* , CNodeSceneObjectData* , CWorld* , ISceneWorld* );
	/* worldrenderer/worldnode.h:72 */
	void ApplyTags(const CWorldNode* , CSceneObject* );
	WorldNode_t * m_pWorldNodeData; /* 0 8 */
	uint64 m_LayerVisibilityFlags; /* 8 8 */
	void CWorldNode(class CWorldNode *, class WorldNode_t *); /* linkage=_ZN10CWorldNodeC4EP11WorldNode_t */
	void ~CWorldNode(class CWorldNode *); /* linkage=_ZN10CWorldNodeD4Ev */
	void ApplyStreamOverrides(const class CWorldNode  *, class CWorldSceneObjectRef * *, int, class CNodeSceneObjectData *, const class ExtraVertexStreamOverride_t  *, int *, int); /* linkage=_ZNK10CWorldNode20ApplyStreamOverridesEPP20CWorldSceneObjectRefiP20CNodeSceneObjectDataPK27ExtraVertexStreamOverride_tPii */
	void CreateSceneObjects(class CWorldNode *, class CWorld *, int, class ISceneWorld *); /* linkage=_ZN10CWorldNode18CreateSceneObjectsEP6CWorldiP11ISceneWorld */
	void DestroySceneObjects(class CWorldNode *, class CWorld *, int); /* linkage=_ZN10CWorldNode19DestroySceneObjectsEP6CWorldi */
	bool SetLayerVisibility(class CWorldNode *, const char  *, bool); /* linkage=_ZN10CWorldNode18SetLayerVisibilityEPKcb */
	uint64 GetLayerVisibilityFlags(const class CWorldNode  *); /* linkage=_ZNK10CWorldNode23GetLayerVisibilityFlagsEv */
	int GetLayerIndexByName(class CWorldNode *, const char  *); /* linkage=_ZN10CWorldNode19GetLayerIndexByNameEPKc */
	class WorldNode_t * GetWorldNodeData(class CWorldNode *); /* linkage=_ZN10CWorldNode16GetWorldNodeDataEv */
	void CreateProceduralModelsForOldMeshes(class CWorldNode *); /* linkage=_ZN10CWorldNode34CreateProceduralModelsForOldMeshesEv */
	void ApplyMaterialOverridesToMeshChain(const class CWorldNode  *, class CMeshInstance *, const class CUtlVector<int, CUtlMemory<int, int> >  &); /* linkage=_ZNK10CWorldNode33ApplyMaterialOverridesToMeshChainEP13CMeshInstanceRK10CUtlVectorIi10CUtlMemoryIiiEE */
	void SetSingleObjectParams(const class CWorldNode  *, class CSceneObject *, const class CreateSceneObjectsParams_t  &); /* linkage=_ZNK10CWorldNode21SetSingleObjectParamsEP12CSceneObjectRKNS_26CreateSceneObjectsParams_tE */
	int InsertObjectRefs(const class CWorldNode  *, class CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> > &, const class CreateSceneObjectsParams_t  &); /* linkage=_ZNK10CWorldNode16InsertObjectRefsER10CUtlVectorIP12CSceneObject10CUtlMemoryIS2_iEERKNS_26CreateSceneObjectsParams_tE */
	/* <1116850> worldrenderer/worldnode.cpp:277 */
	void ApplyStreamOverrides(const class CWorldNode  *, int, int, const class CreateSceneObjectsParams_t  &); /* linkage=_ZNK10CWorldNode20ApplyStreamOverridesEiiRKNS_26CreateSceneObjectsParams_tE */
	void CreateSceneObjectsForModel(const class CWorldNode  *, const class CreateSceneObjectsParams_t  &); /* linkage=_ZNK10CWorldNode26CreateSceneObjectsForModelERKNS_26CreateSceneObjectsParams_tE */
	void CreateExtraVertexStreams(class CWorldNode *, class CNodeSceneObjectData *); /* linkage=_ZN10CWorldNode24CreateExtraVertexStreamsEP20CNodeSceneObjectData */
	void CreateSceneObjects(class CWorldNode *, class CNodeSceneObjectData *, class CWorld *, class ISceneWorld *); /* linkage=_ZN10CWorldNode18CreateSceneObjectsEP20CNodeSceneObjectDataP6CWorldP11ISceneWorld */
	/* <1116636> worldrenderer/worldnode.cpp:604 */
	void CreateAggregateSceneObjects(class CWorldNode *, class CNodeSceneObjectData *, class CWorld *, class ISceneWorld *); /* linkage=_ZN10CWorldNode27CreateAggregateSceneObjectsEP20CNodeSceneObjectDataP6CWorldP11ISceneWorld */
	void ApplyTags(const class CWorldNode  *, class CSceneObject *); /* linkage=_ZNK10CWorldNode9ApplyTagsEP12CSceneObject */
};

// <01102E6C> worldrenderer/worldnode.h:41
void CreateSceneObjectsParams_t::CreateSceneObjectsParams_t()
{
} /* size: 0 */

// <01102E50> worldrenderer/worldnode.h:41
inline void CreateSceneObjectsParams_t::CreateSceneObjectsParams_t()
{
} /* size: 0 */

// <0101FEB0> worldrenderer/worldnode.h:80
inline void CWorldNode::GetLayerVisibilityFlags()
{
} /* size: 0 */

// <0101FE94> worldrenderer/worldnode.h:86
inline void CWorldNode::GetWorldNodeData()
{
} /* size: 0 */

// <010CB737> worldrenderer/worldnode.h:94
// member functions: 20
// member variable: 1
// vtable entries: 5
// class size: 32
class CWorldNodeManager : public CTypesafeIntrospectedToKV3TypeManager<431366240118, WorldNode_t> {
public:
	/* class CTypesafeIntrospectedToKV3TypeManager<431366240118, WorldNode_t> <ancestor>; */ /* 0 32 */
	void CWorldNodeManager(CWorldNodeManager* , const CWorldNodeManager& );
	/* worldrenderer/worldnode.cpp:864 */
	virtual CWorldNode* AllocateTypesafe(CWorldNodeManager* , WorldNode_t* , IKV3ResourceAllocatorUtils* );
	/* worldrenderer/worldnode.cpp:870 */
	virtual void DeallocateTypesafe(CWorldNodeManager* , CWorldNode* , IKV3ResourceDeallocatorUtils* );
	/* worldrenderer/worldnode.cpp:896 */
	virtual void AllocateResource(CWorldNodeManager* , ResourceHandle_t, ResourceId_t, const ResourceFileHeader_t* , IRD_RegisterResourceDataUtils* );
	/* worldrenderer/worldnode.cpp:875 */
	virtual bool WantsAsyncProcessData(const CWorldNodeManager* );
	/* worldrenderer/worldnode.cpp:880 */
	virtual unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> > AsyncProcessData(CWorldNodeManager* , ResourceHandle_t, const ResourceFileHeader_t* );
	/* worldrenderer/worldnode.cpp:937 */
	void CWorldNodeManager(CWorldNodeManager* );
	/* worldrenderer/worldnode.cpp:943 */
	virtual void ~CWorldNodeManager(CWorldNodeManager* );
	/* worldrenderer/worldnode.cpp:948 */
	void InstallResourceType(CWorldNodeManager* );
	/* worldrenderer/worldnode.cpp:953 */
	void RemoveResourceType(CWorldNodeManager* );
	void CWorldNodeManager(class CWorldNodeManager *, const class CWorldNodeManager  &); /* linkage=_ZN17CWorldNodeManagerC4ERKS_ */
	/* <1114143> worldrenderer/worldnode.cpp:864 */
	virtual class CWorldNode * AllocateTypesafe(class CWorldNodeManager *, class WorldNode_t *, class IKV3ResourceAllocatorUtils *); /* linkage=_ZN17CWorldNodeManager16AllocateTypesafeEP11WorldNode_tPN37CTypesafeIntrospectedToKV3TypeManagerILy431366240118ES0_E26IKV3ResourceAllocatorUtilsE */
	/* <1116730> worldrenderer/worldnode.cpp:870 */
	virtual void DeallocateTypesafe(class CWorldNodeManager *, class CWorldNode *, class IKV3ResourceDeallocatorUtils *); /* linkage=_ZN17CWorldNodeManager18DeallocateTypesafeEP10CWorldNodePN37CTypesafeIntrospectedToKV3TypeManagerILy431366240118E11WorldNode_tE28IKV3ResourceDeallocatorUtilsE */
	virtual void AllocateResource(class CWorldNodeManager *, ResourceHandle_t, class ResourceId_t, const class ResourceFileHeader_t  *, class IRD_RegisterResourceDataUtils *); /* linkage=_ZN17CWorldNodeManager16AllocateResourceEPK21ResourceBindingBase_t12ResourceId_tPK20ResourceFileHeader_tP29IRD_RegisterResourceDataUtils */
	virtual bool WantsAsyncProcessData(const class CWorldNodeManager  *); /* linkage=_ZNK17CWorldNodeManager21WantsAsyncProcessDataEv */
	virtual class unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> > AsyncProcessData(class CWorldNodeManager *, ResourceHandle_t, const class ResourceFileHeader_t  *); /* linkage=_ZN17CWorldNodeManager16AsyncProcessDataEPK21ResourceBindingBase_tPK20ResourceFileHeader_t */
	void CWorldNodeManager(class CWorldNodeManager *); /* linkage=_ZN17CWorldNodeManagerC4Ev */
	virtual void ~CWorldNodeManager(class CWorldNodeManager *); /* linkage=_ZN17CWorldNodeManagerD4Ev */
	void InstallResourceType(class CWorldNodeManager *); /* linkage=_ZN17CWorldNodeManager19InstallResourceTypeEv */
	void RemoveResourceType(class CWorldNodeManager *); /* linkage=_ZN17CWorldNodeManager18RemoveResourceTypeEv */
};

// <00F1DF7F> worldrenderer/worldnode.h:108
void CWorldNodeManager::CWorldNodeManager()
{
} /* size: 0 */

// <00F1DFE4> worldrenderer/worldnode.h:109
void CWorldNodeManager::~CWorldNodeManager()
{
} /* size: 0 */

