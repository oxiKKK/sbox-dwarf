
//
// animgraph/timeconditionupdater.h
//
//	referenced by: libanimationsystem.so
//
//	function: 1
//	class: 1
//

// <015F700E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeconditionupdater.h:10
// member functions: 8
// member variables: 3
// vtable entry: 1
// class size: 16
class CTimeConditionUpdater : public IConditionUpdater {
public:
	/* class IConditionUpdater <ancestor>; */ /* 0 8 */
	void CTimeConditionUpdater(CTimeConditionUpdater* , CTimeConditionUpdater& );
	void CTimeConditionUpdater(CTimeConditionUpdater* , const CTimeConditionUpdater& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeconditionupdater.cpp:9 */
	void CTimeConditionUpdater(CTimeConditionUpdater* , Comparison_t, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeconditionupdater.cpp:17 */
	virtual bool Evaluate(const CTimeConditionUpdater* , CAnimGraphUpdateContext& , const CStateMachineUpdateNode* , const CTransitionUpdateData& );
private:
	Comparison_t m_comparisonOperation; /* 8 1 */
	float m_flComparisonValue; /* 12 4 */
	void CTimeConditionUpdater(class CTimeConditionUpdater *, class CTimeConditionUpdater &); /* linkage=_ZN21CTimeConditionUpdaterC4EOS_ */
	void CTimeConditionUpdater(class CTimeConditionUpdater *, const class CTimeConditionUpdater  &); /* linkage=_ZN21CTimeConditionUpdaterC4ERKS_ */
	void CTimeConditionUpdater(class CTimeConditionUpdater *, enum Comparison_t, float); /* linkage=_ZN21CTimeConditionUpdaterC4E12Comparison_tf */
	virtual bool Evaluate(const class CTimeConditionUpdater  *, class CAnimGraphUpdateContext &, const class CStateMachineUpdateNode  *, const class CTransitionUpdateData  &); /* linkage=_ZNK21CTimeConditionUpdater8EvaluateER23CAnimGraphUpdateContextPK23CStateMachineUpdateNodeRK21CTransitionUpdateData */
};

// <01A57A6A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/timeconditionupdater.h:13
void CTimeConditionUpdater::CTimeConditionUpdater(Comparison_t comparisonOperation, float flComparisonValue)
{
} /* size: 0 */

