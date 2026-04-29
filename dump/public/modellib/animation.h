
//
// public/modellib/animation.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 4
//	struct: 1
//

// <03B87649> ../public/modellib/animation.h:25
const AnimEvent_t* GetEventIndexForSequence(const ISequence *)
{
} /* size: 0 */

// <01259EBD> ../public/modellib/animation.h:38
HSequence LookupSequence(const CModel *, const char *)
{
} /* size: 0 */

// <01259E9B> ../public/modellib/animation.h:47
const char* GetSequenceName(const CModel *, HSequence)
{
} /* size: 0 */

// <04D3A6A2> ../public/modellib/animation.h:52
// member variables: 11
// struct size: 56
struct AnimEventDetectionQuery_t {
	CSkeletonInstance * m_pSkeletonInstance; /* 0 8 */
	const class CModel * m_pModel; /* 8 8 */
	HSequence m_hSequence; /* 16 4 */
	int m_nOrder; /* 20 4 */
	float m_flStartCycle; /* 24 4 */
	float m_flEndCycle; /* 28 4 */
	float m_flStartAnimTime; /* 32 4 */
	float m_flEndAnimTime; /* 36 4 */
	int32 m_nEntityIndex; /* 40 4 */
	int m_nTickcount; /* 44 4 */
	float m_flCurrentTime; /* 48 4 */
};

// <03B875FE> ../public/modellib/animation.h:78
int FindBodygroupByName(const CModel *, const char *)
{
} /* size: 0 */

