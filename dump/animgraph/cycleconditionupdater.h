
//
// animgraph/cycleconditionupdater.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//	class: 1
//

// <015F6EA5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cycleconditionupdater.h:11
// member functions: 4
// member variables: 4
// vtable entry: 1
// class size: 16
class CCycleConditionUpdater : public IConditionUpdater {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cycleconditionupdater.h:18 */
	union CompValues {
		float m_fixedValue; /* 0 4 */
		ControlValue m_controlValue; /* 0 4 */
		CAnimParamHandle m_paramIndex; /* 0 2 */
	};
public:
	/* class IConditionUpdater <ancestor>; */ /* 0 8 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cycleconditionupdater.h:14 */
	void CCycleConditionUpdater(CCycleConditionUpdater* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cycleconditionupdater.cpp:10 */
	virtual bool Evaluate(const CCycleConditionUpdater* , CAnimGraphUpdateContext& , const CStateMachineUpdateNode* , const CTransitionUpdateData& );
	union CompValues m_comparisonValue; /* 8 4 */
	ComparisonValueType m_comparisonValueType; /* 12 1 */
	Comparison_t m_operation; /* 13 1 */
	virtual bool Evaluate(const class CCycleConditionUpdater  *, class CAnimGraphUpdateContext &, const class CStateMachineUpdateNode  *, const class CTransitionUpdateData  &); /* linkage=_ZNK22CCycleConditionUpdater8EvaluateER23CAnimGraphUpdateContextPK23CStateMachineUpdateNodeRK21CTransitionUpdateData */
	void CCycleConditionUpdater(class CCycleConditionUpdater *); /* linkage=_ZN22CCycleConditionUpdaterC4Ev */
};

// <01A77741> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cycleconditionupdater.h:14
void CCycleConditionUpdater::CCycleConditionUpdater()
{
} /* size: 0 */

// <01A77728> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cycleconditionupdater.h:14
inline void CCycleConditionUpdater::CCycleConditionUpdater()
{
} /* size: 0 */

// <01A77711> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cycleconditionupdater.h:20
void CompValues(const union CompValues* this)
{
} /* size: 0 */

// <01A776F8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cycleconditionupdater.h:20
inline void CompValues(const union CompValues* this)
{
} /* size: 0 */

