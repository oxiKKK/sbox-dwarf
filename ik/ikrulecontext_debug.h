
//
// ik/ikrulecontext_debug.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//	class: 1
//

// <01BA1089> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_debug.h:9
// member functions: 12
// member variables: 4
// vtable entries: 3
// class size: 24
class CIKRuleContext_Debug : public CIKRuleContext_Base {
public:
	/* class CIKRuleContext_Base <ancestor>; */ /* 0 8 */
	void CIKRuleContext_Debug(CIKRuleContext_Debug* , CIKRuleContext_Debug& );
	void CIKRuleContext_Debug(CIKRuleContext_Debug* , const CIKRuleContext_Debug& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_debug.cpp:45 */
	void CIKRuleContext_Debug(CIKRuleContext_Debug* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_debug.h:15 */
	virtual const CUtlSymbolLarge& GetName(const CIKRuleContext_Debug* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_debug.h:17 */
	virtual void UpdateInterpolationState(const CIKRuleContext_Debug* , const CIKRuleContextUpdateTargetInput& , CIKChainRuleInterpolationState* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_debug.cpp:49 */
	virtual CTransform CalculateTargetTransform(const CIKRuleContext_Debug* , const CIKRuleContextCalculateTargetInput& );
private:
	CUtlSymbolLarge m_Name; /* 8 8 */
	bool m_bIsEnabled; /* 16 1 */
	float m_flAnimationToTargetWeight; /* 20 4 */
	void CIKRuleContext_Debug(class CIKRuleContext_Debug *, class CIKRuleContext_Debug &); /* linkage=_ZN20CIKRuleContext_DebugC4EOS_ */
	void CIKRuleContext_Debug(class CIKRuleContext_Debug *, const class CIKRuleContext_Debug  &); /* linkage=_ZN20CIKRuleContext_DebugC4ERKS_ */
	void CIKRuleContext_Debug(class CIKRuleContext_Debug *); /* linkage=_ZN20CIKRuleContext_DebugC4Ev */
	virtual const class CUtlSymbolLarge  & GetName(const class CIKRuleContext_Debug  *); /* linkage=_ZNK20CIKRuleContext_Debug7GetNameEv */
	virtual void UpdateInterpolationState(const class CIKRuleContext_Debug  *, const class CIKRuleContextUpdateTargetInput  &, class CIKChainRuleInterpolationState *); /* linkage=_ZNK20CIKRuleContext_Debug24UpdateInterpolationStateERK31CIKRuleContextUpdateTargetInputP30CIKChainRuleInterpolationState */
	virtual class CTransform CalculateTargetTransform(const class CIKRuleContext_Debug  *, const class CIKRuleContextCalculateTargetInput  &); /* linkage=_ZNK20CIKRuleContext_Debug24CalculateTargetTransformERK34CIKRuleContextCalculateTargetInput */
};

// <01BD5347> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_debug.h:12
void CIKRuleContext_Debug::CIKRuleContext_Debug()
{
} /* size: 0 */

// <01BB12F5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_debug.h:15
void CIKRuleContext_Debug::GetName()
{
} /* size: 9 */

// <01BB12A8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_debug.h:17
void CIKRuleContext_Debug::UpdateInterpolationState(const CIKRuleContextUpdateTargetInput& ruleInput, CIKChainRuleInterpolationState* pInterpolationState)
{
} /* size: 5 */

