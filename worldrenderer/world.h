
//
// worldrenderer/world.h
//
//	referenced by: libengine2.so
//
//	functions: 18
//	classes: 5
//	structs: 2
//

// <00FE363C> worldrenderer/world.h:28
// member variables: 4
// struct size: 24
struct WorldNodeSortElement_t {
	float flDist; /* 0 4 */
	int nIndex; /* 4 4 */
	int nNodeID; /* 8 4 */
	CWorld * pWorld; /* 16 8 */
};

// <0101245F> worldrenderer/world.h:36
void WorldTraversal_t::~WorldTraversal_t()
{
} /* size: 0 */

// <01012443> worldrenderer/world.h:36
inline void WorldTraversal_t::~WorldTraversal_t()
{
} /* size: 0 */

// <0100F16E> worldrenderer/world.h:36
void WorldTraversal_t::WorldTraversal_t()
{
} /* size: 0 */

// <0100F152> worldrenderer/world.h:36
inline void WorldTraversal_t::WorldTraversal_t()
{
} /* size: 0 */

// <00FE4DAE> worldrenderer/world.h:36
// member functions: 3
// member variables: 11
// struct size: 144
struct WorldTraversal_t {
	Vector m_vEyePoint; /* 0 12 */
	WorldNodeFlags_t m_nSkipFlags; /* 12 4 */
	ESceneObjectFlags m_nObjectUpdateFlags; /* 16 8 */
	float m_flLODScale; /* 24 4 */
	float m_flFarPlane; /* 28 4 */
	CUtlVector<CWorldNode*, CUtlMemory<CWorldNode*, int> > m_nodesToRender; /* 32 32 */
	CUtlVector<int, CUtlMemory<int, int> > m_nodeIdsToRender; /* 64 32 */
	CUtlVector<int, CUtlMemory<int, int> > m_previousNodeIdsRendered; /* 96 32 */
	CWorldNode * m_pCurrentNode; /* 128 8 */
	uint32 m_nTraversalCount; /* 136 4 */
	bool m_bFullyLoaded; /* 140 1 */
	/* worldrenderer/world.h:50 */
	void Init(WorldTraversal_t* , Vector, WorldNodeFlags_t, ESceneObjectFlags, float, float);
	void WorldTraversal_t(WorldTraversal_t* );
	void ~WorldTraversal_t(WorldTraversal_t* );
};

// <0101FE3F> worldrenderer/world.h:50
inline void WorldTraversal_t::Init(Vector vEyePoint, WorldNodeFlags_t nSkipFlags, ESceneObjectFlags nObjectUpdateFlags, float flLODScale, float flFarPlane)
{
} /* size: 0 */

// <00FD3D10> worldrenderer/world.h:64
// member functions: 8
// member variables: 4
// class size: 64
class CWorldSceneObjectRef : public CRefCounted<CRefCountServiceBase<true, CRefMT> > {
public:
	/* class CRefCounted<CRefCountServiceBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	/* worldrenderer/world.cpp:29 */
	void CWorldSceneObjectRef(CWorldSceneObjectRef* );
	/* worldrenderer/world.h:69 */
	CSceneObject* SceneObject(CWorldSceneObjectRef* );
	uint32 m_nObjectId; /* 12 4 */
	CSceneObject * m_pSceneObject; /* 16 8 */
	CUtlVectorFixedGrowable<VertexBufferHandle_t__*, 1> m_extraVBHandles __attribute__((__aligned__(8))); /* 24 40 */
private:
	/* worldrenderer/world.h:80 */
	void CWorldSceneObjectRef(CWorldSceneObjectRef* , const CWorldSceneObjectRef& );
	/* worldrenderer/world.cpp:36 */
	virtual void ~CWorldSceneObjectRef(CWorldSceneObjectRef* );
	void CWorldSceneObjectRef(class CWorldSceneObjectRef *); /* linkage=_ZN20CWorldSceneObjectRefC4Ev */
	class CSceneObject * SceneObject(class CWorldSceneObjectRef *); /* linkage=_ZN20CWorldSceneObjectRef11SceneObjectEv */
	void CWorldSceneObjectRef(class CWorldSceneObjectRef *, const class CWorldSceneObjectRef  &); /* linkage=_ZN20CWorldSceneObjectRefC4ERKS_ */
	virtual void ~CWorldSceneObjectRef(class CWorldSceneObjectRef *); /* linkage=_ZN20CWorldSceneObjectRefD4Ev */
} __attribute__((__aligned__(8)));

// <0110EA60> worldrenderer/world.h:69
inline void CWorldSceneObjectRef::SceneObject()
{
} /* size: 0 */

// <00FE6770> worldrenderer/world.h:96
// member functions: 8
// member variable: 1
// class size: 104
class CWorldRendererBakedLightingInfo {
	/* worldrenderer/world.h:99 */
	void CWorldRendererBakedLightingInfo(CWorldRendererBakedLightingInfo* );
	/* worldrenderer/world.h:103 */
	void ~CWorldRendererBakedLightingInfo(CWorldRendererBakedLightingInfo* );
	/* worldrenderer/world.h:112 */
	bool Init(CWorldRendererBakedLightingInfo* , const BakedLightingInfo_t& );
	/* worldrenderer/world.h:113 */
	const CSceneSystemBakedLightingInfo* GetBakedLightingInfo(const CWorldRendererBakedLightingInfo* );
private:
	CSceneSystemBakedLightingInfo m_bakedLightingInfo __attribute__((__aligned__(8))); /* 0 104 */
	void CWorldRendererBakedLightingInfo(class CWorldRendererBakedLightingInfo *); /* linkage=_ZN31CWorldRendererBakedLightingInfoC4Ev */
	void ~CWorldRendererBakedLightingInfo(class CWorldRendererBakedLightingInfo *); /* linkage=_ZN31CWorldRendererBakedLightingInfoD4Ev */
	bool Init(class CWorldRendererBakedLightingInfo *, const class BakedLightingInfo_t  &); /* linkage=_ZN31CWorldRendererBakedLightingInfo4InitERK19BakedLightingInfo_t */
	const class CSceneSystemBakedLightingInfo  * GetBakedLightingInfo(const class CWorldRendererBakedLightingInfo  *); /* linkage=_ZNK31CWorldRendererBakedLightingInfo20GetBakedLightingInfoEv */
} __attribute__((__aligned__(8)));

// <0101FD02> worldrenderer/world.h:99
void CWorldRendererBakedLightingInfo::CWorldRendererBakedLightingInfo()
{
} /* size: 0 */

// <0101FCE9> worldrenderer/world.h:99
inline void CWorldRendererBakedLightingInfo::CWorldRendererBakedLightingInfo()
{
} /* size: 0 */

// <0101FCD2> worldrenderer/world.h:103
void CWorldRendererBakedLightingInfo::~CWorldRendererBakedLightingInfo()
{
} /* size: 0 */

// <0101FCB9> worldrenderer/world.h:103
inline void CWorldRendererBakedLightingInfo::~CWorldRendererBakedLightingInfo()
{
} /* size: 0 */

// <0110EA47> worldrenderer/world.h:113
inline void CWorldRendererBakedLightingInfo::GetBakedLightingInfo()
{
} /* size: 0 */

// <010124C6> worldrenderer/world.h:120
void CNodeSceneObjectData::~CNodeSceneObjectData()
{
} /* size: 0 */

// <010124AA> worldrenderer/world.h:120
inline void CNodeSceneObjectData::~CNodeSceneObjectData()
{
} /* size: 0 */

// <00FD3BCA> worldrenderer/world.h:120
// member functions: 8
// member variables: 8
// class size: 256
class CNodeSceneObjectData {
	/* worldrenderer/world.h:123 */
	void CNodeSceneObjectData(CNodeSceneObjectData* );
	/* worldrenderer/world.h:130 */
	void SetRenderingFlags(CNodeSceneObjectData* , ESceneObjectFlags, bool, bool, uint64);
	/* worldrenderer/world.h:131 */
	int GetNumSceneObjects(CNodeSceneObjectData* );
	CUtlVector<CWorldSceneObjectRef*, CUtlMemory<CWorldSceneObjectRef*, int> > m_sceneObjects; /* 0 32 */
	CUtlVector<VertexBufferHandle_t__*, CUtlMemory<VertexBufferHandle_t__*, int> > m_extraVBHandles; /* 32 32 */
	uint32 m_nLastVisibleTraversalCount; /* 64 4 */
	uint64 m_nLastLayerVisibilityFlags; /* 72 8 */
	bool m_bCreatedSceneObjects; /* 80 1 */
	CWorldRendererBakedLightingInfo m_nodeBakedLightingInfo __attribute__((__aligned__(8))); /* 88 104 */
	CUtlVector<signed char, CUtlMemory<signed char, int> > m_sceneObjectLayerIndices; /* 192 32 */
	CUtlVector<signed char, CUtlMemory<signed char, int> > m_overlayLayerIndices; /* 224 32 */
	void ~CNodeSceneObjectData(CNodeSceneObjectData* );
	void CNodeSceneObjectData(class CNodeSceneObjectData *); /* linkage=_ZN20CNodeSceneObjectDataC4Ev */
	void SetRenderingFlags(class CNodeSceneObjectData *, enum ESceneObjectFlags, bool, bool, uint64); /* linkage=_ZN20CNodeSceneObjectData17SetRenderingFlagsE17ESceneObjectFlagsbby */
	/* <1023d47> worldrenderer/world.cpp:183 */
	int GetNumSceneObjects(class CNodeSceneObjectData *); /* linkage=_ZN20CNodeSceneObjectData18GetNumSceneObjectsEv */
	void ~CNodeSceneObjectData(class CNodeSceneObjectData *); /* linkage=_ZN20CNodeSceneObjectDataD4Ev */
} __attribute__((__aligned__(8)));

// <010CB0DA> worldrenderer/world.h:120
// member functions: 7
// member variables: 8
// class size: 256
class CNodeSceneObjectData {
	/* worldrenderer/world.h:123 */
	void CNodeSceneObjectData(CNodeSceneObjectData* );
	/* worldrenderer/world.h:130 */
	void SetRenderingFlags(CNodeSceneObjectData* , ESceneObjectFlags, bool, bool, uint64);
	/* worldrenderer/world.h:131 */
	int GetNumSceneObjects(CNodeSceneObjectData* );
	CUtlVector<CWorldSceneObjectRef*, CUtlMemory<CWorldSceneObjectRef*, int> > m_sceneObjects; /* 0 32 */
	CUtlVector<VertexBufferHandle_t__*, CUtlMemory<VertexBufferHandle_t__*, int> > m_extraVBHandles; /* 32 32 */
	uint32 m_nLastVisibleTraversalCount; /* 64 4 */
	uint64 m_nLastLayerVisibilityFlags; /* 72 8 */
	bool m_bCreatedSceneObjects; /* 80 1 */
	CWorldRendererBakedLightingInfo m_nodeBakedLightingInfo __attribute__((__aligned__(8))); /* 88 104 */
	CUtlVector<signed char, CUtlMemory<signed char, int> > m_sceneObjectLayerIndices; /* 192 32 */
	CUtlVector<signed char, CUtlMemory<signed char, int> > m_overlayLayerIndices; /* 224 32 */
	void CNodeSceneObjectData(class CNodeSceneObjectData *); /* linkage=_ZN20CNodeSceneObjectDataC4Ev */
	void SetRenderingFlags(class CNodeSceneObjectData *, enum ESceneObjectFlags, bool, bool, uint64); /* linkage=_ZN20CNodeSceneObjectData17SetRenderingFlagsE17ESceneObjectFlagsbby */
	/* <1023d47> worldrenderer/world.cpp:183 */
	int GetNumSceneObjects(class CNodeSceneObjectData *); /* linkage=_ZN20CNodeSceneObjectData18GetNumSceneObjectsEv */
	void ~CNodeSceneObjectData(class CNodeSceneObjectData *); /* linkage=_ZN20CNodeSceneObjectDataD4Ev */
} __attribute__((__aligned__(8)));

// <0101FBED> worldrenderer/world.h:123
void CNodeSceneObjectData::CNodeSceneObjectData()
{
} /* size: 0 */

// <0101FBD4> worldrenderer/world.h:123
inline void CNodeSceneObjectData::CNodeSceneObjectData()
{
} /* size: 0 */

// <00FD2C75> worldrenderer/world.h:152
// member functions: 138
// member variables: 30
// vtable entries: 20
// class size: 544
class CWorld : public IWorld {
public:
	/* class IWorld <ancestor>; */ /* 0 8 */
	void CWorld(CWorld* , const CWorld& );
	/* worldrenderer/world.cpp:225 */
	virtual void Init(CWorld* , ISceneWorld* );
	/* worldrenderer/world.cpp:235 */
	virtual void CreateAndDispatchLoadRequests(CWorld* , const Vector& );
	/* worldrenderer/world.cpp:268 */
	virtual void Shutdown(CWorld* );
	/* worldrenderer/world.cpp:285 */
	virtual int GetNumNodes(CWorld* );
	/* worldrenderer/world.cpp:290 */
	virtual const WorldBuilderParams_t* GetBuilderParams(CWorld* );
	/* worldrenderer/world.cpp:312 */
	virtual bool IsAncestor(CWorld* , int, int);
	/* worldrenderer/world.cpp:334 */
	virtual const NodeData_t* GetNodeData(CWorld* , int);
	/* worldrenderer/world.cpp:342 */
	virtual AABB_t GetNodeBounds(CWorld* , int);
	/* worldrenderer/world.cpp:353 */
	virtual float GetNodeMinDistance(CWorld* , int);
	/* worldrenderer/world.cpp:361 */
	virtual void SetWorldTransform(CWorld* , const matrix3x4a_t& );
	/* worldrenderer/world.cpp:410 */
	virtual const matrix3x4a_t& GetWorldTransform(CWorld* );
	/* worldrenderer/world.cpp:415 */
	virtual void SetLoadSun(CWorld* , bool);
	/* worldrenderer/world.cpp:420 */
	virtual bool GetLoadSun(CWorld* );
	/* worldrenderer/world.cpp:426 */
	virtual void ClearOutstandingLoadRequests(CWorld* );
	/* worldrenderer/world.cpp:672 */
	virtual void PrecacheAllWorldNodes(CWorld* , WorldNodeFlags_t, ResourceManifestLoadBehavior_t, bool);
	/* worldrenderer/world.cpp:691 */
	bool GetCompileFingerprint(CWorld* , uint64* , uint64* );
	/* worldrenderer/world.cpp:771 */
	virtual const CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> >* GetEntityList(CWorld* , const char* );
	/* worldrenderer/world.cpp:752 */
	void LoadEntityLumpManifest(CWorld* , const char* );
	/* worldrenderer/world.cpp:757 */
	void ReleaseEntityLumpManifest(CWorld* , const char* );
	/* worldrenderer/world.cpp:805 */
	virtual void FindEntitiesByClassname(CWorld* , const char* , const char* , CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> >& );
	/* worldrenderer/world.cpp:762 */
	bool IsEntityManifestLoaded(CWorld* , const char* );
	/* worldrenderer/world.cpp:916 */
	void ForceBlockingLoad(CWorld* );
	/* worldrenderer/world.cpp:722 */
	int FindEntityLumpIndex(CWorld* , const char* );
	/* worldrenderer/world.cpp:745 */
	int GetEntityLumpCount(CWorld* );
	/* worldrenderer/world.cpp:188 */
	void AddEntityLumpAndChildren_R(CWorld* , HEntityLump);
	/* worldrenderer/world.cpp:211 */
	void EnsureEntityLumps(CWorld* );
	/* worldrenderer/world.h:198 */
	void AddEntityLump(CWorld* , HEntityLump);
	/* worldrenderer/world.cpp:704 */
	bool AreAllNodesCached(const CWorld* );
	/* worldrenderer/world.cpp:297 */
	virtual bool HasInvalidBakedLighting(const CWorld* );
	/* worldrenderer/world.cpp:302 */
	virtual bool HasPreviewBakedLighting(const CWorld* );
	/* worldrenderer/world.cpp:307 */
	virtual const CSceneSystemBakedLightingInfo* BakedLightingInfo(const CWorld* );
	/* worldrenderer/world.cpp:832 */
	void CWorld(CWorld* , HWorld, bool, bool, ResourceManifestLoadPriority_t);
	/* worldrenderer/world.cpp:898 */
	void ~CWorld(CWorld* );
	/* worldrenderer/world.cpp:539 */
	void BeginTraversal(CWorld* , WorldTraversalId_t);
	/* worldrenderer/world.cpp:558 */
	int BuildRenderList(CWorld* , WorldTraversalId_t, WorldNodeFlags_t, ESceneObjectFlags, const Vector& , float, float, float);
	/* worldrenderer/world.cpp:646 */
	void EndTraversal(CWorld* , WorldTraversalId_t);
	/* worldrenderer/world.h:306 */
	World_t* GetWorldData(CWorld* );
	/* worldrenderer/world.h:311 */
	const World_t* GetConstWorldData(const CWorld* );
	/* worldrenderer/world.cpp:925 */
	CWorldNode* GetNode(CWorld* , int);
	/* worldrenderer/world.cpp:940 */
	void UncacheAllWorldNodes(CWorld* );
	/* worldrenderer/world.cpp:952 */
	WorldTraversal_t* FindTraversal(CWorld* , WorldTraversalId_t);
	/* worldrenderer/world.cpp:963 */
	WorldTraversal_t* FindOrCreateTraversal(CWorld* , WorldTraversalId_t);
	/* worldrenderer/world.h:228 */
	int GetContainingLeafNode(CWorld* , int, Vector& );
	/* worldrenderer/world.cpp:977 */
	BuildListAction_t BuildLoadList(CWorld* , WorldTraversal_t* , int, float);
	/* worldrenderer/world.cpp:1037 */
	BuildListAction_t BuildRenderList_Internal(CWorld* , WorldTraversal_t* , int, float, int& );
	/* worldrenderer/world.cpp:1113 */
	bool NodeCanRender(CWorld* , int);
	/* worldrenderer/world.cpp:1137 */
	EWorldNodeStatusFlags_t GetNodeStatus(CWorld* , int);
	/* worldrenderer/world.cpp:1145 */
	void SetNodeStatus(CWorld* , int, EWorldNodeStatusFlags_t);
	/* worldrenderer/world.cpp:1153 */
	void ChangeNodeStatus(CWorld* , int, EWorldNodeStatusFlags_t);
	/* worldrenderer/world.cpp:1161 */
	void FixupNodeData(CWorld* , int);
	/* worldrenderer/world.cpp:1181 */
	bool IsNodeCached(CWorld* , int);
	/* worldrenderer/world.cpp:1197 */
	bool IsNodeRenderable(CWorld* , int);
	/* worldrenderer/world.cpp:1205 */
	void AddNodeToCacheList(CWorld* , int, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	/* worldrenderer/world.cpp:1238 */
	void CacheNodes(CWorld* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& , ResourceManifestLoadBehavior_t, bool);
	/* worldrenderer/world.cpp:1305 */
	void UncacheNode(CWorld* , int);
	/* worldrenderer/world.cpp:1270 */
	void OnWorldNodesLoaded(CWorld* , HResourceManifest);
	/* worldrenderer/world.cpp:1407 */
	int GetNumOutstandingLoadRequests(CWorld* );
	/* worldrenderer/world.cpp:1327 */
	bool GetVisibleBounds(CWorld* , Vector& , Vector& );
	/* worldrenderer/world.cpp:1334 */
	bool GetWorldBounds(CWorld* , Vector& , Vector& );
	/* worldrenderer/world.cpp:1352 */
	CWorldSceneObjectRef* FindObjectRef(CWorld* , uint32);
	/* worldrenderer/world.cpp:1372 */
	CWorldSceneObjectRef* InsertObjectRef(CWorld* , uint32, CSceneObject* );
	/* worldrenderer/world.cpp:1386 */
	void ReleaseSceneObjectRef(CWorld* , CWorldSceneObjectRef* );
	/* worldrenderer/world.cpp:444 */
	void GetLayerNames(CWorld* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* );
	/* worldrenderer/world.cpp:480 */
	bool SetLayerVisiblity(CWorld* , const char* , bool);
	/* worldrenderer/world.cpp:506 */
	uint64 GetNodeLayerVisibilityFlags(CWorld* , int);
	/* worldrenderer/world.cpp:519 */
	void GetWorldNodeSceneObjects(CWorld* , CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> >* );
	/* worldrenderer/world.h:264 */
	const CSceneSystemBakedLightingInfo* GetSceneSystemBakedLightingInfo(const CWorld* );
private:
	HWorldNodeStrong * m_pWorldNodeArray; /* 8 8 */
	CNodeSceneObjectData * m_pWorldNodeSceneObjectData; /* 16 8 */
	EWorldNodeStatusFlags_t * m_pWorldNodeStatus; /* 24 8 */
	HWorldStrong m_hWorld; /* 32 8 */
	World_t * m_pWorldData; /* 40 8 */
	CUtlVector<int, CUtlMemory<int, int> > m_nodeLoadList; /* 48 32 */
	CUtlVector<WorldNodeSortElement_t, CUtlMemory<WorldNodeSortElement_t, int> > m_sortedElements; /* 80 32 */
	matrix3x4a_t m_mWorldTransform __attribute__((__aligned__(16))); /* 112 48 */
	CWorldRendererBakedLightingInfo m_worldBakedLightingInfo __attribute__((__aligned__(8))); /* 160 104 */
	CUtlMap<long long unsigned int, WorldTraversal_t*, short unsigned int, bool (*)(long long unsigned int const&, long long unsigned int const&)> m_traversalMap; /* 264 40* /
	ISceneWorld * m_pSceneWorld; /* 304 8 */
	ResourceManifestLoadPriority_t m_priority; /* 312 4 */
	Vector m_vVisibleBoundsMin; /* 316 12 */
	Vector m_vVisibleBoundsMax; /* 328 12 */
	Vector m_vWorldBoundsMin; /* 340 12 */
	Vector m_vWorldBoundsMax; /* 352 12 */
	CUtlString m_worldPath; /* 368 8 */
	bool m_bLoadSun:1; /* 376: 0 1 */
	bool m_bVisibilityUpdated:1; /* 376: 1 1 */
	bool m_bVisibleBoundsValid:1; /* 376: 2 1 */
	bool m_bIsEmptyWorld:1; /* 376: 3 1 */
	bool m_bBlockUntilLoaded:1; /* 376: 4 1 */
	bool m_bPrecacheOnly:1; /* 376: 5 1 */
	bool m_bBakedLightingIsInvalid:1; /* 376: 6 1 */
	bool m_bBakedLightingIsPreview:1; /* 376: 7 1 */
	CUtlHash<CWorldSceneObjectRef*, bool (*)(CWorldSceneObjectRef* const&, CWorldSceneObjectRef* const&), unsigned int (*)(CWorldSceneObjectRef* const&)> m_sceneObjectRefs; /* 384 56* /
	CUtlVector<HResourceManifest__*, CUtlMemory<HResourceManifest__*, int> > m_pendingManifests; /* 440 32 */
	CUtlVector<CWeakHandle<InfoForResourceTypeCEntityLump>, CUtlMemory<CWeakHandle<InfoForResourceTypeCEntityLump>, int> > m_entityLumps; /* 472 32 */
	CUtlHashtable<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump>, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >, int> > m_uniqueIdToEntityLump; /* 504 32 */
	void CWorld(class CWorld *, const class CWorld  &); /* linkage=_ZN6CWorldC4ERKS_ */
	virtual void Init(class CWorld *, class ISceneWorld *); /* linkage=_ZN6CWorld4InitEP11ISceneWorld */
	virtual void CreateAndDispatchLoadRequests(class CWorld *, const class Vector  &); /* linkage=_ZN6CWorld29CreateAndDispatchLoadRequestsERK6Vector */
	virtual void Shutdown(class CWorld *); /* linkage=_ZN6CWorld8ShutdownEv */
	/* <102359d> worldrenderer/world.cpp:285 */
	virtual int GetNumNodes(class CWorld *); /* linkage=_ZN6CWorld11GetNumNodesEv */
	virtual const class WorldBuilderParams_t  * GetBuilderParams(class CWorld *); /* linkage=_ZN6CWorld16GetBuilderParamsEv */
	virtual bool IsAncestor(class CWorld *, int, int); /* linkage=_ZN6CWorld10IsAncestorEii */
	virtual const class NodeData_t  * GetNodeData(class CWorld *, int); /* linkage=_ZN6CWorld11GetNodeDataEi */
	virtual class AABB_t GetNodeBounds(class CWorld *, int); /* linkage=_ZN6CWorld13GetNodeBoundsEi */
	virtual float GetNodeMinDistance(class CWorld *, int); /* linkage=_ZN6CWorld18GetNodeMinDistanceEi */
	virtual void SetWorldTransform(class CWorld *, const class matrix3x4a_t  &); /* linkage=_ZN6CWorld17SetWorldTransformERK12matrix3x4a_t */
	virtual const class matrix3x4a_t  & GetWorldTransform(class CWorld *); /* linkage=_ZN6CWorld17GetWorldTransformEv */
	virtual void SetLoadSun(class CWorld *, bool); /* linkage=_ZN6CWorld10SetLoadSunEb */
	virtual bool GetLoadSun(class CWorld *); /* linkage=_ZN6CWorld10GetLoadSunEv */
	virtual void ClearOutstandingLoadRequests(class CWorld *); /* linkage=_ZN6CWorld28ClearOutstandingLoadRequestsEv */
	/* <10242b7> worldrenderer/world.cpp:672 */
	virtual void PrecacheAllWorldNodes(class CWorld *, enum WorldNodeFlags_t, enum ResourceManifestLoadBehavior_t, bool); /* linkage=_ZN6CWorld21PrecacheAllWorldNodesE16WorldNodeFlags_t30ResourceManifestLoadBehavior_tb */
	bool GetCompileFingerprint(class CWorld *, uint64 *, uint64 *); /* linkage=_ZN6CWorld21GetCompileFingerprintEPyS0_ */
	virtual const class CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> >  * GetEntityList(class CWorld *, const char  *); /* linkage=_ZN6CWorld13GetEntityListEPKc */
	/* <1023da1> worldrenderer/world.cpp:752 */
	void LoadEntityLumpManifest(class CWorld *, const char  *); /* linkage=_ZN6CWorld22LoadEntityLumpManifestEPKc */
	void ReleaseEntityLumpManifest(class CWorld *, const char  *); /* linkage=_ZN6CWorld25ReleaseEntityLumpManifestEPKc */
	virtual void FindEntitiesByClassname(class CWorld *, const char  *, const char  *, class CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> > &); /* linkage=_ZN6CWorld23FindEntitiesByClassnameEPKcS1_R10CUtlVectorIPK16CEntityKeyValues10CUtlMemoryIS5_iEE */
	bool IsEntityManifestLoaded(class CWorld *, const char  *); /* linkage=_ZN6CWorld22IsEntityManifestLoadedEPKc */
	void ForceBlockingLoad(class CWorld *); /* linkage=_ZN6CWorld17ForceBlockingLoadEv */
	int FindEntityLumpIndex(class CWorld *, const char  *); /* linkage=_ZN6CWorld19FindEntityLumpIndexEPKc */
	/* <1024aa7> worldrenderer/world.cpp:745 */
	int GetEntityLumpCount(class CWorld *); /* linkage=_ZN6CWorld18GetEntityLumpCountEv */
	void AddEntityLumpAndChildren_R(class CWorld *, HEntityLump); /* linkage=_ZN6CWorld26AddEntityLumpAndChildren_RE11CWeakHandleI30InfoForResourceTypeCEntityLumpE */
	/* <10247fb> worldrenderer/world.cpp:211 */
	void EnsureEntityLumps(class CWorld *); /* linkage=_ZN6CWorld17EnsureEntityLumpsEv */
	void AddEntityLump(class CWorld *, HEntityLump); /* linkage=_ZN6CWorld13AddEntityLumpE11CWeakHandleI30InfoForResourceTypeCEntityLumpE */
	bool AreAllNodesCached(const class CWorld  *); /* linkage=_ZNK6CWorld17AreAllNodesCachedEv */
	virtual bool HasInvalidBakedLighting(const class CWorld  *); /* linkage=_ZNK6CWorld23HasInvalidBakedLightingEv */
	virtual bool HasPreviewBakedLighting(const class CWorld  *); /* linkage=_ZNK6CWorld23HasPreviewBakedLightingEv */
	virtual const class CSceneSystemBakedLightingInfo  * BakedLightingInfo(const class CWorld  *); /* linkage=_ZNK6CWorld17BakedLightingInfoEv */
	void CWorld(class CWorld *, HWorld, bool, bool, enum ResourceManifestLoadPriority_t); /* linkage=_ZN6CWorldC4E11CWeakHandleI26InfoForResourceTypeWorld_tEbb30ResourceManifestLoadPriority_t */
	void ~CWorld(class CWorld *); /* linkage=_ZN6CWorldD4Ev */
	void BeginTraversal(class CWorld *, WorldTraversalId_t); /* linkage=_ZN6CWorld14BeginTraversalEy */
	int BuildRenderList(class CWorld *, WorldTraversalId_t, enum WorldNodeFlags_t, enum ESceneObjectFlags, const class Vector  &, float, float, float); /* linkage=_ZN6CWorld15BuildRenderListEy16WorldNodeFlags_t17ESceneObjectFlagsRK6Vectorfff */
	void EndTraversal(class CWorld *, WorldTraversalId_t); /* linkage=_ZN6CWorld12EndTraversalEy */
	class World_t * GetWorldData(class CWorld *); /* linkage=_ZN6CWorld12GetWorldDataEv */
	const class World_t  * GetConstWorldData(const class CWorld  *); /* linkage=_ZNK6CWorld17GetConstWorldDataEv */
	class CWorldNode * GetNode(class CWorld *, int); /* linkage=_ZN6CWorld7GetNodeEi */
	/* <1024223> worldrenderer/world.cpp:940 */
	void UncacheAllWorldNodes(class CWorld *); /* linkage=_ZN6CWorld20UncacheAllWorldNodesEv */
	class WorldTraversal_t * FindTraversal(class CWorld *, WorldTraversalId_t); /* linkage=_ZN6CWorld13FindTraversalEy */
	class WorldTraversal_t * FindOrCreateTraversal(class CWorld *, WorldTraversalId_t); /* linkage=_ZN6CWorld21FindOrCreateTraversalEy */
	int GetContainingLeafNode(class CWorld *, int, class Vector &); /* linkage=_ZN6CWorld21GetContainingLeafNodeEiR6Vector */
	enum BuildListAction_t BuildLoadList(class CWorld *, class WorldTraversal_t *, int, float); /* linkage=_ZN6CWorld13BuildLoadListEP16WorldTraversal_tif */
	enum BuildListAction_t BuildRenderList_Internal(class CWorld *, class WorldTraversal_t *, int, float, int &); /* linkage=_ZN6CWorld24BuildRenderList_InternalEP16WorldTraversal_tifRi */
	bool NodeCanRender(class CWorld *, int); /* linkage=_ZN6CWorld13NodeCanRenderEi */
	enum EWorldNodeStatusFlags_t GetNodeStatus(class CWorld *, int); /* linkage=_ZN6CWorld13GetNodeStatusEi */
	void SetNodeStatus(class CWorld *, int, enum EWorldNodeStatusFlags_t); /* linkage=_ZN6CWorld13SetNodeStatusEi23EWorldNodeStatusFlags_t */
	void ChangeNodeStatus(class CWorld *, int, enum EWorldNodeStatusFlags_t); /* linkage=_ZN6CWorld16ChangeNodeStatusEi23EWorldNodeStatusFlags_t */
	void FixupNodeData(class CWorld *, int); /* linkage=_ZN6CWorld13FixupNodeDataEi */
	/* <1023e6e> worldrenderer/world.cpp:1181 */
	bool IsNodeCached(class CWorld *, int); /* linkage=_ZN6CWorld12IsNodeCachedEi */
	bool IsNodeRenderable(class CWorld *, int); /* linkage=_ZN6CWorld16IsNodeRenderableEi */
	void AddNodeToCacheList(class CWorld *, int, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &); /* linkage=_ZN6CWorld18AddNodeToCacheListEiR10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEE */
	void CacheNodes(class CWorld *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &, enum ResourceManifestLoadBehavior_t, bool); /* linkage=_ZN6CWorld10CacheNodesER10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEE30ResourceManifestLoadBehavior_tb */
	void UncacheNode(class CWorld *, int); /* linkage=_ZN6CWorld11UncacheNodeEi */
	void OnWorldNodesLoaded(class CWorld *, HResourceManifest); /* linkage=_ZN6CWorld18OnWorldNodesLoadedEP19HResourceManifest__ */
	int GetNumOutstandingLoadRequests(class CWorld *); /* linkage=_ZN6CWorld29GetNumOutstandingLoadRequestsEv */
	bool GetVisibleBounds(class CWorld *, class Vector &, class Vector &); /* linkage=_ZN6CWorld16GetVisibleBoundsER6VectorS1_ */
	bool GetWorldBounds(class CWorld *, class Vector &, class Vector &); /* linkage=_ZN6CWorld14GetWorldBoundsER6VectorS1_ */
	class CWorldSceneObjectRef * FindObjectRef(class CWorld *, uint32); /* linkage=_ZN6CWorld13FindObjectRefEj */
	class CWorldSceneObjectRef * InsertObjectRef(class CWorld *, uint32, class CSceneObject *); /* linkage=_ZN6CWorld15InsertObjectRefEjP12CSceneObject */
	void ReleaseSceneObjectRef(class CWorld *, class CWorldSceneObjectRef *); /* linkage=_ZN6CWorld21ReleaseSceneObjectRefEP20CWorldSceneObjectRef */
	void GetLayerNames(class CWorld *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *); /* linkage=_ZN6CWorld13GetLayerNamesEP10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEE */
	bool SetLayerVisiblity(class CWorld *, const char  *, bool); /* linkage=_ZN6CWorld17SetLayerVisiblityEPKcb */
	/* <1023dd2> worldrenderer/world.cpp:506 */
	uint64 GetNodeLayerVisibilityFlags(class CWorld *, int); /* linkage=_ZN6CWorld27GetNodeLayerVisibilityFlagsEi */
	void GetWorldNodeSceneObjects(class CWorld *, class CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> > *); /* linkage=_ZN6CWorld24GetWorldNodeSceneObjectsEP10CUtlVectorIP12CSceneObject10CUtlMemoryIS2_iEE */
	const class CSceneSystemBakedLightingInfo  * GetSceneSystemBakedLightingInfo(const class CWorld  *); /* linkage=_ZNK6CWorld31GetSceneSystemBakedLightingInfoEv */
} __attribute__((__aligned__(16)));

// <00F1E22B> worldrenderer/world.h:207
void CWorld::CWorld(HWorld hWorld, bool bIsEmptyWorld, bool bPrecacheOnly, ResourceManifestLoadPriority_t priority)
{
} /* size: 0 */

// <00F1E337> worldrenderer/world.h:208
void CWorld::~CWorld()
{
} /* size: 0 */

// <0110EA2E> worldrenderer/world.h:264
inline void CWorld::GetSceneSystemBakedLightingInfo()
{
} /* size: 0 */

