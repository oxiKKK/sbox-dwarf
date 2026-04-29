
//
// animgraph/setfacingupdatenode.h
//
//	referenced by: libanimationsystem.so
//
//	function: 1
//	class: 1
//

// <01911860> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacingupdatenode.h:11
// member functions: 12
// member variables: 3
// vtable entries: 3
// class size: 24
class CSetFacingUpdateNode : public CUnaryUpdateNode {
public:
	/* class CUnaryUpdateNode <ancestor>; */ /* 0 16 */
	void CSetFacingUpdateNode(CSetFacingUpdateNode* , CSetFacingUpdateNode& );
	void CSetFacingUpdateNode(CSetFacingUpdateNode* , const CSetFacingUpdateNode& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacingupdatenode.cpp:8 */
	void CSetFacingUpdateNode(CSetFacingUpdateNode* , CAnimGraphInitContext& , FacingMode, bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacingupdatenode.cpp:17 */
	virtual void Update(const CSetFacingUpdateNode* , CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacingupdatenode.cpp:26 */
	virtual PoseHandle GetPoseHandle(const CSetFacingUpdateNode* , const CAnimGraphUpdateContext& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacingupdatenode.cpp:39 */
	virtual void Reset(const CSetFacingUpdateNode* , CAnimGraphUpdateContext& , float);
private:
	FacingMode m_facingMode; /* 16 4 */
	bool m_bResetChild; /* 20 1 */
	void CSetFacingUpdateNode(class CSetFacingUpdateNode *, class CSetFacingUpdateNode &); /* linkage=_ZN20CSetFacingUpdateNodeC4EOS_ */
	void CSetFacingUpdateNode(class CSetFacingUpdateNode *, const class CSetFacingUpdateNode  &); /* linkage=_ZN20CSetFacingUpdateNodeC4ERKS_ */
	void CSetFacingUpdateNode(class CSetFacingUpdateNode *, class CAnimGraphInitContext &, enum FacingMode, bool); /* linkage=_ZN20CSetFacingUpdateNodeC4ER21CAnimGraphInitContext10FacingModeb */
	/* <1974aa7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacingupdatenode.cpp:17 */
	virtual void Update(const class CSetFacingUpdateNode  *, class CAnimGraphUpdateContext &); /* linkage=_ZNK20CSetFacingUpdateNode6UpdateER23CAnimGraphUpdateContext */
	virtual PoseHandle GetPoseHandle(const class CSetFacingUpdateNode  *, const class CAnimGraphUpdateContext  &); /* linkage=_ZNK20CSetFacingUpdateNode13GetPoseHandleERK23CAnimGraphUpdateContext */
	virtual void Reset(const class CSetFacingUpdateNode  *, class CAnimGraphUpdateContext &, float); /* linkage=_ZNK20CSetFacingUpdateNode5ResetER23CAnimGraphUpdateContextf */
};

// <0112550A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacingupdatenode.h:15
void CSetFacingUpdateNode::CSetFacingUpdateNode(CAnimGraphInitContext& initContext, FacingMode facingMode, bool bResetChild)
{
} /* size: 0 */

