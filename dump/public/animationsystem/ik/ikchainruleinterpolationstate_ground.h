
//
// public/animationsystem/ik/ikchainruleinterpolationstate_ground.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//	classes: 2
//

// <032A0BC7> ../public/animationsystem/ik/ikchainruleinterpolationstate_ground.h:8
inline void CIKChainRuleInterpolationState_Ground::operator=(const CIKChainRuleInterpolationState_Ground &)
{
} /* size: 0 */

// <0007DD28> ../public/animationsystem/ik/ikchainruleinterpolationstate_ground.h:8
// member functions: 8
// member variables: 3
// class size: 84
class CIKChainRuleInterpolationState_Ground {
	/* ../public/animationsystem/ik/ikchainruleinterpolationstate_ground.h:11 */
	void CIKChainRuleInterpolationState_Ground(CIKChainRuleInterpolationState_Ground* );
	/* ../public/animationsystem/ik/ikchainruleinterpolationstate_ground.h:12 */
	void CopyFrom(CIKChainRuleInterpolationState_Ground* , const CIKChainRuleInterpolationState_Ground* );
	/* ../public/animationsystem/ik/ikchainruleinterpolationstate_ground.h:13 */
	void LerpFrom(CIKChainRuleInterpolationState_Ground* , const CIKChainRuleInterpolationState_Ground* , const CIKChainRuleInterpolationState_Ground* , float);
	/* ../public/animationsystem/ik/ikchainruleinterpolationstate_ground.h:14 */
	bool operator==(const CIKChainRuleInterpolationState_Ground* , const CIKChainRuleInterpolationState_Ground& );
	CriticallyDampedFloat m_CollisionZSpring; /* 0 24 */
	CriticallyDampedNormal m_CollisionNormalSpring; /* 24 56 */
	float m_flLastUpdate; /* 80 4 */
	void CIKChainRuleInterpolationState_Ground(class CIKChainRuleInterpolationState_Ground *); /* linkage=_ZN37CIKChainRuleInterpolationState_GroundC4Ev */
	void CopyFrom(class CIKChainRuleInterpolationState_Ground *, const class CIKChainRuleInterpolationState_Ground  *); /* linkage=_ZN37CIKChainRuleInterpolationState_Ground8CopyFromEPKS_ */
	void LerpFrom(class CIKChainRuleInterpolationState_Ground *, const class CIKChainRuleInterpolationState_Ground  *, const class CIKChainRuleInterpolationState_Ground  *, float); /* linkage=_ZN37CIKChainRuleInterpolationState_Ground8LerpFromEPKS_S1_f */
	bool operator==(const class CIKChainRuleInterpolationState_Ground  *, const class CIKChainRuleInterpolationState_Ground  &); /* linkage=_ZNK37CIKChainRuleInterpolationState_GroundeqERKS_ */
};

// <032A0015> ../public/animationsystem/ik/ikchainruleinterpolationstate_ground.h:8
// member functions: 9
// member variables: 3
// class size: 84
class CIKChainRuleInterpolationState_Ground {
	/* ../public/animationsystem/ik/ikchainruleinterpolationstate_ground.h:11 */
	void CIKChainRuleInterpolationState_Ground(CIKChainRuleInterpolationState_Ground* );
	/* ../public/animationsystem/ik/ikchainruleinterpolationstate_ground.h:12 */
	void CopyFrom(CIKChainRuleInterpolationState_Ground* , const CIKChainRuleInterpolationState_Ground* );
	/* ../public/animationsystem/ik/ikchainruleinterpolationstate_ground.h:13 */
	void LerpFrom(CIKChainRuleInterpolationState_Ground* , const CIKChainRuleInterpolationState_Ground* , const CIKChainRuleInterpolationState_Ground* , float);
	/* ../public/animationsystem/ik/ikchainruleinterpolationstate_ground.h:14 */
	bool operator==(const CIKChainRuleInterpolationState_Ground* , const CIKChainRuleInterpolationState_Ground& );
	CriticallyDampedFloat m_CollisionZSpring; /* 0 24 */
	CriticallyDampedNormal m_CollisionNormalSpring; /* 24 56 */
	float m_flLastUpdate; /* 80 4 */
	CIKChainRuleInterpolationState_Ground& operator=(CIKChainRuleInterpolationState_Ground* , const CIKChainRuleInterpolationState_Ground& );
	void CIKChainRuleInterpolationState_Ground(class CIKChainRuleInterpolationState_Ground *); /* linkage=_ZN37CIKChainRuleInterpolationState_GroundC4Ev */
	void CopyFrom(class CIKChainRuleInterpolationState_Ground *, const class CIKChainRuleInterpolationState_Ground  *); /* linkage=_ZN37CIKChainRuleInterpolationState_Ground8CopyFromEPKS_ */
	void LerpFrom(class CIKChainRuleInterpolationState_Ground *, const class CIKChainRuleInterpolationState_Ground  *, const class CIKChainRuleInterpolationState_Ground  *, float); /* linkage=_ZN37CIKChainRuleInterpolationState_Ground8LerpFromEPKS_S1_f */
	bool operator==(const class CIKChainRuleInterpolationState_Ground  *, const class CIKChainRuleInterpolationState_Ground  &); /* linkage=_ZNK37CIKChainRuleInterpolationState_GroundeqERKS_ */
};

// <032A0331> ../public/animationsystem/ik/ikchainruleinterpolationstate_ground.h:11
void CIKChainRuleInterpolationState_Ground::CIKChainRuleInterpolationState_Ground()
{
} /* size: 0 */

