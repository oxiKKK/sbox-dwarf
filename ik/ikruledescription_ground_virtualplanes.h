
//
// ik/ikruledescription_ground_virtualplanes.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//	class: 1
//

// <01BD479E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikruledescription_ground_virtualplanes.h:6
// member functions: 24
// member variables: 2
// vtable entries: 3
// class size: 56
class CIKRuleDescription_Ground_VirtualPlanes : public CIKRuleDescription_Base {
public:
	/* class CIKRuleDescription_Base <ancestor>; */ /* 0 16 */
	void CIKRuleDescription_Ground_VirtualPlanes(CIKRuleDescription_Ground_VirtualPlanes* , CIKRuleDescription_Ground_VirtualPlanes& );
	void CIKRuleDescription_Ground_VirtualPlanes(CIKRuleDescription_Ground_VirtualPlanes* , const CIKRuleDescription_Ground_VirtualPlanes& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikruledescription_ground_virtualplanes.cpp:8 */
	void CIKRuleDescription_Ground_VirtualPlanes(CIKRuleDescription_Ground_VirtualPlanes* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikruledescription_ground_virtualplanes.cpp:13 */
	virtual void AddAdditionalDependentBoneIndices(const CIKRuleDescription_Ground_VirtualPlanes* , CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikruledescription_ground_virtualplanes.cpp:21 */
	virtual IIKRuleContext* CreateRuleContextAndConfigureInterpolation(const CIKRuleDescription_Ground_VirtualPlanes* , CIKChainRuleInterpolationState& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikruledescription_ground_virtualplanes.h:14 */
	virtual RuleType GetType(const CIKRuleDescription_Ground_VirtualPlanes* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikruledescription_ground_virtualplanes.h:17 */
	float GetHeight(const CIKRuleDescription_Ground_VirtualPlanes* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikruledescription_ground_virtualplanes.h:19 */
	float GetTraceRadius(const CIKRuleDescription_Ground_VirtualPlanes* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikruledescription_ground_virtualplanes.h:21 */
	int GetLockBoneInfluenceDriverIndex(const CIKRuleDescription_Ground_VirtualPlanes* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikruledescription_ground_virtualplanes.h:23 */
	float GetZSpringStiffness(const CIKRuleDescription_Ground_VirtualPlanes* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikruledescription_ground_virtualplanes.h:25 */
	float GetNormalSpringStiffness(const CIKRuleDescription_Ground_VirtualPlanes* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikruledescription_ground_virtualplanes.h:27 */
	void Set(CIKRuleDescription_Ground_VirtualPlanes* , const CIKRuleData_Ground_VirtualPlanes& );
private:
	CIKRuleData_Ground_VirtualPlanes m_Data; /* 16 0 */
	float GetTraceRadius(const class CIKRuleDescription_Ground_VirtualPlanes  *); /* linkage=_ZNK39CIKRuleDescription_Ground_VirtualPlanes14GetTraceRadiusEv */
	float GetHeight(const class CIKRuleDescription_Ground_VirtualPlanes  *); /* linkage=_ZNK39CIKRuleDescription_Ground_VirtualPlanes9GetHeightEv */
	void CIKRuleDescription_Ground_VirtualPlanes(class CIKRuleDescription_Ground_VirtualPlanes *, class CIKRuleDescription_Ground_VirtualPlanes &); /* linkage=_ZN39CIKRuleDescription_Ground_VirtualPlanesC4EOS_ */
	void CIKRuleDescription_Ground_VirtualPlanes(class CIKRuleDescription_Ground_VirtualPlanes *, const class CIKRuleDescription_Ground_VirtualPlanes  &); /* linkage=_ZN39CIKRuleDescription_Ground_VirtualPlanesC4ERKS_ */
	void CIKRuleDescription_Ground_VirtualPlanes(class CIKRuleDescription_Ground_VirtualPlanes *); /* linkage=_ZN39CIKRuleDescription_Ground_VirtualPlanesC4Ev */
	virtual void AddAdditionalDependentBoneIndices(const class CIKRuleDescription_Ground_VirtualPlanes  *, class CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry); /* linkage=_ZNK39CIKRuleDescription_Ground_VirtualPlanes33AddAdditionalDependentBoneIndicesER13CUtlHashtableIi7empty_t18DefaultHashFunctorIiE19DefaultEqualFunctorIiE11undefined_t10CUtlMemoryI18CUtlHashtableEntryIiS1_EiEE */
	virtual class IIKRuleContext * CreateRuleContextAndConfigureInterpolation(const class CIKRuleDescription_Ground_VirtualPlanes  *, class CIKChainRuleInterpolationState &); /* linkage=_ZNK39CIKRuleDescription_Ground_VirtualPlanes42CreateRuleContextAndConfigureInterpolationER30CIKChainRuleInterpolationState */
	virtual enum RuleType GetType(const class CIKRuleDescription_Ground_VirtualPlanes  *); /* linkage=_ZNK39CIKRuleDescription_Ground_VirtualPlanes7GetTypeEv */
	int GetLockBoneInfluenceDriverIndex(const class CIKRuleDescription_Ground_VirtualPlanes  *); /* linkage=_ZNK39CIKRuleDescription_Ground_VirtualPlanes31GetLockBoneInfluenceDriverIndexEv */
	float GetZSpringStiffness(const class CIKRuleDescription_Ground_VirtualPlanes  *); /* linkage=_ZNK39CIKRuleDescription_Ground_VirtualPlanes19GetZSpringStiffnessEv */
	float GetNormalSpringStiffness(const class CIKRuleDescription_Ground_VirtualPlanes  *); /* linkage=_ZNK39CIKRuleDescription_Ground_VirtualPlanes24GetNormalSpringStiffnessEv */
	void Set(class CIKRuleDescription_Ground_VirtualPlanes *, const class CIKRuleData_Ground_VirtualPlanes  &); /* linkage=_ZN39CIKRuleDescription_Ground_VirtualPlanes3SetERK32CIKRuleData_Ground_VirtualPlanes */
};

// <01BD87A0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikruledescription_ground_virtualplanes.h:14
void CIKRuleDescription_Ground_VirtualPlanes::GetType()
{
} /* size: 10 */

// <01B4EB35> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikruledescription_ground_virtualplanes.h:17
inline void CIKRuleDescription_Ground_VirtualPlanes::GetHeight()
{
} /* size: 0 */

// <01B4EB1C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikruledescription_ground_virtualplanes.h:19
inline void CIKRuleDescription_Ground_VirtualPlanes::GetTraceRadius()
{
} /* size: 0 */

