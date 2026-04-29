
//
// ik/ikrulecontext_followanimation.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//	class: 1
//

// <01BA0F3E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_followanimation.h:11
// member functions: 12
// member variables: 2
// vtable entries: 3
// class size: 16
class CIKRuleContext_FollowAnimation : public CIKRuleContext_Base {
public:
	/* class CIKRuleContext_Base <ancestor>; */ /* 0 8 */
	void CIKRuleContext_FollowAnimation(CIKRuleContext_FollowAnimation* , CIKRuleContext_FollowAnimation& );
	void CIKRuleContext_FollowAnimation(CIKRuleContext_FollowAnimation* , const CIKRuleContext_FollowAnimation& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_followanimation.cpp:6 */
	void CIKRuleContext_FollowAnimation(CIKRuleContext_FollowAnimation* , const CIKRuleDescription_FollowAnimation* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_followanimation.cpp:11 */
	virtual const CUtlSymbolLarge& GetName(const CIKRuleContext_FollowAnimation* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_followanimation.h:19 */
	virtual void UpdateInterpolationState(const CIKRuleContext_FollowAnimation* , const CIKRuleContextUpdateTargetInput& , CIKChainRuleInterpolationState* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_followanimation.cpp:16 */
	virtual CTransform CalculateTargetTransform(const CIKRuleContext_FollowAnimation* , const CIKRuleContextCalculateTargetInput& );
private:
	const class CIKRuleDescription_FollowAnimation * m_pRuleDescription; /* 8 8 */
	void CIKRuleContext_FollowAnimation(class CIKRuleContext_FollowAnimation *, class CIKRuleContext_FollowAnimation &); /* linkage=_ZN30CIKRuleContext_FollowAnimationC4EOS_ */
	void CIKRuleContext_FollowAnimation(class CIKRuleContext_FollowAnimation *, const class CIKRuleContext_FollowAnimation  &); /* linkage=_ZN30CIKRuleContext_FollowAnimationC4ERKS_ */
	void CIKRuleContext_FollowAnimation(class CIKRuleContext_FollowAnimation *, const class CIKRuleDescription_FollowAnimation  *); /* linkage=_ZN30CIKRuleContext_FollowAnimationC4EPK34CIKRuleDescription_FollowAnimation */
	virtual const class CUtlSymbolLarge  & GetName(const class CIKRuleContext_FollowAnimation  *); /* linkage=_ZNK30CIKRuleContext_FollowAnimation7GetNameEv */
	virtual void UpdateInterpolationState(const class CIKRuleContext_FollowAnimation  *, const class CIKRuleContextUpdateTargetInput  &, class CIKChainRuleInterpolationState *); /* linkage=_ZNK30CIKRuleContext_FollowAnimation24UpdateInterpolationStateERK31CIKRuleContextUpdateTargetInputP30CIKChainRuleInterpolationState */
	virtual class CTransform CalculateTargetTransform(const class CIKRuleContext_FollowAnimation  *, const class CIKRuleContextCalculateTargetInput  &); /* linkage=_ZNK30CIKRuleContext_FollowAnimation24CalculateTargetTransformERK34CIKRuleContextCalculateTargetInput */
};

// <01BD52C8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_followanimation.h:14
void CIKRuleContext_FollowAnimation::CIKRuleContext_FollowAnimation(const CIKRuleDescription_FollowAnimation* pRuleDescription)
{
} /* size: 0 */

// <01BAE20D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_followanimation.h:19
void CIKRuleContext_FollowAnimation::UpdateInterpolationState(const CIKRuleContextUpdateTargetInput& ruleInput, CIKChainRuleInterpolationState* pInterpolationState)
{
} /* size: 5 */

