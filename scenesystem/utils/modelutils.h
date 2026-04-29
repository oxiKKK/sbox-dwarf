
//
// scenesystem/utils/modelutils.h
//
//	referenced by: libengine2.so
//
//	functions: 3
//	classes: 2
//

// <03B888FB> ../scenesystem/utils/modelutils.h:28
void CMDLAttachmentData::CMDLAttachmentData()
{
} /* size: 0 */

// <03B888DF> ../scenesystem/utils/modelutils.h:28
inline void CMDLAttachmentData::CMDLAttachmentData()
{
} /* size: 0 */

// <03B7E185> ../scenesystem/utils/modelutils.h:28
// member functions: 2
// member variables: 2
// class size: 52
class CMDLAttachmentData {
	matrix3x4_t m_AttachmentToWorld; /* 0 48 */
	bool m_bValid; /* 48 1 */
	void CMDLAttachmentData(CMDLAttachmentData* );
	void CMDLAttachmentData(class CMDLAttachmentData *); /* linkage=_ZN18CMDLAttachmentDataC4Ev */
};

// <03B850AD> ../scenesystem/utils/modelutils.h:39
// member functions: 86
// member variables: 38
// vtable entries: 33
// class size: 432
class CMDL : public IModelRenderHelper, public ISceneAnimatableProceduralBoneTransforms {
public:
	/* class IModelRenderHelper <ancestor>; */ /* 0 8 */
	/* class ISceneAnimatableProceduralBoneTransforms <ancestor>; */ /* 8 8 */
	void CMDL(CMDL* , const CMDL& );
	/* ../scenesystem/utils/modelutils.cpp:106 */
	virtual void AddRef(CMDL* );
	/* ../scenesystem/utils/modelutils.cpp:111 */
	virtual void Release(CMDL* );
	/* ../scenesystem/utils/modelutils.cpp:75 */
	virtual void SetMDL(CMDL* , HModel, ISceneWorld* , ESceneObjectFlags, ModelRenderAnimationType_t);
	/* ../scenesystem/utils/modelutils.cpp:119 */
	virtual HModel GetMDL(const CMDL* );
	/* ../scenesystem/utils/modelutils.cpp:137 */
	virtual const CModel* GetModelData(const CMDL* );
	/* ../scenesystem/utils/modelutils.cpp:564 */
	virtual bool GetAttachment(const CMDL* , AttachmentHandle_t, matrix3x4_t& );
	/* ../scenesystem/utils/modelutils.cpp:145 */
	virtual void SetSkin(CMDL* , CUtlStringToken);
	/* ../scenesystem/utils/modelutils.cpp:154 */
	virtual void SetSkin(CMDL* , int);
	/* ../scenesystem/utils/modelutils.cpp:159 */
	virtual void SetSequence(CMDL* , HSequence);
	/* ../scenesystem/utils/modelutils.cpp:168 */
	virtual HSequence GetSequence(const CMDL* );
	/* ../scenesystem/utils/modelutils.cpp:173 */
	virtual void SetTime(CMDL* , float);
	/* ../scenesystem/utils/modelutils.cpp:178 */
	virtual void SetPlaybackRate(CMDL* , float);
	/* ../scenesystem/utils/modelutils.cpp:183 */
	virtual void SetMeshGroupMask(CMDL* , MeshGroupMask_t);
	/* ../scenesystem/utils/modelutils.cpp:201 */
	virtual MeshGroupMask_t GetMeshGroupMask(const CMDL* );
	/* ../scenesystem/utils/modelutils.cpp:206 */
	virtual void SetMeshGroupMaskFromBodyParts(CMDL* , int, int);
	/* ../scenesystem/utils/modelutils.cpp:217 */
	virtual void SetTintRGBA_Gamma(CMDL* , const Vector4D& );
	/* ../scenesystem/utils/modelutils.cpp:232 */
	virtual void SetTransform(CMDL* , const matrix3x4_t& );
	/* ../scenesystem/utils/modelutils.cpp:222 */
	virtual void SetTransform(CMDL* , const matrix3x4_t& , const matrix3x4a_t* , int);
	/* ../scenesystem/utils/modelutils.cpp:239 */
	virtual void SetPoseParameters(CMDL* , const float* , int);
	/* ../scenesystem/utils/modelutils.cpp:246 */
	virtual void SetLOD(CMDL* , int);
	/* ../scenesystem/utils/modelutils.cpp:251 */
	virtual void SetMaterialOverride(CMDL* , HMaterial);
	/* ../scenesystem/utils/modelutils.cpp:260 */
	virtual void SetModelRenderAnimationType(CMDL* , ModelRenderAnimationType_t);
	/* ../scenesystem/utils/modelutils.cpp:286 */
	virtual void FinalizeForRendering(CMDL* , float);
	/* ../scenesystem/utils/modelutils.cpp:458 */
	virtual CSceneObject* GetSceneObject(const CMDL* );
	/* ../scenesystem/utils/modelutils.cpp:463 */
	virtual CSceneAnimatableObject* GetSceneAnimatableObject(const CMDL* );
	/* ../scenesystem/utils/modelutils.cpp:471 */
	virtual void AppendDrawPrimitives(CMDL* , CMeshPrimitiveOutputBuffer& , CMeshPrimitiveOutputBuffer& , const ISceneView* , ISceneLayer* );
	/* ../scenesystem/utils/modelutils.cpp:816 */
	virtual void PerformAnimationDecode(CMDL* , BoneFlags_t);
	/* ../scenesystem/utils/modelutils.cpp:577 */
	virtual void ForceLoopingAnimation(CMDL* , bool);
	/* ../scenesystem/utils/modelutils.cpp:583 */
	virtual void SetCycleOverride(CMDL* , float);
	/* ../scenesystem/utils/modelutils.cpp:589 */
	virtual void ClearCycleOverride(CMDL* );
	/* ../scenesystem/utils/modelutils.cpp:594 */
	virtual void SetRenderingEnabled(CMDL* , bool);
	/* ../scenesystem/utils/modelutils.cpp:196 */
	virtual void SetPruneUnusedMeshGroups(CMDL* , bool);
	/* ../scenesystem/utils/modelutils.cpp:29 */
	void CMDL(CMDL* );
	/* ../scenesystem/utils/modelutils.cpp:58 */
	void ~CMDL(CMDL* );
private:
	/* ../scenesystem/utils/modelutils.cpp:269 */
	virtual void SetBoneTransformsInSceneObject(CMDL* , CSceneAnimatableObject* , uint8);
	/* ../scenesystem/utils/modelutils.cpp:128 */
	void UnreferenceMDL(CMDL* );
	/* ../scenesystem/utils/modelutils.cpp:693 */
	void PerformAnimationDecodeForLOD(CMDL* , int, BoneFlags_t);
	/* ../scenesystem/utils/modelutils.cpp:775 */
	void UpdateWorldSpaceTransforms(CMDL* );
	/* ../scenesystem/utils/modelutils.cpp:515 */
	void SetupBones_AttachmentHelper(CMDL* , const CModel* , matrix3x4_t* );
	/* ../scenesystem/utils/modelutils.cpp:552 */
	bool PutAttachment(CMDL* , AttachmentHandle_t, const matrix3x4_t& );
	/* ../scenesystem/utils/modelutils.cpp:603 */
	void SetupSceneSystemAnimation(CMDL* , float);
	/* ../scenesystem/utils/modelutils.cpp:280 */
	void MarkAnimationDirty(CMDL* );
	CUtlVector<CMDLAttachmentData, CUtlMemory<CMDLAttachmentData, int> > m_Attachments; /* 16 32 */
	CInterlockedInt m_nRefCount __attribute__((__aligned__(4))); /* 48 4 */
	HModelStrong m_MDLHandle; /* 56 8 */
	HMaterialStrong m_hMaterialOverride; /* 64 8 */
	Color m_Color; /* 72 4 */
	CUtlStringToken m_nSkin; /* 76 4 */
	MeshGroupMask_t m_nMeshGroupMask; /* 80 8 */
	HSequence m_nSequence; /* 88 4 */
	int m_nLOD; /* 92 4 */
	float m_flPlaybackRate; /* 96 4 */
	float m_flTime; /* 100 4 */
	float m_flAnimationRealTime; /* 104 4 */
	float m_flCycle; /* 108 4 */
	CThreadSyncValue<CModelSkeleton::BoneFlags_t> m_boneFlags; /* 112 4 */
	CUtlVector<float, CUtlMemory<float, int> > m_flexControls; /* 120 32 */
	CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> > m_worldSpaceRenderBones; /* 152 32 */
	CUtlVector<float, CUtlMemory<float, int> > m_poseParams; /* 184 32 */
	Vector m_vecViewTarget; /* 216 12 */
	void * m_pProxyData; /* 232 8 */
	CSceneObject * m_pSceneObject; /* 240 8 */
	CAnimationState m_animationState __attribute__((__aligned__(16))); /* 256 48 */
	matrix3x4_t m_rootTransform; /* 304 48 */
	Vector4D m_vTintRGBA; /* 352 16 */
	ESceneObjectFlags m_nSceneObjectFlags; /* 368 8 */
	ModelRenderAnimationType_t m_nAnimType; /* 376 4 */
	ISceneWorld * m_pSceneWorld; /* 384 8 */
	bool m_bWorldSpaceViewTarget; /* 392 1 */
	bool m_bForceLoopingAnimation; /* 393 1 */
	bool m_bModelChanged; /* 394 1 */
	bool m_bMaterialOverrideOrSkinChanged; /* 395 1 */
	CThreadFastMutex m_calcAnimationMutex; /* 400 24 */
	float m_flCycleOverride; /* 424 4 */
	bool m_bCycleOverride; /* 428 1 */
	bool m_bRenderingEnabled; /* 429 1 */
	bool m_bTransformDirty; /* 430 1 */
	bool m_bPruneUnusedMeshGroups; /* 431 1 */
	void CMDL(class CMDL *, const class CMDL  &); /* linkage=_ZN4CMDLC4ERKS_ */
	virtual void AddRef(class CMDL *); /* linkage=_ZN4CMDL6AddRefEv */
	/* <3b9e666> ../scenesystem/utils/modelutils.cpp:111 */
	virtual void Release(class CMDL *); /* linkage=_ZN4CMDL7ReleaseEv */
	virtual void SetMDL(class CMDL *, HModel, class ISceneWorld *, enum ESceneObjectFlags, enum ModelRenderAnimationType_t); /* linkage=_ZN4CMDL6SetMDLE11CWeakHandleI25InfoForResourceTypeCModelEP11ISceneWorld17ESceneObjectFlags26ModelRenderAnimationType_t */
	virtual HModel GetMDL(const class CMDL  *); /* linkage=_ZNK4CMDL6GetMDLEv */
	/* <3b9d574> ../scenesystem/utils/modelutils.cpp:137 */
	virtual const class CModel  * GetModelData(const class CMDL  *); /* linkage=_ZNK4CMDL12GetModelDataEv */
	virtual bool GetAttachment(const class CMDL  *, class AttachmentHandle_t, class matrix3x4_t &); /* linkage=_ZNK4CMDL13GetAttachmentE18AttachmentHandle_tR11matrix3x4_t */
	/* <3b9d5ce> ../scenesystem/utils/modelutils.cpp:145 */
	virtual void SetSkin(class CMDL *, class CUtlStringToken); /* linkage=_ZN4CMDL7SetSkinE15CUtlStringToken */
	virtual void SetSkin(class CMDL *, int); /* linkage=_ZN4CMDL7SetSkinEi */
	virtual void SetSequence(class CMDL *, class HSequence); /* linkage=_ZN4CMDL11SetSequenceE9HSequence */
	virtual class HSequence GetSequence(const class CMDL  *); /* linkage=_ZNK4CMDL11GetSequenceEv */
	virtual void SetTime(class CMDL *, float); /* linkage=_ZN4CMDL7SetTimeEf */
	virtual void SetPlaybackRate(class CMDL *, float); /* linkage=_ZN4CMDL15SetPlaybackRateEf */
	/* <3b9d666> ../scenesystem/utils/modelutils.cpp:183 */
	virtual void SetMeshGroupMask(class CMDL *, MeshGroupMask_t); /* linkage=_ZN4CMDL16SetMeshGroupMaskEy */
	virtual MeshGroupMask_t GetMeshGroupMask(const class CMDL  *); /* linkage=_ZNK4CMDL16GetMeshGroupMaskEv */
	virtual void SetMeshGroupMaskFromBodyParts(class CMDL *, int, int); /* linkage=_ZN4CMDL29SetMeshGroupMaskFromBodyPartsEii */
	virtual void SetTintRGBA_Gamma(class CMDL *, const class Vector4D  &); /* linkage=_ZN4CMDL17SetTintRGBA_GammaERK8Vector4D */
	virtual void SetTransform(class CMDL *, const class matrix3x4_t  &); /* linkage=_ZN4CMDL12SetTransformERK11matrix3x4_t */
	virtual void SetTransform(class CMDL *, const class matrix3x4_t  &, const class matrix3x4a_t  *, int); /* linkage=_ZN4CMDL12SetTransformERK11matrix3x4_tPK12matrix3x4a_ti */
	virtual void SetPoseParameters(class CMDL *, const float  *, int); /* linkage=_ZN4CMDL17SetPoseParametersEPKfi */
	virtual void SetLOD(class CMDL *, int); /* linkage=_ZN4CMDL6SetLODEi */
	/* <3b9e36b> ../scenesystem/utils/modelutils.cpp:251 */
	virtual void SetMaterialOverride(class CMDL *, HMaterial); /* linkage=_ZN4CMDL19SetMaterialOverrideE11CWeakHandleI29InfoForResourceTypeIMaterial2E */
	virtual void SetModelRenderAnimationType(class CMDL *, enum ModelRenderAnimationType_t); /* linkage=_ZN4CMDL27SetModelRenderAnimationTypeE26ModelRenderAnimationType_t */
	virtual void FinalizeForRendering(class CMDL *, float); /* linkage=_ZN4CMDL20FinalizeForRenderingEf */
	virtual class CSceneObject * GetSceneObject(const class CMDL  *); /* linkage=_ZNK4CMDL14GetSceneObjectEv */
	/* <3b9d63c> ../scenesystem/utils/modelutils.cpp:463 */
	virtual class CSceneAnimatableObject * GetSceneAnimatableObject(const class CMDL  *); /* linkage=_ZNK4CMDL24GetSceneAnimatableObjectEv */
	virtual void AppendDrawPrimitives(class CMDL *, class CMeshPrimitiveOutputBuffer &, class CMeshPrimitiveOutputBuffer &, const class ISceneView  *, class ISceneLayer *); /* linkage=_ZN4CMDL20AppendDrawPrimitivesER26CMeshPrimitiveOutputBufferS1_PK10ISceneViewP11ISceneLayer */
	/* <3b9e2c4> ../scenesystem/utils/modelutils.cpp:816 */
	virtual void PerformAnimationDecode(class CMDL *, enum BoneFlags_t); /* linkage=_ZN4CMDL22PerformAnimationDecodeEN14CModelSkeleton11BoneFlags_tE */
	virtual void ForceLoopingAnimation(class CMDL *, bool); /* linkage=_ZN4CMDL21ForceLoopingAnimationEb */
	virtual void SetCycleOverride(class CMDL *, float); /* linkage=_ZN4CMDL16SetCycleOverrideEf */
	virtual void ClearCycleOverride(class CMDL *); /* linkage=_ZN4CMDL18ClearCycleOverrideEv */
	virtual void SetRenderingEnabled(class CMDL *, bool); /* linkage=_ZN4CMDL19SetRenderingEnabledEb */
	virtual void SetPruneUnusedMeshGroups(class CMDL *, bool); /* linkage=_ZN4CMDL24SetPruneUnusedMeshGroupsEb */
	void CMDL(class CMDL *); /* linkage=_ZN4CMDLC4Ev */
	void ~CMDL(class CMDL *); /* linkage=_ZN4CMDLD4Ev */
	virtual void SetBoneTransformsInSceneObject(class CMDL *, class CSceneAnimatableObject *, uint8); /* linkage=_ZN4CMDL30SetBoneTransformsInSceneObjectEP22CSceneAnimatableObjecth */
	/* <3b9e542> ../scenesystem/utils/modelutils.cpp:128 */
	void UnreferenceMDL(class CMDL *); /* linkage=_ZN4CMDL14UnreferenceMDLEv */
	void PerformAnimationDecodeForLOD(class CMDL *, int, enum BoneFlags_t); /* linkage=_ZN4CMDL28PerformAnimationDecodeForLODEiN14CModelSkeleton11BoneFlags_tE */
	void UpdateWorldSpaceTransforms(class CMDL *); /* linkage=_ZN4CMDL26UpdateWorldSpaceTransformsEv */
	void SetupBones_AttachmentHelper(class CMDL *, const class CModel  *, class matrix3x4_t *); /* linkage=_ZN4CMDL27SetupBones_AttachmentHelperEPK6CModelP11matrix3x4_t */
	bool PutAttachment(class CMDL *, class AttachmentHandle_t, const class matrix3x4_t  &); /* linkage=_ZN4CMDL13PutAttachmentE18AttachmentHandle_tRK11matrix3x4_t */
	void SetupSceneSystemAnimation(class CMDL *, float); /* linkage=_ZN4CMDL25SetupSceneSystemAnimationEf */
	/* <3b9e240> ../scenesystem/utils/modelutils.cpp:280 */
	void MarkAnimationDirty(class CMDL *); /* linkage=_ZN4CMDL18MarkAnimationDirtyEv */
} __attribute__((__aligned__(16)));

// <03AE04D2> ../scenesystem/utils/modelutils.h:80
void CMDL::CMDL()
{
} /* size: 0 */

