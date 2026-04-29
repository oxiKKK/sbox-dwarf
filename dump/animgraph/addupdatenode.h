
//
// animgraph/addupdatenode.h
//
//	referenced by: libanimationsystem.so
//
//	function: 1
//	class: 1
//

// <017E6A61> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addupdatenode.h:11
// member functions: 20
// member variables: 5
// vtable entries: 7
// class size: 48
class CAddUpdateNode : public CBinaryUpdateNode {
public:
	/* class CBinaryUpdateNode <ancestor>; */ /* 0 32 */
	void CAddUpdateNode(CAddUpdateNode* , CAddUpdateNode& );
	void CAddUpdateNode(CAddUpdateNode* , const CAddUpdateNode& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addupdatenode.cpp:9 */
	void CAddUpdateNode(CAddUpdateNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addupdatenode.cpp:16 */
	virtual void Update(const CAddUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addupdatenode.cpp:22 */
	virtual void CreatePoseOp(const CAddUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addupdatenode.cpp:43 */
	virtual PoseHandle GetPoseHandle(const CAddUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addupdatenode.cpp:50 */
	virtual CMotionTransform GetTotalMovement(const CAddUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addupdatenode.cpp:67 */
	virtual CMotionTransform GetRemainingMovement(const CAddUpdateNode* , CAnimGraphUpdateContext& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addupdatenode.cpp:84 */
	virtual CRootMotion CalculateRootMotion(const CAddUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addupdatenode.cpp:102 */
	virtual void CalculateFootMotion(const CAddUpdateNode* , CAnimGraphUpdateContext& , const CMotionTransform& , CStrideStatus& );
	CPackedHandle<unsigned char> m_hPoseHandle; /* 32 4 */
	BinaryNodeChildOption m_footMotionTiming; /* 36 4 */
	bool m_bApplyChannelsSeparately; /* 40 1 */
	bool m_bModelSpace; /* 41 1 */
	void CAddUpdateNode(class CAddUpdateNode *, class CAddUpdateNode &); /* linkage=_ZN14CAddUpdateNodeC4EOS_ */
	void CAddUpdateNode(class CAddUpdateNode *, const class CAddUpdateNode  &); /* linkage=_ZN14CAddUpdateNodeC4ERKS_ */
	void CAddUpdateNode(class CAddUpdateNode *, class CAnimGraphInitContext &); /* linkage=_ZN14CAddUpdateNodeC4ER21CAnimGraphInitContext */
	virtual void Update(const class CAddUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK14CAddUpdateNode6UpdateER23CAnimGraphUpdateContext */
	virtual void CreatePoseOp(const class CAddUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK14CAddUpdateNode12CreatePoseOpER23CAnimGraphUpdateContext */
	virtual PoseHandle GetPoseHandle(const class CAddUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK14CAddUpdateNode13GetPoseHandleERK23CAnimGraphUpdateContext */
	virtual class CMotionTransform GetTotalMovement(const class CAddUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK14CAddUpdateNode16GetTotalMovementER23CAnimGraphUpdateContext */
	virtual class CMotionTransform GetRemainingMovement(const class CAddUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK14CAddUpdateNode20GetRemainingMovementER23CAnimGraphUpdateContextf */
	virtual class CRootMotion CalculateRootMotion(const class CAddUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK14CAddUpdateNode19CalculateRootMotionER23CAnimGraphUpdateContext */
	virtual void CalculateFootMotion(const class CAddUpdateNode  *, class CAnimGraphUpdateContext &, const class CMotionTransform  &, class CStrideStatus &); /* linkage=_ZNK14CAddUpdateNode19CalculateFootMotionER23CAnimGraphUpdateContextRK16CMotionTransformR13CStrideStatus */
};

// <010385EC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/addupdatenode.h:15
void CAddUpdateNode::CAddUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

