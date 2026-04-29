
//
// animgraph/timeconditionupdater.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//

// <015F8F92> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeconditionupdater.cpp:9
// function call: 1
void CTimeConditionUpdater::CTimeConditionUpdater(Comparison_t comparisonOperation, float flComparisonValue)
{
	IConditionUpdater::IConditionUpdater(); // 11
} /* size: 24, inline expansions: 1 (0 bytes) */

// <015F8F61> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeconditionupdater.cpp:9
void CTimeConditionUpdater::CTimeConditionUpdater(Comparison_t comparisonOperation, float flComparisonValue)
{
} /* size: 0 */

// <015F8DA9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeconditionupdater.cpp:17
// variable: 1
// function calls: 4
void CTimeConditionUpdater::Evaluate(CAnimGraphUpdateContext& context, const CStateMachineUpdateNode* pStateMachineNode, const CTransitionUpdateData& transition)
{
	float flElapsedTime; // 19
	CAnimVariant::SetValue<float>(
			const float& value);  // 159
	CAnimVariant::CAnimVariant<float>(
				const float& v);  // 21
	CAnimVariant::SetValue<float>(
			const float& value);  // 159
	CAnimVariant::CAnimVariant<float>(
				const float& v);  // 21
} /* size: 148, variables: 1, inline expansions: 4 (46 bytes) */

