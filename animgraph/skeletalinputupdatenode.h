
//
// animgraph/skeletalinputupdatenode.h
//
//	referenced by: libanimationsystem.so
//
//	function: 1
//	class: 1
//

// <01911147> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputupdatenode.h:14
// member functions: 12
// member variables: 3
// vtable entries: 3
// class size: 24
class CSkeletalInputUpdateNode : public CLeafUpdateNode {
public:
	/* class CLeafUpdateNode <ancestor>; */ /* 0 0 */
	void CSkeletalInputUpdateNode(CSkeletalInputUpdateNode* , CSkeletalInputUpdateNode& );
	void CSkeletalInputUpdateNode(CSkeletalInputUpdateNode* , const CSkeletalInputUpdateNode& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputupdatenode.cpp:9 */
	void CSkeletalInputUpdateNode(CSkeletalInputUpdateNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputupdatenode.cpp:15 */
	virtual void Update(const CSkeletalInputUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputupdatenode.cpp:21 */
	virtual void CreatePoseOp(const CSkeletalInputUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputupdatenode.cpp:27 */
	virtual PoseHandle GetPoseHandle(const CSkeletalInputUpdateNode* , const CAnimGraphUpdateContext& );
	CPackedHandle<SkeletalInputOpFixedSettings_t> m_hFixedOpData; /* 12 4 */
	CPackedHandle<unsigned char> m_hPose; /* 16 4 */
	void CSkeletalInputUpdateNode(class CSkeletalInputUpdateNode *, class CSkeletalInputUpdateNode &); /* linkage=_ZN24CSkeletalInputUpdateNodeC4EOS_ */
	void CSkeletalInputUpdateNode(class CSkeletalInputUpdateNode *, const class CSkeletalInputUpdateNode  &); /* linkage=_ZN24CSkeletalInputUpdateNodeC4ERKS_ */
	void CSkeletalInputUpdateNode(class CSkeletalInputUpdateNode *, class CAnimGraphInitContext &); /* linkage=_ZN24CSkeletalInputUpdateNodeC4ER21CAnimGraphInitContext */
	virtual void Update(const class CSkeletalInputUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK24CSkeletalInputUpdateNode6UpdateER23CAnimGraphUpdateContext */
	virtual void CreatePoseOp(const class CSkeletalInputUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK24CSkeletalInputUpdateNode12CreatePoseOpER23CAnimGraphUpdateContext */
	virtual PoseHandle GetPoseHandle(const class CSkeletalInputUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK24CSkeletalInputUpdateNode13GetPoseHandleERK23CAnimGraphUpdateContext */
};

// <01245357> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/skeletalinputupdatenode.h:18
void CSkeletalInputUpdateNode::CSkeletalInputUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

