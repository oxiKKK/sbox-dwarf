
//
// animgraph/unaryupdatenode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 19
//

// <01920A17> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/unaryupdatenode.cpp:8
// function call: 1
void CUnaryUpdateNode::CUnaryUpdateNode(CAnimGraphInitContext& initContext)
{
	CRelativeOffset<const CAnimUpdateNodeBase>::CRelativeOffset(); // 9
} /* size: 44, inline expansions: 1 (7 bytes) */

// <019209F2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/unaryupdatenode.cpp:8
void CUnaryUpdateNode::CUnaryUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

// <019209C4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/unaryupdatenode.cpp:15
void CUnaryUpdateNode::GetChildCount()
{
} /* size: 10 */

// <01920927> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/unaryupdatenode.cpp:21
// function calls: 2
void CUnaryUpdateNode::GetChild(int index)
{
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 23
} /* size: 28, inline expansions: 2 (30 bytes) */

// <019208DB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/unaryupdatenode.cpp:27
void CUnaryUpdateNode::IsChildActive(CAnimGraphUpdateContext& context, int index)
{
} /* size: 10 */

// <0192088F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/unaryupdatenode.cpp:33
void CUnaryUpdateNode::IsChildWaning(CAnimGraphUpdateContext& context, int index)
{
} /* size: 10 */

// <019207B4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/unaryupdatenode.cpp:39
// function calls: 2
void CUnaryUpdateNode::EnqueueChildren(CAnimGraphUpdateContext& context)
{
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 41
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 43
} /* size: 44, inline expansions: 2 (9 bytes) */

// <019206B0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/unaryupdatenode.cpp:48
// variable: 1
// function calls: 3
void CUnaryUpdateNode::GetCycle(CAnimGraphUpdateContext& context)
{
	float flCycle; // 50
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 52
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 54
} /* size: 37, variables: 1, inline expansions: 3 (14 bytes) */

// <019205AC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/unaryupdatenode.cpp:61
// variable: 1
// function calls: 3
void CUnaryUpdateNode::GetDuration(CAnimGraphUpdateContext& context)
{
	float flDuration; // 63
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 65
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 67
} /* size: 41, variables: 1, inline expansions: 3 (14 bytes) */

// <019203DE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/unaryupdatenode.cpp:74
// function calls: 6
void CUnaryUpdateNode::GetTotalMovement(CAnimGraphUpdateContext& context)
{
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 76
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 78
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 82
} /* size: 0, inline expansions: 6 (163 bytes) */

// <019201F3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/unaryupdatenode.cpp:87
// function calls: 6
void CUnaryUpdateNode::GetRemainingMovement(CAnimGraphUpdateContext& context, float flCycle)
{
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 89
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 91
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 95
} /* size: 0, inline expansions: 6 (163 bytes) */

// <0197399D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/unaryupdatenode.cpp:100
// function calls: 3
void CUnaryUpdateNode::Reset(CAnimGraphUpdateContext& context, float flCycle)
{
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 104
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 106
} /* size: 81, inline expansions: 3 (14 bytes) */

// <019201C2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/unaryupdatenode.cpp:100
void CUnaryUpdateNode::Reset(CAnimGraphUpdateContext& context, float flCycle)
{
} /* size: 0 */

// <019200C2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/unaryupdatenode.cpp:111
// variable: 1
// function calls: 3
void CUnaryUpdateNode::IsFinished(CAnimGraphUpdateContext& context)
{
	bool bFinished; // 113
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 115
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 117
} /* size: 35, variables: 1, inline expansions: 3 (14 bytes) */

// <0191FFBE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/unaryupdatenode.cpp:124
// variable: 1
// function calls: 3
void CUnaryUpdateNode::GetTimeTillFinished(CAnimGraphUpdateContext& context)
{
	float flRemainingTime; // 126
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 128
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 130
} /* size: 41, variables: 1, inline expansions: 3 (14 bytes) */

// <01973AC2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/unaryupdatenode.cpp:137
// function calls: 3
void CUnaryUpdateNode::CalculateFootMotion(CAnimGraphUpdateContext& context, const CMotionTransform& newLocalToWorld, CStrideStatus& footInfoList)
{
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 141
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 143
} /* size: 83, inline expansions: 3 (14 bytes) */

// <0191FF81> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/unaryupdatenode.cpp:137
void CUnaryUpdateNode::CalculateFootMotion(CAnimGraphUpdateContext& context, const CMotionTransform& newLocalToWorld, CStrideStatus& footInfoList)
{
} /* size: 0 */

// <019763E3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/unaryupdatenode.cpp:148
// function calls: 7
void CUnaryUpdateNode::CalculateRootMotion(CAnimGraphUpdateContext& context)
{
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 150
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 152
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 11
	CRootMotion::CRootMotion(
			const CRootMotion  &);  // 156
} /* size: 0, inline expansions: 7 (264 bytes) */

// <0191FF5C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/unaryupdatenode.cpp:148
void CUnaryUpdateNode::CalculateRootMotion(CAnimGraphUpdateContext& context)
{
} /* size: 0 */

