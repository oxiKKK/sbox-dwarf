
//
// soundsystem/lowlevel/device_sdl.cpp
//
//	referenced by: libengine2.so
//
//	functions: 30
//	classes: 2
//

// <06E68D93> soundsystem/lowlevel/device_sdl.cpp:12
// member functions: 18
// member variables: 2
// vtable entries: 6
// class size: 16
class CSDLAudioSubsystem : public IAudioSubsystem {
public:
	/* class IAudioSubsystem <ancestor>; */ /* 0 8 */
	void CSDLAudioSubsystem(CSDLAudioSubsystem* , const CSDLAudioSubsystem& );
private:
	bool m_bInitializedSuccess; /* 8 1 */
	/* soundsystem/lowlevel/device_sdl.cpp:107 */
	void CSDLAudioSubsystem(CSDLAudioSubsystem* );
	/* soundsystem/lowlevel/device_sdl.cpp:120 */
	virtual void ~CSDLAudioSubsystem(CSDLAudioSubsystem* );
	/* soundsystem/lowlevel/device_sdl.cpp:18 */
	virtual eSubSystems_t GetSubsystemID(CSDLAudioSubsystem* );
	/* soundsystem/lowlevel/device_sdl.cpp:19 */
	virtual bool NeedsRestart(CSDLAudioSubsystem* );
	/* soundsystem/lowlevel/device_sdl.cpp:132 */
	virtual int EnumerateDevices(CSDLAudioSubsystem* , audio_device_description_t* , int);
	/* soundsystem/lowlevel/device_sdl.cpp:189 */
	virtual IAudioDevice2* CreateDevice(CSDLAudioSubsystem* , const audio_device_init_params_t& );
	/* soundsystem/lowlevel/device_sdl.cpp:23 */
	virtual void DestroyDevice(CSDLAudioSubsystem* , IAudioDevice2* );
	/* soundsystem/lowlevel/device_sdl.cpp:24 */
	virtual void ForceRestart(CSDLAudioSubsystem* );
	void CSDLAudioSubsystem(class CSDLAudioSubsystem *, const class CSDLAudioSubsystem  &); /* linkage=_ZN18CSDLAudioSubsystemC4ERKS_ */
	void CSDLAudioSubsystem(class CSDLAudioSubsystem *); /* linkage=_ZN18CSDLAudioSubsystemC4Ev */
	virtual void ~CSDLAudioSubsystem(class CSDLAudioSubsystem *); /* linkage=_ZN18CSDLAudioSubsystemD4Ev */
	virtual enum eSubSystems_t GetSubsystemID(class CSDLAudioSubsystem *); /* linkage=_ZN18CSDLAudioSubsystem14GetSubsystemIDEv */
	virtual bool NeedsRestart(class CSDLAudioSubsystem *); /* linkage=_ZN18CSDLAudioSubsystem12NeedsRestartEv */
	virtual int EnumerateDevices(class CSDLAudioSubsystem *, class audio_device_description_t *, int); /* linkage=_ZN18CSDLAudioSubsystem16EnumerateDevicesEP26audio_device_description_ti */
	virtual class IAudioDevice2 * CreateDevice(class CSDLAudioSubsystem *, const class audio_device_init_params_t  &); /* linkage=_ZN18CSDLAudioSubsystem12CreateDeviceERK26audio_device_init_params_t */
	virtual void DestroyDevice(class CSDLAudioSubsystem *, class IAudioDevice2 *); /* linkage=_ZN18CSDLAudioSubsystem13DestroyDeviceEP13IAudioDevice2 */
	virtual void ForceRestart(class CSDLAudioSubsystem *); /* linkage=_ZN18CSDLAudioSubsystem12ForceRestartEv */
};

// <06E6C8C5> soundsystem/lowlevel/device_sdl.cpp:18
void CSDLAudioSubsystem::GetSubsystemID()
{
} /* size: 7 */

// <06E6C897> soundsystem/lowlevel/device_sdl.cpp:19
void CSDLAudioSubsystem::NeedsRestart()
{
} /* size: 7 */

// <06E6C7E2> soundsystem/lowlevel/device_sdl.cpp:23
// function call: 1
void CSDLAudioSubsystem::DestroyDevice(IAudioDevice2* pDevice)
{
	CAudioSDL::~CAudioSDL(); // 23
} /* size: 77, inline expansions: 1 (32 bytes) */

// <06E689CE> soundsystem/lowlevel/device_sdl.cpp:41
// member functions: 36
// member variables: 13
// vtable entries: 9
// class size: 2,216
class CAudioSDL : public IAudioDevice2 {
public:
	/* class IAudioDevice2 <ancestor>; */ /* 0 32 */
	/* soundsystem/lowlevel/device_sdl.cpp:44 */
	void CAudioSDL(CAudioSDL* );
	/* soundsystem/lowlevel/device_sdl.cpp:210 */
	virtual void ~CAudioSDL(CAudioSDL* );
	/* soundsystem/lowlevel/device_sdl.cpp:221 */
	bool Init(CAudioSDL* , const audio_device_init_params_t& , CUtlVector<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >& , CSDLAudioSubsystem* );
	/* soundsystem/lowlevel/device_sdl.cpp:289 */
	virtual void Shutdown(CAudioSDL* );
	/* soundsystem/lowlevel/device_sdl.cpp:346 */
	virtual void OutputBuffer(CAudioSDL* , int, CAudioMixBuffer* );
	/* soundsystem/lowlevel/device_sdl.cpp:55 */
	virtual const wchar_t* GetDeviceID(const CAudioSDL* );
	/* soundsystem/lowlevel/device_sdl.cpp:365 */
	virtual int EmptyBufferCount(CAudioSDL* , int* );
	/* soundsystem/lowlevel/device_sdl.cpp:379 */
	virtual void CancelOutput(CAudioSDL* );
	/* soundsystem/lowlevel/device_sdl.cpp:385 */
	virtual void WaitForComplete(CAudioSDL* );
	/* soundsystem/lowlevel/device_sdl.cpp:59 */
	virtual void MuteDevice(CAudioSDL* , bool);
	/* soundsystem/lowlevel/device_sdl.cpp:74 */
	virtual void ClearBuffer(CAudioSDL* );
	/* soundsystem/lowlevel/device_sdl.cpp:305 */
	virtual void OutputDebugInfo(const CAudioSDL* );
	/* soundsystem/lowlevel/device_sdl.cpp:325 */
	void FillAudioBuffer(CAudioSDL* , int, int);
	/* soundsystem/lowlevel/device_sdl.cpp:298 */
	void GetActualDeviceName(const CAudioSDL* , CBufferString& );
private:
	/* soundsystem/lowlevel/device_sdl.cpp:83 */
	void CAudioSDL(CAudioSDL* , const CAudioSDL& );
	/* soundsystem/lowlevel/device_sdl.cpp:84 */
	CAudioSDL& operator=(CAudioSDL* , const CAudioSDL& );
	/* soundsystem/lowlevel/device_sdl.cpp:86 */
	int SamplesPerBuffer(CAudioSDL* );
	/* soundsystem/lowlevel/device_sdl.cpp:87 */
	int BytesPerBuffer(CAudioSDL* );
	SDL_AudioDeviceID m_nDeviceID; /* 28 4 */
	SDL_AudioSpec m_deviceSpec; /* 32 12 */
	audio_device_init_params_t m_savedParams; /* 48 1064 */
	uint m_nBufferSizeBytes; /* 1112 4 */
	int m_nMaxStreamSize; /* 1116 4 */
	float m_flDeviceRateToMixRate; /* 1120 4 */
	wchar_t m_deviceID[256]; /* 1124 1024 */
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > m_sampleInterleaveBuffer; /* 2152 32 */
	CMuteControl m_muteControl; /* 2184 8 */
	bool m_bThreadInitialized; /* 2192 1 */
	SDL_AudioStream * m_pStream; /* 2200 8 */
	bool m_bMuted; /* 2208 1 */
	void CAudioSDL(class CAudioSDL *); /* linkage=_ZN9CAudioSDLC4Ev */
	virtual void ~CAudioSDL(class CAudioSDL *); /* linkage=_ZN9CAudioSDLD4Ev */
	bool Init(class CAudioSDL *, const class audio_device_init_params_t  &, class CUtlVector<audio_device_description_t, CUtlMemory<audio_device_description_t, int> > &, class CSDLAudioSubsystem *); /* linkage=_ZN9CAudioSDL4InitERK26audio_device_init_params_tR10CUtlVectorI26audio_device_description_t10CUtlMemoryIS4_iEEP18CSDLAudioSubsystem */
	/* <6e6ce06> soundsystem/lowlevel/device_sdl.cpp:289 */
	virtual void Shutdown(class CAudioSDL *); /* linkage=_ZN9CAudioSDL8ShutdownEv */
	virtual void OutputBuffer(class CAudioSDL *, int, class CAudioMixBuffer *); /* linkage=_ZN9CAudioSDL12OutputBufferEiP15CAudioMixBuffer */
	virtual const wchar_t  * GetDeviceID(const class CAudioSDL  *); /* linkage=_ZNK9CAudioSDL11GetDeviceIDEv */
	/* <6e6ce43> soundsystem/lowlevel/device_sdl.cpp:365 */
	virtual int EmptyBufferCount(class CAudioSDL *, int *); /* linkage=_ZN9CAudioSDL16EmptyBufferCountEPi */
	virtual void CancelOutput(class CAudioSDL *); /* linkage=_ZN9CAudioSDL12CancelOutputEv */
	virtual void WaitForComplete(class CAudioSDL *); /* linkage=_ZN9CAudioSDL15WaitForCompleteEv */
	/* <6e6cf11> soundsystem/lowlevel/device_sdl.cpp:59 */
	virtual void MuteDevice(class CAudioSDL *, bool); /* linkage=_ZN9CAudioSDL10MuteDeviceEb */
	virtual void ClearBuffer(class CAudioSDL *); /* linkage=_ZN9CAudioSDL11ClearBufferEv */
	virtual void OutputDebugInfo(const class CAudioSDL  *); /* linkage=_ZNK9CAudioSDL15OutputDebugInfoEv */
	/* <6e6cfe0> soundsystem/lowlevel/device_sdl.cpp:325 */
	void FillAudioBuffer(class CAudioSDL *, int, int); /* linkage=_ZN9CAudioSDL15FillAudioBufferEii */
	void GetActualDeviceName(const class CAudioSDL  *, class CBufferString &); /* linkage=_ZNK9CAudioSDL19GetActualDeviceNameER13CBufferString */
	void CAudioSDL(class CAudioSDL *, const class CAudioSDL  &); /* linkage=_ZN9CAudioSDLC4ERKS_ */
	class CAudioSDL & operator=(class CAudioSDL *, const class CAudioSDL  &); /* linkage=_ZN9CAudioSDLaSERKS_ */
	int SamplesPerBuffer(class CAudioSDL *); /* linkage=_ZN9CAudioSDL16SamplesPerBufferEv */
	int BytesPerBuffer(class CAudioSDL *); /* linkage=_ZN9CAudioSDL14BytesPerBufferEv */
};

// <06E6C55F> soundsystem/lowlevel/device_sdl.cpp:44
void CAudioSDL::CAudioSDL()
{
} /* size: 0 */

// <06E6C546> soundsystem/lowlevel/device_sdl.cpp:44
inline void CAudioSDL::CAudioSDL()
{
} /* size: 0 */

// <06E6C518> soundsystem/lowlevel/device_sdl.cpp:55
void CAudioSDL::GetDeviceID()
{
} /* size: 12 */

// <06E6CF11> soundsystem/lowlevel/device_sdl.cpp:59
// function calls: 2
void CAudioSDL::MuteDevice(bool bMuteDevice)
{
	CMuteControl::Mute(
		bool bMuted);  // 65
	CAudioSDL::MuteDevice(
			bool bMuteDevice);  // 59
} /* size: 93, inline expansions: 2 (43 bytes) */

// <06E6C4F3> soundsystem/lowlevel/device_sdl.cpp:59
inline void CAudioSDL::MuteDevice(bool bMuteDevice)
{
} /* size: 0 */

// <06E6C4C5> soundsystem/lowlevel/device_sdl.cpp:74
void CAudioSDL::ClearBuffer()
{
} /* size: 5 */

// <06E6C33C> soundsystem/lowlevel/device_sdl.cpp:107
// variables: 2
// function calls: 3
void CSDLAudioSubsystem::CSDLAudioSubsystem()
{
	{
		_BlockRequiresSDLMainThread_t blockRequiresSDLMainThread___LINE__; // 109
	}
	IAudioSubsystem::IAudioSubsystem(); // 107
	{
		_BlockRequiresSDLMainThread_t blockRequiresSDLMainThread___LINE__; // 109
		operator()(const class* __closure); // 64
		CRunFunctorHelper::operator<< <CSDLAudioSubsystem::CSDLAudioSubsystem(
											class& runFunctor);  // 109
	}
} /* size: 0, inline expansions: 1 (0 bytes) */

// <06E6C2B4> soundsystem/lowlevel/device_sdl.cpp:107
// variable: 1
void CSDLAudioSubsystem::CSDLAudioSubsystem()
{
	{
		_BlockRequiresSDLMainThread_t blockRequiresSDLMainThread___LINE__; // 109
	}
} /* size: 0 */

// <06E6C23D> soundsystem/lowlevel/device_sdl.cpp:120
// function call: 1
void CSDLAudioSubsystem::~CSDLAudioSubsystem()
{
	CSDLAudioSubsystem::~CSDLAudioSubsystem(); // 120
} /* size: 34, inline expansions: 1 (10 bytes) */

// <06E6C113> soundsystem/lowlevel/device_sdl.cpp:120
// function calls: 4
void CSDLAudioSubsystem::~CSDLAudioSubsystem()
{
	IAudioSubsystem::~IAudioSubsystem(); // 127
	IAudioSubsystem::~IAudioSubsystem(); // 127
	CSDLAudioSubsystem::~CSDLAudioSubsystem(); // 120
	CSDLAudioSubsystem::~CSDLAudioSubsystem(); // 127
} /* size: 72, inline expansions: 4 (44 bytes) */

// <06E6C0FA> soundsystem/lowlevel/device_sdl.cpp:120
void CSDLAudioSubsystem::~CSDLAudioSubsystem()
{
} /* size: 0 */

// <06E6BE19> soundsystem/lowlevel/device_sdl.cpp:132
// variables: 7
// function calls: 3
void CSDLAudioSubsystem::EnumerateDevices(audio_device_description_t* pDeviceListOut, int nListCount)
{
	int nOutputDeviceCount; // 149
	SDL_AudioDeviceID* pDevices; // 150
	int nIterateCount; // 163
	{
		audio_device_description_t& description; // 139
		V_strcpy_safe<256>(char& pDest,
					const char* pSrc);  // 141
	}
	{
		int i; // 164
		{
			const char* pNameUTF8; // 166
			audio_device_description_t& description; // 168
			V_strcpy_safe<256>(char& pDest,
						const char* pSrc);  // 172
		}
	}
	Min<int>(const int& val1,
		const int& val2);  // 163
} /* size: 441, variables: 3, inline expansions: 1 (7 bytes) */

// <06E6B5B5> soundsystem/lowlevel/device_sdl.cpp:189
// variables: 5
// function calls: 31
void CSDLAudioSubsystem::CreateDevice(const audio_device_init_params_t& params)
{
	CAudioSDL* pDevice; // 194
	CUtlVector<audio_device_description_t, CUtlMemory<audio_device_description_t, int> > deviceList; // 196
	int nAudioDevices; // 197
	SDL_AudioDeviceID* pDevices; // 198
	IAudioDevice2::IAudioDevice2(); // 45
	audio_device_init_params_t::audio_device_init_params_t(); // 45
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 45
	CMuteControl::CMuteControl(); // 45
	CAudioSDL::CAudioSDL(); // 194
	CUtlMemory<audio_device_description_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<audio_device_description_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::CUtlVector(); // 196
	CUtlMemory<audio_device_description_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
	}
	CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::SetCount(
		int count);  // 200
	CAudioSDL::~CAudioSDL(); // 206
	CUtlMemory<audio_device_description_t, int>::Purge(); // 903
	CUtlMemory<audio_device_description_t, int>::Purge(); // 1799
	CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::Purge(); // 560
	ValidateAlignment<audio_device_description_t>(void); // 508
	CUtlMemory<audio_device_description_t, int>::Purge(); // 510
	CUtlMemory<audio_device_description_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::~CUtlVector(); // 208
} /* size: 649, variables: 4, inline expansions: 31 (1332 bytes) */

// <06E6B424> soundsystem/lowlevel/device_sdl.cpp:210
// function calls: 8
void CAudioSDL::~CAudioSDL()
{
	CAudioSDL::Shutdown(); // 212
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 213
} /* size: 110, inline expansions: 8 (231 bytes) */

// <06E6B3BE> soundsystem/lowlevel/device_sdl.cpp:210
void CAudioSDL::~CAudioSDL()
{
} /* size: 36 */

// <06E6B2BA> soundsystem/lowlevel/device_sdl.cpp:215
// variable: 1
// function calls: 2
void AudioCallback(void* userdata, SDL_AudioStream* stream, int len, int total)
{
	CAudioSDL* dev; // 217
	CAudioSDL::FillAudioBuffer(
			int len,
			int total);  // 325
	CAudioSDL::FillAudioBuffer(
			int len,
			int total);  // 218
} /* size: 81, variables: 1, inline expansions: 2 (86 bytes) */

// <06E6AFBC> soundsystem/lowlevel/device_sdl.cpp:221
// variables: 8
// function calls: 4
void CAudioSDL::Init(const audio_device_init_params_t& params, CUtlVector<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >& deviceList, CSDLAudioSubsystem* pSubsystem)
{
	int nDeviceCount; // 225
	SDL_AudioDeviceID* pDevices; // 226
	SDL_AudioDeviceID nDeviceID; // 231
	uint nSampleSize; // 262
	int BUFFER_COUNT; // 267
	const char* pDeviceName; // 273
	{
		int i; // 235
		CUtlMemory<audio_device_description_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::operator[](
				int i);  // 237
		V_wcscmp(const wchar_t* s1,
			const wchar_t* s2);  // 237
	}
	{
		uint nChannels; // 247
	}
	CUtlVectorBase<audio_device_description_t, CUtlMemory<audio_device_description_t, int> >::Count(); // 228
} /* size: 480, variables: 6, inline expansions: 1 (5 bytes) */

// <06E6CE06> soundsystem/lowlevel/device_sdl.cpp:289
void CAudioSDL::Shutdown()
{
} /* size: 57 */

// <06E6ADF2> soundsystem/lowlevel/device_sdl.cpp:298
// variable: 1
// function calls: 4
void CAudioSDL::GetActualDeviceName(CBufferString& nameOut)
{
	char displayName; // 300
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 302
} /* size: 152, variables: 1, inline expansions: 4 (107 bytes) */

// <06E6AA6B> soundsystem/lowlevel/device_sdl.cpp:305
// variables: 3
// function calls: 9
void CAudioSDL::OutputDebugInfo()
{
	CPathBufferString displayName; // 307
	const char* pSDLDriverName; // 310
	int nStatus; // 316
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 307
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 323
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 319
	IAudioDevice2::ChannelCount(); // 320
} /* size: 476, variables: 3, inline expansions: 9 (186 bytes) */

// <06E6CFE0> soundsystem/lowlevel/device_sdl.cpp:325
// function call: 1
void CAudioSDL::FillAudioBuffer(int len, int total)
{
	CAudioSDL::FillAudioBuffer(
			int len,
			int total);  // 325
} /* size: 0, inline expansions: 1 (0 bytes) */

// <06E6AA38> soundsystem/lowlevel/device_sdl.cpp:325
void CAudioSDL::FillAudioBuffer(int len, int total)
{
} /* size: 0 */

// <06E6A8B0> soundsystem/lowlevel/device_sdl.cpp:346
// function calls: 4
void CAudioSDL::OutputBuffer(int nChannels, CAudioMixBuffer* pChannelArray)
{
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 355
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 362
} /* size: 158, inline expansions: 4 (14 bytes) */

// <06E6CE43> soundsystem/lowlevel/device_sdl.cpp:365
// variables: 3
// function calls: 2
void CAudioSDL::EmptyBufferCount(int* pQueuedBufferCount)
{
	int nAvailRead; // 367
	int nMixBytesQueued; // 369
	int nQueuedBuffers; // 371
	Ceil2Int(float a); // 369
	Min<int>(const int& val1,
		const int& val2);  // 375
} /* size: 160, variables: 3, inline expansions: 2 (94 bytes) */

// <06E6A863> soundsystem/lowlevel/device_sdl.cpp:365
// variables: 3
void CAudioSDL::EmptyBufferCount(int* pQueuedBufferCount)
{
	int nAvailRead; // 367
	int nMixBytesQueued; // 369
	int nQueuedBuffers; // 371
} /* size: 0, variables: 3 */

// <06E6A821> soundsystem/lowlevel/device_sdl.cpp:379
void CAudioSDL::CancelOutput()
{
} /* size: 16 */

// <06E6A706> soundsystem/lowlevel/device_sdl.cpp:385
// variable: 1
// function calls: 2
void CAudioSDL::WaitForComplete()
{
	{
		int nQueuedCount; // 389
		Ceil2Int(float a); // 369
		CAudioSDL::EmptyBufferCount(
				int* pQueuedBufferCount);  // 390
	}
} /* size: 246 */

