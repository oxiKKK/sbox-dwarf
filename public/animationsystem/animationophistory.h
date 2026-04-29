
//
// public/animationsystem/animationophistory.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 2
//	classes: 2
//

// <049953AF> ../public/animationsystem/animationophistory.h:22
// member functions: 12
// member variables: 6
// class size: 28
class AnimationOperationHistory_t : public CAnimationDecodeOp {
public:
	/* class CAnimationDecodeOp <ancestor>; */ /* 0 16 */
	/* ../public/animationsystem/animationophistory.h:25 */
	void AnimationOperationHistory_t(AnimationOperationHistory_t* );
	float m_flPrevCycle; /* 16 4 */
	int32 m_nSequenceParity; /* 20 4 */
	int16 m_nOrder; /* 24 2 */
	uint8 m_bInterpolationHadDiscontinuity; /* 26 1 */
	uint8 m_nPadding; /* 27 1 */
	/* ../public/animationsystem/animationophistory.h:37 */
	bool operator==(const AnimationOperationHistory_t* , const AnimationOperationHistory_t& );
	/* ../public/animationsystem/animationophistory.h:46 */
	bool IsIdenticalWithinTolerance(const AnimationOperationHistory_t* , const AnimationOperationHistory_t& );
	/* ../public/animationsystem/animationophistory.h:63 */
	CUtlString GetDebugString(const AnimationOperationHistory_t* );
	/* ../public/animationsystem/animationophistory.h:70 */
	CUtlString GetDebugSpeedString(const AnimationOperationHistory_t* , float, float, const AnimationOperationHistory_t* );
	/* ../public/animationsystem/animationophistory.h:77 */
	int GetValueFixedWidth(void);
	void AnimationOperationHistory_t(class AnimationOperationHistory_t *); /* linkage=_ZN27AnimationOperationHistory_tC4Ev */
	bool operator==(const class AnimationOperationHistory_t  *, const class AnimationOperationHistory_t  &); /* linkage=_ZNK27AnimationOperationHistory_teqERKS_ */
	bool IsIdenticalWithinTolerance(const class AnimationOperationHistory_t  *, const class AnimationOperationHistory_t  &); /* linkage=_ZNK27AnimationOperationHistory_t26IsIdenticalWithinToleranceERKS_ */
	class CUtlString GetDebugString(const class AnimationOperationHistory_t  *); /* linkage=_ZNK27AnimationOperationHistory_t14GetDebugStringEv */
	class CUtlString GetDebugSpeedString(const class AnimationOperationHistory_t  *, float, float, const class AnimationOperationHistory_t  *); /* linkage=_ZNK27AnimationOperationHistory_t19GetDebugSpeedStringEffPKS_ */
	int GetValueFixedWidth(void); /* linkage=_ZN27AnimationOperationHistory_t18GetValueFixedWidthEv */
};

// <049A4936> ../public/animationsystem/animationophistory.h:25
void AnimationOperationHistory_t::AnimationOperationHistory_t()
{
} /* size: 0 */

// <049A491D> ../public/animationsystem/animationophistory.h:25
inline void AnimationOperationHistory_t::AnimationOperationHistory_t()
{
} /* size: 0 */

// <04996EF0> ../public/animationsystem/animationophistory.h:81
// member functions: 8
// member variable: 1
// class size: 48
class CAnimationOpHistory : public CTimestampedDataContainer<AnimationOperationHistory_t, 3> {
public:
	/* class CTimestampedDataContainer<AnimationOperationHistory_t, 3> <ancestor>; */ /* 0 48 */
	/* ../public/animationsystem/animationophistory.h:85 */
	void AddAnimationOp(CAnimationOpHistory* , float, float, const CAnimationDecodeOp& );
	/* ../public/animationsystem/animationophistory.h:86 */
	void AddAnimationOp(CAnimationOpHistory* , float, const AnimationOperationHistory_t& );
	/* ../public/animationsystem/animationophistory.h:90 */
	void ChangeModel(CAnimationOpHistory* , HModel, HModel);
	/* ../public/animationsystem/animationophistory.h:95 */
	bool Interpolate(const CAnimationOpHistory* , float, const CModel* , CAnimationDecodeOp* , float* );
	void AddAnimationOp(class CAnimationOpHistory *, float, float, const class CAnimationDecodeOp  &); /* linkage=_ZN19CAnimationOpHistory14AddAnimationOpEffRK18CAnimationDecodeOp */
	void AddAnimationOp(class CAnimationOpHistory *, float, const class AnimationOperationHistory_t  &); /* linkage=_ZN19CAnimationOpHistory14AddAnimationOpEfRK27AnimationOperationHistory_t */
	void ChangeModel(class CAnimationOpHistory *, HModel, HModel); /* linkage=_ZN19CAnimationOpHistory11ChangeModelE11CWeakHandleI25InfoForResourceTypeCModelES2_ */
	bool Interpolate(const class CAnimationOpHistory  *, float, const class CModel  *, class CAnimationDecodeOp *, float *); /* linkage=_ZNK19CAnimationOpHistory11InterpolateEfPK6CModelP18CAnimationDecodeOpPf */
};

