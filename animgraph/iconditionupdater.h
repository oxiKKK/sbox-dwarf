
//
// animgraph/iconditionupdater.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//	class: 1
//

// <01A7A35C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/iconditionupdater.h:12
void IConditionUpdater::IConditionUpdater()
{
} /* size: 0 */

// <01A7A340> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/iconditionupdater.h:12
inline void IConditionUpdater::IConditionUpdater()
{
} /* size: 0 */

// <015F70ED> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/iconditionupdater.h:12
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 8
class IConditionUpdater {
	void ~IConditionUpdater(IConditionUpdater* );
	void IConditionUpdater(IConditionUpdater* , IConditionUpdater& );
	void IConditionUpdater(IConditionUpdater* , const IConditionUpdater& );
	void IConditionUpdater(IConditionUpdater* );
	int ()(void) * * _vptr.IConditionUpdater; /* 0 8 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/iconditionupdater.h:15 */
	virtual bool Evaluate(const IConditionUpdater* , CAnimGraphUpdateContext& , const CStateMachineUpdateNode* , const CTransitionUpdateData& );
	void ~IConditionUpdater(class IConditionUpdater *); /* linkage=_ZN17IConditionUpdaterD4Ev */
	void IConditionUpdater(class IConditionUpdater *, class IConditionUpdater &); /* linkage=_ZN17IConditionUpdaterC4EOS_ */
	void IConditionUpdater(class IConditionUpdater *, const class IConditionUpdater  &); /* linkage=_ZN17IConditionUpdaterC4ERKS_ */
	void IConditionUpdater(class IConditionUpdater *); /* linkage=_ZN17IConditionUpdaterC4Ev */
	virtual bool Evaluate(const class IConditionUpdater  *, class CAnimGraphUpdateContext &, const class CStateMachineUpdateNode  *, const class CTransitionUpdateData  &); /* linkage=_ZNK17IConditionUpdater8EvaluateER23CAnimGraphUpdateContextPK23CStateMachineUpdateNodeRK21CTransitionUpdateData */
};

