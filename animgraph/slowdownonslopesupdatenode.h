
//
// animgraph/slowdownonslopesupdatenode.h
//
//	referenced by: libanimationsystem.so
//
//	function: 1
//	class: 1
//

// <01910FCB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesupdatenode.h:12
// member functions: 14
// member variables: 2
// vtable entries: 3
// class size: 24
class CSlowDownOnSlopesUpdateNode : public CUnaryUpdateNode {
public:
	/* class CUnaryUpdateNode <ancestor>; */ /* 0 16 */
	void CSlowDownOnSlopesUpdateNode(CSlowDownOnSlopesUpdateNode* , CSlowDownOnSlopesUpdateNode& );
	void CSlowDownOnSlopesUpdateNode(CSlowDownOnSlopesUpdateNode* , const CSlowDownOnSlopesUpdateNode& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesupdatenode.cpp:12 */
	void CSlowDownOnSlopesUpdateNode(CSlowDownOnSlopesUpdateNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesupdatenode.cpp:34 */
	virtual CRootMotion CalculateRootMotion(const CSlowDownOnSlopesUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesupdatenode.cpp:51 */
	virtual void CalculateFootMotion(const CSlowDownOnSlopesUpdateNode* , CAnimGraphUpdateContext& , const CMotionTransform& , CStrideStatus& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesupdatenode.cpp:65 */
	virtual PoseHandle GetPoseHandle(const CSlowDownOnSlopesUpdateNode* , const CAnimGraphUpdateContext& );
	float m_flSlowDownStrength; /* 16 4 */
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesupdatenode.cpp:18 */
	float CalculateSlopeScale(const CSlowDownOnSlopesUpdateNode* , CAnimGraphUpdateContext& );
	void CSlowDownOnSlopesUpdateNode(class CSlowDownOnSlopesUpdateNode *, class CSlowDownOnSlopesUpdateNode &); /* linkage=_ZN27CSlowDownOnSlopesUpdateNodeC4EOS_ */
	void CSlowDownOnSlopesUpdateNode(class CSlowDownOnSlopesUpdateNode *, const class CSlowDownOnSlopesUpdateNode  &); /* linkage=_ZN27CSlowDownOnSlopesUpdateNodeC4ERKS_ */
	void CSlowDownOnSlopesUpdateNode(class CSlowDownOnSlopesUpdateNode *, class CAnimGraphInitContext &); /* linkage=_ZN27CSlowDownOnSlopesUpdateNodeC4ER21CAnimGraphInitContext */
	virtual class CRootMotion CalculateRootMotion(const class CSlowDownOnSlopesUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK27CSlowDownOnSlopesUpdateNode19CalculateRootMotionER23CAnimGraphUpdateContext */
	/* <1974d25> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesupdatenode.cpp:51 */
	virtual void CalculateFootMotion(const class CSlowDownOnSlopesUpdateNode  *, class CAnimGraphUpdateContext &, const class CMotionTransform  &, class CStrideStatus &); /* linkage=_ZNK27CSlowDownOnSlopesUpdateNode19CalculateFootMotionER23CAnimGraphUpdateContextRK16CMotionTransformR13CStrideStatus */
	virtual PoseHandle GetPoseHandle(const class CSlowDownOnSlopesUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK27CSlowDownOnSlopesUpdateNode13GetPoseHandleERK23CAnimGraphUpdateContext */
	/* <197714d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesupdatenode.cpp:18 */
	float CalculateSlopeScale(const class CSlowDownOnSlopesUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK27CSlowDownOnSlopesUpdateNode19CalculateSlopeScaleER23CAnimGraphUpdateContext */
};

// <0124529A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/slowdownonslopesupdatenode.h:16
void CSlowDownOnSlopesUpdateNode::CSlowDownOnSlopesUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

