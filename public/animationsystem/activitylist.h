
//
// public/animationsystem/activitylist.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 18
//	classes: 2
//

// <00B23A53> ../public/animationsystem/activitylist.h:14
// member functions: 6
// member variables: 3
// class size: 16
class CActivityRemap {
	/* ../public/animationsystem/activitylist.h:17 */
	void CActivityRemap(CActivityRemap* );
	/* ../public/animationsystem/activitylist.h:22 */
	void SetExtraKeyValueBlock(CActivityRemap* , KeyValues* );
	/* ../public/animationsystem/activitylist.h:27 */
	KeyValues* GetExtraKeyValueBlock(CActivityRemap* );
	Activity activity; /* 0 4 */
	Activity mappedActivity; /* 4 4 */
private:
	KeyValues * pExtraBlock; /* 8 8 */
	void CActivityRemap(class CActivityRemap *); /* linkage=_ZN14CActivityRemapC4Ev */
	void SetExtraKeyValueBlock(class CActivityRemap *, class KeyValues *); /* linkage=_ZN14CActivityRemap21SetExtraKeyValueBlockEP9KeyValues */
	class KeyValues * GetExtraKeyValueBlock(class CActivityRemap *); /* linkage=_ZN14CActivityRemap21GetExtraKeyValueBlockEv */
};

// <00D21521> ../public/animationsystem/activitylist.h:17
void CActivityRemap::CActivityRemap()
{
} /* size: 0 */

// <00D21508> ../public/animationsystem/activitylist.h:17
inline void CActivityRemap::CActivityRemap()
{
} /* size: 0 */

// <00D214E3> ../public/animationsystem/activitylist.h:22
inline void CActivityRemap::SetExtraKeyValueBlock(KeyValues* pKVBlock)
{
} /* size: 0 */

// <00D20A2B> ../public/animationsystem/activitylist.h:37
void CActivityRemapCache::~CActivityRemapCache()
{
} /* size: 0 */

// <00D20A0F> ../public/animationsystem/activitylist.h:37
inline void CActivityRemapCache::~CActivityRemapCache()
{
} /* size: 0 */

// <00B2524C> ../public/animationsystem/activitylist.h:37
// member functions: 8
// member variable: 1
// class size: 32
class CActivityRemapCache {
	/* ../public/animationsystem/activitylist.h:41 */
	void CActivityRemapCache(CActivityRemapCache* );
	/* ../public/animationsystem/activitylist.h:45 */
	void CActivityRemapCache(CActivityRemapCache* , const CActivityRemapCache& );
	/* ../public/animationsystem/activitylist.h:54 */
	CActivityRemapCache& operator=(CActivityRemapCache* , const CActivityRemapCache& );
	CUtlVector<CActivityRemap, CUtlMemory<CActivityRemap, int> > m_cachedActivityRemaps; /* 0 32 */
	void ~CActivityRemapCache(CActivityRemapCache* );
	void CActivityRemapCache(class CActivityRemapCache *); /* linkage=_ZN19CActivityRemapCacheC4Ev */
	void CActivityRemapCache(class CActivityRemapCache *, const class CActivityRemapCache  &); /* linkage=_ZN19CActivityRemapCacheC4ERKS_ */
	class CActivityRemapCache & operator=(class CActivityRemapCache *, const class CActivityRemapCache  &); /* linkage=_ZN19CActivityRemapCacheaSERKS_ */
	void ~CActivityRemapCache(class CActivityRemapCache *); /* linkage=_ZN19CActivityRemapCacheD4Ev */
};

// <00D21498> ../public/animationsystem/activitylist.h:41
void CActivityRemapCache::CActivityRemapCache()
{
} /* size: 0 */

// <00D2147F> ../public/animationsystem/activitylist.h:41
inline void CActivityRemapCache::CActivityRemapCache()
{
} /* size: 0 */

// <00D2144B> ../public/animationsystem/activitylist.h:45
// variables: 2
void CActivityRemapCache::CActivityRemapCache(const CActivityRemapCache& src)
{
	{
		int c; // 47
		{
			int i; // 48
		}
	}
} /* size: 0 */

// <00D2140C> ../public/animationsystem/activitylist.h:45
// variables: 2
inline void CActivityRemapCache::CActivityRemapCache(const CActivityRemapCache& src)
{
	{
		int c; // 47
		{
			int i; // 48
		}
	}
} /* size: 0 */

// <04D7C431> ../public/animationsystem/activitylist.h:91
// variables: 2
inline Activity ActivityList_RegisterPrivateActivity(const char* pszActivityName)
{
	const char   __FUNCTION__; // 54131
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 93
	}
} /* size: 0, variables: 1 */

// <021328B5> ../public/animationsystem/activitylist.h:91
// variables: 2
inline Activity ActivityList_RegisterPrivateActivity(const char* pszActivityName)
{
	const char   __FUNCTION__; // 1772
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 93
	}
} /* size: 0, variables: 1 */

// <00C9F072> ../public/animationsystem/activitylist.h:91
// variables: 2
inline Activity ActivityList_RegisterPrivateActivity(const char* pszActivityName)
{
	const char   __FUNCTION__; // 3097
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 93
	}
} /* size: 0, variables: 1 */

// <04D7C3E5> ../public/animationsystem/activitylist.h:100
// variables: 2
inline Activity ActivityList_IndexForName(const char* pszActivityName)
{
	const char   __FUNCTION__; // 53879
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 102
	}
} /* size: 0, variables: 1 */

// <02132869> ../public/animationsystem/activitylist.h:100
// variables: 2
inline Activity ActivityList_IndexForName(const char* pszActivityName)
{
	const char   __FUNCTION__; // 1520
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 102
	}
} /* size: 0, variables: 1 */

// <00C9F026> ../public/animationsystem/activitylist.h:100
// variables: 2
inline Activity ActivityList_IndexForName(const char* pszActivityName)
{
	const char   __FUNCTION__; // 2845
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 102
	}
} /* size: 0, variables: 1 */

// <04D7C399> ../public/animationsystem/activitylist.h:109
// variables: 2
inline const char* ActivityList_NameForIndex(Activity iActivity)
{
	const char   __FUNCTION__; // 53879
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 111
	}
} /* size: 0, variables: 1 */

// <0213281D> ../public/animationsystem/activitylist.h:109
// variables: 2
inline const char* ActivityList_NameForIndex(Activity iActivity)
{
	const char   __FUNCTION__; // 1520
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 111
	}
} /* size: 0, variables: 1 */

// <00C9EFDA> ../public/animationsystem/activitylist.h:109
// variables: 2
inline const char* ActivityList_NameForIndex(Activity iActivity)
{
	const char   __FUNCTION__; // 2845
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 111
	}
} /* size: 0, variables: 1 */

