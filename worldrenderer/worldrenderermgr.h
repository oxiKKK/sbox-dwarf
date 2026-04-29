
//
// worldrenderer/worldrenderermgr.h
//
//	referenced by: libengine2.so
//
//	functions: 26
//	classes: 4
//	struct: 1
//

// <00F0FDD2> worldrenderer/worldrenderermgr.h:27
// member functions: 40
// member variables: 20
// vtable entries: 15
// class size: 144
class CSingleWorldRep : public IWorldReference {
public:
	/* class IWorldReference <ancestor>; */ /* 0 8 */
	void CSingleWorldRep(CSingleWorldRep* , const CSingleWorldRep& );
	/* worldrenderer/worldrenderermgr.cpp:47 */
	void CSingleWorldRep(CSingleWorldRep* );
	/* worldrenderer/worldrenderermgr.cpp:64 */
	void CSingleWorldRep(CSingleWorldRep* , const CreateWorldInfo_t& );
	/* worldrenderer/worldrenderermgr.cpp:103 */
	virtual int Release(CSingleWorldRep* );
	/* worldrenderer/worldrenderermgr.cpp:135 */
	virtual bool IsWorldLoaded(CSingleWorldRep* );
	/* worldrenderer/worldrenderermgr.cpp:155 */
	virtual bool IsErrorWorld(CSingleWorldRep* );
	/* worldrenderer/worldrenderermgr.cpp:193 */
	virtual bool IsMarkedForDeletion(CSingleWorldRep* );
	/* worldrenderer/worldrenderermgr.cpp:170 */
	virtual bool GetWorldBounds(CSingleWorldRep* , Vector& , Vector& );
	/* worldrenderer/worldrenderermgr.cpp:185 */
	virtual bool HasWorldGeometry(CSingleWorldRep* );
	/* worldrenderer/worldrenderermgr.cpp:146 */
	virtual void ForceBlockingLoad(CSingleWorldRep* );
	/* worldrenderer/worldrenderermgr.cpp:109 */
	virtual ISceneWorld* GetSceneWorld(CSingleWorldRep* );
	/* worldrenderer/worldrenderermgr.cpp:114 */
	virtual WorldGroupId_t GetWorldGroupId(CSingleWorldRep* );
	/* worldrenderer/worldrenderermgr.cpp:198 */
	virtual bool SetWorldLayerVisibility(CSingleWorldRep* , const char* , bool);
	/* worldrenderer/worldrenderermgr.cpp:119 */
	virtual void PrecacheAllWorldNodes(CSingleWorldRep* , WorldNodeFlags_t, bool);
	/* worldrenderer/worldrenderermgr.cpp:127 */
	virtual bool GetCompileFingerprint(CSingleWorldRep* , uint64* , uint64* );
	/* worldrenderer/worldrenderermgr.cpp:206 */
	virtual CVoxelVisibility* GetVoxelVisibility(CSingleWorldRep* );
	/* worldrenderer/worldrenderermgr.cpp:211 */
	virtual IWorld* GetGeometryWorld(CSingleWorldRep* );
	/* worldrenderer/worldrenderermgr.h:48 */
	virtual const char* GetFolder(CSingleWorldRep* );
	CUtlString m_worldName; /* 8 8 */
	CUtlString m_folder; /* 16 8 */
	HResourceManifest m_hWorldManifest; /* 24 8 */
	HWorldStrong m_hGeometryWorld; /* 32 8 */
	HWorldVisStrong m_hVis; /* 40 8 */
	CWorld * m_pGeometryWorld; /* 48 8 */
	CVoxelVisibility * m_pWorldVisiblity; /* 56 8 */
	matrix3x4a_t m_mWorldTransform __attribute__((__aligned__(16))); /* 64 48 */
	ISceneWorld * m_pSceneWorld; /* 112 8 */
	ResourceManifestLoadPriority_t m_priority; /* 120 4 */
	WorldGroupId_t m_worldGroupId; /* 124 4 */
	bool m_bLoaded:1; /* 128: 0 1 */
	bool m_bLoadVis:1; /* 128: 1 1 */
	bool m_bMarkedForDeletion:1; /* 128: 2 1 */
	bool m_bIsEmptyWorld:1; /* 128: 3 1 */
	bool m_bBlockUntilLoaded:1; /* 128: 4 1 */
	bool m_bPrecacheOnly:1; /* 128: 5 1 */
	bool m_bDisableNodeStreaming:1; /* 128: 6 1 */
	bool m_bOwnsSceneWorld:1; /* 128: 7 1 */
private:
	/* worldrenderer/worldrenderermgr.cpp:93 */
	void ~CSingleWorldRep(CSingleWorldRep* );
	/* worldrenderer/worldrenderermgr.h:78 */
	const CSingleWorldRep& operator=(CSingleWorldRep* , const CSingleWorldRep& );
	void CSingleWorldRep(class CSingleWorldRep *, const class CSingleWorldRep  &); /* linkage=_ZN15CSingleWorldRepC4ERKS_ */
	void CSingleWorldRep(class CSingleWorldRep *); /* linkage=_ZN15CSingleWorldRepC4Ev */
	void CSingleWorldRep(class CSingleWorldRep *, const class CreateWorldInfo_t  &); /* linkage=_ZN15CSingleWorldRepC4ERK17CreateWorldInfo_t */
	virtual int Release(class CSingleWorldRep *); /* linkage=_ZN15CSingleWorldRep7ReleaseEv */
	/* <f43eea> worldrenderer/worldrenderermgr.cpp:135 */
	virtual bool IsWorldLoaded(class CSingleWorldRep *); /* linkage=_ZN15CSingleWorldRep13IsWorldLoadedEv */
	/* <f44481> worldrenderer/worldrenderermgr.cpp:155 */
	virtual bool IsErrorWorld(class CSingleWorldRep *); /* linkage=_ZN15CSingleWorldRep12IsErrorWorldEv */
	virtual bool IsMarkedForDeletion(class CSingleWorldRep *); /* linkage=_ZN15CSingleWorldRep19IsMarkedForDeletionEv */
	virtual bool GetWorldBounds(class CSingleWorldRep *, class Vector &, class Vector &); /* linkage=_ZN15CSingleWorldRep14GetWorldBoundsER6VectorS1_ */
	virtual bool HasWorldGeometry(class CSingleWorldRep *); /* linkage=_ZN15CSingleWorldRep16HasWorldGeometryEv */
	virtual void ForceBlockingLoad(class CSingleWorldRep *); /* linkage=_ZN15CSingleWorldRep17ForceBlockingLoadEv */
	virtual class ISceneWorld * GetSceneWorld(class CSingleWorldRep *); /* linkage=_ZN15CSingleWorldRep13GetSceneWorldEv */
	/* <f43ebf> worldrenderer/worldrenderermgr.cpp:114 */
	virtual WorldGroupId_t GetWorldGroupId(class CSingleWorldRep *); /* linkage=_ZN15CSingleWorldRep15GetWorldGroupIdEv */
	virtual bool SetWorldLayerVisibility(class CSingleWorldRep *, const char  *, bool); /* linkage=_ZN15CSingleWorldRep23SetWorldLayerVisibilityEPKcb */
	virtual void PrecacheAllWorldNodes(class CSingleWorldRep *, enum WorldNodeFlags_t, bool); /* linkage=_ZN15CSingleWorldRep21PrecacheAllWorldNodesE16WorldNodeFlags_tb */
	virtual bool GetCompileFingerprint(class CSingleWorldRep *, uint64 *, uint64 *); /* linkage=_ZN15CSingleWorldRep21GetCompileFingerprintEPyS0_ */
	virtual class CVoxelVisibility * GetVoxelVisibility(class CSingleWorldRep *); /* linkage=_ZN15CSingleWorldRep18GetVoxelVisibilityEv */
	virtual class IWorld * GetGeometryWorld(class CSingleWorldRep *); /* linkage=_ZN15CSingleWorldRep16GetGeometryWorldEv */
	virtual const char  * GetFolder(class CSingleWorldRep *); /* linkage=_ZN15CSingleWorldRep9GetFolderEv */
	void ~CSingleWorldRep(class CSingleWorldRep *); /* linkage=_ZN15CSingleWorldRepD4Ev */
	const class CSingleWorldRep  & operator=(class CSingleWorldRep *, const class CSingleWorldRep  &); /* linkage=_ZN15CSingleWorldRepaSERKS_ */
} __attribute__((__aligned__(16)));

// <00F3DA31> worldrenderer/worldrenderermgr.h:48
// function calls: 2
void CSingleWorldRep::GetFolder()
{
	CUtlString::Get(); // 99
	CUtlString::String(); // 50
} /* size: 23, inline expansions: 2 (36 bytes) */

// <00F0F5DC> worldrenderer/worldrenderermgr.h:86
// member functions: 4
// member variables: 2
// struct size: 16
struct SingleWorldEntityLump_t {
	/* worldrenderer/worldrenderermgr.h:88 */
	void SingleWorldEntityLump_t(SingleWorldEntityLump_t* );
	/* worldrenderer/worldrenderermgr.h:91 */
	void SingleWorldEntityLump_t(SingleWorldEntityLump_t* , const SingleWorldEntityLump_t& );
	/* worldrenderer/worldrenderermgr.h:92 */
	SingleWorldEntityLump_t& operator=(SingleWorldEntityLump_t* , const SingleWorldEntityLump_t& );
	/* worldrenderer/worldrenderermgr.h:93 */
	void ~SingleWorldEntityLump_t(SingleWorldEntityLump_t* );
	CUtlString m_worldName; /* 0 8 */
	HEntityLumpStrong m_hEntityLump; /* 8 8 */
};

// <00F3D790> worldrenderer/worldrenderermgr.h:99
void CVoxelVisibilityTypeManager::CVoxelVisibilityTypeManager()
{
} /* size: 0 */

// <00F3D774> worldrenderer/worldrenderermgr.h:99
inline void CVoxelVisibilityTypeManager::CVoxelVisibilityTypeManager()
{
} /* size: 0 */

// <00F18CEA> worldrenderer/worldrenderermgr.h:99
// member functions: 12
// member variable: 1
// vtable entries: 2
// class size: 8
class CVoxelVisibilityTypeManager : public IResourceTypeManager {
public:
	/* class IResourceTypeManager <ancestor>; */ /* 0 8 */
	void ~CVoxelVisibilityTypeManager(CVoxelVisibilityTypeManager* );
	void CVoxelVisibilityTypeManager(CVoxelVisibilityTypeManager* , CVoxelVisibilityTypeManager& );
	void CVoxelVisibilityTypeManager(CVoxelVisibilityTypeManager* , const CVoxelVisibilityTypeManager& );
	void CVoxelVisibilityTypeManager(CVoxelVisibilityTypeManager* );
	/* worldrenderer/worldrenderermgr.cpp:218 */
	virtual void AllocateResource(CVoxelVisibilityTypeManager* , ResourceHandle_t, ResourceId_t, const ResourceFileHeader_t* , IRD_RegisterResourceDataUtils* );
	/* worldrenderer/worldrenderermgr.cpp:346 */
	virtual void DeallocateResource(CVoxelVisibilityTypeManager* , void* , IResourceDeallocatorUtils* );
	void ~CVoxelVisibilityTypeManager(class CVoxelVisibilityTypeManager *); /* linkage=_ZN27CVoxelVisibilityTypeManagerD4Ev */
	void CVoxelVisibilityTypeManager(class CVoxelVisibilityTypeManager *, class CVoxelVisibilityTypeManager &); /* linkage=_ZN27CVoxelVisibilityTypeManagerC4EOS_ */
	void CVoxelVisibilityTypeManager(class CVoxelVisibilityTypeManager *, const class CVoxelVisibilityTypeManager  &); /* linkage=_ZN27CVoxelVisibilityTypeManagerC4ERKS_ */
	void CVoxelVisibilityTypeManager(class CVoxelVisibilityTypeManager *); /* linkage=_ZN27CVoxelVisibilityTypeManagerC4Ev */
	virtual void AllocateResource(class CVoxelVisibilityTypeManager *, ResourceHandle_t, class ResourceId_t, const class ResourceFileHeader_t  *, class IRD_RegisterResourceDataUtils *); /* linkage=_ZN27CVoxelVisibilityTypeManager16AllocateResourceEPK21ResourceBindingBase_t12ResourceId_tPK20ResourceFileHeader_tP29IRD_RegisterResourceDataUtils */
	virtual void DeallocateResource(class CVoxelVisibilityTypeManager *, void *, class IResourceDeallocatorUtils *); /* linkage=_ZN27CVoxelVisibilityTypeManager18DeallocateResourceEPvP25IResourceDeallocatorUtils */
};

// <00F3D829> worldrenderer/worldrenderermgr.h:111
void CWorldManager::CWorldManager()
{
} /* size: 0 */

// <00F3D80D> worldrenderer/worldrenderermgr.h:111
inline void CWorldManager::CWorldManager()
{
} /* size: 0 */

// <00F3D7F6> worldrenderer/worldrenderermgr.h:111
void CWorldManager::~CWorldManager()
{
} /* size: 0 */

// <00F3D7DA> worldrenderer/worldrenderermgr.h:111
inline void CWorldManager::~CWorldManager()
{
} /* size: 0 */

// <00F1821A> worldrenderer/worldrenderermgr.h:111
// member functions: 14
// member variable: 1
// vtable entries: 3
// class size: 32
class CWorldManager : public CDefaultIntrospectedToKV3TypeManager<431316170614, World_t> {
public:
	/* class CDefaultIntrospectedToKV3TypeManager<431316170614, World_t> <ancestor>; */ /* 0 32 */
	void ~CWorldManager(CWorldManager* );
	void CWorldManager(CWorldManager* , CWorldManager& );
	void CWorldManager(CWorldManager* , const CWorldManager& );
	void CWorldManager(CWorldManager* );
	/* worldrenderer/worldrenderermgr.cpp:1470 */
	virtual void AllocateResource(CWorldManager* , ResourceHandle_t, ResourceId_t, const ResourceFileHeader_t* , IRD_RegisterResourceDataUtils* );
	/* worldrenderer/worldrenderermgr.cpp:1452 */
	virtual unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> > AsyncProcessData(CWorldManager* , ResourceHandle_t, const ResourceFileHeader_t* );
	/* worldrenderer/worldrenderermgr.cpp:1445 */
	virtual bool WantsAsyncProcessData(const CWorldManager* );
	void ~CWorldManager(class CWorldManager *); /* linkage=_ZN13CWorldManagerD4Ev */
	void CWorldManager(class CWorldManager *, class CWorldManager &); /* linkage=_ZN13CWorldManagerC4EOS_ */
	void CWorldManager(class CWorldManager *, const class CWorldManager  &); /* linkage=_ZN13CWorldManagerC4ERKS_ */
	void CWorldManager(class CWorldManager *); /* linkage=_ZN13CWorldManagerC4Ev */
	virtual void AllocateResource(class CWorldManager *, ResourceHandle_t, class ResourceId_t, const class ResourceFileHeader_t  *, class IRD_RegisterResourceDataUtils *); /* linkage=_ZN13CWorldManager16AllocateResourceEPK21ResourceBindingBase_t12ResourceId_tPK20ResourceFileHeader_tP29IRD_RegisterResourceDataUtils */
	virtual class unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> > AsyncProcessData(class CWorldManager *, ResourceHandle_t, const class ResourceFileHeader_t  *); /* linkage=_ZN13CWorldManager16AsyncProcessDataEPK21ResourceBindingBase_tPK20ResourceFileHeader_t */
	virtual bool WantsAsyncProcessData(const class CWorldManager  *); /* linkage=_ZNK13CWorldManager21WantsAsyncProcessDataEv */
};

// <00F3C607> worldrenderer/worldrenderermgr.h:125
// function calls: 66
void CWorldRendererMgr::CWorldRendererMgr()
{
	IAppSystem::IAppSystem(); // 91
	IWorldRendererMgr::IWorldRendererMgr(); // 120
	CBaseAppSystem<IWorldRendererMgr>::CBaseAppSystem(); // 171
	CTier0AppSystem<IWorldRendererMgr, 0>::CTier0AppSystem(); // 225
	CTier1AppSystem<IWorldRendererMgr, 0>::CTier1AppSystem(); // 48
	CUtlMemory<ResourceManifestDesc_t::ValidateGrowSize(); // 475
	CUtlMemory<ResourceManifestDesc_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ResourceManifestDesc_t::ResetDbgInfo(); // 530
	CUtlVectorBase<ResourceManifestDesc_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ResourceManifestDesc_t::CUtlVector(); // 48
	CTier2AppSystem<IWorldRendererMgr, 0>::CTier2AppSystem(); // 18
	CTier3AppSystem<IWorldRendererMgr, 0>::CTier3AppSystem(); // 125
	ICommandCallback::ICommandCallback(); // 556
	ICommandCompletionCallback::ICommandCompletionCallback(); // 556
	CConCommandMemberAccessor<CWorldRendererMgr>::CConCommandMemberAccessor(
					CWorldRendererMgr* pOwner,
					const char* pName,
					FnMemberCommandCallback_t callback,
					const char* pHelpString,
					ConVarFlags_t flags,
					FnMemberCommandCompletionCallback_t completionFunc);  // 242
	CConCommandMemberAccessor<CWorldRendererMgr>::SetOwner(
		CWorldRendererMgr* pOwner);  // 242
	CCommandMemberInitializer_Cmd_world_layer_list::CCommandMemberInitializer_Cmd_world_layer_list(); // 125
	CDefaultIntrospectedToKV3TypeManager<431316170614, World_t>::CDefaultIntrospectedToKV3TypeManager(); // 111
	CWorldManager::CWorldManager(); // 125
	CTypesafeIntrospectedToKV3TypeManager<495874631030, PermEntityLumpData_t>::CTypesafeIntrospectedToKV3TypeManager(); // 46
	CEntityMgr::CEntityMgr(); // 125
	IResourceTypeManager::IResourceTypeManager(); // 99
	CVoxelVisibilityTypeManager::CVoxelVisibilityTypeManager(); // 125
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 30
	CUtlStringMap<int, CUtlSymbolTable>::CUtlStringMap(
			bool caseInsensitive,
			int growSize,
			int initSize);  // 125
	CUtlVectorBase<CSingleWorldRep::ResetDbgInfo(); // 530
	CUtlMemory<CSingleWorldRep::ValidateGrowSize(); // 475
	CUtlMemory<CSingleWorldRep::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CSingleWorldRep::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CSingleWorldRep::CUtlVector(); // 125
	CUtlVectorBase<CSingleWorldRep::ResetDbgInfo(); // 530
	CUtlMemory<CSingleWorldRep::ValidateGrowSize(); // 475
	CUtlMemory<CSingleWorldRep::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CSingleWorldRep::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CSingleWorldRep::CUtlVector(); // 125
	CUtlMemory<CSingleWorldRep::ValidateGrowSize(); // 475
	CUtlMemory<CSingleWorldRep::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CSingleWorldRep::ResetDbgInfo(); // 530
	CUtlVectorBase<CSingleWorldRep::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CSingleWorldRep::CUtlVector(); // 125
	CUtlMemory<SingleWorldEntityLump_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<SingleWorldEntityLump_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<SingleWorldEntityLump_t, CUtlMemory<SingleWorldEntityLump_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<SingleWorldEntityLump_t, CUtlMemory<SingleWorldEntityLump_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<SingleWorldEntityLump_t, CUtlMemory<SingleWorldEntityLump_t, int> >::CUtlVector(); // 125
	CUtlMemory<CWorldRendererMgr::WindEntry_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CWorldRendererMgr::WindEntry_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CWorldRendererMgr::WindEntry_t, CUtlMemory<CWorldRendererMgr::WindEntry_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CWorldRendererMgr::WindEntry_t, CUtlMemory<CWorldRendererMgr::WindEntry_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CWorldRendererMgr::WindEntry_t, CUtlMemory<CWorldRendererMgr::WindEntry_t, int> >::CUtlVector(); // 125
	Vector::Vector(); // 125
	ICommandCallback::ICommandCallback(); // 556
	ICommandCompletionCallback::ICommandCompletionCallback(); // 556
	CConCommandMemberAccessor<CWorldRendererMgr>::CConCommandMemberAccessor(
					CWorldRendererMgr* pOwner,
					const char* pName,
					FnMemberCommandCallback_t callback,
					const char* pHelpString,
					ConVarFlags_t flags,
					FnMemberCommandCompletionCallback_t completionFunc);  // 243
	CConCommandMemberAccessor<CWorldRendererMgr>::SetOwner(
		CWorldRendererMgr* pOwner);  // 243
	CCommandMemberInitializer_Cmd_world_layer_set_visible::CCommandMemberInitializer_Cmd_world_layer_set_visible(); // 125
	ICommandCallback::ICommandCallback(); // 556
	ICommandCompletionCallback::ICommandCompletionCallback(); // 556
	CConCommandMemberAccessor<CWorldRendererMgr>::CConCommandMemberAccessor(
					CWorldRendererMgr* pOwner,
					const char* pName,
					FnMemberCommandCallback_t callback,
					const char* pHelpString,
					ConVarFlags_t flags,
					FnMemberCommandCompletionCallback_t completionFunc);  // 244
	CConCommandMemberAccessor<CWorldRendererMgr>::SetOwner(
		CWorldRendererMgr* pOwner);  // 244
	CCommandMemberInitializer_Cmd_world_dump_loaded_worlds::CCommandMemberInitializer_Cmd_world_dump_loaded_worlds(); // 125
} /* size: 844, inline expansions: 66 (1654 bytes) */

// <00F3C5EB> worldrenderer/worldrenderermgr.h:125
inline void CWorldRendererMgr::CWorldRendererMgr()
{
} /* size: 0 */

// <00F23444> worldrenderer/worldrenderermgr.h:125
// variable: 1
// function calls: 88
void CWorldRendererMgr::~CWorldRendererMgr()
{
	CConCommandMemberAccessor<CWorldRendererMgr>::~CConCommandMemberAccessor(); // 244
	CCommandMemberInitializer_Cmd_world_dump_loaded_worlds::~CCommandMemberInitializer_Cmd_world_dump_loaded_worlds(); // 125
	CConCommandMemberAccessor<CWorldRendererMgr>::~CConCommandMemberAccessor(); // 243
	CCommandMemberInitializer_Cmd_world_layer_set_visible::~CCommandMemberInitializer_Cmd_world_layer_set_visible(); // 125
	CConCommandMemberAccessor<CWorldRendererMgr>::~CConCommandMemberAccessor(); // 242
	CCommandMemberInitializer_Cmd_world_layer_list::~CCommandMemberInitializer_Cmd_world_layer_list(); // 125
	CUtlVectorBase<CWorldRendererMgr::WindEntry_t, CUtlMemory<CWorldRendererMgr::WindEntry_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CWorldRendererMgr::WindEntry_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CWorldRendererMgr::WindEntry_t, int>::Purge(); // 903
	CUtlMemory<CWorldRendererMgr::WindEntry_t, int>::Purge(); // 1799
	CUtlVectorBase<CWorldRendererMgr::WindEntry_t, CUtlMemory<CWorldRendererMgr::WindEntry_t, int> >::Purge(); // 560
	ValidateAlignment<CWorldRendererMgr::WindEntry_t>(void); // 508
	CUtlMemory<CWorldRendererMgr::WindEntry_t, int>::Purge(); // 510
	CUtlMemory<CWorldRendererMgr::WindEntry_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CWorldRendererMgr::WindEntry_t, CUtlMemory<CWorldRendererMgr::WindEntry_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CWorldRendererMgr::WindEntry_t, CUtlMemory<CWorldRendererMgr::WindEntry_t, int> >::~CUtlVector(); // 125
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 15
	CUtlStringMap<int, CUtlSymbolTable>::~CUtlStringMap(); // 125
	{
		int i; // 1721
		CUtlMemory<SingleWorldEntityLump_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<SingleWorldEntityLump_t, CUtlMemory<SingleWorldEntityLump_t, int> >::Element(
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCEntityLump>::~CStrongHandle(); // 731
		CUtlString::~CUtlString(); // 731
		SingleWorldEntityLump_t::~SingleWorldEntityLump_t(); // 1526
		Destruct<SingleWorldEntityLump_t>(SingleWorldEntityLump_t* pMemory); // 1723
	}
	CUtlVectorBase<SingleWorldEntityLump_t, CUtlMemory<SingleWorldEntityLump_t, int> >::RemoveAll(); // 1798
	CUtlMemory<SingleWorldEntityLump_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<SingleWorldEntityLump_t, int>::Purge(); // 903
	CUtlMemory<SingleWorldEntityLump_t, int>::Purge(); // 1799
	CUtlVectorBase<SingleWorldEntityLump_t, CUtlMemory<SingleWorldEntityLump_t, int> >::Purge(); // 560
	ValidateAlignment<SingleWorldEntityLump_t>(void); // 508
	CUtlMemory<SingleWorldEntityLump_t, int>::Purge(); // 510
	CUtlMemory<SingleWorldEntityLump_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<SingleWorldEntityLump_t, CUtlMemory<SingleWorldEntityLump_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<SingleWorldEntityLump_t, CUtlMemory<SingleWorldEntityLump_t, int> >::~CUtlVector(); // 125
	CUtlVectorBase<CSingleWorldRep::RemoveAll(); // 1798
	CUtlMemory<CSingleWorldRep::IsExternallyAllocated(); // 905
	CUtlMemory<CSingleWorldRep::Purge(); // 903
	CUtlMemory<CSingleWorldRep::Purge(); // 1799
	CUtlVectorBase<CSingleWorldRep::Purge(); // 560
	ValidateAlignment<CSingleWorldRep*>(void); // 508
	CUtlMemory<CSingleWorldRep::Purge(); // 510
	CUtlMemory<CSingleWorldRep::~CUtlMemory(); // 562
	CUtlVectorBase<CSingleWorldRep::~CUtlVectorBase(); // 410
	CUtlVector<CSingleWorldRep::~CUtlVector(); // 125
	CUtlVectorBase<CSingleWorldRep::RemoveAll(); // 1798
	CUtlMemory<CSingleWorldRep::IsExternallyAllocated(); // 905
	CUtlMemory<CSingleWorldRep::Purge(); // 903
	CUtlMemory<CSingleWorldRep::Purge(); // 1799
	CUtlVectorBase<CSingleWorldRep::Purge(); // 560
	ValidateAlignment<CSingleWorldRep*>(void); // 508
	CUtlMemory<CSingleWorldRep::Purge(); // 510
	CUtlMemory<CSingleWorldRep::~CUtlMemory(); // 562
	CUtlVectorBase<CSingleWorldRep::~CUtlVectorBase(); // 410
	CUtlVector<CSingleWorldRep::~CUtlVector(); // 125
	CUtlVectorBase<CSingleWorldRep::RemoveAll(); // 1798
	CUtlMemory<CSingleWorldRep::IsExternallyAllocated(); // 905
	CUtlMemory<CSingleWorldRep::Purge(); // 903
	CUtlMemory<CSingleWorldRep::Purge(); // 1799
	CUtlVectorBase<CSingleWorldRep::Purge(); // 560
	ValidateAlignment<CSingleWorldRep*>(void); // 508
	CUtlMemory<CSingleWorldRep::Purge(); // 510
	CUtlMemory<CSingleWorldRep::~CUtlMemory(); // 562
	CUtlVectorBase<CSingleWorldRep::~CUtlVectorBase(); // 410
	CUtlVector<CSingleWorldRep::~CUtlVector(); // 125
	CBaseIntrospectedToKV3TypeManager::~CBaseIntrospectedToKV3TypeManager(); // 113
	CTypesafeIntrospectedToKV3TypeManager<495874631030, PermEntityLumpData_t>::~CTypesafeIntrospectedToKV3TypeManager(); // 46
	CEntityMgr::~CEntityMgr(); // 125
	CBaseIntrospectedToKV3TypeManager::~CBaseIntrospectedToKV3TypeManager(); // 87
	CDefaultIntrospectedToKV3TypeManager<431316170614, World_t>::~CDefaultIntrospectedToKV3TypeManager(); // 111
	CWorldManager::~CWorldManager(); // 125
	CUtlMemory<ResourceManifestDesc_t::IsExternallyAllocated(); // 905
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 903
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 1799
	CUtlVectorBase<ResourceManifestDesc_t::RemoveAll(); // 1798
	CUtlVectorBase<ResourceManifestDesc_t::Purge(); // 560
	CUtlVectorBase<ResourceManifestDesc_t::~CUtlVectorBase(); // 410
	CUtlVector<ResourceManifestDesc_t::~CUtlVector(); // 42
	CTier2AppSystem<IWorldRendererMgr, 0>::~CTier2AppSystem(); // 18
	CTier3AppSystem<IWorldRendererMgr, 0>::~CTier3AppSystem(); // 125
} /* size: 597, inline expansions: 82 (1951 bytes) */

// <00F23428> worldrenderer/worldrenderermgr.h:125
inline void CWorldRendererMgr::~CWorldRendererMgr()
{
} /* size: 0 */

// <00F12D80> worldrenderer/worldrenderermgr.h:125
// member functions: 101
// member variables: 17
// vtable entries: 31
// class size: 992
class CWorldRendererMgr : public CTier3AppSystem<IWorldRendererMgr, 0> {
	/* worldrenderer/worldrenderermgr.h:202 */
	struct WindEntry_t {
		const class ISceneWorld * m_pSceneWorld; /* 0 8 */
		Vector m_vTargetWindDir; /* 8 12 */
		float m_flTargetWindSpeed; /* 20 4 */
		float m_flLastWindSpeed; /* 24 4 */
		float m_flLastSetTime; /* 28 4 */
		Vector m_vWindDir; /* 32 12 */
		float m_flWindSpeed; /* 44 4 */
		Vector m_vWindOffset; /* 48 12 */
		bool m_bOverrideWind; /* 60 1 */
		/* worldrenderer/worldrenderermgr.h:216 */
		void WindEntry_t(WindEntry_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* worldrenderer/worldrenderermgr.h:242 */
	class CCommandMemberInitializer_Cmd_world_layer_list {
		/* worldrenderer/worldrenderermgr.h:242 */
		void CCommandMemberInitializer_Cmd_world_layer_list(CCommandMemberInitializer_Cmd_world_layer_list* );
	private:
		CConCommandMemberAccessor<CWorldRendererMgr> m_ConCommandAccessor; /* 0 160 */
		void ~CCommandMemberInitializer_Cmd_world_layer_list(CCommandMemberInitializer_Cmd_world_layer_list* );
	};
	/* worldrenderer/worldrenderermgr.h:243 */
	class CCommandMemberInitializer_Cmd_world_layer_set_visible {
		/* worldrenderer/worldrenderermgr.h:243 */
		void CCommandMemberInitializer_Cmd_world_layer_set_visible(CCommandMemberInitializer_Cmd_world_layer_set_visible* );
	private:
		CConCommandMemberAccessor<CWorldRendererMgr> m_ConCommandAccessor; /* 0 160 */
		void ~CCommandMemberInitializer_Cmd_world_layer_set_visible(CCommandMemberInitializer_Cmd_world_layer_set_visible* );
	};
	/* worldrenderer/worldrenderermgr.h:244 */
	class CCommandMemberInitializer_Cmd_world_dump_loaded_worlds {
		/* worldrenderer/worldrenderermgr.h:244 */
		void CCommandMemberInitializer_Cmd_world_dump_loaded_worlds(CCommandMemberInitializer_Cmd_world_dump_loaded_worlds* );
	private:
		CConCommandMemberAccessor<CWorldRendererMgr> m_ConCommandAccessor; /* 0 160 */
		void ~CCommandMemberInitializer_Cmd_world_dump_loaded_worlds(CCommandMemberInitializer_Cmd_world_dump_loaded_worlds* );
	};
public:
	/* class CTier3AppSystem<IWorldRendererMgr, 0> <ancestor>; */ /* 0 48 */
	void CWorldRendererMgr(CWorldRendererMgr* , CWorldRendererMgr& );
	void CWorldRendererMgr(CWorldRendererMgr* , const CWorldRendererMgr& );
	void CWorldRendererMgr(CWorldRendererMgr* );
	/* worldrenderer/worldrenderermgr.cpp:417 */
	virtual const AppSystemInfo_t* GetDependencies(CWorldRendererMgr* );
	/* worldrenderer/worldrenderermgr.cpp:353 */
	virtual InitReturnVal_t Init(CWorldRendererMgr* );
	/* worldrenderer/worldrenderermgr.cpp:375 */
	virtual void Shutdown(CWorldRendererMgr* );
	/* worldrenderer/worldrenderermgr.cpp:391 */
	virtual bool Connect(CWorldRendererMgr* , CreateInterfaceFn);
	/* worldrenderer/worldrenderermgr.cpp:400 */
	virtual void Disconnect(CWorldRendererMgr* );
	/* worldrenderer/worldrenderermgr.cpp:426 */
	virtual IWorldReference* CreateWorld(CWorldRendererMgr* , const CreateWorldInfo_t& );
	/* worldrenderer/worldrenderermgr.cpp:568 */
	virtual IWorldReference* GetWorldReference(const CWorldRendererMgr* , int);
	/* worldrenderer/worldrenderermgr.cpp:553 */
	virtual int GetWorldCount(CWorldRendererMgr* );
	/* worldrenderer/worldrenderermgr.cpp:558 */
	virtual int GetPendingWorldCount(CWorldRendererMgr* );
	/* worldrenderer/worldrenderermgr.cpp:563 */
	virtual int GetDeletedWorldCount(const CWorldRendererMgr* );
	/* worldrenderer/worldrenderermgr.cpp:575 */
	virtual const char* GetWorldName(const CWorldRendererMgr* , int);
	/* worldrenderer/worldrenderermgr.cpp:651 */
	virtual IWorld* GetGeometryWorld(CWorldRendererMgr* , int);
	/* worldrenderer/worldrenderermgr.cpp:632 */
	virtual CVoxelVisibility* GetWorldVisibility(CWorldRendererMgr* , int);
	/* worldrenderer/worldrenderermgr.cpp:639 */
	virtual int FindLoadedWorldIndex(const CWorldRendererMgr* , WorldGroupId_t, const char* );
	/* worldrenderer/worldrenderermgr.cpp:663 */
	virtual uint32 UpdateObjectsForRendering(CWorldRendererMgr* , WorldGroupId_t, const Vector& , float, float, const CFrustum* , bool, float);
	/* worldrenderer/worldrenderermgr.cpp:581 */
	virtual IWorld* FindWorld(const CWorldRendererMgr* , WorldGroupId_t, const char* );
	/* worldrenderer/worldrenderermgr.cpp:590 */
	virtual void GetBoundsForWorld(CWorldRendererMgr* , WorldGroupId_t, Vector& , Vector& );
	/* worldrenderer/worldrenderermgr.cpp:617 */
	virtual void GetWorldNodeSceneObjects(CWorldRendererMgr* , WorldGroupId_t, CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> >* );
	/* worldrenderer/worldrenderermgr.cpp:747 */
	virtual const CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> >* GetEntityList(CWorldRendererMgr* , IWorldReference* , const char* );
	/* worldrenderer/worldrenderermgr.cpp:764 */
	virtual bool LoadEntityLump(CWorldRendererMgr* , IWorldReference* , const char* , EntityLumpLoadType_t);
	/* worldrenderer/worldrenderermgr.cpp:779 */
	virtual bool IsEntityLumpLoaded(CWorldRendererMgr* , IWorldReference* , const char* );
	/* worldrenderer/worldrenderermgr.cpp:790 */
	virtual void UnloadEntityLump(CWorldRendererMgr* , IWorldReference* , const char* );
	/* worldrenderer/worldrenderermgr.cpp:1215 */
	virtual void ServiceWorldRequests(CWorldRendererMgr* );
	/* worldrenderer/worldrenderermgr.cpp:1277 */
	virtual void OnClientPreOutput(CWorldRendererMgr* , float, float);
	/* worldrenderer/worldrenderermgr.cpp:1271 */
	virtual void SetOverrideRenderTime(CWorldRendererMgr* , float, float);
	/* worldrenderer/worldrenderermgr.cpp:892 */
	virtual void SetWindForWorld(CWorldRendererMgr* , const ISceneWorld* , const Vector& , float, float, bool);
	/* worldrenderer/worldrenderermgr.cpp:917 */
	virtual void ForgetWindForWorld(CWorldRendererMgr* , const ISceneWorld* );
	/* worldrenderer/worldrenderermgr.cpp:932 */
	virtual void GetCurrentWindParams(CWorldRendererMgr* , const ISceneWorld* , Vector& , Vector& , Vector& );
	/* worldrenderer/worldrenderermgr.cpp:805 */
	virtual void GetSceneWorldsForWorldGroup(CWorldRendererMgr* , WorldGroupId_t, CUtlVector<ISceneWorld*, CUtlMemory<ISceneWorld*, int> >& );
	/* worldrenderer/worldrenderermgr.cpp:958 */
	bool GetWorldVPKFullPath(const CWorldRendererMgr* , const char* , CBufferString* );
	/* worldrenderer/worldrenderermgr.cpp:987 */
	virtual bool MountWorldVPK(CWorldRendererMgr* , const char* , const char* );
	/* worldrenderer/worldrenderermgr.cpp:1021 */
	virtual bool UnmountWorldVPK(CWorldRendererMgr* , const char* );
private:
	/* worldrenderer/worldrenderermgr.cpp:800 */
	CSingleWorldRep* CreateNewWorldRep(CWorldRendererMgr* , const CreateWorldInfo_t& );
	/* worldrenderer/worldrenderermgr.cpp:818 */
	CSingleWorldRep* FindSingleWorld(CWorldRendererMgr* , const char* , WorldGroupId_t, bool);
	/* worldrenderer/worldrenderermgr.cpp:538 */
	bool DestroyWorld(CWorldRendererMgr* , CSingleWorldRep* );
	/* worldrenderer/worldrenderermgr.cpp:500 */
	bool DestroyWorldForReal(CWorldRendererMgr* , CSingleWorldRep* );
	/* worldrenderer/worldrenderermgr.cpp:1176 */
	CSingleWorldRep* CreateWorld_Internal(CWorldRendererMgr* , CSingleWorldRep* );
	/* worldrenderer/worldrenderermgr.cpp:1086 */
	bool SetupWorldResources(CWorldRendererMgr* , CSingleWorldRep* );
	CWorldNodeManager m_worldNodeManager; /* 48 0 */
	CWorldManager m_worldManager; /* 80 32 */
	CVoxelVisibilityTypeManager m_WorldVisManager; /* 112 8 */
	CEntityMgr m_EntityLumpManager; /* 120 0 */
	CUtlVector<CSingleWorldRep*, CUtlMemory<CSingleWorldRep*, int> > m_worldList; /* 152 32 */
	CUtlVector<CSingleWorldRep*, CUtlMemory<CSingleWorldRep*, int> > m_worldPendingList; /* 184 32 */
	CUtlVector<CSingleWorldRep*, CUtlMemory<CSingleWorldRep*, int> > m_worldDeletionList; /* 216 32 */
	CUtlVector<SingleWorldEntityLump_t, CUtlMemory<SingleWorldEntityLump_t, int> > m_worldEntityLumps; /* 248 32 */
	CUtlStringMap<int, CUtlSymbolTable> m_worldVPKRefcounts; /* 280 176 */
	/* worldrenderer/worldrenderermgr.cpp:856 */
	WindEntry_t* FindWindEntry(CWorldRendererMgr* , const ISceneWorld* );
	/* worldrenderer/worldrenderermgr.cpp:869 */
	WindEntry_t* FindOrCreateWindEntry(CWorldRendererMgr* , const ISceneWorld* );
	CUtlVector<CWorldRendererMgr::WindEntry_t, CUtlMemory<CWorldRendererMgr::WindEntry_t, int> > m_windEntries; /* 456 32 */
	Vector m_vDefaultWindOffset; /* 488 12 */
	float m_flOverrideRenderFrameTime; /* 500 4 */
	float m_flOverrideRenderTime; /* 504 4 */
	/* worldrenderer/worldrenderermgr.cpp:1320 */
	void Cmd_world_layer_list(CWorldRendererMgr* , const CCommandContext& , const CCommand& );
	CCommandMemberInitializer_Cmd_world_layer_list m_Cmd_world_layer_list_register; /* 512 160 */
	/* worldrenderer/worldrenderermgr.cpp:1349 */
	void Cmd_world_layer_set_visible(CWorldRendererMgr* , const CCommandContext& , const CCommand& );
	CCommandMemberInitializer_Cmd_world_layer_set_visible m_Cmd_world_layer_set_visible_register; /* 672 160 */
	/* worldrenderer/worldrenderermgr.cpp:1415 */
	void Cmd_world_dump_loaded_worlds(CWorldRendererMgr* , const CCommandContext& , const CCommand& );
	CCommandMemberInitializer_Cmd_world_dump_loaded_worlds m_Cmd_world_dump_loaded_worlds_register; /* 832 160 */
	void ~CWorldRendererMgr(CWorldRendererMgr* );
	void CWorldRendererMgr(class CWorldRendererMgr *, class CWorldRendererMgr &); /* linkage=_ZN17CWorldRendererMgrC4EOS_ */
	void CWorldRendererMgr(class CWorldRendererMgr *, const class CWorldRendererMgr  &); /* linkage=_ZN17CWorldRendererMgrC4ERKS_ */
	void CWorldRendererMgr(class CWorldRendererMgr *); /* linkage=_ZN17CWorldRendererMgrC4Ev */
	virtual const class AppSystemInfo_t  * GetDependencies(class CWorldRendererMgr *); /* linkage=_ZN17CWorldRendererMgr15GetDependenciesEv */
	virtual enum InitReturnVal_t Init(class CWorldRendererMgr *); /* linkage=_ZN17CWorldRendererMgr4InitEv */
	virtual void Shutdown(class CWorldRendererMgr *); /* linkage=_ZN17CWorldRendererMgr8ShutdownEv */
	virtual bool Connect(class CWorldRendererMgr *, CreateInterfaceFn); /* linkage=_ZN17CWorldRendererMgr7ConnectEPFPvPKcPiE */
	virtual void Disconnect(class CWorldRendererMgr *); /* linkage=_ZN17CWorldRendererMgr10DisconnectEv */
	virtual class IWorldReference * CreateWorld(class CWorldRendererMgr *, const class CreateWorldInfo_t  &); /* linkage=_ZN17CWorldRendererMgr11CreateWorldERK17CreateWorldInfo_t */
	virtual class IWorldReference * GetWorldReference(const class CWorldRendererMgr  *, int); /* linkage=_ZNK17CWorldRendererMgr17GetWorldReferenceEi */
	virtual int GetWorldCount(class CWorldRendererMgr *); /* linkage=_ZN17CWorldRendererMgr13GetWorldCountEv */
	virtual int GetPendingWorldCount(class CWorldRendererMgr *); /* linkage=_ZN17CWorldRendererMgr20GetPendingWorldCountEv */
	virtual int GetDeletedWorldCount(const class CWorldRendererMgr  *); /* linkage=_ZNK17CWorldRendererMgr20GetDeletedWorldCountEv */
	virtual const char  * GetWorldName(const class CWorldRendererMgr  *, int); /* linkage=_ZNK17CWorldRendererMgr12GetWorldNameEi */
	virtual class IWorld * GetGeometryWorld(class CWorldRendererMgr *, int); /* linkage=_ZN17CWorldRendererMgr16GetGeometryWorldEi */
	virtual class CVoxelVisibility * GetWorldVisibility(class CWorldRendererMgr *, int); /* linkage=_ZN17CWorldRendererMgr18GetWorldVisibilityEi */
	/* <f442d1> worldrenderer/worldrenderermgr.cpp:639 */
	virtual int FindLoadedWorldIndex(const class CWorldRendererMgr  *, WorldGroupId_t, const char  *); /* linkage=_ZNK17CWorldRendererMgr20FindLoadedWorldIndexE15CUtlStringTokenPKc */
	virtual uint32 UpdateObjectsForRendering(class CWorldRendererMgr *, WorldGroupId_t, const class Vector  &, float, float, const class CFrustum  *, bool, float); /* linkage=_ZN17CWorldRendererMgr25UpdateObjectsForRenderingE15CUtlStringTokenRK6VectorffPK8CFrustumbf */
	virtual class IWorld * FindWorld(const class CWorldRendererMgr  *, WorldGroupId_t, const char  *); /* linkage=_ZNK17CWorldRendererMgr9FindWorldE15CUtlStringTokenPKc */
	virtual void GetBoundsForWorld(class CWorldRendererMgr *, WorldGroupId_t, class Vector &, class Vector &); /* linkage=_ZN17CWorldRendererMgr17GetBoundsForWorldE15CUtlStringTokenR6VectorS2_ */
	virtual void GetWorldNodeSceneObjects(class CWorldRendererMgr *, WorldGroupId_t, class CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> > *); /* linkage=_ZN17CWorldRendererMgr24GetWorldNodeSceneObjectsE15CUtlStringTokenP10CUtlVectorIP12CSceneObject10CUtlMemoryIS3_iEE */
	virtual const class CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> >  * GetEntityList(class CWorldRendererMgr *, class IWorldReference *, const char  *); /* linkage=_ZN17CWorldRendererMgr13GetEntityListEP15IWorldReferencePKc */
	virtual bool LoadEntityLump(class CWorldRendererMgr *, class IWorldReference *, const char  *, enum EntityLumpLoadType_t); /* linkage=_ZN17CWorldRendererMgr14LoadEntityLumpEP15IWorldReferencePKc20EntityLumpLoadType_t */
	virtual bool IsEntityLumpLoaded(class CWorldRendererMgr *, class IWorldReference *, const char  *); /* linkage=_ZN17CWorldRendererMgr18IsEntityLumpLoadedEP15IWorldReferencePKc */
	virtual void UnloadEntityLump(class CWorldRendererMgr *, class IWorldReference *, const char  *); /* linkage=_ZN17CWorldRendererMgr16UnloadEntityLumpEP15IWorldReferencePKc */
	virtual void ServiceWorldRequests(class CWorldRendererMgr *); /* linkage=_ZN17CWorldRendererMgr20ServiceWorldRequestsEv */
	virtual void OnClientPreOutput(class CWorldRendererMgr *, float, float); /* linkage=_ZN17CWorldRendererMgr17OnClientPreOutputEff */
	virtual void SetOverrideRenderTime(class CWorldRendererMgr *, float, float); /* linkage=_ZN17CWorldRendererMgr21SetOverrideRenderTimeEff */
	virtual void SetWindForWorld(class CWorldRendererMgr *, const class ISceneWorld  *, const class Vector  &, float, float, bool); /* linkage=_ZN17CWorldRendererMgr15SetWindForWorldEPK11ISceneWorldRK6Vectorffb */
	virtual void ForgetWindForWorld(class CWorldRendererMgr *, const class ISceneWorld  *); /* linkage=_ZN17CWorldRendererMgr18ForgetWindForWorldEPK11ISceneWorld */
	virtual void GetCurrentWindParams(class CWorldRendererMgr *, const class ISceneWorld  *, class Vector &, class Vector &, class Vector &); /* linkage=_ZN17CWorldRendererMgr20GetCurrentWindParamsEPK11ISceneWorldR6VectorS4_S4_ */
	virtual void GetSceneWorldsForWorldGroup(class CWorldRendererMgr *, WorldGroupId_t, class CUtlVector<ISceneWorld*, CUtlMemory<ISceneWorld*, int> > &); /* linkage=_ZN17CWorldRendererMgr27GetSceneWorldsForWorldGroupE15CUtlStringTokenR10CUtlVectorIP11ISceneWorld10CUtlMemoryIS3_iEE */
	/* <f46128> worldrenderer/worldrenderermgr.cpp:958 */
	bool GetWorldVPKFullPath(const class CWorldRendererMgr  *, const char  *, class CBufferString *); /* linkage=_ZNK17CWorldRendererMgr19GetWorldVPKFullPathEPKcP13CBufferString */
	virtual bool MountWorldVPK(class CWorldRendererMgr *, const char  *, const char  *); /* linkage=_ZN17CWorldRendererMgr13MountWorldVPKEPKcS1_ */
	virtual bool UnmountWorldVPK(class CWorldRendererMgr *, const char  *); /* linkage=_ZN17CWorldRendererMgr15UnmountWorldVPKEPKc */
	/* <f4599e> worldrenderer/worldrenderermgr.cpp:800 */
	class CSingleWorldRep * CreateNewWorldRep(class CWorldRendererMgr *, const class CreateWorldInfo_t  &); /* linkage=_ZN17CWorldRendererMgr17CreateNewWorldRepERK17CreateWorldInfo_t */
	class CSingleWorldRep * FindSingleWorld(class CWorldRendererMgr *, const char  *, WorldGroupId_t, bool); /* linkage=_ZN17CWorldRendererMgr15FindSingleWorldEPKc15CUtlStringTokenb */
	bool DestroyWorld(class CWorldRendererMgr *, class CSingleWorldRep *); /* linkage=_ZN17CWorldRendererMgr12DestroyWorldEP15CSingleWorldRep */
	bool DestroyWorldForReal(class CWorldRendererMgr *, class CSingleWorldRep *); /* linkage=_ZN17CWorldRendererMgr19DestroyWorldForRealEP15CSingleWorldRep */
	class CSingleWorldRep * CreateWorld_Internal(class CWorldRendererMgr *, class CSingleWorldRep *); /* linkage=_ZN17CWorldRendererMgr20CreateWorld_InternalEP15CSingleWorldRep */
	bool SetupWorldResources(class CWorldRendererMgr *, class CSingleWorldRep *); /* linkage=_ZN17CWorldRendererMgr19SetupWorldResourcesEP15CSingleWorldRep */
	/* <f45a05> worldrenderer/worldrenderermgr.cpp:856 */
	class WindEntry_t * FindWindEntry(class CWorldRendererMgr *, const class ISceneWorld  *); /* linkage=_ZN17CWorldRendererMgr13FindWindEntryEPK11ISceneWorld */
	/* <f45ae9> worldrenderer/worldrenderermgr.cpp:869 */
	class WindEntry_t * FindOrCreateWindEntry(class CWorldRendererMgr *, const class ISceneWorld  *); /* linkage=_ZN17CWorldRendererMgr21FindOrCreateWindEntryEPK11ISceneWorld */
	void Cmd_world_layer_list(class CWorldRendererMgr *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN17CWorldRendererMgr20Cmd_world_layer_listERK15CCommandContextRK8CCommand */
	/* <f461a3> worldrenderer/worldrenderermgr.cpp:1349 */
	void Cmd_world_layer_set_visible(class CWorldRendererMgr *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN17CWorldRendererMgr27Cmd_world_layer_set_visibleERK15CCommandContextRK8CCommand */
	void Cmd_world_dump_loaded_worlds(class CWorldRendererMgr *, const class CCommandContext  &, const class CCommand  &); /* linkage=_ZN17CWorldRendererMgr28Cmd_world_dump_loaded_worldsERK15CCommandContextRK8CCommand */
	void ~CWorldRendererMgr(class CWorldRendererMgr *); /* linkage=_ZN17CWorldRendererMgrD4Ev */
};

// <00F3DA1A> worldrenderer/worldrenderermgr.h:216
void WindEntry_t::WindEntry_t()
{
} /* size: 0 */

// <00F3DA01> worldrenderer/worldrenderermgr.h:216
inline void WindEntry_t::WindEntry_t()
{
} /* size: 0 */

// <00F3D9EA> worldrenderer/worldrenderermgr.h:242
void CCommandMemberInitializer_Cmd_world_layer_list::CCommandMemberInitializer_Cmd_world_layer_list()
{
} /* size: 0 */

// <00F3D9D1> worldrenderer/worldrenderermgr.h:242
inline void CCommandMemberInitializer_Cmd_world_layer_list::CCommandMemberInitializer_Cmd_world_layer_list()
{
} /* size: 0 */

// <00F3D5F2> worldrenderer/worldrenderermgr.h:242
void CCommandMemberInitializer_Cmd_world_layer_list::~CCommandMemberInitializer_Cmd_world_layer_list()
{
} /* size: 0 */

// <00F3D5D6> worldrenderer/worldrenderermgr.h:242
inline void CCommandMemberInitializer_Cmd_world_layer_list::~CCommandMemberInitializer_Cmd_world_layer_list()
{
} /* size: 0 */

// <00F3D9BA> worldrenderer/worldrenderermgr.h:243
void CCommandMemberInitializer_Cmd_world_layer_set_visible::CCommandMemberInitializer_Cmd_world_layer_set_visible()
{
} /* size: 0 */

// <00F3D9A1> worldrenderer/worldrenderermgr.h:243
inline void CCommandMemberInitializer_Cmd_world_layer_set_visible::CCommandMemberInitializer_Cmd_world_layer_set_visible()
{
} /* size: 0 */

// <00F3D5BF> worldrenderer/worldrenderermgr.h:243
void CCommandMemberInitializer_Cmd_world_layer_set_visible::~CCommandMemberInitializer_Cmd_world_layer_set_visible()
{
} /* size: 0 */

// <00F3D5A3> worldrenderer/worldrenderermgr.h:243
inline void CCommandMemberInitializer_Cmd_world_layer_set_visible::~CCommandMemberInitializer_Cmd_world_layer_set_visible()
{
} /* size: 0 */

// <00F3D98A> worldrenderer/worldrenderermgr.h:244
void CCommandMemberInitializer_Cmd_world_dump_loaded_worlds::CCommandMemberInitializer_Cmd_world_dump_loaded_worlds()
{
} /* size: 0 */

// <00F3D971> worldrenderer/worldrenderermgr.h:244
inline void CCommandMemberInitializer_Cmd_world_dump_loaded_worlds::CCommandMemberInitializer_Cmd_world_dump_loaded_worlds()
{
} /* size: 0 */

// <00F3D58C> worldrenderer/worldrenderermgr.h:244
void CCommandMemberInitializer_Cmd_world_dump_loaded_worlds::~CCommandMemberInitializer_Cmd_world_dump_loaded_worlds()
{
} /* size: 0 */

// <00F3D570> worldrenderer/worldrenderermgr.h:244
inline void CCommandMemberInitializer_Cmd_world_dump_loaded_worlds::~CCommandMemberInitializer_Cmd_world_dump_loaded_worlds()
{
} /* size: 0 */

// <00F3D941> worldrenderer/worldrenderermgr.h:249
// variable: 1
inline WorldTraversalId_t MakeTraversalId(WorldGroupId_t worldGroupId)
{
	WorldTraversalId_t traversalId; // 251
} /* size: 0, variables: 1 */

