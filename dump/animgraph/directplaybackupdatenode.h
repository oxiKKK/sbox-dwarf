
//
// animgraph/directplaybackupdatenode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//	class: 1
//	structs: 2
//

// <017D77ED> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.h:14
// member function: 1
// member variables: 3
// static member variable: 1
// struct size: 12
struct SequenceData {
	static struct datamap_t m_DataMap; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.h:16 */
	datamap_t* GetBaseMap(void);
	HSequence m_hSequence; /* 0 4 */
	float m_flCycle; /* 4 4 */
	float m_flPrevCycle; /* 8 4 */
};

// <017EF533> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.h:24
void CDirectPlaybackInstanceData::CDirectPlaybackInstanceData()
{
} /* size: 0 */

// <017EF517> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.h:24
inline void CDirectPlaybackInstanceData::CDirectPlaybackInstanceData()
{
} /* size: 0 */

// <017D784D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.h:24
// member functions: 2
// member variables: 12
// static member variable: 1
// struct size: 108
struct CDirectPlaybackInstanceData {
	static struct datamap_t m_DataMap; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.h:26 */
	datamap_t* GetBaseMap(void);
	Vector m_vTargetPosition; /* 0 12 */
	float m_flTargetFacing; /* 12 4 */
	float m_flInterpEndTime; /* 16 4 */
	float m_weights[4]; /* 20 16 */
	SequenceData m_sequences[4]; /* 36 48 */
	uint32 m_currentSequenceIndex; /* 84 4 */
	int32 m_currentSequence; /* 88 4 */
	float m_flFadeInTime; /* 92 4 */
	float m_flFadeOutTime; /* 96 4 */
	PoseHandle m_hPose; /* 100 1 */
	bool m_bResetPending; /* 101 1 */
	float m_SequenceCycleZeroTime; /* 104 4 */
	void CDirectPlaybackInstanceData(CDirectPlaybackInstanceData* );
};

// <017E41C9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.h:46
// member functions: 44
// member variables: 5
// vtable entries: 10
// class size: 24
class CDirectPlaybackUpdateNode : public CUnaryUpdateNode {
public:
	/* class CUnaryUpdateNode <ancestor>; */ /* 0 0 */
	void CDirectPlaybackUpdateNode(CDirectPlaybackUpdateNode* , CDirectPlaybackUpdateNode& );
	void CDirectPlaybackUpdateNode(CDirectPlaybackUpdateNode* , const CDirectPlaybackUpdateNode& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:43 */
	void CDirectPlaybackUpdateNode(CDirectPlaybackUpdateNode* , CAnimGraphInitContext& , bool, bool, bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:66 */
	virtual void Update(const CDirectPlaybackUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:174 */
	virtual bool IsChildActive(const CDirectPlaybackUpdateNode* , CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:189 */
	virtual bool IsChildWaning(const CDirectPlaybackUpdateNode* , CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:202 */
	virtual void EnqueueChildren(const CDirectPlaybackUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:215 */
	virtual void CreatePoseOp(const CDirectPlaybackUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:290 */
	virtual PoseHandle GetPoseHandle(const CDirectPlaybackUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:302 */
	virtual void OnSave(const CDirectPlaybackUpdateNode* , const CAnimGraphUpdateContext& , ISave* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:309 */
	virtual void OnRestore(const CDirectPlaybackUpdateNode* , CAnimGraphUpdateContext& , IRestore* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:316 */
	virtual CRootMotion CalculateRootMotion(const CDirectPlaybackUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:379 */
	virtual void CalculateFootMotion(const CDirectPlaybackUpdateNode* , CAnimGraphUpdateContext& , const CMotionTransform& , CStrideStatus& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:448 */
	void SetChild(CDirectPlaybackUpdateNode* , const CAnimUpdateNodeBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:454 */
	void PlaySequence(const CDirectPlaybackUpdateNode* , CAnimGraphUpdateContext& , HSequence);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:505 */
	void PlaySequence(const CDirectPlaybackUpdateNode* , CAnimGraphUpdateContext& , HSequence, const Vector& , float, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:516 */
	void SetSequenceStartTime(const CDirectPlaybackUpdateNode* , CAnimGraphUpdateContext& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:527 */
	float GetSequenceCycle(const CDirectPlaybackUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:542 */
	HSequence GetCurrentSequence(const CDirectPlaybackUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:557 */
	bool IsSequenceFinished(const CDirectPlaybackUpdateNode* , const CAnimGraphUpdateContext& );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:594 */
	void OnSequenceChanged(const CDirectPlaybackUpdateNode* , CAnimGraphUpdateContext& , int32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:600 */
	void OnSequenceTimeChanged(const CDirectPlaybackUpdateNode* , CAnimGraphUpdateContext& , float);
	CPackedHandle<CDirectPlaybackInstanceData> m_hData; /* 16 4 */
	bool m_bFinishEarly; /* 20 1 */
	bool m_bResetOnFinish; /* 21 1 */
	bool m_bStopSequenceOnFinish; /* 22 1 */
	void CDirectPlaybackUpdateNode(class CDirectPlaybackUpdateNode *, class CDirectPlaybackUpdateNode &); /* linkage=_ZN25CDirectPlaybackUpdateNodeC4EOS_ */
	void CDirectPlaybackUpdateNode(class CDirectPlaybackUpdateNode *, const class CDirectPlaybackUpdateNode  &); /* linkage=_ZN25CDirectPlaybackUpdateNodeC4ERKS_ */
	void CDirectPlaybackUpdateNode(class CDirectPlaybackUpdateNode *, class CAnimGraphInitContext &, bool, bool, bool); /* linkage=_ZN25CDirectPlaybackUpdateNodeC4ER21CAnimGraphInitContextbbb */
	virtual void Update(const class CDirectPlaybackUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK25CDirectPlaybackUpdateNode6UpdateER23CAnimGraphUpdateContext */
	/* <1867dda> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:174 */
	virtual bool IsChildActive(const class CDirectPlaybackUpdateNode  *, class CAnimGraphUpdateContext &, int); /* linkage=_ZNK25CDirectPlaybackUpdateNode13IsChildActiveER23CAnimGraphUpdateContexti */
	/* <1867bd7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.cpp:189 */
	virtual bool IsChildWaning(const class CDirectPlaybackUpdateNode  *, class CAnimGraphUpdateContext &, int); /* linkage=_ZNK25CDirectPlaybackUpdateNode13IsChildWaningER23CAnimGraphUpdateContexti */
	virtual void EnqueueChildren(const class CDirectPlaybackUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK25CDirectPlaybackUpdateNode15EnqueueChildrenER23CAnimGraphUpdateContext */
	virtual void CreatePoseOp(const class CDirectPlaybackUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK25CDirectPlaybackUpdateNode12CreatePoseOpER23CAnimGraphUpdateContext */
	virtual PoseHandle GetPoseHandle(const class CDirectPlaybackUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK25CDirectPlaybackUpdateNode13GetPoseHandleERK23CAnimGraphUpdateContext */
	virtual void OnSave(const class CDirectPlaybackUpdateNode  *, const class CAnimGraphUpdateContext  &, class ISave *); /* linkage=_ZNK25CDirectPlaybackUpdateNode6OnSaveERK23CAnimGraphUpdateContextP5ISave */
	virtual void OnRestore(const class CDirectPlaybackUpdateNode  *, class CAnimGraphUpdateContext &, class IRestore *); /* linkage=_ZNK25CDirectPlaybackUpdateNode9OnRestoreER23CAnimGraphUpdateContextP8IRestore */
	virtual class CRootMotion CalculateRootMotion(const class CDirectPlaybackUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK25CDirectPlaybackUpdateNode19CalculateRootMotionER23CAnimGraphUpdateContext */
	virtual void CalculateFootMotion(const class CDirectPlaybackUpdateNode  *, class CAnimGraphUpdateContext &, const class CMotionTransform  &, class CStrideStatus &); /* linkage=_ZNK25CDirectPlaybackUpdateNode19CalculateFootMotionER23CAnimGraphUpdateContextRK16CMotionTransformR13CStrideStatus */
	void SetChild(class CDirectPlaybackUpdateNode *, const class CAnimUpdateNodeBase  *); /* linkage=_ZN25CDirectPlaybackUpdateNode8SetChildEPK19CAnimUpdateNodeBase */
	void PlaySequence(const class CDirectPlaybackUpdateNode  *, class CAnimGraphUpdateContext &, class HSequence); /* linkage=_ZNK25CDirectPlaybackUpdateNode12PlaySequenceER23CAnimGraphUpdateContext9HSequence */
	void PlaySequence(const class CDirectPlaybackUpdateNode  *, class CAnimGraphUpdateContext &, class HSequence, const class Vector  &, float, float); /* linkage=_ZNK25CDirectPlaybackUpdateNode12PlaySequenceER23CAnimGraphUpdateContext9HSequenceRK6Vectorff */
	void SetSequenceStartTime(const class CDirectPlaybackUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK25CDirectPlaybackUpdateNode20SetSequenceStartTimeER23CAnimGraphUpdateContextf */
	float GetSequenceCycle(const class CDirectPlaybackUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK25CDirectPlaybackUpdateNode16GetSequenceCycleERK23CAnimGraphUpdateContext */
	class HSequence GetCurrentSequence(const class CDirectPlaybackUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK25CDirectPlaybackUpdateNode18GetCurrentSequenceERK23CAnimGraphUpdateContext */
	bool IsSequenceFinished(const class CDirectPlaybackUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK25CDirectPlaybackUpdateNode18IsSequenceFinishedERK23CAnimGraphUpdateContext */
	void OnSequenceChanged(const class CDirectPlaybackUpdateNode  *, class CAnimGraphUpdateContext &, int32); /* linkage=_ZNK25CDirectPlaybackUpdateNode17OnSequenceChangedER23CAnimGraphUpdateContexti */
	void OnSequenceTimeChanged(const class CDirectPlaybackUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK25CDirectPlaybackUpdateNode21OnSequenceTimeChangedER23CAnimGraphUpdateContextf */
};

// <01037C57> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/directplaybackupdatenode.h:50
void CDirectPlaybackUpdateNode::CDirectPlaybackUpdateNode(CAnimGraphInitContext& initContext, bool bFinishEarly, bool bResetOnFinish, bool bStopSequenceOnFinish)
{
} /* size: 0 */

