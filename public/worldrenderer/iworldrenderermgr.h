
//
// public/worldrenderer/iworldrenderermgr.h
//
//	referenced by: libengine2.so
//
//	functions: 6
//	classes: 2
//	struct: 1
//

// <00F3C5B3> ../public/worldrenderer/iworldrenderermgr.h:25
void IWorldReference::IWorldReference()
{
} /* size: 0 */

// <00F3C597> ../public/worldrenderer/iworldrenderermgr.h:25
inline void IWorldReference::IWorldReference()
{
} /* size: 0 */

// <00F1894E> ../public/worldrenderer/iworldrenderermgr.h:25
// member functions: 42
// member variable: 1
// vtable entries: 15
// class size: 8
class IWorldReference {
	void IWorldReference(IWorldReference* , IWorldReference& );
	void IWorldReference(IWorldReference* , const IWorldReference& );
	void IWorldReference(IWorldReference* );
	void ~IWorldReference(IWorldReference* );
	IWorldReference& operator=(IWorldReference* , IWorldReference& );
	IWorldReference& operator=(IWorldReference* , const IWorldReference& );
	int ()(void) * * _vptr.IWorldReference; /* 0 8 */
	/* ../public/worldrenderer/iworldrenderermgr.h:28 */
	virtual int Release(IWorldReference* );
	/* ../public/worldrenderer/iworldrenderermgr.h:29 */
	virtual bool IsWorldLoaded(IWorldReference* );
	/* ../public/worldrenderer/iworldrenderermgr.h:30 */
	virtual bool IsErrorWorld(IWorldReference* );
	/* ../public/worldrenderer/iworldrenderermgr.h:31 */
	virtual bool IsMarkedForDeletion(IWorldReference* );
	/* ../public/worldrenderer/iworldrenderermgr.h:32 */
	virtual bool GetWorldBounds(IWorldReference* , Vector& , Vector& );
	/* ../public/worldrenderer/iworldrenderermgr.h:33 */
	virtual bool HasWorldGeometry(IWorldReference* );
	/* ../public/worldrenderer/iworldrenderermgr.h:34 */
	virtual void ForceBlockingLoad(IWorldReference* );
	/* ../public/worldrenderer/iworldrenderermgr.h:35 */
	virtual ISceneWorld* GetSceneWorld(IWorldReference* );
	/* ../public/worldrenderer/iworldrenderermgr.h:36 */
	virtual WorldGroupId_t GetWorldGroupId(IWorldReference* );
	/* ../public/worldrenderer/iworldrenderermgr.h:39 */
	virtual bool SetWorldLayerVisibility(IWorldReference* , const char* , bool);
	/* ../public/worldrenderer/iworldrenderermgr.h:42 */
	virtual void PrecacheAllWorldNodes(IWorldReference* , WorldNodeFlags_t, bool);
	/* ../public/worldrenderer/iworldrenderermgr.h:45 */
	virtual bool GetCompileFingerprint(IWorldReference* , uint64* , uint64* );
	/* ../public/worldrenderer/iworldrenderermgr.h:50 */
	virtual CVoxelVisibility* GetVoxelVisibility(IWorldReference* );
	/* ../public/worldrenderer/iworldrenderermgr.h:51 */
	virtual IWorld* GetGeometryWorld(IWorldReference* );
	/* ../public/worldrenderer/iworldrenderermgr.h:52 */
	virtual const char* GetFolder(IWorldReference* );
	void IWorldReference(class IWorldReference *, class IWorldReference &); /* linkage=_ZN15IWorldReferenceC4EOS_ */
	void IWorldReference(class IWorldReference *, const class IWorldReference  &); /* linkage=_ZN15IWorldReferenceC4ERKS_ */
	void IWorldReference(class IWorldReference *); /* linkage=_ZN15IWorldReferenceC4Ev */
	void ~IWorldReference(class IWorldReference *); /* linkage=_ZN15IWorldReferenceD4Ev */
	class IWorldReference & operator=(class IWorldReference *, class IWorldReference &); /* linkage=_ZN15IWorldReferenceaSEOS_ */
	class IWorldReference & operator=(class IWorldReference *, const class IWorldReference  &); /* linkage=_ZN15IWorldReferenceaSERKS_ */
	virtual int Release(class IWorldReference *); /* linkage=_ZN15IWorldReference7ReleaseEv */
	virtual bool IsWorldLoaded(class IWorldReference *); /* linkage=_ZN15IWorldReference13IsWorldLoadedEv */
	virtual bool IsErrorWorld(class IWorldReference *); /* linkage=_ZN15IWorldReference12IsErrorWorldEv */
	virtual bool IsMarkedForDeletion(class IWorldReference *); /* linkage=_ZN15IWorldReference19IsMarkedForDeletionEv */
	virtual bool GetWorldBounds(class IWorldReference *, class Vector &, class Vector &); /* linkage=_ZN15IWorldReference14GetWorldBoundsER6VectorS1_ */
	virtual bool HasWorldGeometry(class IWorldReference *); /* linkage=_ZN15IWorldReference16HasWorldGeometryEv */
	virtual void ForceBlockingLoad(class IWorldReference *); /* linkage=_ZN15IWorldReference17ForceBlockingLoadEv */
	virtual class ISceneWorld * GetSceneWorld(class IWorldReference *); /* linkage=_ZN15IWorldReference13GetSceneWorldEv */
	virtual WorldGroupId_t GetWorldGroupId(class IWorldReference *); /* linkage=_ZN15IWorldReference15GetWorldGroupIdEv */
	virtual bool SetWorldLayerVisibility(class IWorldReference *, const char  *, bool); /* linkage=_ZN15IWorldReference23SetWorldLayerVisibilityEPKcb */
	virtual void PrecacheAllWorldNodes(class IWorldReference *, enum WorldNodeFlags_t, bool); /* linkage=_ZN15IWorldReference21PrecacheAllWorldNodesE16WorldNodeFlags_tb */
	virtual bool GetCompileFingerprint(class IWorldReference *, uint64 *, uint64 *); /* linkage=_ZN15IWorldReference21GetCompileFingerprintEPyS0_ */
	virtual class CVoxelVisibility * GetVoxelVisibility(class IWorldReference *); /* linkage=_ZN15IWorldReference18GetVoxelVisibilityEv */
	virtual class IWorld * GetGeometryWorld(class IWorldReference *); /* linkage=_ZN15IWorldReference16GetGeometryWorldEv */
	virtual const char  * GetFolder(class IWorldReference *); /* linkage=_ZN15IWorldReference9GetFolderEv */
};

// <00ED6BAC> ../public/worldrenderer/iworldrenderermgr.h:57
// member function: 1
// member variables: 14
// struct size: 96
struct CreateWorldInfo_t {
	/* ../public/worldrenderer/iworldrenderermgr.h:59 */
	void CreateWorldInfo_t(CreateWorldInfo_t* );
	const char * m_pWorldName; /* 0 8 */
	const char * m_pFolder; /* 8 8 */
	ISceneWorld * m_pSceneWorld; /* 16 8 */
	ResourceManifestLoadPriority_t m_manifestLoadPriority; /* 24 4 */
	WorldGroupId_t m_worldGroupId; /* 28 4 */
	bool m_bAsyncLoad; /* 32 1 */
	bool m_bLoadVis; /* 33 1 */
	bool m_bPrecacheOnly; /* 34 1 */
	bool m_bDisableNodeStreaming; /* 35 1 */
	bool m_bCreateSceneWorld; /* 36 1 */
	bool m_bRequireMountVPK; /* 37 1 */
	bool m_bIgnoreExistingWorlds; /* 38 1 */
	bool m_bCanShareWithDifferentWorldGroupIds; /* 39 1 */
	matrix3x4a_t m_mWorldTransform __attribute__((__aligned__(16))); /* 48 48 */
} __attribute__((__aligned__(16)));

// <0133946B> ../public/worldrenderer/iworldrenderermgr.h:59
void CreateWorldInfo_t::CreateWorldInfo_t()
{
} /* size: 0 */

// <01339452> ../public/worldrenderer/iworldrenderermgr.h:59
inline void CreateWorldInfo_t::CreateWorldInfo_t()
{
} /* size: 0 */

// <00F2B714> ../public/worldrenderer/iworldrenderermgr.h:91
void IWorldRendererMgr::IWorldRendererMgr()
{
} /* size: 0 */

// <00F2B6F8> ../public/worldrenderer/iworldrenderermgr.h:91
inline void IWorldRendererMgr::IWorldRendererMgr()
{
} /* size: 0 */

// <00E8E36B> ../public/worldrenderer/iworldrenderermgr.h:91
// member functions: 60
// member variable: 1
// vtable entries: 26
// class size: 8
class IWorldRendererMgr : public IAppSystem {
public:
	/* class IAppSystem <ancestor>; */ /* 0 8 */
	void ~IWorldRendererMgr(IWorldRendererMgr* );
	void IWorldRendererMgr(IWorldRendererMgr* , IWorldRendererMgr& );
	void IWorldRendererMgr(IWorldRendererMgr* , const IWorldRendererMgr& );
	void IWorldRendererMgr(IWorldRendererMgr* );
	/* ../public/worldrenderer/iworldrenderermgr.h:96 */
	virtual IWorldReference* CreateWorld(IWorldRendererMgr* , const CreateWorldInfo_t& );
	/* ../public/worldrenderer/iworldrenderermgr.h:97 */
	virtual IWorldReference* GetWorldReference(const IWorldRendererMgr* , int);
	/* ../public/worldrenderer/iworldrenderermgr.h:98 */
	virtual int GetWorldCount(IWorldRendererMgr* );
	/* ../public/worldrenderer/iworldrenderermgr.h:99 */
	virtual int GetPendingWorldCount(IWorldRendererMgr* );
	/* ../public/worldrenderer/iworldrenderermgr.h:100 */
	virtual const char* GetWorldName(const IWorldRendererMgr* , int);
	/* ../public/worldrenderer/iworldrenderermgr.h:101 */
	virtual IWorld* GetGeometryWorld(IWorldRendererMgr* , int);
	/* ../public/worldrenderer/iworldrenderermgr.h:102 */
	virtual CVoxelVisibility* GetWorldVisibility(IWorldRendererMgr* , int);
	/* ../public/worldrenderer/iworldrenderermgr.h:103 */
	virtual int FindLoadedWorldIndex(const IWorldRendererMgr* , WorldGroupId_t, const char* );
	/* ../public/worldrenderer/iworldrenderermgr.h:104 */
	virtual uint32 UpdateObjectsForRendering(IWorldRendererMgr* , WorldGroupId_t, const Vector& , float, float, const CFrustum* , bool, float);
	/* ../public/worldrenderer/iworldrenderermgr.h:105 */
	virtual void GetBoundsForWorld(IWorldRendererMgr* , WorldGroupId_t, Vector& , Vector& );
	/* ../public/worldrenderer/iworldrenderermgr.h:106 */
	virtual void GetWorldNodeSceneObjects(IWorldRendererMgr* , WorldGroupId_t, CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> >* );
	/* ../public/worldrenderer/iworldrenderermgr.h:109 */
	virtual const CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> >* GetEntityList(IWorldRendererMgr* , IWorldReference* , const char* );
	/* ../public/worldrenderer/iworldrenderermgr.h:110 */
	virtual bool LoadEntityLump(IWorldRendererMgr* , IWorldReference* , const char* , EntityLumpLoadType_t);
	/* ../public/worldrenderer/iworldrenderermgr.h:111 */
	virtual bool IsEntityLumpLoaded(IWorldRendererMgr* , IWorldReference* , const char* );
	/* ../public/worldrenderer/iworldrenderermgr.h:112 */
	virtual void UnloadEntityLump(IWorldRendererMgr* , IWorldReference* , const char* );
	/* ../public/worldrenderer/iworldrenderermgr.h:114 */
	virtual void ServiceWorldRequests(IWorldRendererMgr* );
	/* ../public/worldrenderer/iworldrenderermgr.h:116 */
	virtual IWorld* FindWorld(const IWorldRendererMgr* , WorldGroupId_t, const char* );
	/* ../public/worldrenderer/iworldrenderermgr.h:118 */
	virtual int GetDeletedWorldCount(const IWorldRendererMgr* );
	/* ../public/worldrenderer/iworldrenderermgr.h:120 */
	virtual void OnClientPreOutput(IWorldRendererMgr* , float, float);
	/* ../public/worldrenderer/iworldrenderermgr.h:121 */
	virtual void SetOverrideRenderTime(IWorldRendererMgr* , float, float);
	/* ../public/worldrenderer/iworldrenderermgr.h:123 */
	virtual void SetWindForWorld(IWorldRendererMgr* , const ISceneWorld* , const Vector& , float, float, bool);
	/* ../public/worldrenderer/iworldrenderermgr.h:124 */
	virtual void ForgetWindForWorld(IWorldRendererMgr* , const ISceneWorld* );
	/* ../public/worldrenderer/iworldrenderermgr.h:125 */
	virtual void GetCurrentWindParams(IWorldRendererMgr* , const ISceneWorld* , Vector& , Vector& , Vector& );
	/* ../public/worldrenderer/iworldrenderermgr.h:127 */
	virtual void GetSceneWorldsForWorldGroup(IWorldRendererMgr* , WorldGroupId_t, CUtlVector<ISceneWorld*, CUtlMemory<ISceneWorld*, int> >& );
	/* ../public/worldrenderer/iworldrenderermgr.h:129 */
	virtual bool MountWorldVPK(IWorldRendererMgr* , const char* , const char* );
	/* ../public/worldrenderer/iworldrenderermgr.h:130 */
	virtual bool UnmountWorldVPK(IWorldRendererMgr* , const char* );
	void ~IWorldRendererMgr(class IWorldRendererMgr *); /* linkage=_ZN17IWorldRendererMgrD4Ev */
	void IWorldRendererMgr(class IWorldRendererMgr *, class IWorldRendererMgr &); /* linkage=_ZN17IWorldRendererMgrC4EOS_ */
	void IWorldRendererMgr(class IWorldRendererMgr *, const class IWorldRendererMgr  &); /* linkage=_ZN17IWorldRendererMgrC4ERKS_ */
	void IWorldRendererMgr(class IWorldRendererMgr *); /* linkage=_ZN17IWorldRendererMgrC4Ev */
	virtual class IWorldReference * CreateWorld(class IWorldRendererMgr *, const class CreateWorldInfo_t  &); /* linkage=_ZN17IWorldRendererMgr11CreateWorldERK17CreateWorldInfo_t */
	virtual class IWorldReference * GetWorldReference(const class IWorldRendererMgr  *, int); /* linkage=_ZNK17IWorldRendererMgr17GetWorldReferenceEi */
	virtual int GetWorldCount(class IWorldRendererMgr *); /* linkage=_ZN17IWorldRendererMgr13GetWorldCountEv */
	virtual int GetPendingWorldCount(class IWorldRendererMgr *); /* linkage=_ZN17IWorldRendererMgr20GetPendingWorldCountEv */
	virtual const char  * GetWorldName(const class IWorldRendererMgr  *, int); /* linkage=_ZNK17IWorldRendererMgr12GetWorldNameEi */
	virtual class IWorld * GetGeometryWorld(class IWorldRendererMgr *, int); /* linkage=_ZN17IWorldRendererMgr16GetGeometryWorldEi */
	virtual class CVoxelVisibility * GetWorldVisibility(class IWorldRendererMgr *, int); /* linkage=_ZN17IWorldRendererMgr18GetWorldVisibilityEi */
	virtual int FindLoadedWorldIndex(const class IWorldRendererMgr  *, WorldGroupId_t, const char  *); /* linkage=_ZNK17IWorldRendererMgr20FindLoadedWorldIndexE15CUtlStringTokenPKc */
	virtual uint32 UpdateObjectsForRendering(class IWorldRendererMgr *, WorldGroupId_t, const class Vector  &, float, float, const class CFrustum  *, bool, float); /* linkage=_ZN17IWorldRendererMgr25UpdateObjectsForRenderingE15CUtlStringTokenRK6VectorffPK8CFrustumbf */
	virtual void GetBoundsForWorld(class IWorldRendererMgr *, WorldGroupId_t, class Vector &, class Vector &); /* linkage=_ZN17IWorldRendererMgr17GetBoundsForWorldE15CUtlStringTokenR6VectorS2_ */
	virtual void GetWorldNodeSceneObjects(class IWorldRendererMgr *, WorldGroupId_t, class CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> > *); /* linkage=_ZN17IWorldRendererMgr24GetWorldNodeSceneObjectsE15CUtlStringTokenP10CUtlVectorIP12CSceneObject10CUtlMemoryIS3_iEE */
	virtual const class CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> >  * GetEntityList(class IWorldRendererMgr *, class IWorldReference *, const char  *); /* linkage=_ZN17IWorldRendererMgr13GetEntityListEP15IWorldReferencePKc */
	virtual bool LoadEntityLump(class IWorldRendererMgr *, class IWorldReference *, const char  *, enum EntityLumpLoadType_t); /* linkage=_ZN17IWorldRendererMgr14LoadEntityLumpEP15IWorldReferencePKc20EntityLumpLoadType_t */
	virtual bool IsEntityLumpLoaded(class IWorldRendererMgr *, class IWorldReference *, const char  *); /* linkage=_ZN17IWorldRendererMgr18IsEntityLumpLoadedEP15IWorldReferencePKc */
	virtual void UnloadEntityLump(class IWorldRendererMgr *, class IWorldReference *, const char  *); /* linkage=_ZN17IWorldRendererMgr16UnloadEntityLumpEP15IWorldReferencePKc */
	virtual void ServiceWorldRequests(class IWorldRendererMgr *); /* linkage=_ZN17IWorldRendererMgr20ServiceWorldRequestsEv */
	virtual class IWorld * FindWorld(const class IWorldRendererMgr  *, WorldGroupId_t, const char  *); /* linkage=_ZNK17IWorldRendererMgr9FindWorldE15CUtlStringTokenPKc */
	virtual int GetDeletedWorldCount(const class IWorldRendererMgr  *); /* linkage=_ZNK17IWorldRendererMgr20GetDeletedWorldCountEv */
	virtual void OnClientPreOutput(class IWorldRendererMgr *, float, float); /* linkage=_ZN17IWorldRendererMgr17OnClientPreOutputEff */
	virtual void SetOverrideRenderTime(class IWorldRendererMgr *, float, float); /* linkage=_ZN17IWorldRendererMgr21SetOverrideRenderTimeEff */
	virtual void SetWindForWorld(class IWorldRendererMgr *, const class ISceneWorld  *, const class Vector  &, float, float, bool); /* linkage=_ZN17IWorldRendererMgr15SetWindForWorldEPK11ISceneWorldRK6Vectorffb */
	virtual void ForgetWindForWorld(class IWorldRendererMgr *, const class ISceneWorld  *); /* linkage=_ZN17IWorldRendererMgr18ForgetWindForWorldEPK11ISceneWorld */
	virtual void GetCurrentWindParams(class IWorldRendererMgr *, const class ISceneWorld  *, class Vector &, class Vector &, class Vector &); /* linkage=_ZN17IWorldRendererMgr20GetCurrentWindParamsEPK11ISceneWorldR6VectorS4_S4_ */
	virtual void GetSceneWorldsForWorldGroup(class IWorldRendererMgr *, WorldGroupId_t, class CUtlVector<ISceneWorld*, CUtlMemory<ISceneWorld*, int> > &); /* linkage=_ZN17IWorldRendererMgr27GetSceneWorldsForWorldGroupE15CUtlStringTokenR10CUtlVectorIP11ISceneWorld10CUtlMemoryIS3_iEE */
	virtual bool MountWorldVPK(class IWorldRendererMgr *, const char  *, const char  *); /* linkage=_ZN17IWorldRendererMgr13MountWorldVPKEPKcS1_ */
	virtual bool UnmountWorldVPK(class IWorldRendererMgr *, const char  *); /* linkage=_ZN17IWorldRendererMgr15UnmountWorldVPKEPKc */
};

