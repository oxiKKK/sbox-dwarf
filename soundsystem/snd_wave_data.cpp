
//
// soundsystem/snd_wave_data.cpp
//
//	referenced by: libengine2.so
//
//	functions: 77
//	classes: 2
//	struct: 1
//

// <024DA165> soundsystem/snd_wave_data.cpp:25
void MaybeReportMissingWav(const char *)
{
} /* size: 0 */

// <024D5754> soundsystem/snd_wave_data.cpp:30
// member function: 1
// member variables: 5
// struct size: 32
struct asyncwaveparams_t {
	/* soundsystem/snd_wave_data.cpp:32 */
	void asyncwaveparams_t(asyncwaveparams_t* );
	CSfxTable * m_pSfx; /* 0 8 */
	const char * m_pFilename; /* 8 8 */
	void * m_pMemory; /* 16 8 */
	uint m_nDataSize; /* 24 4 */
	int seekpos; /* 28 4 */
};

// <024E6DF8> soundsystem/snd_wave_data.cpp:32
void asyncwaveparams_t::asyncwaveparams_t()
{
} /* size: 0 */

// <024E6DDF> soundsystem/snd_wave_data.cpp:32
inline void asyncwaveparams_t::asyncwaveparams_t()
{
} /* size: 0 */

// <024D57DA> soundsystem/snd_wave_data.cpp:50
// member functions: 60
// member variables: 8
// vtable entries: 18
// class size: 224
class CAsyncWavDataCache : public IAsyncWavDataCache {
	/* soundsystem/snd_wave_data.cpp:95 */
	enum MemoryUsageType {
		SPEW_BASIC = 0,
		SPEW_MUSIC_NONSTREAMING = 1,
		SPEW_NONSTREAMING = 2,
		SPEW_ALL = 3,
	};
public:
	/* class IAsyncWavDataCache <ancestor>; */ /* 0 8 */
	void CAsyncWavDataCache(CAsyncWavDataCache* , const CAsyncWavDataCache& );
private:
	/* soundsystem/snd_wave_data.cpp:826 */
	void FrameUpdate_Internal(CAsyncWavDataCache* );
	/* soundsystem/snd_wave_data.cpp:514 */
	void CAsyncWavDataCache(CAsyncWavDataCache* );
	/* soundsystem/snd_wave_data.cpp:56 */
	void ~CAsyncWavDataCache(CAsyncWavDataCache* );
	/* soundsystem/snd_wave_data.cpp:526 */
	virtual bool Init(CAsyncWavDataCache* , unsigned int, bool);
	/* soundsystem/snd_wave_data.cpp:547 */
	virtual void Shutdown(CAsyncWavDataCache* );
	/* soundsystem/snd_wave_data.cpp:626 */
	virtual void AsyncLoadCache(CAsyncWavDataCache* , const char* , CSfxTable* );
	/* soundsystem/snd_wave_data.cpp:681 */
	virtual void Unload(CAsyncWavDataCache* , memhandle_t);
	/* soundsystem/snd_wave_data.cpp:706 */
	virtual void* GetDataPointer(CAsyncWavDataCache* , CSfxTable* );
	/* soundsystem/snd_wave_data.cpp:743 */
	virtual bool IsDataLoadCompleted(CAsyncWavDataCache* , memhandle_t, bool* , bool* );
	/* soundsystem/snd_wave_data.cpp:763 */
	virtual bool RestartDataLoad(CAsyncWavDataCache* , CSfxTable* );
	/* soundsystem/snd_wave_data.cpp:774 */
	virtual bool IsDataLoadInProgress(CAsyncWavDataCache* , memhandle_t);
	/* soundsystem/snd_wave_data.cpp:787 */
	virtual void Flush(CAsyncWavDataCache* , bool);
	/* soundsystem/snd_wave_data.cpp:76 */
	virtual bool LockHandle(CAsyncWavDataCache* , memhandle_t);
	/* soundsystem/snd_wave_data.cpp:77 */
	virtual void UnlockHandle(CAsyncWavDataCache* , memhandle_t);
	/* soundsystem/snd_wave_data.cpp:848 */
	virtual void FrameUpdate(CAsyncWavDataCache* );
	/* soundsystem/snd_wave_data.cpp:79 */
	virtual void TouchHandle(CAsyncWavDataCache* , memhandle_t);
	/* soundsystem/snd_wave_data.cpp:567 */
	virtual void* AllocWaveMemory(CAsyncWavDataCache* , uint32);
	/* soundsystem/snd_wave_data.cpp:580 */
	virtual uint32 FreeWaveMemory(CAsyncWavDataCache* , void* );
	/* soundsystem/snd_wave_data.cpp:591 */
	virtual void* EnsureMemoryIsWritable(CAsyncWavDataCache* , memhandle_t);
	/* soundsystem/snd_wave_data.cpp:945 */
	virtual void ClearCache(CAsyncWavDataCache* );
	/* soundsystem/snd_wave_data.cpp:84 */
	virtual bool CheckHandle(CAsyncWavDataCache* , memhandle_t);
	/* soundsystem/snd_wave_data.cpp:803 */
	void NotifyFree(CAsyncWavDataCache* , memhandle_t);
	/* soundsystem/snd_wave_data.cpp:809 */
	void FlushNotify(CAsyncWavDataCache* );
	/* soundsystem/snd_wave_data.cpp:93 */
	void SetFailedRequestBytes(CAsyncWavDataCache* , uint32);
	/* soundsystem/snd_wave_data.cpp:868 */
	void SpewMemoryUsage(CAsyncWavDataCache* , MemoryUsageType);
	/* soundsystem/snd_wave_data.cpp:925 */
	void QueueUpdate(CAsyncWavDataCache* , CAsyncWaveData* );
	/* soundsystem/snd_wave_data.cpp:930 */
	void FlushUpdateQueue(CAsyncWavDataCache* );
	/* soundsystem/snd_wave_data.cpp:105 */
	uint BytesTotal(const CAsyncWavDataCache* );
	/* soundsystem/snd_wave_data.cpp:106 */
	uint BytesLocked(const CAsyncWavDataCache* );
	CUtlMemoryArena * m_pArena; /* 8 8 */
	bool m_bInitialized; /* 16 1 */
	uint32 m_nFailedRequestBytes; /* 20 4 */
	CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t> m_cache; /* 24 80 */
	CTSQueue<CAsyncWaveData*, false> m_Updated __attribute__((__aligned__(16))); /* 112 64 */
	CUtlVector<memhandle_t__*, CUtlMemory<memhandle_t__*, int> > m_notifyFree; /* 176 32 */
	bool m_bPreferMemoryMapping; /* 208 1 */
	void CAsyncWavDataCache(class CAsyncWavDataCache *, const class CAsyncWavDataCache  &); /* linkage=_ZN18CAsyncWavDataCacheC4ERKS_ */
	void FrameUpdate_Internal(class CAsyncWavDataCache *); /* linkage=_ZN18CAsyncWavDataCache20FrameUpdate_InternalEv */
	void CAsyncWavDataCache(class CAsyncWavDataCache *); /* linkage=_ZN18CAsyncWavDataCacheC4Ev */
	void ~CAsyncWavDataCache(class CAsyncWavDataCache *); /* linkage=_ZN18CAsyncWavDataCacheD4Ev */
	/* <24e8077> soundsystem/snd_wave_data.cpp:526 */
	virtual bool Init(class CAsyncWavDataCache *, unsigned int, bool); /* linkage=_ZN18CAsyncWavDataCache4InitEjb */
	/* <24ea063> soundsystem/snd_wave_data.cpp:547 */
	virtual void Shutdown(class CAsyncWavDataCache *); /* linkage=_ZN18CAsyncWavDataCache8ShutdownEv */
	/* <24e9c66> soundsystem/snd_wave_data.cpp:626 */
	virtual void AsyncLoadCache(class CAsyncWavDataCache *, const char  *, class CSfxTable *); /* linkage=_ZN18CAsyncWavDataCache14AsyncLoadCacheEPKcP9CSfxTable */
	/* <24e8c17> soundsystem/snd_wave_data.cpp:681 */
	virtual void Unload(class CAsyncWavDataCache *, memhandle_t); /* linkage=_ZN18CAsyncWavDataCache6UnloadEP13memhandle_t__ */
	virtual void * GetDataPointer(class CAsyncWavDataCache *, class CSfxTable *); /* linkage=_ZN18CAsyncWavDataCache14GetDataPointerEP9CSfxTable */
	virtual bool IsDataLoadCompleted(class CAsyncWavDataCache *, memhandle_t, bool *, bool *); /* linkage=_ZN18CAsyncWavDataCache19IsDataLoadCompletedEP13memhandle_t__PbS2_ */
	/* <24e9d0e> soundsystem/snd_wave_data.cpp:763 */
	virtual bool RestartDataLoad(class CAsyncWavDataCache *, class CSfxTable *); /* linkage=_ZN18CAsyncWavDataCache15RestartDataLoadEP9CSfxTable */
	virtual bool IsDataLoadInProgress(class CAsyncWavDataCache *, memhandle_t); /* linkage=_ZN18CAsyncWavDataCache20IsDataLoadInProgressEP13memhandle_t__ */
	/* <24ea75a> soundsystem/snd_wave_data.cpp:787 */
	virtual void Flush(class CAsyncWavDataCache *, bool); /* linkage=_ZN18CAsyncWavDataCache5FlushEb */
	virtual bool LockHandle(class CAsyncWavDataCache *, memhandle_t); /* linkage=_ZN18CAsyncWavDataCache10LockHandleEP13memhandle_t__ */
	virtual void UnlockHandle(class CAsyncWavDataCache *, memhandle_t); /* linkage=_ZN18CAsyncWavDataCache12UnlockHandleEP13memhandle_t__ */
	virtual void FrameUpdate(class CAsyncWavDataCache *); /* linkage=_ZN18CAsyncWavDataCache11FrameUpdateEv */
	virtual void TouchHandle(class CAsyncWavDataCache *, memhandle_t); /* linkage=_ZN18CAsyncWavDataCache11TouchHandleEP13memhandle_t__ */
	/* <24e7f78> soundsystem/snd_wave_data.cpp:567 */
	virtual void * AllocWaveMemory(class CAsyncWavDataCache *, uint32); /* linkage=_ZN18CAsyncWavDataCache15AllocWaveMemoryEj */
	/* <24e828f> soundsystem/snd_wave_data.cpp:580 */
	virtual uint32 FreeWaveMemory(class CAsyncWavDataCache *, void *); /* linkage=_ZN18CAsyncWavDataCache14FreeWaveMemoryEPv */
	virtual void * EnsureMemoryIsWritable(class CAsyncWavDataCache *, memhandle_t); /* linkage=_ZN18CAsyncWavDataCache22EnsureMemoryIsWritableEP13memhandle_t__ */
	virtual void ClearCache(class CAsyncWavDataCache *); /* linkage=_ZN18CAsyncWavDataCache10ClearCacheEv */
	virtual bool CheckHandle(class CAsyncWavDataCache *, memhandle_t); /* linkage=_ZN18CAsyncWavDataCache11CheckHandleEP13memhandle_t__ */
	/* <24eab98> soundsystem/snd_wave_data.cpp:803 */
	void NotifyFree(class CAsyncWavDataCache *, memhandle_t); /* linkage=_ZN18CAsyncWavDataCache10NotifyFreeEP13memhandle_t__ */
	/* <24e9278> soundsystem/snd_wave_data.cpp:809 */
	void FlushNotify(class CAsyncWavDataCache *); /* linkage=_ZN18CAsyncWavDataCache11FlushNotifyEv */
	void SetFailedRequestBytes(class CAsyncWavDataCache *, uint32); /* linkage=_ZN18CAsyncWavDataCache21SetFailedRequestBytesEj */
	/* <24e9410> soundsystem/snd_wave_data.cpp:868 */
	void SpewMemoryUsage(class CAsyncWavDataCache *, enum MemoryUsageType); /* linkage=_ZN18CAsyncWavDataCache15SpewMemoryUsageENS_15MemoryUsageTypeE */
	/* <24ea009> soundsystem/snd_wave_data.cpp:925 */
	void QueueUpdate(class CAsyncWavDataCache *, class CAsyncWaveData *); /* linkage=_ZN18CAsyncWavDataCache11QueueUpdateEP14CAsyncWaveData */
	/* <24ea3e9> soundsystem/snd_wave_data.cpp:930 */
	void FlushUpdateQueue(class CAsyncWavDataCache *); /* linkage=_ZN18CAsyncWavDataCache16FlushUpdateQueueEv */
	uint BytesTotal(const class CAsyncWavDataCache  *); /* linkage=_ZNK18CAsyncWavDataCache10BytesTotalEv */
	uint BytesLocked(const class CAsyncWavDataCache  *); /* linkage=_ZNK18CAsyncWavDataCache11BytesLockedEv */
} __attribute__((__aligned__(16)));

// <024E62DC> soundsystem/snd_wave_data.cpp:56
// function calls: 42
void CAsyncWavDataCache::~CAsyncWavDataCache()
{
	CUtlVectorBase<memhandle_t__::RemoveAll(); // 1798
	CUtlMemory<memhandle_t__::IsExternallyAllocated(); // 905
	CUtlMemory<memhandle_t__::Purge(); // 903
	CUtlMemory<memhandle_t__::Purge(); // 1799
	CUtlVectorBase<memhandle_t__::Purge(); // 560
	ValidateAlignment<memhandle_t__*>(void); // 508
	CUtlMemory<memhandle_t__::Purge(); // 510
	CUtlMemory<memhandle_t__::~CUtlMemory(); // 562
	CUtlVectorBase<memhandle_t__::~CUtlVectorBase(); // 410
	CUtlVector<memhandle_t__::~CUtlVector(); // 62
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	ThreadPause(void); // 208
	CTSListBase::Pop(); // 890
	CInterlockedIntT<int, 4>::operator==(
			int rhs);  // 895
	{
	}
	{
	}
	{
	}
	CTSQueue<CAsyncWaveData::Purge(); // 870
	CInterlockedIntT<int, 4>::operator==(
			int rhs);  // 871
	{
	}
	{
	}
	CTSQueue<CAsyncWaveData::End(); // 873
	{
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 135
	CTSListBase::~CTSListBase(); // 876
	CTSQueue<CAsyncWaveData::~CTSQueue(); // 62
	RemoveAll(const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this); // 1798
	CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::Purge(); // 903
	CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this); // 560
	ValidateAlignment<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t>(void); // 508
	CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::Purge(); // 510
	CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this); // 410
	~CUtlVector(const CUtlVector<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsyncWa this); // 22
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 22
	CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::~CSimpleDataCache(); // 62
} /* size: 736, inline expansions: 42 (1696 bytes) */

// <024E62C3> soundsystem/snd_wave_data.cpp:56
inline void CAsyncWavDataCache::~CAsyncWavDataCache()
{
} /* size: 0 */

// <024E5FBC> soundsystem/snd_wave_data.cpp:76
// function calls: 11
void CAsyncWavDataCache::LockHandle(memhandle_t handle)
{
	IsValidIndex(const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCach this,
			int i);  // 247
	CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
			int i);  // 249
	CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::HandleToIndex(
			memhandle_t hCache);  // 129
	CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
			int i);  // 132
	CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
			int i);  // 133
	CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
			int i);  // 134
	CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::Lock(
		memhandle_t hCache);  // 76
} /* size: 91, inline expansions: 11 (154 bytes) */

// <024E5D1C> soundsystem/snd_wave_data.cpp:77
// function calls: 9
void CAsyncWavDataCache::UnlockHandle(memhandle_t handle)
{
	IsValidIndex(const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCach this,
			int i);  // 247
	CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
			int i);  // 249
	CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::HandleToIndex(
			memhandle_t hCache);  // 148
	CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
			int i);  // 151
	CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
			int i);  // 152
	CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::Unlock(
		memhandle_t hCache);  // 77
} /* size: 63, inline expansions: 9 (121 bytes) */

// <024E5AFB> soundsystem/snd_wave_data.cpp:79
// function calls: 7
void CAsyncWavDataCache::TouchHandle(memhandle_t handle)
{
	IsValidIndex(const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCach this,
			int i);  // 247
	CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
			int i);  // 249
	CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::HandleToIndex(
			memhandle_t hCache);  // 139
	CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
			int i);  // 142
	CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::Touch(
		memhandle_t hCache);  // 79
} /* size: 48, inline expansions: 7 (85 bytes) */

// <024E58FE> soundsystem/snd_wave_data.cpp:84
// function calls: 7
void CAsyncWavDataCache::CheckHandle(memhandle_t handle)
{
	IsValidIndex(const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCach this,
			int i);  // 247
	CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
			int i);  // 249
	CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::HandleToIndex(
			memhandle_t hCache);  // 158
	CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
			int i);  // 161
	CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::LockCount(
			memhandle_t hCache);  // 86
} /* size: 71, inline expansions: 7 (93 bytes) */

// <024E58D9> soundsystem/snd_wave_data.cpp:93
inline void CAsyncWavDataCache::SetFailedRequestBytes(uint32 nBytes)
{
} /* size: 0 */

// <024E58C0> soundsystem/snd_wave_data.cpp:105
inline void CAsyncWavDataCache::BytesTotal()
{
} /* size: 0 */

// <024E58A7> soundsystem/snd_wave_data.cpp:106
inline void CAsyncWavDataCache::BytesLocked()
{
} /* size: 0 */

// <024E5774> soundsystem/snd_wave_data.cpp:125
void CAsyncWaveData::~CAsyncWaveData()
{
} /* size: 0 */

// <024E5757> soundsystem/snd_wave_data.cpp:125
inline void CAsyncWaveData::~CAsyncWaveData()
{
} /* size: 0 */

// <024D78FB> soundsystem/snd_wave_data.cpp:125
// member functions: 30
// member variables: 13
// class size: 80
class CAsyncWaveData {
	/* soundsystem/snd_wave_data.cpp:128 */
	void CAsyncWaveData(CAsyncWaveData* );
	/* soundsystem/snd_wave_data.cpp:131 */
	void DestroyResource(CAsyncWaveData* );
	/* soundsystem/snd_wave_data.cpp:132 */
	CAsyncWaveData* GetData(CAsyncWaveData* );
	/* soundsystem/snd_wave_data.cpp:133 */
	unsigned int Size(CAsyncWaveData* );
	/* soundsystem/snd_wave_data.cpp:135 */
	CAsyncWaveData* CreateResource(const asyncwaveparams_t& );
	/* soundsystem/snd_wave_data.cpp:136 */
	unsigned int EstimatedSize(const asyncwaveparams_t& );
	/* soundsystem/snd_wave_data.cpp:137 */
	void NotifyFree(memhandle_t);
	/* soundsystem/snd_wave_data.cpp:139 */
	void OnAsyncCompleted(CAsyncWaveData* , IAsyncReadRequest2* , AsyncRequestStatus_t);
	/* soundsystem/snd_wave_data.cpp:140 */
	bool BlockingCopyData(CAsyncWaveData* , void* , int, int, int);
	/* soundsystem/snd_wave_data.cpp:141 */
	bool BlockingGetDataPointer(CAsyncWaveData* , void** );
	/* soundsystem/snd_wave_data.cpp:142 */
	void SetAsyncPriority(CAsyncWaveData* , AsyncRequestPriority_t);
	/* soundsystem/snd_wave_data.cpp:143 */
	void StartAsyncLoading(CAsyncWaveData* , const asyncwaveparams_t& );
	/* soundsystem/snd_wave_data.cpp:145 */
	bool IsCurrentlyLoading(CAsyncWaveData* );
	/* soundsystem/snd_wave_data.cpp:146 */
	const char* GetFileName(CAsyncWaveData* , CBufferString* );
	int m_nDataSize; /* 0 4 */
	int m_nReadSize; /* 4 4 */
	void * m_pvData; /* 8 8 */
	void * m_pAlloc; /* 16 8 */
	IMemoryMappedFile * m_pMemoryMappedFile; /* 24 8 */
	shared_ptr<IAsyncReadRequest2> m_pAsyncRequest; /* 32 16 */
	float m_start; /* 48 4 */
	float m_arrival; /* 52 4 */
	CSfxTable * m_pSfx; /* 56 8 */
	int m_nOffset; /* 64 4 */
	AsyncRequestPriority_t m_nPriority; /* 68 4 */
	unsigned int m_bLoaded:1; /* 72: 0 4 */
	unsigned int m_bMissing:1; /* 72: 1 4 */
	void ~CAsyncWaveData(CAsyncWaveData* );
	void CAsyncWaveData(class CAsyncWaveData *); /* linkage=_ZN14CAsyncWaveDataC4Ev */
	void DestroyResource(class CAsyncWaveData *); /* linkage=_ZN14CAsyncWaveData15DestroyResourceEv */
	class CAsyncWaveData * GetData(class CAsyncWaveData *); /* linkage=_ZN14CAsyncWaveData7GetDataEv */
	/* <24e8f4c> soundsystem/snd_wave_data.cpp:239 */
	unsigned int Size(class CAsyncWaveData *); /* linkage=_ZN14CAsyncWaveData4SizeEv */
	class CAsyncWaveData * CreateResource(const class asyncwaveparams_t  &); /* linkage=_ZN14CAsyncWaveData14CreateResourceERK17asyncwaveparams_t */
	unsigned int EstimatedSize(const class asyncwaveparams_t  &); /* linkage=_ZN14CAsyncWaveData13EstimatedSizeERK17asyncwaveparams_t */
	/* <24ea960> soundsystem/snd_wave_data.cpp:273 */
	void NotifyFree(memhandle_t); /* linkage=_ZN14CAsyncWaveData10NotifyFreeEP13memhandle_t__ */
	void OnAsyncCompleted(class CAsyncWaveData *, class IAsyncReadRequest2 *, enum AsyncRequestStatus_t); /* linkage=_ZN14CAsyncWaveData16OnAsyncCompletedEP18IAsyncReadRequest220AsyncRequestStatus_t */
	bool BlockingCopyData(class CAsyncWaveData *, void *, int, int, int); /* linkage=_ZN14CAsyncWaveData16BlockingCopyDataEPviii */
	bool BlockingGetDataPointer(class CAsyncWaveData *, void * *); /* linkage=_ZN14CAsyncWaveData22BlockingGetDataPointerEPPv */
	/* <24e8f84> soundsystem/snd_wave_data.cpp:460 */
	void SetAsyncPriority(class CAsyncWaveData *, enum AsyncRequestPriority_t); /* linkage=_ZN14CAsyncWaveData16SetAsyncPriorityE22AsyncRequestPriority_t */
	void StartAsyncLoading(class CAsyncWaveData *, const class asyncwaveparams_t  &); /* linkage=_ZN14CAsyncWaveData17StartAsyncLoadingERK17asyncwaveparams_t */
	bool IsCurrentlyLoading(class CAsyncWaveData *); /* linkage=_ZN14CAsyncWaveData18IsCurrentlyLoadingEv */
	/* <24e8ede> soundsystem/snd_wave_data.cpp:215 */
	const char  * GetFileName(class CAsyncWaveData *, class CBufferString *); /* linkage=_ZN14CAsyncWaveData11GetFileNameEP13CBufferString */
	void ~CAsyncWaveData(class CAsyncWaveData *); /* linkage=_ZN14CAsyncWaveDataD4Ev */
};

// <024E57A7> soundsystem/snd_wave_data.cpp:170
// function calls: 3
void CAsyncWaveData::CAsyncWaveData()
{
	__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count()2>* this); // 1470
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::__shared_ptr()2>* this); // 201
	shared_ptr<IAsyncReadRequest2>::shared_ptr(); // 181
} /* size: 0, inline expansions: 3 (0 bytes) */

// <024E578B> soundsystem/snd_wave_data.cpp:170
void CAsyncWaveData::CAsyncWaveData()
{
} /* size: 0 */

// <024E4D73> soundsystem/snd_wave_data.cpp:188
// variables: 16
// function calls: 43
void CAsyncWaveData::DestroyResource()
{
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::operator bool()2>* this); // 561
	operator==<IAsyncReadRequest2>(const shared_ptr<IAsyncReadRequest2>& __a,
					nullptr_t);  // 190
	__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count()2>* this); // 1539
	__shared_count<(__gnu_cxx::_Lock_policy)2>::_M_swap(
		__shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 1541
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::__shared_ptr(
			__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>& __r); // 1627
	swap<IAsyncReadRequest2*>(IAsyncReadRequest2 *& __a,
					IAsyncReadRequest2 *& __b);  // 1693
	__shared_count<(__gnu_cxx::_Lock_policy)2>::_M_swap(
		__shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 1694
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::swap(
		__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>& __other); // 1627
	{
		const int  __wordbits; // 330
		const int  __shiftbits; // 331
		const long long int  __unique_ref; // 332
		long long int* __both_counts; // 333
		__is_single_threaded(void); // 100
		__exchange_and_add_single(_Atomic_word* __mem,
						int __val);  // 101
		__exchange_and_add(volatile _Atomic_word* __mem,
					int __val);  // 103
		__exchange_and_add_dispatch(_Atomic_word* __mem,
						int __val);  // 349
	}
	{
		const int  __wordbits; // 330
		const int  __shiftbits; // 331
		const long long int  __unique_ref; // 332
		long long int* __both_counts; // 333
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_destroy()2>* this); // 346
	}
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 316
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 1069
	__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 1627
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::operator=(
			__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>& __r); // 439
	shared_ptr<IAsyncReadRequest2>::operator=(
			shared_ptr<IAsyncReadRequest2>& __r);  // 194
	CInterlockedIntT<unsigned int, 4>::operator unsigned int(); // 238
	{
	}
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 239
	IMemoryMappedFile::Release(); // 236
	IMemoryMappedFile::Release(); // 201
	{
		const int  __wordbits; // 330
		const int  __shiftbits; // 331
		const long long int  __unique_ref; // 332
		long long int* __both_counts; // 333
		__is_single_threaded(void); // 100
		__exchange_and_add_single(_Atomic_word* __mem,
						int __val);  // 101
		__exchange_and_add(volatile _Atomic_word* __mem,
					int __val);  // 103
		__exchange_and_add_dispatch(_Atomic_word* __mem,
						int __val);  // 349
	}
	{
		const int  __wordbits; // 330
		const int  __shiftbits; // 331
		const long long int  __unique_ref; // 332
		long long int* __both_counts; // 333
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_destroy()2>* this); // 346
	}
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 316
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 1069
	__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 175
	shared_ptr<IAsyncReadRequest2>::~shared_ptr(); // 125
	CAsyncWaveData::~CAsyncWaveData(); // 208
	{
	}
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 582
	}
	CAsyncWavDataCache::FreeWaveMemory(
			void* pMem);  // 580
	CAsyncWavDataCache::FreeWaveMemory(
			void* pMem);  // 205
} /* size: 0, inline expansions: 27 (2266 bytes) */

// <024E8EDE> soundsystem/snd_wave_data.cpp:215
void CAsyncWaveData::GetFileName(CBufferString* pNameOut)
{
} /* size: 0 */

// <024E8018> soundsystem/snd_wave_data.cpp:215
void CBufferString::GetFileName()
{
	{
	}
} /* size: 30 */

// <024E4D27> soundsystem/snd_wave_data.cpp:215
// variables: 2
void CAsyncWaveData::GetFileName(CBufferString* pNameOut)
{
	const char   __FUNCTION__; // 17014
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 222
	}
} /* size: 0, variables: 1 */

// <024E4CF5> soundsystem/snd_wave_data.cpp:230
void CAsyncWaveData::GetData()
{
} /* size: 0 */

// <024E8F4C> soundsystem/snd_wave_data.cpp:239
// variable: 1
void CAsyncWaveData::Size()
{
	uint size; // 241
} /* size: 0, variables: 1 */

// <024E4BB9> soundsystem/snd_wave_data.cpp:251
// variable: 1
// function calls: 4
void CreateResource(const asyncwaveparams_t& params)
{
	CAsyncWaveData* pData; // 253
	__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count()2>* this); // 1470
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::__shared_ptr()2>* this); // 201
	shared_ptr<IAsyncReadRequest2>::shared_ptr(); // 181
	CAsyncWaveData::CAsyncWaveData(); // 255
} /* size: 109, variables: 1, inline expansions: 4 (82 bytes) */

// <024E4B72> soundsystem/snd_wave_data.cpp:266
// variable: 1
void EstimatedSize(const asyncwaveparams_t& params)
{
	uint nSize; // 268
} /* size: 0, variables: 1 */

// <024EA960> soundsystem/snd_wave_data.cpp:273
// function calls: 10
void NotifyFree(memhandle_t hFree)
{
	CUtlMemory<memhandle_t__::NumAllocated(); // 1196
	CUtlMemory<memhandle_t__::operator[](
			int i);  // 602
	CUtlVectorBase<memhandle_t__::Element(
		int i);  // 1201
	CopyConstruct<memhandle_t__*>(memhandle_t__** pMemory,
					memhandle_t__* const& src);  // 1201
	CUtlMemory<memhandle_t__::Base(); // 112
	CUtlVectorBase<memhandle_t__::Base(); // 368
	CUtlVectorBase<memhandle_t__::ResetDbgInfo(); // 824
	CUtlVectorBase<memhandle_t__::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<memhandle_t__::AddToTail(
			memhandle_t__* const& src);  // 805
	CAsyncWavDataCache::NotifyFree(
			memhandle_t hFree);  // 275
} /* size: 0, inline expansions: 10 (0 bytes) */

// <024E4B56> soundsystem/snd_wave_data.cpp:273
void NotifyFree(memhandle_t hFree)
{
} /* size: 0 */

// <024E44C7> soundsystem/snd_wave_data.cpp:285
// variables: 8
// function calls: 30
void CAsyncWaveData::OnAsyncCompleted(IAsyncReadRequest2* pRequest, AsyncRequestStatus_t status)
{
	__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count()2>* this); // 1539
	__shared_count<(__gnu_cxx::_Lock_policy)2>::_M_swap(
		__shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 1541
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::__shared_ptr(
			__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>& __r); // 1627
	swap<IAsyncReadRequest2*>(IAsyncReadRequest2 *& __a,
					IAsyncReadRequest2 *& __b);  // 1693
	__shared_count<(__gnu_cxx::_Lock_policy)2>::_M_swap(
		__shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 1694
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::swap(
		__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>& __other); // 1627
	{
		const int  __wordbits; // 330
		const int  __shiftbits; // 331
		const long long int  __unique_ref; // 332
		long long int* __both_counts; // 333
		__is_single_threaded(void); // 100
		__exchange_and_add_single(_Atomic_word* __mem,
						int __val);  // 101
		__exchange_and_add(volatile _Atomic_word* __mem,
					int __val);  // 103
		__exchange_and_add_dispatch(_Atomic_word* __mem,
						int __val);  // 349
	}
	{
		const int  __wordbits; // 330
		const int  __shiftbits; // 331
		const long long int  __unique_ref; // 332
		long long int* __both_counts; // 333
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_destroy()2>* this); // 346
	}
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 316
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 1069
	__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 1627
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::operator=(
			__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>& __r); // 439
	shared_ptr<IAsyncReadRequest2>::operator=(
			shared_ptr<IAsyncReadRequest2>& __r);  // 313
	__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 175
	shared_ptr<IAsyncReadRequest2>::~shared_ptr(); // 313
	CAsyncWavDataCache::QueueUpdate(
			CAsyncWaveData* pUpdate);  // 315
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 94
	IAsyncReadRequest2::GetFileName(); // 309
} /* size: 519, inline expansions: 20 (1216 bytes) */

// <024E391C> soundsystem/snd_wave_data.cpp:326
// variables: 15
// function calls: 46
void CAsyncWaveData::BlockingCopyData(void* destbuffer, int destbufsize, int startoffset, int count)
{
	const char   __FUNCTION__; // 17098
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 330
	}
	{
		CBufferString soundName; // 337
		double st; // 338
		double ed; // 340
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 337
		CAsyncWaveData::GetFileName(
				CBufferString* pNameOut);  // 341
		CBufferString::~CBufferString(); // 342
	}
	{
		CPathBufferString soundName; // 355
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 355
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 358
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 360
	}
	{
		CPathBufferString soundName; // 368
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 368
		CAsyncWaveData::GetFileName(
				CBufferString* pNameOut);  // 369
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 371
	}
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::operator bool()2>* this); // 330
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 334
	ConVar::GetInt(); // 366
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 385
	__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count()2>* this); // 1539
	__shared_count<(__gnu_cxx::_Lock_policy)2>::_M_swap(
		__shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 1541
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::__shared_ptr(
			__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>& __r); // 1627
	swap<IAsyncReadRequest2*>(IAsyncReadRequest2 *& __a,
					IAsyncReadRequest2 *& __b);  // 1693
	__shared_count<(__gnu_cxx::_Lock_policy)2>::_M_swap(
		__shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 1694
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::swap(
		__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>& __other); // 1627
	{
		const int  __wordbits; // 330
		const int  __shiftbits; // 331
		const long long int  __unique_ref; // 332
		long long int* __both_counts; // 333
		__is_single_threaded(void); // 100
		__exchange_and_add_single(_Atomic_word* __mem,
						int __val);  // 101
		__exchange_and_add(volatile _Atomic_word* __mem,
					int __val);  // 103
		__exchange_and_add_dispatch(_Atomic_word* __mem,
						int __val);  // 349
	}
	{
		const int  __wordbits; // 330
		const int  __shiftbits; // 331
		const long long int  __unique_ref; // 332
		long long int* __both_counts; // 333
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_destroy()2>* this); // 346
	}
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 316
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 1069
	__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 1627
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::operator=(
			__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>& __r); // 439
	shared_ptr<IAsyncReadRequest2>::operator=(
			shared_ptr<IAsyncReadRequest2>& __r);  // 387
} /* size: 0, variables: 1, inline expansions: 18 (0 bytes) */

// <024E3874> soundsystem/snd_wave_data.cpp:392
// function calls: 2
void CAsyncWaveData::IsCurrentlyLoading()
{
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::operator bool()2>* this); // 561
	operator==<IAsyncReadRequest2>(const shared_ptr<IAsyncReadRequest2>& __a,
					nullptr_t);  // 398
} /* size: 57, inline expansions: 2 (8 bytes) */

// <024E2CFE> soundsystem/snd_wave_data.cpp:408
// variables: 15
// function calls: 48
void CAsyncWaveData::BlockingGetDataPointer(void** ppData)
{
	const char   __FUNCTION__; // 17140
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 410
	}
	{
		double st; // 417
		double ed; // 419
		CPathBufferString soundName; // 420
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 420
		CAsyncWaveData::GetFileName(
				CBufferString* pNameOut);  // 421
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 422
	}
	{
		CPathBufferString soundName; // 437
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 437
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 440
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 442
	}
	{
		CPathBufferString soundName; // 450
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 450
		CAsyncWaveData::GetFileName(
				CBufferString* pNameOut);  // 451
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 453
	}
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 415
	__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count()2>* this); // 1539
	__shared_count<(__gnu_cxx::_Lock_policy)2>::_M_swap(
		__shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 1541
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::__shared_ptr(
			__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>& __r); // 1627
	swap<IAsyncReadRequest2*>(IAsyncReadRequest2 *& __a,
					IAsyncReadRequest2 *& __b);  // 1693
	__shared_count<(__gnu_cxx::_Lock_policy)2>::_M_swap(
		__shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 1694
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::swap(
		__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>& __other); // 1627
	{
		const int  __wordbits; // 330
		const int  __shiftbits; // 331
		const long long int  __unique_ref; // 332
		long long int* __both_counts; // 333
		__is_single_threaded(void); // 100
		__exchange_and_add_single(_Atomic_word* __mem,
						int __val);  // 101
		__exchange_and_add(volatile _Atomic_word* __mem,
					int __val);  // 103
		__exchange_and_add_dispatch(_Atomic_word* __mem,
						int __val);  // 349
	}
	{
		const int  __wordbits; // 330
		const int  __shiftbits; // 331
		const long long int  __unique_ref; // 332
		long long int* __both_counts; // 333
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_destroy()2>* this); // 346
	}
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 316
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 1069
	__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 1627
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::operator=(
			__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>& __r); // 439
	shared_ptr<IAsyncReadRequest2>::operator=(
			shared_ptr<IAsyncReadRequest2>& __r);  // 429
	__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 175
	shared_ptr<IAsyncReadRequest2>::~shared_ptr(); // 429
	ConVar::GetInt(); // 448
} /* size: 0, variables: 1, inline expansions: 18 (0 bytes) */

// <024E8F84> soundsystem/snd_wave_data.cpp:460
// variable: 1
// function calls: 10
void CAsyncWaveData::SetAsyncPriority(AsyncRequestPriority_t priority)
{
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::operator bool()2>* this); // 561
	operator==<IAsyncReadRequest2>(const shared_ptr<IAsyncReadRequest2>& __a,
					nullptr_t);  // 465
	ConVar::GetInt(); // 469
	{
		CPathBufferString soundName; // 471
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 471
		CAsyncWaveData::GetFileName(
				CBufferString* pNameOut);  // 472
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 473
	}
	CAsyncWaveData::SetAsyncPriority(
			AsyncRequestPriority_t priority);  // 460
} /* size: 0, inline expansions: 4 (224 bytes) */

// <024E2CC6> soundsystem/snd_wave_data.cpp:460
// variable: 1
void CAsyncWaveData::SetAsyncPriority(AsyncRequestPriority_t priority)
{
	{
		CPathBufferString soundName; // 471
	}
} /* size: 0 */

// <024E1D38> soundsystem/snd_wave_data.cpp:481
// variables: 22
// function calls: 69
void CAsyncWaveData::StartAsyncLoading(const asyncwaveparams_t& params)
{
	const char   __FUNCTION__; // 17119
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 483
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 497
	}
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::operator bool()2>* this); // 561
	operator==<IAsyncReadRequest2>(const shared_ptr<IAsyncReadRequest2>& __a,
					nullptr_t);  // 497
	_M_ptr(const __uniq_ptr_impl<IAsyncFileSystem2::IReadRequestBuilder, std::default_delete<IAsyncFileSystem2::IReadRequestBu this); // 472
	get(const unique_ptr<IAsyncFileSystem2::IReadRequestBuilder, std::default_delete<IAsyncFileSystem2::IReadRequestBuilder this); // 465
	operator->(const unique_ptr<IAsyncFileSystem2::IReadRequestBuilder, std::default_delete<IAsyncFileSystem2::IReadRequestBuilder this); // 505
	IReadRequestBuilder::SetAllowMemoryMap(
				bool bAllow);  // 505
	IReadRequestBuilder::SetPreferMemoryMap(
				bool bPrefer);  // 505
	IReadRequestBuilder::SetResultBuffer(
			void* pBuffer,
			size_t nBufferSize);  // 505
	swap<void (*)(const std::_Any_data&, IAsyncReadRequest2*&&, AsyncRequestStatus_t&&)>(void ()(const union _Any_data &, IAsyncReadRequest2* &, AsyncRequestStatus_t &) *& __a,
												void ()(const union _Any_data &, IAsyncReadRequest2* &, AsyncRequestStatus_t &) *& __b); // 562
	swap<bool (*)(std::_Any_data&, const std::_Any_data&, std::_Manager_operation)>(bool ()(union _Any_data &, const union _Any_data &, _Manager_operation) *& __a,
											bool ()(union _Any_data &, const union _Any_data &, _Manager_operation) *& __b); // 561
	swap<std::_Any_data>(union _Any_data& __a,
				union _Any_data& __b);  // 560
	function<void(IAsyncReadRequest2::swap(
		function<void(IAsyncReadRequest2*, AsyncRequestStatus_t)>& __x);  // 491
	_Function_base::_Function_base(); // 407
	function<void(IAsyncReadRequest2::operator bool()>* this); // 409
	function<void(IAsyncReadRequest2::function(
		function<void(IAsyncReadRequest2*, AsyncRequestStatus_t)>& __x);  // 491
	_Function_base::~_Function_base(); // 336
	function<void(IAsyncReadRequest2::~function()>* this); // 491
	function<void(IAsyncReadRequest2::operator=(
			function<void(IAsyncReadRequest2*, AsyncRequestStatus_t)>& __x);  // 304
	IReadRequestBuilder::SetCallback(
			ReadCallback_t& callback);  // 505
	IReadRequestBuilder::SetReadOffset(
			int64 nReadOffset);  // 505
	{
		_M_create<CAsyncWaveData::StartAsyncLoading(const asyncwaveparams_t&)::<lambda(IAsyncReadRequest2*, AsyncRequestStatus_t)> >(union _Any_data& __dest,
																class& __f,
																true_type); // 217
		_M_init_functor<CAsyncWaveData::StartAsyncLoading(const asyncwaveparams_t&)::<lambda(IAsyncReadRequest2*, AsyncRequestStatus_t)> >(union _Any_data& __functor,
																class& __f); // 451
		_M_not_empty_function<CAsyncWaveData::StartAsyncLoading(const asyncwaveparams_t&)::<lambda(IAsyncReadRequest2*, AsyncRequestStatus_t)> >(const &); // 449
	}
	_Function_base::_Function_base(); // 439
	function<void(IAsyncReadRequest2::function<CAsyncWaveData::StartAsyncLoading(
																class& __f);  // 505
	IReadRequestBuilder::SetReadBytes(
			size_t nReadBytes);  // 505
	__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count()2>* this); // 1539
	__shared_count<(__gnu_cxx::_Lock_policy)2>::_M_swap(
		__shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 1541
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::__shared_ptr(
			__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>& __r); // 1627
	__shared_count<(__gnu_cxx::_Lock_policy)2>::_M_swap(
		__shared_count<(__gnu_cxx::_Lock_policy)2>& __r); // 1694
	swap<IAsyncReadRequest2*>(IAsyncReadRequest2 *& __a,
					IAsyncReadRequest2 *& __b);  // 1693
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::swap(
		__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>& __other); // 1627
	{
		const int  __wordbits; // 330
		const int  __shiftbits; // 331
		const long long int  __unique_ref; // 332
		long long int* __both_counts; // 333
		__is_single_threaded(void); // 100
		__exchange_and_add_single(_Atomic_word* __mem,
						int __val);  // 101
		__exchange_and_add(volatile _Atomic_word* __mem,
					int __val);  // 103
		__exchange_and_add_dispatch(_Atomic_word* __mem,
						int __val);  // 349
	}
	{
		const int  __wordbits; // 330
		const int  __shiftbits; // 331
		const long long int  __unique_ref; // 332
		long long int* __both_counts; // 333
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_destroy()2>* this); // 346
	}
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 316
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 1069
	__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 1627
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::operator=(
			__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>& __r); // 439
	shared_ptr<IAsyncReadRequest2>::operator=(
			shared_ptr<IAsyncReadRequest2>& __r);  // 506
	{
		const int  __wordbits; // 330
		const int  __shiftbits; // 331
		const long long int  __unique_ref; // 332
		long long int* __both_counts; // 333
		__is_single_threaded(void); // 100
		__exchange_and_add_single(_Atomic_word* __mem,
						int __val);  // 101
		__exchange_and_add(volatile _Atomic_word* __mem,
					int __val);  // 103
		__exchange_and_add_dispatch(_Atomic_word* __mem,
						int __val);  // 349
	}
	{
		const int  __wordbits; // 330
		const int  __shiftbits; // 331
		const long long int  __unique_ref; // 332
		long long int* __both_counts; // 333
		_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_destroy()2>* this); // 346
	}
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 316
	_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 1069
	__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 175
	shared_ptr<IAsyncReadRequest2>::~shared_ptr(); // 506
	_Function_base::~_Function_base(); // 336
	function<void(IAsyncReadRequest2::~function()>* this); // 505
	{
		IReadRequestBuilder *& __ptr; // 396
		_M_ptr(const __uniq_ptr_impl<IAsyncFileSystem2::IReadRequestBuilder, std::default_delete<IAsyncFileSystem2::IReadRequestBuilder> this); // 396
		unique_ptr<IAsyncFileSystem2::IReadRequestBuilder, std::default_delete<IAsyncFileSystem2::IReadRequestBuilder> >::get_deleter(); // 398
		default_delete<IAsyncFileSystem2::IReadRequestBuilder>::operator(
				IReadRequestBuilder* __ptr);  // 398
	}
	unique_ptr<IAsyncFileSystem2::IReadRequestBuilder, std::default_delete<IAsyncFileSystem2::IReadRequestBuilder> >::~unique_ptr(); // 499
	__shared_ptr<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2>::get()2>* this); // 1370
	__shared_ptr_access<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2, false, false>::_M_get()2, false, false>* this); // 1364
	__shared_ptr_access<IAsyncReadRequest2, (__gnu_cxx::_Lock_policy)2, false, false>::operator->()2, false, false>* this); // 508
} /* size: 0, variables: 1, inline expansions: 46 (2458 bytes) */

// <024E1791> soundsystem/snd_wave_data.cpp:514
// function calls: 24
void CAsyncWavDataCache::CAsyncWavDataCache()
{
	IAsyncWavDataCache::IAsyncWavDataCache(); // 518
	CTSListBase::CTSListBase(); // 846
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 862
	Node_t::Node_t(); // 864
	CTSQueue<CAsyncWaveData::End(); // 865
	CTSQueue<CAsyncWaveData::CTSQueue(); // 518
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 46
	CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsyncWa this); // 46
	CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::CSimpleDataCache(); // 518
	CUtlMemory<memhandle_t__::ValidateGrowSize(); // 475
	CUtlMemory<memhandle_t__::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<memhandle_t__::ResetDbgInfo(); // 530
	CUtlVectorBase<memhandle_t__::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<memhandle_t__::CUtlVector(); // 518
} /* size: 297, inline expansions: 24 (451 bytes) */

// <024E1778> soundsystem/snd_wave_data.cpp:514
void CAsyncWavDataCache::CAsyncWavDataCache()
{
} /* size: 0 */

// <024E8077> soundsystem/snd_wave_data.cpp:526
// function calls: 2
void CAsyncWavDataCache::Init(unsigned int nCacheSize, bool bPreferMemoryMapping)
{
	CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::Init(
		uint nMemSize);  // 531
	CAsyncWavDataCache::Init(
		unsigned int nCacheSize,
		bool bPreferMemoryMapping);  // 526
} /* size: 130, inline expansions: 2 (95 bytes) */

// <024E1745> soundsystem/snd_wave_data.cpp:526
void CAsyncWavDataCache::Init(unsigned int nCacheSize, bool bPreferMemoryMapping)
{
} /* size: 0 */

// <024EA063> soundsystem/snd_wave_data.cpp:547
// variable: 1
// function calls: 6
void CAsyncWavDataCache::Shutdown()
{
	{
		int i; // 183
		Count(const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCach this); // 183
		CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
				int i);  // 185
	}
	CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::PurgeAllUnlocked(); // 56
	CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::Shutdown(); // 556
	CAsyncWavDataCache::Shutdown(); // 547
} /* size: 177, inline expansions: 3 (243 bytes) */

// <024E172C> soundsystem/snd_wave_data.cpp:547
void CAsyncWavDataCache::Shutdown()
{
} /* size: 0 */

// <024E7F78> soundsystem/snd_wave_data.cpp:567
// variable: 1
// function call: 1
void* CAsyncWavDataCache::AllocWaveMemory(uint32 nDataSize)
{
	byte* pMem; // 572
	CAsyncWavDataCache::SetFailedRequestBytes(
				uint32 nBytes);  // 575
} /* size: 73, variables: 1, inline expansions: 1 (13 bytes) */

// <024E16F4> soundsystem/snd_wave_data.cpp:567
// variable: 1
void* CAsyncWavDataCache::AllocWaveMemory(uint32 nDataSize)
{
	byte* pMem; // 572
} /* size: 0, variables: 1 */

// <024E828F> soundsystem/snd_wave_data.cpp:580
// function calls: 2
void CAsyncWavDataCache::FreeWaveMemory(void* pMem)
{
	{
	}
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 582
	}
	CAsyncWavDataCache::FreeWaveMemory(
			void* pMem);  // 580
} /* size: 0, inline expansions: 1 (10 bytes) */

// <024E1658> soundsystem/snd_wave_data.cpp:580
void CAsyncWavDataCache::FreeWaveMemory(void* pMem)
{
	{
	}
} /* size: 0 */

// <024E10F4> soundsystem/snd_wave_data.cpp:591
// variables: 2
// function calls: 17
void* CAsyncWavDataCache::EnsureMemoryIsWritable(memhandle_t handle)
{
	CAsyncWaveData* data; // 593
	{
		void* pWritableMem; // 599
		{
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 75
			V_memcpy(void* dest,
				const void* src,
				int count);  // 602
			CInterlockedIntT<unsigned int, 4>::operator unsigned int(); // 238
			{
			}
			ThreadInterlockedDecrement(volatile int32* p); // 586
			CInterlockedIntT<unsigned int, 4>::operator--(); // 239
			IMemoryMappedFile::Release(); // 236
			IMemoryMappedFile::Release(); // 603
			_DebuggerBreakInlineExpressionWrapper(void); // 600
		}
		CAsyncWavDataCache::SetFailedRequestBytes(
					uint32 nBytes);  // 575
		CAsyncWavDataCache::AllocWaveMemory(
				uint32 nDataSize);  // 599
	}
	IsValidIndex(const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCach this,
			int i);  // 247
	CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
			int i);  // 249
	CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::HandleToIndex(
			memhandle_t hCache);  // 77
	CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
			int i);  // 81
	CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::Get(
		memhandle_t hCache);  // 593
} /* size: 0, variables: 1, inline expansions: 7 (110 bytes) */

// <024E9C66> soundsystem/snd_wave_data.cpp:626
// variable: 1
// function call: 1
void CAsyncWavDataCache::AsyncLoadCache(const char* pFilename, CSfxTable* pSound)
{
	CAsyncWaveData* data; // 631
	CSfxTable::IsResource(); // 628
} /* size: 17, variables: 1, inline expansions: 1 (0 bytes) */

// <024E947B> soundsystem/snd_wave_data.cpp:626
// variables: 5
// function calls: 27
void CAsyncWavDataCache::AsyncLoadCache(const char* pFilename, CSfxTable* pSound)
{
	CAsyncWaveData* data; // 631
	IsValidIndex(const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCach this,
			int i);  // 247
	CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
			int i);  // 249
	CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::HandleToIndex(
			memhandle_t hCache);  // 77
	CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
			int i);  // 81
	CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::Get(
		memhandle_t hCache);  // 631
	{
		const VSound_t* pVSound; // 634
		asyncwaveparams_t params; // 641
		CPathBufferString soundName; // 645
		CStrongHandle<InfoForResourceTypeVSound_t>::operator const ResourceHandleInfo_t<InfoForResourceTypeVSound_t>::RuntimeClass_t*(); // 634
		asyncwaveparams_t::asyncwaveparams_t(); // 641
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 601
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 596
		CBufferStringN<200>::CBufferStringN(
				const char* pString,
				int nChars,
				bool bExact,
				bool bGrowable);  // 645
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 652
		CAsyncWavDataCache::SetFailedRequestBytes(
					uint32 nBytes);  // 575
		CAsyncWavDataCache::AllocWaveMemory(
				uint32 nDataSize);  // 659
		{
			int16 nPriority; // 668
			IsValidIndex(const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCach this,
					int i);  // 247
			CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
					int i);  // 249
			CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::HandleToIndex(
					memhandle_t hCache);  // 112
			CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
					int i);  // 115
			CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::SetPriority(
					memhandle_t hCache,
					int16 nPriority);  // 670
		}
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 674
	}
} /* size: 597, variables: 1, inline expansions: 7 (87 bytes) */

// <024E1076> soundsystem/snd_wave_data.cpp:626
// variables: 5
void CAsyncWavDataCache::AsyncLoadCache(const char* pFilename, CSfxTable* pSound)
{
	CAsyncWaveData* data; // 631
	{
		const VSound_t* pVSound; // 634
		asyncwaveparams_t params; // 641
		CPathBufferString soundName; // 645
		{
			int16 nPriority; // 668
		}
	}
} /* size: 0, variables: 1 */

// <024E8C17> soundsystem/snd_wave_data.cpp:681
// function calls: 9
void CAsyncWavDataCache::Unload(memhandle_t handle)
{
	IsValidIndex(const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCach this,
			int i);  // 247
	CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
			int i);  // 249
	CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::HandleToIndex(
			memhandle_t hCache);  // 158
	CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
			int i);  // 161
	CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::LockCount(
			memhandle_t hCache);  // 683
	CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::Age(
		memhandle_t hCache);  // 685
	CAsyncWavDataCache::Unload(
		memhandle_t handle);  // 681
} /* size: 78, inline expansions: 9 (100 bytes) */

// <024E1050> soundsystem/snd_wave_data.cpp:681
void CAsyncWavDataCache::Unload(memhandle_t handle)
{
} /* size: 0 */

// <024E0BAB> soundsystem/snd_wave_data.cpp:706
// variable: 1
// function calls: 16
void* CAsyncWavDataCache::GetDataPointer(CSfxTable* pSound)
{
	CAsyncWaveData* data; // 708
	IsValidIndex(const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCach this,
			int i);  // 247
	CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
			int i);  // 249
	CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::HandleToIndex(
			memhandle_t hCache);  // 77
	CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
			int i);  // 81
	CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::Get(
		memhandle_t hCache);  // 708
	CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
			int i);  // 249
	IsValidIndex(const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCach this,
			int i);  // 247
	CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::HandleToIndex(
			memhandle_t hCache);  // 77
	CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
			int i);  // 81
	CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::Get(
		memhandle_t hCache);  // 713
	CSfxTable::IsResource(); // 628
	CAsyncWavDataCache::AsyncLoadCache(
			const char* pFilename,
			CSfxTable* pSound);  // 711
} /* size: 256, variables: 1, inline expansions: 16 (246 bytes) */

// <024E0940> soundsystem/snd_wave_data.cpp:743
// variable: 1
// function calls: 7
void CAsyncWavDataCache::IsDataLoadCompleted(memhandle_t handle, bool* pIsValid, bool* pIsMissing)
{
	CAsyncWaveData* data; // 745
	IsValidIndex(const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCach this,
			int i);  // 247
	CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
			int i);  // 249
	CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::HandleToIndex(
			memhandle_t hCache);  // 77
	CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
			int i);  // 81
	CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::Get(
		memhandle_t hCache);  // 745
} /* size: 135, variables: 1, inline expansions: 7 (82 bytes) */

// <024E9D0E> soundsystem/snd_wave_data.cpp:763
// variable: 1
// function calls: 10
void CAsyncWavDataCache::RestartDataLoad(CSfxTable* pSound)
{
	CAsyncWaveData* data; // 765
	IsValidIndex(const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCach this,
			int i);  // 247
	CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
			int i);  // 249
	CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::HandleToIndex(
			memhandle_t hCache);  // 77
	CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
			int i);  // 81
	CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::Get(
		memhandle_t hCache);  // 765
	CSfxTable::IsResource(); // 628
	CAsyncWavDataCache::AsyncLoadCache(
			const char* pFilename,
			CSfxTable* pSound);  // 768
	CAsyncWavDataCache::RestartDataLoad(
			CSfxTable* pSound);  // 763
} /* size: 118, variables: 1, inline expansions: 10 (131 bytes) */

// <024E090D> soundsystem/snd_wave_data.cpp:763
// variable: 1
void CAsyncWavDataCache::RestartDataLoad(CSfxTable* pSound)
{
	CAsyncWaveData* data; // 765
} /* size: 0, variables: 1 */

// <024E06BE> soundsystem/snd_wave_data.cpp:774
// variable: 1
// function calls: 7
void CAsyncWavDataCache::IsDataLoadInProgress(memhandle_t handle)
{
	CAsyncWaveData* data; // 776
	IsValidIndex(const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCach this,
			int i);  // 247
	CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
			int i);  // 249
	CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::HandleToIndex(
			memhandle_t hCache);  // 77
	CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
			int i);  // 81
	CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::Get(
		memhandle_t hCache);  // 776
} /* size: 67, variables: 1, inline expansions: 7 (82 bytes) */

// <024EA75A> soundsystem/snd_wave_data.cpp:787
// variables: 2
// function calls: 8
void CAsyncWavDataCache::Flush(bool bTearDownStaticPool)
{
	MemoryUsageType spewType; // 798
	CInterlockedIntT<int, 4>::operator int(); // 1109
	CTSQueue<CAsyncWaveData::Count(); // 932
	CAsyncWavDataCache::FlushUpdateQueue(); // 794
	{
		int i; // 183
		Count(const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCach this); // 183
		CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
				int i);  // 185
	}
	CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::PurgeAllUnlocked(); // 796
	CAsyncWavDataCache::Flush(
		bool bTearDownStaticPool);  // 787
} /* size: 129, variables: 1, inline expansions: 5 (173 bytes) */

// <024E068B> soundsystem/snd_wave_data.cpp:787
// variable: 1
void CAsyncWavDataCache::Flush(bool bTearDownStaticPool)
{
	MemoryUsageType spewType; // 798
} /* size: 0, variables: 1 */

// <024EAB98> soundsystem/snd_wave_data.cpp:803
// function calls: 9
void CAsyncWavDataCache::NotifyFree(memhandle_t hFree)
{
	CUtlMemory<memhandle_t__::NumAllocated(); // 1196
	CUtlMemory<memhandle_t__::operator[](
			int i);  // 602
	CUtlVectorBase<memhandle_t__::Element(
		int i);  // 1201
	CopyConstruct<memhandle_t__*>(memhandle_t__** pMemory,
					memhandle_t__* const& src);  // 1201
	CUtlMemory<memhandle_t__::Base(); // 112
	CUtlVectorBase<memhandle_t__::Base(); // 368
	CUtlVectorBase<memhandle_t__::ResetDbgInfo(); // 824
	CUtlVectorBase<memhandle_t__::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<memhandle_t__::AddToTail(
			memhandle_t__* const& src);  // 805
} /* size: 0, inline expansions: 9 (0 bytes) */

// <024E0665> soundsystem/snd_wave_data.cpp:803
void CAsyncWavDataCache::NotifyFree(memhandle_t hFree)
{
} /* size: 0 */

// <024E9278> soundsystem/snd_wave_data.cpp:809
// variable: 1
// function calls: 6
void CAsyncWavDataCache::FlushNotify()
{
	CUtlVectorBase<memhandle_t__::Count(); // 811
	{
		int i; // 816
		CUtlVectorBase<memhandle_t__::Count(); // 816
		CUtlMemory<memhandle_t__::operator[](
				int i);  // 588
		CUtlVectorBase<memhandle_t__::operator[](
				int i);  // 818
	}
	CUtlVectorBase<memhandle_t__::RemoveAll(); // 821
	CAsyncWavDataCache::FlushNotify(); // 809
} /* size: 0, inline expansions: 3 (0 bytes) */

// <024E063E> soundsystem/snd_wave_data.cpp:809
// variable: 1
void CAsyncWavDataCache::FlushNotify()
{
	{
		int i; // 816
	}
} /* size: 0 */

// <024DF999> soundsystem/snd_wave_data.cpp:826
// variables: 14
// function calls: 50
void CAsyncWavDataCache::FrameUpdate_Internal()
{
	{
		{
			int i; // 838
			{
				uint nMaxAvail; // 840
				{
					memhandle_t hFree; // 65
					CUtlMemory<memhandle_t__::NumAllocated(); // 1196
					CUtlMemory<memhandle_t__::operator[](
							int i);  // 602
					CUtlVectorBase<memhandle_t__::Element(
						int i);  // 1201
					CopyConstruct<memhandle_t__*>(memhandle_t__** pMemory,
									memhandle_t__* const& src);  // 1201
					CUtlMemory<memhandle_t__::Base(); // 112
					CUtlVectorBase<memhandle_t__::Base(); // 368
					CUtlVectorBase<memhandle_t__::ResetDbgInfo(); // 824
					CUtlVectorBase<memhandle_t__::GrowMemory(
							int num);  // 1198
					CUtlVectorBase<memhandle_t__::AddToTail(
							memhandle_t__* const& src);  // 805
					CAsyncWavDataCache::NotifyFree(
							memhandle_t hFree);  // 275
					NotifyFree(memhandle_t hFree); // 68
					{
						uint nOldestStamp; // 262
						int nOldestIndex; // 263
						int nOldestPriority; // 264
						{
							int i; // 266
							Count(const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCach this); // 266
							CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
									int i);  // 588
							operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
									int i);  // 268
						}
						IsValidIndex(const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCach this,
								int i);  // 280
						{
							memhandle_t hFree; // 282
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
									int nIndex);  // 282
						}
					}
					CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::FreeOldest(); // 65
				}
				CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::Update(
					uint nCurrentTime,
					bool bForceFree);  // 841
			}
		}
		_DebuggerBreakInlineExpressionWrapper(void); // 835
	}
	CInterlockedIntT<int, 4>::operator int(); // 1109
	CTSQueue<CAsyncWaveData::Count(); // 932
	CAsyncWavDataCache::FlushUpdateQueue(); // 828
	{
		memhandle_t hFree; // 65
		{
			uint nOldestStamp; // 262
			int nOldestIndex; // 263
			int nOldestPriority; // 264
			{
				int i; // 266
				Count(const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCach this); // 266
				CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
						int i);  // 268
			}
			IsValidIndex(const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCach this,
					int i);  // 280
			{
				memhandle_t hFree; // 282
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
						int nIndex);  // 282
			}
		}
		CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::FreeOldest(); // 65
		CUtlMemory<memhandle_t__::NumAllocated(); // 1196
		CUtlMemory<memhandle_t__::operator[](
				int i);  // 602
		CUtlVectorBase<memhandle_t__::Element(
			int i);  // 1201
		CopyConstruct<memhandle_t__*>(memhandle_t__** pMemory,
						memhandle_t__* const& src);  // 1201
		CUtlMemory<memhandle_t__::Base(); // 112
		CUtlVectorBase<memhandle_t__::Base(); // 368
		CUtlVectorBase<memhandle_t__::ResetDbgInfo(); // 824
		CUtlVectorBase<memhandle_t__::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<memhandle_t__::AddToTail(
				memhandle_t__* const& src);  // 805
		CAsyncWavDataCache::NotifyFree(
				memhandle_t hFree);  // 275
		NotifyFree(memhandle_t hFree); // 68
	}
	CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::Update(
		uint nCurrentTime,
		bool bForceFree);  // 834
} /* size: 0, inline expansions: 4 (393 bytes) */

// <024DF46B> soundsystem/snd_wave_data.cpp:848
// variables: 2
// function calls: 18
void CAsyncWavDataCache::FrameUpdate()
{
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_853; // 853
		CVMixMasterVoiceList::GetMutex(); // 853
		ThreadInterlockedAssignIf64(volatile int64* pDest,
						int64 value,
						int64 comparand);  // 800
		CThreadFastMutex::TryLockInline(
				const char* pFileName,
				int nLineNumber,
				const ThreadId_t  threadId);  // 837
		ThreadPause(void); // 839
		CThreadFastMutex::Lock(
			const char* pFileName,
			int nLineNumber,
			unsigned int nSpinSleepTime);  // 943
		Lock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
				const CThreadFastMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 853
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 855
	}
	CUtlVectorBase<memhandle_t__::Count(); // 811
	{
		int i; // 816
		CUtlVectorBase<memhandle_t__::Count(); // 816
		CUtlMemory<memhandle_t__::operator[](
				int i);  // 588
		CUtlVectorBase<memhandle_t__::operator[](
				int i);  // 818
	}
	CUtlVectorBase<memhandle_t__::RemoveAll(); // 821
	CAsyncWavDataCache::FlushNotify(); // 809
	CAsyncWavDataCache::FlushNotify(); // 861
} /* size: 254, inline expansions: 4 (172 bytes) */

// <024E9410> soundsystem/snd_wave_data.cpp:868
// variables: 3
void CAsyncWavDataCache::SpewMemoryUsage(MemoryUsageType level)
{
	uint bytesUsed; // 870
	uint bytesTotal; // 871
	float percent; // 899
} /* size: 0, variables: 3 */

// <024E837D> soundsystem/snd_wave_data.cpp:868
// variables: 10
// function calls: 33
void CAsyncWavDataCache::SpewMemoryUsage(MemoryUsageType level)
{
	uint bytesUsed; // 870
	uint bytesTotal; // 871
	float percent; // 899
	{
		int i; // 876
		Count(const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCach this); // 193
		CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::ItemCount(); // 876
		{
			memhandle_t handle; // 878
			CAsyncWaveData* data; // 879
			{
				CPathBufferString soundName; // 882
				int nLockCount; // 891
				int nRefCount; // 892
				int nPri; // 893
				CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
						int i);  // 249
				IsValidIndex(const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCach this,
						int i);  // 247
				CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::HandleToIndex(
						memhandle_t hCache);  // 158
				CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
						int i);  // 161
				CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::LockCount(
						memhandle_t hCache);  // 891
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 895
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 712
				CBufferString::CBufferString(); // 591
				CBufferStringN<200>::CBufferStringN(); // 882
				{
				}
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 776
				CBufferString::String(); // 888
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 776
				CBufferString::String(); // 894
				CAsyncWaveData::Size(); // 894
			}
			CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
					int i);  // 197
			CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::IndexToHandle(
					int nIndex);  // 235
			CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::IndexToHandle(
					int nIndex);  // 198
			CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::ItemHandleByIndex(
						int i);  // 878
			IsValidIndex(const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCach this,
					int i);  // 247
			CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
					int i);  // 249
			CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::HandleToIndex(
					memhandle_t hCache);  // 77
			CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
					int i);  // 81
			CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::Get(
				memhandle_t hCache);  // 879
		}
	}
} /* size: 0, variables: 3 */

// <024DF39A> soundsystem/snd_wave_data.cpp:868
// variables: 12
void CAsyncWavDataCache::SpewMemoryUsage(MemoryUsageType level)
{
	uint bytesUsed; // 870
	uint bytesTotal; // 871
	const char   __FUNCTION__; // 17077
	float percent; // 899
	{
		int i; // 876
		{
			memhandle_t handle; // 878
			CAsyncWaveData* data; // 879
			{
				CPathBufferString soundName; // 882
				int nLockCount; // 891
				int nRefCount; // 892
				int nPri; // 893
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 885
				}
			}
		}
	}
} /* size: 0, variables: 4 */

// <024DF30D> soundsystem/snd_wave_data.cpp:915
// function calls: 2
uint GetCacheTotalBytes(void)
{
	CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::GetBytesLimit(); // 105
	CAsyncWavDataCache::BytesTotal(); // 917
} /* size: 0, inline expansions: 2 (0 bytes) */

// <024DF1D1> soundsystem/snd_wave_data.cpp:920
// variable: 1
// function calls: 5
uint GetCacheLockedBytes(void)
{
	{
		int i; // 171
		Count(const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCach this); // 171
		CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCach this,
				int i);  // 173
	}
	CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::GetBytesLocked(); // 106
	CAsyncWavDataCache::BytesLocked(); // 922
} /* size: 0, inline expansions: 2 (0 bytes) */

// <024EA009> soundsystem/snd_wave_data.cpp:925
void CAsyncWavDataCache::QueueUpdate(CAsyncWaveData* pUpdate)
{
} /* size: 0 */

// <024EA3E9> soundsystem/snd_wave_data.cpp:930
// variable: 1
// function calls: 2
void CAsyncWavDataCache::FlushUpdateQueue()
{
	CAsyncWaveData* pItem; // 935
	CInterlockedIntT<int, 4>::operator int(); // 1109
	CTSQueue<CAsyncWaveData::Count(); // 932
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <024EA223> soundsystem/snd_wave_data.cpp:930
// variable: 1
// function calls: 6
void CAsyncWavDataCache::FlushUpdateQueue()
{
	CAsyncWaveData* pItem; // 935
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 1080
	CTSQueue<CAsyncWaveData::FreeNode(
		Node_t* pNode);  // 1103
	CTSQueue<CAsyncWaveData::PopItem(
		CAsyncWaveData** pResult);  // 936
} /* size: 167, variables: 1, inline expansions: 6 (272 bytes) */

// <024DF185> soundsystem/snd_wave_data.cpp:930
// variable: 1
void CAsyncWavDataCache::FlushUpdateQueue()
{
	CAsyncWaveData* pItem; // 935
} /* size: 0, variables: 1 */

// <024DEFC3> soundsystem/snd_wave_data.cpp:945
// variable: 1
// function calls: 7
void CAsyncWavDataCache::ClearCache()
{
	CInterlockedIntT<int, 4>::operator int(); // 1109
	CTSQueue<CAsyncWaveData::Count(); // 932
	CAsyncWavDataCache::FlushUpdateQueue(); // 947
	{
		int i; // 183
		Count(const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCach this); // 183
		CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
				int i);  // 185
	}
	CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::PurgeAllUnlocked(); // 948
} /* size: 125, inline expansions: 4 (85 bytes) */

// <024EA49A> soundsystem/snd_wave_data.cpp:953
// variable: 1
// function calls: 11
void snd_async_flush(const CCommandContext& ctx, const CCommand& args)
{
	CAsyncWavDataCache::Flush(
		bool bTearDownStaticPool);  // 955
	CInterlockedIntT<int, 4>::operator int(); // 1109
	CTSQueue<CAsyncWaveData::Count(); // 932
	CAsyncWavDataCache::FlushUpdateQueue(); // 794
	{
		int i; // 183
		Count(const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCach this); // 183
		CUtlMemory<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::cache_table_t, CUtlMemory<CSimpleDataCache<CAsy this,
				int i);  // 185
	}
	CSimpleDataCache<CAsyncWaveData, asyncwaveparams_t>::PurgeAllUnlocked(); // 796
	CAsyncWavDataCache::Flush(
		bool bTearDownStaticPool);  // 787
	CAsyncWavDataCache::Flush(
		bool bTearDownStaticPool);  // 955
	snd_async_flush(const CCommandContext& ctx,
			const CCommand& args);  // 953
} /* size: 137, inline expansions: 8 (437 bytes) */

// <024DEF99> soundsystem/snd_wave_data.cpp:953
void snd_async_flush(const CCommandContext& ctx, const CCommand& args)
{
} /* size: 0 */

// <024DEECF> soundsystem/snd_wave_data.cpp:958
// function call: 1
void snd_async_showmem(const CCommandContext& ctx, const CCommand& args)
{
	CAsyncWavDataCache::SpewMemoryUsage(
			MemoryUsageType level);  // 960
} /* size: 21, inline expansions: 1 (17 bytes) */

// <024DEE37> soundsystem/snd_wave_data.cpp:963
// function call: 1
void snd_async_showmem_summary(const CCommandContext& ctx, const CCommand& args)
{
	CAsyncWavDataCache::SpewMemoryUsage(
			MemoryUsageType level);  // 965
} /* size: 5, inline expansions: 1 (0 bytes) */

// <024DED6D> soundsystem/snd_wave_data.cpp:968
// function call: 1
void snd_async_showmem_music(const CCommandContext& ctx, const CCommand& args)
{
	CAsyncWavDataCache::SpewMemoryUsage(
			MemoryUsageType level);  // 970
} /* size: 21, inline expansions: 1 (17 bytes) */

