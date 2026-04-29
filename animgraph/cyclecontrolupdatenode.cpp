
//
// animgraph/cyclecontrolupdatenode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 11
//

// <01839A44> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolupdatenode.cpp:9
// function call: 1
void CCycleControlUpdateNode::CCycleControlUpdateNode(CAnimGraphInitContext& initContext)
{
	CAnimParamHandle::CAnimParamHandle(); // 10
} /* size: 46, inline expansions: 1 (9 bytes) */

// <01839A1F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolupdatenode.cpp:9
void CCycleControlUpdateNode::CCycleControlUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

// <0186695F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolupdatenode.cpp:16
// variable: 1
// function calls: 6
void CCycleControlUpdateNode::Update(CAnimGraphUpdateContext& context)
{
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 18
	{
		float paramValue; // 20
		CCycleControlUpdateNode::CalcCycle(
				CAnimGraphUpdateContext& context);  // 20
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 21
	}
	CCycleControlUpdateNode::Update(
		CAnimGraphUpdateContext& context);  // 16
} /* size: 0, inline expansions: 2 (90 bytes) */

// <018399EC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolupdatenode.cpp:16
// variable: 1
void CCycleControlUpdateNode::Update(CAnimGraphUpdateContext& context)
{
	{
		float paramValue; // 20
	}
} /* size: 0 */

// <01839911> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolupdatenode.cpp:26
// function calls: 2
void CCycleControlUpdateNode::EnqueueChildren(CAnimGraphUpdateContext& context)
{
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 28
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 30
} /* size: 45, inline expansions: 2 (9 bytes) */

// <01839810> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolupdatenode.cpp:35
// variable: 1
// function calls: 3
void CCycleControlUpdateNode::GetPoseHandle(const CAnimGraphUpdateContext& context)
{
	PoseHandle hPose; // 37
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 39
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 41
} /* size: 38, variables: 1, inline expansions: 3 (14 bytes) */

// <0183976B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolupdatenode.cpp:48
// function call: 1
void CCycleControlUpdateNode::GetCycle(CAnimGraphUpdateContext& context)
{
	CCycleControlUpdateNode::CalcCycle(
			CAnimGraphUpdateContext& context);  // 50
} /* size: 53, inline expansions: 1 (40 bytes) */

// <01839747> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolupdatenode.cpp:54
void CCycleControlUpdateNode::GetDuration(CAnimGraphUpdateContext& context)
{
} /* size: 0 */

// <01839723> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolupdatenode.cpp:60
void CCycleControlUpdateNode::IsFinished(CAnimGraphUpdateContext& context)
{
} /* size: 0 */

// <018396FF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolupdatenode.cpp:66
void CCycleControlUpdateNode::GetTimeTillFinished(CAnimGraphUpdateContext& context)
{
} /* size: 0 */

// <0186D33E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cyclecontrolupdatenode.cpp:72
// variable: 1
void CCycleControlUpdateNode::CalcCycle(CAnimGraphUpdateContext& context)
{
	float flCycle; // 74
} /* size: 0, variables: 1 */

