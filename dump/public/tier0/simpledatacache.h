
//
// public/tier0/simpledatacache.h
//
//	referenced by: libengine2.so
//
//	functions: 27
//	class: 1
//

// <024E6D5E> ../public/tier0/simpledatacache.h:22
void CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::~CSimpleDataCache()
{
} /* size: 0 */

// <024E6D41> ../public/tier0/simpledatacache.h:22
inline void CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::~CSimpleDataCache()
{
} /* size: 0 */

// <024D6473> ../public/tier0/simpledatacache.h:22
// member functions: 51
// member variables: 5
// class size: 80
class CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t> {
	/* ../public/tier0/simpledatacache.h:25 */
	struct cache_table_t {
		CAsyncWaveData * m_pObject; /* 0 8 */
		uint m_nTimeStamp; /* 8 4 */
		uint m_nSize; /* 12 4 */
		uint16 m_nCreateStamp; /* 16 2 */
		uint16 m_nLockCount; /* 18 2 */
		uint16 m_nPriority; /* 20 2 */
		uint16 m_nPad0; /* 22 2 */
		/* ../public/tier0/simpledatacache.h:34 */
		void Clear(cache_table_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/simpledatacache.h:46 */
	void CSimpleDataCache(CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>* );
	/* ../public/tier0/simpledatacache.h:48 */
	void Init(CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>* , uint);
	/* ../public/tier0/simpledatacache.h:54 */
	void Shutdown(CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>* );
	/* ../public/tier0/simpledatacache.h:59 */
	bool Update(CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>* , uint, bool);
	/* ../public/tier0/simpledatacache.h:75 */
	CAsyncWaveData* Get(CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>* , memhandle_t);
	/* ../public/tier0/simpledatacache.h:83 */
	memhandle_t Create(CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>* , const asyncwaveparams_t& );
	/* ../public/tier0/simpledatacache.h:101 */
	void Remove(CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>* , memhandle_t);
	/* ../public/tier0/simpledatacache.h:110 */
	void SetPriority(CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>* , memhandle_t, int16);
	/* ../public/tier0/simpledatacache.h:118 */
	void Age(CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>* , memhandle_t);
	/* ../public/tier0/simpledatacache.h:127 */
	CAsyncWaveData* Lock(CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>* , memhandle_t);
	/* ../public/tier0/simpledatacache.h:137 */
	void Touch(CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>* , memhandle_t);
	/* ../public/tier0/simpledatacache.h:146 */
	void Unlock(CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>* , memhandle_t);
	/* ../public/tier0/simpledatacache.h:156 */
	int LockCount(CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>* , memhandle_t);
	/* ../public/tier0/simpledatacache.h:166 */
	uint GetBytesUsed(const CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>* );
	/* ../public/tier0/simpledatacache.h:167 */
	uint GetBytesLimit(const CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>* );
	/* ../public/tier0/simpledatacache.h:168 */
	uint GetBytesLocked(const CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>* );
	/* ../public/tier0/simpledatacache.h:181 */
	void PurgeAllUnlocked(CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>* );
	/* ../public/tier0/simpledatacache.h:193 */
	int ItemCount(CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>* );
	/* ../public/tier0/simpledatacache.h:195 */
	memhandle_t ItemHandleByIndex(CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>* , int);
private:
	/* ../public/tier0/simpledatacache.h:203 */
	bool DestroyByIndex(CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>* , int);
	/* ../public/tier0/simpledatacache.h:221 */
	int AllocHandleIndex(CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>* );
	/* ../public/tier0/simpledatacache.h:235 */
	memhandle_t IndexToHandle(CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>* , int);
	/* ../public/tier0/simpledatacache.h:243 */
	int HandleToIndex(CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>* , memhandle_t);
	/* ../public/tier0/simpledatacache.h:257 */
	memhandle_t FreeOldest(CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>* );
	CUtlVector<int, CUtlMemory<int, int> > m_freeList; /* 0 32 */
	CUtlVector<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int> > m_table; /* 32 32 */
	uint m_nLimitSize; /* 64 4 */
	uint m_nCurrentBytesUsed; /* 68 4 */
	uint m_nCurrentTime; /* 72 4 */
	void ~CSimpleDataCache(CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>* );
	void CSimpleDataCache(class CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t> *); /* linkage=_ZN16CSimpleDataCacheI14CAsyncWaveData17asyncwaveparams_tEC4Ev */
	void Init(class CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t> *, uint); /* linkage=_ZN16CSimpleDataCacheI14CAsyncWaveData17asyncwaveparams_tE4InitEj */
	void Shutdown(class CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t> *); /* linkage=_ZN16CSimpleDataCacheI14CAsyncWaveData17asyncwaveparams_tE8ShutdownEv */
	bool Update(class CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t> *, uint, bool); /* linkage=_ZN16CSimpleDataCacheI14CAsyncWaveData17asyncwaveparams_tE6UpdateEjb */
	class CAsyncWaveData * Get(class CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t> *, memhandle_t); /* linkage=_ZN16CSimpleDataCacheI14CAsyncWaveData17asyncwaveparams_tE3GetEP13memhandle_t__ */
	memhandle_t Create(class CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t> *, const class asyncwaveparams_t  &); /* linkage=_ZN16CSimpleDataCacheI14CAsyncWaveData17asyncwaveparams_tE6CreateERKS1_ */
	void Remove(class CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t> *, memhandle_t); /* linkage=_ZN16CSimpleDataCacheI14CAsyncWaveData17asyncwaveparams_tE6RemoveEP13memhandle_t__ */
	void SetPriority(class CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t> *, memhandle_t, int16); /* linkage=_ZN16CSimpleDataCacheI14CAsyncWaveData17asyncwaveparams_tE11SetPriorityEP13memhandle_t__s */
	void Age(class CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t> *, memhandle_t); /* linkage=_ZN16CSimpleDataCacheI14CAsyncWaveData17asyncwaveparams_tE3AgeEP13memhandle_t__ */
	class CAsyncWaveData * Lock(class CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t> *, memhandle_t); /* linkage=_ZN16CSimpleDataCacheI14CAsyncWaveData17asyncwaveparams_tE4LockEP13memhandle_t__ */
	void Touch(class CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t> *, memhandle_t); /* linkage=_ZN16CSimpleDataCacheI14CAsyncWaveData17asyncwaveparams_tE5TouchEP13memhandle_t__ */
	void Unlock(class CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t> *, memhandle_t); /* linkage=_ZN16CSimpleDataCacheI14CAsyncWaveData17asyncwaveparams_tE6UnlockEP13memhandle_t__ */
	int LockCount(class CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t> *, memhandle_t); /* linkage=_ZN16CSimpleDataCacheI14CAsyncWaveData17asyncwaveparams_tE9LockCountEP13memhandle_t__ */
	uint GetBytesUsed(const class CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>  *); /* linkage=_ZNK16CSimpleDataCacheI14CAsyncWaveData17asyncwaveparams_tE12GetBytesUsedEv */
	uint GetBytesLimit(const class CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>  *); /* linkage=_ZNK16CSimpleDataCacheI14CAsyncWaveData17asyncwaveparams_tE13GetBytesLimitEv */
	uint GetBytesLocked(const class CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>  *); /* linkage=_ZNK16CSimpleDataCacheI14CAsyncWaveData17asyncwaveparams_tE14GetBytesLockedEv */
	void PurgeAllUnlocked(class CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t> *); /* linkage=_ZN16CSimpleDataCacheI14CAsyncWaveData17asyncwaveparams_tE16PurgeAllUnlockedEv */
	int ItemCount(class CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t> *); /* linkage=_ZN16CSimpleDataCacheI14CAsyncWaveData17asyncwaveparams_tE9ItemCountEv */
	memhandle_t ItemHandleByIndex(class CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t> *, int); /* linkage=_ZN16CSimpleDataCacheI14CAsyncWaveData17asyncwaveparams_tE17ItemHandleByIndexEi */
	bool DestroyByIndex(class CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t> *, int); /* linkage=_ZN16CSimpleDataCacheI14CAsyncWaveData17asyncwaveparams_tE14DestroyByIndexEi */
	int AllocHandleIndex(class CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t> *); /* linkage=_ZN16CSimpleDataCacheI14CAsyncWaveData17asyncwaveparams_tE16AllocHandleIndexEv */
	memhandle_t IndexToHandle(class CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t> *, int); /* linkage=_ZN16CSimpleDataCacheI14CAsyncWaveData17asyncwaveparams_tE13IndexToHandleEi */
	int HandleToIndex(class CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t> *, memhandle_t); /* linkage=_ZN16CSimpleDataCacheI14CAsyncWaveData17asyncwaveparams_tE13HandleToIndexEP13memhandle_t__ */
	memhandle_t FreeOldest(class CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t> *); /* linkage=_ZN16CSimpleDataCacheI14CAsyncWaveData17asyncwaveparams_tE10FreeOldestEv */
	void ~CSimpleDataCache(class CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t> *); /* linkage=_ZN16CSimpleDataCacheI14CAsyncWaveData17asyncwaveparams_tED4Ev */
};

// <024DB493> ../public/tier0/simpledatacache.h:34
inline void cache_table_t::Clear()
{
} /* size: 0 */

// <024DE5C3> ../public/tier0/simpledatacache.h:46
void CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::CSimpleDataCache()
{
} /* size: 0 */

// <024DE5AA> ../public/tier0/simpledatacache.h:46
inline void CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::CSimpleDataCache()
{
} /* size: 0 */

// <024DE525> ../public/tier0/simpledatacache.h:48
inline void CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::Init(uint nMemSize)
{
} /* size: 0 */

// <024DE50C> ../public/tier0/simpledatacache.h:54
inline void CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::Shutdown()
{
} /* size: 0 */

// <024DD9CB> ../public/tier0/simpledatacache.h:59
// variables: 2
inline void CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::Update(uint nCurrentTime, bool bForceFree)
{
	bool bFreed; // 61
	{
		memhandle_t hFree; // 65
	}
} /* size: 0, variables: 1 */

// <024DE4DB> ../public/tier0/simpledatacache.h:75
// variable: 1
inline void CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::Get(memhandle_t hCache)
{
	int nIndex; // 77
} /* size: 0, variables: 1 */

// <024DDB41> ../public/tier0/simpledatacache.h:83
// variables: 5
// function calls: 38
void CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::Create(const asyncwaveparams_t& params)
{
	CAsyncWaveData* pObject; // 85
	{
		int nIndex; // 88
		uint nObjectSize; // 90
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 223
		{
			int nIndex; // 226
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 226
			Destruct<int>(int* pMemory); // 1575
			{
				const bool  bNotLast; // 1578
			}
			CUtlVectorBase<int, CUtlMemory<int, int> >::FastRemove(
					int elem);  // 227
		}
		CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::NumAllocated(); // 1143
		CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this); // 368
		ResetDbgInfo(const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this); // 824
		CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::IsGrowable(); // 823
		CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::IsExternallyAllocated(); // 861
		CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::Grow(
			int num);  // 806
		GrowMemory(const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
				int num);  // 1145
		AddToTail(const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this); // 230
		CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
				int i);  // 231
		cache_table_t::Clear(); // 231
		CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::AllocHandleIndex(); // 221
		CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::AllocHandleIndex(); // 88
		CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
				int i);  // 89
		CAsyncWaveData::Size(); // 90
		CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
				int i);  // 91
		CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
				int i);  // 92
		CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
				int i);  // 93
		CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
				int i);  // 94
		IsValidIndex(const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCach this,
				int i);  // 237
		CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
				int i);  // 239
		{
		}
		CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
				int i);  // 240
		CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::IndexToHandle(
				int nIndex);  // 235
		CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::IndexToHandle(
				int nIndex);  // 96
	}
} /* size: 565, variables: 1 */

// <024DDB04> ../public/tier0/simpledatacache.h:110
// variable: 1
inline void CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::SetPriority(memhandle_t hCache, int16 nPriority)
{
	int nIndex; // 112
} /* size: 0, variables: 1 */

// <024DDAD3> ../public/tier0/simpledatacache.h:118
// variable: 1
inline void CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::Age(memhandle_t hCache)
{
	int nIndex; // 120
} /* size: 0, variables: 1 */

// <024DE861> ../public/tier0/simpledatacache.h:127
// variable: 1
inline void CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::Lock(memhandle_t hCache)
{
	int nIndex; // 129
} /* size: 0, variables: 1 */

// <024DE7FF> ../public/tier0/simpledatacache.h:137
// variable: 1
inline void CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::Touch(memhandle_t hCache)
{
	int nIndex; // 139
} /* size: 0, variables: 1 */

// <024DE830> ../public/tier0/simpledatacache.h:146
// variable: 1
inline void CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::Unlock(memhandle_t hCache)
{
	int nIndex; // 148
} /* size: 0, variables: 1 */

// <024DE7CE> ../public/tier0/simpledatacache.h:156
// variable: 1
inline void CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::LockCount(memhandle_t hCache)
{
	int nIndex; // 158
} /* size: 0, variables: 1 */

// <024DD91C> ../public/tier0/simpledatacache.h:166
inline void CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::GetBytesUsed()
{
} /* size: 0 */

// <024DE7B5> ../public/tier0/simpledatacache.h:167
inline void CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::GetBytesLimit()
{
} /* size: 0 */

// <024DE783> ../public/tier0/simpledatacache.h:168
// variables: 2
inline void CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::GetBytesLocked()
{
	uint nBytesLocked; // 170
	{
		int i; // 171
	}
} /* size: 0, variables: 1 */

// <024DDAAD> ../public/tier0/simpledatacache.h:181
// variable: 1
inline void CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::PurgeAllUnlocked()
{
	{
		int i; // 183
	}
} /* size: 0 */

// <024DD903> ../public/tier0/simpledatacache.h:193
inline void CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::ItemCount()
{
} /* size: 0 */

// <024DD8E0> ../public/tier0/simpledatacache.h:195
inline void CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::ItemHandleByIndex(int i)
{
} /* size: 0 */

// <024DC294> ../public/tier0/simpledatacache.h:203
// variables: 2
// function calls: 23
void CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::DestroyByIndex(int nIndex)
{
	const char   __FUNCTION__; // 17056
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 207
	}
	CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
			int i);  // 205
	CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
			int i);  // 208
	CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
			int i);  // 211
	CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
			int i);  // 213
	CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
			int i);  // 214
	CUtlMemory<int, int>::NumAllocated(); // 1196
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
	CUtlMemory<int, int>::IsGrowable(); // 823
	CUtlMemory<int, int>::IsExternallyAllocated(); // 859
	CUtlMemory<int, int>::IsExternallyAllocated(); // 861
	CUtlMemory<int, int>::Grow(
		int num);  // 806
	CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
			int num);  // 1198
	CUtlMemory<int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
		int i);  // 1201
	CopyConstruct<int>(int* pMemory,
				const int& src);  // 1201
	CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
			const int& src);  // 215
} /* size: 400, variables: 1, inline expansions: 23 (776 bytes) */

// <024DC8AF> ../public/tier0/simpledatacache.h:221
// variables: 3
inline void CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::AllocHandleIndex()
{
	int nFreeCount; // 223
	int nIndex; // 230
	{
		int nIndex; // 226
	}
} /* size: 0, variables: 2 */

// <024DC861> ../public/tier0/simpledatacache.h:235
// variables: 2
inline void CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::IndexToHandle(int nIndex)
{
	const char   __FUNCTION__; // 17035
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 239
	}
} /* size: 0, variables: 1 */

// <024DCEAA> ../public/tier0/simpledatacache.h:243
// variables: 2
inline void CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::HandleToIndex(memhandle_t hCache)
{
	uint32 nIndex; // 245
	uint32 nStamp; // 246
} /* size: 0, variables: 2 */

// <024DC170> ../public/tier0/simpledatacache.h:257
// variables: 5
inline void CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::FreeOldest()
{
	{
		uint nOldestStamp; // 262
		int nOldestIndex; // 263
		int nOldestPriority; // 264
		{
			int i; // 266
		}
		{
			memhandle_t hFree; // 282
		}
	}
} /* size: 0 */

