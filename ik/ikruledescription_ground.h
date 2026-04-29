
//
// ik/ikruledescription_ground.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//	class: 1
//

// <01BD4AB0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikruledescription_ground.h:6
// member functions: 20
// member variables: 2
// vtable entries: 3
// class size: 48
class CIKRuleDescription_Ground : public CIKRuleDescription_Base {
public:
	/* class CIKRuleDescription_Base <ancestor>; */ /* 0 16 */
	void CIKRuleDescription_Ground(CIKRuleDescription_Ground* , CIKRuleDescription_Ground& );
	void CIKRuleDescription_Ground(CIKRuleDescription_Ground* , const CIKRuleDescription_Ground& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikruledescription_ground.cpp:9 */
	void CIKRuleDescription_Ground(CIKRuleDescription_Ground* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikruledescription_ground.cpp:14 */
	virtual void AddAdditionalDependentBoneIndices(const CIKRuleDescription_Ground* , CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikruledescription_ground.cpp:22 */
	virtual IIKRuleContext* CreateRuleContextAndConfigureInterpolation(const CIKRuleDescription_Ground* , CIKChainRuleInterpolationState& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikruledescription_ground.h:14 */
	virtual RuleType GetType(const CIKRuleDescription_Ground* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikruledescription_ground.h:17 */
	float GetHeight(const CIKRuleDescription_Ground* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikruledescription_ground.h:19 */
	float GetTraceRadius(const CIKRuleDescription_Ground* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikruledescription_ground.h:21 */
	int GetLockBoneInfluenceDriverIndex(const CIKRuleDescription_Ground* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikruledescription_ground.h:23 */
	void Set(CIKRuleDescription_Ground* , const CIKRuleData_Ground& );
private:
	CIKRuleData_Ground m_Data; /* 16 0 */
	float GetTraceRadius(const class CIKRuleDescription_Ground  *); /* linkage=_ZNK25CIKRuleDescription_Ground14GetTraceRadiusEv */
	float GetHeight(const class CIKRuleDescription_Ground  *); /* linkage=_ZNK25CIKRuleDescription_Ground9GetHeightEv */
	void CIKRuleDescription_Ground(class CIKRuleDescription_Ground *, class CIKRuleDescription_Ground &); /* linkage=_ZN25CIKRuleDescription_GroundC4EOS_ */
	void CIKRuleDescription_Ground(class CIKRuleDescription_Ground *, const class CIKRuleDescription_Ground  &); /* linkage=_ZN25CIKRuleDescription_GroundC4ERKS_ */
	void CIKRuleDescription_Ground(class CIKRuleDescription_Ground *); /* linkage=_ZN25CIKRuleDescription_GroundC4Ev */
	virtual void AddAdditionalDependentBoneIndices(const class CIKRuleDescription_Ground  *, class CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry); /* linkage=_ZNK25CIKRuleDescription_Ground33AddAdditionalDependentBoneIndicesER13CUtlHashtableIi7empty_t18DefaultHashFunctorIiE19DefaultEqualFunctorIiE11undefined_t10CUtlMemoryI18CUtlHashtableEntryIiS1_EiEE */
	virtual class IIKRuleContext * CreateRuleContextAndConfigureInterpolation(const class CIKRuleDescription_Ground  *, class CIKChainRuleInterpolationState &); /* linkage=_ZNK25CIKRuleDescription_Ground42CreateRuleContextAndConfigureInterpolationER30CIKChainRuleInterpolationState */
	virtual enum RuleType GetType(const class CIKRuleDescription_Ground  *); /* linkage=_ZNK25CIKRuleDescription_Ground7GetTypeEv */
	int GetLockBoneInfluenceDriverIndex(const class CIKRuleDescription_Ground  *); /* linkage=_ZNK25CIKRuleDescription_Ground31GetLockBoneInfluenceDriverIndexEv */
	void Set(class CIKRuleDescription_Ground *, const class CIKRuleData_Ground  &); /* linkage=_ZN25CIKRuleDescription_Ground3SetERK18CIKRuleData_Ground */
};

// <01BD8476> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikruledescription_ground.h:14
void CIKRuleDescription_Ground::GetType()
{
} /* size: 7 */

// <01BAA462> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikruledescription_ground.h:17
inline void CIKRuleDescription_Ground::GetHeight()
{
} /* size: 0 */

// <01BAA449> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikruledescription_ground.h:19
inline void CIKRuleDescription_Ground::GetTraceRadius()
{
} /* size: 0 */

