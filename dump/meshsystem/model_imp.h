
//
// meshsystem/model_imp.h
//
//	referenced by: libmeshsystem.so
//
//	functions: 3
//	class: 1
//	struct: 1
//

// <0034B7B9> meshsystem/model_imp.h:19
void EmbeddedMeshData_t::EmbeddedMeshData_t()
{
} /* size: 0 */

// <0034B79D> meshsystem/model_imp.h:19
inline void EmbeddedMeshData_t::EmbeddedMeshData_t()
{
} /* size: 0 */

// <002B8072> meshsystem/model_imp.h:19
// member function: 1
// member variables: 2
// struct size: 16
struct EmbeddedMeshData_t {
	int m_nExpectedIndex; /* 0 4 */
	CRenderMesh * m_pMesh; /* 8 8 */
	void EmbeddedMeshData_t(EmbeddedMeshData_t* );
};

// <0033EFDD> meshsystem/model_imp.h:28
// member functions: 54
// member variables: 8
// vtable entry: 1
// class size: 2,064
class CModel_Imp : public CModel {
public:
	/* class CModel <ancestor>; */ /* 0 0 */
	void CModel_Imp(CModel_Imp* , const CModel_Imp& );
	/* meshsystem/model_imp.cpp:177 */
	virtual bool IsInitialized(const CModel_Imp* );
	/* meshsystem/model_imp.cpp:22 */
	void CModel_Imp(CModel_Imp* , const char* );
	/* meshsystem/model_imp.cpp:146 */
	virtual void ~CModel_Imp(CModel_Imp* );
	/* meshsystem/model_imp.cpp:30 */
	void InitFromV0Data(CModel_Imp* , const PermModelData_t* , bool);
	/* meshsystem/model_imp.cpp:628 */
	void InitFromBuilder(CModel_Imp* , CModelBuilder* );
	/* meshsystem/model_imp.cpp:775 */
	void RegisterAdditionalExtRefs(CModel_Imp* , ResourceHandle_t, IRD_RegisterResourceDataUtils* );
	/* meshsystem/model_imp.cpp:528 */
	void AppendModelMeshesAndAnimations(CModel_Imp* );
	/* meshsystem/model_imp.h:46 */
	void SetReloadCounter(CModel_Imp* , int);
	const class PermModelData_t * m_pV0Data; /* 1928 8 */
	/* meshsystem/model_imp.cpp:600 */
	void AddEmbeddedMesh(CModel_Imp* , CRenderMesh* , int);
	/* meshsystem/model_imp.cpp:610 */
	void AddEmbeddedAnimData(CModel_Imp* , CAnimationGroupResource* );
	/* meshsystem/model_imp.cpp:619 */
	void AddEmbeddedPhysData(CModel_Imp* , const CPhysAggregateDataHandle& );
private:
	/* meshsystem/model_imp.cpp:799 */
	void SetupRuntimeDerivedData(CModel_Imp* );
	/* meshsystem/model_imp.cpp:110 */
	void InitEmbeddedData(CModel_Imp* , bool);
	/* meshsystem/model_imp.cpp:185 */
	void SetupMeshGroups(CModel_Imp* );
	/* meshsystem/model_imp.cpp:254 */
	void SetupMaterialGroups(CModel_Imp* );
	/* meshsystem/model_imp.cpp:283 */
	void AppendMesh(CModel_Imp* , const CRenderMesh* );
	/* meshsystem/model_imp.cpp:293 */
	void AppendFlexControllers(CModel_Imp* , const CRenderMesh* );
	/* meshsystem/model_imp.cpp:324 */
	int FindAttachment(CModel_Imp* , const char* );
	/* meshsystem/model_imp.cpp:341 */
	void AppendAttachments(CModel_Imp* , const CRenderMesh* );
	/* meshsystem/model_imp.cpp:409 */
	void ClearInternalData(CModel_Imp* );
	/* meshsystem/model_imp.cpp:424 */
	void ComputeRuntimeFlags(CModel_Imp* );
	/* meshsystem/model_imp.cpp:510 */
	void FixupHullAndViewBounds(CModel_Imp* );
	/* meshsystem/model_imp.cpp:816 */
	void SetupBoneConstraints(CModel_Imp* );
	/* meshsystem/model_imp.cpp:879 */
	void SetupStateDrivenMorphs(CModel_Imp* );
	/* meshsystem/model_imp.cpp:857 */
	void AddStateDrivenMorph(CModel_Imp* , int, uint32, const char* );
	bool m_bInitialized; /* 1936 1 */
	CUtlVector<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> > m_AdditionalExtRefs; /* 1944 32 */
	CUtlVector<EmbeddedMeshData_t, CUtlMemory<EmbeddedMeshData_t, int> > m_EmbeddedMeshes; /* 1976 32 */
	CAnimationGroupResource * m_pEmbeddedAnimData; /* 2008 8 */
	CPhysAggregateDataHandle m_pEmbeddedPhysData; /* 2016 8 */
	CUtlVector<CBoneConstraintBase*, CUtlMemory<CBoneConstraintBase*, int> > m_boneConstraintList; /* 2024 32 */
	/* meshsystem/model_imp.cpp:918 */
	void SetupVisemes(CModel_Imp* );
	void InitFromBuilder(class CModel_Imp *, class CModelBuilder *); /* linkage=_ZN10CModel_Imp15InitFromBuilderEP13CModelBuilder */
	void InitFromV0Data(class CModel_Imp *, const class PermModelData_t  *, bool); /* linkage=_ZN10CModel_Imp14InitFromV0DataEPK15PermModelData_tb */
	void RegisterAdditionalExtRefs(class CModel_Imp *, ResourceHandle_t, class IRD_RegisterResourceDataUtils *); /* linkage=_ZN10CModel_Imp25RegisterAdditionalExtRefsEPK21ResourceBindingBase_tP29IRD_RegisterResourceDataUtils */
	void CModel_Imp(class CModel_Imp *, const char  *); /* linkage=_ZN10CModel_ImpC4EPKc */
	void AddEmbeddedPhysData(class CModel_Imp *, const class CPhysAggregateDataHandle  &); /* linkage=_ZN10CModel_Imp19AddEmbeddedPhysDataERK24CPhysAggregateDataHandle */
	void AddEmbeddedAnimData(class CModel_Imp *, class CAnimationGroupResource *); /* linkage=_ZN10CModel_Imp19AddEmbeddedAnimDataEP23CAnimationGroupResource */
	void AddEmbeddedMesh(class CModel_Imp *, class CRenderMesh *, int); /* linkage=_ZN10CModel_Imp15AddEmbeddedMeshEP11CRenderMeshi */
	void CModel_Imp(class CModel_Imp *, const class CModel_Imp  &); /* linkage=_ZN10CModel_ImpC4ERKS_ */
	virtual bool IsInitialized(const class CModel_Imp  *); /* linkage=_ZNK10CModel_Imp13IsInitializedEv */
	virtual void ~CModel_Imp(class CModel_Imp *); /* linkage=_ZN10CModel_ImpD4Ev */
	void AppendModelMeshesAndAnimations(class CModel_Imp *); /* linkage=_ZN10CModel_Imp30AppendModelMeshesAndAnimationsEv */
	void SetReloadCounter(class CModel_Imp *, int); /* linkage=_ZN10CModel_Imp16SetReloadCounterEi */
	/* <3759ef> meshsystem/model_imp.cpp:799 */
	void SetupRuntimeDerivedData(class CModel_Imp *); /* linkage=_ZN10CModel_Imp23SetupRuntimeDerivedDataEv */
	void InitEmbeddedData(class CModel_Imp *, bool); /* linkage=_ZN10CModel_Imp16InitEmbeddedDataEb */
	void SetupMeshGroups(class CModel_Imp *); /* linkage=_ZN10CModel_Imp15SetupMeshGroupsEv */
	void SetupMaterialGroups(class CModel_Imp *); /* linkage=_ZN10CModel_Imp19SetupMaterialGroupsEv */
	/* <375973> meshsystem/model_imp.cpp:283 */
	void AppendMesh(class CModel_Imp *, const class CRenderMesh  *); /* linkage=_ZN10CModel_Imp10AppendMeshEPK11CRenderMesh */
	void AppendFlexControllers(class CModel_Imp *, const class CRenderMesh  *); /* linkage=_ZN10CModel_Imp21AppendFlexControllersEPK11CRenderMesh */
	/* <375718> meshsystem/model_imp.cpp:324 */
	int FindAttachment(class CModel_Imp *, const char  *); /* linkage=_ZN10CModel_Imp14FindAttachmentEPKc */
	void AppendAttachments(class CModel_Imp *, const class CRenderMesh  *); /* linkage=_ZN10CModel_Imp17AppendAttachmentsEPK11CRenderMesh */
	void ClearInternalData(class CModel_Imp *); /* linkage=_ZN10CModel_Imp17ClearInternalDataEv */
	void ComputeRuntimeFlags(class CModel_Imp *); /* linkage=_ZN10CModel_Imp19ComputeRuntimeFlagsEv */
	void FixupHullAndViewBounds(class CModel_Imp *); /* linkage=_ZN10CModel_Imp22FixupHullAndViewBoundsEv */
	void SetupBoneConstraints(class CModel_Imp *); /* linkage=_ZN10CModel_Imp20SetupBoneConstraintsEv */
	void SetupStateDrivenMorphs(class CModel_Imp *); /* linkage=_ZN10CModel_Imp22SetupStateDrivenMorphsEv */
	void AddStateDrivenMorph(class CModel_Imp *, int, uint32, const char  *); /* linkage=_ZN10CModel_Imp19AddStateDrivenMorphEijPKc */
	void SetupVisemes(class CModel_Imp *); /* linkage=_ZN10CModel_Imp12SetupVisemesEv */
};

// <0015E3A9> meshsystem/model_imp.h:36
void CModel_Imp::CModel_Imp(const char* pName)
{
} /* size: 0 */

