
//
// animgraph/subtractupdatenode.h
//
//	referenced by: libanimationsystem.so
//
//	function: 1
//	class: 1
//

// <0190FDE5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractupdatenode.h:10
// member functions: 18
// member variables: 5
// vtable entries: 6
// class size: 48
class CSubtractUpdateNode : public CBinaryUpdateNode {
public:
	/* class CBinaryUpdateNode <ancestor>; */ /* 0 0 */
	void CSubtractUpdateNode(CSubtractUpdateNode* , CSubtractUpdateNode& );
	void CSubtractUpdateNode(CSubtractUpdateNode* , const CSubtractUpdateNode& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractupdatenode.cpp:9 */
	void CSubtractUpdateNode(CSubtractUpdateNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractupdatenode.cpp:16 */
	virtual void CreatePoseOp(const CSubtractUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractupdatenode.cpp:37 */
	virtual PoseHandle GetPoseHandle(const CSubtractUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractupdatenode.cpp:44 */
	virtual CMotionTransform GetTotalMovement(const CSubtractUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractupdatenode.cpp:62 */
	virtual CMotionTransform GetRemainingMovement(const CSubtractUpdateNode* , CAnimGraphUpdateContext& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractupdatenode.cpp:80 */
	virtual CRootMotion CalculateRootMotion(const CSubtractUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractupdatenode.cpp:98 */
	virtual void CalculateFootMotion(const CSubtractUpdateNode* , CAnimGraphUpdateContext& , const CMotionTransform& , CStrideStatus& );
	CPackedHandle<unsigned char> m_hPoseHandle; /* 32 4 */
	BinaryNodeChildOption m_footMotionTiming; /* 36 4 */
	bool m_bApplyChannelsSeparately; /* 40 1 */
	bool m_bModelSpace; /* 41 1 */
	void CSubtractUpdateNode(class CSubtractUpdateNode *, class CSubtractUpdateNode &); /* linkage=_ZN19CSubtractUpdateNodeC4EOS_ */
	void CSubtractUpdateNode(class CSubtractUpdateNode *, const class CSubtractUpdateNode  &); /* linkage=_ZN19CSubtractUpdateNodeC4ERKS_ */
	void CSubtractUpdateNode(class CSubtractUpdateNode *, class CAnimGraphInitContext &); /* linkage=_ZN19CSubtractUpdateNodeC4ER21CAnimGraphInitContext */
	virtual void CreatePoseOp(const class CSubtractUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CSubtractUpdateNode12CreatePoseOpER23CAnimGraphUpdateContext */
	virtual PoseHandle GetPoseHandle(const class CSubtractUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK19CSubtractUpdateNode13GetPoseHandleERK23CAnimGraphUpdateContext */
	virtual class CMotionTransform GetTotalMovement(const class CSubtractUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CSubtractUpdateNode16GetTotalMovementER23CAnimGraphUpdateContext */
	virtual class CMotionTransform GetRemainingMovement(const class CSubtractUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK19CSubtractUpdateNode20GetRemainingMovementER23CAnimGraphUpdateContextf */
	virtual class CRootMotion CalculateRootMotion(const class CSubtractUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CSubtractUpdateNode19CalculateRootMotionER23CAnimGraphUpdateContext */
	virtual void CalculateFootMotion(const class CSubtractUpdateNode  *, class CAnimGraphUpdateContext &, const class CMotionTransform  &, class CStrideStatus &); /* linkage=_ZNK19CSubtractUpdateNode19CalculateFootMotionER23CAnimGraphUpdateContextRK16CMotionTransformR13CStrideStatus */
};

// <01244B9B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/subtractupdatenode.h:14
void CSubtractUpdateNode::CSubtractUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

