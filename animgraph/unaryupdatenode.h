
//
// animgraph/unaryupdatenode.h
//
//	referenced by: libanimationsystem.so
//
//	function: 1
//	class: 1
//

// <0190F5B8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/unaryupdatenode.h:13
// member functions: 36
// member variables: 2
// vtable entries: 14
// class size: 16
class CUnaryUpdateNode : public CAnimUpdateNodeBase {
public:
	/* class CAnimUpdateNodeBase <ancestor>; */ /* 0 0 */
	void ~CUnaryUpdateNode(CUnaryUpdateNode* );
	void CUnaryUpdateNode(CUnaryUpdateNode* , CUnaryUpdateNode& );
	void CUnaryUpdateNode(CUnaryUpdateNode* , const CUnaryUpdateNode& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/unaryupdatenode.cpp:8 */
	void CUnaryUpdateNode(CUnaryUpdateNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/unaryupdatenode.cpp:15 */
	virtual int GetChildCount(const CUnaryUpdateNode* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/unaryupdatenode.cpp:21 */
	virtual const CAnimUpdateNodeBase* GetChild(const CUnaryUpdateNode* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/unaryupdatenode.cpp:27 */
	virtual bool IsChildActive(const CUnaryUpdateNode* , CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/unaryupdatenode.cpp:33 */
	virtual bool IsChildWaning(const CUnaryUpdateNode* , CAnimGraphUpdateContext& , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/unaryupdatenode.cpp:39 */
	virtual void EnqueueChildren(const CUnaryUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/unaryupdatenode.cpp:48 */
	virtual float GetCycle(const CUnaryUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/unaryupdatenode.cpp:61 */
	virtual float GetDuration(const CUnaryUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/unaryupdatenode.cpp:74 */
	virtual CMotionTransform GetTotalMovement(const CUnaryUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/unaryupdatenode.cpp:87 */
	virtual CMotionTransform GetRemainingMovement(const CUnaryUpdateNode* , CAnimGraphUpdateContext& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/unaryupdatenode.cpp:100 */
	virtual void Reset(const CUnaryUpdateNode* , CAnimGraphUpdateContext& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/unaryupdatenode.cpp:111 */
	virtual bool IsFinished(const CUnaryUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/unaryupdatenode.cpp:124 */
	virtual float GetTimeTillFinished(const CUnaryUpdateNode* , CAnimGraphUpdateContext& );
	CRelativeOffset<const CAnimUpdateNodeBase> m_pChildNode; /* 12 4 */
protected:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/unaryupdatenode.cpp:148 */
	virtual CRootMotion CalculateRootMotion(const CUnaryUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/unaryupdatenode.cpp:137 */
	virtual void CalculateFootMotion(const CUnaryUpdateNode* , CAnimGraphUpdateContext& , const CMotionTransform& , CStrideStatus& );
	void ~CUnaryUpdateNode(class CUnaryUpdateNode *); /* linkage=_ZN16CUnaryUpdateNodeD4Ev */
	void CUnaryUpdateNode(class CUnaryUpdateNode *, class CUnaryUpdateNode &); /* linkage=_ZN16CUnaryUpdateNodeC4EOS_ */
	void CUnaryUpdateNode(class CUnaryUpdateNode *, const class CUnaryUpdateNode  &); /* linkage=_ZN16CUnaryUpdateNodeC4ERKS_ */
	void CUnaryUpdateNode(class CUnaryUpdateNode *, class CAnimGraphInitContext &); /* linkage=_ZN16CUnaryUpdateNodeC4ER21CAnimGraphInitContext */
	virtual int GetChildCount(const class CUnaryUpdateNode  *); /* linkage=_ZNK16CUnaryUpdateNode13GetChildCountEv */
	virtual const class CAnimUpdateNodeBase  * GetChild(const class CUnaryUpdateNode  *, int); /* linkage=_ZNK16CUnaryUpdateNode8GetChildEi */
	virtual bool IsChildActive(const class CUnaryUpdateNode  *, class CAnimGraphUpdateContext &, int); /* linkage=_ZNK16CUnaryUpdateNode13IsChildActiveER23CAnimGraphUpdateContexti */
	virtual bool IsChildWaning(const class CUnaryUpdateNode  *, class CAnimGraphUpdateContext &, int); /* linkage=_ZNK16CUnaryUpdateNode13IsChildWaningER23CAnimGraphUpdateContexti */
	virtual void EnqueueChildren(const class CUnaryUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK16CUnaryUpdateNode15EnqueueChildrenER23CAnimGraphUpdateContext */
	virtual float GetCycle(const class CUnaryUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK16CUnaryUpdateNode8GetCycleER23CAnimGraphUpdateContext */
	virtual float GetDuration(const class CUnaryUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK16CUnaryUpdateNode11GetDurationER23CAnimGraphUpdateContext */
	virtual class CMotionTransform GetTotalMovement(const class CUnaryUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK16CUnaryUpdateNode16GetTotalMovementER23CAnimGraphUpdateContext */
	virtual class CMotionTransform GetRemainingMovement(const class CUnaryUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK16CUnaryUpdateNode20GetRemainingMovementER23CAnimGraphUpdateContextf */
	/* <197399d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/unaryupdatenode.cpp:100 */
	virtual void Reset(const class CUnaryUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK16CUnaryUpdateNode5ResetER23CAnimGraphUpdateContextf */
	virtual bool IsFinished(const class CUnaryUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK16CUnaryUpdateNode10IsFinishedER23CAnimGraphUpdateContext */
	virtual float GetTimeTillFinished(const class CUnaryUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK16CUnaryUpdateNode19GetTimeTillFinishedER23CAnimGraphUpdateContext */
	/* <19763e3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/unaryupdatenode.cpp:148 */
	virtual class CRootMotion CalculateRootMotion(const class CUnaryUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK16CUnaryUpdateNode19CalculateRootMotionER23CAnimGraphUpdateContext */
	/* <1973ac2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/unaryupdatenode.cpp:137 */
	virtual void CalculateFootMotion(const class CUnaryUpdateNode  *, class CAnimGraphUpdateContext &, const class CMotionTransform  &, class CStrideStatus &); /* linkage=_ZNK16CUnaryUpdateNode19CalculateFootMotionER23CAnimGraphUpdateContextRK16CMotionTransformR13CStrideStatus */
};

// <017E8DCB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/unaryupdatenode.h:17
void CUnaryUpdateNode::CUnaryUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

