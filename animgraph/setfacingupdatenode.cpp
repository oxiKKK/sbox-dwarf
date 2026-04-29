
//
// animgraph/setfacingupdatenode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//

// <0194CA21> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacingupdatenode.cpp:8
// function calls: 2
void CSetFacingUpdateNode::CSetFacingUpdateNode(CAnimGraphInitContext& initContext, FacingMode facingMode, bool bResetChild)
{
	CRelativeOffset<const CAnimUpdateNodeBase>::CRelativeOffset(); // 9
	CUnaryUpdateNode::CUnaryUpdateNode(
			CAnimGraphInitContext& initContext);  // 11
} /* size: 67, inline expansions: 2 (19 bytes) */

// <0194C9E4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacingupdatenode.cpp:8
void CSetFacingUpdateNode::CSetFacingUpdateNode(CAnimGraphInitContext& initContext, FacingMode facingMode, bool bResetChild)
{
} /* size: 0 */

// <01974AA7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacingupdatenode.cpp:17
// function call: 1
void CSetFacingUpdateNode::Update(CAnimGraphUpdateContext& context)
{
	CSetFacingUpdateNode::Update(
		CAnimGraphUpdateContext& context);  // 17
} /* size: 57, inline expansions: 1 (13 bytes) */

// <0194C9BF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacingupdatenode.cpp:17
void CSetFacingUpdateNode::Update(CAnimGraphUpdateContext& context)
{
} /* size: 0 */

// <0194C8BF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacingupdatenode.cpp:26
// variable: 1
// function calls: 3
void CSetFacingUpdateNode::GetPoseHandle(const CAnimGraphUpdateContext& context)
{
	PoseHandle hPose; // 28
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 30
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 32
} /* size: 38, variables: 1, inline expansions: 3 (14 bytes) */

// <0194C736> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/setfacingupdatenode.cpp:39
// function calls: 3
void CSetFacingUpdateNode::Reset(CAnimGraphUpdateContext& context, float flCycle)
{
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 47
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 49
} /* size: 138, inline expansions: 3 (15 bytes) */

