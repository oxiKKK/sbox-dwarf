
//
// animgraph/cyclecontrolupdatenode.h
//
//	referenced by: libanimationsystem.so
//
//	function: 1
//	class: 1
//

// <017E4A1F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolupdatenode.h:10
// member functions: 22
// member variables: 3
// vtable entries: 7
// class size: 24
class CCycleControlUpdateNode : public CUnaryUpdateNode {
public:
	/* class CUnaryUpdateNode <ancestor>; */ /* 0 0 */
	void CCycleControlUpdateNode(CCycleControlUpdateNode* , CCycleControlUpdateNode& );
	void CCycleControlUpdateNode(CCycleControlUpdateNode* , const CCycleControlUpdateNode& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolupdatenode.cpp:9 */
	void CCycleControlUpdateNode(CCycleControlUpdateNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolupdatenode.cpp:16 */
	virtual void Update(const CCycleControlUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolupdatenode.cpp:26 */
	virtual void EnqueueChildren(const CCycleControlUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolupdatenode.cpp:35 */
	virtual PoseHandle GetPoseHandle(const CCycleControlUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolupdatenode.cpp:48 */
	virtual float GetCycle(const CCycleControlUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolupdatenode.cpp:54 */
	virtual float GetDuration(const CCycleControlUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolupdatenode.cpp:60 */
	virtual bool IsFinished(const CCycleControlUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolupdatenode.cpp:66 */
	virtual float GetTimeTillFinished(const CCycleControlUpdateNode* , CAnimGraphUpdateContext& );
	AnimValueSource m_valueSource; /* 16 4 */
	CAnimParamHandle m_paramIndex; /* 20 2 */
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolupdatenode.cpp:72 */
	float CalcCycle(const CCycleControlUpdateNode* , CAnimGraphUpdateContext& );
	void CCycleControlUpdateNode(class CCycleControlUpdateNode *, class CCycleControlUpdateNode &); /* linkage=_ZN23CCycleControlUpdateNodeC4EOS_ */
	void CCycleControlUpdateNode(class CCycleControlUpdateNode *, const class CCycleControlUpdateNode  &); /* linkage=_ZN23CCycleControlUpdateNodeC4ERKS_ */
	void CCycleControlUpdateNode(class CCycleControlUpdateNode *, class CAnimGraphInitContext &); /* linkage=_ZN23CCycleControlUpdateNodeC4ER21CAnimGraphInitContext */
	/* <186695f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolupdatenode.cpp:16 */
	virtual void Update(const class CCycleControlUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK23CCycleControlUpdateNode6UpdateER23CAnimGraphUpdateContext */
	virtual void EnqueueChildren(const class CCycleControlUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK23CCycleControlUpdateNode15EnqueueChildrenER23CAnimGraphUpdateContext */
	virtual PoseHandle GetPoseHandle(const class CCycleControlUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK23CCycleControlUpdateNode13GetPoseHandleERK23CAnimGraphUpdateContext */
	virtual float GetCycle(const class CCycleControlUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK23CCycleControlUpdateNode8GetCycleER23CAnimGraphUpdateContext */
	virtual float GetDuration(const class CCycleControlUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK23CCycleControlUpdateNode11GetDurationER23CAnimGraphUpdateContext */
	virtual bool IsFinished(const class CCycleControlUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK23CCycleControlUpdateNode10IsFinishedER23CAnimGraphUpdateContext */
	virtual float GetTimeTillFinished(const class CCycleControlUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK23CCycleControlUpdateNode19GetTimeTillFinishedER23CAnimGraphUpdateContext */
	/* <186d33e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolupdatenode.cpp:72 */
	float CalcCycle(const class CCycleControlUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK23CCycleControlUpdateNode9CalcCycleER23CAnimGraphUpdateContext */
};

// <01037D43> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolupdatenode.h:14
void CCycleControlUpdateNode::CCycleControlUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

