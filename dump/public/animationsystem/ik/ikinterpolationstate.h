
//
// public/animationsystem/ik/ikinterpolationstate.h
//
//	referenced by: libanimationsystem.so
//
//	class: 1
//

// <000CE4FE> ../public/animationsystem/ik/ikinterpolationstate.h:9
// member functions: 26
// member variables: 10
// class size: 88
class CIKInterpolationState {
	/* ../public/animationsystem/ik/ikinterpolationstate.h:12 */
	void CIKInterpolationState(CIKInterpolationState* );
	/* ../public/animationsystem/ik/ikinterpolationstate.h:13 */
	void ~CIKInterpolationState(CIKInterpolationState* );
	/* ../public/animationsystem/ik/ikinterpolationstate.h:15 */
	CIKInterpolationState& operator=(CIKInterpolationState* , const CIKInterpolationState& );
	/* ../public/animationsystem/ik/ikinterpolationstate.h:17 */
	bool IsIdenticalWithinTolerance(const CIKInterpolationState* , const CIKInterpolationState& );
	/* ../public/animationsystem/ik/ikinterpolationstate.h:18 */
	bool operator==(const CIKInterpolationState* , const CIKInterpolationState& );
	/* ../public/animationsystem/ik/ikinterpolationstate.h:19 */
	CUtlString GetDebugSpeedString(const CIKInterpolationState* , float, float, const CIKInterpolationState* );
	/* ../public/animationsystem/ik/ikinterpolationstate.h:20 */
	CUtlString GetDebugString(const CIKInterpolationState* );
	/* ../public/animationsystem/ik/ikinterpolationstate.h:21 */
	int GetValueFixedWidth(void);
	/* ../public/animationsystem/ik/ikinterpolationstate.h:22 */
	void CopyFrom(CIKInterpolationState* , const CIKInterpolationState* );
	/* ../public/animationsystem/ik/ikinterpolationstate.h:23 */
	void LerpFrom(CIKInterpolationState* , const CIKInterpolationState* , const CIKInterpolationState* , float);
	/* ../public/animationsystem/ik/ikinterpolationstate.h:24 */
	void LerpHermiteFrom(CIKInterpolationState* , const CIKInterpolationState& , float, const CIKInterpolationState& , const CIKInterpolationState& , const CIKInterpolationState& );
	/* ../public/animationsystem/ik/ikinterpolationstate.h:25 */
	void Reset(CIKInterpolationState* );
	/* ../public/animationsystem/ik/ikinterpolationstate.h:26 */
	void Invalidate(CIKInterpolationState* );
	Vector m_vWsTiltNormalSpeed; /* 0 12 */
	Vector m_vWsTiltNormalGoal; /* 12 12 */
	Vector m_vWsTiltNormalActual; /* 24 12 */
	Vector m_vWsTiltNormalFrozen; /* 36 12 */
	Vector m_vWsAverageFootPosition; /* 48 12 */
	bool m_bTiltNormalFrozen; /* 60 1 */
	float m_flLastTime; /* 64 4 */
	int m_nLastFrameCount; /* 68 4 */
	float m_flMasterBlendAmount; /* 72 4 */
	CUtlVector<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> > * m_pChainInterpolationStates; /* 80 8 */
	void CIKInterpolationState(class CIKInterpolationState *); /* linkage=_ZN21CIKInterpolationStateC4Ev */
	void ~CIKInterpolationState(class CIKInterpolationState *); /* linkage=_ZN21CIKInterpolationStateD4Ev */
	class CIKInterpolationState & operator=(class CIKInterpolationState *, const class CIKInterpolationState  &); /* linkage=_ZN21CIKInterpolationStateaSERKS_ */
	bool IsIdenticalWithinTolerance(const class CIKInterpolationState  *, const class CIKInterpolationState  &); /* linkage=_ZNK21CIKInterpolationState26IsIdenticalWithinToleranceERKS_ */
	bool operator==(const class CIKInterpolationState  *, const class CIKInterpolationState  &); /* linkage=_ZNK21CIKInterpolationStateeqERKS_ */
	class CUtlString GetDebugSpeedString(const class CIKInterpolationState  *, float, float, const class CIKInterpolationState  *); /* linkage=_ZNK21CIKInterpolationState19GetDebugSpeedStringEffPKS_ */
	class CUtlString GetDebugString(const class CIKInterpolationState  *); /* linkage=_ZNK21CIKInterpolationState14GetDebugStringEv */
	int GetValueFixedWidth(void); /* linkage=_ZN21CIKInterpolationState18GetValueFixedWidthEv */
	void CopyFrom(class CIKInterpolationState *, const class CIKInterpolationState  *); /* linkage=_ZN21CIKInterpolationState8CopyFromEPKS_ */
	void LerpFrom(class CIKInterpolationState *, const class CIKInterpolationState  *, const class CIKInterpolationState  *, float); /* linkage=_ZN21CIKInterpolationState8LerpFromEPKS_S1_f */
	void LerpHermiteFrom(class CIKInterpolationState *, const class CIKInterpolationState  &, float, const class CIKInterpolationState  &, const class CIKInterpolationState  &, const class CIKInterpolationState  &); /* linkage=_ZN21CIKInterpolationState15LerpHermiteFromERKS_fS1_S1_S1_ */
	/* <328a2b8> ik/ikinterpolationstate.cpp:162 */
	void Reset(class CIKInterpolationState *); /* linkage=_ZN21CIKInterpolationState5ResetEv */
	void Invalidate(class CIKInterpolationState *); /* linkage=_ZN21CIKInterpolationState10InvalidateEv */
};

