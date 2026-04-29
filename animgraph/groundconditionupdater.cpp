
//
// animgraph/groundconditionupdater.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//

// <015F9515> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundconditionupdater.cpp:8
// function call: 1
void CGroundConditionUpdater::CGroundConditionUpdater(Comparison_t comparisonOperation, bool bComparisonValue)
{
	IConditionUpdater::IConditionUpdater(); // 10
} /* size: 22, inline expansions: 1 (0 bytes) */

// <015F94E4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundconditionupdater.cpp:8
void CGroundConditionUpdater::CGroundConditionUpdater(Comparison_t comparisonOperation, bool bComparisonValue)
{
} /* size: 0 */

// <015F936C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundconditionupdater.cpp:16
// function calls: 4
void CGroundConditionUpdater::Evaluate(CAnimGraphUpdateContext& context, const CStateMachineUpdateNode* pStateMachineNode, const CTransitionUpdateData& transition)
{
	CAnimVariant::SetValue<bool>(
			const bool& value);  // 159
	CAnimVariant::CAnimVariant<bool>(
				const bool& v);  // 18
	CAnimVariant::SetValue<bool>(
			const bool& value);  // 159
	CAnimVariant::CAnimVariant<bool>(
				const bool& v);  // 18
} /* size: 99, inline expansions: 4 (36 bytes) */

