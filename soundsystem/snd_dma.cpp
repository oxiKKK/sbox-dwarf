
//
// soundsystem/snd_dma.cpp
//
//	referenced by: libengine2.so
//
//	functions: 43
//

// <02473D3F> soundsystem/snd_dma.cpp:41
void InitMP3(void)
{
} /* size: 0 */

// <02473CD0> soundsystem/snd_dma.cpp:42
void ShutdownMP3(void)
{
} /* size: 0 */

// <02476326> soundsystem/snd_dma.cpp:58
// variables: 2
// function calls: 3
CUtlString DescribeSoundGuid(SoundGuid_t guid)
{
	CUtlString out; // 60
	bool bServer; // 62
	CUtlString::CUtlString(); // 60
	SoundGuid_t::SetRaw(
		int32 other);  // 66
	SoundGuid_t::GetRaw(); // 69
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

// <024762B3> soundsystem/snd_dma.cpp:79
// function call: 1
void CSfxTable::~CSfxTable()
{
	CStrongHandle<InfoForResourceTypeVSound_t>::~CStrongHandle(); // 87
} /* size: 24, inline expansions: 1 (5 bytes) */

// <0247629A> soundsystem/snd_dma.cpp:79
void CSfxTable::~CSfxTable()
{
} /* size: 0 */

// <02476110> soundsystem/snd_dma.cpp:89
// variable: 1
// function calls: 5
void CSfxTable::SetFilenameHandle(FileNameHandle_t hFilename)
{
	{
		CPathBufferString nameBuf; // 94
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 94
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 96
	}
} /* size: 133 */

// <024776E2> soundsystem/snd_dma.cpp:109
void CSfxTable::OnNameChanged(const char* pName)
{
} /* size: 0 */

// <02475EBC> soundsystem/snd_dma.cpp:116
// function calls: 7
void CSfxTable::GetFileName(CBufferString* pNameOut)
{
	CFileSystemPassThru::String(
		const FileNameHandle_t& handle,
		CBufferString* pStrBuf);  // 151
	CFileSystemPassThru::String(
		const FileNameHandle_t& handle,
		CBufferString* pStrBuf);  // 151
	CFileSystemPassThru::String(
		const FileNameHandle_t& handle,
		CBufferString* pStrBuf);  // 151
	CFileSystemPassThru::String(
		const FileNameHandle_t& handle,
		CBufferString* pStrBuf);  // 120
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 121
} /* size: 247, inline expansions: 7 (344 bytes) */

// <02475E5D> soundsystem/snd_dma.cpp:126
// function call: 1
void CSfxTable::NeedsResourceLoad()
{
	CStrongHandle<InfoForResourceTypeVSound_t>::HasHandle(); // 128
} /* size: 48, inline expansions: 1 (0 bytes) */

// <02475E2D> soundsystem/snd_dma.cpp:142
void CSfxTable::FailedResourceLoad()
{
} /* size: 15 */

// <02475DBB> soundsystem/snd_dma.cpp:147
// variable: 1
// function call: 1
void CSfxTable::IsValidForPlayback()
{
	{
		const VSound_t* pSound; // 152
		CStrongHandle<InfoForResourceTypeVSound_t>::operator const ResourceHandleInfo_t<InfoForResourceTypeVSound_t>::RuntimeClass_t*(); // 152
	}
} /* size: 51 */

// <02475D77> soundsystem/snd_dma.cpp:161
void CSfxTable::AddRef()
{
} /* size: 29 */

// <02477060> soundsystem/snd_dma.cpp:170
// function calls: 2
void CSfxTable::ReleaseRef()
{
	{
	}
	CSfxTable::UnlockCache(); // 176
	CSfxTable::ReleaseRef(); // 170
} /* size: 0, inline expansions: 2 (64 bytes) */

// <02475D1F> soundsystem/snd_dma.cpp:170
// variables: 2
void CSfxTable::ReleaseRef()
{
	const char   __FUNCTION__; // 54268
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
	}
} /* size: 0, variables: 1 */

// <02477715> soundsystem/snd_dma.cpp:180
void CSfxTable::LockCache()
{
} /* size: 0 */

// <02476F84> soundsystem/snd_dma.cpp:180
void CSfxTable::LockCache()
{
	{
	}
} /* size: 0 */

// <02475CE2> soundsystem/snd_dma.cpp:180
// variables: 2
void CSfxTable::LockCache()
{
	const char   __FUNCTION__; // 54241
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 184
	}
} /* size: 0, variables: 1 */

// <0247775B> soundsystem/snd_dma.cpp:192
// function calls: 2
void CSfxTable::TryLockCache()
{
	CSfxTable::LockCache(); // 194
	CSfxTable::TryLockCache(); // 192
} /* size: 103, inline expansions: 2 (41 bytes) */

// <02475CC9> soundsystem/snd_dma.cpp:192
void CSfxTable::TryLockCache()
{
} /* size: 0 */

// <02477822> soundsystem/snd_dma.cpp:206
void CSfxTable::UnlockCache()
{
} /* size: 0 */

// <02476FD7> soundsystem/snd_dma.cpp:206
void CSfxTable::UnlockCache()
{
	{
	}
	{
	}
} /* size: 0 */

// <02475C6F> soundsystem/snd_dma.cpp:206
// variables: 3
void CSfxTable::UnlockCache()
{
	const char   __FUNCTION__; // 54295
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 210
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 211
	}
} /* size: 0, variables: 1 */

// <02475BF5> soundsystem/snd_dma.cpp:220
// function call: 1
void CSfxTable::OnCacheStart()
{
	CSfxTable::LockCache(); // 223
} /* size: 33, inline expansions: 1 (24 bytes) */

// <02475AE7> soundsystem/snd_dma.cpp:229
// function calls: 3
void CSfxTable::OnCacheFinish(void* pCachedData)
{
	{
	}
	CSfxTable::UnlockCache(); // 176
	CSfxTable::ReleaseRef(); // 170
	CSfxTable::ReleaseRef(); // 232
} /* size: 0, inline expansions: 3 (167 bytes) */

// <02476EC2> soundsystem/snd_dma.cpp:239
// variables: 3
// function call: 1
void CSfxTable::GetCacheStatus()
{
	bool bCacheValid; // 245
	bool bIsMissing; // 245
	bool bCompleted; // 246
	CSfxTable::GetCacheStatus(); // 239
} /* size: 152, variables: 3, inline expansions: 1 (74 bytes) */

// <02475AAA> soundsystem/snd_dma.cpp:239
// variables: 3
void CSfxTable::GetCacheStatus()
{
	bool bCacheValid; // 245
	bool bIsMissing; // 245
	bool bCompleted; // 246
} /* size: 0, variables: 3 */

// <02475A76> soundsystem/snd_dma.cpp:264
void* CSfxTable::GetDataPointer()
{
} /* size: 9 */

// <02475A42> soundsystem/snd_dma.cpp:269
void CSfxTable::SampleCount()
{
} /* size: 27 */

// <02475945> soundsystem/snd_dma.cpp:282
// variables: 2
// function call: 1
void CSfxTable::CacheReload()
{
	const char   __FUNCTION__; // 54295
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 293
	}
	CSfxTable::UnlockCache(); // 287
} /* size: 0, variables: 1, inline expansions: 1 (19 bytes) */

// <024758BB> soundsystem/snd_dma.cpp:297
// function call: 1
bool SND_IsEnabled(void)
{
	IAudioDevice2::IsActive(); // 299
} /* size: 99, inline expansions: 1 (0 bytes) */

// <024757A0> soundsystem/snd_dma.cpp:320
// variables: 3
void S_Init(void)
{
	uint nCacheMB; // 326
	bool bMemoryMap; // 327
	uint nCacheSize; // 334
} /* size: 157, variables: 3 */

// <02473D18> soundsystem/snd_dma.cpp:322
void VMixEngine_Init(int)
{
} /* size: 0 */

// <02475551> soundsystem/snd_dma.cpp:362
// variable: 1
// function calls: 6
void S_Shutdown(void)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_369; // 369
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 369
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 384
} /* size: 173, variables: 1, inline expansions: 6 (285 bytes) */

// <02473D08> soundsystem/snd_dma.cpp:366
void VMixEngine_Shutdown(void)
{
} /* size: 0 */

// <024752CF> soundsystem/snd_dma.cpp:392
// variables: 2
// function calls: 6
void S_ForceReloadSound(const char* pSoundfileName)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_395; // 395
	CSfxTable* pSfx; // 396
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 395
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 421
} /* size: 272, variables: 2, inline expansions: 6 (306 bytes) */

// <02475275> soundsystem/snd_dma.cpp:431
// variables: 2
CAudioSource* S_LoadSound_src2(const char* pFilename, CSfxTable* pSfx, VMIX_MEMTYPE nMemType)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_436; // 436
	const VSound_t* pVSound; // 439
} /* size: 0, variables: 2 */

// <024750F9> soundsystem/snd_dma.cpp:456
// variables: 3
// function calls: 2
CSfxTable* S_PrecacheSound_src2(const char* name, VMIX_MEMTYPE nMemType)
{
	CSfxTable* sfx; // 464
	const char   __FUNCTION__; // 54498
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 472
	}
	IAudioDevice2::IsActive(); // 461
	S_LoadSound_src2(const char* pFilename,
			CSfxTable* pSfx,
			VMIX_MEMTYPE nMemType);  // 468
} /* size: 0, variables: 2, inline expansions: 2 (26 bytes) */

// <02475018> soundsystem/snd_dma.cpp:501
// variables: 3
// function call: 1
float S_SoundDuration(CSfxTable* pSfx, float flPitch)
{
	float flRate; // 513
	int nTotalSamples; // 514
	{
		const VSound_t* pVSound; // 505
		CStrongHandle<InfoForResourceTypeVSound_t>::operator const ResourceHandleInfo_t<InfoForResourceTypeVSound_t>::RuntimeClass_t*(); // 505
	}
} /* size: 0, variables: 2 */

// <02474FD4> soundsystem/snd_dma.cpp:523
void S_GetActiveSounds(CUtlVector<SndInfo_t, CUtlMemory<SndInfo_t, int> >& sndlist)
{
} /* size: 0 */

// <02474FB2> soundsystem/snd_dma.cpp:527
void S_StopAllSounds(bool bClear)
{
} /* size: 0 */

// <02474F5A> soundsystem/snd_dma.cpp:532
void S_FadeOutAllSounds(float flFadeTime, sound_voice_layer_t nFadeOutLayer, sound_fade_type_t nFade)
{
} /* size: 5 */

// <02474F2B> soundsystem/snd_dma.cpp:537
void S_StopAllSoundsC(const CCommandContext& ctx, const CCommand& args)
{
} /* size: 0 */

// <02474D62> soundsystem/snd_dma.cpp:542
// variable: 1
// function calls: 6
void S_ClearBuffer(void)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_547; // 547
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 547
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 551
} /* size: 137, variables: 1, inline expansions: 6 (297 bytes) */

