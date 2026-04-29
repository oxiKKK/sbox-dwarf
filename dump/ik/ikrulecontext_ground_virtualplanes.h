
//
// ik/ikrulecontext_ground_virtualplanes.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//	class: 1
//

// <01BA0716> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_ground_virtualplanes.h:14
// member functions: 16
// member variables: 2
// vtable entries: 5
// class size: 16
class CIKRuleContext_Ground_VirtualPlanes : public CIKRuleContext_Base {
public:
	/* class CIKRuleContext_Base <ancestor>; */ /* 0 8 */
	void CIKRuleContext_Ground_VirtualPlanes(CIKRuleContext_Ground_VirtualPlanes* , CIKRuleContext_Ground_VirtualPlanes& );
	void CIKRuleContext_Ground_VirtualPlanes(CIKRuleContext_Ground_VirtualPlanes* , const CIKRuleContext_Ground_VirtualPlanes& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_ground_virtualplanes.cpp:19 */
	void CIKRuleContext_Ground_VirtualPlanes(CIKRuleContext_Ground_VirtualPlanes* , const CIKRuleDescription_Ground_VirtualPlanes* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_ground_virtualplanes.cpp:24 */
	virtual const CUtlSymbolLarge& GetName(const CIKRuleContext_Ground_VirtualPlanes* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_ground_virtualplanes.cpp:29 */
	virtual void UpdateInterpolationState(const CIKRuleContext_Ground_VirtualPlanes* , const CIKRuleContextUpdateTargetInput& , CIKChainRuleInterpolationState* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_ground_virtualplanes.cpp:52 */
	virtual CTransform CalculateTargetTransform(const CIKRuleContext_Ground_VirtualPlanes* , const CIKRuleContextCalculateTargetInput& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_ground_virtualplanes.h:25 */
	virtual bool DoesRuleProvideAbsOriginZ(const CIKRuleContext_Ground_VirtualPlanes* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_ground_virtualplanes.cpp:75 */
	virtual float GetRequestedAbsOriginZ(const CIKRuleContext_Ground_VirtualPlanes* , const CIKChainRuleInterpolationState& );
private:
	const class CIKRuleDescription_Ground_VirtualPlanes * m_pRuleDescription; /* 8 8 */
	void CIKRuleContext_Ground_VirtualPlanes(class CIKRuleContext_Ground_VirtualPlanes *, class CIKRuleContext_Ground_VirtualPlanes &); /* linkage=_ZN35CIKRuleContext_Ground_VirtualPlanesC4EOS_ */
	void CIKRuleContext_Ground_VirtualPlanes(class CIKRuleContext_Ground_VirtualPlanes *, const class CIKRuleContext_Ground_VirtualPlanes  &); /* linkage=_ZN35CIKRuleContext_Ground_VirtualPlanesC4ERKS_ */
	void CIKRuleContext_Ground_VirtualPlanes(class CIKRuleContext_Ground_VirtualPlanes *, const class CIKRuleDescription_Ground_VirtualPlanes  *); /* linkage=_ZN35CIKRuleContext_Ground_VirtualPlanesC4EPK39CIKRuleDescription_Ground_VirtualPlanes */
	virtual const class CUtlSymbolLarge  & GetName(const class CIKRuleContext_Ground_VirtualPlanes  *); /* linkage=_ZNK35CIKRuleContext_Ground_VirtualPlanes7GetNameEv */
	virtual void UpdateInterpolationState(const class CIKRuleContext_Ground_VirtualPlanes  *, const class CIKRuleContextUpdateTargetInput  &, class CIKChainRuleInterpolationState *); /* linkage=_ZNK35CIKRuleContext_Ground_VirtualPlanes24UpdateInterpolationStateERK31CIKRuleContextUpdateTargetInputP30CIKChainRuleInterpolationState */
	virtual class CTransform CalculateTargetTransform(const class CIKRuleContext_Ground_VirtualPlanes  *, const class CIKRuleContextCalculateTargetInput  &); /* linkage=_ZNK35CIKRuleContext_Ground_VirtualPlanes24CalculateTargetTransformERK34CIKRuleContextCalculateTargetInput */
	virtual bool DoesRuleProvideAbsOriginZ(const class CIKRuleContext_Ground_VirtualPlanes  *); /* linkage=_ZNK35CIKRuleContext_Ground_VirtualPlanes25DoesRuleProvideAbsOriginZEv */
	virtual float GetRequestedAbsOriginZ(const class CIKRuleContext_Ground_VirtualPlanes  *, const class CIKChainRuleInterpolationState  &); /* linkage=_ZNK35CIKRuleContext_Ground_VirtualPlanes22GetRequestedAbsOriginZERK30CIKChainRuleInterpolationState */
};

// <01BD5196> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_ground_virtualplanes.h:17
void CIKRuleContext_Ground_VirtualPlanes::CIKRuleContext_Ground_VirtualPlanes(const CIKRuleDescription_Ground_VirtualPlanes* pRuleDescription)
{
} /* size: 0 */

// <01BA69D1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/ikrulecontext_ground_virtualplanes.h:25
void CIKRuleContext_Ground_VirtualPlanes::DoesRuleProvideAbsOriginZ()
{
} /* size: 10 */

