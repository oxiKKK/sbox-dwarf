
//
// ik/ikrulecontext_ground.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//	class: 1
//

// <01BA09DF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_ground.h:12
// member functions: 16
// member variables: 2
// vtable entries: 5
// class size: 16
class CIKRuleContext_Ground : public CIKRuleContext_Base {
public:
	/* class CIKRuleContext_Base <ancestor>; */ /* 0 8 */
	void CIKRuleContext_Ground(CIKRuleContext_Ground* , CIKRuleContext_Ground& );
	void CIKRuleContext_Ground(CIKRuleContext_Ground* , const CIKRuleContext_Ground& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_ground.cpp:21 */
	void CIKRuleContext_Ground(CIKRuleContext_Ground* , const CIKRuleDescription_Ground* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_ground.cpp:26 */
	virtual const CUtlSymbolLarge& GetName(const CIKRuleContext_Ground* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_ground.cpp:35 */
	virtual void UpdateInterpolationState(const CIKRuleContext_Ground* , const CIKRuleContextUpdateTargetInput& , CIKChainRuleInterpolationState* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_ground.cpp:89 */
	virtual CTransform CalculateTargetTransform(const CIKRuleContext_Ground* , const CIKRuleContextCalculateTargetInput& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_ground.h:23 */
	virtual bool DoesRuleProvideAbsOriginZ(const CIKRuleContext_Ground* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_ground.cpp:118 */
	virtual float GetRequestedAbsOriginZ(const CIKRuleContext_Ground* , const CIKChainRuleInterpolationState& );
private:
	const class CIKRuleDescription_Ground * m_pRuleDescription; /* 8 8 */
	virtual bool DoesRuleProvideAbsOriginZ(const class CIKRuleContext_Ground  *); /* linkage=_ZNK21CIKRuleContext_Ground25DoesRuleProvideAbsOriginZEv */
	void CIKRuleContext_Ground(class CIKRuleContext_Ground *, class CIKRuleContext_Ground &); /* linkage=_ZN21CIKRuleContext_GroundC4EOS_ */
	void CIKRuleContext_Ground(class CIKRuleContext_Ground *, const class CIKRuleContext_Ground  &); /* linkage=_ZN21CIKRuleContext_GroundC4ERKS_ */
	void CIKRuleContext_Ground(class CIKRuleContext_Ground *, const class CIKRuleDescription_Ground  *); /* linkage=_ZN21CIKRuleContext_GroundC4EPK25CIKRuleDescription_Ground */
	virtual const class CUtlSymbolLarge  & GetName(const class CIKRuleContext_Ground  *); /* linkage=_ZNK21CIKRuleContext_Ground7GetNameEv */
	virtual void UpdateInterpolationState(const class CIKRuleContext_Ground  *, const class CIKRuleContextUpdateTargetInput  &, class CIKChainRuleInterpolationState *); /* linkage=_ZNK21CIKRuleContext_Ground24UpdateInterpolationStateERK31CIKRuleContextUpdateTargetInputP30CIKChainRuleInterpolationState */
	virtual class CTransform CalculateTargetTransform(const class CIKRuleContext_Ground  *, const class CIKRuleContextCalculateTargetInput  &); /* linkage=_ZNK21CIKRuleContext_Ground24CalculateTargetTransformERK34CIKRuleContextCalculateTargetInput */
	virtual float GetRequestedAbsOriginZ(const class CIKRuleContext_Ground  *, const class CIKChainRuleInterpolationState  &); /* linkage=_ZNK21CIKRuleContext_Ground22GetRequestedAbsOriginZERK30CIKChainRuleInterpolationState */
};

// <01BD51F4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_ground.h:15
void CIKRuleContext_Ground::CIKRuleContext_Ground(const CIKRuleDescription_Ground* pRuleDescription)
{
} /* size: 0 */

// <01BAA41A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_ground.h:23
void CIKRuleContext_Ground::DoesRuleProvideAbsOriginZ()
{
} /* size: 10 */

