
//
// animgraph/singleframeupdatenode.h
//
//	referenced by: libanimationsystem.so
//
//	function: 1
//	class: 1
//

// <019116FC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeupdatenode.h:13
// member functions: 12
// member variables: 4
// vtable entries: 3
// class size: 32
class CSingleFrameUpdateNode : public CLeafUpdateNode {
public:
	/* class CLeafUpdateNode <ancestor>; */ /* 0 0 */
	void CSingleFrameUpdateNode(CSingleFrameUpdateNode* , CSingleFrameUpdateNode& );
	void CSingleFrameUpdateNode(CSingleFrameUpdateNode* , const CSingleFrameUpdateNode& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeupdatenode.cpp:9 */
	void CSingleFrameUpdateNode(CSingleFrameUpdateNode* , CAnimGraphInitContext& , StaticPoseCacheHandle, int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeupdatenode.cpp:20 */
	virtual void Update(const CSingleFrameUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeupdatenode.cpp:26 */
	virtual void CreatePoseOp(const CSingleFrameUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeupdatenode.cpp:32 */
	virtual PoseHandle GetPoseHandle(const CSingleFrameUpdateNode* , const CAnimGraphUpdateContext& );
	CRelativeArray<TagSpan_t> m_tags; /* 12 8 */
private:
	StaticPoseCacheHandle m_hPoseCacheHandle; /* 20 4 */
	CPackedHandle<unsigned char> m_hPoseHandle; /* 24 4 */
	void CSingleFrameUpdateNode(class CSingleFrameUpdateNode *, class CSingleFrameUpdateNode &); /* linkage=_ZN22CSingleFrameUpdateNodeC4EOS_ */
	void CSingleFrameUpdateNode(class CSingleFrameUpdateNode *, const class CSingleFrameUpdateNode  &); /* linkage=_ZN22CSingleFrameUpdateNodeC4ERKS_ */
	void CSingleFrameUpdateNode(class CSingleFrameUpdateNode *, class CAnimGraphInitContext &, class StaticPoseCacheHandle, int); /* linkage=_ZN22CSingleFrameUpdateNodeC4ER21CAnimGraphInitContext21StaticPoseCacheHandlei */
	virtual void Update(const class CSingleFrameUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK22CSingleFrameUpdateNode6UpdateER23CAnimGraphUpdateContext */
	virtual void CreatePoseOp(const class CSingleFrameUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK22CSingleFrameUpdateNode12CreatePoseOpER23CAnimGraphUpdateContext */
	virtual PoseHandle GetPoseHandle(const class CSingleFrameUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK22CSingleFrameUpdateNode13GetPoseHandleERK23CAnimGraphUpdateContext */
};

// <01125486> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/singleframeupdatenode.h:17
void CSingleFrameUpdateNode::CSingleFrameUpdateNode(CAnimGraphInitContext& initContext, StaticPoseCacheHandle hPoseCacheHandle, int tagSpanCount)
{
} /* size: 0 */

