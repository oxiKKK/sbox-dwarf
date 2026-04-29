
//
// public/animationsystem/ik/ikupdateinputstate.h
//
//	referenced by: libanimationsystem.so
//
//	function: 1
//	class: 1
//

// <00074170> ../public/animationsystem/ik/ikupdateinputstate.h:13
// member functions: 6
// member variables: 10
// class size: 48
class CIKUpdateInputState {
	const enum InterpolatedVarPhase_t m_CurrentPhase; /* 0 4 */
	const uint32 m_nReadableChainsBitVector; /* 4 4 */
	const bool m_bShouldRenderDebugDraws; /* 8 1 */
	const float m_flScale; /* 12 4 */
	const float m_flCurrentTime; /* 16 4 */
	const float m_flRenderTime; /* 20 4 */
	const int m_nFrameCount; /* 24 4 */
	const bool m_bAmInMutableInterpolationState; /* 28 1 */
	const int m_nTickCount; /* 32 4 */
	const class CModel * m_pModel; /* 40 8 */
	/* ../public/animationsystem/ik/ikupdateinputstate.h:44 */
	void CIKUpdateInputState(CIKUpdateInputState* , InterpolatedVarPhase_t, uint32, bool, float, float, float, int, bool, int, const CModel* );
	/* ../public/animationsystem/ik/ikupdateinputstate.h:68 */
	void ~CIKUpdateInputState(CIKUpdateInputState* );
	/* ../public/animationsystem/ik/ikupdateinputstate.h:73 */
	bool AreChainsBonesReadable(const CIKUpdateInputState* , int);
	void CIKUpdateInputState(class CIKUpdateInputState *, enum InterpolatedVarPhase_t, uint32, bool, float, float, float, int, bool, int, const class CModel  *); /* linkage=_ZN19CIKUpdateInputStateC4E22InterpolatedVarPhase_tjbfffibiPK6CModel */
	void ~CIKUpdateInputState(class CIKUpdateInputState *); /* linkage=_ZN19CIKUpdateInputStateD4Ev */
	bool AreChainsBonesReadable(const class CIKUpdateInputState  *, int); /* linkage=_ZNK19CIKUpdateInputState22AreChainsBonesReadableEi */
};

// <0014D8AA> ../public/animationsystem/ik/ikupdateinputstate.h:73
inline void CIKUpdateInputState::AreChainsBonesReadable(int nIKChainIndex)
{
} /* size: 0 */

