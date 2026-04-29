
//
// animgraph/pathhelperupdatenode.h
//
//	referenced by: libanimationsystem.so
//
//	function: 1
//	class: 1
//

// <01912602> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperupdatenode.h:11
// member functions: 10
// member variables: 3
// vtable entries: 2
// class size: 24
class CPathHelperUpdateNode : public CUnaryUpdateNode {
public:
	/* class CUnaryUpdateNode <ancestor>; */ /* 0 16 */
	void CPathHelperUpdateNode(CPathHelperUpdateNode* , CPathHelperUpdateNode& );
	void CPathHelperUpdateNode(CPathHelperUpdateNode* , const CPathHelperUpdateNode& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperupdatenode.cpp:10 */
	void CPathHelperUpdateNode(CPathHelperUpdateNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperupdatenode.cpp:17 */
	virtual PoseHandle GetPoseHandle(const CPathHelperUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperupdatenode.cpp:30 */
	virtual CRootMotion CalculateRootMotion(const CPathHelperUpdateNode* , CAnimGraphUpdateContext& );
	float m_flStoppingRadius; /* 16 4 */
	float m_flStoppingSpeedScale; /* 20 4 */
	void CPathHelperUpdateNode(class CPathHelperUpdateNode *, class CPathHelperUpdateNode &); /* linkage=_ZN21CPathHelperUpdateNodeC4EOS_ */
	void CPathHelperUpdateNode(class CPathHelperUpdateNode *, const class CPathHelperUpdateNode  &); /* linkage=_ZN21CPathHelperUpdateNodeC4ERKS_ */
	void CPathHelperUpdateNode(class CPathHelperUpdateNode *, class CAnimGraphInitContext &); /* linkage=_ZN21CPathHelperUpdateNodeC4ER21CAnimGraphInitContext */
	virtual PoseHandle GetPoseHandle(const class CPathHelperUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK21CPathHelperUpdateNode13GetPoseHandleERK23CAnimGraphUpdateContext */
	virtual class CRootMotion CalculateRootMotion(const class CPathHelperUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK21CPathHelperUpdateNode19CalculateRootMotionER23CAnimGraphUpdateContext */
};

// <011258A5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathhelperupdatenode.h:15
void CPathHelperUpdateNode::CPathHelperUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

