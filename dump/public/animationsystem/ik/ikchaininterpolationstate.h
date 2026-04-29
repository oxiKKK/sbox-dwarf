
//
// public/animationsystem/ik/ikchaininterpolationstate.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//	classes: 2
//

// <03288B84> ../public/animationsystem/ik/ikchaininterpolationstate.h:9
inline void CIKChainInterpolationState::operator=(const CIKChainInterpolationState &)
{
} /* size: 0 */

// <03285E06> ../public/animationsystem/ik/ikchaininterpolationstate.h:9
void CIKChainInterpolationState::~CIKChainInterpolationState()
{
} /* size: 0 */

// <03285DEA> ../public/animationsystem/ik/ikchaininterpolationstate.h:9
inline void CIKChainInterpolationState::~CIKChainInterpolationState()
{
} /* size: 0 */

// <00083C18> ../public/animationsystem/ik/ikchaininterpolationstate.h:9
// member functions: 10
// member variables: 18
// class size: 224
class CIKChainInterpolationState {
	/* ../public/animationsystem/ik/ikchaininterpolationstate.h:12 */
	void CIKChainInterpolationState(CIKChainInterpolationState* );
	/* ../public/animationsystem/ik/ikchaininterpolationstate.h:13 */
	void CopyFrom(CIKChainInterpolationState* , const CIKChainInterpolationState* );
	/* ../public/animationsystem/ik/ikchaininterpolationstate.h:14 */
	void LerpFrom(CIKChainInterpolationState* , const CIKChainInterpolationState* , const CIKChainInterpolationState* , float);
	/* ../public/animationsystem/ik/ikchaininterpolationstate.h:15 */
	bool operator==(const CIKChainInterpolationState* , const CIKChainInterpolationState& );
	IKChainLockState m_LockState; /* 0 4 */
	CTransform m_xWsPreviousSampleLock __attribute__((__aligned__(16))); /* 16 32 */
	CTransform m_xWsLock __attribute__((__aligned__(16))); /* 48 32 */
	float m_flLockValue; /* 80 4 */
	float m_flForcedToUnlockTime; /* 84 4 */
	float m_flLockRotationAlpha; /* 88 4 */
	float m_flBlendAmount; /* 92 4 */
	Vector m_vFinalTargetPositionalError; /* 96 12 */
	Vector m_vFinalTargetPositionalVelocity; /* 108 12 */
	Vector m_vFinalTargetOrientationAxisError; /* 120 12 */
	float m_flFinalTargetOrientationAngleError; /* 132 4 */
	float m_flFinalTargetOrientationAngleErrorVelocity; /* 136 4 */
	CTransform m_xWsEndEffectorTarget __attribute__((__aligned__(16))); /* 144 32 */
	bool m_bLastResultTransformValid; /* 176 1 */
	float m_flLastSoftenTime; /* 180 4 */
	CUtlVector<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> > m_ChainRuleInterpolation; /* 184 32 */
	float m_flMaxHeight; /* 216 4 */
	float m_flMinHeight; /* 220 4 */
	void CIKChainInterpolationState(class CIKChainInterpolationState *); /* linkage=_ZN26CIKChainInterpolationStateC4Ev */
	void CopyFrom(class CIKChainInterpolationState *, const class CIKChainInterpolationState  *); /* linkage=_ZN26CIKChainInterpolationState8CopyFromEPKS_ */
	void LerpFrom(class CIKChainInterpolationState *, const class CIKChainInterpolationState  *, const class CIKChainInterpolationState  *, float); /* linkage=_ZN26CIKChainInterpolationState8LerpFromEPKS_S1_f */
	bool operator==(const class CIKChainInterpolationState  *, const class CIKChainInterpolationState  &); /* linkage=_ZNK26CIKChainInterpolationStateeqERKS_ */
	void ~CIKChainInterpolationState(class CIKChainInterpolationState *); /* linkage=_ZN26CIKChainInterpolationStateD4Ev */
	class CIKChainInterpolationState & operator=(class CIKChainInterpolationState *, const class CIKChainInterpolationState  &); /* linkage=_ZN26CIKChainInterpolationStateaSERKS_ */
} __attribute__((__aligned__(16)));

// <032835F8> ../public/animationsystem/ik/ikchaininterpolationstate.h:9
// member functions: 12
// member variables: 18
// class size: 224
class CIKChainInterpolationState {
	/* ../public/animationsystem/ik/ikchaininterpolationstate.h:12 */
	void CIKChainInterpolationState(CIKChainInterpolationState* );
	/* ../public/animationsystem/ik/ikchaininterpolationstate.h:13 */
	void CopyFrom(CIKChainInterpolationState* , const CIKChainInterpolationState* );
	/* ../public/animationsystem/ik/ikchaininterpolationstate.h:14 */
	void LerpFrom(CIKChainInterpolationState* , const CIKChainInterpolationState* , const CIKChainInterpolationState* , float);
	/* ../public/animationsystem/ik/ikchaininterpolationstate.h:15 */
	bool operator==(const CIKChainInterpolationState* , const CIKChainInterpolationState& );
	IKChainLockState m_LockState; /* 0 4 */
	CTransform m_xWsPreviousSampleLock __attribute__((__aligned__(16))); /* 16 32 */
	CTransform m_xWsLock __attribute__((__aligned__(16))); /* 48 32 */
	float m_flLockValue; /* 80 4 */
	float m_flForcedToUnlockTime; /* 84 4 */
	float m_flLockRotationAlpha; /* 88 4 */
	float m_flBlendAmount; /* 92 4 */
	Vector m_vFinalTargetPositionalError; /* 96 12 */
	Vector m_vFinalTargetPositionalVelocity; /* 108 12 */
	Vector m_vFinalTargetOrientationAxisError; /* 120 12 */
	float m_flFinalTargetOrientationAngleError; /* 132 4 */
	float m_flFinalTargetOrientationAngleErrorVelocity; /* 136 4 */
	CTransform m_xWsEndEffectorTarget __attribute__((__aligned__(16))); /* 144 32 */
	bool m_bLastResultTransformValid; /* 176 1 */
	float m_flLastSoftenTime; /* 180 4 */
	CUtlVector<CIKChainRuleInterpolationState, CUtlMemory<CIKChainRuleInterpolationState, int> > m_ChainRuleInterpolation; /* 184 32 */
	float m_flMaxHeight; /* 216 4 */
	float m_flMinHeight; /* 220 4 */
	void ~CIKChainInterpolationState(CIKChainInterpolationState* );
	CIKChainInterpolationState& operator=(CIKChainInterpolationState* , const CIKChainInterpolationState& );
	void CIKChainInterpolationState(class CIKChainInterpolationState *); /* linkage=_ZN26CIKChainInterpolationStateC4Ev */
	void CopyFrom(class CIKChainInterpolationState *, const class CIKChainInterpolationState  *); /* linkage=_ZN26CIKChainInterpolationState8CopyFromEPKS_ */
	void LerpFrom(class CIKChainInterpolationState *, const class CIKChainInterpolationState  *, const class CIKChainInterpolationState  *, float); /* linkage=_ZN26CIKChainInterpolationState8LerpFromEPKS_S1_f */
	bool operator==(const class CIKChainInterpolationState  *, const class CIKChainInterpolationState  &); /* linkage=_ZNK26CIKChainInterpolationStateeqERKS_ */
	void ~CIKChainInterpolationState(class CIKChainInterpolationState *); /* linkage=_ZN26CIKChainInterpolationStateD4Ev */
	class CIKChainInterpolationState & operator=(class CIKChainInterpolationState *, const class CIKChainInterpolationState  &); /* linkage=_ZN26CIKChainInterpolationStateaSERKS_ */
} __attribute__((__aligned__(16)));

// <03284DDB> ../public/animationsystem/ik/ikchaininterpolationstate.h:12
void CIKChainInterpolationState::CIKChainInterpolationState()
{
} /* size: 0 */

