
//
// public/scenesystem/sceneanimatableobject.h
//
//	referenced by: libengine2.so
//				   libmeshsystem.so
//
//	functions: 80
//	classes: 2
//

// <001125A3> ../public/scenesystem/sceneanimatableobject.h:30
// member functions: 148
// member variables: 28
// vtable entry: 1
// class size: 800
class CSceneAnimatableObject : public CSceneObject {
	/* ../public/scenesystem/sceneanimatableobject.h:139 */
	struct FlexWeight_t {
		float m_flAlpha; /* 0 4 */
		float m_flTargetAlpha; /* 4 4 */
		float m_flOverride; /* 8 4 */
		float m_flFadeTime; /* 12 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class CSceneObject <ancestor>; */ /* 0 240 */
	void CSceneAnimatableObject(CSceneAnimatableObject* , const CSceneAnimatableObject& );
	/* ../public/scenesystem/sceneanimatableobject.h:382 */
	void CSceneAnimatableObject(CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:397 */
	virtual void ~CSceneAnimatableObject(CSceneAnimatableObject* );
	CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> > m_worldSpaceRenderBones; /* 232 32 */
	CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> > m_worldSpaceRenderBonesPrevious; /* 264 32 */
	CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> > m_worldSpaceAttachments; /* 296 32 */
	CUtlVector<float, CUtlMemory<float, int> > m_flexControllerWeights; /* 328 32 */
	int m_nPerVertexBoneInfluenceCount; /* 360 4 */
	/* ../public/scenesystem/sceneanimatableobject.h:406 */
	void Init(CSceneAnimatableObject* , const matrix3x4a_t& , const CModel* );
	/* ../public/scenesystem/sceneanimatableobject.h:1035 */
	void SetProceduralBoneTransforms(CSceneAnimatableObject* , ISceneAnimatableProceduralBoneTransforms* );
	/* ../public/scenesystem/sceneanimatableobject.h:1040 */
	ISceneAnimatableProceduralBoneTransforms* GetProceduralBoneTransforms(const CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:1045 */
	void SetWorldSpaceRenderBoneTransforms(CSceneAnimatableObject* , int, const matrix3x4a_t* );
	/* ../public/scenesystem/sceneanimatableobject.h:1051 */
	void SetWorldSpaceRenderBoneTransforms(CSceneAnimatableObject* , int, const CTransform* );
	/* ../public/scenesystem/sceneanimatableobject.h:52 */
	virtual void InitManagedHandle(CSceneAnimatableObject* );
private:
	CThreadFastMutex m_transformSlotManagementMutex; /* 368 24 */
	ISceneAnimatableProceduralBoneTransforms * m_pProceduralBoneTransforms; /* 392 8 */
	CUtlVector<bone_merge_list_t, CUtlMemory<bone_merge_list_t, int> > m_CachedBoneMergeList; /* 400 32 */
	CUtlVector<CTransform, CUtlMemory<CTransform, int> > m_CachedWorldSpaceMasterTransforms; /* 432 32 */
	/* ../public/scenesystem/sceneanimatableobject.h:1061 */
	void SetWorldSpaceRenderBoneTransform(CSceneAnimatableObject* , int, CTransform);
	/* ../public/scenesystem/sceneanimatableobject.h:1066 */
	CTransform GetWorldSpaceRenderBoneTransform(CSceneAnimatableObject* , int);
	/* ../public/scenesystem/sceneanimatableobject.h:1077 */
	CTransform GetWorldSpaceRenderBoneTransform(CSceneAnimatableObject* , const CUtlString& );
	/* ../public/scenesystem/sceneanimatableobject.h:1086 */
	CTransform GetWorldSpaceRenderBonePreviousTransform(CSceneAnimatableObject* , int);
	/* ../public/scenesystem/sceneanimatableobject.h:1097 */
	CTransform GetWorldSpaceRenderBonePreviousTransform(CSceneAnimatableObject* , const CUtlString& );
	/* ../public/scenesystem/sceneanimatableobject.h:1106 */
	CTransform GetLocalSpaceRenderBoneTransform(CSceneAnimatableObject* , int);
	/* ../public/scenesystem/sceneanimatableobject.h:1136 */
	CTransform GetLocalSpaceRenderBoneTransform(CSceneAnimatableObject* , const CUtlString& );
	IAnimGraphModelBindingConstPtr m_pAnimGraphBinding; /* 464 8 */
	IAnimationGraphInstancePtr m_pAnimGraphInstance; /* 472 8 */
	HAnimationGraph m_pAnimGraph; /* 480 8 */
	bool m_bManaged; /* 488 1 */
	/* ../public/scenesystem/sceneanimatableobject.h:895 */
	void Update(CSceneAnimatableObject* , float);
	/* ../public/scenesystem/sceneanimatableobject.h:852 */
	void SetBindPose(CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:626 */
	void MergeFrom(CSceneAnimatableObject* , CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:607 */
	void ResetGraphParameters(CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:976 */
	void CalculateWorldSpaceBones(CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:992 */
	void FinishUpdate(CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:477 */
	void InitAnimGraph(CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:470 */
	void InitAnimGraph(CSceneAnimatableObject* , SboxAnimGraphChangedCallback);
	/* ../public/scenesystem/sceneanimatableobject.h:552 */
	void SetAnimGraph(CSceneAnimatableObject* , const CUtlString& );
	/* ../public/scenesystem/sceneanimatableobject.h:565 */
	void SetAnimGraph(CSceneAnimatableObject* , HAnimationGraph);
	/* ../public/scenesystem/sceneanimatableobject.h:1009 */
	CTransform GetParentSpaceBone(CSceneAnimatableObject* , int);
	/* ../public/scenesystem/sceneanimatableobject.h:1022 */
	void SetParentSpaceBone(CSceneAnimatableObject* , int, const CTransform& );
	/* ../public/scenesystem/sceneanimatableobject.h:602 */
	HAnimationGraph GetAnimGraph(CSceneAnimatableObject* );
	IAnimationHelper * m_pAnimationHelper; /* 496 8 */
	/* ../public/scenesystem/sceneanimatableobject.h:1156 */
	void SBox_SetFlexOverride(CSceneAnimatableObject* , CUtlStringToken, float, float);
	/* ../public/scenesystem/sceneanimatableobject.h:1169 */
	void SBox_SetFlexOverride(CSceneAnimatableObject* , int, float, float);
	/* ../public/scenesystem/sceneanimatableobject.h:1187 */
	float SBox_GetFlexOverride(CSceneAnimatableObject* , CUtlStringToken);
	/* ../public/scenesystem/sceneanimatableobject.h:1200 */
	float SBox_GetFlexOverride(CSceneAnimatableObject* , int);
	/* ../public/scenesystem/sceneanimatableobject.h:1214 */
	void SBox_ClearFlexOverride(CSceneAnimatableObject* , float);
	/* ../public/scenesystem/sceneanimatableobject.h:1222 */
	void SBox_ClearFlexOverride(CSceneAnimatableObject* , CUtlStringToken, float);
	/* ../public/scenesystem/sceneanimatableobject.h:1235 */
	void SBox_ClearFlexOverride(CSceneAnimatableObject* , int, float);
	/* ../public/scenesystem/sceneanimatableobject.h:1252 */
	IDirectPlaybackAnimNodeInstance* GetDirectPlaybackInstance(CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:1260 */
	void DirectPlayback_PlaySequence(CSceneAnimatableObject* , const char* );
	/* ../public/scenesystem/sceneanimatableobject.h:1277 */
	void DirectPlayback_PlaySequence(CSceneAnimatableObject* , const char* , const Vector& , float, float);
	/* ../public/scenesystem/sceneanimatableobject.h:1294 */
	void DirectPlayback_CancelSequence(CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:1303 */
	float DirectPlayback_GetSequenceCycle(CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:1312 */
	const char* DirectPlayback_GetSequence(CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:1329 */
	void DirectPlayback_SetSequenceStartTime(CSceneAnimatableObject* , float);
	/* ../public/scenesystem/sceneanimatableobject.h:1338 */
	float DirectPlayback_GetSequenceDuration(CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:1355 */
	bool SBox_GetAttachment(CSceneAnimatableObject* , CUtlStringToken, bool, CTransformUnaligned& );
	/* ../public/scenesystem/sceneanimatableobject.h:1506 */
	void SetShouldUseAnimGraph(CSceneAnimatableObject* , bool);
	/* ../public/scenesystem/sceneanimatableobject.h:1523 */
	bool GetShouldUseAnimGraph(const CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:1394 */
	void SetSequence(CSceneAnimatableObject* , const char* );
	/* ../public/scenesystem/sceneanimatableobject.h:1408 */
	const char* GetSequence(const CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:1424 */
	float GetSequenceDuration(const CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:1440 */
	float GetSequenceCycle(const CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:1456 */
	void SetSequenceCycle(CSceneAnimatableObject* , float);
	float m_flTime; /* 504 4 */
	float m_flDeltaTime; /* 508 4 */
	CUtlVector<CSceneAnimatableObject::FlexWeight_t, CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int> > m_FlexOverrides; /* 512 32 */
	/* ../public/scenesystem/sceneanimatableobject.h:149 */
	IAnimParameterInstance* GetAnimParameter(CSceneAnimatableObject* , const char* );
	/* ../public/scenesystem/sceneanimatableobject.h:159 */
	IAnimParameterInstance* GetAnimParameter(CSceneAnimatableObject* , int);
	/* ../public/scenesystem/sceneanimatableobject.h:170 */
	int GetParameterInt(CSceneAnimatableObject* , const char* );
	/* ../public/scenesystem/sceneanimatableobject.h:200 */
	float GetParameterFloat(CSceneAnimatableObject* , const char* );
	/* ../public/scenesystem/sceneanimatableobject.h:230 */
	Vector GetParameterVector3(CSceneAnimatableObject* , const char* );
	/* ../public/scenesystem/sceneanimatableobject.h:246 */
	Quaternion GetParameterRotation(CSceneAnimatableObject* , const char* );
	/* ../public/scenesystem/sceneanimatableobject.h:261 */
	int PendingAnimationEvents(CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:273 */
	void DispatchTagEvents(CSceneAnimatableObject* , SboxAnimTagEventCallback);
	/* ../public/scenesystem/sceneanimatableobject.h:283 */
	void RunAnimationEvents(CSceneAnimatableObject* , SboxAnimationEventCallback);
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > m_PhysicsBoneIndex; /* 544 32 */
	CUtlVector<CTransform, CUtlMemory<CTransform, int> > m_PhysicsBoneTransform; /* 576 32 */
	AnimationEventOccurrences_t m_animEvents; /* 608 32 */
	/* ../public/scenesystem/sceneanimatableobject.h:331 */
	void ClearPhysicsBones(CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:337 */
	void SetPhysicsBone(CSceneAnimatableObject* , uint16, CTransform);
	/* ../public/scenesystem/sceneanimatableobject.h:769 */
	void UpdateBoundsFromRenderBones(CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:883 */
	CTransform GetRootMotion(const CSceneAnimatableObject* );
	CUtlVector<CTransform, CUtlMemory<CTransform, int> > m_worldSpaceAnimation; /* 640 32 */
	/* ../public/scenesystem/sceneanimatableobject.h:1145 */
	CTransform GetWorldSpaceAnimationTransform(CSceneAnimatableObject* , int);
	/* ../public/scenesystem/sceneanimatableobject.h:522 */
	void RegisterEventTagListener(CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:536 */
	void OnAnimGraphTag(CSceneAnimatableObject* , const IEventAnimTag* , const AnimTagStatusContext& );
	/* ../public/scenesystem/sceneanimatableobject.h:544 */
	void OnAnimGraphChanged(CSceneAnimatableObject* );
	CAnimTagListenerHelper<IEventAnimTag> m_eventTagListener; /* 672 40 */
	SboxAnimTagEventCallback * m_pAnimTagEventCallback; /* 712 8 */
	SboxAnimGraphChangedCallback m_pAnimGraphChangedCallback; /* 720 24 */
	float m_flPlaybackRate; /* 744 4 */
	/* ../public/scenesystem/sceneanimatableobject.h:1472 */
	float GetPlaybackRate(const CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:1477 */
	void SetPlaybackRate(CSceneAnimatableObject* , float);
	/* ../public/scenesystem/sceneanimatableobject.h:1482 */
	void SetSequenceLooping(CSceneAnimatableObject* , bool);
	/* ../public/scenesystem/sceneanimatableobject.h:1498 */
	bool IsSequenceFinished(const CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:1490 */
	void SetSequenceBlending(CSceneAnimatableObject* , bool);
	AABB_t m_worldBounds; /* 748 24 */
	AABB_t m_localBounds; /* 772 24 */
	void CSceneAnimatableObject(class CSceneAnimatableObject *, const class CSceneAnimatableObject  &); /* linkage=_ZN22CSceneAnimatableObjectC4ERKS_ */
	void CSceneAnimatableObject(class CSceneAnimatableObject *); /* linkage=_ZN22CSceneAnimatableObjectC4Ev */
	virtual void ~CSceneAnimatableObject(class CSceneAnimatableObject *); /* linkage=_ZN22CSceneAnimatableObjectD4Ev */
	void Init(class CSceneAnimatableObject *, const class matrix3x4a_t  &, const class CModel  *); /* linkage=_ZN22CSceneAnimatableObject4InitERK12matrix3x4a_tPK6CModel */
	void SetProceduralBoneTransforms(class CSceneAnimatableObject *, class ISceneAnimatableProceduralBoneTransforms *); /* linkage=_ZN22CSceneAnimatableObject27SetProceduralBoneTransformsEP40ISceneAnimatableProceduralBoneTransforms */
	class ISceneAnimatableProceduralBoneTransforms * GetProceduralBoneTransforms(const class CSceneAnimatableObject  *); /* linkage=_ZNK22CSceneAnimatableObject27GetProceduralBoneTransformsEv */
	void SetWorldSpaceRenderBoneTransforms(class CSceneAnimatableObject *, int, const class matrix3x4a_t  *); /* linkage=_ZN22CSceneAnimatableObject33SetWorldSpaceRenderBoneTransformsEiPK12matrix3x4a_t */
	void SetWorldSpaceRenderBoneTransforms(class CSceneAnimatableObject *, int, const class CTransform  *); /* linkage=_ZN22CSceneAnimatableObject33SetWorldSpaceRenderBoneTransformsEiPK10CTransform */
	virtual void InitManagedHandle(class CSceneAnimatableObject *); /* linkage=_ZN22CSceneAnimatableObject17InitManagedHandleEv */
	void SetWorldSpaceRenderBoneTransform(class CSceneAnimatableObject *, int, class CTransform); /* linkage=_ZN22CSceneAnimatableObject32SetWorldSpaceRenderBoneTransformEi10CTransform */
	class CTransform GetWorldSpaceRenderBoneTransform(class CSceneAnimatableObject *, int); /* linkage=_ZN22CSceneAnimatableObject32GetWorldSpaceRenderBoneTransformEi */
	class CTransform GetWorldSpaceRenderBoneTransform(class CSceneAnimatableObject *, const class CUtlString  &); /* linkage=_ZN22CSceneAnimatableObject32GetWorldSpaceRenderBoneTransformERK10CUtlString */
	class CTransform GetWorldSpaceRenderBonePreviousTransform(class CSceneAnimatableObject *, int); /* linkage=_ZN22CSceneAnimatableObject40GetWorldSpaceRenderBonePreviousTransformEi */
	class CTransform GetWorldSpaceRenderBonePreviousTransform(class CSceneAnimatableObject *, const class CUtlString  &); /* linkage=_ZN22CSceneAnimatableObject40GetWorldSpaceRenderBonePreviousTransformERK10CUtlString */
	class CTransform GetLocalSpaceRenderBoneTransform(class CSceneAnimatableObject *, int); /* linkage=_ZN22CSceneAnimatableObject32GetLocalSpaceRenderBoneTransformEi */
	class CTransform GetLocalSpaceRenderBoneTransform(class CSceneAnimatableObject *, const class CUtlString  &); /* linkage=_ZN22CSceneAnimatableObject32GetLocalSpaceRenderBoneTransformERK10CUtlString */
	void Update(class CSceneAnimatableObject *, float); /* linkage=_ZN22CSceneAnimatableObject6UpdateEf */
	void SetBindPose(class CSceneAnimatableObject *); /* linkage=_ZN22CSceneAnimatableObject11SetBindPoseEv */
	void MergeFrom(class CSceneAnimatableObject *, class CSceneAnimatableObject *); /* linkage=_ZN22CSceneAnimatableObject9MergeFromEPS_ */
	void ResetGraphParameters(class CSceneAnimatableObject *); /* linkage=_ZN22CSceneAnimatableObject20ResetGraphParametersEv */
	void CalculateWorldSpaceBones(class CSceneAnimatableObject *); /* linkage=_ZN22CSceneAnimatableObject24CalculateWorldSpaceBonesEv */
	void FinishUpdate(class CSceneAnimatableObject *); /* linkage=_ZN22CSceneAnimatableObject12FinishUpdateEv */
	void InitAnimGraph(class CSceneAnimatableObject *); /* linkage=_ZN22CSceneAnimatableObject13InitAnimGraphEv */
	void InitAnimGraph(class CSceneAnimatableObject *, SboxAnimGraphChangedCallback); /* linkage=_ZN22CSceneAnimatableObject13InitAnimGraphE12CUtlDelegateIFvPvEE */
	void SetAnimGraph(class CSceneAnimatableObject *, const class CUtlString  &); /* linkage=_ZN22CSceneAnimatableObject12SetAnimGraphERK10CUtlString */
	void SetAnimGraph(class CSceneAnimatableObject *, HAnimationGraph); /* linkage=_ZN22CSceneAnimatableObject12SetAnimGraphE11CWeakHandleI34InfoForResourceTypeIAnimationGraphE */
	class CTransform GetParentSpaceBone(class CSceneAnimatableObject *, int); /* linkage=_ZN22CSceneAnimatableObject18GetParentSpaceBoneEi */
	void SetParentSpaceBone(class CSceneAnimatableObject *, int, const class CTransform  &); /* linkage=_ZN22CSceneAnimatableObject18SetParentSpaceBoneEiRK10CTransform */
	HAnimationGraph GetAnimGraph(class CSceneAnimatableObject *); /* linkage=_ZN22CSceneAnimatableObject12GetAnimGraphEv */
	void SBox_SetFlexOverride(class CSceneAnimatableObject *, class CUtlStringToken, float, float); /* linkage=_ZN22CSceneAnimatableObject20SBox_SetFlexOverrideE15CUtlStringTokenff */
	void SBox_SetFlexOverride(class CSceneAnimatableObject *, int, float, float); /* linkage=_ZN22CSceneAnimatableObject20SBox_SetFlexOverrideEiff */
	float SBox_GetFlexOverride(class CSceneAnimatableObject *, class CUtlStringToken); /* linkage=_ZN22CSceneAnimatableObject20SBox_GetFlexOverrideE15CUtlStringToken */
	float SBox_GetFlexOverride(class CSceneAnimatableObject *, int); /* linkage=_ZN22CSceneAnimatableObject20SBox_GetFlexOverrideEi */
	void SBox_ClearFlexOverride(class CSceneAnimatableObject *, float); /* linkage=_ZN22CSceneAnimatableObject22SBox_ClearFlexOverrideEf */
	void SBox_ClearFlexOverride(class CSceneAnimatableObject *, class CUtlStringToken, float); /* linkage=_ZN22CSceneAnimatableObject22SBox_ClearFlexOverrideE15CUtlStringTokenf */
	void SBox_ClearFlexOverride(class CSceneAnimatableObject *, int, float); /* linkage=_ZN22CSceneAnimatableObject22SBox_ClearFlexOverrideEif */
	class IDirectPlaybackAnimNodeInstance * GetDirectPlaybackInstance(class CSceneAnimatableObject *); /* linkage=_ZN22CSceneAnimatableObject25GetDirectPlaybackInstanceEv */
	void DirectPlayback_PlaySequence(class CSceneAnimatableObject *, const char  *); /* linkage=_ZN22CSceneAnimatableObject27DirectPlayback_PlaySequenceEPKc */
	void DirectPlayback_PlaySequence(class CSceneAnimatableObject *, const char  *, const class Vector  &, float, float); /* linkage=_ZN22CSceneAnimatableObject27DirectPlayback_PlaySequenceEPKcRK6Vectorff */
	void DirectPlayback_CancelSequence(class CSceneAnimatableObject *); /* linkage=_ZN22CSceneAnimatableObject29DirectPlayback_CancelSequenceEv */
	float DirectPlayback_GetSequenceCycle(class CSceneAnimatableObject *); /* linkage=_ZN22CSceneAnimatableObject31DirectPlayback_GetSequenceCycleEv */
	const char  * DirectPlayback_GetSequence(class CSceneAnimatableObject *); /* linkage=_ZN22CSceneAnimatableObject26DirectPlayback_GetSequenceEv */
	void DirectPlayback_SetSequenceStartTime(class CSceneAnimatableObject *, float); /* linkage=_ZN22CSceneAnimatableObject35DirectPlayback_SetSequenceStartTimeEf */
	float DirectPlayback_GetSequenceDuration(class CSceneAnimatableObject *); /* linkage=_ZN22CSceneAnimatableObject34DirectPlayback_GetSequenceDurationEv */
	bool SBox_GetAttachment(class CSceneAnimatableObject *, class CUtlStringToken, bool, class CTransformUnaligned &); /* linkage=_ZN22CSceneAnimatableObject18SBox_GetAttachmentE15CUtlStringTokenbR19CTransformUnaligned */
	void SetShouldUseAnimGraph(class CSceneAnimatableObject *, bool); /* linkage=_ZN22CSceneAnimatableObject21SetShouldUseAnimGraphEb */
	bool GetShouldUseAnimGraph(const class CSceneAnimatableObject  *); /* linkage=_ZNK22CSceneAnimatableObject21GetShouldUseAnimGraphEv */
	void SetSequence(class CSceneAnimatableObject *, const char  *); /* linkage=_ZN22CSceneAnimatableObject11SetSequenceEPKc */
	const char  * GetSequence(const class CSceneAnimatableObject  *); /* linkage=_ZNK22CSceneAnimatableObject11GetSequenceEv */
	float GetSequenceDuration(const class CSceneAnimatableObject  *); /* linkage=_ZNK22CSceneAnimatableObject19GetSequenceDurationEv */
	float GetSequenceCycle(const class CSceneAnimatableObject  *); /* linkage=_ZNK22CSceneAnimatableObject16GetSequenceCycleEv */
	void SetSequenceCycle(class CSceneAnimatableObject *, float); /* linkage=_ZN22CSceneAnimatableObject16SetSequenceCycleEf */
	class IAnimParameterInstance * GetAnimParameter(class CSceneAnimatableObject *, const char  *); /* linkage=_ZN22CSceneAnimatableObject16GetAnimParameterEPKc */
	class IAnimParameterInstance * GetAnimParameter(class CSceneAnimatableObject *, int); /* linkage=_ZN22CSceneAnimatableObject16GetAnimParameterEi */
	int GetParameterInt(class CSceneAnimatableObject *, const char  *); /* linkage=_ZN22CSceneAnimatableObject15GetParameterIntEPKc */
	float GetParameterFloat(class CSceneAnimatableObject *, const char  *); /* linkage=_ZN22CSceneAnimatableObject17GetParameterFloatEPKc */
	class Vector GetParameterVector3(class CSceneAnimatableObject *, const char  *); /* linkage=_ZN22CSceneAnimatableObject19GetParameterVector3EPKc */
	class Quaternion GetParameterRotation(class CSceneAnimatableObject *, const char  *); /* linkage=_ZN22CSceneAnimatableObject20GetParameterRotationEPKc */
	int PendingAnimationEvents(class CSceneAnimatableObject *); /* linkage=_ZN22CSceneAnimatableObject22PendingAnimationEventsEv */
	void DispatchTagEvents(class CSceneAnimatableObject *, SboxAnimTagEventCallback); /* linkage=_ZN22CSceneAnimatableObject17DispatchTagEventsE12CUtlDelegateIFvPKciEE */
	void RunAnimationEvents(class CSceneAnimatableObject *, SboxAnimationEventCallback); /* linkage=_ZN22CSceneAnimatableObject18RunAnimationEventsE12CUtlDelegateIFvPKcffPK10KeyValues3EE */
	void ClearPhysicsBones(class CSceneAnimatableObject *); /* linkage=_ZN22CSceneAnimatableObject17ClearPhysicsBonesEv */
	void SetPhysicsBone(class CSceneAnimatableObject *, uint16, class CTransform); /* linkage=_ZN22CSceneAnimatableObject14SetPhysicsBoneEt10CTransform */
	void UpdateBoundsFromRenderBones(class CSceneAnimatableObject *); /* linkage=_ZN22CSceneAnimatableObject27UpdateBoundsFromRenderBonesEv */
	class CTransform GetRootMotion(const class CSceneAnimatableObject  *); /* linkage=_ZNK22CSceneAnimatableObject13GetRootMotionEv */
	class CTransform GetWorldSpaceAnimationTransform(class CSceneAnimatableObject *, int); /* linkage=_ZN22CSceneAnimatableObject31GetWorldSpaceAnimationTransformEi */
	/* <1366d4e> ../public/scenesystem/sceneanimatableobject.h:522 */
	void RegisterEventTagListener(class CSceneAnimatableObject *); /* linkage=_ZN22CSceneAnimatableObject24RegisterEventTagListenerEv */
	void OnAnimGraphTag(class CSceneAnimatableObject *, const class IEventAnimTag  *, const class AnimTagStatusContext  &); /* linkage=_ZN22CSceneAnimatableObject14OnAnimGraphTagEPK13IEventAnimTagRK20AnimTagStatusContext */
	void OnAnimGraphChanged(class CSceneAnimatableObject *); /* linkage=_ZN22CSceneAnimatableObject18OnAnimGraphChangedEv */
	float GetPlaybackRate(const class CSceneAnimatableObject  *); /* linkage=_ZNK22CSceneAnimatableObject15GetPlaybackRateEv */
	void SetPlaybackRate(class CSceneAnimatableObject *, float); /* linkage=_ZN22CSceneAnimatableObject15SetPlaybackRateEf */
	void SetSequenceLooping(class CSceneAnimatableObject *, bool); /* linkage=_ZN22CSceneAnimatableObject18SetSequenceLoopingEb */
	bool IsSequenceFinished(const class CSceneAnimatableObject  *); /* linkage=_ZNK22CSceneAnimatableObject18IsSequenceFinishedEv */
	void SetSequenceBlending(class CSceneAnimatableObject *, bool); /* linkage=_ZN22CSceneAnimatableObject19SetSequenceBlendingEb */
} __attribute__((__aligned__(16)));

// <01211951> ../public/scenesystem/sceneanimatableobject.h:30
// member functions: 149
// member variables: 28
// vtable entry: 1
// class size: 800
class CSceneAnimatableObject : public CSceneObject {
	/* ../public/scenesystem/sceneanimatableobject.h:139 */
	struct FlexWeight_t {
		float m_flAlpha; /* 0 4 */
		float m_flTargetAlpha; /* 4 4 */
		float m_flOverride; /* 8 4 */
		float m_flFadeTime; /* 12 4 */
		void FlexWeight_t(FlexWeight_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class CSceneObject <ancestor>; */ /* 0 240 */
	void CSceneAnimatableObject(CSceneAnimatableObject* , const CSceneAnimatableObject& );
	/* ../public/scenesystem/sceneanimatableobject.h:382 */
	void CSceneAnimatableObject(CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:397 */
	virtual void ~CSceneAnimatableObject(CSceneAnimatableObject* );
	CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> > m_worldSpaceRenderBones; /* 232 32 */
	CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> > m_worldSpaceRenderBonesPrevious; /* 264 32 */
	CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> > m_worldSpaceAttachments; /* 296 32 */
	CUtlVector<float, CUtlMemory<float, int> > m_flexControllerWeights; /* 328 32 */
	int m_nPerVertexBoneInfluenceCount; /* 360 4 */
	/* ../public/scenesystem/sceneanimatableobject.h:406 */
	void Init(CSceneAnimatableObject* , const matrix3x4a_t& , const CModel* );
	/* ../public/scenesystem/sceneanimatableobject.h:1035 */
	void SetProceduralBoneTransforms(CSceneAnimatableObject* , ISceneAnimatableProceduralBoneTransforms* );
	/* ../public/scenesystem/sceneanimatableobject.h:1040 */
	ISceneAnimatableProceduralBoneTransforms* GetProceduralBoneTransforms(const CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:1045 */
	void SetWorldSpaceRenderBoneTransforms(CSceneAnimatableObject* , int, const matrix3x4a_t* );
	/* ../public/scenesystem/sceneanimatableobject.h:1051 */
	void SetWorldSpaceRenderBoneTransforms(CSceneAnimatableObject* , int, const CTransform* );
	/* ../public/scenesystem/sceneanimatableobject.h:52 */
	virtual void InitManagedHandle(CSceneAnimatableObject* );
private:
	CThreadFastMutex m_transformSlotManagementMutex; /* 368 24 */
	ISceneAnimatableProceduralBoneTransforms * m_pProceduralBoneTransforms; /* 392 8 */
	CUtlVector<bone_merge_list_t, CUtlMemory<bone_merge_list_t, int> > m_CachedBoneMergeList; /* 400 32 */
	CUtlVector<CTransform, CUtlMemory<CTransform, int> > m_CachedWorldSpaceMasterTransforms; /* 432 32 */
	/* ../public/scenesystem/sceneanimatableobject.h:1061 */
	void SetWorldSpaceRenderBoneTransform(CSceneAnimatableObject* , int, CTransform);
	/* ../public/scenesystem/sceneanimatableobject.h:1066 */
	CTransform GetWorldSpaceRenderBoneTransform(CSceneAnimatableObject* , int);
	/* ../public/scenesystem/sceneanimatableobject.h:1077 */
	CTransform GetWorldSpaceRenderBoneTransform(CSceneAnimatableObject* , const CUtlString& );
	/* ../public/scenesystem/sceneanimatableobject.h:1086 */
	CTransform GetWorldSpaceRenderBonePreviousTransform(CSceneAnimatableObject* , int);
	/* ../public/scenesystem/sceneanimatableobject.h:1097 */
	CTransform GetWorldSpaceRenderBonePreviousTransform(CSceneAnimatableObject* , const CUtlString& );
	/* ../public/scenesystem/sceneanimatableobject.h:1106 */
	CTransform GetLocalSpaceRenderBoneTransform(CSceneAnimatableObject* , int);
	/* ../public/scenesystem/sceneanimatableobject.h:1136 */
	CTransform GetLocalSpaceRenderBoneTransform(CSceneAnimatableObject* , const CUtlString& );
	IAnimGraphModelBindingConstPtr m_pAnimGraphBinding; /* 464 8 */
	IAnimationGraphInstancePtr m_pAnimGraphInstance; /* 472 8 */
	HAnimationGraph m_pAnimGraph; /* 480 8 */
	bool m_bManaged; /* 488 1 */
	/* ../public/scenesystem/sceneanimatableobject.h:895 */
	void Update(CSceneAnimatableObject* , float);
	/* ../public/scenesystem/sceneanimatableobject.h:852 */
	void SetBindPose(CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:626 */
	void MergeFrom(CSceneAnimatableObject* , CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:607 */
	void ResetGraphParameters(CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:976 */
	void CalculateWorldSpaceBones(CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:992 */
	void FinishUpdate(CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:477 */
	void InitAnimGraph(CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:470 */
	void InitAnimGraph(CSceneAnimatableObject* , SboxAnimGraphChangedCallback);
	/* ../public/scenesystem/sceneanimatableobject.h:552 */
	void SetAnimGraph(CSceneAnimatableObject* , const CUtlString& );
	/* ../public/scenesystem/sceneanimatableobject.h:565 */
	void SetAnimGraph(CSceneAnimatableObject* , HAnimationGraph);
	/* ../public/scenesystem/sceneanimatableobject.h:1009 */
	CTransform GetParentSpaceBone(CSceneAnimatableObject* , int);
	/* ../public/scenesystem/sceneanimatableobject.h:1022 */
	void SetParentSpaceBone(CSceneAnimatableObject* , int, const CTransform& );
	/* ../public/scenesystem/sceneanimatableobject.h:602 */
	HAnimationGraph GetAnimGraph(CSceneAnimatableObject* );
	IAnimationHelper * m_pAnimationHelper; /* 496 8 */
	/* ../public/scenesystem/sceneanimatableobject.h:1156 */
	void SBox_SetFlexOverride(CSceneAnimatableObject* , CUtlStringToken, float, float);
	/* ../public/scenesystem/sceneanimatableobject.h:1169 */
	void SBox_SetFlexOverride(CSceneAnimatableObject* , int, float, float);
	/* ../public/scenesystem/sceneanimatableobject.h:1187 */
	float SBox_GetFlexOverride(CSceneAnimatableObject* , CUtlStringToken);
	/* ../public/scenesystem/sceneanimatableobject.h:1200 */
	float SBox_GetFlexOverride(CSceneAnimatableObject* , int);
	/* ../public/scenesystem/sceneanimatableobject.h:1214 */
	void SBox_ClearFlexOverride(CSceneAnimatableObject* , float);
	/* ../public/scenesystem/sceneanimatableobject.h:1222 */
	void SBox_ClearFlexOverride(CSceneAnimatableObject* , CUtlStringToken, float);
	/* ../public/scenesystem/sceneanimatableobject.h:1235 */
	void SBox_ClearFlexOverride(CSceneAnimatableObject* , int, float);
	/* ../public/scenesystem/sceneanimatableobject.h:1252 */
	IDirectPlaybackAnimNodeInstance* GetDirectPlaybackInstance(CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:1260 */
	void DirectPlayback_PlaySequence(CSceneAnimatableObject* , const char* );
	/* ../public/scenesystem/sceneanimatableobject.h:1277 */
	void DirectPlayback_PlaySequence(CSceneAnimatableObject* , const char* , const Vector& , float, float);
	/* ../public/scenesystem/sceneanimatableobject.h:1294 */
	void DirectPlayback_CancelSequence(CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:1303 */
	float DirectPlayback_GetSequenceCycle(CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:1312 */
	const char* DirectPlayback_GetSequence(CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:1329 */
	void DirectPlayback_SetSequenceStartTime(CSceneAnimatableObject* , float);
	/* ../public/scenesystem/sceneanimatableobject.h:1338 */
	float DirectPlayback_GetSequenceDuration(CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:1355 */
	bool SBox_GetAttachment(CSceneAnimatableObject* , CUtlStringToken, bool, CTransformUnaligned& );
	/* ../public/scenesystem/sceneanimatableobject.h:1506 */
	void SetShouldUseAnimGraph(CSceneAnimatableObject* , bool);
	/* ../public/scenesystem/sceneanimatableobject.h:1523 */
	bool GetShouldUseAnimGraph(const CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:1394 */
	void SetSequence(CSceneAnimatableObject* , const char* );
	/* ../public/scenesystem/sceneanimatableobject.h:1408 */
	const char* GetSequence(const CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:1424 */
	float GetSequenceDuration(const CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:1440 */
	float GetSequenceCycle(const CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:1456 */
	void SetSequenceCycle(CSceneAnimatableObject* , float);
	float m_flTime; /* 504 4 */
	float m_flDeltaTime; /* 508 4 */
	CUtlVector<CSceneAnimatableObject::FlexWeight_t, CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int> > m_FlexOverrides; /* 512 32 */
	/* ../public/scenesystem/sceneanimatableobject.h:149 */
	IAnimParameterInstance* GetAnimParameter(CSceneAnimatableObject* , const char* );
	/* ../public/scenesystem/sceneanimatableobject.h:159 */
	IAnimParameterInstance* GetAnimParameter(CSceneAnimatableObject* , int);
	/* ../public/scenesystem/sceneanimatableobject.h:170 */
	int GetParameterInt(CSceneAnimatableObject* , const char* );
	/* ../public/scenesystem/sceneanimatableobject.h:200 */
	float GetParameterFloat(CSceneAnimatableObject* , const char* );
	/* ../public/scenesystem/sceneanimatableobject.h:230 */
	Vector GetParameterVector3(CSceneAnimatableObject* , const char* );
	/* ../public/scenesystem/sceneanimatableobject.h:246 */
	Quaternion GetParameterRotation(CSceneAnimatableObject* , const char* );
	/* ../public/scenesystem/sceneanimatableobject.h:261 */
	int PendingAnimationEvents(CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:273 */
	void DispatchTagEvents(CSceneAnimatableObject* , SboxAnimTagEventCallback);
	/* ../public/scenesystem/sceneanimatableobject.h:283 */
	void RunAnimationEvents(CSceneAnimatableObject* , SboxAnimationEventCallback);
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > m_PhysicsBoneIndex; /* 544 32 */
	CUtlVector<CTransform, CUtlMemory<CTransform, int> > m_PhysicsBoneTransform; /* 576 32 */
	AnimationEventOccurrences_t m_animEvents; /* 608 32 */
	/* ../public/scenesystem/sceneanimatableobject.h:331 */
	void ClearPhysicsBones(CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:337 */
	void SetPhysicsBone(CSceneAnimatableObject* , uint16, CTransform);
	/* ../public/scenesystem/sceneanimatableobject.h:769 */
	void UpdateBoundsFromRenderBones(CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:883 */
	CTransform GetRootMotion(const CSceneAnimatableObject* );
	CUtlVector<CTransform, CUtlMemory<CTransform, int> > m_worldSpaceAnimation; /* 640 32 */
	/* ../public/scenesystem/sceneanimatableobject.h:1145 */
	CTransform GetWorldSpaceAnimationTransform(CSceneAnimatableObject* , int);
	/* ../public/scenesystem/sceneanimatableobject.h:522 */
	void RegisterEventTagListener(CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:536 */
	void OnAnimGraphTag(CSceneAnimatableObject* , const IEventAnimTag* , const AnimTagStatusContext& );
	/* ../public/scenesystem/sceneanimatableobject.h:544 */
	void OnAnimGraphChanged(CSceneAnimatableObject* );
	CAnimTagListenerHelper<IEventAnimTag> m_eventTagListener; /* 672 40 */
	SboxAnimTagEventCallback * m_pAnimTagEventCallback; /* 712 8 */
	SboxAnimGraphChangedCallback m_pAnimGraphChangedCallback; /* 720 24 */
	float m_flPlaybackRate; /* 744 4 */
	/* ../public/scenesystem/sceneanimatableobject.h:1472 */
	float GetPlaybackRate(const CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:1477 */
	void SetPlaybackRate(CSceneAnimatableObject* , float);
	/* ../public/scenesystem/sceneanimatableobject.h:1482 */
	void SetSequenceLooping(CSceneAnimatableObject* , bool);
	/* ../public/scenesystem/sceneanimatableobject.h:1498 */
	bool IsSequenceFinished(const CSceneAnimatableObject* );
	/* ../public/scenesystem/sceneanimatableobject.h:1490 */
	void SetSequenceBlending(CSceneAnimatableObject* , bool);
	AABB_t m_worldBounds; /* 748 24 */
	AABB_t m_localBounds; /* 772 24 */
	void CSceneAnimatableObject(class CSceneAnimatableObject *, const class CSceneAnimatableObject  &); /* linkage=_ZN22CSceneAnimatableObjectC4ERKS_ */
	void CSceneAnimatableObject(class CSceneAnimatableObject *); /* linkage=_ZN22CSceneAnimatableObjectC4Ev */
	virtual void ~CSceneAnimatableObject(class CSceneAnimatableObject *); /* linkage=_ZN22CSceneAnimatableObjectD4Ev */
	void Init(class CSceneAnimatableObject *, const class matrix3x4a_t  &, const class CModel  *); /* linkage=_ZN22CSceneAnimatableObject4InitERK12matrix3x4a_tPK6CModel */
	void SetProceduralBoneTransforms(class CSceneAnimatableObject *, class ISceneAnimatableProceduralBoneTransforms *); /* linkage=_ZN22CSceneAnimatableObject27SetProceduralBoneTransformsEP40ISceneAnimatableProceduralBoneTransforms */
	class ISceneAnimatableProceduralBoneTransforms * GetProceduralBoneTransforms(const class CSceneAnimatableObject  *); /* linkage=_ZNK22CSceneAnimatableObject27GetProceduralBoneTransformsEv */
	void SetWorldSpaceRenderBoneTransforms(class CSceneAnimatableObject *, int, const class matrix3x4a_t  *); /* linkage=_ZN22CSceneAnimatableObject33SetWorldSpaceRenderBoneTransformsEiPK12matrix3x4a_t */
	void SetWorldSpaceRenderBoneTransforms(class CSceneAnimatableObject *, int, const class CTransform  *); /* linkage=_ZN22CSceneAnimatableObject33SetWorldSpaceRenderBoneTransformsEiPK10CTransform */
	virtual void InitManagedHandle(class CSceneAnimatableObject *); /* linkage=_ZN22CSceneAnimatableObject17InitManagedHandleEv */
	void SetWorldSpaceRenderBoneTransform(class CSceneAnimatableObject *, int, class CTransform); /* linkage=_ZN22CSceneAnimatableObject32SetWorldSpaceRenderBoneTransformEi10CTransform */
	class CTransform GetWorldSpaceRenderBoneTransform(class CSceneAnimatableObject *, int); /* linkage=_ZN22CSceneAnimatableObject32GetWorldSpaceRenderBoneTransformEi */
	class CTransform GetWorldSpaceRenderBoneTransform(class CSceneAnimatableObject *, const class CUtlString  &); /* linkage=_ZN22CSceneAnimatableObject32GetWorldSpaceRenderBoneTransformERK10CUtlString */
	class CTransform GetWorldSpaceRenderBonePreviousTransform(class CSceneAnimatableObject *, int); /* linkage=_ZN22CSceneAnimatableObject40GetWorldSpaceRenderBonePreviousTransformEi */
	class CTransform GetWorldSpaceRenderBonePreviousTransform(class CSceneAnimatableObject *, const class CUtlString  &); /* linkage=_ZN22CSceneAnimatableObject40GetWorldSpaceRenderBonePreviousTransformERK10CUtlString */
	class CTransform GetLocalSpaceRenderBoneTransform(class CSceneAnimatableObject *, int); /* linkage=_ZN22CSceneAnimatableObject32GetLocalSpaceRenderBoneTransformEi */
	class CTransform GetLocalSpaceRenderBoneTransform(class CSceneAnimatableObject *, const class CUtlString  &); /* linkage=_ZN22CSceneAnimatableObject32GetLocalSpaceRenderBoneTransformERK10CUtlString */
	void Update(class CSceneAnimatableObject *, float); /* linkage=_ZN22CSceneAnimatableObject6UpdateEf */
	void SetBindPose(class CSceneAnimatableObject *); /* linkage=_ZN22CSceneAnimatableObject11SetBindPoseEv */
	void MergeFrom(class CSceneAnimatableObject *, class CSceneAnimatableObject *); /* linkage=_ZN22CSceneAnimatableObject9MergeFromEPS_ */
	void ResetGraphParameters(class CSceneAnimatableObject *); /* linkage=_ZN22CSceneAnimatableObject20ResetGraphParametersEv */
	void CalculateWorldSpaceBones(class CSceneAnimatableObject *); /* linkage=_ZN22CSceneAnimatableObject24CalculateWorldSpaceBonesEv */
	void FinishUpdate(class CSceneAnimatableObject *); /* linkage=_ZN22CSceneAnimatableObject12FinishUpdateEv */
	void InitAnimGraph(class CSceneAnimatableObject *); /* linkage=_ZN22CSceneAnimatableObject13InitAnimGraphEv */
	void InitAnimGraph(class CSceneAnimatableObject *, SboxAnimGraphChangedCallback); /* linkage=_ZN22CSceneAnimatableObject13InitAnimGraphE12CUtlDelegateIFvPvEE */
	void SetAnimGraph(class CSceneAnimatableObject *, const class CUtlString  &); /* linkage=_ZN22CSceneAnimatableObject12SetAnimGraphERK10CUtlString */
	void SetAnimGraph(class CSceneAnimatableObject *, HAnimationGraph); /* linkage=_ZN22CSceneAnimatableObject12SetAnimGraphE11CWeakHandleI34InfoForResourceTypeIAnimationGraphE */
	class CTransform GetParentSpaceBone(class CSceneAnimatableObject *, int); /* linkage=_ZN22CSceneAnimatableObject18GetParentSpaceBoneEi */
	void SetParentSpaceBone(class CSceneAnimatableObject *, int, const class CTransform  &); /* linkage=_ZN22CSceneAnimatableObject18SetParentSpaceBoneEiRK10CTransform */
	HAnimationGraph GetAnimGraph(class CSceneAnimatableObject *); /* linkage=_ZN22CSceneAnimatableObject12GetAnimGraphEv */
	void SBox_SetFlexOverride(class CSceneAnimatableObject *, class CUtlStringToken, float, float); /* linkage=_ZN22CSceneAnimatableObject20SBox_SetFlexOverrideE15CUtlStringTokenff */
	void SBox_SetFlexOverride(class CSceneAnimatableObject *, int, float, float); /* linkage=_ZN22CSceneAnimatableObject20SBox_SetFlexOverrideEiff */
	float SBox_GetFlexOverride(class CSceneAnimatableObject *, class CUtlStringToken); /* linkage=_ZN22CSceneAnimatableObject20SBox_GetFlexOverrideE15CUtlStringToken */
	float SBox_GetFlexOverride(class CSceneAnimatableObject *, int); /* linkage=_ZN22CSceneAnimatableObject20SBox_GetFlexOverrideEi */
	void SBox_ClearFlexOverride(class CSceneAnimatableObject *, float); /* linkage=_ZN22CSceneAnimatableObject22SBox_ClearFlexOverrideEf */
	void SBox_ClearFlexOverride(class CSceneAnimatableObject *, class CUtlStringToken, float); /* linkage=_ZN22CSceneAnimatableObject22SBox_ClearFlexOverrideE15CUtlStringTokenf */
	void SBox_ClearFlexOverride(class CSceneAnimatableObject *, int, float); /* linkage=_ZN22CSceneAnimatableObject22SBox_ClearFlexOverrideEif */
	class IDirectPlaybackAnimNodeInstance * GetDirectPlaybackInstance(class CSceneAnimatableObject *); /* linkage=_ZN22CSceneAnimatableObject25GetDirectPlaybackInstanceEv */
	void DirectPlayback_PlaySequence(class CSceneAnimatableObject *, const char  *); /* linkage=_ZN22CSceneAnimatableObject27DirectPlayback_PlaySequenceEPKc */
	void DirectPlayback_PlaySequence(class CSceneAnimatableObject *, const char  *, const class Vector  &, float, float); /* linkage=_ZN22CSceneAnimatableObject27DirectPlayback_PlaySequenceEPKcRK6Vectorff */
	void DirectPlayback_CancelSequence(class CSceneAnimatableObject *); /* linkage=_ZN22CSceneAnimatableObject29DirectPlayback_CancelSequenceEv */
	float DirectPlayback_GetSequenceCycle(class CSceneAnimatableObject *); /* linkage=_ZN22CSceneAnimatableObject31DirectPlayback_GetSequenceCycleEv */
	const char  * DirectPlayback_GetSequence(class CSceneAnimatableObject *); /* linkage=_ZN22CSceneAnimatableObject26DirectPlayback_GetSequenceEv */
	void DirectPlayback_SetSequenceStartTime(class CSceneAnimatableObject *, float); /* linkage=_ZN22CSceneAnimatableObject35DirectPlayback_SetSequenceStartTimeEf */
	float DirectPlayback_GetSequenceDuration(class CSceneAnimatableObject *); /* linkage=_ZN22CSceneAnimatableObject34DirectPlayback_GetSequenceDurationEv */
	bool SBox_GetAttachment(class CSceneAnimatableObject *, class CUtlStringToken, bool, class CTransformUnaligned &); /* linkage=_ZN22CSceneAnimatableObject18SBox_GetAttachmentE15CUtlStringTokenbR19CTransformUnaligned */
	void SetShouldUseAnimGraph(class CSceneAnimatableObject *, bool); /* linkage=_ZN22CSceneAnimatableObject21SetShouldUseAnimGraphEb */
	bool GetShouldUseAnimGraph(const class CSceneAnimatableObject  *); /* linkage=_ZNK22CSceneAnimatableObject21GetShouldUseAnimGraphEv */
	void SetSequence(class CSceneAnimatableObject *, const char  *); /* linkage=_ZN22CSceneAnimatableObject11SetSequenceEPKc */
	const char  * GetSequence(const class CSceneAnimatableObject  *); /* linkage=_ZNK22CSceneAnimatableObject11GetSequenceEv */
	float GetSequenceDuration(const class CSceneAnimatableObject  *); /* linkage=_ZNK22CSceneAnimatableObject19GetSequenceDurationEv */
	float GetSequenceCycle(const class CSceneAnimatableObject  *); /* linkage=_ZNK22CSceneAnimatableObject16GetSequenceCycleEv */
	void SetSequenceCycle(class CSceneAnimatableObject *, float); /* linkage=_ZN22CSceneAnimatableObject16SetSequenceCycleEf */
	class IAnimParameterInstance * GetAnimParameter(class CSceneAnimatableObject *, const char  *); /* linkage=_ZN22CSceneAnimatableObject16GetAnimParameterEPKc */
	class IAnimParameterInstance * GetAnimParameter(class CSceneAnimatableObject *, int); /* linkage=_ZN22CSceneAnimatableObject16GetAnimParameterEi */
	int GetParameterInt(class CSceneAnimatableObject *, const char  *); /* linkage=_ZN22CSceneAnimatableObject15GetParameterIntEPKc */
	float GetParameterFloat(class CSceneAnimatableObject *, const char  *); /* linkage=_ZN22CSceneAnimatableObject17GetParameterFloatEPKc */
	class Vector GetParameterVector3(class CSceneAnimatableObject *, const char  *); /* linkage=_ZN22CSceneAnimatableObject19GetParameterVector3EPKc */
	class Quaternion GetParameterRotation(class CSceneAnimatableObject *, const char  *); /* linkage=_ZN22CSceneAnimatableObject20GetParameterRotationEPKc */
	int PendingAnimationEvents(class CSceneAnimatableObject *); /* linkage=_ZN22CSceneAnimatableObject22PendingAnimationEventsEv */
	void DispatchTagEvents(class CSceneAnimatableObject *, SboxAnimTagEventCallback); /* linkage=_ZN22CSceneAnimatableObject17DispatchTagEventsE12CUtlDelegateIFvPKciEE */
	void RunAnimationEvents(class CSceneAnimatableObject *, SboxAnimationEventCallback); /* linkage=_ZN22CSceneAnimatableObject18RunAnimationEventsE12CUtlDelegateIFvPKcffPK10KeyValues3EE */
	void ClearPhysicsBones(class CSceneAnimatableObject *); /* linkage=_ZN22CSceneAnimatableObject17ClearPhysicsBonesEv */
	void SetPhysicsBone(class CSceneAnimatableObject *, uint16, class CTransform); /* linkage=_ZN22CSceneAnimatableObject14SetPhysicsBoneEt10CTransform */
	void UpdateBoundsFromRenderBones(class CSceneAnimatableObject *); /* linkage=_ZN22CSceneAnimatableObject27UpdateBoundsFromRenderBonesEv */
	class CTransform GetRootMotion(const class CSceneAnimatableObject  *); /* linkage=_ZNK22CSceneAnimatableObject13GetRootMotionEv */
	class CTransform GetWorldSpaceAnimationTransform(class CSceneAnimatableObject *, int); /* linkage=_ZN22CSceneAnimatableObject31GetWorldSpaceAnimationTransformEi */
	/* <1366d4e> ../public/scenesystem/sceneanimatableobject.h:522 */
	void RegisterEventTagListener(class CSceneAnimatableObject *); /* linkage=_ZN22CSceneAnimatableObject24RegisterEventTagListenerEv */
	void OnAnimGraphTag(class CSceneAnimatableObject *, const class IEventAnimTag  *, const class AnimTagStatusContext  &); /* linkage=_ZN22CSceneAnimatableObject14OnAnimGraphTagEPK13IEventAnimTagRK20AnimTagStatusContext */
	void OnAnimGraphChanged(class CSceneAnimatableObject *); /* linkage=_ZN22CSceneAnimatableObject18OnAnimGraphChangedEv */
	float GetPlaybackRate(const class CSceneAnimatableObject  *); /* linkage=_ZNK22CSceneAnimatableObject15GetPlaybackRateEv */
	void SetPlaybackRate(class CSceneAnimatableObject *, float); /* linkage=_ZN22CSceneAnimatableObject15SetPlaybackRateEf */
	void SetSequenceLooping(class CSceneAnimatableObject *, bool); /* linkage=_ZN22CSceneAnimatableObject18SetSequenceLoopingEb */
	bool IsSequenceFinished(const class CSceneAnimatableObject  *); /* linkage=_ZNK22CSceneAnimatableObject18IsSequenceFinishedEv */
	void SetSequenceBlending(class CSceneAnimatableObject *, bool); /* linkage=_ZN22CSceneAnimatableObject19SetSequenceBlendingEb */
} __attribute__((__aligned__(16)));

// <065816BA> ../public/scenesystem/sceneanimatableobject.h:52
void CSceneAnimatableObject::InitManagedHandle()
{
} /* size: 96 */

// <012603CA> ../public/scenesystem/sceneanimatableobject.h:139
void FlexWeight_t::FlexWeight_t()
{
} /* size: 0 */

// <012603AE> ../public/scenesystem/sceneanimatableobject.h:139
inline void FlexWeight_t::FlexWeight_t()
{
} /* size: 0 */

// <01335911> ../public/scenesystem/sceneanimatableobject.h:149
// variable: 1
inline void CSceneAnimatableObject::GetAnimParameter(const char* name)
{
	IAnimParameterListInstance* pParamList; // 153
} /* size: 0, variables: 1 */

// <013358E0> ../public/scenesystem/sceneanimatableobject.h:159
// variable: 1
inline void CSceneAnimatableObject::GetAnimParameter(int index)
{
	IAnimParameterListInstance* pParamList; // 163
} /* size: 0, variables: 1 */

// <013358A3> ../public/scenesystem/sceneanimatableobject.h:170
// variables: 2
inline void CSceneAnimatableObject::GetParameterInt(const char* name)
{
	IAnimParameterInstance* pParam; // 172
	CAnimVariant variant; // 175
} /* size: 0, variables: 2 */

// <01335866> ../public/scenesystem/sceneanimatableobject.h:200
// variables: 2
inline void CSceneAnimatableObject::GetParameterFloat(const char* name)
{
	IAnimParameterInstance* pParam; // 202
	CAnimVariant variant; // 205
} /* size: 0, variables: 2 */

// <01335829> ../public/scenesystem/sceneanimatableobject.h:230
// variables: 2
inline void CSceneAnimatableObject::GetParameterVector3(const char* name)
{
	IAnimParameterInstance* pParam; // 232
	CAnimVariant variant; // 235
} /* size: 0, variables: 2 */

// <013357EC> ../public/scenesystem/sceneanimatableobject.h:246
// variables: 2
inline void CSceneAnimatableObject::GetParameterRotation(const char* name)
{
	IAnimParameterInstance* pParam; // 248
	CAnimVariant variant; // 251
} /* size: 0, variables: 2 */

// <013357C6> ../public/scenesystem/sceneanimatableobject.h:261
// variable: 1
inline void CSceneAnimatableObject::PendingAnimationEvents()
{
	int nCount; // 263
} /* size: 0, variables: 1 */

// <013357A0> ../public/scenesystem/sceneanimatableobject.h:273
inline void CSceneAnimatableObject::DispatchTagEvents(SboxAnimTagEventCallback callback)
{
} /* size: 0 */

// <013351F5> ../public/scenesystem/sceneanimatableobject.h:283
// variables: 8
// function calls: 21
void CSceneAnimatableObject::RunAnimationEvents(SboxAnimationEventCallback callback)
{
	int nEventCount; // 285
	const CUtlVector<animevent_t, CUtlMemory<animevent_t, int> >& graphAnimEvents; // 307
	{
		int i; // 288
		{
			const AnimEvent_t* pAnimEvent; // 290
			const char* name; // 294
			CUtlString::Get(); // 99
			CUtlString::String(); // 66
			AnimEvent_t::GetEventName(); // 294
			CUtlMemory<AnimationEventOccurrence_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<AnimationEventOccurrence_t, CUtlMemory<AnimationEventOccurrence_t, int> >::operator[](
					int i);  // 180
			AnimationEventOccurrences_t::operator[](
					int i);  // 290
			ClosurePtr<void (detail::GenericClass::::GetClosureMemPtr()(char const*, float, float, const KeyValues3*), void (*)(char const* this); // 1531
			ClosurePtr<void (detail::GenericClass::::GetClosureThis()(char const*, float, float, const KeyValues3*), void (*)(char const* this); // 1531
			FastDelegate4<char const::operator(
					const char* p1,
					float p2,
					float p3,
					const KeyValues3* param4);  // 298
		}
	}
	{
		int i; // 312
		{
			animevent_t e; // 314
			const char* name; // 316
			CUtlMemory<animevent_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<animevent_t, CUtlMemory<animevent_t, int> >::operator[](
					int i);  // 314
			AnimEventIndex_t::AnimEventIndex_t(
					int32 value);  // 316
			ClosurePtr<void (detail::GenericClass::::GetClosureThis()(char const*, float, float, const KeyValues3*), void (*)(char const* this); // 1531
			ClosurePtr<void (detail::GenericClass::::GetClosureMemPtr()(char const*, float, float, const KeyValues3*), void (*)(char const* this); // 1531
			FastDelegate4<char const::operator(
					const char* p1,
					float p2,
					float p3,
					const KeyValues3* param4);  // 320
		}
	}
	CUtlVectorBase<AnimationEventOccurrence_t, CUtlMemory<AnimationEventOccurrence_t, int> >::Count(); // 175
	AnimationEventOccurrences_t::Count(); // 285
	CUtlVectorBase<AnimationEventOccurrence_t, CUtlMemory<AnimationEventOccurrence_t, int> >::RemoveAll(); // 302
	CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::operator==(
			const IAnimationGraphInstance* pOther);  // 304
	CUtlVectorBase<animevent_t, CUtlMemory<animevent_t, int> >::Count(); // 309
	CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::operator->(); // 324
} /* size: 383, variables: 2, inline expansions: 6 (43 bytes) */

// <013351DC> ../public/scenesystem/sceneanimatableobject.h:331
inline void CSceneAnimatableObject::ClearPhysicsBones()
{
} /* size: 0 */

// <0133519E> ../public/scenesystem/sceneanimatableobject.h:337
// variable: 1
inline void CSceneAnimatableObject::SetPhysicsBone(uint16 bone, CTransform transform)
{
	int i; // 339
} /* size: 0, variables: 1 */

// <03EA232C> ../public/scenesystem/sceneanimatableobject.h:382
// function calls: 114
void CSceneAnimatableObject::CSceneAnimatableObject()
{
	IGenericInterface::IGenericInterface(); // 1428
	{
	}
	AlignedByteArrayExplicit_t<3, unsigned int, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<3, unsigned int>::AlignedByteArray_t(); // 228
	CUtlMemory<unsigned int, int>::CUtlMemory(
			unsigned int* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<unsigned int, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::CUtlMemoryFixedGrowable_Base(
					unsigned int* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<3, unsigned int, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<unsigned int, 3, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<unsigned int, 3>::CUtlVectorFixedGrowable(
				int growSize);  // 1428
	matrix3x4_t::matrix3x4_t(); // 303
	matrix3x4a_t::matrix3x4a_t(); // 1428
	CUtlStringToken::CUtlStringToken(); // 1428
	CManagedHandle::CManagedHandle(); // 1428
	CSceneObject::CSceneObject(); // 382
	CSmartPtr<const IAnimGraphModelBinding, CRefCountAccessor>::CSmartPtr(); // 382
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::ResetDbgInfo(); // 530
	CUtlMemory<matrix3x4a_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<matrix3x4a_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::CUtlVector(); // 382
	CUtlMemory<matrix3x4a_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<matrix3x4a_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::CUtlVector(); // 382
	CUtlMemory<matrix3x4a_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<matrix3x4a_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::CUtlVector(); // 382
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 382
	CSmartPtr<CReceipt, CRefCountAccessor>::CSmartPtr(); // 16
	IAnimTagListener::IAnimTagListener(); // 16
	CUtlAbstractDelegate::CUtlAbstractDelegate(); // 734
	ClosurePtr<void (detail::GenericClass::::ClosurePtr()(const IEventAnimTag*, const AnimTagStatusContext&), void (*)(const IEvent this); // 1211
	FastDelegate2<const IEventAnimTag::Clear(); // 1211
	FastDelegate2<const IEventAnimTag::FastDelegate2(); // 2200
	CUtlDelegate<void(const IEventAnimTag::CUtlDelegate()>* this); // 16
	CAnimTagListenerHelper<IEventAnimTag>::CAnimTagListenerHelper(); // 382
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 382
	CUtlMemory<bone_merge_list_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<bone_merge_list_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<bone_merge_list_t, CUtlMemory<bone_merge_list_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<bone_merge_list_t, CUtlMemory<bone_merge_list_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<bone_merge_list_t, CUtlMemory<bone_merge_list_t, int> >::CUtlVector(); // 382
	CUtlMemory<CTransform, int>::ValidateGrowSize(); // 475
	CUtlMemory<CTransform, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CTransform, CUtlMemory<CTransform, int> >::CUtlVector(); // 382
	CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::CSmartPtr(); // 382
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::CWeakHandle(); // 382
	CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CSceneAnimatableObject::FlexWeight_t, CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CSceneAnimatableObject::FlexWeight_t, CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CSceneAnimatableObject::FlexWeight_t, CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int> >::CUtlVector(); // 382
	CUtlMemory<short unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<short unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::CUtlVector(); // 382
	CUtlMemory<CTransform, int>::ValidateGrowSize(); // 475
	CUtlMemory<CTransform, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CTransform, CUtlMemory<CTransform, int> >::CUtlVector(); // 382
	CUtlMemory<AnimationEventOccurrence_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<AnimationEventOccurrence_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<AnimationEventOccurrence_t, CUtlMemory<AnimationEventOccurrence_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<AnimationEventOccurrence_t, CUtlMemory<AnimationEventOccurrence_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<AnimationEventOccurrence_t, CUtlMemory<AnimationEventOccurrence_t, int> >::CUtlVector(); // 169
	AnimationEventOccurrences_t::AnimationEventOccurrences_t(); // 382
	CUtlMemory<CTransform, int>::ValidateGrowSize(); // 475
	CUtlMemory<CTransform, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CTransform, CUtlMemory<CTransform, int> >::CUtlVector(); // 382
	CUtlAbstractDelegate::CUtlAbstractDelegate(); // 734
	ClosurePtr<void (detail::GenericClass::::ClosurePtr()(void*), void (*)(void*), void (*)(void*)>* this); // 1084
	FastDelegate1<void::Clear(); // 1084
	FastDelegate1<void::FastDelegate1(); // 2160
	CUtlDelegate<void(void::CUtlDelegate()>* this); // 382
	Vector::Vector(); // 24
	Vector::Vector(); // 24
	AABB_t::AABB_t(); // 382
	Vector::Vector(); // 24
	Vector::Vector(); // 24
	AABB_t::AABB_t(); // 382
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const IAnimGraphModelBinding>(const IAnimGraphModelBinding* pObj); // 370
	CSmartPtr<const IAnimGraphModelBinding, CRefCountAccessor>::operator=(
			const IAnimGraphModelBinding* pObj);  // 388
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<IAnimationGraphInstance>(IAnimationGraphInstance* pObj); // 370
	CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::operator=(
			IAnimationGraphInstance* pObj);  // 389
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 390
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::Init(
		const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src);  // 331
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::operator=(
			const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src);  // 390
} /* size: 1034, inline expansions: 114 (2261 bytes) */

// <03EA2313> ../public/scenesystem/sceneanimatableobject.h:382
inline void CSceneAnimatableObject::CSceneAnimatableObject()
{
} /* size: 0 */

// <0657F7DF> ../public/scenesystem/sceneanimatableobject.h:397
// function calls: 155
void CSceneAnimatableObject::~CSceneAnimatableObject()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CReceipt>(CReceipt* pObj); // 370
	CSmartPtr<CReceipt, CRefCountAccessor>::operator=(
			CReceipt* pObj);  // 34
	CAnimTagListenerHelper<IEventAnimTag>::Unregister(); // 18
	CSmartPtr<CReceipt, CRefCountAccessor>::~CSmartPtr(); // 18
	IAnimTagListener::~IAnimTagListener(); // 18
	CAnimTagListenerHelper<IEventAnimTag>::~CAnimTagListenerHelper(); // 404
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::RemoveAll(); // 1798
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 1799
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Purge(); // 560
	ValidateAlignment<CTransform>(void); // 508
	CUtlMemory<CTransform, int>::Purge(); // 510
	CUtlMemory<CTransform, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CTransform, CUtlMemory<CTransform, int> >::~CUtlVector(); // 404
	CUtlVectorBase<AnimationEventOccurrence_t, CUtlMemory<AnimationEventOccurrence_t, int> >::RemoveAll(); // 1798
	CUtlMemory<AnimationEventOccurrence_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<AnimationEventOccurrence_t, int>::Purge(); // 903
	CUtlMemory<AnimationEventOccurrence_t, int>::Purge(); // 1799
	CUtlVectorBase<AnimationEventOccurrence_t, CUtlMemory<AnimationEventOccurrence_t, int> >::Purge(); // 560
	ValidateAlignment<AnimationEventOccurrence_t>(void); // 508
	CUtlMemory<AnimationEventOccurrence_t, int>::Purge(); // 510
	CUtlMemory<AnimationEventOccurrence_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<AnimationEventOccurrence_t, CUtlMemory<AnimationEventOccurrence_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<AnimationEventOccurrence_t, CUtlMemory<AnimationEventOccurrence_t, int> >::~CUtlVector(); // 169
	AnimationEventOccurrences_t::~AnimationEventOccurrences_t(); // 404
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::RemoveAll(); // 1798
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 1799
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Purge(); // 560
	ValidateAlignment<CTransform>(void); // 508
	CUtlMemory<CTransform, int>::Purge(); // 510
	CUtlMemory<CTransform, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CTransform, CUtlMemory<CTransform, int> >::~CUtlVector(); // 404
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<short unsigned int, int>::Purge(); // 903
	CUtlMemory<short unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Purge(); // 560
	ValidateAlignment<short unsigned int>(void); // 508
	CUtlMemory<short unsigned int, int>::Purge(); // 510
	CUtlMemory<short unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVector(); // 404
	CUtlVectorBase<CSceneAnimatableObject::FlexWeight_t, CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int>::Purge(); // 903
	CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int>::Purge(); // 1799
	CUtlVectorBase<CSceneAnimatableObject::FlexWeight_t, CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int> >::Purge(); // 560
	ValidateAlignment<CSceneAnimatableObject::FlexWeight_t>(void); // 508
	CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int>::Purge(); // 510
	CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CSceneAnimatableObject::FlexWeight_t, CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CSceneAnimatableObject::FlexWeight_t, CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int> >::~CUtlVector(); // 404
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<IAnimationGraphInstance>(IAnimationGraphInstance* pObj); // 344
	CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::~CSmartPtr(); // 404
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const IAnimGraphModelBinding>(const IAnimGraphModelBinding* pObj); // 344
	CSmartPtr<const IAnimGraphModelBinding, CRefCountAccessor>::~CSmartPtr(); // 404
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::RemoveAll(); // 1798
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 1799
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Purge(); // 560
	ValidateAlignment<CTransform>(void); // 508
	CUtlMemory<CTransform, int>::Purge(); // 510
	CUtlMemory<CTransform, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CTransform, CUtlMemory<CTransform, int> >::~CUtlVector(); // 404
	CUtlVectorBase<bone_merge_list_t, CUtlMemory<bone_merge_list_t, int> >::RemoveAll(); // 1798
	CUtlMemory<bone_merge_list_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<bone_merge_list_t, int>::Purge(); // 903
	CUtlMemory<bone_merge_list_t, int>::Purge(); // 1799
	CUtlVectorBase<bone_merge_list_t, CUtlMemory<bone_merge_list_t, int> >::Purge(); // 560
	ValidateAlignment<bone_merge_list_t>(void); // 508
	CUtlMemory<bone_merge_list_t, int>::Purge(); // 510
	CUtlMemory<bone_merge_list_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<bone_merge_list_t, CUtlMemory<bone_merge_list_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<bone_merge_list_t, CUtlMemory<bone_merge_list_t, int> >::~CUtlVector(); // 404
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 404
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::RemoveAll(); // 1798
	CUtlMemory<matrix3x4a_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 903
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 1799
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Purge(); // 560
	ValidateAlignment<matrix3x4a_t>(void); // 508
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 510
	CUtlMemory<matrix3x4a_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::~CUtlVector(); // 404
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::RemoveAll(); // 1798
	CUtlMemory<matrix3x4a_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 903
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 1799
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Purge(); // 560
	ValidateAlignment<matrix3x4a_t>(void); // 508
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 510
	CUtlMemory<matrix3x4a_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::~CUtlVector(); // 404
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::RemoveAll(); // 1798
	CUtlMemory<matrix3x4a_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 903
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 1799
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Purge(); // 560
	ValidateAlignment<matrix3x4a_t>(void); // 508
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 510
	CUtlMemory<matrix3x4a_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::~CUtlVector(); // 404
	CManagedHandle::~CManagedHandle(); // 1436
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 577
	CUtlMemory<unsigned int, int>::ConvertToExternalMemory(
				unsigned int* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<3, unsigned int, 4>::Base(); // 237
	CUtlMemoryFixedGrowable<unsigned int, 3, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<unsigned int, 3, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<unsigned int, 3>::~CUtlVectorFixedGrowable(); // 1436
	CSceneObject::~CSceneObject(); // 404
} /* size: 745, inline expansions: 155 (2956 bytes) */

// <0657F776> ../public/scenesystem/sceneanimatableobject.h:397
void CSceneAnimatableObject::~CSceneAnimatableObject()
{
} /* size: 36 */

// <0657F75D> ../public/scenesystem/sceneanimatableobject.h:397
inline void CSceneAnimatableObject::~CSceneAnimatableObject()
{
} /* size: 0 */

// <035584EB> ../public/scenesystem/sceneanimatableobject.h:397
// function calls: 156
void CSceneAnimatableObject::~CSceneAnimatableObject()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CReceipt>(CReceipt* pObj); // 370
	CSmartPtr<CReceipt, CRefCountAccessor>::operator=(
			CReceipt* pObj);  // 34
	CAnimTagListenerHelper<IEventAnimTag>::Unregister(); // 18
	CSmartPtr<CReceipt, CRefCountAccessor>::~CSmartPtr(); // 18
	IAnimTagListener::~IAnimTagListener(); // 18
	CAnimTagListenerHelper<IEventAnimTag>::~CAnimTagListenerHelper(); // 404
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::RemoveAll(); // 1798
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 1799
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Purge(); // 560
	ValidateAlignment<CTransform>(void); // 508
	CUtlMemory<CTransform, int>::Purge(); // 510
	CUtlMemory<CTransform, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CTransform, CUtlMemory<CTransform, int> >::~CUtlVector(); // 404
	CUtlVectorBase<AnimationEventOccurrence_t, CUtlMemory<AnimationEventOccurrence_t, int> >::RemoveAll(); // 1798
	CUtlMemory<AnimationEventOccurrence_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<AnimationEventOccurrence_t, int>::Purge(); // 903
	CUtlMemory<AnimationEventOccurrence_t, int>::Purge(); // 1799
	CUtlVectorBase<AnimationEventOccurrence_t, CUtlMemory<AnimationEventOccurrence_t, int> >::Purge(); // 560
	ValidateAlignment<AnimationEventOccurrence_t>(void); // 508
	CUtlMemory<AnimationEventOccurrence_t, int>::Purge(); // 510
	CUtlMemory<AnimationEventOccurrence_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<AnimationEventOccurrence_t, CUtlMemory<AnimationEventOccurrence_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<AnimationEventOccurrence_t, CUtlMemory<AnimationEventOccurrence_t, int> >::~CUtlVector(); // 169
	AnimationEventOccurrences_t::~AnimationEventOccurrences_t(); // 404
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::RemoveAll(); // 1798
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 1799
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Purge(); // 560
	ValidateAlignment<CTransform>(void); // 508
	CUtlMemory<CTransform, int>::Purge(); // 510
	CUtlMemory<CTransform, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CTransform, CUtlMemory<CTransform, int> >::~CUtlVector(); // 404
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<short unsigned int, int>::Purge(); // 903
	CUtlMemory<short unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Purge(); // 560
	ValidateAlignment<short unsigned int>(void); // 508
	CUtlMemory<short unsigned int, int>::Purge(); // 510
	CUtlMemory<short unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVector(); // 404
	CUtlVectorBase<CSceneAnimatableObject::FlexWeight_t, CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int>::Purge(); // 903
	CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int>::Purge(); // 1799
	CUtlVectorBase<CSceneAnimatableObject::FlexWeight_t, CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int> >::Purge(); // 560
	ValidateAlignment<CSceneAnimatableObject::FlexWeight_t>(void); // 508
	CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int>::Purge(); // 510
	CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CSceneAnimatableObject::FlexWeight_t, CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CSceneAnimatableObject::FlexWeight_t, CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int> >::~CUtlVector(); // 404
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<IAnimationGraphInstance>(IAnimationGraphInstance* pObj); // 344
	CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::~CSmartPtr(); // 404
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const IAnimGraphModelBinding>(const IAnimGraphModelBinding* pObj); // 344
	CSmartPtr<const IAnimGraphModelBinding, CRefCountAccessor>::~CSmartPtr(); // 404
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::RemoveAll(); // 1798
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 1799
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Purge(); // 560
	ValidateAlignment<CTransform>(void); // 508
	CUtlMemory<CTransform, int>::Purge(); // 510
	CUtlMemory<CTransform, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CTransform, CUtlMemory<CTransform, int> >::~CUtlVector(); // 404
	CUtlVectorBase<bone_merge_list_t, CUtlMemory<bone_merge_list_t, int> >::RemoveAll(); // 1798
	CUtlMemory<bone_merge_list_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<bone_merge_list_t, int>::Purge(); // 903
	CUtlMemory<bone_merge_list_t, int>::Purge(); // 1799
	CUtlVectorBase<bone_merge_list_t, CUtlMemory<bone_merge_list_t, int> >::Purge(); // 560
	ValidateAlignment<bone_merge_list_t>(void); // 508
	CUtlMemory<bone_merge_list_t, int>::Purge(); // 510
	CUtlMemory<bone_merge_list_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<bone_merge_list_t, CUtlMemory<bone_merge_list_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<bone_merge_list_t, CUtlMemory<bone_merge_list_t, int> >::~CUtlVector(); // 404
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 404
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::RemoveAll(); // 1798
	CUtlMemory<matrix3x4a_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 903
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 1799
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Purge(); // 560
	ValidateAlignment<matrix3x4a_t>(void); // 508
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 510
	CUtlMemory<matrix3x4a_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::~CUtlVector(); // 404
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::RemoveAll(); // 1798
	CUtlMemory<matrix3x4a_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 903
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 1799
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Purge(); // 560
	ValidateAlignment<matrix3x4a_t>(void); // 508
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 510
	CUtlMemory<matrix3x4a_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::~CUtlVector(); // 404
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::RemoveAll(); // 1798
	CUtlMemory<matrix3x4a_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 903
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 1799
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Purge(); // 560
	ValidateAlignment<matrix3x4a_t>(void); // 508
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 510
	CUtlMemory<matrix3x4a_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::~CUtlVector(); // 404
	CSceneSystem::DestructSceneObject(
				CSceneObject* pObj);  // 1435
	CManagedHandle::~CManagedHandle(); // 1436
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 577
	CUtlMemory<unsigned int, int>::ConvertToExternalMemory(
				unsigned int* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<3, unsigned int, 4>::Base(); // 237
	CUtlMemoryFixedGrowable<unsigned int, 3, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<unsigned int, 3, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<unsigned int, 3>::~CUtlVectorFixedGrowable(); // 1436
	CSceneObject::~CSceneObject(); // 404
} /* size: 0, inline expansions: 156 (0 bytes) */

// <004E4656> ../public/scenesystem/sceneanimatableobject.h:406
// variables: 6
// function calls: 71
void CSceneAnimatableObject::Init(const matrix3x4a_t& modelToWorld, const CModel* pModel)
{
	const CModelSkeleton& skeleton; // 416
	int nBoneCount; // 418
	int nAttachmentCount; // 440
	int nFlexCount; // 453
	{
		int i; // 426
		CUtlMemory<matrix3x4a_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::operator[](
				int i);  // 428
		matrix3x4_t::matrix3x4_t(); // 753
		Vector::LargestComponentValue(); // 755
		MatrixPosition(const matrix3x4_t& matrix,
				Vector& position);  // 757
		MatrixQuaternion(const matrix3x4_t& mat,
				Quaternion& q,
				Vector& o,
				float& flScale);  // 308
		Quaternion::Quaternion(); // 305
		Vector::Vector(); // 306
		QuaternionAligned::operator=(
				const Quaternion& vOther);  // 309
		{
			fltx4 retVal; // 186
			_mm_set_ps(const float  __Z,
					const float  __Y,
					const float  __X,
					const float  __W);  // 187
		}
		Set4Floats<>(float p0,
				float p1,
				float p2,
				float p3);  // 111
		CTransform::SetPositionAndScale(
					const Vector& v0,
					float flScale);  // 310
		CTransform::InitFromMatrix(
				const matrix3x4_t& xform);  // 530
		VectorAligned::VectorAligned(); // 31
		QuaternionAligned::QuaternionAligned(); // 31
		CTransform::CTransform(); // 529
		matrix3x4_t::ToCTransform(); // 428
		CUtlMemory<CTransform, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
				int i);  // 428
		VectorAligned::operator=(
				const VectorAligned& src);  // 26
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 26
		CTransform::operator=(
				CTransform &);  // 428
	}
	CUtlMemory<matrix3x4a_t, int>::Base(); // 112
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Base(); // 424
	CUtlMemory<matrix3x4a_t, int>::Base(); // 112
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Base(); // 431
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::RemoveAll(); // 1798
	CUtlMemory<matrix3x4a_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 903
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 1799
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Purge(); // 435
	CUtlMemory<matrix3x4a_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 903
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 1799
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::RemoveAll(); // 1798
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Purge(); // 436
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 1799
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::RemoveAll(); // 1798
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Purge(); // 437
	CUtlMemory<matrix3x4a_t, int>::Base(); // 112
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Base(); // 445
	CUtlMemory<matrix3x4a_t, int>::Base(); // 112
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Base(); // 445
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 458
	memset(void* __dest,
		int __ch,
		size_t __len);  // 458
	matrix3x4_t::Base(); // 291
	matrix3x4_t::Base(); // 291
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 291
	matrix3x4a_t::operator=(
			const matrix3x4_t& src);  // 2082
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::Count(); // 135
	CUtlVectorBase<ChildSceneObjectReference_t, CUtlMemoryFixedGrowable<ChildSceneObjectReference_t, 1, int> >::IsEmpty(); // 2090
	CSceneObject::SetTransform(
			const matrix3x4_t& mTransform);  // 465
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 462
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::RemoveAll(); // 1798
	CUtlMemory<matrix3x4a_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 903
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 1799
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Purge(); // 449
} /* size: 1170, variables: 4, inline expansions: 49 (1311 bytes) */

// <01333256> ../public/scenesystem/sceneanimatableobject.h:470
inline void CSceneAnimatableObject::InitAnimGraph(SboxAnimGraphChangedCallback pAnimGraphChangedCallback)
{
} /* size: 0 */

// <01332583> ../public/scenesystem/sceneanimatableobject.h:477
// variables: 3
// function calls: 56
void CSceneAnimatableObject::InitAnimGraph()
{
	const CModel* pModel; // 479
	int nFlexCount; // 507
	{
		AnimGraphInstanceCreationSettings_t creationSettings; // 490
		CSceneObject::GetModel(); // 488
		CWeakHandle<InfoForResourceTypeIAnimationGraph>::Init(
			const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src);  // 331
		CWeakHandle<InfoForResourceTypeIAnimationGraph>::operator=(
				const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src);  // 488
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 16
		AnimGraphInstanceCreationSettings_t::AnimGraphInstanceCreationSettings_t(); // 490
		CWeakHandle<InfoForResourceTypeIAnimationGraph>::operator const ResourceHandleInfo_t<InfoForResourceTypeIAnimationGraph>::RuntimeClass_t*(); // 491
		CSceneObject::GetModelHandle(); // 492
		CWeakHandle<InfoForResourceTypeCModel>::Init(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 331
		CWeakHandle<InfoForResourceTypeCModel>::operator=(
				const CWeakHandle<InfoForResourceTypeCModel>& src);  // 492
		CSmartPtr<const IAnimGraphModelBinding, CRefCountAccessor>::operator->(); // 493
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<IAnimationGraphInstance>(IAnimationGraphInstance* pObj); // 496
		CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::Reset(
			ESmartPtrNoAddRef,
			IAnimationGraphInstance* pObj);  // 419
		CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::operator=(
				CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>& other);  // 493
		CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::~CSmartPtr(); // 493
	}
	CSceneObject::GetModel(); // 479
	CSceneObject::GetModel(); // 484
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<const IAnimGraphModelBinding>(const IAnimGraphModelBinding* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const IAnimGraphModelBinding>(const IAnimGraphModelBinding* pObj); // 370
	CSmartPtr<const IAnimGraphModelBinding, CRefCountAccessor>::operator=(
			const IAnimGraphModelBinding* pObj);  // 406
	CSmartPtr<const IAnimGraphModelBinding, CRefCountAccessor>::operator=(
			const CSmartPtr<const IAnimGraphModelBinding, CRefCountAccessor>& other);  // 484
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<IAnimationGraphInstance>(IAnimationGraphInstance* pObj); // 370
	CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::operator=(
			IAnimationGraphInstance* pObj);  // 485
	CSmartPtr<const IAnimGraphModelBinding, CRefCountAccessor>::operator bool(); // 486
	CWeakHandle<InfoForResourceTypeCModel>::Init(
		ResourceHandleTyped_t hResource);  // 266
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(
			ResourceHandleTyped_t hResource);  // 1077
	CSceneObject::GetModelHandle(); // 503
	CUtlAbstractDelegate::operator!(); // 1180
	FastDelegate1<void::IsEmpty(); // 546
	ClosurePtr<void (detail::GenericClass::::GetClosureMemPtr()(void*), void (*)(void*), void (*)(void*)>* this); // 1150
	FastDelegate1<void::operator(
			void* p1);  // 548
	CSceneAnimatableObject::OnAnimGraphChanged(); // 519
	CUtlVectorBase<CSceneAnimatableObject::FlexWeight_t, CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int>::Purge(); // 903
	CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int>::Purge(); // 1799
	CUtlVectorBase<CSceneAnimatableObject::FlexWeight_t, CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CSceneAnimatableObject::FlexWeight_t, CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int> >::Purge(); // 514
} /* size: 895, variables: 2, inline expansions: 37 (810 bytes) */

// <004E31E7> ../public/scenesystem/sceneanimatableobject.h:477
// variables: 3
// function calls: 92
void CSceneAnimatableObject::InitAnimGraph()
{
	const CModel* pModel; // 479
	int nFlexCount; // 507
	{
		AnimGraphInstanceCreationSettings_t creationSettings; // 490
		CSceneObject::GetModel(); // 488
		CWeakHandle<InfoForResourceTypeIAnimationGraph>::Init(
			const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src);  // 331
		CWeakHandle<InfoForResourceTypeIAnimationGraph>::operator=(
				const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src);  // 488
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 16
		AnimGraphInstanceCreationSettings_t::AnimGraphInstanceCreationSettings_t(); // 490
		CWeakHandle<InfoForResourceTypeIAnimationGraph>::operator const ResourceHandleInfo_t<InfoForResourceTypeIAnimationGraph>::RuntimeClass_t*(); // 491
		CSceneObject::GetModelHandle(); // 492
		CWeakHandle<InfoForResourceTypeCModel>::Init(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 331
		CWeakHandle<InfoForResourceTypeCModel>::operator=(
				const CWeakHandle<InfoForResourceTypeCModel>& src);  // 492
		CSmartPtr<const IAnimGraphModelBinding, CRefCountAccessor>::operator->(); // 493
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<IAnimationGraphInstance>(IAnimationGraphInstance* pObj); // 496
		CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::Reset(
			ESmartPtrNoAddRef,
			IAnimationGraphInstance* pObj);  // 419
		CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::operator=(
				CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>& other);  // 493
		CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::~CSmartPtr(); // 493
	}
	CSceneObject::GetModel(); // 479
	CSceneObject::GetModel(); // 484
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<const IAnimGraphModelBinding>(const IAnimGraphModelBinding* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const IAnimGraphModelBinding>(const IAnimGraphModelBinding* pObj); // 370
	CSmartPtr<const IAnimGraphModelBinding, CRefCountAccessor>::operator=(
			const IAnimGraphModelBinding* pObj);  // 406
	CSmartPtr<const IAnimGraphModelBinding, CRefCountAccessor>::operator=(
			const CSmartPtr<const IAnimGraphModelBinding, CRefCountAccessor>& other);  // 484
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<IAnimationGraphInstance>(IAnimationGraphInstance* pObj); // 370
	CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::operator=(
			IAnimationGraphInstance* pObj);  // 485
	CSmartPtr<const IAnimGraphModelBinding, CRefCountAccessor>::operator bool(); // 486
	CWeakHandle<InfoForResourceTypeCModel>::Init(
		ResourceHandleTyped_t hResource);  // 266
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(
			ResourceHandleTyped_t hResource);  // 1077
	CSceneObject::GetModelHandle(); // 503
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CReceipt>(CReceipt* pObj); // 370
	CSmartPtr<CReceipt, CRefCountAccessor>::operator=(
			CReceipt* pObj);  // 34
	CUtlAbstractDelegate::Clear(); // 1309
	FastDelegate2<const IEventAnimTag::Clear(); // 35
	CAnimTagListenerHelper<IEventAnimTag>::Unregister(); // 524
	CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::operator!(); // 526
	CUtlAbstractDelegate::CUtlAbstractDelegate(); // 734
	ClosurePtr<void (detail::GenericClass::::ClosurePtr()(const IEventAnimTag*, const AnimTagStatusContext&), void (*)(const IEvent this); // 1239
	implicit_cast<CSceneAnimatableObject*, CSceneAnimatableObject*>(CSceneAnimatableObject* inputVal); // 1240
	CSceneAnimatableObject::Convert<CSceneAnimatableObject, void (
																void ()(CSceneAnimatableObject *, const IEventAnimTag *, const AnimTagStatusContext &) CSceneAnimatableObje function_to_bind,
																void ()(GenericClass *) GenericClass::*& bound_func);  // 746
	ClosurePtr<void (detail::GenericClass::::bindmemfunc<CSceneAnimatableObject, void (
																CSceneAnimatableObject* pthis,
																void ()(CSceneAnimatableObject *, const IEventAnimTag *, const AnimTagStatusContext &) CSceneAnimatableObje function_to_bind);  // 1240
	FastDelegate2<const IEventAnimTag::FastDelegate2<CSceneAnimatableObject, CSceneAnimatableObject>(
									CSceneAnimatableObject* pthis,
									void ()(CSceneAnimatableObject *, const IEventAnimTag *, const AnimTagStatusContext &) CSceneAnimatableObje function_to_bind);  // 2204
	CUtlDelegate<void(const IEventAnimTag::CUtlDelegate<CSceneAnimatableObject, CSceneAnimatableObject>(
									CSceneAnimatableObject* pthis,
									void ()(CSceneAnimatableObject *, const IEventAnimTag *, const AnimTagStatusContext &) CSceneAnimatableObje function_to_bind);  // 2539
	UtlMakeDelegate<CSceneAnimatableObject, CSceneAnimatableObject, const IEventAnimTag*, const AnimTagStatusContext&, void>(CSceneAnimatableObject* x,
																void ()(CSceneAnimatableObject *, const IEventAnimTag *, const AnimTagStatusContext &) CSceneAnimatableObje func);  // 533
	MyTypeID(void); // 63
	IAnimTagManagerInstance::RegisterListener<IEventAnimTag>(
					IAnimTagListener* listener);  // 22
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CReceipt>(CReceipt* pObj); // 496
	CSmartPtr<CReceipt, CRefCountAccessor>::Reset(
		ESmartPtrNoAddRef,
		CReceipt* pObj);  // 419
	CSmartPtr<CReceipt, CRefCountAccessor>::operator=(
			CSmartPtr<CReceipt, CRefCountAccessor>& other);  // 22
	CUtlAbstractDelegate::SetMementoFrom(
			const CUtlAbstractDelegate& right);  // 843
	ClosurePtr<void (detail::GenericClass::::CopyFrom<FastDelegate2<const IEventAnimTag*, const AnimTagStatusContext&, void> >(
												FastDelegate2<const IEventAnimTag*, const AnimTagStatusContext&, void>* pParent,
												const CUtlAbstractDelegate& right);  // 1218
	FastDelegate2<const IEventAnimTag::operator=(
			const FastDelegate2<const IEventAnimTag*, const AnimTagStatusContext&, void>& x);  // 2188
	CUtlDelegate<void(const IEventAnimTag::operator=(
			const CUtlDelegate<void(const IEventAnimTag*, const AnimTagStatusContext&)> &);  // 23
	CSmartPtr<CReceipt, CRefCountAccessor>::~CSmartPtr(); // 22
	CAnimTagListenerHelper<IEventAnimTag>::Register(
		IAnimTagManagerInstance* tagManager,
		CUtlDelegate<void(const IEventAnimTag*, const AnimTagStatusContext&)> delegate);  // 533
	CSceneAnimatableObject::RegisterEventTagListener(); // 517
	CUtlAbstractDelegate::operator!(); // 1180
	FastDelegate1<void::IsEmpty(); // 546
	ClosurePtr<void (detail::GenericClass::::GetClosureMemPtr()(void*), void (*)(void*), void (*)(void*)>* this); // 1150
	FastDelegate1<void::operator(
			void* p1);  // 548
	CSceneAnimatableObject::OnAnimGraphChanged(); // 519
	CUtlVectorBase<CSceneAnimatableObject::FlexWeight_t, CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int>::Purge(); // 903
	CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int>::Purge(); // 1799
	CUtlVectorBase<CSceneAnimatableObject::FlexWeight_t, CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CSceneAnimatableObject::FlexWeight_t, CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int> >::Purge(); // 514
} /* size: 1197, variables: 2, inline expansions: 73 (2005 bytes) */

// <01366D4E> ../public/scenesystem/sceneanimatableobject.h:522
// variable: 1
// function calls: 35
void CSceneAnimatableObject::RegisterEventTagListener()
{
	IAnimTagManagerInstance* pTagManager; // 529
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CReceipt>(CReceipt* pObj); // 370
	CSmartPtr<CReceipt, CRefCountAccessor>::operator=(
			CReceipt* pObj);  // 34
	CUtlAbstractDelegate::Clear(); // 1309
	FastDelegate2<const IEventAnimTag::Clear(); // 35
	CAnimTagListenerHelper<IEventAnimTag>::Unregister(); // 524
	CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::operator!(); // 526
	CUtlAbstractDelegate::CUtlAbstractDelegate(); // 734
	ClosurePtr<void (detail::GenericClass::::ClosurePtr()(const IEventAnimTag*, const AnimTagStatusContext&), void (*)(const IEvent this); // 1239
	implicit_cast<CSceneAnimatableObject*, CSceneAnimatableObject*>(CSceneAnimatableObject* inputVal); // 1240
	CSceneAnimatableObject::Convert<CSceneAnimatableObject, void (
																void ()(CSceneAnimatableObject *, const IEventAnimTag *, const AnimTagStatusContext &) CSceneAnimatableObje function_to_bind,
																void ()(GenericClass *) GenericClass::*& bound_func);  // 746
	ClosurePtr<void (detail::GenericClass::::bindmemfunc<CSceneAnimatableObject, void (
																CSceneAnimatableObject* pthis,
																void ()(CSceneAnimatableObject *, const IEventAnimTag *, const AnimTagStatusContext &) CSceneAnimatableObje function_to_bind);  // 1240
	FastDelegate2<const IEventAnimTag::FastDelegate2<CSceneAnimatableObject, CSceneAnimatableObject>(
									CSceneAnimatableObject* pthis,
									void ()(CSceneAnimatableObject *, const IEventAnimTag *, const AnimTagStatusContext &) CSceneAnimatableObje function_to_bind);  // 2204
	CUtlDelegate<void(const IEventAnimTag::CUtlDelegate<CSceneAnimatableObject, CSceneAnimatableObject>(
									CSceneAnimatableObject* pthis,
									void ()(CSceneAnimatableObject *, const IEventAnimTag *, const AnimTagStatusContext &) CSceneAnimatableObje function_to_bind);  // 2539
	UtlMakeDelegate<CSceneAnimatableObject, CSceneAnimatableObject, const IEventAnimTag*, const AnimTagStatusContext&, void>(CSceneAnimatableObject* x,
																void ()(CSceneAnimatableObject *, const IEventAnimTag *, const AnimTagStatusContext &) CSceneAnimatableObje func);  // 533
	MyTypeID(void); // 63
	IAnimTagManagerInstance::RegisterListener<IEventAnimTag>(
					IAnimTagListener* listener);  // 22
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CReceipt>(CReceipt* pObj); // 496
	CSmartPtr<CReceipt, CRefCountAccessor>::Reset(
		ESmartPtrNoAddRef,
		CReceipt* pObj);  // 419
	CSmartPtr<CReceipt, CRefCountAccessor>::operator=(
			CSmartPtr<CReceipt, CRefCountAccessor>& other);  // 22
	CUtlAbstractDelegate::SetMementoFrom(
			const CUtlAbstractDelegate& right);  // 843
	ClosurePtr<void (detail::GenericClass::::CopyFrom<FastDelegate2<const IEventAnimTag*, const AnimTagStatusContext&, void> >(
												FastDelegate2<const IEventAnimTag*, const AnimTagStatusContext&, void>* pParent,
												const CUtlAbstractDelegate& right);  // 1218
	FastDelegate2<const IEventAnimTag::operator=(
			const FastDelegate2<const IEventAnimTag*, const AnimTagStatusContext&, void>& x);  // 2188
	CUtlDelegate<void(const IEventAnimTag::operator=(
			const CUtlDelegate<void(const IEventAnimTag*, const AnimTagStatusContext&)> &);  // 23
	CSmartPtr<CReceipt, CRefCountAccessor>::~CSmartPtr(); // 22
	CAnimTagListenerHelper<IEventAnimTag>::Register(
		IAnimTagManagerInstance* tagManager,
		CUtlDelegate<void(const IEventAnimTag*, const AnimTagStatusContext&)> delegate);  // 533
} /* size: 393, variables: 1, inline expansions: 35 (1026 bytes) */

// <0133255D> ../public/scenesystem/sceneanimatableobject.h:522
// variable: 1
inline void CSceneAnimatableObject::RegisterEventTagListener()
{
	IAnimTagManagerInstance* pTagManager; // 529
} /* size: 0, variables: 1 */

// <01332450> ../public/scenesystem/sceneanimatableobject.h:536
// function calls: 3
void CSceneAnimatableObject::OnAnimGraphTag(const IEventAnimTag* pTag, const AnimTagStatusContext& context)
{
	ClosurePtr<void (detail::GenericClass::::GetClosureMemPtr()(char const*, int), void (*)(char const*, int), void (*)(char const* this); // 1277
	ClosurePtr<void (detail::GenericClass::::GetClosureThis()(char const*, int), void (*)(char const*, int), void (*)(char const* this); // 1277
	FastDelegate2<char const::operator(
			const char* p1,
			int p2);  // 540
} /* size: 86, inline expansions: 3 (41 bytes) */

// <01332437> ../public/scenesystem/sceneanimatableobject.h:544
inline void CSceneAnimatableObject::OnAnimGraphChanged()
{
} /* size: 0 */

// <013323F7> ../public/scenesystem/sceneanimatableobject.h:552
// variables: 2
inline void CSceneAnimatableObject::SetAnimGraph(const CUtlString& graphName)
{
	const CModel* pModel; // 554
	HAnimationGraph hGraph; // 558
} /* size: 0, variables: 2 */

// <01330DC4> ../public/scenesystem/sceneanimatableobject.h:565
// variables: 3
// function calls: 105
void CSceneAnimatableObject::SetAnimGraph(HAnimationGraph hGraph)
{
	const CModel* pModel; // 567
	bool bResetGraph; // 571
	{
		AnimGraphInstanceCreationSettings_t creationSettings; // 586
		CWeakHandle<InfoForResourceTypeIAnimationGraph>::Init(
			const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src);  // 331
		CWeakHandle<InfoForResourceTypeIAnimationGraph>::operator=(
				const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src);  // 584
		CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 16
		AnimGraphInstanceCreationSettings_t::AnimGraphInstanceCreationSettings_t(); // 586
		CWeakHandle<InfoForResourceTypeIAnimationGraph>::operator const ResourceHandleInfo_t<InfoForResourceTypeIAnimationGraph>::RuntimeClass_t*(); // 587
		CSceneObject::GetModelHandle(); // 588
		CSmartPtr<const IAnimGraphModelBinding, CRefCountAccessor>::operator->(); // 589
		CWeakHandle<InfoForResourceTypeCModel>::Init(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 331
		CWeakHandle<InfoForResourceTypeCModel>::operator=(
				const CWeakHandle<InfoForResourceTypeCModel>& src);  // 588
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<IAnimationGraphInstance>(IAnimationGraphInstance* pObj); // 496
		CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::Reset(
			ESmartPtrNoAddRef,
			IAnimationGraphInstance* pObj);  // 419
		CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::operator=(
				CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>& other);  // 589
		CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::~CSmartPtr(); // 589
	}
	CSceneObject::GetModel(); // 567
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 571
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::operator==(
			const CWeakHandle<InfoForResourceTypeIAnimationGraph>& hResource);  // 571
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::Init(
		const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src);  // 273
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src);  // 572
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::Init(
		const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src);  // 331
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::operator=(
			const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src);  // 572
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::operator==(
			const CWeakHandle<InfoForResourceTypeIAnimationGraph>& hResource);  // 574
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::operator->(); // 580
	CSmartPtr<IAnimGraphModelBinding, CRefCountAccessor>::Get(); // 413
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<IAnimGraphModelBinding>(IAnimGraphModelBinding* pObj); // 386
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const IAnimGraphModelBinding>(const IAnimGraphModelBinding* pObj); // 390
	CSmartPtr<const IAnimGraphModelBinding, CRefCountAccessor>::operator=<IAnimGraphModelBinding>(
						IAnimGraphModelBinding* pObj);  // 413
	CSmartPtr<const IAnimGraphModelBinding, CRefCountAccessor>::operator=<IAnimGraphModelBinding>(
						const CSmartPtr<IAnimGraphModelBinding, CRefCountAccessor>& other);  // 580
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<IAnimGraphModelBinding>(IAnimGraphModelBinding* pObj); // 344
	CSmartPtr<IAnimGraphModelBinding, CRefCountAccessor>::~CSmartPtr(); // 580
	CSmartPtr<const IAnimGraphModelBinding, CRefCountAccessor>::operator bool(); // 582
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CReceipt>(CReceipt* pObj); // 370
	CSmartPtr<CReceipt, CRefCountAccessor>::operator=(
			CReceipt* pObj);  // 34
	CUtlAbstractDelegate::Clear(); // 1309
	FastDelegate2<const IEventAnimTag::Clear(); // 35
	CAnimTagListenerHelper<IEventAnimTag>::Unregister(); // 524
	CSmartPtr<IAnimationGraphInstance, CRefCountAccessor>::operator!(); // 526
	CUtlAbstractDelegate::CUtlAbstractDelegate(); // 734
	ClosurePtr<void (detail::GenericClass::::ClosurePtr()(const IEventAnimTag*, const AnimTagStatusContext&), void (*)(const IEvent this); // 1239
	implicit_cast<CSceneAnimatableObject*, CSceneAnimatableObject*>(CSceneAnimatableObject* inputVal); // 1240
	CSceneAnimatableObject::Convert<CSceneAnimatableObject, void (
																void ()(CSceneAnimatableObject *, const IEventAnimTag *, const AnimTagStatusContext &) CSceneAnimatableObje function_to_bind,
																void ()(GenericClass *) GenericClass::*& bound_func);  // 746
	ClosurePtr<void (detail::GenericClass::::bindmemfunc<CSceneAnimatableObject, void (
																CSceneAnimatableObject* pthis,
																void ()(CSceneAnimatableObject *, const IEventAnimTag *, const AnimTagStatusContext &) CSceneAnimatableObje function_to_bind);  // 1240
	FastDelegate2<const IEventAnimTag::FastDelegate2<CSceneAnimatableObject, CSceneAnimatableObject>(
									CSceneAnimatableObject* pthis,
									void ()(CSceneAnimatableObject *, const IEventAnimTag *, const AnimTagStatusContext &) CSceneAnimatableObje function_to_bind);  // 2204
	CUtlDelegate<void(const IEventAnimTag::CUtlDelegate<CSceneAnimatableObject, CSceneAnimatableObject>(
									CSceneAnimatableObject* pthis,
									void ()(CSceneAnimatableObject *, const IEventAnimTag *, const AnimTagStatusContext &) CSceneAnimatableObje function_to_bind);  // 2539
	UtlMakeDelegate<CSceneAnimatableObject, CSceneAnimatableObject, const IEventAnimTag*, const AnimTagStatusContext&, void>(CSceneAnimatableObject* x,
																void ()(CSceneAnimatableObject *, const IEventAnimTag *, const AnimTagStatusContext &) CSceneAnimatableObje func);  // 533
	MyTypeID(void); // 63
	IAnimTagManagerInstance::RegisterListener<IEventAnimTag>(
					IAnimTagListener* listener);  // 22
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CReceipt>(CReceipt* pObj); // 496
	CSmartPtr<CReceipt, CRefCountAccessor>::Reset(
		ESmartPtrNoAddRef,
		CReceipt* pObj);  // 419
	CSmartPtr<CReceipt, CRefCountAccessor>::operator=(
			CSmartPtr<CReceipt, CRefCountAccessor>& other);  // 22
	CUtlAbstractDelegate::SetMementoFrom(
			const CUtlAbstractDelegate& right);  // 843
	ClosurePtr<void (detail::GenericClass::::CopyFrom<FastDelegate2<const IEventAnimTag*, const AnimTagStatusContext&, void> >(
												FastDelegate2<const IEventAnimTag*, const AnimTagStatusContext&, void>* pParent,
												const CUtlAbstractDelegate& right);  // 1218
	FastDelegate2<const IEventAnimTag::operator=(
			const FastDelegate2<const IEventAnimTag*, const AnimTagStatusContext&, void>& x);  // 2188
	CUtlDelegate<void(const IEventAnimTag::operator=(
			const CUtlDelegate<void(const IEventAnimTag*, const AnimTagStatusContext&)> &);  // 23
	CSmartPtr<CReceipt, CRefCountAccessor>::~CSmartPtr(); // 22
	CAnimTagListenerHelper<IEventAnimTag>::Register(
		IAnimTagManagerInstance* tagManager,
		CUtlDelegate<void(const IEventAnimTag*, const AnimTagStatusContext&)> delegate);  // 533
	CSceneAnimatableObject::RegisterEventTagListener(); // 597
	CUtlAbstractDelegate::operator!(); // 1180
	FastDelegate1<void::IsEmpty(); // 546
	ClosurePtr<void (detail::GenericClass::::GetClosureMemPtr()(void*), void (*)(void*), void (*)(void*)>* this); // 1150
	FastDelegate1<void::operator(
			void* p1);  // 548
	CSceneAnimatableObject::OnAnimGraphChanged(); // 599
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<const IAnimGraphModelBinding>(const IAnimGraphModelBinding* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const IAnimGraphModelBinding>(const IAnimGraphModelBinding* pObj); // 370
	CSmartPtr<const IAnimGraphModelBinding, CRefCountAccessor>::operator=(
			const IAnimGraphModelBinding* pObj);  // 406
	CSmartPtr<const IAnimGraphModelBinding, CRefCountAccessor>::operator=(
			const CSmartPtr<const IAnimGraphModelBinding, CRefCountAccessor>& other);  // 578
} /* size: 1129, variables: 2, inline expansions: 87 (2378 bytes) */

// <01330DAB> ../public/scenesystem/sceneanimatableobject.h:602
inline void CSceneAnimatableObject::GetAnimGraph()
{
} /* size: 0 */

// <01330D5D> ../public/scenesystem/sceneanimatableobject.h:607
// variables: 3
inline void CSceneAnimatableObject::ResetGraphParameters()
{
	IAnimParameterListInstance* pParamList; // 612
	{
		int i; // 616
		{
			IAnimParameterInstance* pParam; // 618
		}
	}
} /* size: 0, variables: 1 */

// <0132E057> ../public/scenesystem/sceneanimatableobject.h:626
// variables: 46
// function calls: 168
void CSceneAnimatableObject::MergeFrom(CSceneAnimatableObject* pParent)
{
	const CModel* pModel; // 631
	Scope pscope; // 634
	const CModel* pParentModel; // 636
	const CModelSkeleton& childSkeleton; // 640
	const CModelSkeleton& parentSkeleton; // 641
	int nMaxMergeBones; // 642
	bone_merge_list_t* pMergeList; // 648
	int nMergeCount; // 649
	int nBoneCount; // 651
	int nParentBoneCount; // 652
	CAnimationState& animState; // 660
	CTransform* animTransforms; // 661
	int nRootMostDestBone; // 669
	matrix3x4_t rootMostDestBoneToDestRoot; // 670
	const matrix3x4_t  destRootToBoneMergeBoneM; // 676
	int nRootMostSourceBone; // 679
	const matrix3x4_t  srcRootMostBoneWorld; // 680
	const matrix3x4_t  destRootToWorldM; // 681
	const matrix3x4_t  worldToDestRootM; // 682
	CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> > tempWorldSpace; // 688
	int nMergeIndex; // 691
	{
		int nBoneIndex; // 671
		{
			const matrix3x4_t  parentLocal; // 673
			VectorAligned::operator fltx4(); // 98
			_mm_cvtss_f32(__m128 __A); // 1553
			GetWSIMD<>(fltx4 a); // 98
			CTransform::GetScale(); // 362
			{
				int i; // 325
				{
					int j; // 327
				}
			}
			matrix3x4_t::ScaleUpper3x3Matrix(
						float flScale);  // 365
			CTransform::ToMatrix(); // 236
			TransformMatrix(const CTransform& in); // 673
			matrix3x4_t::matrix3x4_t(); // 977
			ConcatTransforms(const matrix3x4_t& in1,
					const matrix3x4_t& in2);  // 674
		}
	}
	{
		int nDestBone; // 692
		{
			const matrix3x4_t  mParentSpaceDest; // 697
			int nDestParentBone; // 698
			matrix3x4_t::matrix3x4_t(); // 977
			ConcatTransforms(const matrix3x4_t& in1,
					const matrix3x4_t& in2);  // 705
			CUtlMemory<matrix3x4a_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::operator[](
					int i);  // 705
			matrix3x4_t::Base(); // 291
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 291
			matrix3x4a_t::operator=(
					const matrix3x4_t& src);  // 705
			_mm_cvtss_f32(__m128 __A); // 1553
			GetWSIMD<>(fltx4 a); // 98
			CTransform::GetScale(); // 362
			{
				int i; // 325
				{
					int j; // 327
				}
			}
			matrix3x4_t::ScaleUpper3x3Matrix(
						float flScale);  // 365
			CTransform::ToMatrix(); // 236
			TransformMatrix(const CTransform& in); // 697
			CUtlMemory<matrix3x4a_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::operator[](
					int i);  // 701
			matrix3x4_t::matrix3x4_t(); // 977
			ConcatTransforms(const matrix3x4_t& in1,
					const matrix3x4_t& in2);  // 701
		}
		{
			const int  nSourceBone; // 711
			const matrix3x4_t  srcWs; // 712
			const matrix3x4_t  srcToDest; // 713
			matrix3x4_t boneToParentM; // 717
			int nDestParentBone; // 718
			{
				matrix3x4_t parentWorldInv; // 725
				CUtlMemory<matrix3x4a_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::operator[](
						int i);  // 725
				matrix3x4_t::matrix3x4_t(); // 1027
				MatrixInvert(const matrix3x4_t& in); // 725
				matrix3x4_t::matrix3x4_t(); // 977
				ConcatTransforms(const matrix3x4_t& in1,
						const matrix3x4_t& in2);  // 726
			}
			CUtlMemory<matrix3x4a_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::operator[](
					int i);  // 712
			VectorAligned::operator fltx4(); // 98
			_mm_cvtss_f32(__m128 __A); // 1553
			GetWSIMD<>(fltx4 a); // 98
			CTransform::GetScale(); // 362
			{
				int i; // 325
				{
					int j; // 327
				}
			}
			matrix3x4_t::ScaleUpper3x3Matrix(
						float flScale);  // 365
			CTransform::ToMatrix(); // 236
			TransformMatrix(const CTransform& in); // 713
			matrix3x4_t::matrix3x4_t(); // 977
			ConcatTransforms(const matrix3x4_t& in1,
					const matrix3x4_t& in2);  // 714
			CUtlMemory<matrix3x4a_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::operator[](
					int i);  // 714
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 291
			matrix3x4_t::Base(); // 291
			matrix3x4a_t::operator=(
					const matrix3x4_t& src);  // 714
			matrix3x4_t::matrix3x4_t(); // 717
			matrix3x4_t::matrix3x4_t(); // 977
			ConcatTransforms(const matrix3x4_t& in1,
					const matrix3x4_t& in2);  // 721
			matrix3x4_t::matrix3x4_t(); // 753
			Vector::LargestComponentValue(); // 755
			MatrixPosition(const matrix3x4_t& matrix,
					Vector& position);  // 757
			MatrixQuaternion(const matrix3x4_t& mat,
					Quaternion& q,
					Vector& o,
					float& flScale);  // 308
			Quaternion::Quaternion(); // 305
			Vector::Vector(); // 306
			QuaternionAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z,
				vec_t W);  // 217
			QuaternionAligned::operator=(
					const Quaternion& vOther);  // 309
			{
				fltx4 retVal; // 186
				_mm_set_ps(const float  __Z,
						const float  __Y,
						const float  __X,
						const float  __W);  // 187
			}
			Set4Floats<>(float p0,
					float p1,
					float p2,
					float p3);  // 111
			VectorAligned::operator=(
					fltx4 src);  // 111
			CTransform::SetPositionAndScale(
						const Vector& v0,
						float flScale);  // 310
			CTransform::InitFromMatrix(
					const matrix3x4_t& xform);  // 728
		}
		CUtlMemory<CTransform, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
				int i);  // 734
		matrix3x4_t::matrix3x4_t(); // 753
		Vector::LargestComponentValue(); // 755
		MatrixPosition(const matrix3x4_t& matrix,
				Vector& position);  // 757
		MatrixQuaternion(const matrix3x4_t& mat,
				Quaternion& q,
				Vector& o,
				float& flScale);  // 308
		Quaternion::Quaternion(); // 305
		Vector::Vector(); // 306
		QuaternionAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 217
		QuaternionAligned::operator=(
				const Quaternion& vOther);  // 309
		{
			fltx4 retVal; // 186
			_mm_set_ps(const float  __Z,
					const float  __Y,
					const float  __X,
					const float  __W);  // 187
		}
		Set4Floats<>(float p0,
				float p1,
				float p2,
				float p3);  // 111
		VectorAligned::operator=(
				fltx4 src);  // 111
		CTransform::SetPositionAndScale(
					const Vector& v0,
					float flScale);  // 310
		CTransform::InitFromMatrix(
				const matrix3x4_t& xform);  // 734
		CUtlMemory<matrix3x4a_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::operator[](
				int i);  // 735
	}
	{
		LocalFlexController_t i; // 751
		{
			const uint32  flexHash; // 753
			LocalFlexController_t parentFlexId; // 754
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
					int i);  // 757
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
					int i);  // 757
		}
		operator++(LocalFlexController_t& a,
				int);  // 751
	}
	CSceneObject::GetModel(); // 631
	CModel::GetModelName(); // 634
	Scope::Scope(
		const char* name,
		const char* data,
		uint32 color);  // 634
	CSceneObject::GetModel(); // 636
	CUtlVectorBase<bone_merge_list_t, CUtlMemory<bone_merge_list_t, int> >::Count(); // 643
	CUtlMemory<bone_merge_list_t, int>::Base(); // 112
	CUtlVectorBase<bone_merge_list_t, CUtlMemory<bone_merge_list_t, int> >::Base(); // 648
	CSceneObject::GetModel(); // 651
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 654
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 598
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
	CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
	CModel::GetAnimationStateData<(
							void* pBase);  // 602
	CAnimationState::GetAnimationData<()0>(const CAnimationState* this); // 661
	VectorAligned::operator fltx4(); // 98
	_mm_cvtss_f32(__m128 __A); // 1553
	GetWSIMD<>(fltx4 a); // 98
	CTransform::GetScale(); // 362
	{
		int i; // 325
		{
			int j; // 327
		}
	}
	matrix3x4_t::ScaleUpper3x3Matrix(
				float flScale);  // 365
	CTransform::ToMatrix(); // 236
	TransformMatrix(const CTransform& in); // 670
	Scope::~Scope(); // 767
	matrix3x4_t::matrix3x4_t(); // 1027
	MatrixInvert(const matrix3x4_t& in); // 676
	CUtlMemory<matrix3x4a_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::operator[](
			int i);  // 680
	matrix3x4_t::matrix3x4_t(); // 977
	ConcatTransforms(const matrix3x4_t& in1,
			const matrix3x4_t& in2);  // 681
	matrix3x4_t::matrix3x4_t(); // 1027
	MatrixInvert(const matrix3x4_t& in); // 682
	CUtlMemory<matrix3x4a_t, int>::Base(); // 112
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Base(); // 685
	CUtlMemory<matrix3x4a_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<matrix3x4a_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::CUtlVector(); // 688
	CUtlMemory<CTransform, int>::Base(); // 112
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Base(); // 739
	matrix3x4_t::matrix3x4_t(); // 753
	Vector::LargestComponentValue(); // 755
	MatrixPosition(const matrix3x4_t& matrix,
			Vector& position);  // 757
	MatrixQuaternion(const matrix3x4_t& mat,
			Quaternion& q,
			Vector& o,
			float& flScale);  // 308
	Quaternion::Quaternion(); // 305
	Vector::Vector(); // 306
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 217
	QuaternionAligned::operator=(
			const Quaternion& vOther);  // 309
	{
		fltx4 retVal; // 186
		_mm_set_ps(const float  __Z,
				const float  __Y,
				const float  __X,
				const float  __W);  // 187
	}
	Set4Floats<>(float p0,
			float p1,
			float p2,
			float p3);  // 111
	VectorAligned::operator=(
			fltx4 src);  // 111
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 310
	CTransform::InitFromMatrix(
			const matrix3x4_t& xform);  // 530
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 529
	matrix3x4_t::ToCTransform(); // 2120
	CSceneObject::GetCTransform(); // 739
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 749
	CUtlMemory<matrix3x4a_t, int>::Base(); // 112
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Base(); // 763
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 291
	matrix3x4_t::Base(); // 291
	matrix3x4_t::Base(); // 291
	matrix3x4a_t::operator=(
			const matrix3x4_t& src);  // 290
	matrix3x4_t::matrix3x4_t(); // 290
	matrix3x4a_t::matrix3x4a_t(
			const matrix3x4_t& src);  // 763
	CUtlMemory<matrix3x4a_t, int>::Base(); // 112
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Base(); // 763
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 903
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 1799
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Purge(); // 560
	ValidateAlignment<matrix3x4a_t>(void); // 508
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 510
	CUtlMemory<matrix3x4a_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::~CUtlVector(); // 767
	Scope::~Scope(); // 767
} /* size: 3622, variables: 21, inline expansions: 79 (2275 bytes) */

// <0132C3DA> ../public/scenesystem/sceneanimatableobject.h:769
// variables: 28
// function calls: 101
void CSceneAnimatableObject::UpdateBoundsFromRenderBones()
{
	const CModel* pModel; // 774
	const CModelSkeleton& skeleton; // 777
	const int  nMeshes; // 779
	Vector vMins; // 780
	Vector vMaxs; // 781
	Vector vLocalMins; // 782
	Vector vLocalMaxs; // 783
	const matrix3x4_t  worldToLocal; // 785
	bool bHasBones; // 786
	Vector vWorldMins; // 824
	Vector vWorldMaxs; // 825
	{
		int m; // 787
		{
			const CRenderMesh* pMeshData; // 789
			{
				const CRenderSkeleton* pSkeleton; // 792
				{
					int b; // 793
					{
						int nModelBone; // 795
						{
							const RenderSkeletonBone_t* pRenderBone; // 798
							const matrix3x4a_t& mBoneWorld; // 799
							const matrix3x4_t  mBoneLocal; // 800
							Vector vBoneMins; // 801
							Vector vBoneMaxs; // 802
							Vector vWorldBoneMins; // 804
							Vector vWorldBoneMaxs; // 805
							Vector vLocalBoneMins; // 808
							Vector vLocalBoneMaxs; // 809
							matrix3x4_t::matrix3x4_t(); // 977
							ConcatTransforms(const matrix3x4_t& in1,
									const matrix3x4_t& in2);  // 800
							CUtlMemory<matrix3x4a_t, int>::operator[](
									int i);  // 588
							CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::operator[](
									int i);  // 799
							Vector::Vector(); // 1443
							VectorSubtract(const Vector& a,
									const Vector& b,
									Vector& c);  // 1444
							Vector::operator-(
									const Vector& v);  // 801
							VectorAdd(const Vector& a,
									const Vector& b,
									Vector& c);  // 1437
							Vector::Vector(); // 1436
							Vector::operator+(
									const Vector& v);  // 802
							Vector::Vector(); // 804
							Vector::Vector(); // 805
							Vector::Vector(); // 808
							Vector::Vector(); // 809
							Vector::Vector(
								vec_t X,
								vec_t Y,
								vec_t Z);  // 1414
							Vector::Min(
								const Vector& vOther);  // 812
							Vector::operator=(
									const Vector& vOther);  // 812
							Vector::operator=(
									const Vector& vOther);  // 813
							Vector::Vector(
								vec_t X,
								vec_t Y,
								vec_t Z);  // 1421
							Vector::Max(
								const Vector& vOther);  // 813
							Vector::Vector(
								vec_t X,
								vec_t Y,
								vec_t Z);  // 1414
							Vector::Min(
								const Vector& vOther);  // 815
							Vector::operator=(
									const Vector& vOther);  // 815
							Vector::Vector(
								vec_t X,
								vec_t Y,
								vec_t Z);  // 1421
							Vector::Max(
								const Vector& vOther);  // 816
							Vector::operator=(
									const Vector& vOther);  // 816
						}
						CUtlMemory<CUtlStringToken, int>::operator[](
								int i);  // 595
						CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::operator[](
								int i);  // 795
					}
				}
			}
		}
	}
	CSceneObject::SetBoundsType(
			ESceneObjectBoundsType nBoundsType);  // 772
	CSceneObject::GetModel(); // 774
	matrix3x4_t::matrix3x4_t(); // 753
	Vector::LargestComponentValue(); // 755
	MatrixPosition(const matrix3x4_t& matrix,
			Vector& position);  // 757
	MatrixQuaternion(const matrix3x4_t& mat,
			Quaternion& q,
			Vector& o,
			float& flScale);  // 308
	Quaternion::Quaternion(); // 305
	Vector::Vector(); // 306
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 217
	QuaternionAligned::operator=(
			const Quaternion& vOther);  // 309
	{
		fltx4 retVal; // 186
		_mm_set_ps(const float  __Z,
				const float  __Y,
				const float  __X,
				const float  __W);  // 187
	}
	Set4Floats<>(float p0,
			float p1,
			float p2,
			float p3);  // 111
	VectorAligned::operator=(
			fltx4 src);  // 111
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 310
	CTransform::InitFromMatrix(
			const matrix3x4_t& xform);  // 530
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 529
	matrix3x4_t::ToCTransform(); // 2120
	CSceneObject::GetCTransform(); // 785
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 780
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 781
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 782
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 783
	_mm_cvtss_f32(__m128 __A); // 1553
	GetWSIMD<>(fltx4 a); // 98
	VectorAligned::operator fltx4(); // 98
	CTransform::GetScale(); // 362
	{
		int i; // 325
		{
			int j; // 327
		}
	}
	matrix3x4_t::ScaleUpper3x3Matrix(
				float flScale);  // 365
	CTransform::ToMatrix(); // 785
	Vector::Vector(); // 824
	Vector::Vector(); // 825
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 835
	Vector::operator=(
			const Vector& vOther);  // 833
	CSceneObject::SetBoundsType(
			ESceneObjectBoundsType nBoundsType);  // 831
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1414
	Vector::Min(
		const Vector& vOther);  // 833
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1421
	Vector::Max(
		const Vector& vOther);  // 834
	Vector::operator=(
			const Vector& vOther);  // 834
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1414
	Vector::Min(
		const Vector& vOther);  // 837
	Vector::operator=(
			const Vector& vOther);  // 17
	AABB_t::operator=(
			AABB_t &);  // 840
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1421
	Vector::Max(
		const Vector& vOther);  // 838
	Vector::Vector(); // 27
	Vector::Vector(); // 27
	Vector::operator=(
			const Vector& vOther);  // 28
	Vector::operator=(
			const Vector& vOther);  // 29
	AABB_t::AABB_t(
		const Vector& vMins,
		const Vector& vMaxs);  // 840
	Vector::Vector(); // 27
	Vector::Vector(); // 27
	Vector::operator=(
			const Vector& vOther);  // 28
	Vector::operator=(
			const Vector& vOther);  // 29
	AABB_t::AABB_t(
		const Vector& vMins,
		const Vector& vMaxs);  // 841
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 845
	Vector::Vector(); // 27
	Vector::Vector(); // 27
	Vector::operator=(
			const Vector& vOther);  // 28
	Vector::operator=(
			const Vector& vOther);  // 29
	AABB_t::AABB_t(
		const Vector& vMins,
		const Vector& vMaxs);  // 847
	Vector::operator=(
			const Vector& vOther);  // 17
	Vector::operator=(
			const Vector& vOther);  // 17
	AABB_t::operator=(
			AABB_t &);  // 847
	Vector::operator=(
			const Vector& vOther);  // 17
	Vector::operator=(
			const Vector& vOther);  // 17
	AABB_t::operator=(
			AABB_t &);  // 848
	Vector::Vector(); // 27
	Vector::Vector(); // 27
	Vector::operator=(
			const Vector& vOther);  // 28
	Vector::operator=(
			const Vector& vOther);  // 29
	AABB_t::AABB_t(
		const Vector& vMins,
		const Vector& vMaxs);  // 848
} /* size: 2436, variables: 11, inline expansions: 72 (2198 bytes) */

// <0132C380> ../public/scenesystem/sceneanimatableobject.h:852
// variables: 5
inline void CSceneAnimatableObject::SetBindPose()
{
	const CModel* pModel; // 854
	const CModelSkeleton& skeleton; // 858
	int nBoneCount; // 859
	matrix3x4a_t modelToWorld; // 869
	{
		int i; // 872
	}
} /* size: 0, variables: 4 */

// <0132C35A> ../public/scenesystem/sceneanimatableobject.h:883
// variable: 1
inline void CSceneAnimatableObject::GetRootMotion()
{
	CMotionTransform rootMotion; // 891
} /* size: 0, variables: 1 */

// <0132B6E3> ../public/scenesystem/sceneanimatableobject.h:895
// variables: 17
// function calls: 42
void CSceneAnimatableObject::Update(float dt)
{
	const CModel* pModel; // 900
	Scope pscope; // 904
	const char   __FUNCTION__; // 46673
	PhysicsBonesOverlay_t physicsBones; // 936
	matrix3x4a_t rootTransform; // 941
	int nBoneCount; // 945
	CAnimationState& animState; // 948
	const float* pAnimFlexes; // 949
	{
		CSceneObject* pParent; // 918
		{
			ISceneObjectDesc* pParentDesc; // 920
			CSceneAnimatableObject* pAnimatableObject; // 926
			CSceneObject::GetDesc(); // 920
		}
		CSceneObject::GetParent(); // 918
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 934
	}
	{
		LocalFlexController_t i; // 953
		{
			FlexWeight_t& w; // 955
			float anim; // 969
			float result; // 970
			{
				float t; // 959
				Clamp<float>(const float& val,
						const float& minVal,
						const float& maxVal);  // 959
			}
			CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CSceneAnimatableObject::FlexWeight_t, CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int> >::operator[](
					int i);  // 955
			clamp<float, float>(const float& val,
						const float& minVal,
						const float& maxVal);  // 967
			Lerp<float>(float flPercent,
					const float& A,
					const float& B);  // 970
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
					int i);  // 972
		}
		CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 953
	}
	CSceneObject::GetModel(); // 900
	CModel::GetModelName(); // 904
	Scope::Scope(
		const char* name,
		const char* data,
		uint32 color);  // 904
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::operator==(
			const CWeakHandle<InfoForResourceTypeIAnimationGraph>& hResource);  // 913
	Scope::~Scope(); // 974
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 934
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 934
	PhysicsBonesOverlay_t::PhysicsBonesOverlay_t(); // 936
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 937
	CUtlMemory<short unsigned int, int>::Base(); // 112
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Base(); // 938
	CUtlMemory<CTransform, int>::Base(); // 112
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Base(); // 939
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 291
	matrix3x4_t::Base(); // 291
	matrix3x4_t::Base(); // 291
	matrix3x4a_t::operator=(
			const matrix3x4_t& src);  // 290
	matrix3x4_t::matrix3x4_t(); // 290
	matrix3x4a_t::matrix3x4a_t(
			const matrix3x4_t& src);  // 941
	CUtlMemory<CTransform, int>::Base(); // 112
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Base(); // 943
	CUtlMemory<matrix3x4a_t, int>::Base(); // 112
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Base(); // 946
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 598
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
	CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
	CModel::GetAnimationStateData<(
							void* pBase);  // 602
	CAnimationState::GetAnimationData<()1>(const CAnimationState* this); // 949
	CSmartPtr<const IAnimGraphModelBinding, CRefCountAccessor>::operator!=<const IAnimGraphModelBinding>(
						const CSmartPtr<const IAnimGraphModelBinding, CRefCountAccessor>& other);  // 913
} /* size: 926, variables: 8, inline expansions: 32 (333 bytes) */

// <004DDA98> ../public/scenesystem/sceneanimatableobject.h:895
// variables: 17
// function calls: 42
void CSceneAnimatableObject::Update(float dt)
{
	const CModel* pModel; // 900
	Scope pscope; // 904
	const char   __FUNCTION__; // 3596
	PhysicsBonesOverlay_t physicsBones; // 936
	matrix3x4a_t rootTransform; // 941
	int nBoneCount; // 945
	CAnimationState& animState; // 948
	const float* pAnimFlexes; // 949
	{
		CSceneObject* pParent; // 918
		{
			ISceneObjectDesc* pParentDesc; // 920
			CSceneAnimatableObject* pAnimatableObject; // 926
			CSceneObject::GetDesc(); // 920
		}
		CSceneObject::GetParent(); // 918
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 934
	}
	{
		LocalFlexController_t i; // 953
		{
			FlexWeight_t& w; // 955
			float anim; // 969
			float result; // 970
			{
				float t; // 959
				Clamp<float>(const float& val,
						const float& minVal,
						const float& maxVal);  // 959
			}
			CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CSceneAnimatableObject::FlexWeight_t, CUtlMemory<CSceneAnimatableObject::FlexWeight_t, int> >::operator[](
					int i);  // 955
			clamp<float, float>(const float& val,
						const float& minVal,
						const float& maxVal);  // 967
			Lerp<float>(float flPercent,
					const float& A,
					const float& B);  // 970
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
					int i);  // 972
		}
		CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 953
	}
	CSceneObject::GetModel(); // 900
	CModel::GetModelName(); // 904
	Scope::Scope(
		const char* name,
		const char* data,
		uint32 color);  // 904
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::operator==(
			const CWeakHandle<InfoForResourceTypeIAnimationGraph>& hResource);  // 913
	Scope::~Scope(); // 974
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 934
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 934
	PhysicsBonesOverlay_t::PhysicsBonesOverlay_t(); // 936
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 937
	CUtlMemory<short unsigned int, int>::Base(); // 112
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Base(); // 938
	CUtlMemory<CTransform, int>::Base(); // 112
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Base(); // 939
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 291
	matrix3x4_t::Base(); // 291
	matrix3x4_t::Base(); // 291
	matrix3x4a_t::operator=(
			const matrix3x4_t& src);  // 290
	matrix3x4_t::matrix3x4_t(); // 290
	matrix3x4a_t::matrix3x4a_t(
			const matrix3x4_t& src);  // 941
	CUtlMemory<CTransform, int>::Base(); // 112
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Base(); // 943
	CUtlMemory<matrix3x4a_t, int>::Base(); // 112
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Base(); // 946
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 598
	CStrongHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
	CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
	CModel::GetAnimationStateData<(
							void* pBase);  // 602
	CAnimationState::GetAnimationData<()1>(const CAnimationState* this); // 949
	CSmartPtr<const IAnimGraphModelBinding, CRefCountAccessor>::operator!=<const IAnimGraphModelBinding>(
						const CSmartPtr<const IAnimGraphModelBinding, CRefCountAccessor>& other);  // 913
} /* size: 926, variables: 8, inline expansions: 32 (333 bytes) */

// <0132B696> ../public/scenesystem/sceneanimatableobject.h:976
// variables: 4
inline void CSceneAnimatableObject::CalculateWorldSpaceBones()
{
	const CModel* pModel; // 981
	matrix3x4a_t rootTransform; // 985
	int nBoneCount; // 986
	CAnimationState& animState; // 988
} /* size: 0, variables: 4 */

// <0132B656> ../public/scenesystem/sceneanimatableobject.h:992
// variables: 3
inline void CSceneAnimatableObject::FinishUpdate()
{
	const CModel* pModel; // 994
	matrix3x4a_t rootTransform; // 998
	int nAttachmentCount; // 999
} /* size: 0, variables: 3 */

// <0132B609> ../public/scenesystem/sceneanimatableobject.h:1009
// variables: 3
inline void CSceneAnimatableObject::GetParentSpaceBone(int index)
{
	CAnimationState& animState; // 1014
	int boneCount; // 1015
	CTransform* pParentSpaceTransforms; // 1016
} /* size: 0, variables: 3 */

// <0132B5B0> ../public/scenesystem/sceneanimatableobject.h:1022
// variables: 3
inline void CSceneAnimatableObject::SetParentSpaceBone(int index, const CTransform& tx)
{
	CAnimationState& animState; // 1027
	int boneCount; // 1028
	CTransform* pParentSpaceTransforms; // 1029
} /* size: 0, variables: 3 */

// <03B9789F> ../public/scenesystem/sceneanimatableobject.h:1035
inline void CSceneAnimatableObject::SetProceduralBoneTransforms(ISceneAnimatableProceduralBoneTransforms* pProceduralBoneTransforms)
{
} /* size: 0 */

// <03EA04E2> ../public/scenesystem/sceneanimatableobject.h:1040
inline void CSceneAnimatableObject::GetProceduralBoneTransforms()
{
} /* size: 0 */

// <0132B57D> ../public/scenesystem/sceneanimatableobject.h:1061
inline void CSceneAnimatableObject::SetWorldSpaceRenderBoneTransform(int nBoneIndex, const CTransform pRenderWorldTransform)
{
} /* size: 0 */

// <0132B557> ../public/scenesystem/sceneanimatableobject.h:1066
inline void CSceneAnimatableObject::GetWorldSpaceRenderBoneTransform(int nBoneIndex)
{
} /* size: 0 */

// <0132B524> ../public/scenesystem/sceneanimatableobject.h:1077
// variable: 1
inline void CSceneAnimatableObject::GetWorldSpaceRenderBoneTransform(const CUtlString& boneName)
{
	int nBoneIndex; // 1082
} /* size: 0, variables: 1 */

// <0132B4FE> ../public/scenesystem/sceneanimatableobject.h:1086
inline void CSceneAnimatableObject::GetWorldSpaceRenderBonePreviousTransform(int nBoneIndex)
{
} /* size: 0 */

// <0132B4CB> ../public/scenesystem/sceneanimatableobject.h:1097
// variable: 1
inline void CSceneAnimatableObject::GetWorldSpaceRenderBonePreviousTransform(const CUtlString& boneName)
{
	int nBoneIndex; // 1102
} /* size: 0, variables: 1 */

// <0132B455> ../public/scenesystem/sceneanimatableobject.h:1106
// variables: 6
inline void CSceneAnimatableObject::GetLocalSpaceRenderBoneTransform(int nBoneIndex)
{
	const CModelSkeleton& skeleton; // 1114
	int nParentBone; // 1115
	matrix3x4a_t worldToLocal; // 1127
	matrix3x4a_t local; // 1130
	{
		matrix3x4a_t worldToBone; // 1118
		matrix3x4a_t local; // 1121
	}
} /* size: 0, variables: 4 */

// <0132B422> ../public/scenesystem/sceneanimatableobject.h:1136
// variable: 1
inline void CSceneAnimatableObject::GetLocalSpaceRenderBoneTransform(const CUtlString& boneName)
{
	int nBoneIndex; // 1141
} /* size: 0, variables: 1 */

// <0132B3FC> ../public/scenesystem/sceneanimatableobject.h:1145
inline void CSceneAnimatableObject::GetWorldSpaceAnimationTransform(int nBoneIndex)
{
} /* size: 0 */

// <0132B3A2> ../public/scenesystem/sceneanimatableobject.h:1156
// variables: 2
inline void CSceneAnimatableObject::SBox_SetFlexOverride(CUtlStringToken token, float flWeight, float flFadeTime)
{
	const CModel* pModel; // 1158
	LocalFlexController_t index; // 1162
} /* size: 0, variables: 2 */

// <0132B33D> ../public/scenesystem/sceneanimatableobject.h:1169
// variables: 3
inline void CSceneAnimatableObject::SBox_SetFlexOverride(int flexId, float flWeight, float flFadeTime)
{
	const CModel* pModel; // 1171
	int nFlexControllers; // 1175
	FlexWeight_t& w; // 1180
} /* size: 0, variables: 3 */

// <0132B2FD> ../public/scenesystem/sceneanimatableobject.h:1187
// variables: 2
inline void CSceneAnimatableObject::SBox_GetFlexOverride(CUtlStringToken token)
{
	const CModel* pModel; // 1189
	LocalFlexController_t index; // 1193
} /* size: 0, variables: 2 */

// <0132B2BD> ../public/scenesystem/sceneanimatableobject.h:1200
// variables: 2
inline void CSceneAnimatableObject::SBox_GetFlexOverride(int flexId)
{
	const CModel* pModel; // 1202
	int nFlexControllers; // 1206
} /* size: 0, variables: 2 */

// <0132B28A> ../public/scenesystem/sceneanimatableobject.h:1214
// variable: 1
inline void CSceneAnimatableObject::SBox_ClearFlexOverride(float flFadeTime)
{
	{
		int i; // 1216
	}
} /* size: 0 */

// <0132B23D> ../public/scenesystem/sceneanimatableobject.h:1222
// variables: 2
inline void CSceneAnimatableObject::SBox_ClearFlexOverride(CUtlStringToken token, float flFadeTime)
{
	const CModel* pModel; // 1224
	LocalFlexController_t index; // 1228
} /* size: 0, variables: 2 */

// <0132B1E5> ../public/scenesystem/sceneanimatableobject.h:1235
// variables: 3
inline void CSceneAnimatableObject::SBox_ClearFlexOverride(int flexId, float flFadeTime)
{
	const CModel* pModel; // 1237
	int nFlexControllers; // 1241
	FlexWeight_t& w; // 1246
} /* size: 0, variables: 3 */

// <0132B1CC> ../public/scenesystem/sceneanimatableobject.h:1252
inline void CSceneAnimatableObject::GetDirectPlaybackInstance()
{
} /* size: 0 */

// <0132B17F> ../public/scenesystem/sceneanimatableobject.h:1260
// variables: 3
inline void CSceneAnimatableObject::DirectPlayback_PlaySequence(const char* pSequenceName)
{
	const CModel* pModel; // 1262
	IDirectPlaybackAnimNodeInstance* pDirectPlaybackNode; // 1266
	HSequence hSequence; // 1270
} /* size: 0, variables: 3 */

// <0132B10B> ../public/scenesystem/sceneanimatableobject.h:1277
// variables: 3
inline void CSceneAnimatableObject::DirectPlayback_PlaySequence(const char* pSequenceName, const Vector& vTargetPos, float flFacingHeading, float flInterpTime)
{
	const CModel* pModel; // 1279
	IDirectPlaybackAnimNodeInstance* pDirectPlaybackNode; // 1283
	HSequence hSequence; // 1287
} /* size: 0, variables: 3 */

// <0132B0E5> ../public/scenesystem/sceneanimatableobject.h:1294
// variable: 1
inline void CSceneAnimatableObject::DirectPlayback_CancelSequence()
{
	IDirectPlaybackAnimNodeInstance* pDirectPlaybackNode; // 1296
} /* size: 0, variables: 1 */

// <0132B0BF> ../public/scenesystem/sceneanimatableobject.h:1303
// variable: 1
inline void CSceneAnimatableObject::DirectPlayback_GetSequenceCycle()
{
	IDirectPlaybackAnimNodeInstance* pDirectPlaybackNode; // 1305
} /* size: 0, variables: 1 */

// <0132B07F> ../public/scenesystem/sceneanimatableobject.h:1312
// variables: 3
inline void CSceneAnimatableObject::DirectPlayback_GetSequence()
{
	const CModel* pModel; // 1314
	IDirectPlaybackAnimNodeInstance* pDirectPlaybackNode; // 1318
	HSequence hSequence; // 1322
} /* size: 0, variables: 3 */

// <0132B04C> ../public/scenesystem/sceneanimatableobject.h:1329
// variable: 1
inline void CSceneAnimatableObject::DirectPlayback_SetSequenceStartTime(float flStartTime)
{
	IDirectPlaybackAnimNodeInstance* pDirectPlaybackNode; // 1331
} /* size: 0, variables: 1 */

// <0132B00C> ../public/scenesystem/sceneanimatableobject.h:1338
// variables: 3
inline void CSceneAnimatableObject::DirectPlayback_GetSequenceDuration()
{
	const CModel* pModel; // 1340
	IDirectPlaybackAnimNodeInstance* pDirectPlaybackNode; // 1344
	HSequence hSequence; // 1348
} /* size: 0, variables: 3 */

// <01329AF2> ../public/scenesystem/sceneanimatableobject.h:1355
// variables: 8
// function calls: 88
void CSceneAnimatableObject::SBox_GetAttachment(CUtlStringToken token, bool worldspace, CTransformUnaligned& tx)
{
	CTransform rootTransform; // 1357
	const CModel* pModel; // 1360
	const char   __FUNCTION__; // 46992
	AttachmentHandle_t iAttachment; // 1367
	int nIndex; // 1374
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1363
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1376
	}
	CSceneObject::GetTransform(); // 1357
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 529
	Quaternion::Quaternion(); // 305
	Vector::Vector(); // 306
	matrix3x4_t::matrix3x4_t(); // 753
	Vector::LargestComponentValue(); // 755
	MatrixPosition(const matrix3x4_t& matrix,
			Vector& position);  // 757
	MatrixQuaternion(const matrix3x4_t& mat,
			Quaternion& q,
			Vector& o,
			float& flScale);  // 308
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 217
	QuaternionAligned::operator=(
			const Quaternion& vOther);  // 309
	{
		fltx4 retVal; // 186
		_mm_set_ps(const float  __Z,
				const float  __Y,
				const float  __X,
				const float  __W);  // 187
	}
	Set4Floats<>(float p0,
			float p1,
			float p2,
			float p3);  // 111
	VectorAligned::operator=(
			fltx4 src);  // 111
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 310
	CTransform::InitFromMatrix(
			const matrix3x4_t& xform);  // 530
	matrix3x4_t::ToCTransform(); // 1357
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 40
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 168
	Vector::operator=(
			const Vector& vOther);  // 168
	QuaternionAligned::w(); // 41
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	QuaternionAligned::x(); // 41
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 169
	VectorAligned::operator fltx4(); // 98
	_mm_cvtss_f32(__m128 __A); // 1553
	GetWSIMD<>(fltx4 a); // 98
	CTransform::GetScale(); // 170
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 67
	Vector::Vector(
		vec_t xyz);  // 170
	Vector::operator=(
			const Vector& vOther);  // 170
	CTransformUnaligned::operator=(
			const CTransform& i);  // 1358
	CSceneObject::GetModel(); // 1360
	AttachmentHandle_t::operator==(
			const AttachmentHandle_t& other);  // 1369
	CUtlMemory<matrix3x4a_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::operator[](
			int i);  // 1384
	matrix3x4_t::matrix3x4_t(); // 753
	Vector::LargestComponentValue(); // 755
	MatrixPosition(const matrix3x4_t& matrix,
			Vector& position);  // 757
	MatrixQuaternion(const matrix3x4_t& mat,
			Quaternion& q,
			Vector& o,
			float& flScale);  // 308
	Quaternion::Quaternion(); // 305
	Vector::Vector(); // 306
	QuaternionAligned::operator=(
			const Quaternion& vOther);  // 309
	CTransform::InitFromMatrix(
			const matrix3x4_t& xform);  // 530
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 529
	matrix3x4_t::ToCTransform(); // 1384
	Vector::operator=(
			const Vector& vOther);  // 168
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 168
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 169
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 67
	Vector::Vector(
		vec_t xyz);  // 170
	CTransformUnaligned::operator=(
			const CTransform& i);  // 1384
	CTransformUnaligned::UniformScale(); // 534
	VectorAligned::VectorAligned(); // 33
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 30
	QuaternionAligned::QuaternionAligned(
				const Quaternion& rhs);  // 33
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 33
	CTransform::CTransform(
			const Vector& v,
			const Quaternion& q,
			float flScale);  // 534
	CTransform::CTransform(
			const CTransformUnaligned& tx);  // 1388
	QuaternionAligned::operator fltx4(); // 471
	VectorAligned::operator fltx4(); // 471
	CTransform::operator*(
			const CTransform& rhs);  // 1388
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 168
	Vector::operator=(
			const Vector& vOther);  // 168
	QuaternionAligned::w(); // 41
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 169
	Vector::operator=(
			const Vector& vOther);  // 170
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 67
	Vector::Vector(
		vec_t xyz);  // 170
	CTransformUnaligned::operator=(
			const CTransform& i);  // 1388
} /* size: 843, variables: 5, inline expansions: 87 (1455 bytes) */

// <01329AB2> ../public/scenesystem/sceneanimatableobject.h:1394
// variables: 2
inline void CSceneAnimatableObject::SetSequence(const char* pSequenceName)
{
	const CModel* pModel; // 1399
	HSequence hSequence; // 1404
} /* size: 0, variables: 2 */

// <01329A7F> ../public/scenesystem/sceneanimatableobject.h:1408
// variables: 2
inline void CSceneAnimatableObject::GetSequence()
{
	const CModel* pModel; // 1413
	HSequence hSequence; // 1417
} /* size: 0, variables: 2 */

// <01329A4C> ../public/scenesystem/sceneanimatableobject.h:1424
// variables: 2
inline void CSceneAnimatableObject::GetSequenceDuration()
{
	const CModel* pModel; // 1429
	HSequence hSequence; // 1433
} /* size: 0, variables: 2 */

// <01329A19> ../public/scenesystem/sceneanimatableobject.h:1440
// variables: 2
inline void CSceneAnimatableObject::GetSequenceCycle()
{
	const CModel* pModel; // 1445
	CAnimationDecodeOp& seq; // 1449
} /* size: 0, variables: 2 */

// <013299D9> ../public/scenesystem/sceneanimatableobject.h:1456
// variables: 2
inline void CSceneAnimatableObject::SetSequenceCycle(float flCycle)
{
	const CModel* pModel; // 1461
	CAnimationDecodeOp& seq; // 1465
} /* size: 0, variables: 2 */

// <013299C0> ../public/scenesystem/sceneanimatableobject.h:1472
inline void CSceneAnimatableObject::GetPlaybackRate()
{
} /* size: 0 */

// <0132999A> ../public/scenesystem/sceneanimatableobject.h:1477
inline void CSceneAnimatableObject::SetPlaybackRate(float flPlaybackRate)
{
} /* size: 0 */

// <01329974> ../public/scenesystem/sceneanimatableobject.h:1482
inline void CSceneAnimatableObject::SetSequenceLooping(bool bLooping)
{
} /* size: 0 */

// <0132994E> ../public/scenesystem/sceneanimatableobject.h:1490
inline void CSceneAnimatableObject::SetSequenceBlending(bool bBlending)
{
} /* size: 0 */

// <01329935> ../public/scenesystem/sceneanimatableobject.h:1498
inline void CSceneAnimatableObject::IsSequenceFinished()
{
} /* size: 0 */

// <0132990F> ../public/scenesystem/sceneanimatableobject.h:1506
inline void CSceneAnimatableObject::SetShouldUseAnimGraph(bool bEnabled)
{
} /* size: 0 */

// <013298F6> ../public/scenesystem/sceneanimatableobject.h:1523
inline void CSceneAnimatableObject::GetShouldUseAnimGraph()
{
} /* size: 0 */

