
//
// animgraph/paramconditionupdater.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//	class: 1
//

// <015F7395> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/paramconditionupdater.h:10
// member functions: 4
// member variables: 4
// vtable entry: 1
// class size: 32
class CParamConditionUpdater : public IConditionUpdater {
public:
	/* class IConditionUpdater <ancestor>; */ /* 0 8 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/paramconditionupdater.h:13 */
	void CParamConditionUpdater(CParamConditionUpdater* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/paramconditionupdater.cpp:8 */
	virtual bool Evaluate(const CParamConditionUpdater* , CAnimGraphUpdateContext& , const CStateMachineUpdateNode* , const CTransitionUpdateData& );
	CAnimParamHandle m_paramIndex; /* 8 2 */
	CAnimVariant m_comparisonValue; /* 10 17 */
	Comparison_t m_operation; /* 27 1 */
	/* <15faa5b> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/paramconditionupdater.cpp:8 */
	virtual bool Evaluate(const class CParamConditionUpdater  *, class CAnimGraphUpdateContext &, const class CStateMachineUpdateNode  *, const class CTransitionUpdateData  &); /* linkage=_ZNK22CParamConditionUpdater8EvaluateER23CAnimGraphUpdateContextPK23CStateMachineUpdateNodeRK21CTransitionUpdateData */
	void CParamConditionUpdater(class CParamConditionUpdater *); /* linkage=_ZN22CParamConditionUpdaterC4Ev */
};

// <01A72853> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/paramconditionupdater.h:13
void CParamConditionUpdater::CParamConditionUpdater()
{
} /* size: 0 */

// <01A7283A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/paramconditionupdater.h:13
inline void CParamConditionUpdater::CParamConditionUpdater()
{
} /* size: 0 */

