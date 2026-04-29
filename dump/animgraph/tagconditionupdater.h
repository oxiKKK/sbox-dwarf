
//
// animgraph/tagconditionupdater.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//	class: 1
//

// <015F723E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagconditionupdater.h:10
// member functions: 4
// member variables: 4
// vtable entry: 1
// class size: 24
class CTagConditionUpdater : public IConditionUpdater {
public:
	/* class IConditionUpdater <ancestor>; */ /* 0 8 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagconditionupdater.h:13 */
	void CTagConditionUpdater(CTagConditionUpdater* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagconditionupdater.cpp:9 */
	virtual bool Evaluate(const CTagConditionUpdater* , CAnimGraphUpdateContext& , const CStateMachineUpdateNode* , const CTransitionUpdateData& );
	Comparison_t m_operation; /* 8 1 */
	int m_tagIndex; /* 12 4 */
	bool m_comparisonValue; /* 16 1 */
	virtual bool Evaluate(const class CTagConditionUpdater  *, class CAnimGraphUpdateContext &, const class CStateMachineUpdateNode  *, const class CTransitionUpdateData  &); /* linkage=_ZNK20CTagConditionUpdater8EvaluateER23CAnimGraphUpdateContextPK23CStateMachineUpdateNodeRK21CTransitionUpdateData */
	void CTagConditionUpdater(class CTagConditionUpdater *); /* linkage=_ZN20CTagConditionUpdaterC4Ev */
};

// <01A6F7B7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagconditionupdater.h:13
void CTagConditionUpdater::CTagConditionUpdater()
{
} /* size: 0 */

// <01A6F79E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tagconditionupdater.h:13
inline void CTagConditionUpdater::CTagConditionUpdater()
{
} /* size: 0 */

