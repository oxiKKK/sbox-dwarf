
//
// animgraph/groundconditionupdater.h
//
//	referenced by: libanimationsystem.so
//
//	function: 1
//	class: 1
//

// <015F7448> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundconditionupdater.h:10
// member functions: 8
// member variables: 3
// vtable entry: 1
// class size: 16
class CGroundConditionUpdater : public IConditionUpdater {
public:
	/* class IConditionUpdater <ancestor>; */ /* 0 8 */
	void CGroundConditionUpdater(CGroundConditionUpdater* , CGroundConditionUpdater& );
	void CGroundConditionUpdater(CGroundConditionUpdater* , const CGroundConditionUpdater& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundconditionupdater.cpp:8 */
	void CGroundConditionUpdater(CGroundConditionUpdater* , Comparison_t, bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundconditionupdater.cpp:16 */
	virtual bool Evaluate(const CGroundConditionUpdater* , CAnimGraphUpdateContext& , const CStateMachineUpdateNode* , const CTransitionUpdateData& );
private:
	Comparison_t m_comparisonOperation; /* 8 1 */
	bool m_bComparisonValue; /* 9 1 */
	void CGroundConditionUpdater(class CGroundConditionUpdater *, class CGroundConditionUpdater &); /* linkage=_ZN23CGroundConditionUpdaterC4EOS_ */
	void CGroundConditionUpdater(class CGroundConditionUpdater *, const class CGroundConditionUpdater  &); /* linkage=_ZN23CGroundConditionUpdaterC4ERKS_ */
	void CGroundConditionUpdater(class CGroundConditionUpdater *, enum Comparison_t, bool); /* linkage=_ZN23CGroundConditionUpdaterC4E12Comparison_tb */
	virtual bool Evaluate(const class CGroundConditionUpdater  *, class CAnimGraphUpdateContext &, const class CStateMachineUpdateNode  *, const class CTransitionUpdateData  &); /* linkage=_ZNK23CGroundConditionUpdater8EvaluateER23CAnimGraphUpdateContextPK23CStateMachineUpdateNodeRK21CTransitionUpdateData */
};

// <01A57AE5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/groundconditionupdater.h:13
void CGroundConditionUpdater::CGroundConditionUpdater(Comparison_t comparisonOperation, bool bComparisonValue)
{
} /* size: 0 */

