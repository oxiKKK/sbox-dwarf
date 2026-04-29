
//
// ik/ikruledescription_followanimation.h
//
//	referenced by: libanimationsystem.so
//
//	function: 1
//	class: 1
//

// <01BD4C6B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikruledescription_followanimation.h:6
// member functions: 14
// member variables: 2
// vtable entries: 3
// class size: 24
class CIKRuleDescription_FollowAnimation : public CIKRuleDescription_Base {
public:
	/* class CIKRuleDescription_Base <ancestor>; */ /* 0 16 */
	void CIKRuleDescription_FollowAnimation(CIKRuleDescription_FollowAnimation* , CIKRuleDescription_FollowAnimation& );
	void CIKRuleDescription_FollowAnimation(CIKRuleDescription_FollowAnimation* , const CIKRuleDescription_FollowAnimation& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikruledescription_followanimation.cpp:8 */
	void CIKRuleDescription_FollowAnimation(CIKRuleDescription_FollowAnimation* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikruledescription_followanimation.cpp:13 */
	virtual void AddAdditionalDependentBoneIndices(const CIKRuleDescription_FollowAnimation* , CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikruledescription_followanimation.cpp:17 */
	virtual IIKRuleContext* CreateRuleContextAndConfigureInterpolation(const CIKRuleDescription_FollowAnimation* , CIKChainRuleInterpolationState& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikruledescription_followanimation.h:14 */
	virtual RuleType GetType(const CIKRuleDescription_FollowAnimation* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikruledescription_followanimation.h:16 */
	void Set(CIKRuleDescription_FollowAnimation* , const CIKRuleData_FollowAnimation& );
private:
	CIKRuleData_FollowAnimation m_Data; /* 16 0 */
	void CIKRuleDescription_FollowAnimation(class CIKRuleDescription_FollowAnimation *, class CIKRuleDescription_FollowAnimation &); /* linkage=_ZN34CIKRuleDescription_FollowAnimationC4EOS_ */
	void CIKRuleDescription_FollowAnimation(class CIKRuleDescription_FollowAnimation *, const class CIKRuleDescription_FollowAnimation  &); /* linkage=_ZN34CIKRuleDescription_FollowAnimationC4ERKS_ */
	void CIKRuleDescription_FollowAnimation(class CIKRuleDescription_FollowAnimation *); /* linkage=_ZN34CIKRuleDescription_FollowAnimationC4Ev */
	virtual void AddAdditionalDependentBoneIndices(const class CIKRuleDescription_FollowAnimation  *, class CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry); /* linkage=_ZNK34CIKRuleDescription_FollowAnimation33AddAdditionalDependentBoneIndicesER13CUtlHashtableIi7empty_t18DefaultHashFunctorIiE19DefaultEqualFunctorIiE11undefined_t10CUtlMemoryI18CUtlHashtableEntryIiS1_EiEE */
	virtual class IIKRuleContext * CreateRuleContextAndConfigureInterpolation(const class CIKRuleDescription_FollowAnimation  *, class CIKChainRuleInterpolationState &); /* linkage=_ZNK34CIKRuleDescription_FollowAnimation42CreateRuleContextAndConfigureInterpolationER30CIKChainRuleInterpolationState */
	virtual enum RuleType GetType(const class CIKRuleDescription_FollowAnimation  *); /* linkage=_ZNK34CIKRuleDescription_FollowAnimation7GetTypeEv */
	void Set(class CIKRuleDescription_FollowAnimation *, const class CIKRuleData_FollowAnimation  &); /* linkage=_ZN34CIKRuleDescription_FollowAnimation3SetERK27CIKRuleData_FollowAnimation */
};

// <01BD882E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikruledescription_followanimation.h:14
void CIKRuleDescription_FollowAnimation::GetType()
{
} /* size: 10 */

