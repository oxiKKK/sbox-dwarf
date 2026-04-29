
//
// animgraph/rootupdatenode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 11
//

// <01957185> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootupdatenode.cpp:9
// function calls: 2
void CRootUpdateNode::CRootUpdateNode(CAnimGraphInitContext& initContext)
{
	CRelativeOffset<const CAnimUpdateNodeBase>::CRelativeOffset(); // 9
	CUnaryUpdateNode::CUnaryUpdateNode(
			CAnimGraphInitContext& initContext);  // 10
} /* size: 44, inline expansions: 2 (19 bytes) */

// <01957160> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootupdatenode.cpp:9
void CRootUpdateNode::CRootUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

// <01957052> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootupdatenode.cpp:16
// variable: 1
// function calls: 3
void CRootUpdateNode::CreatePoseOp(CAnimGraphUpdateContext& context)
{
	{
		PoseHandle hPose; // 21
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 21
	}
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 19
} /* size: 72, inline expansions: 1 (4 bytes) */

// <01956F52> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootupdatenode.cpp:30
// variable: 1
// function calls: 3
void CRootUpdateNode::GetPoseHandle(const CAnimGraphUpdateContext& context)
{
	PoseHandle hPose; // 32
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 33
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 35
} /* size: 38, variables: 1, inline expansions: 3 (14 bytes) */

// <01956F15> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootupdatenode.cpp:42
void CRootUpdateNode::GetCycle(CAnimGraphUpdateContext& context)
{
} /* size: 9 */

// <01956EF0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootupdatenode.cpp:48
void CRootUpdateNode::GetDuration(CAnimGraphUpdateContext& context)
{
} /* size: 0 */

// <01956DEA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootupdatenode.cpp:54
// function calls: 3
void CRootUpdateNode::GetTotalMovement(CAnimGraphUpdateContext& context)
{
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 56
} /* size: 0, inline expansions: 3 (146 bytes) */

// <01956CD0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootupdatenode.cpp:60
// function calls: 3
void CRootUpdateNode::GetRemainingMovement(CAnimGraphUpdateContext& context, float flCycle)
{
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 62
} /* size: 0, inline expansions: 3 (146 bytes) */

// <01975C93> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootupdatenode.cpp:66
// function calls: 5
void CRootUpdateNode::Reset(CAnimGraphUpdateContext& context, float flCycle)
{
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 104
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 106
	CUnaryUpdateNode::Reset(
		CAnimGraphUpdateContext& context,
		float flCycle);  // 68
	{
	}
	{
	}
	CRootUpdateNode::Reset(
		CAnimGraphUpdateContext& context,
		float flCycle);  // 66
} /* size: 84, inline expansions: 5 (52 bytes) */

// <01956C61> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootupdatenode.cpp:66
// variables: 2
void CRootUpdateNode::Reset(CAnimGraphUpdateContext& context, float flCycle)
{
	const char   __FUNCTION__; // 54402
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 70
	}
} /* size: 0, variables: 1 */

// <01956BAA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootupdatenode.cpp:74
// function calls: 2
void CRootUpdateNode::SetChild(const CAnimUpdateNodeBase* childNode)
{
	CRelativeOffset<const CAnimUpdateNodeBase>::SetOffset(
			const CAnimUpdateNodeBase* targetPtr);  // 20
	CRelativeOffset<const CAnimUpdateNodeBase>::operator=(
			const CAnimUpdateNodeBase* targetPtr);  // 76
} /* size: 26, inline expansions: 2 (42 bytes) */

