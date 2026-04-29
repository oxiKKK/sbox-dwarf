
//
// ik/ikrulecontext_base.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 5
//	class: 1
//

// <01BA0885> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_base.h:7
// member functions: 14
// member variable: 1
// vtable entries: 3
// class size: 8
class CIKRuleContext_Base : public IIKRuleContext {
public:
	/* class IIKRuleContext <ancestor>; */ /* 0 8 */
	void ~CIKRuleContext_Base(CIKRuleContext_Base* );
	void CIKRuleContext_Base(CIKRuleContext_Base* , CIKRuleContext_Base& );
	void CIKRuleContext_Base(CIKRuleContext_Base* , const CIKRuleContext_Base& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_base.cpp:6 */
	void CIKRuleContext_Base(CIKRuleContext_Base* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_base.h:12 */
	virtual bool DoesRuleProvideAbsOriginZ(const CIKRuleContext_Base* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_base.h:13 */
	virtual float GetRequestedAbsOriginZ(const CIKRuleContext_Base* , const CIKChainRuleInterpolationState& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_base.h:20 */
	virtual void UpdateInterpolationState(const CIKRuleContext_Base* , const CIKRuleContextUpdateTargetInput& , CIKChainRuleInterpolationState* );
	virtual void UpdateInterpolationState(const class CIKRuleContext_Base  *, const class CIKRuleContextUpdateTargetInput  &, class CIKChainRuleInterpolationState *); /* linkage=_ZNK19CIKRuleContext_Base24UpdateInterpolationStateERK31CIKRuleContextUpdateTargetInputP30CIKChainRuleInterpolationState */
	/* <1bb390b> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_base.h:13 */
	virtual float GetRequestedAbsOriginZ(const class CIKRuleContext_Base  *, const class CIKChainRuleInterpolationState  &); /* linkage=_ZNK19CIKRuleContext_Base22GetRequestedAbsOriginZERK30CIKChainRuleInterpolationState */
	virtual bool DoesRuleProvideAbsOriginZ(const class CIKRuleContext_Base  *); /* linkage=_ZNK19CIKRuleContext_Base25DoesRuleProvideAbsOriginZEv */
	void ~CIKRuleContext_Base(class CIKRuleContext_Base *); /* linkage=_ZN19CIKRuleContext_BaseD4Ev */
	void CIKRuleContext_Base(class CIKRuleContext_Base *, class CIKRuleContext_Base &); /* linkage=_ZN19CIKRuleContext_BaseC4EOS_ */
	void CIKRuleContext_Base(class CIKRuleContext_Base *, const class CIKRuleContext_Base  &); /* linkage=_ZN19CIKRuleContext_BaseC4ERKS_ */
	void CIKRuleContext_Base(class CIKRuleContext_Base *); /* linkage=_ZN19CIKRuleContext_BaseC4Ev */
};

// <01BB2335> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_base.h:12
void CIKRuleContext_Base::DoesRuleProvideAbsOriginZ()
{
} /* size: 7 */

// <01BB390B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_base.h:13
// function call: 1
void CIKRuleContext_Base::GetRequestedAbsOriginZ(const CIKChainRuleInterpolationState& interpolationState)
{
	{
	}
	{
	}
	CIKRuleContext_Base::GetRequestedAbsOriginZ(
				const CIKChainRuleInterpolationState& interpolationState);  // 13
} /* size: 76, inline expansions: 1 (26 bytes) */

// <01BB229B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_base.h:13
// variables: 3
inline void CIKRuleContext_Base::GetRequestedAbsOriginZ(const CIKChainRuleInterpolationState& interpolationState)
{
	const char   __FUNCTION__; // 18938
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 15
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 16
	}
} /* size: 0, variables: 1 */

// <00093000> ik/ikrulecontext_base.h:13
// variables: 3
void CIKRuleContext_Base::GetRequestedAbsOriginZ(const CIKChainRuleInterpolationState& interpolationState)
{
	const char   __FUNCTION__; // 48675
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 15
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 16
	}
} /* size: 0, variables: 1 */

// <01BB224E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_base.h:20
void CIKRuleContext_Base::UpdateInterpolationState(const CIKRuleContextUpdateTargetInput& ruleInput, CIKChainRuleInterpolationState* pInterpolationState)
{
} /* size: 0 */

