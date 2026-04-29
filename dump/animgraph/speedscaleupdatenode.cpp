
//
// animgraph/speedscaleupdatenode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 9
//

// <0193D343> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleupdatenode.cpp:8
// function calls: 3
void CSpeedScaleUpdateNode::CSpeedScaleUpdateNode(CAnimGraphInitContext& initContext)
{
	CRelativeOffset<const CAnimUpdateNodeBase>::CRelativeOffset(); // 9
	CUnaryUpdateNode::CUnaryUpdateNode(
			CAnimGraphInitContext& initContext);  // 9
	CAnimParamHandle::CAnimParamHandle(); // 9
} /* size: 53, inline expansions: 3 (28 bytes) */

// <0193D31E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleupdatenode.cpp:8
void CSpeedScaleUpdateNode::CSpeedScaleUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

// <01976083> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleupdatenode.cpp:14
// variable: 1
// function calls: 7
void CSpeedScaleUpdateNode::EnqueueChildren(CAnimGraphUpdateContext& context)
{
	CAnimParamHandle::IsValid(); // 16
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 16
	{
		float speedScale; // 18
		{
		}
		CAnimVariant::GetValue<float>(); // 194
		CAnimVariant::GetValue<float>(); // 18
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 19
	}
	CSpeedScaleUpdateNode::EnqueueChildren(
			CAnimGraphUpdateContext& context);  // 14
} /* size: 277, inline expansions: 3 (211 bytes) */

// <0193D2EB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleupdatenode.cpp:14
// variable: 1
void CSpeedScaleUpdateNode::EnqueueChildren(CAnimGraphUpdateContext& context)
{
	{
		float speedScale; // 18
	}
} /* size: 0 */

// <01974630> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleupdatenode.cpp:24
// variable: 1
// function calls: 5
void CSpeedScaleUpdateNode::GetPoseHandle(const CAnimGraphUpdateContext& context)
{
	PoseHandle hPose; // 26
	CAnimParamHandle::IsValid(); // 28
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 28
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 30
	CSpeedScaleUpdateNode::GetPoseHandle(
			const CAnimGraphUpdateContext& context);  // 24
} /* size: 46, variables: 1, inline expansions: 5 (50 bytes) */

// <0193D2BA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleupdatenode.cpp:24
// variable: 1
void CSpeedScaleUpdateNode::GetPoseHandle(const CAnimGraphUpdateContext& context)
{
	PoseHandle hPose; // 26
} /* size: 0, variables: 1 */

// <01975E6E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleupdatenode.cpp:37
// variables: 2
// function calls: 8
void CSpeedScaleUpdateNode::GetDuration(CAnimGraphUpdateContext& context)
{
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 39
	{
		float speedScale; // 42
		float duration; // 48
		CAnimParamHandle::IsValid(); // 43
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 48
		{
		}
		CAnimVariant::GetValue<float>(); // 194
		CAnimVariant::GetValue<float>(); // 45
	}
	CSpeedScaleUpdateNode::GetDuration(
			CAnimGraphUpdateContext& context);  // 37
} /* size: 0, inline expansions: 2 (290 bytes) */

// <0193D27B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleupdatenode.cpp:37
// variables: 2
void CSpeedScaleUpdateNode::GetDuration(CAnimGraphUpdateContext& context)
{
	{
		float speedScale; // 42
		float duration; // 48
	}
} /* size: 0 */

// <0193D060> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/speedscaleupdatenode.cpp:67
// variable: 1
// function calls: 7
void CSpeedScaleUpdateNode::GetTimeTillFinished(CAnimGraphUpdateContext& context)
{
	{
		float speedScale; // 71
		{
		}
		CAnimVariant::GetValue<float>(); // 194
		CAnimVariant::GetValue<float>(); // 71
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 74
	}
	CAnimParamHandle::IsValid(); // 69
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 69
} /* size: 0, inline expansions: 2 (12 bytes) */

