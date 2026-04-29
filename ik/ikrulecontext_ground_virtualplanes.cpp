
//
// ik/ikrulecontext_ground_virtualplanes.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//

// <01BA693C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_ground_virtualplanes.cpp:19
// function calls: 2
void CIKRuleContext_Ground_VirtualPlanes::CIKRuleContext_Ground_VirtualPlanes(const CIKRuleDescription_Ground_VirtualPlanes* pRuleDescription)
{
	IIKRuleContext::IIKRuleContext(); // 6
	CIKRuleContext_Base::CIKRuleContext_Base(); // 20
} /* size: 29, inline expansions: 2 (0 bytes) */

// <01BA6917> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_ground_virtualplanes.cpp:19
void CIKRuleContext_Ground_VirtualPlanes::CIKRuleContext_Ground_VirtualPlanes(const CIKRuleDescription_Ground_VirtualPlanes* pRuleDescription)
{
} /* size: 0 */

// <01BA68B3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_ground_virtualplanes.cpp:24
// function call: 1
void CIKRuleContext_Ground_VirtualPlanes::GetName()
{
	CIKRuleDescription_Base::GetName(); // 26
} /* size: 34, inline expansions: 1 (4 bytes) */

// <01BA6808> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_ground_virtualplanes.cpp:29
// variables: 2
void CIKRuleContext_Ground_VirtualPlanes::UpdateInterpolationState(const CIKRuleContextUpdateTargetInput& ruleInput, CIKChainRuleInterpolationState* pInterpolationState)
{
	CIKChainRuleInterpolationState_Ground* pGround; // 31
	const CIKChainDescription* pIKChain; // 36
} /* size: 82, variables: 2 */

// <01BA66CC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_ground_virtualplanes.cpp:52
// variables: 2
// function calls: 3
void CIKRuleContext_Ground_VirtualPlanes::CalculateTargetTransform(const CIKRuleContextCalculateTargetInput& ruleInput)
{
	const CIKChainRuleInterpolationState_Ground* pGround; // 54
	const CIKChainRuleInterpolationState_Ground& interpolationState_Ground; // 61
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 56
	ConVar::GetInt(); // 63
} /* size: 184, variables: 2, inline expansions: 3 (21 bytes) */

// <01BA669B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_ground_virtualplanes.cpp:75
// variable: 1
void CIKRuleContext_Ground_VirtualPlanes::GetRequestedAbsOriginZ(const CIKChainRuleInterpolationState& interpolationState)
{
	const CIKChainRuleInterpolationState_Ground* pGround; // 77
} /* size: 0, variables: 1 */

