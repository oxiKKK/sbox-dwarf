
//
// animgraph/followattachmentupdatenode.h
//
//	referenced by: libanimationsystem.so
//
//	function: 1
//	class: 1
//

// <017E407F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentupdatenode.h:13
// member functions: 12
// member variables: 3
// vtable entries: 3
// class size: 24
class CFollowAttachmentUpdateNode : public CUnaryUpdateNode {
public:
	/* class CUnaryUpdateNode <ancestor>; */ /* 0 0 */
	void CFollowAttachmentUpdateNode(CFollowAttachmentUpdateNode* , CFollowAttachmentUpdateNode& );
	void CFollowAttachmentUpdateNode(CFollowAttachmentUpdateNode* , const CFollowAttachmentUpdateNode& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentupdatenode.cpp:9 */
	void CFollowAttachmentUpdateNode(CFollowAttachmentUpdateNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentupdatenode.cpp:17 */
	virtual void Update(const CFollowAttachmentUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentupdatenode.cpp:23 */
	virtual void CreatePoseOp(const CFollowAttachmentUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentupdatenode.cpp:36 */
	virtual PoseHandle GetPoseHandle(const CFollowAttachmentUpdateNode* , const CAnimGraphUpdateContext& );
	CPackedHandle<unsigned char> m_hPoseHandle; /* 16 4 */
	CPackedHandle<FollowAttachmentSettings_t> m_hOpFixedData; /* 20 4 */
	void CFollowAttachmentUpdateNode(class CFollowAttachmentUpdateNode *, class CFollowAttachmentUpdateNode &); /* linkage=_ZN27CFollowAttachmentUpdateNodeC4EOS_ */
	void CFollowAttachmentUpdateNode(class CFollowAttachmentUpdateNode *, const class CFollowAttachmentUpdateNode  &); /* linkage=_ZN27CFollowAttachmentUpdateNodeC4ERKS_ */
	void CFollowAttachmentUpdateNode(class CFollowAttachmentUpdateNode *, class CAnimGraphInitContext &); /* linkage=_ZN27CFollowAttachmentUpdateNodeC4ER21CAnimGraphInitContext */
	virtual void Update(const class CFollowAttachmentUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK27CFollowAttachmentUpdateNode6UpdateER23CAnimGraphUpdateContext */
	virtual void CreatePoseOp(const class CFollowAttachmentUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK27CFollowAttachmentUpdateNode12CreatePoseOpER23CAnimGraphUpdateContext */
	virtual PoseHandle GetPoseHandle(const class CFollowAttachmentUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK27CFollowAttachmentUpdateNode13GetPoseHandleERK23CAnimGraphUpdateContext */
};

// <01037AE3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/followattachmentupdatenode.h:17
void CFollowAttachmentUpdateNode::CFollowAttachmentUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

