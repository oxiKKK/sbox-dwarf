
//
// animgraph/controlvalueconditionupdater.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//	class: 1
//

// <015F6D9E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvalueconditionupdater.h:11
// member functions: 4
// member variables: 5
// vtable entry: 1
// class size: 24
class CControlValueConditionUpdater : public IConditionUpdater {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvalueconditionupdater.h:18 */
	union CompValues {
		float m_fixedValue; /* 0 4 */
		ControlValue m_controlValue; /* 0 4 */
		CAnimParamHandle m_paramIndex; /* 0 2 */
	};
public:
	/* class IConditionUpdater <ancestor>; */ /* 0 8 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvalueconditionupdater.h:14 */
	void CControlValueConditionUpdater(CControlValueConditionUpdater* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvalueconditionupdater.cpp:8 */
	virtual bool Evaluate(const CControlValueConditionUpdater* , CAnimGraphUpdateContext& , const CStateMachineUpdateNode* , const CTransitionUpdateData& );
	union CompValues m_comparison; /* 8 4 */
	ControlValue m_sourceControlValue; /* 12 4 */
	ComparisonValueType m_comparisonValueType; /* 16 1 */
	Comparison_t m_operation; /* 17 1 */
	virtual bool Evaluate(const class CControlValueConditionUpdater  *, class CAnimGraphUpdateContext &, const class CStateMachineUpdateNode  *, const class CTransitionUpdateData  &); /* linkage=_ZNK29CControlValueConditionUpdater8EvaluateER23CAnimGraphUpdateContextPK23CStateMachineUpdateNodeRK21CTransitionUpdateData */
	void CControlValueConditionUpdater(class CControlValueConditionUpdater *); /* linkage=_ZN29CControlValueConditionUpdaterC4Ev */
};

// <01A7A329> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvalueconditionupdater.h:14
void CControlValueConditionUpdater::CControlValueConditionUpdater()
{
} /* size: 0 */

// <01A7A310> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvalueconditionupdater.h:14
inline void CControlValueConditionUpdater::CControlValueConditionUpdater()
{
} /* size: 0 */

// <01A7A2F9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvalueconditionupdater.h:20
void CompValues(const union CompValues* this)
{
} /* size: 0 */

// <01A7A2E0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/controlvalueconditionupdater.h:20
inline void CompValues(const union CompValues* this)
{
} /* size: 0 */

