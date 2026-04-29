
//
// animgraph/posecache.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 5
//	classes: 2
//

// <00F69ABC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/posecache.h:15
void CPoseCacheEntry::~CPoseCacheEntry()
{
} /* size: 0 */

// <00F69AA0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/posecache.h:15
inline void CPoseCacheEntry::~CPoseCacheEntry()
{
} /* size: 0 */

// <00F69932> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/posecache.h:15
void CPoseCacheEntry::CPoseCacheEntry()
{
} /* size: 0 */

// <00F69916> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/posecache.h:15
inline void CPoseCacheEntry::CPoseCacheEntry()
{
} /* size: 0 */

// <00F5581A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/posecache.h:15
inline void CPoseCacheEntry::operator=(const CPoseCacheEntry &)
{
} /* size: 0 */

// <00F2E2F3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/posecache.h:15
// member functions: 8
// member variables: 3
// class size: 48
class CPoseCacheEntry {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/posecache.h:19 */
	void Reset(CPoseCacheEntry* );
	CTransform m_xLocalToWorld __attribute__((__aligned__(16))); /* 0 32 */
	CAnimPoseConstPtr m_pPose; /* 32 8 */
	float m_flTime; /* 40 4 */
	CPoseCacheEntry& operator=(CPoseCacheEntry* , const CPoseCacheEntry& );
	void CPoseCacheEntry(CPoseCacheEntry* );
	void ~CPoseCacheEntry(CPoseCacheEntry* );
	/* <fa00d6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/posecache.cpp:10 */
	void Reset(class CPoseCacheEntry *); /* linkage=_ZN15CPoseCacheEntry5ResetEv */
	class CPoseCacheEntry & operator=(class CPoseCacheEntry *, const class CPoseCacheEntry  &); /* linkage=_ZN15CPoseCacheEntryaSERKS_ */
	void CPoseCacheEntry(class CPoseCacheEntry *); /* linkage=_ZN15CPoseCacheEntryC4Ev */
	void ~CPoseCacheEntry(class CPoseCacheEntry *); /* linkage=_ZN15CPoseCacheEntryD4Ev */
} __attribute__((__aligned__(16)));

// <00F301A2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/posecache.h:36
// member functions: 14
// member variable: 1
// vtable entry: 1
// class size: 608
class CPoseCache : public CFixedSizeCircularBuffer<CPoseCacheEntry, 12> {
public:
	/* class CFixedSizeCircularBuffer<CPoseCacheEntry, 12> <ancestor>; */ /* 0 608 */
	void CPoseCache(CPoseCache* , CPoseCache& );
	void CPoseCache(CPoseCache* , const CPoseCache& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/posecache.cpp:19 */
	void CPoseCache(CPoseCache* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/posecache.cpp:27 */
	void CacheNewPose(CPoseCache* , const CAnimPosePtr& , const CTransform& , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/posecache.cpp:47 */
	const CPoseCacheEntry& GetMostRecentPose(const CPoseCache* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/posecache.cpp:55 */
	const CPoseCacheEntry& GetOldestPose(const CPoseCache* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/posecache.cpp:63 */
	virtual void ReleaseItem(CPoseCache* , CPoseCacheEntry& );
	void CPoseCache(class CPoseCache *, class CPoseCache &); /* linkage=_ZN10CPoseCacheC4EOS_ */
	void CPoseCache(class CPoseCache *, const class CPoseCache  &); /* linkage=_ZN10CPoseCacheC4ERKS_ */
	void CPoseCache(class CPoseCache *); /* linkage=_ZN10CPoseCacheC4Ev */
	void CacheNewPose(class CPoseCache *, const CAnimPosePtr  &, const class CTransform  &, float); /* linkage=_ZN10CPoseCache12CacheNewPoseERK9CSmartPtrI9CAnimPose17CRefCountAccessorERK10CTransformf */
	/* <f9f8c2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/posecache.cpp:47 */
	const class CPoseCacheEntry  & GetMostRecentPose(const class CPoseCache  *); /* linkage=_ZNK10CPoseCache17GetMostRecentPoseEv */
	const class CPoseCacheEntry  & GetOldestPose(const class CPoseCache  *); /* linkage=_ZNK10CPoseCache13GetOldestPoseEv */
	virtual void ReleaseItem(class CPoseCache *, class CPoseCacheEntry &); /* linkage=_ZN10CPoseCache11ReleaseItemER15CPoseCacheEntry */
} __attribute__((__aligned__(16)));

