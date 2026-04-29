
//
// animgraph/speedscaleupdatenode.h
//
//	referenced by: libanimationsystem.so
//
//	function: 1
//	class: 1
//

// <01910A00> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleupdatenode.h:12
// member functions: 14
// member variables: 2
// vtable entries: 4
// class size: 24
class CSpeedScaleUpdateNode : public CUnaryUpdateNode {
public:
	/* class CUnaryUpdateNode <ancestor>; */ /* 0 16 */
	void CSpeedScaleUpdateNode(CSpeedScaleUpdateNode* , CSpeedScaleUpdateNode& );
	void CSpeedScaleUpdateNode(CSpeedScaleUpdateNode* , const CSpeedScaleUpdateNode& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleupdatenode.cpp:8 */
	void CSpeedScaleUpdateNode(CSpeedScaleUpdateNode* , CAnimGraphInitContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleupdatenode.cpp:14 */
	virtual void EnqueueChildren(const CSpeedScaleUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleupdatenode.cpp:24 */
	virtual PoseHandle GetPoseHandle(const CSpeedScaleUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleupdatenode.cpp:37 */
	virtual float GetDuration(const CSpeedScaleUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleupdatenode.cpp:67 */
	virtual float GetTimeTillFinished(const CSpeedScaleUpdateNode* , CAnimGraphUpdateContext& );
	CAnimParamHandle m_paramIndex; /* 16 2 */
	void CSpeedScaleUpdateNode(class CSpeedScaleUpdateNode *, class CSpeedScaleUpdateNode &); /* linkage=_ZN21CSpeedScaleUpdateNodeC4EOS_ */
	void CSpeedScaleUpdateNode(class CSpeedScaleUpdateNode *, const class CSpeedScaleUpdateNode  &); /* linkage=_ZN21CSpeedScaleUpdateNodeC4ERKS_ */
	void CSpeedScaleUpdateNode(class CSpeedScaleUpdateNode *, class CAnimGraphInitContext &); /* linkage=_ZN21CSpeedScaleUpdateNodeC4ER21CAnimGraphInitContext */
	/* <1976083> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleupdatenode.cpp:14 */
	virtual void EnqueueChildren(const class CSpeedScaleUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK21CSpeedScaleUpdateNode15EnqueueChildrenER23CAnimGraphUpdateContext */
	/* <1974630> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleupdatenode.cpp:24 */
	virtual PoseHandle GetPoseHandle(const class CSpeedScaleUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK21CSpeedScaleUpdateNode13GetPoseHandleERK23CAnimGraphUpdateContext */
	/* <1975e6e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleupdatenode.cpp:37 */
	virtual float GetDuration(const class CSpeedScaleUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK21CSpeedScaleUpdateNode11GetDurationER23CAnimGraphUpdateContext */
	virtual float GetTimeTillFinished(const class CSpeedScaleUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK21CSpeedScaleUpdateNode19GetTimeTillFinishedER23CAnimGraphUpdateContext */
};

// <012450CB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleupdatenode.h:16
void CSpeedScaleUpdateNode::CSpeedScaleUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

