
//
// public/soundsystem/snd_sfx.h
//
//	referenced by: libengine2.so
//
//	functions: 5
//	class: 1
//

// <0246BC2D> ../public/soundsystem/snd_sfx.h:22
// member functions: 44
// member variables: 14
// vtable entries: 3
// class size: 64
class CSfxTable {
	/* ../public/soundsystem/snd_sfx.h:28 */
	enum {
		AUDIO_NOT_LOADED = 0,
		AUDIO_IS_LOADED = 1,
		AUDIO_ERROR_LOADING = 2,
	};
	int ()(void) * * _vptr.CSfxTable; /* 0 8 */
private:
	const char * m_pDebugName; /* 8 8 */
	/* ../public/soundsystem/snd_sfx.h:35 */
	void CSfxTable(CSfxTable* );
	/* soundsystem/snd_dma.cpp:79 */
	void ~CSfxTable(CSfxTable* );
	/* soundsystem/snd_dma.cpp:116 */
	const char* GetFileName(CSfxTable* , CBufferString* );
	/* ../public/soundsystem/snd_sfx.h:54 */
	FileNameHandle_t GetFileNameHandle(CSfxTable* );
	/* soundsystem/snd_dma.cpp:89 */
	void SetFilenameHandle(CSfxTable* , FileNameHandle_t);
	/* soundsystem/snd_dma.cpp:109 */
	void OnNameChanged(CSfxTable* , const char* );
	/* soundsystem/snd_dma.cpp:239 */
	virtual int GetCacheStatus(CSfxTable* );
	/* ../public/soundsystem/snd_sfx.h:61 */
	int IsCached(CSfxTable* );
	/* soundsystem/snd_dma.cpp:269 */
	uint SampleCount(CSfxTable* );
	/* ../public/soundsystem/snd_sfx.h:64 */
	bool IsResource(CSfxTable* );
	/* soundsystem/snd_dma.cpp:282 */
	void CacheReload(CSfxTable* );
	/* soundsystem/snd_dma.cpp:161 */
	virtual void AddRef(CSfxTable* );
	/* soundsystem/snd_dma.cpp:170 */
	virtual void ReleaseRef(CSfxTable* );
	/* soundsystem/snd_dma.cpp:147 */
	bool IsValidForPlayback(CSfxTable* );
	/* soundsystem/snd_dma.cpp:126 */
	bool NeedsResourceLoad(CSfxTable* );
	/* soundsystem/snd_dma.cpp:142 */
	bool FailedResourceLoad(CSfxTable* );
	/* soundsystem/snd_dma.cpp:192 */
	void TryLockCache(CSfxTable* );
	/* soundsystem/snd_dma.cpp:180 */
	void LockCache(CSfxTable* );
	/* soundsystem/snd_dma.cpp:206 */
	void UnlockCache(CSfxTable* );
	/* soundsystem/snd_dma.cpp:220 */
	void OnCacheStart(CSfxTable* );
	/* soundsystem/snd_dma.cpp:229 */
	void OnCacheFinish(CSfxTable* , void* );
	/* soundsystem/snd_dma.cpp:264 */
	void* GetDataPointer(CSfxTable* );
	CAudioSource * pSource; /* 16 8 */
	void * m_pData; /* 24 8 */
	memhandle_t m_hCache; /* 32 8 */
	HSoundStrong m_hSound; /* 40 8 */
	FileNameHandle_t m_filenameHandle; /* 48 4 */
	int m_nRefCount; /* 52 4 */
	int16 m_nPriority; /* 56 2 */
	bool m_bIsLateLoad:1; /* 58: 0 1 */
	bool m_bManifestLoadAttempted:1; /* 58: 1 1 */
	bool m_bManifestLoadFailed:1; /* 58: 2 1 */
	bool m_bIsResource:1; /* 58: 3 1 */
	bool m_bCacheLock:1; /* 58: 4 1 */
	bool FailedResourceLoad(class CSfxTable *); /* linkage=_ZN9CSfxTable18FailedResourceLoadEv */
	bool IsValidForPlayback(class CSfxTable *); /* linkage=_ZN9CSfxTable18IsValidForPlaybackEv */
	void CSfxTable(class CSfxTable *); /* linkage=_ZN9CSfxTableC4Ev */
	void ~CSfxTable(class CSfxTable *); /* linkage=_ZN9CSfxTableD4Ev */
	const char  * GetFileName(class CSfxTable *, class CBufferString *); /* linkage=_ZN9CSfxTable11GetFileNameEP13CBufferString */
	FileNameHandle_t GetFileNameHandle(class CSfxTable *); /* linkage=_ZN9CSfxTable17GetFileNameHandleEv */
	void SetFilenameHandle(class CSfxTable *, FileNameHandle_t); /* linkage=_ZN9CSfxTable17SetFilenameHandleEj */
	/* <24776e2> soundsystem/snd_dma.cpp:109 */
	void OnNameChanged(class CSfxTable *, const char  *); /* linkage=_ZN9CSfxTable13OnNameChangedEPKc */
	/* <2476ec2> soundsystem/snd_dma.cpp:239 */
	virtual int GetCacheStatus(class CSfxTable *); /* linkage=_ZN9CSfxTable14GetCacheStatusEv */
	int IsCached(class CSfxTable *); /* linkage=_ZN9CSfxTable8IsCachedEv */
	uint SampleCount(class CSfxTable *); /* linkage=_ZN9CSfxTable11SampleCountEv */
	bool IsResource(class CSfxTable *); /* linkage=_ZN9CSfxTable10IsResourceEv */
	void CacheReload(class CSfxTable *); /* linkage=_ZN9CSfxTable11CacheReloadEv */
	virtual void AddRef(class CSfxTable *); /* linkage=_ZN9CSfxTable6AddRefEv */
	/* <2477060> soundsystem/snd_dma.cpp:170 */
	virtual void ReleaseRef(class CSfxTable *); /* linkage=_ZN9CSfxTable10ReleaseRefEv */
	bool NeedsResourceLoad(class CSfxTable *); /* linkage=_ZN9CSfxTable17NeedsResourceLoadEv */
	/* <247775b> soundsystem/snd_dma.cpp:192 */
	void TryLockCache(class CSfxTable *); /* linkage=_ZN9CSfxTable12TryLockCacheEv */
	/* <2477715> soundsystem/snd_dma.cpp:180 */
	void LockCache(class CSfxTable *); /* linkage=_ZN9CSfxTable9LockCacheEv */
	/* <2477822> soundsystem/snd_dma.cpp:206 */
	void UnlockCache(class CSfxTable *); /* linkage=_ZN9CSfxTable11UnlockCacheEv */
	void OnCacheStart(class CSfxTable *); /* linkage=_ZN9CSfxTable12OnCacheStartEv */
	void OnCacheFinish(class CSfxTable *, void *); /* linkage=_ZN9CSfxTable13OnCacheFinishEPv */
	void * GetDataPointer(class CSfxTable *); /* linkage=_ZN9CSfxTable14GetDataPointerEv */
};

// <026A388F> ../public/soundsystem/snd_sfx.h:35
void CSfxTable::CSfxTable()
{
} /* size: 0 */

// <026A3876> ../public/soundsystem/snd_sfx.h:35
inline void CSfxTable::CSfxTable()
{
} /* size: 0 */

// <0269BD24> ../public/soundsystem/snd_sfx.h:50
void CSfxTable::~CSfxTable()
{
} /* size: 0 */

// <02524BD4> ../public/soundsystem/snd_sfx.h:61
inline void CSfxTable::IsCached()
{
} /* size: 0 */

// <024E7066> ../public/soundsystem/snd_sfx.h:64
inline void CSfxTable::IsResource()
{
} /* size: 0 */

