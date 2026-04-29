
//
// public/animationsystem/animationdecodeop.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 4
//	class: 1
//	struct: 1
//

// <000F7336> ../public/animationsystem/animationdecodeop.h:51
// member functions: 8
// member variables: 4
// class size: 16
class CAnimationDecodeOp {
	/* ../public/animationsystem/animationdecodeop.h:54 */
	void CAnimationDecodeOp(CAnimationDecodeOp* );
	HSequence m_hSequence; /* 0 4 */
	float m_flCycle; /* 4 4 */
	float m_flWeight; /* 8 4 */
	animopsource_t m_source; /* 12 4 */
	/* ../public/animationsystem/animationdecodeop.h:67 */
	bool operator==(const CAnimationDecodeOp* , const CAnimationDecodeOp& );
	/* ../public/animationsystem/animationdecodeop.h:75 */
	const Color& GetSpewColor(const CAnimationDecodeOp* );
	/* ../public/animationsystem/animationdecodeop.h:80 */
	const char* GetSpewSourceName(const CAnimationDecodeOp* );
	void CAnimationDecodeOp(class CAnimationDecodeOp *); /* linkage=_ZN18CAnimationDecodeOpC4Ev */
	bool operator==(const class CAnimationDecodeOp  *, const class CAnimationDecodeOp  &); /* linkage=_ZNK18CAnimationDecodeOpeqERKS_ */
	const class Color  & GetSpewColor(const class CAnimationDecodeOp  *); /* linkage=_ZNK18CAnimationDecodeOp12GetSpewColorEv */
	const char  * GetSpewSourceName(const class CAnimationDecodeOp  *); /* linkage=_ZNK18CAnimationDecodeOp17GetSpewSourceNameEv */
};

// <049A4966> ../public/animationsystem/animationdecodeop.h:54
void CAnimationDecodeOp::CAnimationDecodeOp()
{
} /* size: 0 */

// <049A494D> ../public/animationsystem/animationdecodeop.h:54
inline void CAnimationDecodeOp::CAnimationDecodeOp()
{
} /* size: 0 */

// <00C5E6C3> ../public/animationsystem/animationdecodeop.h:87
void AnimEventDetectDesc_t::AnimEventDetectDesc_t()
{
} /* size: 0 */

// <00C5E6A7> ../public/animationsystem/animationdecodeop.h:87
inline void AnimEventDetectDesc_t::AnimEventDetectDesc_t()
{
} /* size: 0 */

// <00B6E1A1> ../public/animationsystem/animationdecodeop.h:87
// member function: 1
// member variables: 6
// struct size: 48
struct AnimEventDetectDesc_t : public CAnimationDecodeOp {
public:
	/* class CAnimationDecodeOp <ancestor>; */ /* 0 16 */
	HModel m_hModel; /* 16 8 */
	void * m_pContext; /* 24 8 */
	const float * m_pPoseParameters; /* 32 8 */
	int m_nPoseParameterCount; /* 40 4 */
	float m_flPreviousCycle; /* 44 4 */
	void AnimEventDetectDesc_t(AnimEventDetectDesc_t* );
};

