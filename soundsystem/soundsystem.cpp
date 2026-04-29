
//
// soundsystem/soundsystem.cpp
//
//	referenced by: libengine2.so
//
//	functions: 54
//

// <02617BD5> soundsystem/soundsystem.cpp:39
// variable: 1
// function calls: 9
void S_RestartSoundSystem(void)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_45; // 45
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 45
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 61
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 61
} /* size: 226, variables: 1, inline expansions: 9 (339 bytes) */

// <02617B7C> soundsystem/soundsystem.cpp:63
// variable: 1
void S_MixOneBufferIfPossible(void)
{
	{
		int i; // 70
	}
} /* size: 0 */

// <02617B5B> soundsystem/soundsystem.cpp:89
void* __CreateCSoundSystemISoundSystem_interface(void)
{
} /* size: 12 */

// <02617B18> soundsystem/soundsystem.cpp:93
void CSoundSystem::InitSoundSystem()
{
} /* size: 9 */

// <026176E0> soundsystem/soundsystem.cpp:100
// function calls: 17
void CSoundSystem::CSoundSystem()
{
	IAppSystem::IAppSystem(); // 179
	ISoundSystem::ISoundSystem(); // 120
	CBaseAppSystem<ISoundSystem>::CBaseAppSystem(); // 171
	CTier0AppSystem<ISoundSystem, 0>::CTier0AppSystem(); // 225
	CTier1AppSystem<ISoundSystem, 0>::CTier1AppSystem(); // 48
	CUtlMemory<ResourceManifestDesc_t::ValidateGrowSize(); // 475
	CUtlMemory<ResourceManifestDesc_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ResourceManifestDesc_t::ResetDbgInfo(); // 530
	CUtlVectorBase<ResourceManifestDesc_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ResourceManifestDesc_t::CUtlVector(); // 48
	CTier2AppSystem<ISoundSystem, 0>::CTier2AppSystem(); // 103
	CUtlMemory<audio_device_description_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<audio_device_description_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::CUtlVector(); // 91
	CAudioDeviceList::CAudioDeviceList(); // 103
} /* size: 116, inline expansions: 17 (80 bytes) */

// <026176C7> soundsystem/soundsystem.cpp:100
void CSoundSystem::CSoundSystem()
{
} /* size: 0 */

// <02617633> soundsystem/soundsystem.cpp:110
void CSoundSystem::CreateDirectMixOutputStream(uint nSampleRate, uint nChannels, uint nBits)
{
} /* size: 15 */

// <026175D5> soundsystem/soundsystem.cpp:116
void CSoundSystem::DestroyOutputStream(IAudioOutputStream* pOutputStream)
{
} /* size: 12 */

// <026175A7> soundsystem/soundsystem.cpp:121
void CSoundSystem::QueueRestart()
{
} /* size: 0 */

// <02617427> soundsystem/soundsystem.cpp:129
// variables: 3
// function calls: 2
void CSoundSystem::CheckDevice()
{
	bool bRestart; // 132
	{
		const wchar_t* pDeviceToCreate; // 143
		const wchar_t* pCurrent; // 144
		IAudioDevice2::IsActive(); // 145
		V_wcscmp(const wchar_t* s1,
			const wchar_t* s2);  // 145
	}
} /* size: 177, variables: 1 */

// <02617359> soundsystem/soundsystem.cpp:162
// variable: 1
// function calls: 2
void CSoundSystem::Init()
{
	InitReturnVal_t nRetVal; // 164
	CTier0AppSystem<ISoundSystem, 0>::Init(); // 71
	CTier2AppSystem<ISoundSystem, 0>::Init(); // 164
} /* size: 47, variables: 1, inline expansions: 2 (44 bytes) */

// <026172AF> soundsystem/soundsystem.cpp:177
// function calls: 2
void CSoundSystem::Shutdown()
{
	CTier0AppSystem<ISoundSystem, 0>::Shutdown(); // 85
	CTier2AppSystem<ISoundSystem, 0>::Shutdown(); // 184
} /* size: 42, inline expansions: 2 (42 bytes) */

// <026171A5> soundsystem/soundsystem.cpp:193
// function calls: 2
void CSoundSystem::Connect(CreateInterfaceFn factory)
{
	CTier0AppSystem<ISoundSystem, 0>::Connect(
		CreateInterfaceFn factory);  // 54
	CTier2AppSystem<ISoundSystem, 0>::Connect(
		CreateInterfaceFn factory);  // 195
} /* size: 100, inline expansions: 2 (54 bytes) */

// <02617063> soundsystem/soundsystem.cpp:203
// function calls: 5
void CSoundSystem::Disconnect()
{
	CUtlVectorBase<ResourceManifestDesc_t::Count(); // 90
	CUtlMemory<ResourceManifestDesc_t::Base(); // 112
	CUtlVectorBase<ResourceManifestDesc_t::Base(); // 90
	CTier0AppSystem<ISoundSystem, 0>::Disconnect(); // 96
	CTier2AppSystem<ISoundSystem, 0>::Disconnect(); // 205
} /* size: 68, inline expansions: 5 (52 bytes) */

// <02617035> soundsystem/soundsystem.cpp:219
void CSoundSystem::GetDependencies()
{
} /* size: 12 */

// <02616FC1> soundsystem/soundsystem.cpp:225
void CSoundSystem::Update(bool bAllowAsync)
{
} /* size: 58 */

// <0260E36F> soundsystem/soundsystem.cpp:227
void VMixEngine_MainThreadUpdate(void)
{
} /* size: 0 */

// <02616F9D> soundsystem/soundsystem.cpp:238
void CSoundSystem::OutputDebugInfo(CUtlBuffer& debugOut)
{
} /* size: 0 */

// <02616F3C> soundsystem/soundsystem.cpp:245
void CSoundSystem::StopAllSounds(bool clear)
{
} /* size: 13 */

// <02616EA0> soundsystem/soundsystem.cpp:250
void CSoundSystem::FadeOutAllSounds(float flFadeTime, sound_voice_layer_t nVoiceLayer, sound_fade_type_t nFade)
{
} /* size: 16 */

// <02616E5D> soundsystem/soundsystem.cpp:255
void CSoundSystem::ClearBuffer()
{
} /* size: 9 */

// <02616E20> soundsystem/soundsystem.cpp:260
void CSoundSystem::StartSound(StartSoundParams_t& params)
{
} /* size: 7 */

// <02616DD4> soundsystem/soundsystem.cpp:265
void CSoundSystem::StopSound(SoundGuid_t guid, bool bForceSync)
{
} /* size: 5 */

// <02616DA6> soundsystem/soundsystem.cpp:269
void CSoundSystem::GetGuidForLastSoundEmitted()
{
} /* size: 7 */

// <02616D69> soundsystem/soundsystem.cpp:274
void CSoundSystem::IsSoundStillPlaying(SoundGuid_t guid)
{
} /* size: 7 */

// <02628B71> soundsystem/soundsystem.cpp:280
void CSoundSystem::PrecacheSound(const char* sample)
{
} /* size: 14 */

// <02616CC5> soundsystem/soundsystem.cpp:285
void CSoundSystem::PrecacheSound_src2(const char* sample, VMIX_MEMTYPE nMemType)
{
} /* size: 0 */

// <02616B94> soundsystem/soundsystem.cpp:290
void CSoundSystem::CreateSound(const char* pSoundName, int nChannels, int nRate, int nFormat, int nSampleCount, float flDuration, bool bLoop, void* pData, int nDataSize)
{
} /* size: 40 */

// <02616B0B> soundsystem/soundsystem.cpp:300
void CSoundSystem::SetMixControlInput(CUtlStringToken nName, float flValue)
{
} /* size: 5 */

// <02616ABF> soundsystem/soundsystem.cpp:305
void CSoundSystem::SetMixNameInput(CUtlStringToken nName, uint32 nValue)
{
} /* size: 5 */

// <02616A91> soundsystem/soundsystem.cpp:310
void CSoundSystem::ResetMainGraphInputs()
{
} /* size: 5 */

// <02616A54> soundsystem/soundsystem.cpp:316
void CSoundSystem::GetMixControlInputValue(CUtlStringToken nName)
{
} /* size: 9 */

// <0262AA72> soundsystem/soundsystem.cpp:322
void CSoundSystem::EnableDebugVisualizer(bool bEnable)
{
} /* size: 0 */

// <026169CF> soundsystem/soundsystem.cpp:331
void CSoundSystem::PlaySoundAtOSLevel(const char* pSoundfileName)
{
} /* size: 12 */

// <02616978> soundsystem/soundsystem.cpp:336
void CSoundSystem::DisableAudioMuting(float flDisableDurationSeconds)
{
} /* size: 60 */

// <02616952> soundsystem/soundsystem.cpp:347
// variable: 1
eSubSystems_t GetDefaultAudioSubsystem(void)
{
	eSubSystems_t nSubsystem; // 349
} /* size: 0, variables: 1 */

// <02616547> soundsystem/soundsystem.cpp:368
// variables: 5
// function calls: 10
void CSoundSystem::CreateDefaultDevice()
{
	const char   __FUNCTION__; // 23430
	int nSpeakerConfig; // 379
	audio_device_description_t* pDevice; // 385
	audio_device_init_params_t params; // 390
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 370
	}
	GetDefaultAudioSubsystem(void); // 371
	audio_device_init_params_t::Defaults(); // 374
	V_wcscpy_safe<256>(wchar_t& pDest,
				const wchar_t* pSrc);  // 143
	audio_device_init_params_t::OverrideDevice(
			audio_device_description_t* pDevice);  // 388
	CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::Count(); // 97
	CUtlMemory<audio_device_description_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::operator[](
			int i);  // 99
	CAudioDeviceList::GetDefaultDevice(); // 394
	V_wcscpy_safe<256>(wchar_t& pDest,
				const wchar_t* pSrc);  // 143
	audio_device_init_params_t::OverrideDevice(
			audio_device_description_t* pDevice);  // 397
} /* size: 0, variables: 4, inline expansions: 10 (234 bytes) */

// <026164EB> soundsystem/soundsystem.cpp:407
void CSoundSystem::DestroyDevice(IAudioDevice2* pDevice)
{
} /* size: 25 */

// <0261640D> soundsystem/soundsystem.cpp:412
// variable: 1
// function calls: 2
void CSoundSystem::CreateNullDevice()
{
	audio_device_init_params_t params; // 415
	audio_device_init_params_t::audio_device_init_params_t(); // 415
	audio_device_init_params_t::Defaults(); // 416
} /* size: 140, variables: 1, inline expansions: 2 (59 bytes) */

// <026163D0> soundsystem/soundsystem.cpp:420
void CSoundSystem::GetActiveSounds(CUtlVector<SndInfo_t, CUtlMemory<SndInfo_t, int> >& sndlist)
{
} /* size: 5 */

// <026161B4> soundsystem/soundsystem.cpp:427
// variables: 3
// function calls: 5
void S_ConvertListenerVectorTo2D(Vector* pvforward, const Vector* pvleft)
{
	QAngle angles2d; // 430
	Vector source2d; // 431
	Vector listener_forward2d; // 432
	Vector::operator=(
			const Vector& vOther);  // 434
	QAngle::QAngle(); // 430
	Vector::Vector(); // 431
	Vector::Vector(); // 432
	Vector::operator=(
			const Vector& vOther);  // 458
} /* size: 0, variables: 3, inline expansions: 5 (0 bytes) */

// <02615D17> soundsystem/soundsystem.cpp:463
// variable: 1
// function calls: 18
void CSoundSystem::GetAudioDevices(CUtlVector<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >& deviceListOut)
{
	CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::RemoveAll(); // 465
	CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::Count(); // 1369
	CUtlMemory<audio_device_description_t, int>::NumAllocated(); // 782
	CUtlMemory<audio_device_description_t, int>::IsGrowable(); // 823
	CUtlMemory<audio_device_description_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<audio_device_description_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<audio_device_description_t, int>::Grow(
		int num);  // 806
	CUtlMemory<audio_device_description_t, int>::Base(); // 112
	CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::Base(); // 368
	CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::GrowVector(
			int num);  // 1373
	{
		int i; // 1376
		CUtlMemory<audio_device_description_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::operator[](
				int i);  // 1378
		CUtlMemory<audio_device_description_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::Element(
			int i);  // 1378
		CopyConstruct<audio_device_description_t>(audio_device_description_t* pMemory,
								const audio_device_description_t& src);  // 1378
	}
	CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::AddVectorToTail<CUtlMemory<audio_device_description_t, int> >(
									const CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >& src);  // 466
} /* size: 308, inline expansions: 13 (856 bytes) */

// <02615C45> soundsystem/soundsystem.cpp:477
// function call: 1
void CSoundSystem::PreloadSound(const char* pSoundName)
{
	CSoundSystem::PreloadSound(
			CSfxTable* pSfx);  // 479
} /* size: 111, inline expansions: 1 (22 bytes) */

// <02629DEF> soundsystem/soundsystem.cpp:482
// variables: 2
void CSoundSystem::PreloadSound(CSfxTable* pSfx)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_487; // 487
	CBufferString fileName; // 488
} /* size: 17, variables: 2 */

// <02629826> soundsystem/soundsystem.cpp:482
// variables: 2
// function calls: 21
void CSoundSystem::PreloadSound(CSfxTable* pSfx)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_487; // 487
	CBufferString fileName; // 488
	CVMixMasterVoiceList::GetMutex(); // 487
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
			int nLineNumber);  // 487
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 488
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 491
	CSoundSystem::PrecacheSound(
			const char* sample);  // 491
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 492
	CBufferString::~CBufferString(); // 494
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 494
} /* size: 335, variables: 2, inline expansions: 21 (547 bytes) */

// <02615BD7> soundsystem/soundsystem.cpp:498
void CSoundSystem::IsMuted()
{
} /* size: 7 */

// <02615B5F> soundsystem/soundsystem.cpp:503
void CSoundSystem::ToolLoadVSnd(CSimplePCMWaveData* pSoundData, const char* pVSndName)
{
} /* size: 23 */

// <02615B00> soundsystem/soundsystem.cpp:508
// function call: 1
void CSoundSystem::GetNumAudioDevices()
{
	CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::Count(); // 510
} /* size: 8, inline expansions: 1 (0 bytes) */

// <02628FC0> soundsystem/soundsystem.cpp:513
// variables: 2
// function calls: 4
void CSoundSystem::GetAudioDeviceDesc(int index)
{
	AudioDeviceDesc desc; // 515
	audio_device_description_t device; // 520
	CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::IsValidIndex(
			int i);  // 517
	CUtlMemory<audio_device_description_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::operator[](
			int i);  // 520
	CSoundSystem::GetAudioDeviceDesc(
				int index);  // 513
} /* size: 69, variables: 2, inline expansions: 4 (72 bytes) */

// <02615AC0> soundsystem/soundsystem.cpp:513
// variables: 2
void CSoundSystem::GetAudioDeviceDesc(int index)
{
	AudioDeviceDesc desc; // 515
	audio_device_description_t device; // 520
} /* size: 0, variables: 2 */

// <02615823> soundsystem/soundsystem.cpp:528
// variables: 2
// function calls: 8
void CSoundSystem::GetAudioDeviceId(int index)
{
	audio_device_description_t device; // 533
	CUtlString name; // 535
	CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::IsValidIndex(
			int i);  // 530
	CUtlString::CUtlString(
			const char* pString);  // 531
	CUtlMemory<audio_device_description_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::operator[](
			int i);  // 533
	CUtlString::CUtlString(); // 535
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 537
	CUtlString::~CUtlString(); // 538
} /* size: 241, variables: 2, inline expansions: 8 (139 bytes) */

// <02615419> soundsystem/soundsystem.cpp:540
// variables: 3
// function calls: 12
void CSoundSystem::GetAudioDeviceName(int index)
{
	audio_device_description_t device; // 545
	CUtlString name; // 546
	const char* localized; // 547
	CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::IsValidIndex(
			int i);  // 542
	CUtlMemory<audio_device_description_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::operator[](
			int i);  // 545
	CUtlString::CUtlString(
			const char* pString);  // 546
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 547
	CUtlString::CUtlString(
			const char* pString);  // 548
	CUtlString::~CUtlString(); // 555
	CUtlString::CUtlString(
			const char* pString);  // 543
	operator==(const CUtlString& utlString,
			const char* pString);  // 551
	CUtlString::CUtlString(
			const char* pString);  // 552
	CUtlString::CUtlString(
			const char* pString);  // 554
} /* size: 349, variables: 3, inline expansions: 12 (234 bytes) */

// <02615391> soundsystem/soundsystem.cpp:557
// function call: 1
void CSoundSystem::GetActiveAudioDevice()
{
	CUtlString::CUtlString(
			const char* pString);  // 559
} /* size: 44, inline expansions: 1 (19 bytes) */

// <02615353> soundsystem/soundsystem.cpp:563
void CSoundSystem::SetActiveAudioDevice(CUtlString id)
{
} /* size: 5 */

