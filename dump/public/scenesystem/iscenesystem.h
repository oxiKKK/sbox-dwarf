
//
// public/scenesystem/iscenesystem.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 27
//	classes: 3
//	structs: 10
//

// <033B73C6> ../public/scenesystem/iscenesystem.h:81
void BlitSetup_t::BlitSetup_t()
{
} /* size: 0 */

// <033B73AA> ../public/scenesystem/iscenesystem.h:81
inline void BlitSetup_t::BlitSetup_t()
{
} /* size: 0 */

// <033B738E> ../public/scenesystem/iscenesystem.h:81
void BlitSetup_t::BlitSetup_t(const BlitSetup_t &)
{
} /* size: 0 */

// <033B736D> ../public/scenesystem/iscenesystem.h:81
inline void BlitSetup_t::BlitSetup_t(const BlitSetup_t &)
{
} /* size: 0 */

// <00047456> ../public/scenesystem/iscenesystem.h:81
// member variables: 4
// struct size: 20
struct BlitSetup_t {
	bool AlphaBlending; /* 0 1 */
	bool FlipX; /* 1 1 */
	bool FlipY; /* 2 1 */
	Vector4D ColorTint; /* 4 16 */
};

// <0094D7DD> ../public/scenesystem/iscenesystem.h:99
// member variables: 7
// struct size: 56
struct SceneObjectBuffers_t {
	IndexBufferHandle_t m_hDebugIndexBuffer; /* 0 8 */
	VertexBufferHandle_t m_hDebugVertexBuffer; /* 8 8 */
	Vector m_vecBoundMin; /* 16 12 */
	Vector m_vecBoundMax; /* 28 12 */
	RenderPrimitiveType_t m_nRenderPrimType; /* 40 4 */
	int m_nIndexCount; /* 44 4 */
	int m_nVertexCount; /* 48 4 */
};

// <03301022> ../public/scenesystem/iscenesystem.h:110
void SceneSystemPerFrameStats_t::SceneSystemPerFrameStats_t()
{
} /* size: 0 */

// <03301006> ../public/scenesystem/iscenesystem.h:110
inline void SceneSystemPerFrameStats_t::SceneSystemPerFrameStats_t()
{
} /* size: 0 */

// <000474A0> ../public/scenesystem/iscenesystem.h:110
// member functions: 3
// member variables: 51
// struct size: 208
struct SceneSystemPerFrameStats_t {
	uint32 m_nTrianglesRendered; /* 0 4 */
	uint32 m_nArtistTrianglesRendered; /* 4 4 */
	uint32 m_nRenderBatchDraws; /* 8 4 */
	uint32 m_nDrawCalls; /* 12 4 */
	uint32 m_nDrawPrimitives; /* 16 4 */
	uint32 m_nBaseSceneObjectPrimDraws; /* 20 4 */
	uint32 m_nAnimatableObjectPrimDraws; /* 24 4 */
	uint32 m_nAggregateSceneObjectPrimDraws; /* 28 4 */
	uint32 m_nAggregateSceneObjectsFullyCulled; /* 32 4 */
	uint32 m_nAggregateSceneObjectDrawCalls; /* 36 4 */
	uint32 m_nNumMaterialCompute; /* 40 4 */
	uint32 m_nNumMaterialSet; /* 44 4 */
	uint32 m_nNumSimilarMaterialSet; /* 48 4 */
	uint32 m_nNumTextureOnlyMaterialSet; /* 52 4 */
	uint32 m_nNumVfxEval; /* 56 4 */
	uint32 m_nNumVfxRule; /* 60 4 */
	uint32 m_nNumConstantBufferUpdates; /* 64 4 */
	uint32 m_nNumConstantBufferBytes; /* 68 4 */
	uint32 m_nMaterialChangesNonShadow; /* 72 4 */
	uint32 m_nMaterialChangesNonShadowInitial; /* 76 4 */
	uint32 m_nMaterialChangesShadow; /* 80 4 */
	uint32 m_nMaterialChangesShadowInitial; /* 84 4 */
	uint32 m_nMaterialChangesShadowAlphaTested; /* 88 4 */
	uint32 m_nCopyMaterialChangesNonShadow; /* 92 4 */
	uint32 m_nMaxTransformRow; /* 96 4 */
	uint32 m_nNumRowsUsed; /* 100 4 */
	uint32 m_nNumObjectsTested; /* 104 4 */
	uint32 m_nNumObjectsPreCullCheck; /* 108 4 */
	uint32 m_nNumObjectsPassingCullCheck; /* 112 4 */
	uint32 m_nNumVerticesReferenced; /* 116 4 */
	uint32 m_nNumPrimaryContexts; /* 120 4 */
	uint32 m_nNumSecondaryContexts; /* 124 4 */
	uint32 m_nNumDisplayListsSubmitted; /* 128 4 */
	CInterlockedInt m_nNumViewsRendered __attribute__((__aligned__(4))); /* 132 4 */
	uint32 m_nNumResolves; /* 136 4 */
	uint32 m_nNumCullBoxes; /* 140 4 */
	uint64 m_nCullingBoxCycleCount; /* 144 8 */
	uint32 m_nNumObjectsTestedAgainstCullingBoxes; /* 152 4 */
	uint32 m_nNumObjectsRejectedByBoundsIndex; /* 156 4 */
	uint32 m_nNumObjectsRejectedByCullBoxes; /* 160 4 */
	uint32 m_nNumObjectsRejectedByVis; /* 164 4 */
	uint32 m_nNumObjectsRejectedByBackfaceCulling; /* 168 4 */
	uint32 m_nNumObjectsRejectedByScreenSizeCulling; /* 172 4 */
	uint32 m_nNumObjectsRejectedByFading; /* 176 4 */
	uint32 m_nNumFadingObjects; /* 180 4 */
	uint32 m_nNumUniqueMaterialsSeen; /* 184 4 */
	uint32 m_nNumUnshadowedLightsInView; /* 188 4 */
	uint32 m_nNumShadowedLightsInView; /* 192 4 */
	uint32 m_nNumShadowMaps; /* 196 4 */
	uint32 m_nNumRenderTargetBinds; /* 200 4 */
	uint32 m_nPushConstantSets; /* 204 4 */
	/* ../public/scenesystem/iscenesystem.h:173 */
	void Zero(SceneSystemPerFrameStats_t* );
	/* ../public/scenesystem/iscenesystem.h:178 */
	void operator+=(SceneSystemPerFrameStats_t* , SceneSystemPerFrameStats_t& );
	/* ../public/scenesystem/iscenesystem.h:230 */
	SceneSystemPerFrameStats_t operator+(SceneSystemPerFrameStats_t* , SceneSystemPerFrameStats_t& );
} __attribute__((__aligned__(8)));

// <03310842> ../public/scenesystem/iscenesystem.h:173
inline void SceneSystemPerFrameStats_t::Zero()
{
} /* size: 0 */

// <03879C11> ../public/scenesystem/iscenesystem.h:239
void SceneSystemTimestampFrameData_t::SceneSystemTimestampFrameData_t()
{
} /* size: 0 */

// <03879BF4> ../public/scenesystem/iscenesystem.h:239
inline void SceneSystemTimestampFrameData_t::SceneSystemTimestampFrameData_t()
{
} /* size: 0 */

// <0125F24C> ../public/scenesystem/iscenesystem.h:239
void SceneSystemTimestampFrameData_t::~SceneSystemTimestampFrameData_t()
{
} /* size: 0 */

// <0125F230> ../public/scenesystem/iscenesystem.h:239
inline void SceneSystemTimestampFrameData_t::~SceneSystemTimestampFrameData_t()
{
} /* size: 0 */

// <011825AA> ../public/scenesystem/iscenesystem.h:239
// member functions: 2
// member variables: 4
// struct size: 88
struct SceneSystemTimestampFrameData_t {
	CUtlString m_sGroupName; /* 0 8 */
	CUtlStringToken m_nGroupNameToken; /* 8 4 */
	float m_flDurationInMilliseconds; /* 12 4 */
	RenderQueryPipelineStatistics_t m_pipelineStats; /* 16 72 */
	/* ../public/scenesystem/iscenesystem.h:246 */
	bool operator<(const SceneSystemTimestampFrameData_t* , const SceneSystemTimestampFrameData_t& );
	void ~SceneSystemTimestampFrameData_t(SceneSystemTimestampFrameData_t* );
};

// <02D5060E> ../public/scenesystem/iscenesystem.h:255
// member function: 1
// member variables: 4
// struct size: 24
struct CSimpleStaticShapeDesc {
	/* ../public/scenesystem/iscenesystem.h:257 */
	void CSimpleStaticShapeDesc(CSimpleStaticShapeDesc* );
	int m_nNumVertices; /* 0 4 */
	int m_nNumIndices; /* 4 4 */
	VertexBufferHandle_t m_hVertexBuffer; /* 8 8 */
	IndexBufferHandle_t m_hIndexBuffer; /* 16 8 */
};

// <02F28D02> ../public/scenesystem/iscenesystem.h:257
void CSimpleStaticShapeDesc::CSimpleStaticShapeDesc()
{
} /* size: 0 */

// <02F28CE9> ../public/scenesystem/iscenesystem.h:257
inline void CSimpleStaticShapeDesc::CSimpleStaticShapeDesc()
{
} /* size: 0 */

// <000C5044> ../public/scenesystem/iscenesystem.h:271
// member functions: 2
// member variables: 4
// struct size: 16
struct ExtraShaderData_t {
	float m_fAlpha; /* 0 4 */
	uint32 m_vTintRGB888; /* 4 4 */
	uint32 m_nVertexCacheOffset; /* 8 4 */
	uint32 m_nBlendWeightCount; /* 12 4 */
	/* ../public/scenesystem/iscenesystem.h:278 */
	bool operator==(const ExtraShaderData_t* , const ExtraShaderData_t& );
	/* ../public/scenesystem/iscenesystem.h:283 */
	bool operator!=(const ExtraShaderData_t* , const ExtraShaderData_t& );
};

// <033BB387> ../public/scenesystem/iscenesystem.h:292
void SceneSystemTransformEntry_t::SceneSystemTransformEntry_t()
{
} /* size: 0 */

// <033BB369> ../public/scenesystem/iscenesystem.h:292
inline void SceneSystemTransformEntry_t::SceneSystemTransformEntry_t()
{
} /* size: 0 */

// <018DAAA0> ../public/scenesystem/iscenesystem.h:292
// member variables: 2
// struct size: 64
struct SceneSystemTransformEntry_t {
	matrix3x4a_t m_matTransform __attribute__((__aligned__(16))); /* 0 48 */
	ExtraShaderData_t m_extraData; /* 48 16 */
} __attribute__((__aligned__(16)));

// <02F052AA> ../public/scenesystem/iscenesystem.h:298
void ISceneWorld::ISceneWorld()
{
} /* size: 0 */

// <02F0528D> ../public/scenesystem/iscenesystem.h:298
inline void ISceneWorld::ISceneWorld()
{
} /* size: 0 */

// <02D509E1> ../public/scenesystem/iscenesystem.h:298
// member functions: 60
// member variable: 1
// vtable entries: 26
// class size: 8
class ISceneWorld {
	void ISceneWorld(ISceneWorld* , ISceneWorld& );
	void ISceneWorld(ISceneWorld* , const ISceneWorld& );
	void ISceneWorld(ISceneWorld* );
	void ~ISceneWorld(ISceneWorld* );
	int ()(void) * * _vptr.ISceneWorld; /* 0 8 */
	/* ../public/scenesystem/iscenesystem.h:301 */
	virtual void DeleteAllObjects(ISceneWorld* );
	/* ../public/scenesystem/iscenesystem.h:302 */
	virtual void Release(ISceneWorld* );
	/* ../public/scenesystem/iscenesystem.h:303 */
	virtual IPVS* GetPVS(ISceneWorld* );
	/* ../public/scenesystem/iscenesystem.h:304 */
	virtual void SetPVS(ISceneWorld* , IPVS* );
	/* ../public/scenesystem/iscenesystem.h:307 */
	virtual uint NextID(ISceneWorld* );
	/* ../public/scenesystem/iscenesystem.h:309 */
	virtual void MoveAllObjectsToAnotherSceneWorld(ISceneWorld* , ISceneWorld* );
	/* ../public/scenesystem/iscenesystem.h:311 */
	virtual void GetWorldBounds(ISceneWorld* , Vector& , Vector& );
	/* ../public/scenesystem/iscenesystem.h:313 */
	virtual void GetAllSceneObjects(ISceneWorld* , CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> >& );
	/* ../public/scenesystem/iscenesystem.h:315 */
	virtual int GetSceneObjectCount(ISceneWorld* );
	/* ../public/scenesystem/iscenesystem.h:317 */
	virtual bool IsEmpty(const ISceneWorld* );
	/* ../public/scenesystem/iscenesystem.h:319 */
	virtual const char* GetWorldDebugName(ISceneWorld* );
	/* ../public/scenesystem/iscenesystem.h:321 */
	virtual void SetDeleteAtEndOfFrame(ISceneWorld* , bool);
	/* ../public/scenesystem/iscenesystem.h:322 */
	virtual bool GetDeleteAtEndOfFrame(ISceneWorld* );
	/* ../public/scenesystem/iscenesystem.h:325 */
	virtual bool IsBusy(const ISceneWorld* );
	/* ../public/scenesystem/iscenesystem.h:327 */
	virtual void SetBoundsGroups(ISceneWorld* , const CUtlVector<AABB_t, CUtlMemory<AABB_t, int> >& );
	/* ../public/scenesystem/iscenesystem.h:328 */
	virtual const CUtlVector<AABB_t, CUtlMemory<AABB_t, int> >& GetBoundsGroups(const ISceneWorld* );
	/* ../public/scenesystem/iscenesystem.h:331 */
	virtual void FreeUnusedObjectChunks(ISceneWorld* );
	/* ../public/scenesystem/iscenesystem.h:336 */
	virtual const CManagedHandle* GetManagedHandle(const ISceneWorld* );
	/* ../public/scenesystem/iscenesystem.h:337 */
	virtual void DeleteEndOfFrameObjects(ISceneWorld* );
	/* ../public/scenesystem/iscenesystem.h:338 */
	virtual RayTracingEnvironment* GetRayTracingEnvironment(ISceneWorld* );
	/* ../public/scenesystem/iscenesystem.h:339 */
	virtual bool MeshTrace(ISceneWorld* , const MeshTraceInput& , MeshTraceOutput& );
	/* ../public/scenesystem/iscenesystem.h:340 */
	virtual bool MeshTraceAll(ISceneWorld* , const MeshTraceInput& , CUtlVector<MeshTraceOutput, CUtlMemory<MeshTraceOutput, int> >* );
	/* ../public/scenesystem/iscenesystem.h:342 */
	virtual void Add3DSkyboxWorld(ISceneWorld* , ISceneWorld* );
	/* ../public/scenesystem/iscenesystem.h:343 */
	virtual void Remove3DSkyboxWorld(ISceneWorld* , ISceneWorld* );
	/* ../public/scenesystem/iscenesystem.h:344 */
	virtual void Set3DSkyboxParameters(ISceneWorld* , Vector, QAngle, float);
	/* ../public/scenesystem/iscenesystem.h:345 */
	virtual void Get3DSkybox(ISceneWorld* , ISceneWorld* & , Vector& , QAngle& , float& );
	void ISceneWorld(class ISceneWorld *, class ISceneWorld &); /* linkage=_ZN11ISceneWorldC4EOS_ */
	void ISceneWorld(class ISceneWorld *, const class ISceneWorld  &); /* linkage=_ZN11ISceneWorldC4ERKS_ */
	void ISceneWorld(class ISceneWorld *); /* linkage=_ZN11ISceneWorldC4Ev */
	void ~ISceneWorld(class ISceneWorld *); /* linkage=_ZN11ISceneWorldD4Ev */
	virtual void DeleteAllObjects(class ISceneWorld *); /* linkage=_ZN11ISceneWorld16DeleteAllObjectsEv */
	virtual void Release(class ISceneWorld *); /* linkage=_ZN11ISceneWorld7ReleaseEv */
	virtual class IPVS * GetPVS(class ISceneWorld *); /* linkage=_ZN11ISceneWorld6GetPVSEv */
	virtual void SetPVS(class ISceneWorld *, class IPVS *); /* linkage=_ZN11ISceneWorld6SetPVSEP4IPVS */
	virtual uint NextID(class ISceneWorld *); /* linkage=_ZN11ISceneWorld6NextIDEv */
	virtual void MoveAllObjectsToAnotherSceneWorld(class ISceneWorld *, class ISceneWorld *); /* linkage=_ZN11ISceneWorld33MoveAllObjectsToAnotherSceneWorldEPS_ */
	virtual void GetWorldBounds(class ISceneWorld *, class Vector &, class Vector &); /* linkage=_ZN11ISceneWorld14GetWorldBoundsER6VectorS1_ */
	virtual void GetAllSceneObjects(class ISceneWorld *, class CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> > &); /* linkage=_ZN11ISceneWorld18GetAllSceneObjectsER10CUtlVectorIP12CSceneObject10CUtlMemoryIS2_iEE */
	virtual int GetSceneObjectCount(class ISceneWorld *); /* linkage=_ZN11ISceneWorld19GetSceneObjectCountEv */
	virtual bool IsEmpty(const class ISceneWorld  *); /* linkage=_ZNK11ISceneWorld7IsEmptyEv */
	virtual const char  * GetWorldDebugName(class ISceneWorld *); /* linkage=_ZN11ISceneWorld17GetWorldDebugNameEv */
	virtual void SetDeleteAtEndOfFrame(class ISceneWorld *, bool); /* linkage=_ZN11ISceneWorld21SetDeleteAtEndOfFrameEb */
	virtual bool GetDeleteAtEndOfFrame(class ISceneWorld *); /* linkage=_ZN11ISceneWorld21GetDeleteAtEndOfFrameEv */
	virtual bool IsBusy(const class ISceneWorld  *); /* linkage=_ZNK11ISceneWorld6IsBusyEv */
	virtual void SetBoundsGroups(class ISceneWorld *, const class CUtlVector<AABB_t, CUtlMemory<AABB_t, int> >  &); /* linkage=_ZN11ISceneWorld15SetBoundsGroupsERK10CUtlVectorI6AABB_t10CUtlMemoryIS1_iEE */
	virtual const class CUtlVector<AABB_t, CUtlMemory<AABB_t, int> >  & GetBoundsGroups(const class ISceneWorld  *); /* linkage=_ZNK11ISceneWorld15GetBoundsGroupsEv */
	virtual void FreeUnusedObjectChunks(class ISceneWorld *); /* linkage=_ZN11ISceneWorld22FreeUnusedObjectChunksEv */
	virtual const class CManagedHandle  * GetManagedHandle(const class ISceneWorld  *); /* linkage=_ZNK11ISceneWorld16GetManagedHandleEv */
	virtual void DeleteEndOfFrameObjects(class ISceneWorld *); /* linkage=_ZN11ISceneWorld23DeleteEndOfFrameObjectsEv */
	virtual class RayTracingEnvironment * GetRayTracingEnvironment(class ISceneWorld *); /* linkage=_ZN11ISceneWorld24GetRayTracingEnvironmentEv */
	virtual bool MeshTrace(class ISceneWorld *, const class MeshTraceInput  &, class MeshTraceOutput &); /* linkage=_ZN11ISceneWorld9MeshTraceERK14MeshTraceInputR15MeshTraceOutput */
	virtual bool MeshTraceAll(class ISceneWorld *, const class MeshTraceInput  &, class CUtlVector<MeshTraceOutput, CUtlMemory<MeshTraceOutput, int> > *); /* linkage=_ZN11ISceneWorld12MeshTraceAllERK14MeshTraceInputP10CUtlVectorI15MeshTraceOutput10CUtlMemoryIS4_iEE */
	virtual void Add3DSkyboxWorld(class ISceneWorld *, class ISceneWorld *); /* linkage=_ZN11ISceneWorld16Add3DSkyboxWorldEPS_ */
	virtual void Remove3DSkyboxWorld(class ISceneWorld *, class ISceneWorld *); /* linkage=_ZN11ISceneWorld19Remove3DSkyboxWorldEPS_ */
	virtual void Set3DSkyboxParameters(class ISceneWorld *, class Vector, class QAngle, float); /* linkage=_ZN11ISceneWorld21Set3DSkyboxParametersE6Vector6QAnglef */
	virtual void Get3DSkybox(class ISceneWorld *, class ISceneWorld * &, class Vector &, class QAngle &, float &); /* linkage=_ZN11ISceneWorld11Get3DSkyboxERPS_R6VectorR6QAngleRf */
};

// <01D3728C> ../public/scenesystem/iscenesystem.h:351
// member function: 1
// member variables: 4
// struct size: 16
struct PipelineRenderTargetInfo_t {
	/* ../public/scenesystem/iscenesystem.h:353 */
	void PipelineRenderTargetInfo_t(PipelineRenderTargetInfo_t* );
	int m_nWidth; /* 0 4 */
	int m_nHeight; /* 4 4 */
	RenderMultisampleType_t m_nMultisampleType; /* 8 4 */
	RenderColorSpace_t m_colorSpace; /* 12 1 */
};

// <027DD7A7> ../public/scenesystem/iscenesystem.h:353
void PipelineRenderTargetInfo_t::PipelineRenderTargetInfo_t()
{
} /* size: 0 */

// <027DD78E> ../public/scenesystem/iscenesystem.h:353
inline void PipelineRenderTargetInfo_t::PipelineRenderTargetInfo_t()
{
} /* size: 0 */

// <01182766> ../public/scenesystem/iscenesystem.h:396
// member variables: 8
// struct size: 116
struct SceneVolumetricFogVolume_t {
	uint32 m_nID; /* 0 4 */
	float m_fStrength; /* 4 4 */
	float m_fExponent; /* 8 4 */
	Vector m_vColor; /* 12 12 */
	Vector m_vMin; /* 24 12 */
	Vector m_vMax; /* 36 12 */
	bool m_bSpherical; /* 48 1 */
	VMatrix m_matWorldToVolume; /* 52 64 */
};

// <03C448BC> ../public/scenesystem/iscenesystem.h:408
void SceneObjectCreationInfo_t::SceneObjectCreationInfo_t()
{
} /* size: 0 */

// <03C4489F> ../public/scenesystem/iscenesystem.h:408
inline void SceneObjectCreationInfo_t::SceneObjectCreationInfo_t()
{
} /* size: 0 */

// <02D50902> ../public/scenesystem/iscenesystem.h:408
// member variables: 13
// struct size: 104
struct SceneObjectCreationInfo_t {
	ESceneObjectFlags m_nFlags; /* 0 8 */
	ISceneWorld * m_pWorld; /* 8 8 */
	void * m_pVB; /* 16 8 */
	int m_nVertices; /* 24 4 */
	int m_nVertSize; /* 28 4 */
	uint16 * m_pIB; /* 32 8 */
	int m_nIndices; /* 40 4 */
	HMaterial m_hMaterial; /* 48 8 */
	RenderPrimitiveType_t m_primType; /* 56 4 */
	RenderInputLayout_t m_hInputLayout; /* 64 8 */
	Vector m_vBoundsMin; /* 72 12 */
	Vector m_vBoundsMax; /* 84 12 */
	bool m_bDeleteAtFrameEnd; /* 96 1 */
};

// <02EAF84D> ../public/scenesystem/iscenesystem.h:445
void ISceneSystem::ISceneSystem()
{
} /* size: 0 */

// <02EAF830> ../public/scenesystem/iscenesystem.h:445
inline void ISceneSystem::ISceneSystem()
{
} /* size: 0 */

// <02CFDF22> ../public/scenesystem/iscenesystem.h:445
// member functions: 280
// member variable: 1
// vtable entries: 135
// class size: 8
class ISceneSystem : public IAppSystem {
public:
	/* class IAppSystem <ancestor>; */ /* 0 8 */
	void ISceneSystem(ISceneSystem* , ISceneSystem& );
	void ISceneSystem(ISceneSystem* , const ISceneSystem& );
	void ISceneSystem(ISceneSystem* );
	void ~ISceneSystem(ISceneSystem* );
	/* ../public/scenesystem/iscenesystem.h:452 */
	virtual CSceneObject* CreateSceneObject(ISceneSystem* , ISceneObjectDesc* , ESceneObjectFlags, ISceneWorld* , SceneObjectCreationFlags_t);
	/* ../public/scenesystem/iscenesystem.h:453 */
	virtual CSceneObject* CreateSceneObject(ISceneSystem* , ESceneObjectFlags, ISceneWorld* , SceneObjectCreationFlags_t);
	/* ../public/scenesystem/iscenesystem.h:459 */
	virtual CSceneObject* CreateSceneObjectFromBuffers(ISceneSystem* , ISceneWorld* , VertexBufferHandle_t, IndexBufferHandle_t, HMaterial, int, int, const Vector& , const Vector& , RenderPrimitiveType_t, const char* , bool);
	/* ../public/scenesystem/iscenesystem.h:472 */
	virtual CSceneObject* CreateSceneObjectFromBuffers(ISceneSystem* , ESceneObjectFlags, ISceneWorld* , VertexBufferHandle_t, IndexBufferHandle_t, HMaterial, int, int, const Vector& , const Vector& , RenderPrimitiveType_t, RenderMeshDrawPrimitiveFlags_t, const char* , bool);
	/* ../public/scenesystem/iscenesystem.h:512 */
	virtual CSceneObject* CreateSceneObjectFromStaticBuffers(ISceneSystem* , SceneObjectCreationInfo_t& );
	/* ../public/scenesystem/iscenesystem.h:542 */
	CSceneObject* CreateSceneObjectFromStaticBuffers(ISceneSystem* , ESceneObjectFlags, ISceneWorld* , const MeshBuilderBuffers_t& , HMaterial, bool);
	/* ../public/scenesystem/iscenesystem.h:567 */
	virtual void DeleteSceneObject(ISceneSystem* , CSceneObject* );
	/* ../public/scenesystem/iscenesystem.h:570 */
	virtual ISceneObjectDesc* GetSceneObjectDesc(ISceneSystem* , const char* );
	/* ../public/scenesystem/iscenesystem.h:572 */
	virtual void AddSceneObjectType(ISceneSystem* , const char* , ISceneObjectDesc* );
	/* ../public/scenesystem/iscenesystem.h:573 */
	virtual void RemoveSceneObjectType(ISceneSystem* , const char* );
	/* ../public/scenesystem/iscenesystem.h:575 */
	virtual void AddListener(ISceneSystem* , ISceneSystemListener* );
	/* ../public/scenesystem/iscenesystem.h:576 */
	virtual void RemoveListener(ISceneSystem* , ISceneSystemListener* );
	/* ../public/scenesystem/iscenesystem.h:584 */
	virtual void BeginRenderingViews(ISceneSystem* , IRenderDevice* , bool);
	/* ../public/scenesystem/iscenesystem.h:587 */
	virtual bool IsRenderingViews(ISceneSystem* );
	/* ../public/scenesystem/iscenesystem.h:589 */
	virtual ISceneView* AddView(ISceneSystem* , const char* , const CViewId& , const CFrustum& , SwapChainHandle_t, ISceneWorld* , const RenderViewport_t& , const CPVSBits* , int);
	/* ../public/scenesystem/iscenesystem.h:590 */
	virtual ISceneView* AddDynamicView(ISceneSystem* , const char* , const ISceneView* , const CFrustum& , SwapChainHandle_t, ISceneWorld* , const RenderViewport_t& , const CPVSBits* , int, int);
	/* ../public/scenesystem/iscenesystem.h:593 */
	virtual ISceneView* AddShadowView(ISceneSystem* , const char* , ISceneView* , const CFrustum* , const RenderViewport_t& , HRenderTexture, int, ESceneObjectFlags, ESceneObjectFlags, int, float, const CFrustum* );
	/* ../public/scenesystem/iscenesystem.h:595 */
	virtual void BeginRenderingDynamicView(ISceneSystem* , ISceneView* , const RenderTargetDesc_t* , RenderViewport_t* );
	/* ../public/scenesystem/iscenesystem.h:598 */
	virtual IRenderContext* RenderEmbeddedView(ISceneSystem* , ISceneView* , ISceneLayer* , const RenderTargetDesc_t* , RenderViewport_t* );
	/* ../public/scenesystem/iscenesystem.h:600 */
	virtual void FinishRenderingViews(ISceneSystem* , float);
	/* ../public/scenesystem/iscenesystem.h:602 */
	virtual void WaitForRenderingToComplete(ISceneSystem* );
	/* ../public/scenesystem/iscenesystem.h:603 */
	virtual bool IsWaitingOnRenderingJobs(ISceneSystem* );
	/* ../public/scenesystem/iscenesystem.h:606 */
	virtual void SetObjectBounds(ISceneSystem* , CSceneObject* , const Vector& , const Vector& );
	/* ../public/scenesystem/iscenesystem.h:607 */
	virtual void SetObjectBoundsInfinite(ISceneSystem* , CSceneObject* );
	/* ../public/scenesystem/iscenesystem.h:609 */
	virtual void GetObjectBounds(ISceneSystem* , const CSceneObject* , Vector& , Vector& );
	/* ../public/scenesystem/iscenesystem.h:611 */
	virtual void SetPVSFromClusterMembership(ISceneSystem* , CSceneObject* , const uint32* , int);
	/* ../public/scenesystem/iscenesystem.h:614 */
	virtual CSceneDebugTextObject* CreateTextObject(ISceneSystem* , Vector2D* , ISceneWorld* , const CTextLayoutInfo* , bool, const Vector& );
	/* ../public/scenesystem/iscenesystem.h:617 */
	virtual CSceneLightObject* CreateLight(ISceneSystem* , const LightDesc_t& , ISceneWorld* , bool);
	/* ../public/scenesystem/iscenesystem.h:618 */
	virtual CSceneSkyBoxObject* CreateSkyBox(ISceneSystem* , HMaterial, ISceneWorld* );
	/* ../public/scenesystem/iscenesystem.h:619 */
	virtual CSceneLightProbeVolumeObject* CreateLightProbeVolume(ISceneSystem* , ISceneWorld* );
	/* ../public/scenesystem/iscenesystem.h:620 */
	virtual CSceneLPVDebugGridObject* CreateLightProbeVolumeDebugGrid(ISceneSystem* , ISceneWorld* , CSceneLightProbeVolumeObject* );
	/* ../public/scenesystem/iscenesystem.h:623 */
	virtual CDecalSceneObject* CreateDecal(ISceneSystem* , ISceneWorld* );
	/* ../public/scenesystem/iscenesystem.h:629 */
	virtual void MarkLightProbeVolumeObjectUpdated(ISceneSystem* , CSceneLightProbeVolumeObject* );
	/* ../public/scenesystem/iscenesystem.h:630 */
	virtual void MarkEnvironmentMapObjectUpdated(ISceneSystem* , CEnvMapSceneObject* );
	/* ../public/scenesystem/iscenesystem.h:633 */
	virtual ISceneWorld* CreateWorld(ISceneSystem* , const char* );
	/* ../public/scenesystem/iscenesystem.h:634 */
	virtual void DestroyWorld(ISceneSystem* , ISceneWorld* );
	/* ../public/scenesystem/iscenesystem.h:636 */
	virtual IRayTraceSceneWorld* CreateRayTraceWorld(ISceneSystem* , const char* , int);
	/* ../public/scenesystem/iscenesystem.h:637 */
	virtual void DestroyRayTraceWorld(ISceneSystem* , IRayTraceSceneWorld* );
	/* ../public/scenesystem/iscenesystem.h:640 */
	virtual VertexBufferHandle_t GetWellKnownVertexBuffer(ISceneSystem* , SceneSystemWellKnownVertexBufferObjectID_t);
	/* ../public/scenesystem/iscenesystem.h:641 */
	virtual IndexBufferHandle_t GetWellKnownIndexBuffer(ISceneSystem* , SceneSystemWellKnownIndexBufferObjectID_t);
	/* ../public/scenesystem/iscenesystem.h:642 */
	virtual RenderInputLayout_t GetWellKnownInputLayout(ISceneSystem* , SceneSystemWellKnownInputLayoutID_t, InputLayoutVariation_t);
	/* ../public/scenesystem/iscenesystem.h:644 */
	virtual const RenderInputLayoutField_t* GetWellKnownInputLayoutFields(ISceneSystem* , SceneSystemWellKnownInputLayoutID_t, int* );
	/* ../public/scenesystem/iscenesystem.h:646 */
	virtual HRenderTexture GetWellKnownTexture(ISceneSystem* , SceneSystemWellKnownTextureObjectID_t);
	/* ../public/scenesystem/iscenesystem.h:647 */
	virtual const IMaterial2* GetWellKnownMaterial(ISceneSystem* , SceneSystemWellKnownMaterialObjectID_t);
	/* ../public/scenesystem/iscenesystem.h:648 */
	virtual HMaterial GetWellKnownMaterialHandle(ISceneSystem* , SceneSystemWellKnownMaterialObjectID_t);
	/* ../public/scenesystem/iscenesystem.h:650 */
	virtual const CSimpleStaticShapeDesc& GetWellKnownShape(ISceneSystem* , SceneSystemWellKnownShapeID_t);
	/* ../public/scenesystem/iscenesystem.h:652 */
	virtual void GetRenderTargetSize(ISceneSystem* , SceneSystemRenderTargetSize_t, int* , int* );
	/* ../public/scenesystem/iscenesystem.h:653 */
	virtual void SetRenderTargetSize(ISceneSystem* , SceneSystemRenderTargetSize_t, int, int);
	/* ../public/scenesystem/iscenesystem.h:656 */
	virtual ISceneViewDebugOverlays* CreateSceneViewDebugOverlayList(ISceneSystem* , SceneViewDebugOverlayTimingType_t);
	/* ../public/scenesystem/iscenesystem.h:657 */
	virtual void DestroySceneViewDebugOverlayList(ISceneSystem* , ISceneViewDebugOverlays* );
	/* ../public/scenesystem/iscenesystem.h:659 */
	virtual void SetIntState(ISceneSystem* , CUtlStringToken, int);
	/* ../public/scenesystem/iscenesystem.h:668 */
	virtual void InitObject(ISceneSystem* , CSceneObject* , ESceneObjectFlags, ISceneWorld* );
	/* ../public/scenesystem/iscenesystem.h:670 */
	virtual void MoveObjectToWorld(ISceneSystem* , CSceneObject* , ISceneWorld* );
	/* ../public/scenesystem/iscenesystem.h:677 */
	virtual void QueueDisplayListToLayer(ISceneSystem* , IRenderContext* , ISceneLayer* );
	/* ../public/scenesystem/iscenesystem.h:680 */
	virtual void FrameUpdate(ISceneSystem* );
	/* ../public/scenesystem/iscenesystem.h:686 */
	virtual void AllocateScratchRenderTargets(ISceneSystem* , CUtlStringToken, int, int, const SceneScratchRenderTargetInfo_t* );
	/* ../public/scenesystem/iscenesystem.h:692 */
	virtual void ComputePipelineRenderTargetInfo(ISceneSystem* , SwapChainHandle_t, bool, PipelineRenderTargetInfo_t* );
	/* ../public/scenesystem/iscenesystem.h:693 */
	virtual void ComputePipelineRenderTargetInfo(ISceneSystem* , int, int, RenderMultisampleType_t, bool, PipelineRenderTargetInfo_t* );
	/* ../public/scenesystem/iscenesystem.h:699 */
	virtual void SetMainSwapChain(ISceneSystem* , SwapChainHandle_t);
	/* ../public/scenesystem/iscenesystem.h:701 */
	virtual void SetDebugFlag(ISceneSystem* , SceneSystemDebugFlag_t, bool);
	/* ../public/scenesystem/iscenesystem.h:702 */
	virtual bool GetDebugFlag(const ISceneSystem* , SceneSystemDebugFlag_t);
	/* ../public/scenesystem/iscenesystem.h:703 */
	virtual uint GetDebugFlags(const ISceneSystem* );
	/* ../public/scenesystem/iscenesystem.h:708 */
	virtual uint32 GetFinishRenderingViewsCounter(const ISceneSystem* );
	/* ../public/scenesystem/iscenesystem.h:713 */
	virtual uint32 GetFrameUpdateCounter(const ISceneSystem* );
	/* ../public/scenesystem/iscenesystem.h:717 */
	virtual void BindTransformSlot(ISceneSystem* , IRenderContext* , int, int);
	/* ../public/scenesystem/iscenesystem.h:723 */
	virtual SceneSystemTransformEntry_t* AllocateFrameScopedTransforms(ISceneSystem* , int, int* );
	/* ../public/scenesystem/iscenesystem.h:726 */
	virtual ExtraShaderData_t GetExtraShaderData(ISceneSystem* , const Vector4D& );
	/* ../public/scenesystem/iscenesystem.h:731 */
	virtual void GetStatsSummaryString(const ISceneSystem* , CBufferString* );
	/* ../public/scenesystem/iscenesystem.h:733 */
	virtual const SceneSystemPerFrameStats_t& GetPerFrameStats(const ISceneSystem* );
	/* ../public/scenesystem/iscenesystem.h:736 */
	virtual CViewId CreateViewId(ISceneSystem* , int);
	/* ../public/scenesystem/iscenesystem.h:739 */
	virtual void SetLightCookieTexture(ISceneSystem* , HRenderTexture);
	/* ../public/scenesystem/iscenesystem.h:742 */
	virtual void SetLightCookieSequenceForLight(ISceneSystem* , CSceneLightObject* , const CUtlStringToken& );
	/* ../public/scenesystem/iscenesystem.h:745 */
	virtual void DeleteSceneObjectAtFrameEnd(ISceneSystem* , CSceneObject* );
	/* ../public/scenesystem/iscenesystem.h:748 */
	virtual void GetAllActiveSceneWorlds(ISceneSystem* , CUtlVector<ISceneWorld*, CUtlMemory<ISceneWorld*, int> >& );
	/* ../public/scenesystem/iscenesystem.h:751 */
	virtual int FindOrCreateSceneObjectClass(ISceneSystem* , const char* );
	/* ../public/scenesystem/iscenesystem.h:754 */
	virtual void SetObjectClass(ISceneSystem* , CSceneObject* , uint8);
	/* ../public/scenesystem/iscenesystem.h:757 */
	virtual int ModifyObjectClassFlags(ISceneSystem* , int, int, int);
	/* ../public/scenesystem/iscenesystem.h:760 */
	virtual void GetObjectClassName(ISceneSystem* , uint8, char* , int);
	/* ../public/scenesystem/iscenesystem.h:763 */
	virtual void ConstructSceneObject(ISceneSystem* , CSceneObject* );
	/* ../public/scenesystem/iscenesystem.h:764 */
	virtual void DestructSceneObject(ISceneSystem* , CSceneObject* );
	/* ../public/scenesystem/iscenesystem.h:773 */
	virtual void SetSceneObjectTransformsFast(ISceneSystem* , CSceneObject** , int, const FourVectors* , const fltx4* , const FourVectors* , const fltx4* , const fltx4* , const fltx4* , float, const fltx4* , const fltx4* , const fltx4* );
	/* ../public/scenesystem/iscenesystem.h:784 */
	virtual bool ThreadIsInRenderingJob(const ISceneSystem* );
	/* ../public/scenesystem/iscenesystem.h:787 */
	virtual CSceneAnimatableObject* CreateAnimatableSceneObjectFromBuffers(ISceneSystem* , ISceneWorld* , HMaterial, SceneObjectBuffers_t& , ESceneObjectFlags, bool);
	/* ../public/scenesystem/iscenesystem.h:790 */
	virtual void GenerateOverrideDescriptor(const ISceneSystem* , const CSceneSystemStencilState* , RsStencilStateOverride_t* , ISceneLayer* );
	/* ../public/scenesystem/iscenesystem.h:791 */
	virtual uint8 CalculateStencilMask(const ISceneSystem* , const CUtlStringToken* , ISceneLayer* );
	/* ../public/scenesystem/iscenesystem.h:794 */
	virtual ISceneView* AddViewFromTemplate(ISceneSystem* , const char* , const char* , const ISceneView* , const CFrustum& , SwapChainHandle_t, ISceneWorld* , const RenderViewport_t& , const CPVSBits* , const CRenderAttributes* );
	/* ../public/scenesystem/iscenesystem.h:795 */
	virtual void InstallTemplateViewFactory(ISceneSystem* , const char* , SceneTemplateViewFactoryDelegate_t);
	/* ../public/scenesystem/iscenesystem.h:796 */
	virtual void RemoveTemplateViewFactory(ISceneSystem* , const char* );
	/* ../public/scenesystem/iscenesystem.h:807 */
	virtual void QueueSceneObjectUpdateJob(ISceneSystem* , function<void()>& );
	/* ../public/scenesystem/iscenesystem.h:810 */
	virtual void ExecuteQueuedSceneObjectUpdateJobs(ISceneSystem* );
	/* ../public/scenesystem/iscenesystem.h:815 */
	virtual void InstallMaterialDependentSceneObjectUpdater(ISceneSystem* , const function<void(CSceneObject*)>& );
	/* ../public/scenesystem/iscenesystem.h:818 */
	virtual void SetIgnoreAlphaFade(ISceneSystem* , bool);
	/* ../public/scenesystem/iscenesystem.h:821 */
	virtual void SetupPerObjectLighting(ISceneSystem* , CRenderAttributes& , CSceneObject* , const ISceneLayer* , SetupPerObjectLighting_t);
private:
	/* ../public/scenesystem/iscenesystem.h:825 */
	virtual void SceneObject_ScheduleDirtyUpdate(ISceneSystem* , CSceneObject* );
	/* ../public/scenesystem/iscenesystem.h:826 */
	virtual void SceneObject_UnscheduleDirtyUpdate(ISceneSystem* , CSceneObject* );
	/* ../public/scenesystem/iscenesystem.h:827 */
	virtual void SceneObject_AttachExtraData(ISceneSystem* , CSceneObject* );
	/* ../public/scenesystem/iscenesystem.h:828 */
	virtual void SceneObject_AttachLightingCache(ISceneSystem* , CSceneObject* );
	/* ../public/scenesystem/iscenesystem.h:829 */
	virtual void SceneObject_UpdateFlagsBasedOnMaterial(ISceneSystem* , CSceneObject* );
	/* ../public/scenesystem/iscenesystem.h:830 */
	virtual void SceneObject_UpdateRayTraceObject(ISceneSystem* , CSceneObject* );
	/* ../public/scenesystem/iscenesystem.h:831 */
	virtual void SceneObject_DestroyRayTraceInstance(ISceneSystem* , CSceneObject* );
	/* ../public/scenesystem/iscenesystem.h:833 */
	virtual void SceneObject_SetMaterialOverride(ISceneSystem* , CSceneObject* , HMaterial, CUtlStringToken, int);
	/* ../public/scenesystem/iscenesystem.h:835 */
	virtual void SceneObject_AddChild(ISceneSystem* , CSceneObject* , CUtlStringToken, CSceneObject* , uint32);
	/* ../public/scenesystem/iscenesystem.h:836 */
	virtual void SceneObject_RemoveChild(ISceneSystem* , CSceneObject* , CSceneObject* );
	/* ../public/scenesystem/iscenesystem.h:837 */
	virtual CSceneObject* SceneObject_FindChild(ISceneSystem* , const CSceneObject* , CUtlStringToken);
	/* ../public/scenesystem/iscenesystem.h:838 */
	virtual void SceneObject_MirrorTransformToChildSceneObjects(ISceneSystem* , const CSceneObject* );
	/* ../public/scenesystem/iscenesystem.h:839 */
	virtual void SceneObject_MirrorVisibilityToChildSceneObjects(ISceneSystem* , const CSceneObject* );
	/* ../public/scenesystem/iscenesystem.h:841 */
	virtual void SceneObject_SetForceLayerID(ISceneSystem* , CSceneObject* , CUtlStringToken);
	/* ../public/scenesystem/iscenesystem.h:844 */
	virtual void SceneObject_PostFlagsUpdate(ISceneSystem* , CSceneObject* );
	/* ../public/scenesystem/iscenesystem.h:847 */
	virtual void RegisterExtraDataAllocation(ISceneSystem* , const char* );
	/* ../public/scenesystem/iscenesystem.h:850 */
	virtual void ClearHighWaterMarksNextFrame(ISceneSystem* );
	/* ../public/scenesystem/iscenesystem.h:853 */
	virtual float GetCurrentRenderTime(ISceneSystem* );
	/* ../public/scenesystem/iscenesystem.h:856 */
	virtual void AdvanceNonRenderedFrame(ISceneSystem* );
	/* ../public/scenesystem/iscenesystem.h:858 */
	virtual uint8 GetObjectSettings(const ISceneSystem* , const CSceneObject* );
	/* ../public/scenesystem/iscenesystem.h:861 */
	virtual void SnapShotTextureForEachLayer(ISceneSystem* , HRenderTexture);
	/* ../public/scenesystem/iscenesystem.h:863 */
	virtual void FillOutViewConstants(ISceneSystem* , PerViewConstantBuffer_t* , const CFrustum* , const RenderViewport_t& , const RenderTargetDesc_t& , float, float32, const Vector4D& );
	/* ../public/scenesystem/iscenesystem.h:872 */
	virtual bool VolumetricFogEnabled(const ISceneSystem* );
	/* ../public/scenesystem/iscenesystem.h:875 */
	virtual bool NonTexturedGradientFogEnabled(const ISceneSystem* );
	/* ../public/scenesystem/iscenesystem.h:878 */
	virtual bool CubemapFogEnabled(const ISceneSystem* );
	/* ../public/scenesystem/iscenesystem.h:880 */
	virtual ISceneView* FindView(ISceneSystem* , const char* );
	/* ../public/scenesystem/iscenesystem.h:883 */
	virtual RenderColorSpace_t GetPrimaryRenderTargetColorSpace(const ISceneSystem* );
	/* ../public/scenesystem/iscenesystem.h:886 */
	virtual ImageFormat GetPrimaryRenderTargetFormat(const ISceneSystem* );
	/* ../public/scenesystem/iscenesystem.h:889 */
	virtual ImageFormat GetBackBufferFormat(const ISceneSystem* );
	/* ../public/scenesystem/iscenesystem.h:893 */
	virtual uint32 AddCullingBox(ISceneSystem* , ISceneWorld* , SceneSystemBoxCullMode_t, const Vector& , const QAngle& , Vector);
	/* ../public/scenesystem/iscenesystem.h:894 */
	virtual void RemoveCullingBox(ISceneSystem* , ISceneWorld* , uint32);
	/* ../public/scenesystem/iscenesystem.h:897 */
	virtual uint32 AddVolumetricFogVolume(ISceneSystem* , ISceneWorld* , const SceneVolumetricFogVolume_t& );
	/* ../public/scenesystem/iscenesystem.h:898 */
	virtual void RemoveVolumetricFogVolume(ISceneSystem* , ISceneWorld* , uint32);
	/* ../public/scenesystem/iscenesystem.h:901 */
	virtual void SceneObject_GetMaterialsForObject(ISceneSystem* , CSceneObject* , CUtlVectorFixedGrowable<CWeakHandle<InfoForResourceTypeIMaterial2>, 2>& , CUtlVectorFixedGrowable<int, 2>& );
	/* ../public/scenesystem/iscenesystem.h:904 */
	virtual void SetGPUProfilerMode(ISceneSystem* , SceneSystemGPUProfilerMode_t);
	/* ../public/scenesystem/iscenesystem.h:905 */
	virtual SceneSystemGPUProfilerMode_t GetGPUProfilerMode(const ISceneSystem* );
	/* ../public/scenesystem/iscenesystem.h:906 */
	virtual void GetMostRecentTimestampFrameSummary(ISceneSystem* , SwapChainHandle_t, CUtlVector<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >& );
	/* ../public/scenesystem/iscenesystem.h:907 */
	virtual bool SetManagedPerfMarker(ISceneSystem* , IRenderContext* , const char* );
	/* ../public/scenesystem/iscenesystem.h:910 */
	virtual void DownsampleTexture(ISceneSystem* , IRenderContext* , HRenderTexture& , RenderViewport_t* , uint8, bool);
	/* ../public/scenesystem/iscenesystem.h:912 */
	virtual void FlushScratchRenderTargets(ISceneSystem* );
	/* ../public/scenesystem/iscenesystem.h:914 */
	virtual void SceneObject_MirrorTransformToChildSceneObjectsRelative(ISceneSystem* , const matrix3x4_t& , const CSceneObject* );
	/* ../public/scenesystem/iscenesystem.h:916 */
	virtual HRenderTexture FindOrCreateFrameBufferScratchTexture(ISceneSystem* , ISceneView* , CUtlStringToken, const RenderViewport_t& , ImageFormat, RuntimeTextureSpecificationFlags_t);
	/* ../public/scenesystem/iscenesystem.h:919 */
	virtual void PerformEndOfFrameDeletes(ISceneSystem* );
	void ISceneSystem(class ISceneSystem *, class ISceneSystem &); /* linkage=_ZN12ISceneSystemC4EOS_ */
	void ISceneSystem(class ISceneSystem *, const class ISceneSystem  &); /* linkage=_ZN12ISceneSystemC4ERKS_ */
	void ISceneSystem(class ISceneSystem *); /* linkage=_ZN12ISceneSystemC4Ev */
	void ~ISceneSystem(class ISceneSystem *); /* linkage=_ZN12ISceneSystemD4Ev */
	virtual class CSceneObject * CreateSceneObject(class ISceneSystem *, class ISceneObjectDesc *, enum ESceneObjectFlags, class ISceneWorld *, SceneObjectCreationFlags_t); /* linkage=_ZN12ISceneSystem17CreateSceneObjectEP16ISceneObjectDesc17ESceneObjectFlagsP11ISceneWorldj */
	virtual class CSceneObject * CreateSceneObject(class ISceneSystem *, enum ESceneObjectFlags, class ISceneWorld *, SceneObjectCreationFlags_t); /* linkage=_ZN12ISceneSystem17CreateSceneObjectE17ESceneObjectFlagsP11ISceneWorldj */
	virtual class CSceneObject * CreateSceneObjectFromBuffers(class ISceneSystem *, class ISceneWorld *, VertexBufferHandle_t, IndexBufferHandle_t, HMaterial, int, int, const class Vector  &, const class Vector  &, enum RenderPrimitiveType_t, const char  *, bool); /* linkage=_ZN12ISceneSystem28CreateSceneObjectFromBuffersEP11ISceneWorldP22VertexBufferHandle_t__P21IndexBufferHandle_t__11CWeakHandleI29InfoForResourceTypeIMaterial2EiiRK6VectorSB_21RenderPrimitiveType_tPKcb */
	virtual class CSceneObject * CreateSceneObjectFromBuffers(class ISceneSystem *, enum ESceneObjectFlags, class ISceneWorld *, VertexBufferHandle_t, IndexBufferHandle_t, HMaterial, int, int, const class Vector  &, const class Vector  &, enum RenderPrimitiveType_t, enum RenderMeshDrawPrimitiveFlags_t, const char  *, bool); /* linkage=_ZN12ISceneSystem28CreateSceneObjectFromBuffersE17ESceneObjectFlagsP11ISceneWorldP22VertexBufferHandle_t__P21IndexBufferHandle_t__11CWeakHandleI29InfoForResourceTypeIMaterial2EiiRK6VectorSC_21RenderPrimitiveType_t30RenderMeshDrawPrimitiveFlags_tPKcb */
	virtual class CSceneObject * CreateSceneObjectFromStaticBuffers(class ISceneSystem *, class SceneObjectCreationInfo_t &); /* linkage=_ZN12ISceneSystem34CreateSceneObjectFromStaticBuffersER25SceneObjectCreationInfo_t */
	class CSceneObject * CreateSceneObjectFromStaticBuffers(class ISceneSystem *, enum ESceneObjectFlags, class ISceneWorld *, const class MeshBuilderBuffers_t  &, HMaterial, bool); /* linkage=_ZN12ISceneSystem34CreateSceneObjectFromStaticBuffersE17ESceneObjectFlagsP11ISceneWorldRK20MeshBuilderBuffers_t11CWeakHandleI29InfoForResourceTypeIMaterial2Eb */
	virtual void DeleteSceneObject(class ISceneSystem *, class CSceneObject *); /* linkage=_ZN12ISceneSystem17DeleteSceneObjectEP12CSceneObject */
	virtual class ISceneObjectDesc * GetSceneObjectDesc(class ISceneSystem *, const char  *); /* linkage=_ZN12ISceneSystem18GetSceneObjectDescEPKc */
	virtual void AddSceneObjectType(class ISceneSystem *, const char  *, class ISceneObjectDesc *); /* linkage=_ZN12ISceneSystem18AddSceneObjectTypeEPKcP16ISceneObjectDesc */
	virtual void RemoveSceneObjectType(class ISceneSystem *, const char  *); /* linkage=_ZN12ISceneSystem21RemoveSceneObjectTypeEPKc */
	virtual void AddListener(class ISceneSystem *, class ISceneSystemListener *); /* linkage=_ZN12ISceneSystem11AddListenerEP20ISceneSystemListener */
	virtual void RemoveListener(class ISceneSystem *, class ISceneSystemListener *); /* linkage=_ZN12ISceneSystem14RemoveListenerEP20ISceneSystemListener */
	virtual void BeginRenderingViews(class ISceneSystem *, class IRenderDevice *, bool); /* linkage=_ZN12ISceneSystem19BeginRenderingViewsEP13IRenderDeviceb */
	virtual bool IsRenderingViews(class ISceneSystem *); /* linkage=_ZN12ISceneSystem16IsRenderingViewsEv */
	virtual class ISceneView * AddView(class ISceneSystem *, const char  *, const class CViewId  &, const class CFrustum  &, SwapChainHandle_t, class ISceneWorld *, const class RenderViewport_t  &, const class CPVSBits  *, int); /* linkage=_ZN12ISceneSystem7AddViewEPKcRK7CViewIdRK8CFrustumP19SwapChainHandle_t__P11ISceneWorldRK16RenderViewport_tPK8CPVSBitsi */
	virtual class ISceneView * AddDynamicView(class ISceneSystem *, const char  *, const class ISceneView  *, const class CFrustum  &, SwapChainHandle_t, class ISceneWorld *, const class RenderViewport_t  &, const class CPVSBits  *, int, int); /* linkage=_ZN12ISceneSystem14AddDynamicViewEPKcPK10ISceneViewRK8CFrustumP19SwapChainHandle_t__P11ISceneWorldRK16RenderViewport_tPK8CPVSBitsii */
	virtual class ISceneView * AddShadowView(class ISceneSystem *, const char  *, class ISceneView *, const class CFrustum  *, const class RenderViewport_t  &, HRenderTexture, int, enum ESceneObjectFlags, enum ESceneObjectFlags, int, float, const class CFrustum  *); /* linkage=_ZN12ISceneSystem13AddShadowViewEPKcP10ISceneViewPK8CFrustumRK16RenderViewport_t11CWeakHandleI31InfoForResourceTypeCTextureBaseEi17ESceneObjectFlagsSD_ifS6_ */
	virtual void BeginRenderingDynamicView(class ISceneSystem *, class ISceneView *, const class RenderTargetDesc_t  *, class RenderViewport_t *); /* linkage=_ZN12ISceneSystem25BeginRenderingDynamicViewEP10ISceneViewPK18RenderTargetDesc_tP16RenderViewport_t */
	virtual class IRenderContext * RenderEmbeddedView(class ISceneSystem *, class ISceneView *, class ISceneLayer *, const class RenderTargetDesc_t  *, class RenderViewport_t *); /* linkage=_ZN12ISceneSystem18RenderEmbeddedViewEP10ISceneViewP11ISceneLayerPK18RenderTargetDesc_tP16RenderViewport_t */
	virtual void FinishRenderingViews(class ISceneSystem *, float); /* linkage=_ZN12ISceneSystem20FinishRenderingViewsEf */
	virtual void WaitForRenderingToComplete(class ISceneSystem *); /* linkage=_ZN12ISceneSystem26WaitForRenderingToCompleteEv */
	virtual bool IsWaitingOnRenderingJobs(class ISceneSystem *); /* linkage=_ZN12ISceneSystem24IsWaitingOnRenderingJobsEv */
	virtual void SetObjectBounds(class ISceneSystem *, class CSceneObject *, const class Vector  &, const class Vector  &); /* linkage=_ZN12ISceneSystem15SetObjectBoundsEP12CSceneObjectRK6VectorS4_ */
	virtual void SetObjectBoundsInfinite(class ISceneSystem *, class CSceneObject *); /* linkage=_ZN12ISceneSystem23SetObjectBoundsInfiniteEP12CSceneObject */
	virtual void GetObjectBounds(class ISceneSystem *, const class CSceneObject  *, class Vector &, class Vector &); /* linkage=_ZN12ISceneSystem15GetObjectBoundsEPK12CSceneObjectR6VectorS4_ */
	virtual void SetPVSFromClusterMembership(class ISceneSystem *, class CSceneObject *, const uint32  *, int); /* linkage=_ZN12ISceneSystem27SetPVSFromClusterMembershipEP12CSceneObjectPKji */
	virtual class CSceneDebugTextObject * CreateTextObject(class ISceneSystem *, class Vector2D *, class ISceneWorld *, const class CTextLayoutInfo  *, bool, const class Vector  &); /* linkage=_ZN12ISceneSystem16CreateTextObjectEP8Vector2DP11ISceneWorldPK15CTextLayoutInfobRK6Vector */
	virtual class CSceneLightObject * CreateLight(class ISceneSystem *, const class LightDesc_t  &, class ISceneWorld *, bool); /* linkage=_ZN12ISceneSystem11CreateLightERK11LightDesc_tP11ISceneWorldb */
	virtual class CSceneSkyBoxObject * CreateSkyBox(class ISceneSystem *, HMaterial, class ISceneWorld *); /* linkage=_ZN12ISceneSystem12CreateSkyBoxE11CWeakHandleI29InfoForResourceTypeIMaterial2EP11ISceneWorld */
	virtual class CSceneLightProbeVolumeObject * CreateLightProbeVolume(class ISceneSystem *, class ISceneWorld *); /* linkage=_ZN12ISceneSystem22CreateLightProbeVolumeEP11ISceneWorld */
	virtual class CSceneLPVDebugGridObject * CreateLightProbeVolumeDebugGrid(class ISceneSystem *, class ISceneWorld *, class CSceneLightProbeVolumeObject *); /* linkage=_ZN12ISceneSystem31CreateLightProbeVolumeDebugGridEP11ISceneWorldP28CSceneLightProbeVolumeObject */
	virtual class CDecalSceneObject * CreateDecal(class ISceneSystem *, class ISceneWorld *); /* linkage=_ZN12ISceneSystem11CreateDecalEP11ISceneWorld */
	virtual void MarkLightProbeVolumeObjectUpdated(class ISceneSystem *, class CSceneLightProbeVolumeObject *); /* linkage=_ZN12ISceneSystem33MarkLightProbeVolumeObjectUpdatedEP28CSceneLightProbeVolumeObject */
	virtual void MarkEnvironmentMapObjectUpdated(class ISceneSystem *, class CEnvMapSceneObject *); /* linkage=_ZN12ISceneSystem31MarkEnvironmentMapObjectUpdatedEP18CEnvMapSceneObject */
	virtual class ISceneWorld * CreateWorld(class ISceneSystem *, const char  *); /* linkage=_ZN12ISceneSystem11CreateWorldEPKc */
	virtual void DestroyWorld(class ISceneSystem *, class ISceneWorld *); /* linkage=_ZN12ISceneSystem12DestroyWorldEP11ISceneWorld */
	virtual class IRayTraceSceneWorld * CreateRayTraceWorld(class ISceneSystem *, const char  *, int); /* linkage=_ZN12ISceneSystem19CreateRayTraceWorldEPKci */
	virtual void DestroyRayTraceWorld(class ISceneSystem *, class IRayTraceSceneWorld *); /* linkage=_ZN12ISceneSystem20DestroyRayTraceWorldEP19IRayTraceSceneWorld */
	virtual VertexBufferHandle_t GetWellKnownVertexBuffer(class ISceneSystem *, enum SceneSystemWellKnownVertexBufferObjectID_t); /* linkage=_ZN12ISceneSystem24GetWellKnownVertexBufferE42SceneSystemWellKnownVertexBufferObjectID_t */
	virtual IndexBufferHandle_t GetWellKnownIndexBuffer(class ISceneSystem *, enum SceneSystemWellKnownIndexBufferObjectID_t); /* linkage=_ZN12ISceneSystem23GetWellKnownIndexBufferE41SceneSystemWellKnownIndexBufferObjectID_t */
	virtual RenderInputLayout_t GetWellKnownInputLayout(class ISceneSystem *, enum SceneSystemWellKnownInputLayoutID_t, enum InputLayoutVariation_t); /* linkage=_ZN12ISceneSystem23GetWellKnownInputLayoutE35SceneSystemWellKnownInputLayoutID_t22InputLayoutVariation_t */
	virtual const class RenderInputLayoutField_t  * GetWellKnownInputLayoutFields(class ISceneSystem *, enum SceneSystemWellKnownInputLayoutID_t, int *); /* linkage=_ZN12ISceneSystem29GetWellKnownInputLayoutFieldsE35SceneSystemWellKnownInputLayoutID_tPi */
	virtual HRenderTexture GetWellKnownTexture(class ISceneSystem *, enum SceneSystemWellKnownTextureObjectID_t); /* linkage=_ZN12ISceneSystem19GetWellKnownTextureE37SceneSystemWellKnownTextureObjectID_t */
	virtual const class IMaterial2  * GetWellKnownMaterial(class ISceneSystem *, enum SceneSystemWellKnownMaterialObjectID_t); /* linkage=_ZN12ISceneSystem20GetWellKnownMaterialE38SceneSystemWellKnownMaterialObjectID_t */
	virtual HMaterial GetWellKnownMaterialHandle(class ISceneSystem *, enum SceneSystemWellKnownMaterialObjectID_t); /* linkage=_ZN12ISceneSystem26GetWellKnownMaterialHandleE38SceneSystemWellKnownMaterialObjectID_t */
	virtual const class CSimpleStaticShapeDesc  & GetWellKnownShape(class ISceneSystem *, enum SceneSystemWellKnownShapeID_t); /* linkage=_ZN12ISceneSystem17GetWellKnownShapeE29SceneSystemWellKnownShapeID_t */
	virtual void GetRenderTargetSize(class ISceneSystem *, enum SceneSystemRenderTargetSize_t, int *, int *); /* linkage=_ZN12ISceneSystem19GetRenderTargetSizeE29SceneSystemRenderTargetSize_tPiS1_ */
	virtual void SetRenderTargetSize(class ISceneSystem *, enum SceneSystemRenderTargetSize_t, int, int); /* linkage=_ZN12ISceneSystem19SetRenderTargetSizeE29SceneSystemRenderTargetSize_tii */
	virtual class ISceneViewDebugOverlays * CreateSceneViewDebugOverlayList(class ISceneSystem *, enum SceneViewDebugOverlayTimingType_t); /* linkage=_ZN12ISceneSystem31CreateSceneViewDebugOverlayListE33SceneViewDebugOverlayTimingType_t */
	virtual void DestroySceneViewDebugOverlayList(class ISceneSystem *, class ISceneViewDebugOverlays *); /* linkage=_ZN12ISceneSystem32DestroySceneViewDebugOverlayListEP23ISceneViewDebugOverlays */
	virtual void SetIntState(class ISceneSystem *, class CUtlStringToken, int); /* linkage=_ZN12ISceneSystem11SetIntStateE15CUtlStringTokeni */
	virtual void InitObject(class ISceneSystem *, class CSceneObject *, enum ESceneObjectFlags, class ISceneWorld *); /* linkage=_ZN12ISceneSystem10InitObjectEP12CSceneObject17ESceneObjectFlagsP11ISceneWorld */
	virtual void MoveObjectToWorld(class ISceneSystem *, class CSceneObject *, class ISceneWorld *); /* linkage=_ZN12ISceneSystem17MoveObjectToWorldEP12CSceneObjectP11ISceneWorld */
	virtual void QueueDisplayListToLayer(class ISceneSystem *, class IRenderContext *, class ISceneLayer *); /* linkage=_ZN12ISceneSystem23QueueDisplayListToLayerEP14IRenderContextP11ISceneLayer */
	virtual void FrameUpdate(class ISceneSystem *); /* linkage=_ZN12ISceneSystem11FrameUpdateEv */
	virtual void AllocateScratchRenderTargets(class ISceneSystem *, class CUtlStringToken, int, int, const class SceneScratchRenderTargetInfo_t  *); /* linkage=_ZN12ISceneSystem28AllocateScratchRenderTargetsE15CUtlStringTokeniiPK30SceneScratchRenderTargetInfo_t */
	virtual void ComputePipelineRenderTargetInfo(class ISceneSystem *, SwapChainHandle_t, bool, class PipelineRenderTargetInfo_t *); /* linkage=_ZN12ISceneSystem31ComputePipelineRenderTargetInfoEP19SwapChainHandle_t__bP26PipelineRenderTargetInfo_t */
	virtual void ComputePipelineRenderTargetInfo(class ISceneSystem *, int, int, enum RenderMultisampleType_t, bool, class PipelineRenderTargetInfo_t *); /* linkage=_ZN12ISceneSystem31ComputePipelineRenderTargetInfoEii23RenderMultisampleType_tbP26PipelineRenderTargetInfo_t */
	virtual void SetMainSwapChain(class ISceneSystem *, SwapChainHandle_t); /* linkage=_ZN12ISceneSystem16SetMainSwapChainEP19SwapChainHandle_t__ */
	virtual void SetDebugFlag(class ISceneSystem *, enum SceneSystemDebugFlag_t, bool); /* linkage=_ZN12ISceneSystem12SetDebugFlagE22SceneSystemDebugFlag_tb */
	virtual bool GetDebugFlag(const class ISceneSystem  *, enum SceneSystemDebugFlag_t); /* linkage=_ZNK12ISceneSystem12GetDebugFlagE22SceneSystemDebugFlag_t */
	virtual uint GetDebugFlags(const class ISceneSystem  *); /* linkage=_ZNK12ISceneSystem13GetDebugFlagsEv */
	virtual uint32 GetFinishRenderingViewsCounter(const class ISceneSystem  *); /* linkage=_ZNK12ISceneSystem30GetFinishRenderingViewsCounterEv */
	virtual uint32 GetFrameUpdateCounter(const class ISceneSystem  *); /* linkage=_ZNK12ISceneSystem21GetFrameUpdateCounterEv */
	virtual void BindTransformSlot(class ISceneSystem *, class IRenderContext *, int, int); /* linkage=_ZN12ISceneSystem17BindTransformSlotEP14IRenderContextii */
	virtual class SceneSystemTransformEntry_t * AllocateFrameScopedTransforms(class ISceneSystem *, int, int *); /* linkage=_ZN12ISceneSystem29AllocateFrameScopedTransformsEiPi */
	virtual class ExtraShaderData_t GetExtraShaderData(class ISceneSystem *, const class Vector4D  &); /* linkage=_ZN12ISceneSystem18GetExtraShaderDataERK8Vector4D */
	virtual void GetStatsSummaryString(const class ISceneSystem  *, class CBufferString *); /* linkage=_ZNK12ISceneSystem21GetStatsSummaryStringEP13CBufferString */
	virtual const class SceneSystemPerFrameStats_t  & GetPerFrameStats(const class ISceneSystem  *); /* linkage=_ZNK12ISceneSystem16GetPerFrameStatsEv */
	virtual class CViewId CreateViewId(class ISceneSystem *, int); /* linkage=_ZN12ISceneSystem12CreateViewIdEi */
	virtual void SetLightCookieTexture(class ISceneSystem *, HRenderTexture); /* linkage=_ZN12ISceneSystem21SetLightCookieTextureE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual void SetLightCookieSequenceForLight(class ISceneSystem *, class CSceneLightObject *, const class CUtlStringToken  &); /* linkage=_ZN12ISceneSystem30SetLightCookieSequenceForLightEP17CSceneLightObjectRK15CUtlStringToken */
	virtual void DeleteSceneObjectAtFrameEnd(class ISceneSystem *, class CSceneObject *); /* linkage=_ZN12ISceneSystem27DeleteSceneObjectAtFrameEndEP12CSceneObject */
	virtual void GetAllActiveSceneWorlds(class ISceneSystem *, class CUtlVector<ISceneWorld*, CUtlMemory<ISceneWorld*, int> > &); /* linkage=_ZN12ISceneSystem23GetAllActiveSceneWorldsER10CUtlVectorIP11ISceneWorld10CUtlMemoryIS2_iEE */
	virtual int FindOrCreateSceneObjectClass(class ISceneSystem *, const char  *); /* linkage=_ZN12ISceneSystem28FindOrCreateSceneObjectClassEPKc */
	virtual void SetObjectClass(class ISceneSystem *, class CSceneObject *, uint8); /* linkage=_ZN12ISceneSystem14SetObjectClassEP12CSceneObjecth */
	virtual int ModifyObjectClassFlags(class ISceneSystem *, int, int, int); /* linkage=_ZN12ISceneSystem22ModifyObjectClassFlagsEiii */
	virtual void GetObjectClassName(class ISceneSystem *, uint8, char *, int); /* linkage=_ZN12ISceneSystem18GetObjectClassNameEhPci */
	virtual void ConstructSceneObject(class ISceneSystem *, class CSceneObject *); /* linkage=_ZN12ISceneSystem20ConstructSceneObjectEP12CSceneObject */
	virtual void DestructSceneObject(class ISceneSystem *, class CSceneObject *); /* linkage=_ZN12ISceneSystem19DestructSceneObjectEP12CSceneObject */
	virtual void SetSceneObjectTransformsFast(class ISceneSystem *, class CSceneObject * *, int, const class FourVectors  *, const fltx4  *, const class FourVectors  *, const fltx4  *, const fltx4  *, const fltx4  *, float, const fltx4  *, const fltx4  *, const fltx4  *); /* linkage=_ZN12ISceneSystem28SetSceneObjectTransformsFastEPP12CSceneObjectiPK11FourVectorsPKDv4_fS5_S8_S8_S8_fS8_S8_S8_ */
	virtual bool ThreadIsInRenderingJob(const class ISceneSystem  *); /* linkage=_ZNK12ISceneSystem22ThreadIsInRenderingJobEv */
	virtual class CSceneAnimatableObject * CreateAnimatableSceneObjectFromBuffers(class ISceneSystem *, class ISceneWorld *, HMaterial, class SceneObjectBuffers_t &, enum ESceneObjectFlags, bool); /* linkage=_ZN12ISceneSystem38CreateAnimatableSceneObjectFromBuffersEP11ISceneWorld11CWeakHandleI29InfoForResourceTypeIMaterial2ER20SceneObjectBuffers_t17ESceneObjectFlagsb */
	virtual void GenerateOverrideDescriptor(const class ISceneSystem  *, const class CSceneSystemStencilState  *, class RsStencilStateOverride_t *, class ISceneLayer *); /* linkage=_ZNK12ISceneSystem26GenerateOverrideDescriptorEPK24CSceneSystemStencilStateP24RsStencilStateOverride_tP11ISceneLayer */
	virtual uint8 CalculateStencilMask(const class ISceneSystem  *, const class CUtlStringToken  *, class ISceneLayer *); /* linkage=_ZNK12ISceneSystem20CalculateStencilMaskEPK15CUtlStringTokenP11ISceneLayer */
	virtual class ISceneView * AddViewFromTemplate(class ISceneSystem *, const char  *, const char  *, const class ISceneView  *, const class CFrustum  &, SwapChainHandle_t, class ISceneWorld *, const class RenderViewport_t  &, const class CPVSBits  *, const class CRenderAttributes  *); /* linkage=_ZN12ISceneSystem19AddViewFromTemplateEPKcS1_PK10ISceneViewRK8CFrustumP19SwapChainHandle_t__P11ISceneWorldRK16RenderViewport_tPK8CPVSBitsPK17CRenderAttributes */
	virtual void InstallTemplateViewFactory(class ISceneSystem *, const char  *, SceneTemplateViewFactoryDelegate_t); /* linkage=_ZN12ISceneSystem26InstallTemplateViewFactoryEPKc12CUtlDelegateIFvP10ISceneViewPK17CRenderAttributesEE */
	virtual void RemoveTemplateViewFactory(class ISceneSystem *, const char  *); /* linkage=_ZN12ISceneSystem25RemoveTemplateViewFactoryEPKc */
	virtual void QueueSceneObjectUpdateJob(class ISceneSystem *, class function<void()> &); /* linkage=_ZN12ISceneSystem25QueueSceneObjectUpdateJobEOSt8functionIFvvEE */
	virtual void ExecuteQueuedSceneObjectUpdateJobs(class ISceneSystem *); /* linkage=_ZN12ISceneSystem34ExecuteQueuedSceneObjectUpdateJobsEv */
	virtual void InstallMaterialDependentSceneObjectUpdater(class ISceneSystem *, const class function<void(CSceneObject*)>  &); /* linkage=_ZN12ISceneSystem42InstallMaterialDependentSceneObjectUpdaterERKSt8functionIFvP12CSceneObjectEE */
	virtual void SetIgnoreAlphaFade(class ISceneSystem *, bool); /* linkage=_ZN12ISceneSystem18SetIgnoreAlphaFadeEb */
	virtual void SetupPerObjectLighting(class ISceneSystem *, class CRenderAttributes &, class CSceneObject *, const class ISceneLayer  *, enum SetupPerObjectLighting_t); /* linkage=_ZN12ISceneSystem22SetupPerObjectLightingER17CRenderAttributesP12CSceneObjectPK11ISceneLayer24SetupPerObjectLighting_t */
	virtual void SceneObject_ScheduleDirtyUpdate(class ISceneSystem *, class CSceneObject *); /* linkage=_ZN12ISceneSystem31SceneObject_ScheduleDirtyUpdateEP12CSceneObject */
	virtual void SceneObject_UnscheduleDirtyUpdate(class ISceneSystem *, class CSceneObject *); /* linkage=_ZN12ISceneSystem33SceneObject_UnscheduleDirtyUpdateEP12CSceneObject */
	virtual void SceneObject_AttachExtraData(class ISceneSystem *, class CSceneObject *); /* linkage=_ZN12ISceneSystem27SceneObject_AttachExtraDataEP12CSceneObject */
	virtual void SceneObject_AttachLightingCache(class ISceneSystem *, class CSceneObject *); /* linkage=_ZN12ISceneSystem31SceneObject_AttachLightingCacheEP12CSceneObject */
	virtual void SceneObject_UpdateFlagsBasedOnMaterial(class ISceneSystem *, class CSceneObject *); /* linkage=_ZN12ISceneSystem38SceneObject_UpdateFlagsBasedOnMaterialEP12CSceneObject */
	virtual void SceneObject_UpdateRayTraceObject(class ISceneSystem *, class CSceneObject *); /* linkage=_ZN12ISceneSystem32SceneObject_UpdateRayTraceObjectEP12CSceneObject */
	virtual void SceneObject_DestroyRayTraceInstance(class ISceneSystem *, class CSceneObject *); /* linkage=_ZN12ISceneSystem35SceneObject_DestroyRayTraceInstanceEP12CSceneObject */
	virtual void SceneObject_SetMaterialOverride(class ISceneSystem *, class CSceneObject *, HMaterial, class CUtlStringToken, int); /* linkage=_ZN12ISceneSystem31SceneObject_SetMaterialOverrideEP12CSceneObject11CWeakHandleI29InfoForResourceTypeIMaterial2E15CUtlStringTokeni */
	virtual void SceneObject_AddChild(class ISceneSystem *, class CSceneObject *, class CUtlStringToken, class CSceneObject *, uint32); /* linkage=_ZN12ISceneSystem20SceneObject_AddChildEP12CSceneObject15CUtlStringTokenS1_j */
	virtual void SceneObject_RemoveChild(class ISceneSystem *, class CSceneObject *, class CSceneObject *); /* linkage=_ZN12ISceneSystem23SceneObject_RemoveChildEP12CSceneObjectS1_ */
	virtual class CSceneObject * SceneObject_FindChild(class ISceneSystem *, const class CSceneObject  *, class CUtlStringToken); /* linkage=_ZN12ISceneSystem21SceneObject_FindChildEPK12CSceneObject15CUtlStringToken */
	virtual void SceneObject_MirrorTransformToChildSceneObjects(class ISceneSystem *, const class CSceneObject  *); /* linkage=_ZN12ISceneSystem46SceneObject_MirrorTransformToChildSceneObjectsEPK12CSceneObject */
	virtual void SceneObject_MirrorVisibilityToChildSceneObjects(class ISceneSystem *, const class CSceneObject  *); /* linkage=_ZN12ISceneSystem47SceneObject_MirrorVisibilityToChildSceneObjectsEPK12CSceneObject */
	virtual void SceneObject_SetForceLayerID(class ISceneSystem *, class CSceneObject *, class CUtlStringToken); /* linkage=_ZN12ISceneSystem27SceneObject_SetForceLayerIDEP12CSceneObject15CUtlStringToken */
	virtual void SceneObject_PostFlagsUpdate(class ISceneSystem *, class CSceneObject *); /* linkage=_ZN12ISceneSystem27SceneObject_PostFlagsUpdateEP12CSceneObject */
	virtual void RegisterExtraDataAllocation(class ISceneSystem *, const char  *); /* linkage=_ZN12ISceneSystem27RegisterExtraDataAllocationEPKc */
	virtual void ClearHighWaterMarksNextFrame(class ISceneSystem *); /* linkage=_ZN12ISceneSystem28ClearHighWaterMarksNextFrameEv */
	virtual float GetCurrentRenderTime(class ISceneSystem *); /* linkage=_ZN12ISceneSystem20GetCurrentRenderTimeEv */
	virtual void AdvanceNonRenderedFrame(class ISceneSystem *); /* linkage=_ZN12ISceneSystem23AdvanceNonRenderedFrameEv */
	virtual uint8 GetObjectSettings(const class ISceneSystem  *, const class CSceneObject  *); /* linkage=_ZNK12ISceneSystem17GetObjectSettingsEPK12CSceneObject */
	virtual void SnapShotTextureForEachLayer(class ISceneSystem *, HRenderTexture); /* linkage=_ZN12ISceneSystem27SnapShotTextureForEachLayerE11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	virtual void FillOutViewConstants(class ISceneSystem *, class PerViewConstantBuffer_t *, const class CFrustum  *, const class RenderViewport_t  &, const class RenderTargetDesc_t  &, float, float32, const class Vector4D  &); /* linkage=_ZN12ISceneSystem20FillOutViewConstantsEP23PerViewConstantBuffer_tPK8CFrustumRK16RenderViewport_tRK18RenderTargetDesc_tffRK8Vector4D */
	virtual bool VolumetricFogEnabled(const class ISceneSystem  *); /* linkage=_ZNK12ISceneSystem20VolumetricFogEnabledEv */
	virtual bool NonTexturedGradientFogEnabled(const class ISceneSystem  *); /* linkage=_ZNK12ISceneSystem29NonTexturedGradientFogEnabledEv */
	virtual bool CubemapFogEnabled(const class ISceneSystem  *); /* linkage=_ZNK12ISceneSystem17CubemapFogEnabledEv */
	virtual class ISceneView * FindView(class ISceneSystem *, const char  *); /* linkage=_ZN12ISceneSystem8FindViewEPKc */
	virtual enum RenderColorSpace_t GetPrimaryRenderTargetColorSpace(const class ISceneSystem  *); /* linkage=_ZNK12ISceneSystem32GetPrimaryRenderTargetColorSpaceEv */
	virtual enum ImageFormat GetPrimaryRenderTargetFormat(const class ISceneSystem  *); /* linkage=_ZNK12ISceneSystem28GetPrimaryRenderTargetFormatEv */
	virtual enum ImageFormat GetBackBufferFormat(const class ISceneSystem  *); /* linkage=_ZNK12ISceneSystem19GetBackBufferFormatEv */
	virtual uint32 AddCullingBox(class ISceneSystem *, class ISceneWorld *, enum SceneSystemBoxCullMode_t, const class Vector  &, const class QAngle  &, class Vector); /* linkage=_ZN12ISceneSystem13AddCullingBoxEP11ISceneWorld24SceneSystemBoxCullMode_tRK6VectorRK6QAngleS3_ */
	virtual void RemoveCullingBox(class ISceneSystem *, class ISceneWorld *, uint32); /* linkage=_ZN12ISceneSystem16RemoveCullingBoxEP11ISceneWorldj */
	virtual uint32 AddVolumetricFogVolume(class ISceneSystem *, class ISceneWorld *, const class SceneVolumetricFogVolume_t  &); /* linkage=_ZN12ISceneSystem22AddVolumetricFogVolumeEP11ISceneWorldRK26SceneVolumetricFogVolume_t */
	virtual void RemoveVolumetricFogVolume(class ISceneSystem *, class ISceneWorld *, uint32); /* linkage=_ZN12ISceneSystem25RemoveVolumetricFogVolumeEP11ISceneWorldj */
	virtual void SceneObject_GetMaterialsForObject(class ISceneSystem *, class CSceneObject *, class CUtlVectorFixedGrowable<CWeakHandle<InfoForResourceTypeIMaterial2>, 2> &, class CUtlVectorFixedGrowable<int, 2> &); /* linkage=_ZN12ISceneSystem33SceneObject_GetMaterialsForObjectEP12CSceneObjectR23CUtlVectorFixedGrowableI11CWeakHandleI29InfoForResourceTypeIMaterial2ELm2EERS2_IiLm2EE */
	virtual void SetGPUProfilerMode(class ISceneSystem *, enum SceneSystemGPUProfilerMode_t); /* linkage=_ZN12ISceneSystem18SetGPUProfilerModeE28SceneSystemGPUProfilerMode_t */
	virtual enum SceneSystemGPUProfilerMode_t GetGPUProfilerMode(const class ISceneSystem  *); /* linkage=_ZNK12ISceneSystem18GetGPUProfilerModeEv */
	virtual void GetMostRecentTimestampFrameSummary(class ISceneSystem *, SwapChainHandle_t, class CUtlVector<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> > &); /* linkage=_ZN12ISceneSystem34GetMostRecentTimestampFrameSummaryEP19SwapChainHandle_t__R10CUtlVectorI31SceneSystemTimestampFrameData_t10CUtlMemoryIS3_iEE */
	virtual bool SetManagedPerfMarker(class ISceneSystem *, class IRenderContext *, const char  *); /* linkage=_ZN12ISceneSystem20SetManagedPerfMarkerEP14IRenderContextPKc */
	virtual void DownsampleTexture(class ISceneSystem *, class IRenderContext *, HRenderTexture &, class RenderViewport_t *, uint8, bool); /* linkage=_ZN12ISceneSystem17DownsampleTextureEP14IRenderContextR11CWeakHandleI31InfoForResourceTypeCTextureBaseEP16RenderViewport_thb */
	virtual void FlushScratchRenderTargets(class ISceneSystem *); /* linkage=_ZN12ISceneSystem25FlushScratchRenderTargetsEv */
	virtual void SceneObject_MirrorTransformToChildSceneObjectsRelative(class ISceneSystem *, const class matrix3x4_t  &, const class CSceneObject  *); /* linkage=_ZN12ISceneSystem54SceneObject_MirrorTransformToChildSceneObjectsRelativeERK11matrix3x4_tPK12CSceneObject */
	virtual HRenderTexture FindOrCreateFrameBufferScratchTexture(class ISceneSystem *, class ISceneView *, class CUtlStringToken, const class RenderViewport_t  &, enum ImageFormat, enum RuntimeTextureSpecificationFlags_t); /* linkage=_ZN12ISceneSystem37FindOrCreateFrameBufferScratchTextureEP10ISceneView15CUtlStringTokenRK16RenderViewport_t11ImageFormat34RuntimeTextureSpecificationFlags_t */
	virtual void PerformEndOfFrameDeletes(class ISceneSystem *); /* linkage=_ZN12ISceneSystem24PerformEndOfFrameDeletesEv */
};

// <03C4482D> ../public/scenesystem/iscenesystem.h:542
// variable: 1
inline void ISceneSystem::CreateSceneObjectFromStaticBuffers(ESceneObjectFlags nFlags, ISceneWorld* pWorld, const MeshBuilderBuffers_t& buffers, HMaterial hMaterial, bool bDeleteAtFrameEnd)
{
	SceneObjectCreationInfo_t meshInfo; // 548
} /* size: 0, variables: 1 */

// <02F28C6F> ../public/scenesystem/iscenesystem.h:677
void ISceneSystem::QueueDisplayListToLayer(IRenderContext* pContext, ISceneLayer* pLayer)
{
} /* size: 5 */

// <036AC371> ../public/scenesystem/iscenesystem.h:923
void IRayTraceSceneWorld::IRayTraceSceneWorld()
{
} /* size: 0 */

// <036AC354> ../public/scenesystem/iscenesystem.h:923
inline void IRayTraceSceneWorld::IRayTraceSceneWorld()
{
} /* size: 0 */

// <036A3118> ../public/scenesystem/iscenesystem.h:923
// member functions: 14
// member variable: 1
// vtable entries: 3
// class size: 8
class IRayTraceSceneWorld {
	void IRayTraceSceneWorld(IRayTraceSceneWorld* , IRayTraceSceneWorld& );
	void IRayTraceSceneWorld(IRayTraceSceneWorld* , const IRayTraceSceneWorld& );
	void IRayTraceSceneWorld(IRayTraceSceneWorld* );
	void ~IRayTraceSceneWorld(IRayTraceSceneWorld* );
	int ()(void) * * _vptr.IRayTraceSceneWorld; /* 0 8 */
	/* ../public/scenesystem/iscenesystem.h:927 */
	virtual void BeginBuild(IRayTraceSceneWorld* );
	/* ../public/scenesystem/iscenesystem.h:928 */
	virtual void AddSceneWorldToBuild(IRayTraceSceneWorld* , ISceneWorld* , IRenderContext* );
	/* ../public/scenesystem/iscenesystem.h:929 */
	virtual bool EndBuild(IRayTraceSceneWorld* , IRenderContext* , CRenderAttributes* );
	void IRayTraceSceneWorld(class IRayTraceSceneWorld *, class IRayTraceSceneWorld &); /* linkage=_ZN19IRayTraceSceneWorldC4EOS_ */
	void IRayTraceSceneWorld(class IRayTraceSceneWorld *, const class IRayTraceSceneWorld  &); /* linkage=_ZN19IRayTraceSceneWorldC4ERKS_ */
	void IRayTraceSceneWorld(class IRayTraceSceneWorld *); /* linkage=_ZN19IRayTraceSceneWorldC4Ev */
	void ~IRayTraceSceneWorld(class IRayTraceSceneWorld *); /* linkage=_ZN19IRayTraceSceneWorldD4Ev */
	virtual void BeginBuild(class IRayTraceSceneWorld *); /* linkage=_ZN19IRayTraceSceneWorld10BeginBuildEv */
	virtual void AddSceneWorldToBuild(class IRayTraceSceneWorld *, class ISceneWorld *, class IRenderContext *); /* linkage=_ZN19IRayTraceSceneWorld20AddSceneWorldToBuildEP11ISceneWorldP14IRenderContext */
	virtual bool EndBuild(class IRayTraceSceneWorld *, class IRenderContext *, class CRenderAttributes *); /* linkage=_ZN19IRayTraceSceneWorld8EndBuildEP14IRenderContextP17CRenderAttributes */
};

