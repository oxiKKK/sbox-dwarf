
//
// meshsystem/meshinstance_imp.h
//
//	referenced by: libmeshsystem.so
//
//	functions: 2
//	class: 1
//

// <00075EA9> meshsystem/meshinstance_imp.h:18
// member functions: 44
// member variable: 1
// vtable entries: 12
// class size: 80
class CMeshInstance_Imp : public CMeshInstance {
public:
	/* class CMeshInstance <ancestor>; */ /* 0 80 */
	void CMeshInstance_Imp(CMeshInstance_Imp* , const CMeshInstance_Imp& );
	/* meshsystem/meshinstance_imp.cpp:55 */
	void CMeshInstance_Imp(CMeshInstance_Imp* );
	/* meshsystem/meshinstance_imp.cpp:60 */
	void CMeshInstance_Imp(CMeshInstance_Imp* , CModelMeshHandle, int, ESceneObjectFlags, CSceneObject* , MeshGroupMask_t, LODGroupMask_t);
	/* meshsystem/meshinstance_imp.cpp:66 */
	virtual void ~CMeshInstance_Imp(CMeshInstance_Imp* );
	/* meshsystem/meshinstance_imp.cpp:93 */
	virtual void SetMaterialOverrides(CMeshInstance_Imp* , HMaterial* , int);
	/* meshsystem/meshinstance_imp.cpp:122 */
	virtual void SetMaterialOverrides(CMeshInstance_Imp* , MaterialOverrideDesc_t* , int);
	/* meshsystem/meshinstance_imp.cpp:167 */
	virtual void SetMaterialOverride(CMeshInstance_Imp* , HMaterial, bool);
	/* meshsystem/meshinstance_imp.cpp:213 */
	virtual void SetMaterialGroupOverride(CMeshInstance_Imp* , int, bool);
	/* meshsystem/meshinstance_imp.cpp:202 */
	virtual void SetMaterialGroup(CMeshInstance_Imp* , uint32, bool);
	/* meshsystem/meshinstance_imp.cpp:264 */
	virtual void CreateSingleDrawCallMeshHelper(CMeshInstance_Imp* , VertexBufferHandle_t, IndexBufferHandle_t, HMaterial, RenderPrimitiveType_t, int, int, const Vector& , const Vector& , bool, RenderMeshDrawPrimitiveFlags_t, bool);
	/* meshsystem/meshinstance_imp.cpp:292 */
	virtual void AppendDrawCallMeshHelper(CMeshInstance_Imp* , VertexBufferHandle_t, IndexBufferHandle_t, HMaterial, RenderPrimitiveType_t, int, int, int, int, const Vector& , const Vector& , bool, bool);
	/* meshsystem/meshinstance_imp.cpp:316 */
	virtual void ReplaceVBsIBs(CMeshInstance_Imp* , const CVertexBufferOverride* , const CIndexBufferOverride* );
	/* meshsystem/meshinstance_imp.cpp:71 */
	virtual void DestroyOwnedVBAndIB(CMeshInstance_Imp* );
	/* meshsystem/meshinstance_imp.cpp:344 */
	virtual void AddExtraVertexStreams(CMeshInstance_Imp* , ExtraSceneObjectStreamDesc_t* , int);
	/* meshsystem/meshinstance_imp.cpp:403 */
	virtual const CModel* GetModel(const CMeshInstance_Imp* );
	/* meshsystem/meshinstance_imp.cpp:408 */
	virtual HModel GetModelHandle(const CMeshInstance_Imp* );
	/* meshsystem/meshinstance_imp.cpp:24 */
	void* operator new(size_t);
	/* meshsystem/meshinstance_imp.cpp:30 */
	void* operator new(size_t, int, const char* , int);
	/* meshsystem/meshinstance_imp.cpp:36 */
	void operator delete(void* );
	/* meshsystem/meshinstance_imp.cpp:19 */
	void operator delete(void* , int, const char* , int);
private:
	/* meshsystem/meshinstance_imp.cpp:225 */
	void ApplyMaterialGroupOverride(CMeshInstance_Imp* , int, bool);
	/* meshsystem/meshinstance_imp.cpp:145 */
	void ResetMaterialOverrides(CMeshInstance_Imp* );
	void CMeshInstance_Imp(class CMeshInstance_Imp *, const class CMeshInstance_Imp  &); /* linkage=_ZN17CMeshInstance_ImpC4ERKS_ */
	void CMeshInstance_Imp(class CMeshInstance_Imp *); /* linkage=_ZN17CMeshInstance_ImpC4Ev */
	void CMeshInstance_Imp(class CMeshInstance_Imp *, class CModelMeshHandle, int, enum ESceneObjectFlags, class CSceneObject *, MeshGroupMask_t, LODGroupMask_t); /* linkage=_ZN17CMeshInstance_ImpC4E16CModelMeshHandlei17ESceneObjectFlagsP12CSceneObjectyh */
	virtual void ~CMeshInstance_Imp(class CMeshInstance_Imp *); /* linkage=_ZN17CMeshInstance_ImpD4Ev */
	virtual void SetMaterialOverrides(class CMeshInstance_Imp *, HMaterial *, int); /* linkage=_ZN17CMeshInstance_Imp20SetMaterialOverridesEP11CWeakHandleI29InfoForResourceTypeIMaterial2Ei */
	virtual void SetMaterialOverrides(class CMeshInstance_Imp *, class MaterialOverrideDesc_t *, int); /* linkage=_ZN17CMeshInstance_Imp20SetMaterialOverridesEP22MaterialOverrideDesc_ti */
	virtual void SetMaterialOverride(class CMeshInstance_Imp *, HMaterial, bool); /* linkage=_ZN17CMeshInstance_Imp19SetMaterialOverrideE11CWeakHandleI29InfoForResourceTypeIMaterial2Eb */
	virtual void SetMaterialGroupOverride(class CMeshInstance_Imp *, int, bool); /* linkage=_ZN17CMeshInstance_Imp24SetMaterialGroupOverrideEib */
	virtual void SetMaterialGroup(class CMeshInstance_Imp *, uint32, bool); /* linkage=_ZN17CMeshInstance_Imp16SetMaterialGroupEjb */
	virtual void CreateSingleDrawCallMeshHelper(class CMeshInstance_Imp *, VertexBufferHandle_t, IndexBufferHandle_t, HMaterial, enum RenderPrimitiveType_t, int, int, const class Vector  &, const class Vector  &, bool, enum RenderMeshDrawPrimitiveFlags_t, bool); /* linkage=_ZN17CMeshInstance_Imp30CreateSingleDrawCallMeshHelperEP22VertexBufferHandle_t__P21IndexBufferHandle_t__11CWeakHandleI29InfoForResourceTypeIMaterial2E21RenderPrimitiveType_tiiRK6VectorSA_b30RenderMeshDrawPrimitiveFlags_tb */
	virtual void AppendDrawCallMeshHelper(class CMeshInstance_Imp *, VertexBufferHandle_t, IndexBufferHandle_t, HMaterial, enum RenderPrimitiveType_t, int, int, int, int, const class Vector  &, const class Vector  &, bool, bool); /* linkage=_ZN17CMeshInstance_Imp24AppendDrawCallMeshHelperEP22VertexBufferHandle_t__P21IndexBufferHandle_t__11CWeakHandleI29InfoForResourceTypeIMaterial2E21RenderPrimitiveType_tiiiiRK6VectorSA_bb */
	virtual void ReplaceVBsIBs(class CMeshInstance_Imp *, const class CVertexBufferOverride  *, const class CIndexBufferOverride  *); /* linkage=_ZN17CMeshInstance_Imp13ReplaceVBsIBsEPK21CVertexBufferOverridePK20CIndexBufferOverride */
	/* <81f89> meshsystem/meshinstance_imp.cpp:71 */
	virtual void DestroyOwnedVBAndIB(class CMeshInstance_Imp *); /* linkage=_ZN17CMeshInstance_Imp19DestroyOwnedVBAndIBEv */
	virtual void AddExtraVertexStreams(class CMeshInstance_Imp *, class ExtraSceneObjectStreamDesc_t *, int); /* linkage=_ZN17CMeshInstance_Imp21AddExtraVertexStreamsEP28ExtraSceneObjectStreamDesc_ti */
	virtual const class CModel  * GetModel(const class CMeshInstance_Imp  *); /* linkage=_ZNK17CMeshInstance_Imp8GetModelEv */
	virtual HModel GetModelHandle(const class CMeshInstance_Imp  *); /* linkage=_ZNK17CMeshInstance_Imp14GetModelHandleEv */
	void * operator new(size_t); /* linkage=_ZN17CMeshInstance_ImpnwEm */
	void * operator new(size_t, int, const char  *, int); /* linkage=_ZN17CMeshInstance_ImpnwEmiPKci */
	void operator delete(void *); /* linkage=_ZN17CMeshInstance_ImpdlEPv */
	void operator delete(void *, int, const char  *, int); /* linkage=_ZN17CMeshInstance_ImpdlEPviPKci */
	void ApplyMaterialGroupOverride(class CMeshInstance_Imp *, int, bool); /* linkage=_ZN17CMeshInstance_Imp26ApplyMaterialGroupOverrideEib */
	void ResetMaterialOverrides(class CMeshInstance_Imp *); /* linkage=_ZN17CMeshInstance_Imp22ResetMaterialOverridesEv */
};

// <0015E241> meshsystem/meshinstance_imp.h:21
void CMeshInstance_Imp::CMeshInstance_Imp()
{
} /* size: 0 */

// <0015E1DD> meshsystem/meshinstance_imp.h:22
void CMeshInstance_Imp::CMeshInstance_Imp(CModelMeshHandle hRenderMesh, int nSceneObjectIndex, ESceneObjectFlags nOriginalSceneObjectFlags, CSceneObject* pSceneObject, MeshGroupMask_t nMeshGroupMask, LODGroupMask_t nLODGroupMask)
{
} /* size: 0 */

