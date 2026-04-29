
//
// animgraph/footsteptriggerupdatenode.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 5
//	class: 1
//	structs: 2
//

// <017EDD93> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footsteptriggerupdatenode.h:24
void LastFootMotionStatus::LastFootMotionStatus()
{
} /* size: 0 */

// <017EDD77> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footsteptriggerupdatenode.h:24
inline void LastFootMotionStatus::LastFootMotionStatus()
{
} /* size: 0 */

// <017DF389> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footsteptriggerupdatenode.h:24
// member function: 1
// member variables: 2
// struct size: 8
struct LastFootMotionStatus {
	float m_flProgression; /* 0 4 */
	bool m_bOnGround; /* 4 1 */
	void LastFootMotionStatus(LastFootMotionStatus* );
};

// <017EDEB6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footsteptriggerupdatenode.h:34
void FootStepTrigger::FootStepTrigger()
{
} /* size: 0 */

// <017EDE9A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footsteptriggerupdatenode.h:34
inline void FootStepTrigger::FootStepTrigger()
{
} /* size: 0 */

// <010EC67F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footsteptriggerupdatenode.h:34
// member variables: 3
// struct size: 16
struct FootStepTrigger {
	CRelativeArray<int> m_tags; /* 0 8 */
	int m_nFootIndex; /* 8 4 */
	StepPhase m_triggerPhase; /* 12 4 */
};

// <017E3099> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footsteptriggerupdatenode.h:49
// member functions: 12
// member variables: 4
// vtable entries: 2
// class size: 32
class CFootStepTriggerUpdateNode : public CUnaryUpdateNode {
public:
	/* class CUnaryUpdateNode <ancestor>; */ /* 0 0 */
	void CFootStepTriggerUpdateNode(CFootStepTriggerUpdateNode* , CFootStepTriggerUpdateNode& );
	void CFootStepTriggerUpdateNode(CFootStepTriggerUpdateNode* , const CFootStepTriggerUpdateNode& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footsteptriggerupdatenode.cpp:18 */
	void CFootStepTriggerUpdateNode(CFootStepTriggerUpdateNode* , CAnimGraphInitContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footsteptriggerupdatenode.cpp:34 */
	virtual void PostUpdate(const CFootStepTriggerUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footsteptriggerupdatenode.cpp:118 */
	virtual PoseHandle GetPoseHandle(const CFootStepTriggerUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footsteptriggerupdatenode.cpp:133 */
	bool IsFootOnGround(const CFootStepTriggerUpdateNode* , const CFootMotionStatus& );
	CRelativeArray<FootStepTrigger> m_triggers; /* 16 8 */
	CPackedHandle<CRelativeArray<LastFootMotionStatus> > m_hInstData; /* 24 4 */
	float m_flTolerance; /* 28 4 */
	void CFootStepTriggerUpdateNode(class CFootStepTriggerUpdateNode *, class CFootStepTriggerUpdateNode &); /* linkage=_ZN26CFootStepTriggerUpdateNodeC4EOS_ */
	void CFootStepTriggerUpdateNode(class CFootStepTriggerUpdateNode *, const class CFootStepTriggerUpdateNode  &); /* linkage=_ZN26CFootStepTriggerUpdateNodeC4ERKS_ */
	void CFootStepTriggerUpdateNode(class CFootStepTriggerUpdateNode *, class CAnimGraphInitContext &, int); /* linkage=_ZN26CFootStepTriggerUpdateNodeC4ER21CAnimGraphInitContexti */
	/* <186951f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footsteptriggerupdatenode.cpp:34 */
	virtual void PostUpdate(const class CFootStepTriggerUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK26CFootStepTriggerUpdateNode10PostUpdateER23CAnimGraphUpdateContext */
	virtual PoseHandle GetPoseHandle(const class CFootStepTriggerUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK26CFootStepTriggerUpdateNode13GetPoseHandleERK23CAnimGraphUpdateContext */
	/* <18772be> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footsteptriggerupdatenode.cpp:133 */
	bool IsFootOnGround(const class CFootStepTriggerUpdateNode  *, const class CFootMotionStatus  &); /* linkage=_ZNK26CFootStepTriggerUpdateNode14IsFootOnGroundERK17CFootMotionStatus */
};

// <01126075> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footsteptriggerupdatenode.h:53
void CFootStepTriggerUpdateNode::CFootStepTriggerUpdateNode(CAnimGraphInitContext& initContext, int nTriggerCount)
{
} /* size: 0 */

