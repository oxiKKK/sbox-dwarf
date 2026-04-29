
//
// animgraph/finishedconditionupdater.cpp
//
//	referenced by: libanimationsystem.so
//
//	function: 1
//

// <015F9581> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/finishedconditionupdater.cpp:9
// variables: 3
// function calls: 6
void CFinishedConditionUpdater::Evaluate(CAnimGraphUpdateContext& context, const CStateMachineUpdateNode* pStateMachineNode, const CTransitionUpdateData& transition)
{
	const CStateUpdateData* pCurrentState; // 11
	{
		bool bCheckResult; // 15
		{
			float flChildRemainingTime; // 18
			CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 35
			CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
			CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 18
		}
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 15
	}
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 13
} /* size: 0, variables: 1, inline expansions: 1 (3 bytes) */

