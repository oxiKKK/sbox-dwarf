
//
// public/animationsystem/animationdecodecache.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	class: 1
//	struct: 1
//

// <025BE5C2> ../public/animationsystem/animationdecodecache.h:15
void CAnimationDecodeCacheEntry_t::CAnimationDecodeCacheEntry_t()
{
} /* size: 0 */

// <025BE5A5> ../public/animationsystem/animationdecodecache.h:15
inline void CAnimationDecodeCacheEntry_t::CAnimationDecodeCacheEntry_t()
{
} /* size: 0 */

// <00BD87D5> ../public/animationsystem/animationdecodecache.h:15
// member variables: 3
// struct size: 144
struct CAnimationDecodeCacheEntry_t {
	uint32 key; /* 0 4 */
	IndexType_t lruNode; /* 4 4 */
	uint8 m_data[124] __attribute__((__aligned__(16))); /* 16 124 */
} __attribute__((__aligned__(16)));

// <00C72535> ../public/animationsystem/animationdecodecache.h:22
void CThreadLocalAnimationDecodeCache::CThreadLocalAnimationDecodeCache()
{
} /* size: 0 */

// <00C72519> ../public/animationsystem/animationdecodecache.h:22
inline void CThreadLocalAnimationDecodeCache::CThreadLocalAnimationDecodeCache()
{
} /* size: 0 */

// <00C72502> ../public/animationsystem/animationdecodecache.h:22
void CThreadLocalAnimationDecodeCache::~CThreadLocalAnimationDecodeCache()
{
} /* size: 0 */

// <00C724E6> ../public/animationsystem/animationdecodecache.h:22
inline void CThreadLocalAnimationDecodeCache::~CThreadLocalAnimationDecodeCache()
{
} /* size: 0 */

// <00BA0D8C> ../public/animationsystem/animationdecodecache.h:22
// member functions: 12
// member variable: 1
// class size: 36,896
class CThreadLocalAnimationDecodeCache {
	CUtlVectorFixedGrowable<CAnimationDecodeCacheEntry_t, 256> m_new_entries __attribute__((__aligned__(16))); /* 0 36896 */
	/* ../public/animationsystem/animationdecodecache.h:30 */
	uint32 ComposeKey(const CAnimationResource* , const CAnimFrameSegment* , int);
	/* ../public/animationsystem/animationdecodecache.h:32 */
	const uint8* Get(CThreadLocalAnimationDecodeCache* , uint32);
	/* ../public/animationsystem/animationdecodecache.h:34 */
	bool Commit(CThreadLocalAnimationDecodeCache* , uint32, const uint8* );
	/* ../public/animationsystem/animationdecodecache.h:36 */
	void CommitToGlobalCache(CThreadLocalAnimationDecodeCache* );
	void ~CThreadLocalAnimationDecodeCache(CThreadLocalAnimationDecodeCache* );
	void CThreadLocalAnimationDecodeCache(CThreadLocalAnimationDecodeCache* );
	uint32 ComposeKey(const class CAnimationResource  *, const class CAnimFrameSegment  *, int); /* linkage=_ZN32CThreadLocalAnimationDecodeCache10ComposeKeyEPK18CAnimationResourcePK17CAnimFrameSegmenti */
	const uint8  * Get(class CThreadLocalAnimationDecodeCache *, uint32); /* linkage=_ZN32CThreadLocalAnimationDecodeCache3GetEj */
	/* <25e0e36> bonesetup/bone_decode.cpp:757 */
	bool Commit(class CThreadLocalAnimationDecodeCache *, uint32, const uint8  *); /* linkage=_ZN32CThreadLocalAnimationDecodeCache6CommitEjPKh */
	void CommitToGlobalCache(class CThreadLocalAnimationDecodeCache *); /* linkage=_ZN32CThreadLocalAnimationDecodeCache19CommitToGlobalCacheEPS_ */
	void ~CThreadLocalAnimationDecodeCache(class CThreadLocalAnimationDecodeCache *); /* linkage=_ZN32CThreadLocalAnimationDecodeCacheD4Ev */
	void CThreadLocalAnimationDecodeCache(class CThreadLocalAnimationDecodeCache *); /* linkage=_ZN32CThreadLocalAnimationDecodeCacheC4Ev */
} __attribute__((__aligned__(16)));

