
//
// animgraph/staticposecache.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 21
//	classes: 3
//	struct: 1
//

// <019710E1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:14
void StaticPoseCacheHandle::StaticPoseCacheHandle()
{
} /* size: 0 */

// <019710C8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:14
inline void StaticPoseCacheHandle::StaticPoseCacheHandle()
{
} /* size: 0 */

// <019710AC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:14
void StaticPoseCacheHandle::StaticPoseCacheHandle(const StaticPoseCacheHandle& rhs)
{
} /* size: 0 */

// <01971087> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:14
inline void StaticPoseCacheHandle::StaticPoseCacheHandle(const StaticPoseCacheHandle& rhs)
{
} /* size: 0 */

// <01971062> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:14
inline void StaticPoseCacheHandle::operator=(const StaticPoseCacheHandle& rhs)
{
} /* size: 0 */

// <0178C2AA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:14
inline void StaticPoseCacheHandle::IsValid()
{
} /* size: 0 */

// <00F95CAD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:14
void StaticPoseCacheHandle::StaticPoseCacheHandle(const uint32 id)
{
} /* size: 0 */

// <00F95C89> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:14
inline void StaticPoseCacheHandle::StaticPoseCacheHandle(const uint32 id)
{
} /* size: 0 */

// <00D9E077> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:14
// member functions: 11
// member variable: 1
// static member variable: 1
// struct size: 4
struct StaticPoseCacheHandle {
	uint32 m_id; /* 0 4 */
	static const uint32 INVALIDID = 4294967295; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:14 */
	void StaticPoseCacheHandle(StaticPoseCacheHandle* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:14 */
	void StaticPoseCacheHandle(StaticPoseCacheHandle* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:14 */
	void StaticPoseCacheHandle(StaticPoseCacheHandle* , const StaticPoseCacheHandle& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:14 */
	StaticPoseCacheHandle& operator=(StaticPoseCacheHandle* , const StaticPoseCacheHandle& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:14 */
	StaticPoseCacheHandle& operator=(StaticPoseCacheHandle* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:14 */
	bool IsValid(const StaticPoseCacheHandle* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:14 */
	bool operator==(const StaticPoseCacheHandle* , const StaticPoseCacheHandle& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:14 */
	bool operator!=(const StaticPoseCacheHandle* , const StaticPoseCacheHandle& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:14 */
	bool operator<(const StaticPoseCacheHandle* , const StaticPoseCacheHandle& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:14 */
	void GetAsString(IPropertyEditDomain* , const void* , CUtlString* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:14 */
	void SetAsString(IPropertyEditDomain* , void* , const char* );
};

// <00F62ACB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:19
// function calls: 17
void CCachedPose::~CCachedPose()
{
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 19
	CUtlLeanVectorBase<CTransform, short int>::RemoveAll(); // 371
	CUtlLeanVectorBase<CTransform, short int>::Base(); // 279
	CUtlLeanVectorBase<CTransform, short int>::Base(); // 374
	CUtlLeanVectorBase<CTransform, short int>::Purge(); // 270
	CUtlLeanVectorBase<CTransform, short int>::~CUtlLeanVectorBase(); // 399
	CUtlLeanVectorImpl<CUtlLeanVectorBase<CTransform, short int>, CTransform, short int>::~CUtlLeanVectorImpl(); // 829
	CUtlLeanVector<CTransform, short int>::~CUtlLeanVector(); // 19
} /* size: 113, inline expansions: 17 (372 bytes) */

// <00F62AAF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:19
inline void CCachedPose::~CCachedPose()
{
} /* size: 0 */

// <00F49976> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:19
void CCachedPose::CCachedPose(CCachedPose &)
{
} /* size: 0 */

// <00F49955> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:19
inline void CCachedPose::CCachedPose(CCachedPose &)
{
} /* size: 0 */

// <00D9EDA0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:19
// member functions: 30
// member variables: 4
// class size: 56
class CCachedPose {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:22 */
	void CCachedPose(CCachedPose* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:24 */
	CTransform& operator[](CCachedPose* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:25 */
	const CTransform& operator[](const CCachedPose* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:27 */
	void Setup(CCachedPose* , int, int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:29 */
	HSequence GetSequence(const CCachedPose* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:30 */
	void SetSequence(CCachedPose* , HSequence);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:32 */
	float GetCycle(const CCachedPose* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:33 */
	void SetCycle(CCachedPose* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:35 */
	int GetTransformCount(const CCachedPose* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:36 */
	CTransform* GetTransforms(CCachedPose* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:37 */
	const CTransform* GetTransforms(const CCachedPose* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:39 */
	int GetMorphWeightsCount(const CCachedPose* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:40 */
	float* GetMorphWeights(CCachedPose* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:41 */
	const float* GetMorphWeights(const CCachedPose* );
private:
	CUtlLeanVector<CTransform, short int> m_transforms; /* 0 16 */
	CUtlVector<float, CUtlMemory<float, int> > m_morphWeights; /* 16 32 */
	HSequence m_hSequence; /* 48 4 */
	float m_flCycle; /* 52 4 */
	void CCachedPose(class CCachedPose *); /* linkage=_ZN11CCachedPoseC4Ev */
	class CTransform & operator[](class CCachedPose *, int); /* linkage=_ZN11CCachedPoseixEi */
	const class CTransform  & operator[](const class CCachedPose  *, int); /* linkage=_ZNK11CCachedPoseixEi */
	void Setup(class CCachedPose *, int, int); /* linkage=_ZN11CCachedPose5SetupEii */
	/* <f9fe14> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.cpp:22 */
	class HSequence GetSequence(const class CCachedPose  *); /* linkage=_ZNK11CCachedPose11GetSequenceEv */
	/* <f9fe3e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.cpp:27 */
	void SetSequence(class CCachedPose *, class HSequence); /* linkage=_ZN11CCachedPose11SetSequenceE9HSequence */
	/* <f9fe6f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.cpp:32 */
	float GetCycle(const class CCachedPose  *); /* linkage=_ZNK11CCachedPose8GetCycleEv */
	/* <f9fe99> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.cpp:37 */
	void SetCycle(class CCachedPose *, float); /* linkage=_ZN11CCachedPose8SetCycleEf */
	int GetTransformCount(const class CCachedPose  *); /* linkage=_ZNK11CCachedPose17GetTransformCountEv */
	class CTransform * GetTransforms(class CCachedPose *); /* linkage=_ZN11CCachedPose13GetTransformsEv */
	const class CTransform  * GetTransforms(const class CCachedPose  *); /* linkage=_ZNK11CCachedPose13GetTransformsEv */
	int GetMorphWeightsCount(const class CCachedPose  *); /* linkage=_ZNK11CCachedPose20GetMorphWeightsCountEv */
	float * GetMorphWeights(class CCachedPose *); /* linkage=_ZN11CCachedPose15GetMorphWeightsEv */
	const float  * GetMorphWeights(const class CCachedPose  *); /* linkage=_ZNK11CCachedPose15GetMorphWeightsEv */
	void CCachedPose(class CCachedPose *, class CCachedPose &); /* linkage=_ZN11CCachedPoseC4EOS_ */
	void ~CCachedPose(class CCachedPose *); /* linkage=_ZN11CCachedPoseD4Ev */
};

// <00EF0530> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:19
// member functions: 32
// member variables: 4
// class size: 56
class CCachedPose {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:22 */
	void CCachedPose(CCachedPose* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:24 */
	CTransform& operator[](CCachedPose* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:25 */
	const CTransform& operator[](const CCachedPose* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:27 */
	void Setup(CCachedPose* , int, int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:29 */
	HSequence GetSequence(const CCachedPose* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:30 */
	void SetSequence(CCachedPose* , HSequence);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:32 */
	float GetCycle(const CCachedPose* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:33 */
	void SetCycle(CCachedPose* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:35 */
	int GetTransformCount(const CCachedPose* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:36 */
	CTransform* GetTransforms(CCachedPose* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:37 */
	const CTransform* GetTransforms(const CCachedPose* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:39 */
	int GetMorphWeightsCount(const CCachedPose* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:40 */
	float* GetMorphWeights(CCachedPose* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:41 */
	const float* GetMorphWeights(const CCachedPose* );
private:
	CUtlLeanVector<CTransform, short int> m_transforms; /* 0 16 */
	CUtlVector<float, CUtlMemory<float, int> > m_morphWeights; /* 16 32 */
	HSequence m_hSequence; /* 48 4 */
	float m_flCycle; /* 52 4 */
	void CCachedPose(CCachedPose* , CCachedPose& );
	void ~CCachedPose(CCachedPose* );
	void CCachedPose(class CCachedPose *); /* linkage=_ZN11CCachedPoseC4Ev */
	class CTransform & operator[](class CCachedPose *, int); /* linkage=_ZN11CCachedPoseixEi */
	const class CTransform  & operator[](const class CCachedPose  *, int); /* linkage=_ZNK11CCachedPoseixEi */
	void Setup(class CCachedPose *, int, int); /* linkage=_ZN11CCachedPose5SetupEii */
	/* <f9fe14> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.cpp:22 */
	class HSequence GetSequence(const class CCachedPose  *); /* linkage=_ZNK11CCachedPose11GetSequenceEv */
	/* <f9fe3e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.cpp:27 */
	void SetSequence(class CCachedPose *, class HSequence); /* linkage=_ZN11CCachedPose11SetSequenceE9HSequence */
	/* <f9fe6f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.cpp:32 */
	float GetCycle(const class CCachedPose  *); /* linkage=_ZNK11CCachedPose8GetCycleEv */
	/* <f9fe99> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.cpp:37 */
	void SetCycle(class CCachedPose *, float); /* linkage=_ZN11CCachedPose8SetCycleEf */
	int GetTransformCount(const class CCachedPose  *); /* linkage=_ZNK11CCachedPose17GetTransformCountEv */
	class CTransform * GetTransforms(class CCachedPose *); /* linkage=_ZN11CCachedPose13GetTransformsEv */
	const class CTransform  * GetTransforms(const class CCachedPose  *); /* linkage=_ZNK11CCachedPose13GetTransformsEv */
	int GetMorphWeightsCount(const class CCachedPose  *); /* linkage=_ZNK11CCachedPose20GetMorphWeightsCountEv */
	float * GetMorphWeights(class CCachedPose *); /* linkage=_ZN11CCachedPose15GetMorphWeightsEv */
	const float  * GetMorphWeights(const class CCachedPose  *); /* linkage=_ZNK11CCachedPose15GetMorphWeightsEv */
	void CCachedPose(class CCachedPose *, class CCachedPose &); /* linkage=_ZN11CCachedPoseC4EOS_ */
	void ~CCachedPose(class CCachedPose *); /* linkage=_ZN11CCachedPoseD4Ev */
};

// <00F95BBD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:22
void CCachedPose::CCachedPose()
{
} /* size: 0 */

// <00F95BA4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:22
inline void CCachedPose::CCachedPose()
{
} /* size: 0 */

// <0178C291> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:35
inline void CCachedPose::GetTransformCount()
{
} /* size: 0 */

// <0178C278> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:37
inline void CCachedPose::GetTransforms()
{
} /* size: 0 */

// <0178C25F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:41
inline void CCachedPose::GetMorphWeights()
{
} /* size: 0 */

// <00F3B661> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:57
// function calls: 30
void CStaticPoseCache::~CStaticPoseCache()
{
	CUtlLeanVectorBase<CCachedPose, short int>::Base(); // 279
	CUtlLeanVectorBase<CCachedPose, short int>::Base(); // 363
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 19
	CUtlLeanVectorBase<CTransform, short int>::RemoveAll(); // 371
	CUtlLeanVectorBase<CTransform, short int>::Base(); // 279
	CUtlLeanVectorBase<CTransform, short int>::Base(); // 374
	CUtlLeanVectorBase<CTransform, short int>::Purge(); // 270
	CUtlLeanVectorBase<CTransform, short int>::~CUtlLeanVectorBase(); // 399
	CUtlLeanVectorImpl<CUtlLeanVectorBase<CTransform, short int>, CTransform, short int>::~CUtlLeanVectorImpl(); // 829
	CUtlLeanVector<CTransform, short int>::~CUtlLeanVector(); // 19
	CCachedPose::~CCachedPose(); // 1526
	Destruct<CCachedPose>(CCachedPose* pMemory); // 76
	UtlTraitsDestructRange<CCachedPose>(CCachedPose* pStart,
						CCachedPose* pEnd);  // 364
	CUtlLeanVectorBase<CCachedPose, short int>::RemoveAll(); // 371
	CUtlLeanVectorBase<CCachedPose, short int>::Base(); // 279
	CUtlLeanVectorBase<CCachedPose, short int>::Base(); // 374
	CUtlLeanVectorBase<CCachedPose, short int>::Purge(); // 270
	CUtlLeanVectorBase<CCachedPose, short int>::~CUtlLeanVectorBase(); // 399
	CUtlLeanVectorImpl<CUtlLeanVectorBase<CCachedPose, short int>, CCachedPose, short int>::~CUtlLeanVectorImpl(); // 829
	CUtlLeanVector<CCachedPose, short int>::~CUtlLeanVector(); // 57
} /* size: 237, inline expansions: 30 (1605 bytes) */

// <00F3B094> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:57
// function calls: 33
void CStaticPoseCache::~CStaticPoseCache()
{
	CUtlLeanVectorBase<CCachedPose, short int>::Base(); // 279
	CUtlLeanVectorBase<CCachedPose, short int>::Base(); // 363
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 19
	CUtlLeanVectorBase<CTransform, short int>::RemoveAll(); // 371
	CUtlLeanVectorBase<CTransform, short int>::Base(); // 279
	CUtlLeanVectorBase<CTransform, short int>::Base(); // 374
	CUtlLeanVectorBase<CTransform, short int>::Purge(); // 270
	CUtlLeanVectorBase<CTransform, short int>::~CUtlLeanVectorBase(); // 399
	CUtlLeanVectorImpl<CUtlLeanVectorBase<CTransform, short int>, CTransform, short int>::~CUtlLeanVectorImpl(); // 829
	CUtlLeanVector<CTransform, short int>::~CUtlLeanVector(); // 19
	CCachedPose::~CCachedPose(); // 1526
	Destruct<CCachedPose>(CCachedPose* pMemory); // 76
	UtlTraitsDestructRange<CCachedPose>(CCachedPose* pStart,
						CCachedPose* pEnd);  // 364
	CUtlLeanVectorBase<CCachedPose, short int>::RemoveAll(); // 371
	CUtlLeanVectorBase<CCachedPose, short int>::Base(); // 279
	CUtlLeanVectorBase<CCachedPose, short int>::Base(); // 374
	CUtlLeanVectorBase<CCachedPose, short int>::Purge(); // 270
	CUtlLeanVectorBase<CCachedPose, short int>::~CUtlLeanVectorBase(); // 399
	CUtlLeanVectorImpl<CUtlLeanVectorBase<CCachedPose, short int>, CCachedPose, short int>::~CUtlLeanVectorImpl(); // 829
	CUtlLeanVector<CCachedPose, short int>::~CUtlLeanVector(); // 57
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 57
	CStaticPoseCache::~CStaticPoseCache(); // 57
} /* size: 237, inline expansions: 33 (1773 bytes) */

// <00F3B078> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:57
inline void CStaticPoseCache::~CStaticPoseCache()
{
} /* size: 0 */

// <00EF138E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:57
// member functions: 12
// member variables: 5
// class size: 48
class CStaticPoseCache : public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > {
public:
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	void CStaticPoseCache(CStaticPoseCache* , CStaticPoseCache& );
	void CStaticPoseCache(CStaticPoseCache* , const CStaticPoseCache& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.cpp:47 */
	void CStaticPoseCache(CStaticPoseCache* , const CModel* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.cpp:72 */
	StaticPoseCacheHandle AddPose(CStaticPoseCache* , HSequence, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.cpp:118 */
	const CCachedPose& GetPose(const CStaticPoseCache* , StaticPoseCacheHandle);
private:
	CUtlLeanVector<CCachedPose, short int> m_poses; /* 16 16 */
	const class CModel * m_pModel; /* 32 8 */
	int m_nBoneCount; /* 40 4 */
	int m_nMorphCount; /* 44 4 */
	virtual void ~CStaticPoseCache(CStaticPoseCache* );
	void CStaticPoseCache(class CStaticPoseCache *, const class CModel  *); /* linkage=_ZN16CStaticPoseCacheC4EPK6CModel */
	void CStaticPoseCache(class CStaticPoseCache *, class CStaticPoseCache &); /* linkage=_ZN16CStaticPoseCacheC4EOS_ */
	void CStaticPoseCache(class CStaticPoseCache *, const class CStaticPoseCache  &); /* linkage=_ZN16CStaticPoseCacheC4ERKS_ */
	class StaticPoseCacheHandle AddPose(class CStaticPoseCache *, class HSequence, float); /* linkage=_ZN16CStaticPoseCache7AddPoseE9HSequencef */
	const class CCachedPose  & GetPose(const class CStaticPoseCache  *, class StaticPoseCacheHandle); /* linkage=_ZNK16CStaticPoseCache7GetPoseE21StaticPoseCacheHandle */
	virtual void ~CStaticPoseCache(class CStaticPoseCache *); /* linkage=_ZN16CStaticPoseCacheD4Ev */
};

// <00DF4AE0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/staticposecache.h:60
void CStaticPoseCache::CStaticPoseCache(const CModel* pModel)
{
} /* size: 0 */

