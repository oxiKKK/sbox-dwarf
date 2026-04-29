
//
// animgraph/choreoupdatenode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//	classes: 3
//

// <017068A0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:22
// member functions: 76
// member variables: 11
// static member variable: 1
// class size: 44
class CAnimationLayer {
	static struct datamap_t m_DataMap; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:25 */
	datamap_t* GetBaseMap(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:27 */
	void CAnimationLayer(CAnimationLayer* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:29 */
	void Init(CAnimationLayer* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:31 */
	bool IsActive(const CAnimationLayer* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:32 */
	bool IsAutokill(const CAnimationLayer* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:33 */
	bool IsKillMe(const CAnimationLayer* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:34 */
	void KillMe(CAnimationLayer* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:35 */
	void Dying(CAnimationLayer* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:36 */
	bool IsDying(const CAnimationLayer* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:37 */
	void Dead(CAnimationLayer* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:39 */
	float GetKillDelay(const CAnimationLayer* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:40 */
	void SetKillDelay(CAnimationLayer* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:42 */
	float GetKillRate(const CAnimationLayer* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:43 */
	void SetKillRate(CAnimationLayer* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:45 */
	void MarkActive(CAnimationLayer* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:47 */
	int GetFlags(const CAnimationLayer* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:48 */
	void SetFlags(CAnimationLayer* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:49 */
	void ClearFlags(CAnimationLayer* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:50 */
	void ClearFlags(CAnimationLayer* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:52 */
	float GetCycle(const CAnimationLayer* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:53 */
	void SetCycle(CAnimationLayer* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:55 */
	float GetPrevCycle(const CAnimationLayer* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:56 */
	void SetPrevCycle(CAnimationLayer* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:58 */
	float GetWeight(const CAnimationLayer* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:59 */
	void SetWeight(CAnimationLayer* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:61 */
	HSequence GetSequence(const CAnimationLayer* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:62 */
	void SetSequence(CAnimationLayer* , HSequence, bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:64 */
	bool IsSequenceFinished(const CAnimationLayer* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:65 */
	void SetSequenceFinished(CAnimationLayer* , bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:67 */
	bool IsLooping(const CAnimationLayer* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:68 */
	void SetLooping(CAnimationLayer* , bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:70 */
	int GetOrder(const CAnimationLayer* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:71 */
	void SetOrder(CAnimationLayer* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:73 */
	int GetPriority(const CAnimationLayer* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:74 */
	void SetPriority(CAnimationLayer* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:76 */
	void GetOperation(const CAnimationLayer* , CAnimationDecodeOp* , const CModel* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:79 */
	void OnCycleChanged(CAnimationLayer* , CAnimGraphUpdateContext& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:80 */
	void OnSequenceChanged(CAnimationLayer* , CAnimGraphUpdateContext& , int32);
	int32 m_hSequence; /* 0 4 */
	float32 m_flPrevCycle; /* 4 4 */
	float32 m_flCycle; /* 8 4 */
	float m_flWeight; /* 12 4 */
	int m_nOrder; /* 16 4 */
	bool m_bLooping; /* 20 1 */
	int m_nFlags; /* 24 4 */
	bool m_bSequenceFinished; /* 28 1 */
	float m_flKillRate; /* 32 4 */
	float m_flKillDelay; /* 36 4 */
	int m_nPriority; /* 40 4 */
	class datamap_t * GetBaseMap(void); /* linkage=_ZN15CAnimationLayer10GetBaseMapEv */
	void CAnimationLayer(class CAnimationLayer *); /* linkage=_ZN15CAnimationLayerC4Ev */
	/* <186b2a3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:39 */
	void Init(class CAnimationLayer *); /* linkage=_ZN15CAnimationLayer4InitEv */
	/* <186b2cc> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:55 */
	bool IsActive(const class CAnimationLayer  *); /* linkage=_ZNK15CAnimationLayer8IsActiveEv */
	/* <186b2f5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:60 */
	bool IsAutokill(const class CAnimationLayer  *); /* linkage=_ZNK15CAnimationLayer10IsAutokillEv */
	/* <186b31e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:65 */
	bool IsKillMe(const class CAnimationLayer  *); /* linkage=_ZNK15CAnimationLayer8IsKillMeEv */
	/* <186b347> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:70 */
	void KillMe(class CAnimationLayer *); /* linkage=_ZN15CAnimationLayer6KillMeEv */
	/* <186b3ad> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:75 */
	void Dying(class CAnimationLayer *); /* linkage=_ZN15CAnimationLayer5DyingEv */
	/* <186b413> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:80 */
	bool IsDying(const class CAnimationLayer  *); /* linkage=_ZNK15CAnimationLayer7IsDyingEv */
	/* <186b43c> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:85 */
	void Dead(class CAnimationLayer *); /* linkage=_ZN15CAnimationLayer4DeadEv */
	/* <186b4a2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:90 */
	float GetKillDelay(const class CAnimationLayer  *); /* linkage=_ZNK15CAnimationLayer12GetKillDelayEv */
	/* <186b4cb> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:95 */
	void SetKillDelay(class CAnimationLayer *, float); /* linkage=_ZN15CAnimationLayer12SetKillDelayEf */
	/* <186b4fb> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:100 */
	float GetKillRate(const class CAnimationLayer  *); /* linkage=_ZNK15CAnimationLayer11GetKillRateEv */
	/* <186b524> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:105 */
	void SetKillRate(class CAnimationLayer *, float); /* linkage=_ZN15CAnimationLayer11SetKillRateEf */
	/* <186b554> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:110 */
	void MarkActive(class CAnimationLayer *); /* linkage=_ZN15CAnimationLayer10MarkActiveEv */
	int GetFlags(const class CAnimationLayer  *); /* linkage=_ZNK15CAnimationLayer8GetFlagsEv */
	/* <186b57d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:116 */
	void SetFlags(class CAnimationLayer *, int); /* linkage=_ZN15CAnimationLayer8SetFlagsEi */
	/* <186b5ad> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:121 */
	void ClearFlags(class CAnimationLayer *, int); /* linkage=_ZN15CAnimationLayer10ClearFlagsEi */
	/* <186b5e3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:126 */
	void ClearFlags(class CAnimationLayer *); /* linkage=_ZN15CAnimationLayer10ClearFlagsEv */
	/* <186b60c> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:131 */
	float GetCycle(const class CAnimationLayer  *); /* linkage=_ZNK15CAnimationLayer8GetCycleEv */
	/* <186b635> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:136 */
	void SetCycle(class CAnimationLayer *, float); /* linkage=_ZN15CAnimationLayer8SetCycleEf */
	/* <186b671> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:142 */
	float GetPrevCycle(const class CAnimationLayer  *); /* linkage=_ZNK15CAnimationLayer12GetPrevCycleEv */
	/* <186b69a> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:147 */
	void SetPrevCycle(class CAnimationLayer *, float); /* linkage=_ZN15CAnimationLayer12SetPrevCycleEf */
	/* <186b6ca> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:152 */
	float GetWeight(const class CAnimationLayer  *); /* linkage=_ZNK15CAnimationLayer9GetWeightEv */
	/* <186b6f3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:157 */
	void SetWeight(class CAnimationLayer *, float); /* linkage=_ZN15CAnimationLayer9SetWeightEf */
	/* <186b723> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:163 */
	class HSequence GetSequence(const class CAnimationLayer  *); /* linkage=_ZNK15CAnimationLayer11GetSequenceEv */
	/* <186b781> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:168 */
	void SetSequence(class CAnimationLayer *, class HSequence, bool); /* linkage=_ZN15CAnimationLayer11SetSequenceE9HSequenceb */
	/* <186b8ce> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:188 */
	bool IsSequenceFinished(const class CAnimationLayer  *); /* linkage=_ZNK15CAnimationLayer18IsSequenceFinishedEv */
	/* <186b8f7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:193 */
	void SetSequenceFinished(class CAnimationLayer *, bool); /* linkage=_ZN15CAnimationLayer19SetSequenceFinishedEb */
	/* <186b927> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:198 */
	bool IsLooping(const class CAnimationLayer  *); /* linkage=_ZNK15CAnimationLayer9IsLoopingEv */
	/* <186b950> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:203 */
	void SetLooping(class CAnimationLayer *, bool); /* linkage=_ZN15CAnimationLayer10SetLoopingEb */
	/* <186b980> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:208 */
	int GetOrder(const class CAnimationLayer  *); /* linkage=_ZNK15CAnimationLayer8GetOrderEv */
	/* <186b9a9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:213 */
	void SetOrder(class CAnimationLayer *, int); /* linkage=_ZN15CAnimationLayer8SetOrderEi */
	/* <186b9d9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:218 */
	int GetPriority(const class CAnimationLayer  *); /* linkage=_ZNK15CAnimationLayer11GetPriorityEv */
	/* <186ba02> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:223 */
	void SetPriority(class CAnimationLayer *, int); /* linkage=_ZN15CAnimationLayer11SetPriorityEi */
	void GetOperation(const class CAnimationLayer  *, class CAnimationDecodeOp *, const class CModel  *); /* linkage=_ZNK15CAnimationLayer12GetOperationEP18CAnimationDecodeOpPK6CModel */
	void OnCycleChanged(class CAnimationLayer *, class CAnimGraphUpdateContext &, float); /* linkage=_ZN15CAnimationLayer14OnCycleChangedER23CAnimGraphUpdateContextf */
	void OnSequenceChanged(class CAnimationLayer *, class CAnimGraphUpdateContext &, int32); /* linkage=_ZN15CAnimationLayer17OnSequenceChangedER23CAnimGraphUpdateContexti */
};

// <01706234> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:101
// member functions: 48
// member variables: 2
// static member variable: 1
// class size: 268
class CChoreoInstanceData {
	static struct datamap_t m_DataMap; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:104 */
	datamap_t* GetBaseMap(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:106 */
	void CChoreoInstanceData(CChoreoInstanceData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:108 */
	void AnimationFrameAdvance(CChoreoInstanceData* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:110 */
	int AddLayeredSequence(CChoreoInstanceData* , CAnimGraphUpdateContext& , HSequence, int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:112 */
	void RemoveLayer(CChoreoInstanceData* , CAnimGraphUpdateContext& , int, float, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:113 */
	void FastRemoveLayer(CChoreoInstanceData* , CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:115 */
	bool IsValidLayer(const CChoreoInstanceData* , const CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:117 */
	void SetLayerPriority(CChoreoInstanceData* , CAnimGraphUpdateContext& , int, int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:119 */
	float GetLayerWeight(const CChoreoInstanceData* , const CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:120 */
	void SetLayerWeight(CChoreoInstanceData* , CAnimGraphUpdateContext& , int, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:122 */
	bool IsLayerLooping(const CChoreoInstanceData* , const CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:123 */
	void SetLayerLooping(CChoreoInstanceData* , CAnimGraphUpdateContext& , int, bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:125 */
	void SetLayerNoRestore(CChoreoInstanceData* , CAnimGraphUpdateContext& , int, bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:127 */
	float GetLayerCycle(const CChoreoInstanceData* , const CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:128 */
	void SetLayerCycle(CChoreoInstanceData* , CAnimGraphUpdateContext& , int, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:129 */
	void SetLayerCycle(CChoreoInstanceData* , CAnimGraphUpdateContext& , int, float, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:131 */
	int GetNumAnimOverlays(const CChoreoInstanceData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:133 */
	CAnimationLayer* GetAnimOverlay(CChoreoInstanceData* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:134 */
	const CAnimationLayer* GetAnimOverlay(const CChoreoInstanceData* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:136 */
	PoseHandle GetPoseHandle(const CChoreoInstanceData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:137 */
	void SetPoseHandle(CChoreoInstanceData* , PoseHandle);
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:140 */
	int AllocateLayer(CChoreoInstanceData* , CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:141 */
	void VerifyOrder(CChoreoInstanceData* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:142 */
	float SequenceDuration(const CChoreoInstanceData* , const CModel* , HSequence);
	CAnimationLayer m_AnimOverlay[6]; /* 0 264 */
	PoseHandle m_hPose; /* 264 1 */
	class datamap_t * GetBaseMap(void); /* linkage=_ZN19CChoreoInstanceData10GetBaseMapEv */
	void CChoreoInstanceData(class CChoreoInstanceData *); /* linkage=_ZN19CChoreoInstanceDataC4Ev */
	void AnimationFrameAdvance(class CChoreoInstanceData *, class CAnimGraphUpdateContext &); /* linkage=_ZN19CChoreoInstanceData21AnimationFrameAdvanceER23CAnimGraphUpdateContext */
	int AddLayeredSequence(class CChoreoInstanceData *, class CAnimGraphUpdateContext &, class HSequence, int); /* linkage=_ZN19CChoreoInstanceData18AddLayeredSequenceER23CAnimGraphUpdateContext9HSequencei */
	/* <186ba32> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:381 */
	void RemoveLayer(class CChoreoInstanceData *, class CAnimGraphUpdateContext &, int, float, float); /* linkage=_ZN19CChoreoInstanceData11RemoveLayerER23CAnimGraphUpdateContextiff */
	/* <186bd18> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:402 */
	void FastRemoveLayer(class CChoreoInstanceData *, class CAnimGraphUpdateContext &, int); /* linkage=_ZN19CChoreoInstanceData15FastRemoveLayerER23CAnimGraphUpdateContexti */
	/* <186be3d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:426 */
	bool IsValidLayer(const class CChoreoInstanceData  *, const class CAnimGraphUpdateContext  &, int); /* linkage=_ZNK19CChoreoInstanceData12IsValidLayerERK23CAnimGraphUpdateContexti */
	/* <186beed> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:432 */
	void SetLayerPriority(class CChoreoInstanceData *, class CAnimGraphUpdateContext &, int, int); /* linkage=_ZN19CChoreoInstanceData16SetLayerPriorityER23CAnimGraphUpdateContextii */
	/* <186c337> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:495 */
	float GetLayerWeight(const class CChoreoInstanceData  *, const class CAnimGraphUpdateContext  &, int); /* linkage=_ZNK19CChoreoInstanceData14GetLayerWeightERK23CAnimGraphUpdateContexti */
	/* <186c4b0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:505 */
	void SetLayerWeight(class CChoreoInstanceData *, class CAnimGraphUpdateContext &, int, float); /* linkage=_ZN19CChoreoInstanceData14SetLayerWeightER23CAnimGraphUpdateContextif */
	/* <186c6d3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:518 */
	bool IsLayerLooping(const class CChoreoInstanceData  *, const class CAnimGraphUpdateContext  &, int); /* linkage=_ZNK19CChoreoInstanceData14IsLayerLoopingERK23CAnimGraphUpdateContexti */
	/* <186c84c> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:528 */
	void SetLayerLooping(class CChoreoInstanceData *, class CAnimGraphUpdateContext &, int, bool); /* linkage=_ZN19CChoreoInstanceData15SetLayerLoopingER23CAnimGraphUpdateContextib */
	/* <186c9d3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:538 */
	void SetLayerNoRestore(class CChoreoInstanceData *, class CAnimGraphUpdateContext &, int, bool); /* linkage=_ZN19CChoreoInstanceData17SetLayerNoRestoreER23CAnimGraphUpdateContextib */
	/* <186cba4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:555 */
	float GetLayerCycle(const class CChoreoInstanceData  *, const class CAnimGraphUpdateContext  &, int); /* linkage=_ZNK19CChoreoInstanceData13GetLayerCycleERK23CAnimGraphUpdateContexti */
	/* <186cd1d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:565 */
	void SetLayerCycle(class CChoreoInstanceData *, class CAnimGraphUpdateContext &, int, float); /* linkage=_ZN19CChoreoInstanceData13SetLayerCycleER23CAnimGraphUpdateContextif */
	/* <186cf8a> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:581 */
	void SetLayerCycle(class CChoreoInstanceData *, class CAnimGraphUpdateContext &, int, float, float); /* linkage=_ZN19CChoreoInstanceData13SetLayerCycleER23CAnimGraphUpdateContextiff */
	/* <186d2df> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:665 */
	int GetNumAnimOverlays(const class CChoreoInstanceData  *); /* linkage=_ZNK19CChoreoInstanceData18GetNumAnimOverlaysEv */
	/* <186d308> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:671 */
	class CAnimationLayer * GetAnimOverlay(class CChoreoInstanceData *, int); /* linkage=_ZN19CChoreoInstanceData14GetAnimOverlayEi */
	const class CAnimationLayer  * GetAnimOverlay(const class CChoreoInstanceData  *, int); /* linkage=_ZNK19CChoreoInstanceData14GetAnimOverlayEi */
	/* <186d286> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:599 */
	PoseHandle GetPoseHandle(const class CChoreoInstanceData  *); /* linkage=_ZNK19CChoreoInstanceData13GetPoseHandleEv */
	/* <186d2af> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:605 */
	void SetPoseHandle(class CChoreoInstanceData *, PoseHandle); /* linkage=_ZN19CChoreoInstanceData13SetPoseHandleEh */
	int AllocateLayer(class CChoreoInstanceData *, class CAnimGraphUpdateContext &, int); /* linkage=_ZN19CChoreoInstanceData13AllocateLayerER23CAnimGraphUpdateContexti */
	void VerifyOrder(class CChoreoInstanceData *); /* linkage=_ZN19CChoreoInstanceData11VerifyOrderEv */
	float SequenceDuration(const class CChoreoInstanceData  *, const class CModel  *, class HSequence); /* linkage=_ZNK19CChoreoInstanceData16SequenceDurationEPK6CModel9HSequence */
};

// <017168DE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:106
void CChoreoInstanceData::CChoreoInstanceData()
{
} /* size: 0 */

// <017E4C45> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:150
// member functions: 42
// member variables: 2
// vtable entries: 5
// class size: 24
class CChoreoUpdateNode : public CUnaryUpdateNode {
public:
	/* class CUnaryUpdateNode <ancestor>; */ /* 0 0 */
	void CChoreoUpdateNode(CChoreoUpdateNode* , CChoreoUpdateNode& );
	void CChoreoUpdateNode(CChoreoUpdateNode* , const CChoreoUpdateNode& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:739 */
	void CChoreoUpdateNode(CChoreoUpdateNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:746 */
	virtual void Update(const CChoreoUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:752 */
	virtual void CreatePoseOp(const CChoreoUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:792 */
	virtual PoseHandle GetPoseHandle(const CChoreoUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:799 */
	virtual void OnSave(const CChoreoUpdateNode* , const CAnimGraphUpdateContext& , ISave* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:806 */
	virtual void OnRestore(const CChoreoUpdateNode* , CAnimGraphUpdateContext& , IRestore* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:813 */
	int AddLayeredSequence(const CChoreoUpdateNode* , CAnimGraphUpdateContext& , HSequence, int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:818 */
	void RemoveLayer(const CChoreoUpdateNode* , CAnimGraphUpdateContext& , int, float, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:823 */
	void FastRemoveLayer(const CChoreoUpdateNode* , CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:828 */
	bool IsValidLayer(const CChoreoUpdateNode* , const CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:833 */
	void SetLayerPriority(const CChoreoUpdateNode* , CAnimGraphUpdateContext& , int, int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:838 */
	float GetLayerWeight(const CChoreoUpdateNode* , const CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:843 */
	void SetLayerWeight(const CChoreoUpdateNode* , CAnimGraphUpdateContext& , int, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:848 */
	bool IsLayerLooping(const CChoreoUpdateNode* , const CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:853 */
	void SetLayerLooping(const CChoreoUpdateNode* , CAnimGraphUpdateContext& , int, bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:858 */
	void SetLayerNoRestore(const CChoreoUpdateNode* , CAnimGraphUpdateContext& , int, bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:863 */
	float GetLayerCycle(const CChoreoUpdateNode* , const CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:868 */
	void SetLayerCycle(const CChoreoUpdateNode* , CAnimGraphUpdateContext& , int, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:873 */
	void SetLayerCycle(const CChoreoUpdateNode* , CAnimGraphUpdateContext& , int, float, float);
	CPackedHandle<CChoreoInstanceData> m_hInstData; /* 16 4 */
	void CChoreoUpdateNode(class CChoreoUpdateNode *, class CChoreoUpdateNode &); /* linkage=_ZN17CChoreoUpdateNodeC4EOS_ */
	void CChoreoUpdateNode(class CChoreoUpdateNode *, const class CChoreoUpdateNode  &); /* linkage=_ZN17CChoreoUpdateNodeC4ERKS_ */
	void CChoreoUpdateNode(class CChoreoUpdateNode *, class CAnimGraphInitContext &); /* linkage=_ZN17CChoreoUpdateNodeC4ER21CAnimGraphInitContext */
	virtual void Update(const class CChoreoUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK17CChoreoUpdateNode6UpdateER23CAnimGraphUpdateContext */
	virtual void CreatePoseOp(const class CChoreoUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK17CChoreoUpdateNode12CreatePoseOpER23CAnimGraphUpdateContext */
	virtual PoseHandle GetPoseHandle(const class CChoreoUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK17CChoreoUpdateNode13GetPoseHandleERK23CAnimGraphUpdateContext */
	virtual void OnSave(const class CChoreoUpdateNode  *, const class CAnimGraphUpdateContext  &, class ISave *); /* linkage=_ZNK17CChoreoUpdateNode6OnSaveERK23CAnimGraphUpdateContextP5ISave */
	virtual void OnRestore(const class CChoreoUpdateNode  *, class CAnimGraphUpdateContext &, class IRestore *); /* linkage=_ZNK17CChoreoUpdateNode9OnRestoreER23CAnimGraphUpdateContextP8IRestore */
	int AddLayeredSequence(const class CChoreoUpdateNode  *, class CAnimGraphUpdateContext &, class HSequence, int); /* linkage=_ZNK17CChoreoUpdateNode18AddLayeredSequenceER23CAnimGraphUpdateContext9HSequencei */
	void RemoveLayer(const class CChoreoUpdateNode  *, class CAnimGraphUpdateContext &, int, float, float); /* linkage=_ZNK17CChoreoUpdateNode11RemoveLayerER23CAnimGraphUpdateContextiff */
	void FastRemoveLayer(const class CChoreoUpdateNode  *, class CAnimGraphUpdateContext &, int); /* linkage=_ZNK17CChoreoUpdateNode15FastRemoveLayerER23CAnimGraphUpdateContexti */
	bool IsValidLayer(const class CChoreoUpdateNode  *, const class CAnimGraphUpdateContext  &, int); /* linkage=_ZNK17CChoreoUpdateNode12IsValidLayerERK23CAnimGraphUpdateContexti */
	void SetLayerPriority(const class CChoreoUpdateNode  *, class CAnimGraphUpdateContext &, int, int); /* linkage=_ZNK17CChoreoUpdateNode16SetLayerPriorityER23CAnimGraphUpdateContextii */
	float GetLayerWeight(const class CChoreoUpdateNode  *, const class CAnimGraphUpdateContext  &, int); /* linkage=_ZNK17CChoreoUpdateNode14GetLayerWeightERK23CAnimGraphUpdateContexti */
	void SetLayerWeight(const class CChoreoUpdateNode  *, class CAnimGraphUpdateContext &, int, float); /* linkage=_ZNK17CChoreoUpdateNode14SetLayerWeightER23CAnimGraphUpdateContextif */
	bool IsLayerLooping(const class CChoreoUpdateNode  *, const class CAnimGraphUpdateContext  &, int); /* linkage=_ZNK17CChoreoUpdateNode14IsLayerLoopingERK23CAnimGraphUpdateContexti */
	void SetLayerLooping(const class CChoreoUpdateNode  *, class CAnimGraphUpdateContext &, int, bool); /* linkage=_ZNK17CChoreoUpdateNode15SetLayerLoopingER23CAnimGraphUpdateContextib */
	void SetLayerNoRestore(const class CChoreoUpdateNode  *, class CAnimGraphUpdateContext &, int, bool); /* linkage=_ZNK17CChoreoUpdateNode17SetLayerNoRestoreER23CAnimGraphUpdateContextib */
	float GetLayerCycle(const class CChoreoUpdateNode  *, const class CAnimGraphUpdateContext  &, int); /* linkage=_ZNK17CChoreoUpdateNode13GetLayerCycleERK23CAnimGraphUpdateContexti */
	void SetLayerCycle(const class CChoreoUpdateNode  *, class CAnimGraphUpdateContext &, int, float); /* linkage=_ZNK17CChoreoUpdateNode13SetLayerCycleER23CAnimGraphUpdateContextif */
	void SetLayerCycle(const class CChoreoUpdateNode  *, class CAnimGraphUpdateContext &, int, float, float); /* linkage=_ZNK17CChoreoUpdateNode13SetLayerCycleER23CAnimGraphUpdateContextiff */
};

// <01037D78> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.h:154
void CChoreoUpdateNode::CChoreoUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

