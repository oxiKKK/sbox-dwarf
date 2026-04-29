
//
// public/animationsystem/ik/ikchainruleinterpolationstate.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//	class: 1
//

// <00077F74> ../public/animationsystem/ik/ikchainruleinterpolationstate.h:10
// member functions: 16
// member variables: 2
// class size: 88
class CIKChainRuleInterpolationState {
	/* ../public/animationsystem/ik/ikchainruleinterpolationstate.h:26 */
	union RuleUnion {
		CIKChainRuleInterpolationState_Ground m_Ground; /* 0 84 */
	};
	/* ../public/animationsystem/ik/ikchainruleinterpolationstate.h:13 */
	void CIKChainRuleInterpolationState(CIKChainRuleInterpolationState* );
	/* ../public/animationsystem/ik/ikchainruleinterpolationstate.h:14 */
	void ~CIKChainRuleInterpolationState(CIKChainRuleInterpolationState* );
	/* ../public/animationsystem/ik/ikchainruleinterpolationstate.h:15 */
	CIKChainRuleInterpolationState& operator=(CIKChainRuleInterpolationState* , const CIKChainRuleInterpolationState& );
	/* ../public/animationsystem/ik/ikchainruleinterpolationstate.h:17 */
	void LerpFrom(CIKChainRuleInterpolationState* , const CIKChainRuleInterpolationState* , const CIKChainRuleInterpolationState* , float);
	/* ../public/animationsystem/ik/ikchainruleinterpolationstate.h:18 */
	bool operator==(const CIKChainRuleInterpolationState* , const CIKChainRuleInterpolationState& );
	/* ../public/animationsystem/ik/ikchainruleinterpolationstate.h:20 */
	void Init(CIKChainRuleInterpolationState* , IKChainRuleInterpolationStateType);
	/* ../public/animationsystem/ik/ikchainruleinterpolationstate.h:22 */
	const CIKChainRuleInterpolationState_Ground* GetAsGround(const CIKChainRuleInterpolationState* );
	/* ../public/animationsystem/ik/ikchainruleinterpolationstate.h:23 */
	CIKChainRuleInterpolationState_Ground* GetAsGround(CIKChainRuleInterpolationState* );
private:
	union RuleUnion m_RuleUnion; /* 0 84 */
	IKChainRuleInterpolationStateType m_Type; /* 84 4 */
	void CIKChainRuleInterpolationState(class CIKChainRuleInterpolationState *); /* linkage=_ZN30CIKChainRuleInterpolationStateC4Ev */
	void ~CIKChainRuleInterpolationState(class CIKChainRuleInterpolationState *); /* linkage=_ZN30CIKChainRuleInterpolationStateD4Ev */
	class CIKChainRuleInterpolationState & operator=(class CIKChainRuleInterpolationState *, const class CIKChainRuleInterpolationState  &); /* linkage=_ZN30CIKChainRuleInterpolationStateaSERKS_ */
	void LerpFrom(class CIKChainRuleInterpolationState *, const class CIKChainRuleInterpolationState  *, const class CIKChainRuleInterpolationState  *, float); /* linkage=_ZN30CIKChainRuleInterpolationState8LerpFromEPKS_S1_f */
	bool operator==(const class CIKChainRuleInterpolationState  *, const class CIKChainRuleInterpolationState  &); /* linkage=_ZNK30CIKChainRuleInterpolationStateeqERKS_ */
	void Init(class CIKChainRuleInterpolationState *, enum IKChainRuleInterpolationStateType); /* linkage=_ZN30CIKChainRuleInterpolationState4InitE33IKChainRuleInterpolationStateType */
	const class CIKChainRuleInterpolationState_Ground  * GetAsGround(const class CIKChainRuleInterpolationState  *); /* linkage=_ZNK30CIKChainRuleInterpolationState11GetAsGroundEv */
	class CIKChainRuleInterpolationState_Ground * GetAsGround(class CIKChainRuleInterpolationState *); /* linkage=_ZN30CIKChainRuleInterpolationState11GetAsGroundEv */
};

// <03297E25> ../public/animationsystem/ik/ikchainruleinterpolationstate.h:13
void CIKChainRuleInterpolationState::CIKChainRuleInterpolationState()
{
} /* size: 0 */

// <03297E09> ../public/animationsystem/ik/ikchainruleinterpolationstate.h:14
void CIKChainRuleInterpolationState::~CIKChainRuleInterpolationState()
{
} /* size: 0 */

