
//
// animgraph/sequenceupdatenode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//	class: 1
//	structs: 2
//

// <0191DD35> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.h:15
void CSequenceInstanceData::CSequenceInstanceData()
{
} /* size: 0 */

// <0191DD19> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.h:15
inline void CSequenceInstanceData::CSequenceInstanceData()
{
} /* size: 0 */

// <0111E0E8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.h:15
// member function: 1
// member variables: 7
// static member variable: 1
// struct size: 24
struct CSequenceInstanceData {
	static struct datamap_t m_DataMap; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.h:17 */
	datamap_t* GetBaseMap(void);
	float m_flCycle; /* 0 4 */
	float m_flPrevCycle; /* 4 4 */
	float m_flPlaybackRate; /* 8 4 */
	float m_flCycleZeroTime; /* 12 4 */
	float m_resetCycleValue; /* 16 4 */
	PoseHandle m_hPose; /* 20 1 */
	uint8 m_resetCount; /* 21 1 */
};

// <018D8EDF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.h:15
// member functions: 2
// member variables: 7
// static member variable: 1
// struct size: 24
struct CSequenceInstanceData {
	static struct datamap_t m_DataMap; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.h:17 */
	datamap_t* GetBaseMap(void);
	float m_flCycle; /* 0 4 */
	float m_flPrevCycle; /* 4 4 */
	float m_flPlaybackRate; /* 8 4 */
	float m_flCycleZeroTime; /* 12 4 */
	float m_resetCycleValue; /* 16 4 */
	PoseHandle m_hPose; /* 20 1 */
	uint8 m_resetCount; /* 21 1 */
	void CSequenceInstanceData(CSequenceInstanceData* );
};

// <019119B9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.h:33
// member functions: 42
// member variables: 7
// vtable entries: 14
// class size: 40
class CSequenceUpdateNode : public CLeafUpdateNode {
public:
	/* class CLeafUpdateNode <ancestor>; */ /* 0 0 */
	void CSequenceUpdateNode(CSequenceUpdateNode* , CSequenceUpdateNode& );
	void CSequenceUpdateNode(CSequenceUpdateNode* , const CSequenceUpdateNode& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:25 */
	void CSequenceUpdateNode(CSequenceUpdateNode* , CAnimGraphInitContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:36 */
	virtual void Update(const CSequenceUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:116 */
	virtual void CreatePoseOp(const CSequenceUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:136 */
	virtual PoseHandle GetPoseHandle(const CSequenceUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:143 */
	virtual float GetCycle(const CSequenceUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:163 */
	virtual float GetDuration(const CSequenceUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:176 */
	virtual CMotionTransform GetTotalMovement(const CSequenceUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:190 */
	virtual CMotionTransform GetRemainingMovement(const CSequenceUpdateNode* , CAnimGraphUpdateContext& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:209 */
	virtual void Reset(const CSequenceUpdateNode* , CAnimGraphUpdateContext& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:254 */
	virtual bool IsFinished(const CSequenceUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:272 */
	virtual float GetTimeTillFinished(const CSequenceUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:287 */
	virtual void OnSave(const CSequenceUpdateNode* , const CAnimGraphUpdateContext& , ISave* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:294 */
	virtual void OnRestore(const CSequenceUpdateNode* , CAnimGraphUpdateContext& , IRestore* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:301 */
	virtual void CalculateFootMotion(const CSequenceUpdateNode* , CAnimGraphUpdateContext& , const CMotionTransform& , CStrideStatus& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:348 */
	virtual CRootMotion CalculateRootMotion(const CSequenceUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:372 */
	void SetSequence(CSequenceUpdateNode* , HSequence);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:378 */
	void SetPlaybackSpeed(CSequenceUpdateNode* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:384 */
	void SetDuration(CSequenceUpdateNode* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:390 */
	void SetLoop(CSequenceUpdateNode* , bool);
	CRelativeArray<TagSpan_t> m_tags; /* 12 8 */
	CPackedHandle<CSequenceInstanceData> m_instanceDataHandle; /* 20 4 */
	HSequence m_hSequence; /* 24 4 */
	float m_playbackSpeed; /* 28 4 */
	float m_duration; /* 32 4 */
	bool m_bLoop; /* 36 1 */
	void CSequenceUpdateNode(class CSequenceUpdateNode *, class CSequenceUpdateNode &); /* linkage=_ZN19CSequenceUpdateNodeC4EOS_ */
	void CSequenceUpdateNode(class CSequenceUpdateNode *, const class CSequenceUpdateNode  &); /* linkage=_ZN19CSequenceUpdateNodeC4ERKS_ */
	void CSequenceUpdateNode(class CSequenceUpdateNode *, class CAnimGraphInitContext &, int); /* linkage=_ZN19CSequenceUpdateNodeC4ER21CAnimGraphInitContexti */
	virtual void Update(const class CSequenceUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CSequenceUpdateNode6UpdateER23CAnimGraphUpdateContext */
	virtual void CreatePoseOp(const class CSequenceUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CSequenceUpdateNode12CreatePoseOpER23CAnimGraphUpdateContext */
	virtual PoseHandle GetPoseHandle(const class CSequenceUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK19CSequenceUpdateNode13GetPoseHandleERK23CAnimGraphUpdateContext */
	/* <1974faf> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:143 */
	virtual float GetCycle(const class CSequenceUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CSequenceUpdateNode8GetCycleER23CAnimGraphUpdateContext */
	/* <197393f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:163 */
	virtual float GetDuration(const class CSequenceUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CSequenceUpdateNode11GetDurationER23CAnimGraphUpdateContext */
	virtual class CMotionTransform GetTotalMovement(const class CSequenceUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CSequenceUpdateNode16GetTotalMovementER23CAnimGraphUpdateContext */
	virtual class CMotionTransform GetRemainingMovement(const class CSequenceUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK19CSequenceUpdateNode20GetRemainingMovementER23CAnimGraphUpdateContextf */
	virtual void Reset(const class CSequenceUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK19CSequenceUpdateNode5ResetER23CAnimGraphUpdateContextf */
	/* <19752cb> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:254 */
	virtual bool IsFinished(const class CSequenceUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CSequenceUpdateNode10IsFinishedER23CAnimGraphUpdateContext */
	/* <1975585> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.cpp:272 */
	virtual float GetTimeTillFinished(const class CSequenceUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CSequenceUpdateNode19GetTimeTillFinishedER23CAnimGraphUpdateContext */
	virtual void OnSave(const class CSequenceUpdateNode  *, const class CAnimGraphUpdateContext  &, class ISave *); /* linkage=_ZNK19CSequenceUpdateNode6OnSaveERK23CAnimGraphUpdateContextP5ISave */
	virtual void OnRestore(const class CSequenceUpdateNode  *, class CAnimGraphUpdateContext &, class IRestore *); /* linkage=_ZNK19CSequenceUpdateNode9OnRestoreER23CAnimGraphUpdateContextP8IRestore */
	virtual void CalculateFootMotion(const class CSequenceUpdateNode  *, class CAnimGraphUpdateContext &, const class CMotionTransform  &, class CStrideStatus &); /* linkage=_ZNK19CSequenceUpdateNode19CalculateFootMotionER23CAnimGraphUpdateContextRK16CMotionTransformR13CStrideStatus */
	virtual class CRootMotion CalculateRootMotion(const class CSequenceUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CSequenceUpdateNode19CalculateRootMotionER23CAnimGraphUpdateContext */
	void SetSequence(class CSequenceUpdateNode *, class HSequence); /* linkage=_ZN19CSequenceUpdateNode11SetSequenceE9HSequence */
	void SetPlaybackSpeed(class CSequenceUpdateNode *, float); /* linkage=_ZN19CSequenceUpdateNode16SetPlaybackSpeedEf */
	void SetDuration(class CSequenceUpdateNode *, float); /* linkage=_ZN19CSequenceUpdateNode11SetDurationEf */
	void SetLoop(class CSequenceUpdateNode *, bool); /* linkage=_ZN19CSequenceUpdateNode7SetLoopEb */
};

// <01125654> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceupdatenode.h:37
void CSequenceUpdateNode::CSequenceUpdateNode(CAnimGraphInitContext& initContext, int tagSpanCount)
{
} /* size: 0 */

