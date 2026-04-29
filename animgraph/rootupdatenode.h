
//
// animgraph/rootupdatenode.h
//
//	referenced by: libanimationsystem.so
//
//	function: 1
//	class: 1
//

// <019123F9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootupdatenode.h:11
// member functions: 22
// member variable: 1
// vtable entries: 7
// class size: 16
class CRootUpdateNode : public CUnaryUpdateNode {
public:
	/* class CUnaryUpdateNode <ancestor>; */ /* 0 16 */
	void CRootUpdateNode(CRootUpdateNode* , CRootUpdateNode& );
	void CRootUpdateNode(CRootUpdateNode* , const CRootUpdateNode& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootupdatenode.cpp:9 */
	void CRootUpdateNode(CRootUpdateNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootupdatenode.cpp:16 */
	virtual void CreatePoseOp(const CRootUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootupdatenode.cpp:30 */
	virtual PoseHandle GetPoseHandle(const CRootUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootupdatenode.cpp:42 */
	virtual float GetCycle(const CRootUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootupdatenode.cpp:48 */
	virtual float GetDuration(const CRootUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootupdatenode.cpp:54 */
	virtual CMotionTransform GetTotalMovement(const CRootUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootupdatenode.cpp:60 */
	virtual CMotionTransform GetRemainingMovement(const CRootUpdateNode* , CAnimGraphUpdateContext& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootupdatenode.cpp:66 */
	virtual void Reset(const CRootUpdateNode* , CAnimGraphUpdateContext& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootupdatenode.cpp:74 */
	void SetChild(CRootUpdateNode* , const CAnimUpdateNodeBase* );
	void CRootUpdateNode(class CRootUpdateNode *, class CRootUpdateNode &); /* linkage=_ZN15CRootUpdateNodeC4EOS_ */
	void CRootUpdateNode(class CRootUpdateNode *, const class CRootUpdateNode  &); /* linkage=_ZN15CRootUpdateNodeC4ERKS_ */
	void CRootUpdateNode(class CRootUpdateNode *, class CAnimGraphInitContext &); /* linkage=_ZN15CRootUpdateNodeC4ER21CAnimGraphInitContext */
	virtual void CreatePoseOp(const class CRootUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK15CRootUpdateNode12CreatePoseOpER23CAnimGraphUpdateContext */
	virtual PoseHandle GetPoseHandle(const class CRootUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK15CRootUpdateNode13GetPoseHandleERK23CAnimGraphUpdateContext */
	virtual float GetCycle(const class CRootUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK15CRootUpdateNode8GetCycleER23CAnimGraphUpdateContext */
	virtual float GetDuration(const class CRootUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK15CRootUpdateNode11GetDurationER23CAnimGraphUpdateContext */
	virtual class CMotionTransform GetTotalMovement(const class CRootUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK15CRootUpdateNode16GetTotalMovementER23CAnimGraphUpdateContext */
	virtual class CMotionTransform GetRemainingMovement(const class CRootUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK15CRootUpdateNode20GetRemainingMovementER23CAnimGraphUpdateContextf */
	/* <1975c93> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootupdatenode.cpp:66 */
	virtual void Reset(const class CRootUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK15CRootUpdateNode5ResetER23CAnimGraphUpdateContextf */
	void SetChild(class CRootUpdateNode *, const class CAnimUpdateNodeBase  *); /* linkage=_ZN15CRootUpdateNode8SetChildEPK19CAnimUpdateNodeBase */
};

// <01125845> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootupdatenode.h:15
void CRootUpdateNode::CRootUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

