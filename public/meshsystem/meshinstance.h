
//
// public/meshsystem/meshinstance.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 37
//	classes: 3
//	structs: 7
//	union: 1
//

// <010F5548> ../public/meshsystem/meshinstance.h:28
void SceneObjectOverrideBase_t::SceneObjectOverrideBase_t()
{
} /* size: 0 */

// <010F552C> ../public/meshsystem/meshinstance.h:28
inline void SceneObjectOverrideBase_t::SceneObjectOverrideBase_t()
{
} /* size: 0 */

// <000FBB09> ../public/meshsystem/meshinstance.h:28
// member variables: 2
// struct size: 8
struct SceneObjectOverrideBase_t {
	uint32 m_nDrawCallIndex; /* 0 4 */
	RenderMeshDrawPrimitiveFlags_t m_nAdditionalMeshDrawPrimitiveFlags; /* 4 4 */
};

// <010F54D7> ../public/meshsystem/meshinstance.h:38
void ExtraSceneObjectStreamDesc_t::ExtraSceneObjectStreamDesc_t()
{
} /* size: 0 */

// <010F54BB> ../public/meshsystem/meshinstance.h:38
inline void ExtraSceneObjectStreamDesc_t::ExtraSceneObjectStreamDesc_t()
{
} /* size: 0 */

// <000FBB39> ../public/meshsystem/meshinstance.h:38
// member variables: 2
// struct size: 24
struct ExtraSceneObjectStreamDesc_t : public SceneObjectOverrideBase_t {
public:
	/* struct SceneObjectOverrideBase_t <ancestor>; */ /* 0 8 */
	CRenderBufferBinding m_extraBufferBinding; /* 8 16 */
};

// <010F1413> ../public/meshsystem/meshinstance.h:45
void MaterialOverrideDesc_t::MaterialOverrideDesc_t()
{
} /* size: 0 */

// <010F13F7> ../public/meshsystem/meshinstance.h:45
inline void MaterialOverrideDesc_t::MaterialOverrideDesc_t()
{
} /* size: 0 */

// <000FBB62> ../public/meshsystem/meshinstance.h:45
// member variables: 2
// struct size: 16
struct MaterialOverrideDesc_t : public SceneObjectOverrideBase_t {
public:
	/* struct SceneObjectOverrideBase_t <ancestor>; */ /* 0 8 */
	HMaterial m_hMaterial; /* 8 8 */
};

// <000FBB8B> ../public/meshsystem/meshinstance.h:53
union CachedSlotInfo_t {
	Cracked_t m_fields; /* 0 8 */
	uint64 m_nCached64Bits; /* 0 8 */
};

// <000FBBFF> ../public/meshsystem/meshinstance.h:65
// member variables: 2
// struct size: 24
struct CachedSlotAndExtraData_t {
	ExtraShaderData_t m_extraShaderData; /* 0 16 */
	union CachedSlotInfo_t m_cache; /* 16 8 */
};

// <00081135> ../public/meshsystem/meshinstance.h:71
void CMeshInstanceAnimatableData::~CMeshInstanceAnimatableData()
{
} /* size: 0 */

// <00081119> ../public/meshsystem/meshinstance.h:71
inline void CMeshInstanceAnimatableData::~CMeshInstanceAnimatableData()
{
} /* size: 0 */

// <000FD2E6> ../public/meshsystem/meshinstance.h:71
// member function: 1
// member variables: 5
// struct size: 88
struct CMeshInstanceAnimatableData {
	/* ../public/meshsystem/meshinstance.h:74 */
	void CMeshInstanceAnimatableData(CMeshInstanceAnimatableData* );
	union CachedSlotInfo_t m_cachedSlotInfo; /* 0 8 */
	const int16 * m_pLocalToMasterTable; /* 8 8 */
	CUtlVector<CachedSlotAndExtraData_t, CUtlMemory<CachedSlotAndExtraData_t, int> > m_extraSlotCache; /* 16 32 */
	float m_flFlexTimeLast; /* 48 4 */
	CUtlVector<float, CUtlMemory<float, int> > m_flexDescDelayedWeights; /* 56 32 */
};

// <058D4ABC> ../../public/meshsystem/meshinstance.h:71
// member function: 1
// member variables: 5
// struct size: 88
struct CMeshInstanceAnimatableData {
	/* ../../public/meshsystem/meshinstance.h:74 */
	void CMeshInstanceAnimatableData(CMeshInstanceAnimatableData* );
	union CachedSlotInfo_t m_cachedSlotInfo; /* 0 8 */
	const int16 * m_pLocalToMasterTable; /* 8 8 */
	CUtlVector<CachedSlotAndExtraData_t, CUtlMemory<CachedSlotAndExtraData_t, int> > m_extraSlotCache; /* 16 32 */
	float m_flFlexTimeLast; /* 48 4 */
	CUtlVector<float, CUtlMemory<float, int> > m_flexDescDelayedWeights; /* 56 32 */
};

// <00050642> ../public/meshsystem/meshinstance.h:71
// member functions: 2
// member variables: 5
// struct size: 88
struct CMeshInstanceAnimatableData {
	/* ../public/meshsystem/meshinstance.h:74 */
	void CMeshInstanceAnimatableData(CMeshInstanceAnimatableData* );
	union CachedSlotInfo_t m_cachedSlotInfo; /* 0 8 */
	const int16 * m_pLocalToMasterTable; /* 8 8 */
	CUtlVector<CachedSlotAndExtraData_t, CUtlMemory<CachedSlotAndExtraData_t, int> > m_extraSlotCache; /* 16 32 */
	float m_flFlexTimeLast; /* 48 4 */
	CUtlVector<float, CUtlMemory<float, int> > m_flexDescDelayedWeights; /* 56 32 */
	void ~CMeshInstanceAnimatableData(CMeshInstanceAnimatableData* );
};

// <001896CF> ../public/meshsystem/meshinstance.h:74
void CMeshInstanceAnimatableData::CMeshInstanceAnimatableData()
{
} /* size: 0 */

// <001896B6> ../public/meshsystem/meshinstance.h:74
inline void CMeshInstanceAnimatableData::CMeshInstanceAnimatableData()
{
} /* size: 0 */

// <00105C5A> ../public/meshsystem/meshinstance.h:95
// member functions: 75
// member variables: 12
// vtable entries: 12
// class size: 80
class CMeshInstance {
	int ()(void) * * _vptr.CMeshInstance; /* 0 8 */
	/* ../public/meshsystem/meshinstance.h:99 */
	virtual void SetMaterialOverrides(CMeshInstance* , HMaterial* , int);
	/* ../public/meshsystem/meshinstance.h:102 */
	virtual void SetMaterialOverrides(CMeshInstance* , MaterialOverrideDesc_t* , int);
	/* ../public/meshsystem/meshinstance.h:105 */
	virtual void SetMaterialOverride(CMeshInstance* , HMaterial, bool);
	/* ../public/meshsystem/meshinstance.h:108 */
	virtual void SetMaterialGroupOverride(CMeshInstance* , int, bool);
	/* ../public/meshsystem/meshinstance.h:111 */
	virtual void SetMaterialGroup(CMeshInstance* , uint32, bool);
	/* ../public/meshsystem/meshinstance.h:114 */
	virtual void CreateSingleDrawCallMeshHelper(CMeshInstance* , VertexBufferHandle_t, IndexBufferHandle_t, HMaterial, RenderPrimitiveType_t, int, int, const Vector& , const Vector& , bool, RenderMeshDrawPrimitiveFlags_t, bool);
	/* ../public/meshsystem/meshinstance.h:127 */
	virtual void AppendDrawCallMeshHelper(CMeshInstance* , VertexBufferHandle_t, IndexBufferHandle_t, HMaterial, RenderPrimitiveType_t, int, int, int, int, const Vector& , const Vector& , bool, bool);
	/* ../public/meshsystem/meshinstance.h:132 */
	virtual void AddExtraVertexStreams(CMeshInstance* , ExtraSceneObjectStreamDesc_t* , int);
	/* ../public/meshsystem/meshinstance.h:135 */
	virtual const CModel* GetModel(const CMeshInstance* );
	/* ../public/meshsystem/meshinstance.h:138 */
	virtual HModel GetModelHandle(const CMeshInstance* );
	/* ../public/meshsystem/meshinstance.h:140 */
	virtual void ReplaceVBsIBs(CMeshInstance* , const CVertexBufferOverride* , const CIndexBufferOverride* );
	/* ../public/meshsystem/meshinstance.h:142 */
	virtual void DestroyOwnedVBAndIB(CMeshInstance* );
protected:
	/* ../public/meshsystem/meshinstance.h:145 */
	void CMeshInstance(CMeshInstance* );
	/* ../public/meshsystem/meshinstance.h:160 */
	void CMeshInstance(CMeshInstance* , CModelMeshHandle, int, ESceneObjectFlags, CSceneObject* , MeshGroupMask_t, LODGroupMask_t);
	/* ../public/meshsystem/meshinstance.h:177 */
	virtual void ~CMeshInstance(CMeshInstance* );
	/* ../public/meshsystem/meshinstance.h:256 */
	void AllocateAnimatableData(CMeshInstance* , uint32, const int16* , int);
	/* ../public/meshsystem/meshinstance.h:274 */
	CModelMeshHandle GetRenderMeshHandle(const CMeshInstance* );
	/* ../public/meshsystem/meshinstance.h:279 */
	const CRenderMesh* GetRenderMesh(const CMeshInstance* );
	/* ../public/meshsystem/meshinstance.h:284 */
	const CSceneObjectData* GetSceneObjectData(const CMeshInstance* );
	/* ../public/meshsystem/meshinstance.h:308 */
	void GetBounds(const CMeshInstance* , Vector& , Vector& );
	/* ../public/meshsystem/meshinstance.h:320 */
	int GetNumDrawCalls(const CMeshInstance* );
	/* ../public/meshsystem/meshinstance.h:330 */
	const CMaterialDrawDescriptor* GetDrawCallsPtr(const CMeshInstance* );
	/* ../public/meshsystem/meshinstance.h:340 */
	const CMaterialDrawDescriptor* GetDrawCall(const CMeshInstance* , int);
	/* ../public/meshsystem/meshinstance.h:350 */
	void SetAndOwnDrawDataOverride(CMeshInstance* , CSceneObjectData* );
	/* ../public/meshsystem/meshinstance.h:363 */
	MeshGroupMask_t GetMeshGroupMask(CMeshInstance* );
	/* ../public/meshsystem/meshinstance.h:368 */
	LODGroupMask_t GetLODGroupMask(CMeshInstance* );
	/* ../public/meshsystem/meshinstance.h:373 */
	CMeshInstance* GetNext(CMeshInstance* );
	/* ../public/meshsystem/meshinstance.h:378 */
	const CRenderSkeleton* GetRenderSkeleton(const CMeshInstance* );
	/* ../public/meshsystem/meshinstance.h:386 */
	const int16* GetBoneLocalToMasterTable(const CMeshInstance* );
	/* ../public/meshsystem/meshinstance.h:393 */
	const int16* GetFlexControllerLocalToMasterTable(const CMeshInstance* );
	/* ../public/meshsystem/meshinstance.h:400 */
	int GetNumBones(const CMeshInstance* );
	/* ../public/meshsystem/meshinstance.h:408 */
	bool SetCachedSlotInfo(CMeshInstance* , uint, uint, bool, union CachedSlotInfo_t);
	/* ../public/meshsystem/meshinstance.h:423 */
	union CachedSlotInfo_t GetCachedSlotInfo(const CMeshInstance* );
	/* ../public/meshsystem/meshinstance.h:430 */
	void AttachToSceneObjectRecursive(CMeshInstance* , CSceneObject* );
	/* ../public/meshsystem/meshinstance.h:437 */
	const CMorphSetData* GetMorphSetData(const CMeshInstance* );
	/* ../public/meshsystem/meshinstance.h:446 */
	bool UseMaterialGroup(CMeshInstance* , CUtlStringToken, bool);
	/* ../public/meshsystem/meshinstance.h:452 */
	bool UseMaterialGroup(CMeshInstance* , uint32, bool);
	CModelMeshHandleStrong m_hRenderMesh; /* 8 16 */
	CSceneObjectData * m_pFixedMeshDataOverride; /* 24 8 */
	ESceneObjectFlags m_nOriginalSceneObjectFlags; /* 32 8 */
	CSceneObject * m_pSceneObject; /* 40 8 */
	MeshGroupMask_t m_nMeshGroupMask; /* 48 8 */
	CMeshInstance * m_pNext; /* 56 8 */
	CMeshInstanceAnimatableData * m_pAnimatableData; /* 64 8 */
	uint32 m_nCurrentMaterialGroup; /* 72 4 */
	uint16 m_nSceneObjectIndex; /* 76 2 */
	LODGroupMask_t m_nLODGroupMask; /* 78 1 */
	bool m_bOwnVBAndIB; /* 79 1 */
	virtual void SetMaterialOverrides(class CMeshInstance *, HMaterial *, int); /* linkage=_ZN13CMeshInstance20SetMaterialOverridesEP11CWeakHandleI29InfoForResourceTypeIMaterial2Ei */
	virtual void SetMaterialOverrides(class CMeshInstance *, class MaterialOverrideDesc_t *, int); /* linkage=_ZN13CMeshInstance20SetMaterialOverridesEP22MaterialOverrideDesc_ti */
	virtual void SetMaterialOverride(class CMeshInstance *, HMaterial, bool); /* linkage=_ZN13CMeshInstance19SetMaterialOverrideE11CWeakHandleI29InfoForResourceTypeIMaterial2Eb */
	virtual void SetMaterialGroupOverride(class CMeshInstance *, int, bool); /* linkage=_ZN13CMeshInstance24SetMaterialGroupOverrideEib */
	virtual void SetMaterialGroup(class CMeshInstance *, uint32, bool); /* linkage=_ZN13CMeshInstance16SetMaterialGroupEjb */
	virtual void CreateSingleDrawCallMeshHelper(class CMeshInstance *, VertexBufferHandle_t, IndexBufferHandle_t, HMaterial, enum RenderPrimitiveType_t, int, int, const class Vector  &, const class Vector  &, bool, enum RenderMeshDrawPrimitiveFlags_t, bool); /* linkage=_ZN13CMeshInstance30CreateSingleDrawCallMeshHelperEP22VertexBufferHandle_t__P21IndexBufferHandle_t__11CWeakHandleI29InfoForResourceTypeIMaterial2E21RenderPrimitiveType_tiiRK6VectorSA_b30RenderMeshDrawPrimitiveFlags_tb */
	virtual void AppendDrawCallMeshHelper(class CMeshInstance *, VertexBufferHandle_t, IndexBufferHandle_t, HMaterial, enum RenderPrimitiveType_t, int, int, int, int, const class Vector  &, const class Vector  &, bool, bool); /* linkage=_ZN13CMeshInstance24AppendDrawCallMeshHelperEP22VertexBufferHandle_t__P21IndexBufferHandle_t__11CWeakHandleI29InfoForResourceTypeIMaterial2E21RenderPrimitiveType_tiiiiRK6VectorSA_bb */
	virtual void AddExtraVertexStreams(class CMeshInstance *, class ExtraSceneObjectStreamDesc_t *, int); /* linkage=_ZN13CMeshInstance21AddExtraVertexStreamsEP28ExtraSceneObjectStreamDesc_ti */
	virtual const class CModel  * GetModel(const class CMeshInstance  *); /* linkage=_ZNK13CMeshInstance8GetModelEv */
	virtual HModel GetModelHandle(const class CMeshInstance  *); /* linkage=_ZNK13CMeshInstance14GetModelHandleEv */
	virtual void ReplaceVBsIBs(class CMeshInstance *, const class CVertexBufferOverride  *, const class CIndexBufferOverride  *); /* linkage=_ZN13CMeshInstance13ReplaceVBsIBsEPK21CVertexBufferOverridePK20CIndexBufferOverride */
	virtual void DestroyOwnedVBAndIB(class CMeshInstance *); /* linkage=_ZN13CMeshInstance19DestroyOwnedVBAndIBEv */
	void CMeshInstance(class CMeshInstance *); /* linkage=_ZN13CMeshInstanceC4Ev */
	void CMeshInstance(class CMeshInstance *, class CModelMeshHandle, int, enum ESceneObjectFlags, class CSceneObject *, MeshGroupMask_t, LODGroupMask_t); /* linkage=_ZN13CMeshInstanceC4E16CModelMeshHandlei17ESceneObjectFlagsP12CSceneObjectyh */
	virtual void ~CMeshInstance(class CMeshInstance *); /* linkage=_ZN13CMeshInstanceD4Ev */
	void AllocateAnimatableData(class CMeshInstance *, uint32, const int16  *, int); /* linkage=_ZN13CMeshInstance22AllocateAnimatableDataEjPKsi */
	class CModelMeshHandle GetRenderMeshHandle(const class CMeshInstance  *); /* linkage=_ZNK13CMeshInstance19GetRenderMeshHandleEv */
	const class CRenderMesh  * GetRenderMesh(const class CMeshInstance  *); /* linkage=_ZNK13CMeshInstance13GetRenderMeshEv */
	const class CSceneObjectData  * GetSceneObjectData(const class CMeshInstance  *); /* linkage=_ZNK13CMeshInstance18GetSceneObjectDataEv */
	void GetBounds(const class CMeshInstance  *, class Vector &, class Vector &); /* linkage=_ZNK13CMeshInstance9GetBoundsER6VectorS1_ */
	int GetNumDrawCalls(const class CMeshInstance  *); /* linkage=_ZNK13CMeshInstance15GetNumDrawCallsEv */
	const class CMaterialDrawDescriptor  * GetDrawCallsPtr(const class CMeshInstance  *); /* linkage=_ZNK13CMeshInstance15GetDrawCallsPtrEv */
	const class CMaterialDrawDescriptor  * GetDrawCall(const class CMeshInstance  *, int); /* linkage=_ZNK13CMeshInstance11GetDrawCallEi */
	void SetAndOwnDrawDataOverride(class CMeshInstance *, class CSceneObjectData *); /* linkage=_ZN13CMeshInstance25SetAndOwnDrawDataOverrideEP16CSceneObjectData */
	MeshGroupMask_t GetMeshGroupMask(class CMeshInstance *); /* linkage=_ZN13CMeshInstance16GetMeshGroupMaskEv */
	LODGroupMask_t GetLODGroupMask(class CMeshInstance *); /* linkage=_ZN13CMeshInstance15GetLODGroupMaskEv */
	class CMeshInstance * GetNext(class CMeshInstance *); /* linkage=_ZN13CMeshInstance7GetNextEv */
	const class CRenderSkeleton  * GetRenderSkeleton(const class CMeshInstance  *); /* linkage=_ZNK13CMeshInstance17GetRenderSkeletonEv */
	const int16  * GetBoneLocalToMasterTable(const class CMeshInstance  *); /* linkage=_ZNK13CMeshInstance25GetBoneLocalToMasterTableEv */
	const int16  * GetFlexControllerLocalToMasterTable(const class CMeshInstance  *); /* linkage=_ZNK13CMeshInstance35GetFlexControllerLocalToMasterTableEv */
	int GetNumBones(const class CMeshInstance  *); /* linkage=_ZNK13CMeshInstance11GetNumBonesEv */
	bool SetCachedSlotInfo(class CMeshInstance *, uint, uint, bool, union CachedSlotInfo_t); /* linkage=_ZN13CMeshInstance17SetCachedSlotInfoEjjb16CachedSlotInfo_t */
	union CachedSlotInfo_t GetCachedSlotInfo(const class CMeshInstance  *); /* linkage=_ZNK13CMeshInstance17GetCachedSlotInfoEv */
	void AttachToSceneObjectRecursive(class CMeshInstance *, class CSceneObject *); /* linkage=_ZN13CMeshInstance28AttachToSceneObjectRecursiveEP12CSceneObject */
	const class CMorphSetData  * GetMorphSetData(const class CMeshInstance  *); /* linkage=_ZNK13CMeshInstance15GetMorphSetDataEv */
	bool UseMaterialGroup(class CMeshInstance *, class CUtlStringToken, bool); /* linkage=_ZN13CMeshInstance16UseMaterialGroupE15CUtlStringTokenb */
	bool UseMaterialGroup(class CMeshInstance *, uint32, bool); /* linkage=_ZN13CMeshInstance16UseMaterialGroupEjb */
	void CMeshInstance(class CMeshInstance *, const class CMeshInstance  &); /* linkage=_ZN13CMeshInstanceC4ERKS_ */
};

// <058EA949> ../../public/meshsystem/meshinstance.h:95
// member functions: 75
// member variables: 12
// vtable entries: 12
// class size: 80
class CMeshInstance {
	int ()(void) * * _vptr.CMeshInstance; /* 0 8 */
	/* ../../public/meshsystem/meshinstance.h:99 */
	virtual void SetMaterialOverrides(CMeshInstance* , HMaterial* , int);
	/* ../../public/meshsystem/meshinstance.h:102 */
	virtual void SetMaterialOverrides(CMeshInstance* , MaterialOverrideDesc_t* , int);
	/* ../../public/meshsystem/meshinstance.h:105 */
	virtual void SetMaterialOverride(CMeshInstance* , HMaterial, bool);
	/* ../../public/meshsystem/meshinstance.h:108 */
	virtual void SetMaterialGroupOverride(CMeshInstance* , int, bool);
	/* ../../public/meshsystem/meshinstance.h:111 */
	virtual void SetMaterialGroup(CMeshInstance* , uint32, bool);
	/* ../../public/meshsystem/meshinstance.h:114 */
	virtual void CreateSingleDrawCallMeshHelper(CMeshInstance* , VertexBufferHandle_t, IndexBufferHandle_t, HMaterial, RenderPrimitiveType_t, int, int, const Vector& , const Vector& , bool, RenderMeshDrawPrimitiveFlags_t, bool);
	/* ../../public/meshsystem/meshinstance.h:127 */
	virtual void AppendDrawCallMeshHelper(CMeshInstance* , VertexBufferHandle_t, IndexBufferHandle_t, HMaterial, RenderPrimitiveType_t, int, int, int, int, const Vector& , const Vector& , bool, bool);
	/* ../../public/meshsystem/meshinstance.h:132 */
	virtual void AddExtraVertexStreams(CMeshInstance* , ExtraSceneObjectStreamDesc_t* , int);
	/* ../../public/meshsystem/meshinstance.h:135 */
	virtual const CModel* GetModel(const CMeshInstance* );
	/* ../../public/meshsystem/meshinstance.h:138 */
	virtual HModel GetModelHandle(const CMeshInstance* );
	/* ../../public/meshsystem/meshinstance.h:140 */
	virtual void ReplaceVBsIBs(CMeshInstance* , const CVertexBufferOverride* , const CIndexBufferOverride* );
	/* ../../public/meshsystem/meshinstance.h:142 */
	virtual void DestroyOwnedVBAndIB(CMeshInstance* );
protected:
	/* ../../public/meshsystem/meshinstance.h:145 */
	void CMeshInstance(CMeshInstance* );
	/* ../../public/meshsystem/meshinstance.h:160 */
	void CMeshInstance(CMeshInstance* , CModelMeshHandle, int, ESceneObjectFlags, CSceneObject* , MeshGroupMask_t, LODGroupMask_t);
	/* ../../public/meshsystem/meshinstance.h:177 */
	virtual void ~CMeshInstance(CMeshInstance* );
	/* ../../public/meshsystem/meshinstance.h:256 */
	void AllocateAnimatableData(CMeshInstance* , uint32, const int16* , int);
	/* ../../public/meshsystem/meshinstance.h:274 */
	CModelMeshHandle GetRenderMeshHandle(const CMeshInstance* );
	/* ../../public/meshsystem/meshinstance.h:279 */
	const CRenderMesh* GetRenderMesh(const CMeshInstance* );
	/* ../../public/meshsystem/meshinstance.h:284 */
	const CSceneObjectData* GetSceneObjectData(const CMeshInstance* );
	/* ../../public/meshsystem/meshinstance.h:308 */
	void GetBounds(const CMeshInstance* , Vector& , Vector& );
	/* ../../public/meshsystem/meshinstance.h:320 */
	int GetNumDrawCalls(const CMeshInstance* );
	/* ../../public/meshsystem/meshinstance.h:330 */
	const CMaterialDrawDescriptor* GetDrawCallsPtr(const CMeshInstance* );
	/* ../../public/meshsystem/meshinstance.h:340 */
	const CMaterialDrawDescriptor* GetDrawCall(const CMeshInstance* , int);
	/* ../../public/meshsystem/meshinstance.h:350 */
	void SetAndOwnDrawDataOverride(CMeshInstance* , CSceneObjectData* );
	/* ../../public/meshsystem/meshinstance.h:363 */
	MeshGroupMask_t GetMeshGroupMask(CMeshInstance* );
	/* ../../public/meshsystem/meshinstance.h:368 */
	LODGroupMask_t GetLODGroupMask(CMeshInstance* );
	/* ../../public/meshsystem/meshinstance.h:373 */
	CMeshInstance* GetNext(CMeshInstance* );
	/* ../../public/meshsystem/meshinstance.h:378 */
	const CRenderSkeleton* GetRenderSkeleton(const CMeshInstance* );
	/* ../../public/meshsystem/meshinstance.h:386 */
	const int16* GetBoneLocalToMasterTable(const CMeshInstance* );
	/* ../../public/meshsystem/meshinstance.h:393 */
	const int16* GetFlexControllerLocalToMasterTable(const CMeshInstance* );
	/* ../../public/meshsystem/meshinstance.h:400 */
	int GetNumBones(const CMeshInstance* );
	/* ../../public/meshsystem/meshinstance.h:408 */
	bool SetCachedSlotInfo(CMeshInstance* , uint, uint, bool, union CachedSlotInfo_t);
	/* ../../public/meshsystem/meshinstance.h:423 */
	union CachedSlotInfo_t GetCachedSlotInfo(const CMeshInstance* );
	/* ../../public/meshsystem/meshinstance.h:430 */
	void AttachToSceneObjectRecursive(CMeshInstance* , CSceneObject* );
	/* ../../public/meshsystem/meshinstance.h:437 */
	const CMorphSetData* GetMorphSetData(const CMeshInstance* );
	/* ../../public/meshsystem/meshinstance.h:446 */
	bool UseMaterialGroup(CMeshInstance* , CUtlStringToken, bool);
	/* ../../public/meshsystem/meshinstance.h:452 */
	bool UseMaterialGroup(CMeshInstance* , uint32, bool);
	CModelMeshHandleStrong m_hRenderMesh; /* 8 16 */
	CSceneObjectData * m_pFixedMeshDataOverride; /* 24 8 */
	ESceneObjectFlags m_nOriginalSceneObjectFlags; /* 32 8 */
	CSceneObject * m_pSceneObject; /* 40 8 */
	MeshGroupMask_t m_nMeshGroupMask; /* 48 8 */
	CMeshInstance * m_pNext; /* 56 8 */
	CMeshInstanceAnimatableData * m_pAnimatableData; /* 64 8 */
	uint32 m_nCurrentMaterialGroup; /* 72 4 */
	uint16 m_nSceneObjectIndex; /* 76 2 */
	LODGroupMask_t m_nLODGroupMask; /* 78 1 */
	bool m_bOwnVBAndIB; /* 79 1 */
	virtual void SetMaterialOverrides(class CMeshInstance *, HMaterial *, int); /* linkage=_ZN13CMeshInstance20SetMaterialOverridesEP11CWeakHandleI29InfoForResourceTypeIMaterial2Ei */
	virtual void SetMaterialOverrides(class CMeshInstance *, class MaterialOverrideDesc_t *, int); /* linkage=_ZN13CMeshInstance20SetMaterialOverridesEP22MaterialOverrideDesc_ti */
	virtual void SetMaterialOverride(class CMeshInstance *, HMaterial, bool); /* linkage=_ZN13CMeshInstance19SetMaterialOverrideE11CWeakHandleI29InfoForResourceTypeIMaterial2Eb */
	virtual void SetMaterialGroupOverride(class CMeshInstance *, int, bool); /* linkage=_ZN13CMeshInstance24SetMaterialGroupOverrideEib */
	virtual void SetMaterialGroup(class CMeshInstance *, uint32, bool); /* linkage=_ZN13CMeshInstance16SetMaterialGroupEjb */
	virtual void CreateSingleDrawCallMeshHelper(class CMeshInstance *, VertexBufferHandle_t, IndexBufferHandle_t, HMaterial, enum RenderPrimitiveType_t, int, int, const class Vector  &, const class Vector  &, bool, enum RenderMeshDrawPrimitiveFlags_t, bool); /* linkage=_ZN13CMeshInstance30CreateSingleDrawCallMeshHelperEP22VertexBufferHandle_t__P21IndexBufferHandle_t__11CWeakHandleI29InfoForResourceTypeIMaterial2E21RenderPrimitiveType_tiiRK6VectorSA_b30RenderMeshDrawPrimitiveFlags_tb */
	virtual void AppendDrawCallMeshHelper(class CMeshInstance *, VertexBufferHandle_t, IndexBufferHandle_t, HMaterial, enum RenderPrimitiveType_t, int, int, int, int, const class Vector  &, const class Vector  &, bool, bool); /* linkage=_ZN13CMeshInstance24AppendDrawCallMeshHelperEP22VertexBufferHandle_t__P21IndexBufferHandle_t__11CWeakHandleI29InfoForResourceTypeIMaterial2E21RenderPrimitiveType_tiiiiRK6VectorSA_bb */
	virtual void AddExtraVertexStreams(class CMeshInstance *, class ExtraSceneObjectStreamDesc_t *, int); /* linkage=_ZN13CMeshInstance21AddExtraVertexStreamsEP28ExtraSceneObjectStreamDesc_ti */
	virtual const class CModel  * GetModel(const class CMeshInstance  *); /* linkage=_ZNK13CMeshInstance8GetModelEv */
	virtual HModel GetModelHandle(const class CMeshInstance  *); /* linkage=_ZNK13CMeshInstance14GetModelHandleEv */
	virtual void ReplaceVBsIBs(class CMeshInstance *, const class CVertexBufferOverride  *, const class CIndexBufferOverride  *); /* linkage=_ZN13CMeshInstance13ReplaceVBsIBsEPK21CVertexBufferOverridePK20CIndexBufferOverride */
	virtual void DestroyOwnedVBAndIB(class CMeshInstance *); /* linkage=_ZN13CMeshInstance19DestroyOwnedVBAndIBEv */
	void CMeshInstance(class CMeshInstance *); /* linkage=_ZN13CMeshInstanceC4Ev */
	void CMeshInstance(class CMeshInstance *, class CModelMeshHandle, int, enum ESceneObjectFlags, class CSceneObject *, MeshGroupMask_t, LODGroupMask_t); /* linkage=_ZN13CMeshInstanceC4E16CModelMeshHandlei17ESceneObjectFlagsP12CSceneObjectyh */
	virtual void ~CMeshInstance(class CMeshInstance *); /* linkage=_ZN13CMeshInstanceD4Ev */
	void AllocateAnimatableData(class CMeshInstance *, uint32, const int16  *, int); /* linkage=_ZN13CMeshInstance22AllocateAnimatableDataEjPKsi */
	class CModelMeshHandle GetRenderMeshHandle(const class CMeshInstance  *); /* linkage=_ZNK13CMeshInstance19GetRenderMeshHandleEv */
	const class CRenderMesh  * GetRenderMesh(const class CMeshInstance  *); /* linkage=_ZNK13CMeshInstance13GetRenderMeshEv */
	const class CSceneObjectData  * GetSceneObjectData(const class CMeshInstance  *); /* linkage=_ZNK13CMeshInstance18GetSceneObjectDataEv */
	void GetBounds(const class CMeshInstance  *, class Vector &, class Vector &); /* linkage=_ZNK13CMeshInstance9GetBoundsER6VectorS1_ */
	int GetNumDrawCalls(const class CMeshInstance  *); /* linkage=_ZNK13CMeshInstance15GetNumDrawCallsEv */
	const class CMaterialDrawDescriptor  * GetDrawCallsPtr(const class CMeshInstance  *); /* linkage=_ZNK13CMeshInstance15GetDrawCallsPtrEv */
	const class CMaterialDrawDescriptor  * GetDrawCall(const class CMeshInstance  *, int); /* linkage=_ZNK13CMeshInstance11GetDrawCallEi */
	void SetAndOwnDrawDataOverride(class CMeshInstance *, class CSceneObjectData *); /* linkage=_ZN13CMeshInstance25SetAndOwnDrawDataOverrideEP16CSceneObjectData */
	MeshGroupMask_t GetMeshGroupMask(class CMeshInstance *); /* linkage=_ZN13CMeshInstance16GetMeshGroupMaskEv */
	LODGroupMask_t GetLODGroupMask(class CMeshInstance *); /* linkage=_ZN13CMeshInstance15GetLODGroupMaskEv */
	class CMeshInstance * GetNext(class CMeshInstance *); /* linkage=_ZN13CMeshInstance7GetNextEv */
	const class CRenderSkeleton  * GetRenderSkeleton(const class CMeshInstance  *); /* linkage=_ZNK13CMeshInstance17GetRenderSkeletonEv */
	const int16  * GetBoneLocalToMasterTable(const class CMeshInstance  *); /* linkage=_ZNK13CMeshInstance25GetBoneLocalToMasterTableEv */
	const int16  * GetFlexControllerLocalToMasterTable(const class CMeshInstance  *); /* linkage=_ZNK13CMeshInstance35GetFlexControllerLocalToMasterTableEv */
	int GetNumBones(const class CMeshInstance  *); /* linkage=_ZNK13CMeshInstance11GetNumBonesEv */
	bool SetCachedSlotInfo(class CMeshInstance *, uint, uint, bool, union CachedSlotInfo_t); /* linkage=_ZN13CMeshInstance17SetCachedSlotInfoEjjb16CachedSlotInfo_t */
	union CachedSlotInfo_t GetCachedSlotInfo(const class CMeshInstance  *); /* linkage=_ZNK13CMeshInstance17GetCachedSlotInfoEv */
	void AttachToSceneObjectRecursive(class CMeshInstance *, class CSceneObject *); /* linkage=_ZN13CMeshInstance28AttachToSceneObjectRecursiveEP12CSceneObject */
	const class CMorphSetData  * GetMorphSetData(const class CMeshInstance  *); /* linkage=_ZNK13CMeshInstance15GetMorphSetDataEv */
	bool UseMaterialGroup(class CMeshInstance *, class CUtlStringToken, bool); /* linkage=_ZN13CMeshInstance16UseMaterialGroupE15CUtlStringTokenb */
	bool UseMaterialGroup(class CMeshInstance *, uint32, bool); /* linkage=_ZN13CMeshInstance16UseMaterialGroupEjb */
	void CMeshInstance(class CMeshInstance *, const class CMeshInstance  &); /* linkage=_ZN13CMeshInstanceC4ERKS_ */
};

// <000700BF> ../public/meshsystem/meshinstance.h:95
// member functions: 76
// member variables: 12
// vtable entries: 12
// class size: 80
class CMeshInstance {
	void CMeshInstance(CMeshInstance* , const CMeshInstance& );
	int ()(void) * * _vptr.CMeshInstance; /* 0 8 */
	/* ../public/meshsystem/meshinstance.h:99 */
	virtual void SetMaterialOverrides(CMeshInstance* , HMaterial* , int);
	/* ../public/meshsystem/meshinstance.h:102 */
	virtual void SetMaterialOverrides(CMeshInstance* , MaterialOverrideDesc_t* , int);
	/* ../public/meshsystem/meshinstance.h:105 */
	virtual void SetMaterialOverride(CMeshInstance* , HMaterial, bool);
	/* ../public/meshsystem/meshinstance.h:108 */
	virtual void SetMaterialGroupOverride(CMeshInstance* , int, bool);
	/* ../public/meshsystem/meshinstance.h:111 */
	virtual void SetMaterialGroup(CMeshInstance* , uint32, bool);
	/* ../public/meshsystem/meshinstance.h:114 */
	virtual void CreateSingleDrawCallMeshHelper(CMeshInstance* , VertexBufferHandle_t, IndexBufferHandle_t, HMaterial, RenderPrimitiveType_t, int, int, const Vector& , const Vector& , bool, RenderMeshDrawPrimitiveFlags_t, bool);
	/* ../public/meshsystem/meshinstance.h:127 */
	virtual void AppendDrawCallMeshHelper(CMeshInstance* , VertexBufferHandle_t, IndexBufferHandle_t, HMaterial, RenderPrimitiveType_t, int, int, int, int, const Vector& , const Vector& , bool, bool);
	/* ../public/meshsystem/meshinstance.h:132 */
	virtual void AddExtraVertexStreams(CMeshInstance* , ExtraSceneObjectStreamDesc_t* , int);
	/* ../public/meshsystem/meshinstance.h:135 */
	virtual const CModel* GetModel(const CMeshInstance* );
	/* ../public/meshsystem/meshinstance.h:138 */
	virtual HModel GetModelHandle(const CMeshInstance* );
	/* ../public/meshsystem/meshinstance.h:140 */
	virtual void ReplaceVBsIBs(CMeshInstance* , const CVertexBufferOverride* , const CIndexBufferOverride* );
	/* ../public/meshsystem/meshinstance.h:142 */
	virtual void DestroyOwnedVBAndIB(CMeshInstance* );
protected:
	/* ../public/meshsystem/meshinstance.h:145 */
	void CMeshInstance(CMeshInstance* );
	/* ../public/meshsystem/meshinstance.h:160 */
	void CMeshInstance(CMeshInstance* , CModelMeshHandle, int, ESceneObjectFlags, CSceneObject* , MeshGroupMask_t, LODGroupMask_t);
	/* ../public/meshsystem/meshinstance.h:177 */
	virtual void ~CMeshInstance(CMeshInstance* );
	/* ../public/meshsystem/meshinstance.h:256 */
	void AllocateAnimatableData(CMeshInstance* , uint32, const int16* , int);
	/* ../public/meshsystem/meshinstance.h:274 */
	CModelMeshHandle GetRenderMeshHandle(const CMeshInstance* );
	/* ../public/meshsystem/meshinstance.h:279 */
	const CRenderMesh* GetRenderMesh(const CMeshInstance* );
	/* ../public/meshsystem/meshinstance.h:284 */
	const CSceneObjectData* GetSceneObjectData(const CMeshInstance* );
	/* ../public/meshsystem/meshinstance.h:308 */
	void GetBounds(const CMeshInstance* , Vector& , Vector& );
	/* ../public/meshsystem/meshinstance.h:320 */
	int GetNumDrawCalls(const CMeshInstance* );
	/* ../public/meshsystem/meshinstance.h:330 */
	const CMaterialDrawDescriptor* GetDrawCallsPtr(const CMeshInstance* );
	/* ../public/meshsystem/meshinstance.h:340 */
	const CMaterialDrawDescriptor* GetDrawCall(const CMeshInstance* , int);
	/* ../public/meshsystem/meshinstance.h:350 */
	void SetAndOwnDrawDataOverride(CMeshInstance* , CSceneObjectData* );
	/* ../public/meshsystem/meshinstance.h:363 */
	MeshGroupMask_t GetMeshGroupMask(CMeshInstance* );
	/* ../public/meshsystem/meshinstance.h:368 */
	LODGroupMask_t GetLODGroupMask(CMeshInstance* );
	/* ../public/meshsystem/meshinstance.h:373 */
	CMeshInstance* GetNext(CMeshInstance* );
	/* ../public/meshsystem/meshinstance.h:378 */
	const CRenderSkeleton* GetRenderSkeleton(const CMeshInstance* );
	/* ../public/meshsystem/meshinstance.h:386 */
	const int16* GetBoneLocalToMasterTable(const CMeshInstance* );
	/* ../public/meshsystem/meshinstance.h:393 */
	const int16* GetFlexControllerLocalToMasterTable(const CMeshInstance* );
	/* ../public/meshsystem/meshinstance.h:400 */
	int GetNumBones(const CMeshInstance* );
	/* ../public/meshsystem/meshinstance.h:408 */
	bool SetCachedSlotInfo(CMeshInstance* , uint, uint, bool, union CachedSlotInfo_t);
	/* ../public/meshsystem/meshinstance.h:423 */
	union CachedSlotInfo_t GetCachedSlotInfo(const CMeshInstance* );
	/* ../public/meshsystem/meshinstance.h:430 */
	void AttachToSceneObjectRecursive(CMeshInstance* , CSceneObject* );
	/* ../public/meshsystem/meshinstance.h:437 */
	const CMorphSetData* GetMorphSetData(const CMeshInstance* );
	/* ../public/meshsystem/meshinstance.h:446 */
	bool UseMaterialGroup(CMeshInstance* , CUtlStringToken, bool);
	/* ../public/meshsystem/meshinstance.h:452 */
	bool UseMaterialGroup(CMeshInstance* , uint32, bool);
	CModelMeshHandleStrong m_hRenderMesh; /* 8 16 */
	CSceneObjectData * m_pFixedMeshDataOverride; /* 24 8 */
	ESceneObjectFlags m_nOriginalSceneObjectFlags; /* 32 8 */
	CSceneObject * m_pSceneObject; /* 40 8 */
	MeshGroupMask_t m_nMeshGroupMask; /* 48 8 */
	CMeshInstance * m_pNext; /* 56 8 */
	CMeshInstanceAnimatableData * m_pAnimatableData; /* 64 8 */
	uint32 m_nCurrentMaterialGroup; /* 72 4 */
	uint16 m_nSceneObjectIndex; /* 76 2 */
	LODGroupMask_t m_nLODGroupMask; /* 78 1 */
	bool m_bOwnVBAndIB; /* 79 1 */
	virtual void SetMaterialOverrides(class CMeshInstance *, HMaterial *, int); /* linkage=_ZN13CMeshInstance20SetMaterialOverridesEP11CWeakHandleI29InfoForResourceTypeIMaterial2Ei */
	virtual void SetMaterialOverrides(class CMeshInstance *, class MaterialOverrideDesc_t *, int); /* linkage=_ZN13CMeshInstance20SetMaterialOverridesEP22MaterialOverrideDesc_ti */
	virtual void SetMaterialOverride(class CMeshInstance *, HMaterial, bool); /* linkage=_ZN13CMeshInstance19SetMaterialOverrideE11CWeakHandleI29InfoForResourceTypeIMaterial2Eb */
	virtual void SetMaterialGroupOverride(class CMeshInstance *, int, bool); /* linkage=_ZN13CMeshInstance24SetMaterialGroupOverrideEib */
	virtual void SetMaterialGroup(class CMeshInstance *, uint32, bool); /* linkage=_ZN13CMeshInstance16SetMaterialGroupEjb */
	virtual void CreateSingleDrawCallMeshHelper(class CMeshInstance *, VertexBufferHandle_t, IndexBufferHandle_t, HMaterial, enum RenderPrimitiveType_t, int, int, const class Vector  &, const class Vector  &, bool, enum RenderMeshDrawPrimitiveFlags_t, bool); /* linkage=_ZN13CMeshInstance30CreateSingleDrawCallMeshHelperEP22VertexBufferHandle_t__P21IndexBufferHandle_t__11CWeakHandleI29InfoForResourceTypeIMaterial2E21RenderPrimitiveType_tiiRK6VectorSA_b30RenderMeshDrawPrimitiveFlags_tb */
	virtual void AppendDrawCallMeshHelper(class CMeshInstance *, VertexBufferHandle_t, IndexBufferHandle_t, HMaterial, enum RenderPrimitiveType_t, int, int, int, int, const class Vector  &, const class Vector  &, bool, bool); /* linkage=_ZN13CMeshInstance24AppendDrawCallMeshHelperEP22VertexBufferHandle_t__P21IndexBufferHandle_t__11CWeakHandleI29InfoForResourceTypeIMaterial2E21RenderPrimitiveType_tiiiiRK6VectorSA_bb */
	virtual void AddExtraVertexStreams(class CMeshInstance *, class ExtraSceneObjectStreamDesc_t *, int); /* linkage=_ZN13CMeshInstance21AddExtraVertexStreamsEP28ExtraSceneObjectStreamDesc_ti */
	virtual const class CModel  * GetModel(const class CMeshInstance  *); /* linkage=_ZNK13CMeshInstance8GetModelEv */
	virtual HModel GetModelHandle(const class CMeshInstance  *); /* linkage=_ZNK13CMeshInstance14GetModelHandleEv */
	virtual void ReplaceVBsIBs(class CMeshInstance *, const class CVertexBufferOverride  *, const class CIndexBufferOverride  *); /* linkage=_ZN13CMeshInstance13ReplaceVBsIBsEPK21CVertexBufferOverridePK20CIndexBufferOverride */
	virtual void DestroyOwnedVBAndIB(class CMeshInstance *); /* linkage=_ZN13CMeshInstance19DestroyOwnedVBAndIBEv */
	void CMeshInstance(class CMeshInstance *); /* linkage=_ZN13CMeshInstanceC4Ev */
	void CMeshInstance(class CMeshInstance *, class CModelMeshHandle, int, enum ESceneObjectFlags, class CSceneObject *, MeshGroupMask_t, LODGroupMask_t); /* linkage=_ZN13CMeshInstanceC4E16CModelMeshHandlei17ESceneObjectFlagsP12CSceneObjectyh */
	virtual void ~CMeshInstance(class CMeshInstance *); /* linkage=_ZN13CMeshInstanceD4Ev */
	void AllocateAnimatableData(class CMeshInstance *, uint32, const int16  *, int); /* linkage=_ZN13CMeshInstance22AllocateAnimatableDataEjPKsi */
	class CModelMeshHandle GetRenderMeshHandle(const class CMeshInstance  *); /* linkage=_ZNK13CMeshInstance19GetRenderMeshHandleEv */
	const class CRenderMesh  * GetRenderMesh(const class CMeshInstance  *); /* linkage=_ZNK13CMeshInstance13GetRenderMeshEv */
	const class CSceneObjectData  * GetSceneObjectData(const class CMeshInstance  *); /* linkage=_ZNK13CMeshInstance18GetSceneObjectDataEv */
	void GetBounds(const class CMeshInstance  *, class Vector &, class Vector &); /* linkage=_ZNK13CMeshInstance9GetBoundsER6VectorS1_ */
	int GetNumDrawCalls(const class CMeshInstance  *); /* linkage=_ZNK13CMeshInstance15GetNumDrawCallsEv */
	const class CMaterialDrawDescriptor  * GetDrawCallsPtr(const class CMeshInstance  *); /* linkage=_ZNK13CMeshInstance15GetDrawCallsPtrEv */
	const class CMaterialDrawDescriptor  * GetDrawCall(const class CMeshInstance  *, int); /* linkage=_ZNK13CMeshInstance11GetDrawCallEi */
	void SetAndOwnDrawDataOverride(class CMeshInstance *, class CSceneObjectData *); /* linkage=_ZN13CMeshInstance25SetAndOwnDrawDataOverrideEP16CSceneObjectData */
	MeshGroupMask_t GetMeshGroupMask(class CMeshInstance *); /* linkage=_ZN13CMeshInstance16GetMeshGroupMaskEv */
	LODGroupMask_t GetLODGroupMask(class CMeshInstance *); /* linkage=_ZN13CMeshInstance15GetLODGroupMaskEv */
	class CMeshInstance * GetNext(class CMeshInstance *); /* linkage=_ZN13CMeshInstance7GetNextEv */
	const class CRenderSkeleton  * GetRenderSkeleton(const class CMeshInstance  *); /* linkage=_ZNK13CMeshInstance17GetRenderSkeletonEv */
	const int16  * GetBoneLocalToMasterTable(const class CMeshInstance  *); /* linkage=_ZNK13CMeshInstance25GetBoneLocalToMasterTableEv */
	const int16  * GetFlexControllerLocalToMasterTable(const class CMeshInstance  *); /* linkage=_ZNK13CMeshInstance35GetFlexControllerLocalToMasterTableEv */
	int GetNumBones(const class CMeshInstance  *); /* linkage=_ZNK13CMeshInstance11GetNumBonesEv */
	bool SetCachedSlotInfo(class CMeshInstance *, uint, uint, bool, union CachedSlotInfo_t); /* linkage=_ZN13CMeshInstance17SetCachedSlotInfoEjjb16CachedSlotInfo_t */
	union CachedSlotInfo_t GetCachedSlotInfo(const class CMeshInstance  *); /* linkage=_ZNK13CMeshInstance17GetCachedSlotInfoEv */
	void AttachToSceneObjectRecursive(class CMeshInstance *, class CSceneObject *); /* linkage=_ZN13CMeshInstance28AttachToSceneObjectRecursiveEP12CSceneObject */
	const class CMorphSetData  * GetMorphSetData(const class CMeshInstance  *); /* linkage=_ZNK13CMeshInstance15GetMorphSetDataEv */
	bool UseMaterialGroup(class CMeshInstance *, class CUtlStringToken, bool); /* linkage=_ZN13CMeshInstance16UseMaterialGroupE15CUtlStringTokenb */
	bool UseMaterialGroup(class CMeshInstance *, uint32, bool); /* linkage=_ZN13CMeshInstance16UseMaterialGroupEjb */
	void CMeshInstance(class CMeshInstance *, const class CMeshInstance  &); /* linkage=_ZN13CMeshInstanceC4ERKS_ */
};

// <0008127B> ../public/meshsystem/meshinstance.h:145
void CMeshInstance::CMeshInstance()
{
} /* size: 0 */

// <00081262> ../public/meshsystem/meshinstance.h:145
inline void CMeshInstance::CMeshInstance()
{
} /* size: 0 */

// <000811D7> ../public/meshsystem/meshinstance.h:160
void CMeshInstance::CMeshInstance(CModelMeshHandle hRenderMesh, int nSceneObjectIndex, ESceneObjectFlags nOriginalSceneObjectFlags, CSceneObject* pSceneObject, MeshGroupMask_t nMeshGroupMask, LODGroupMask_t nLODGroupMask)
{
	{
		{
		}
	}
} /* size: 0 */

// <0008114C> ../public/meshsystem/meshinstance.h:160
// variables: 2
inline void CMeshInstance::CMeshInstance(CModelMeshHandle hRenderMesh, int nSceneObjectIndex, ESceneObjectFlags nOriginalSceneObjectFlags, CSceneObject* pSceneObject, MeshGroupMask_t nMeshGroupMask, LODGroupMask_t nLODGroupMask)
{
	const char   __FUNCTION__; // 32225
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
} /* size: 0, variables: 1 */

// <00081102> ../public/meshsystem/meshinstance.h:177
void CMeshInstance::~CMeshInstance()
{
} /* size: 0 */

// <000810D2> ../public/meshsystem/meshinstance.h:177
inline void CMeshInstance::~CMeshInstance()
{
} /* size: 0 */

// <00189676> ../public/meshsystem/meshinstance.h:256
inline void CMeshInstance::AllocateAnimatableData(uint32 nSceneSystemFrameCounter, const int16* pLocalToMasterTable, int nFlexDescCount)
{
} /* size: 0 */

// <03EA5F7D> ../public/meshsystem/meshinstance.h:279
inline void CMeshInstance::GetRenderMesh()
{
} /* size: 0 */

// <06E2A14C> ../../public/meshsystem/meshinstance.h:284
// variable: 1
void CMeshInstance::GetSceneObjectData()
{
	const CRenderMesh* pRenderMesh; // 292
} /* size: 0, variables: 1 */

// <04021172> ../public/meshsystem/meshinstance.h:284
// variable: 1
inline void CMeshInstance::GetSceneObjectData()
{
	const CRenderMesh* pRenderMesh; // 292
} /* size: 0, variables: 1 */

// <04021132> ../public/meshsystem/meshinstance.h:308
// variable: 1
inline void CMeshInstance::GetBounds(Vector& vMinBounds, Vector& vMaxBounds)
{
	const CRenderMesh* pMesh; // 310
} /* size: 0, variables: 1 */

// <0402110C> ../public/meshsystem/meshinstance.h:320
// variable: 1
inline void CMeshInstance::GetNumDrawCalls()
{
	const CSceneObjectData* pSceneObjectData; // 322
} /* size: 0, variables: 1 */

// <036AE1E9> ../public/meshsystem/meshinstance.h:330
// variable: 1
inline void CMeshInstance::GetDrawCallsPtr()
{
	const CSceneObjectData* pSceneObjectData; // 332
} /* size: 0, variables: 1 */

// <06E2A11C> ../../public/meshsystem/meshinstance.h:340
// variable: 1
void CMeshInstance::GetDrawCall(int d)
{
	const CSceneObjectData* pSceneObjectData; // 342
} /* size: 0, variables: 1 */

// <040210DB> ../public/meshsystem/meshinstance.h:340
// variable: 1
inline void CMeshInstance::GetDrawCall(int d)
{
	const CSceneObjectData* pSceneObjectData; // 342
} /* size: 0, variables: 1 */

// <00081030> ../public/meshsystem/meshinstance.h:350
inline void CMeshInstance::SetAndOwnDrawDataOverride(CSceneObjectData* pDrawDataOverride)
{
} /* size: 0 */

// <040210C2> ../public/meshsystem/meshinstance.h:363
inline void CMeshInstance::GetMeshGroupMask()
{
} /* size: 0 */

// <040210A9> ../public/meshsystem/meshinstance.h:368
inline void CMeshInstance::GetLODGroupMask()
{
} /* size: 0 */

// <04021090> ../public/meshsystem/meshinstance.h:373
inline void CMeshInstance::GetNext()
{
} /* size: 0 */

// <03EA5EDA> ../public/meshsystem/meshinstance.h:378
// variable: 1
inline void CMeshInstance::GetRenderSkeleton()
{
	const CRenderMesh* pMesh; // 380
} /* size: 0, variables: 1 */

// <03EA5EC1> ../public/meshsystem/meshinstance.h:386
inline void CMeshInstance::GetBoneLocalToMasterTable()
{
} /* size: 0 */

// <03EA5EA8> ../public/meshsystem/meshinstance.h:393
inline void CMeshInstance::GetFlexControllerLocalToMasterTable()
{
} /* size: 0 */

// <03EA5E82> ../public/meshsystem/meshinstance.h:400
// variable: 1
inline void CMeshInstance::GetNumBones()
{
	const CRenderMesh* pMesh; // 402
} /* size: 0, variables: 1 */

// <03EA5E28> ../public/meshsystem/meshinstance.h:408
// variable: 1
inline void CMeshInstance::SetCachedSlotInfo(uint nFrame, uint m_nTransformSlotIndex, bool bMorphing, union CachedSlotInfo_t originalCachedSlotInfo)
{
	{
		union CachedSlotInfo_t t; // 412
	}
} /* size: 0 */

// <03EA5DD9> ../public/meshsystem/meshinstance.h:423
// variables: 3
inline void CMeshInstance::GetCachedSlotInfo()
{
	const char   __FUNCTION__; // 30068
	uint64 t; // 426
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 425
	}
} /* size: 0, variables: 2 */

// <004E96ED> ../public/meshsystem/meshinstance.h:430
inline void CMeshInstance::AttachToSceneObjectRecursive(CSceneObject* pSceneObject)
{
} /* size: 0 */

// <01111235> ../public/meshsystem/meshinstance.h:452
inline void CMeshInstance::UseMaterialGroup(uint32 nIDHash, bool bChainThrough)
{
} /* size: 0 */

