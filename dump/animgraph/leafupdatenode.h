
//
// animgraph/leafupdatenode.h
//
//	referenced by: libanimationsystem.so
//
//	function: 1
//	class: 1
//

// <017E25F4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leafupdatenode.h:12
// member functions: 30
// member variable: 1
// vtable entries: 11
// class size: 16
class CLeafUpdateNode : public CAnimUpdateNodeBase {
public:
	/* class CAnimUpdateNodeBase <ancestor>; */ /* 0 16 */
	void ~CLeafUpdateNode(CLeafUpdateNode* );
	void CLeafUpdateNode(CLeafUpdateNode* , CLeafUpdateNode& );
	void CLeafUpdateNode(CLeafUpdateNode* , const CLeafUpdateNode& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leafupdatenode.cpp:8 */
	void CLeafUpdateNode(CLeafUpdateNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leafupdatenode.cpp:15 */
	virtual int GetChildCount(const CLeafUpdateNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leafupdatenode.cpp:21 */
	virtual const CAnimUpdateNodeBase* GetChild(const CLeafUpdateNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leafupdatenode.cpp:27 */
	virtual bool IsChildActive(const CLeafUpdateNode* , CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leafupdatenode.cpp:33 */
	virtual bool IsChildWaning(const CLeafUpdateNode* , CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leafupdatenode.cpp:39 */
	virtual void EnqueueChildren(const CLeafUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leafupdatenode.cpp:45 */
	virtual float GetCycle(const CLeafUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leafupdatenode.cpp:51 */
	virtual float GetDuration(const CLeafUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leafupdatenode.cpp:57 */
	virtual CMotionTransform GetTotalMovement(const CLeafUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leafupdatenode.cpp:63 */
	virtual CMotionTransform GetRemainingMovement(const CLeafUpdateNode* , CAnimGraphUpdateContext& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leafupdatenode.cpp:69 */
	virtual bool IsFinished(const CLeafUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leafupdatenode.cpp:75 */
	virtual float GetTimeTillFinished(const CLeafUpdateNode* , CAnimGraphUpdateContext& );
	void ~CLeafUpdateNode(class CLeafUpdateNode *); /* linkage=_ZN15CLeafUpdateNodeD4Ev */
	void CLeafUpdateNode(class CLeafUpdateNode *, class CLeafUpdateNode &); /* linkage=_ZN15CLeafUpdateNodeC4EOS_ */
	void CLeafUpdateNode(class CLeafUpdateNode *, const class CLeafUpdateNode  &); /* linkage=_ZN15CLeafUpdateNodeC4ERKS_ */
	void CLeafUpdateNode(class CLeafUpdateNode *, class CAnimGraphInitContext &); /* linkage=_ZN15CLeafUpdateNodeC4ER21CAnimGraphInitContext */
	virtual int GetChildCount(const class CLeafUpdateNode  *); /* linkage=_ZNK15CLeafUpdateNode13GetChildCountEv */
	virtual const class CAnimUpdateNodeBase  * GetChild(const class CLeafUpdateNode  *, int); /* linkage=_ZNK15CLeafUpdateNode8GetChildEi */
	virtual bool IsChildActive(const class CLeafUpdateNode  *, class CAnimGraphUpdateContext &, int); /* linkage=_ZNK15CLeafUpdateNode13IsChildActiveER23CAnimGraphUpdateContexti */
	virtual bool IsChildWaning(const class CLeafUpdateNode  *, class CAnimGraphUpdateContext &, int); /* linkage=_ZNK15CLeafUpdateNode13IsChildWaningER23CAnimGraphUpdateContexti */
	virtual void EnqueueChildren(const class CLeafUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK15CLeafUpdateNode15EnqueueChildrenER23CAnimGraphUpdateContext */
	virtual float GetCycle(const class CLeafUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK15CLeafUpdateNode8GetCycleER23CAnimGraphUpdateContext */
	virtual float GetDuration(const class CLeafUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK15CLeafUpdateNode11GetDurationER23CAnimGraphUpdateContext */
	virtual class CMotionTransform GetTotalMovement(const class CLeafUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK15CLeafUpdateNode16GetTotalMovementER23CAnimGraphUpdateContext */
	virtual class CMotionTransform GetRemainingMovement(const class CLeafUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK15CLeafUpdateNode20GetRemainingMovementER23CAnimGraphUpdateContextf */
	virtual bool IsFinished(const class CLeafUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK15CLeafUpdateNode10IsFinishedER23CAnimGraphUpdateContext */
	virtual float GetTimeTillFinished(const class CLeafUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK15CLeafUpdateNode19GetTimeTillFinishedER23CAnimGraphUpdateContext */
};

// <019149CB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/leafupdatenode.h:15
void CLeafUpdateNode::CLeafUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

