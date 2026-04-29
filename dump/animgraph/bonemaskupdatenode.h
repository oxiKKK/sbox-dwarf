
//
// animgraph/bonemaskupdatenode.h
//
//	referenced by: libanimationsystem.so
//
//	function: 1
//	class: 1
//

// <017E5595> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskupdatenode.h:10
// member functions: 20
// member variables: 9
// vtable entries: 7
// class size: 64
class CBoneMaskUpdateNode : public CBinaryUpdateNode {
public:
	/* class CBinaryUpdateNode <ancestor>; */ /* 0 32 */
	void CBoneMaskUpdateNode(CBoneMaskUpdateNode* , CBoneMaskUpdateNode& );
	void CBoneMaskUpdateNode(CBoneMaskUpdateNode* , const CBoneMaskUpdateNode& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskupdatenode.cpp:10 */
	void CBoneMaskUpdateNode(CBoneMaskUpdateNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskupdatenode.cpp:17 */
	virtual void Update(const CBoneMaskUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskupdatenode.cpp:23 */
	virtual void CreatePoseOp(const CBoneMaskUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskupdatenode.cpp:50 */
	virtual PoseHandle GetPoseHandle(const CBoneMaskUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskupdatenode.cpp:57 */
	virtual CMotionTransform GetTotalMovement(const CBoneMaskUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskupdatenode.cpp:76 */
	virtual CMotionTransform GetRemainingMovement(const CBoneMaskUpdateNode* , CAnimGraphUpdateContext& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskupdatenode.cpp:95 */
	virtual CRootMotion CalculateRootMotion(const CBoneMaskUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskupdatenode.cpp:114 */
	virtual void CalculateFootMotion(const CBoneMaskUpdateNode* , CAnimGraphUpdateContext& , const CMotionTransform& , CStrideStatus& );
	CPackedHandle<unsigned char> m_hPoseHandle; /* 32 4 */
	int m_nWeightListIndex; /* 36 4 */
	float m_flRootMotionBlend; /* 40 4 */
	BoneMaskBlendSpace m_blendSpace; /* 44 4 */
	BinaryNodeChildOption m_footMotionTiming; /* 48 4 */
	bool m_bUseBlendScale; /* 52 1 */
	AnimValueSource m_blendValueSource; /* 56 4 */
	CAnimParamHandle m_hBlendParameter; /* 60 2 */
	void CBoneMaskUpdateNode(class CBoneMaskUpdateNode *, class CBoneMaskUpdateNode &); /* linkage=_ZN19CBoneMaskUpdateNodeC4EOS_ */
	void CBoneMaskUpdateNode(class CBoneMaskUpdateNode *, const class CBoneMaskUpdateNode  &); /* linkage=_ZN19CBoneMaskUpdateNodeC4ERKS_ */
	void CBoneMaskUpdateNode(class CBoneMaskUpdateNode *, class CAnimGraphInitContext &); /* linkage=_ZN19CBoneMaskUpdateNodeC4ER21CAnimGraphInitContext */
	virtual void Update(const class CBoneMaskUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CBoneMaskUpdateNode6UpdateER23CAnimGraphUpdateContext */
	virtual void CreatePoseOp(const class CBoneMaskUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CBoneMaskUpdateNode12CreatePoseOpER23CAnimGraphUpdateContext */
	virtual PoseHandle GetPoseHandle(const class CBoneMaskUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK19CBoneMaskUpdateNode13GetPoseHandleERK23CAnimGraphUpdateContext */
	virtual class CMotionTransform GetTotalMovement(const class CBoneMaskUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CBoneMaskUpdateNode16GetTotalMovementER23CAnimGraphUpdateContext */
	virtual class CMotionTransform GetRemainingMovement(const class CBoneMaskUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK19CBoneMaskUpdateNode20GetRemainingMovementER23CAnimGraphUpdateContextf */
	virtual class CRootMotion CalculateRootMotion(const class CBoneMaskUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK19CBoneMaskUpdateNode19CalculateRootMotionER23CAnimGraphUpdateContext */
	virtual void CalculateFootMotion(const class CBoneMaskUpdateNode  *, class CAnimGraphUpdateContext &, const class CMotionTransform  &, class CStrideStatus &); /* linkage=_ZNK19CBoneMaskUpdateNode19CalculateFootMotionER23CAnimGraphUpdateContextRK16CMotionTransformR13CStrideStatus */
};

// <01037E6C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/bonemaskupdatenode.h:14
void CBoneMaskUpdateNode::CBoneMaskUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

