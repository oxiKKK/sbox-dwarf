
//
// soundsystem/snd_wave_mixer_mp3.cpp
//
//	referenced by: libengine2.so
//
//	functions: 18
//	class: 1
//

// <02523431> soundsystem/snd_wave_mixer_mp3.cpp:20
// member functions: 28
// member variables: 7
// vtable entries: 6
// class size: 40,808
class CAudioMixerWaveMP3 : public CAudioMixerEncoded {
public:
	/* class CAudioMixerEncoded <ancestor>; */ /* 0 0 */
	void CAudioMixerWaveMP3(CAudioMixerWaveMP3* , const CAudioMixerWaveMP3& );
	/* soundsystem/snd_wave_mixer_mp3.cpp:114 */
	void CAudioMixerWaveMP3(CAudioMixerWaveMP3* , CSfxTable* );
	/* soundsystem/snd_wave_mixer_mp3.cpp:124 */
	virtual void ~CAudioMixerWaveMP3(CAudioMixerWaveMP3* );
	/* soundsystem/snd_wave_mixer_mp3.cpp:230 */
	virtual void SetSamplePosition(CAudioMixerWaveMP3* , int);
	/* soundsystem/snd_wave_mixer_mp3.cpp:28 */
	virtual int GetPositionForSave(CAudioMixerWaveMP3* );
	/* soundsystem/snd_wave_mixer_mp3.cpp:29 */
	virtual void SetPositionFromSaved(CAudioMixerWaveMP3* , int);
	/* soundsystem/snd_wave_mixer_mp3.cpp:31 */
	virtual uint GetDecodedData(CAudioMixerWaveMP3* , void* , uint);
	/* soundsystem/snd_wave_mixer_mp3.cpp:81 */
	virtual void LoopToStart(CAudioMixerWaveMP3* );
	/* soundsystem/snd_wave_mixer_mp3.cpp:86 */
	void ResetLoop(CAudioMixerWaveMP3* , int32);
	/* soundsystem/snd_wave_mixer_mp3.cpp:95 */
	bool IsValid(CAudioMixerWaveMP3* );
	/* soundsystem/snd_wave_mixer_mp3.cpp:97 */
	int GetStreamOutputRate(CAudioMixerWaveMP3* );
	/* soundsystem/snd_wave_mixer_mp3.cpp:219 */
	virtual void OnCachedDataAvailable(CAudioMixerWaveMP3* );
private:
	/* soundsystem/snd_wave_mixer_mp3.cpp:130 */
	void OpenHandle(CAudioMixerWaveMP3* );
	/* soundsystem/snd_wave_mixer_mp3.cpp:210 */
	void CloseHandle(CAudioMixerWaveMP3* );
	drmp3 m_mp3; /* 8400 32376 */
	bool m_bInitialized; /* 40776 1 */
	drmp3_uint64 m_nPCMFramePosition; /* 40784 8 */
	drmp3_uint64 m_nLoopEndFrame; /* 40792 8 */
	int m_nChannelCount; /* 40800 4 */
	int m_nSampleRate; /* 40804 4 */
	void CAudioMixerWaveMP3(class CAudioMixerWaveMP3 *, const class CAudioMixerWaveMP3  &); /* linkage=_ZN18CAudioMixerWaveMP3C4ERKS_ */
	void CAudioMixerWaveMP3(class CAudioMixerWaveMP3 *, class CSfxTable *); /* linkage=_ZN18CAudioMixerWaveMP3C4EP9CSfxTable */
	virtual void ~CAudioMixerWaveMP3(class CAudioMixerWaveMP3 *); /* linkage=_ZN18CAudioMixerWaveMP3D4Ev */
	/* <2525cb0> soundsystem/snd_wave_mixer_mp3.cpp:230 */
	virtual void SetSamplePosition(class CAudioMixerWaveMP3 *, int); /* linkage=_ZN18CAudioMixerWaveMP317SetSamplePositionEi */
	virtual int GetPositionForSave(class CAudioMixerWaveMP3 *); /* linkage=_ZN18CAudioMixerWaveMP318GetPositionForSaveEv */
	virtual void SetPositionFromSaved(class CAudioMixerWaveMP3 *, int); /* linkage=_ZN18CAudioMixerWaveMP320SetPositionFromSavedEi */
	virtual uint GetDecodedData(class CAudioMixerWaveMP3 *, void *, uint); /* linkage=_ZN18CAudioMixerWaveMP314GetDecodedDataEPvj */
	virtual void LoopToStart(class CAudioMixerWaveMP3 *); /* linkage=_ZN18CAudioMixerWaveMP311LoopToStartEv */
	void ResetLoop(class CAudioMixerWaveMP3 *, int32); /* linkage=_ZN18CAudioMixerWaveMP39ResetLoopEi */
	bool IsValid(class CAudioMixerWaveMP3 *); /* linkage=_ZN18CAudioMixerWaveMP37IsValidEv */
	int GetStreamOutputRate(class CAudioMixerWaveMP3 *); /* linkage=_ZN18CAudioMixerWaveMP319GetStreamOutputRateEv */
	virtual void OnCachedDataAvailable(class CAudioMixerWaveMP3 *); /* linkage=_ZN18CAudioMixerWaveMP321OnCachedDataAvailableEv */
	/* <2525dd8> soundsystem/snd_wave_mixer_mp3.cpp:130 */
	void OpenHandle(class CAudioMixerWaveMP3 *); /* linkage=_ZN18CAudioMixerWaveMP310OpenHandleEv */
	/* <2525e1e> soundsystem/snd_wave_mixer_mp3.cpp:210 */
	void CloseHandle(class CAudioMixerWaveMP3 *); /* linkage=_ZN18CAudioMixerWaveMP311CloseHandleEv */
} __attribute__((__aligned__(8)));

// <02524B59> soundsystem/snd_wave_mixer_mp3.cpp:28
void CAudioMixerWaveMP3::GetPositionForSave()
{
} /* size: 11 */

// <02524A0C> soundsystem/snd_wave_mixer_mp3.cpp:29
// function calls: 4
void CAudioMixerWaveMP3::SetPositionFromSaved(int position)
{
	CAudioMixerWaveMP3::OpenHandle(); // 233
	CAudioMixerWaveMP3::ResetLoop(
			int32 nLoopPos);  // 86
	CAudioMixerWaveMP3::ResetLoop(
			int32 nLoopPos);  // 236
	CAudioMixerWaveMP3::SetSamplePosition(
				int newPosition);  // 29
} /* size: 130, inline expansions: 4 (163 bytes) */

// <02524727> soundsystem/snd_wave_mixer_mp3.cpp:31
// variables: 6
// function calls: 7
void CAudioMixerWaveMP3::GetDecodedData(void* pBuffer, uint nBufferSize)
{
	uint nBytesPerFrame; // 43
	uint nFramesRequested; // 44
	drmp3_uint64 nFramesRead; // 48
	uint nBytesDecoded; // 60
	{
		drmp3_uint64 nCurrentFrame; // 65
		{
			drmp3_uint64 nValidFrames; // 68
			CStrongHandle<InfoForResourceTypeVSound_t>::operator->(); // 72
			CAudioMixerWaveMP3::ResetLoop(
					int32 nLoopPos);  // 86
			CAudioMixerWaveMP3::ResetLoop(
					int32 nLoopPos);  // 73
		}
	}
	CStrongHandle<InfoForResourceTypeVSound_t>::operator->(); // 51
	CAudioMixerWaveMP3::ResetLoop(
			int32 nLoopPos);  // 86
	CAudioMixerWaveMP3::ResetLoop(
			int32 nLoopPos);  // 53
	CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::Count(); // 35
} /* size: 507, variables: 4, inline expansions: 4 (120 bytes) */

// <02524644> soundsystem/snd_wave_mixer_mp3.cpp:81
// function calls: 3
void CAudioMixerWaveMP3::LoopToStart()
{
	CStrongHandle<InfoForResourceTypeVSound_t>::operator->(); // 83
	CAudioMixerWaveMP3::ResetLoop(
			int32 nLoopPos);  // 86
	CAudioMixerWaveMP3::ResetLoop(
			int32 nLoopPos);  // 83
} /* size: 107, inline expansions: 3 (128 bytes) */

// <0252461F> soundsystem/snd_wave_mixer_mp3.cpp:86
inline void CAudioMixerWaveMP3::ResetLoop(int32 nLoopPos)
{
} /* size: 0 */

// <0252447E> soundsystem/snd_wave_mixer_mp3.cpp:114
// function calls: 6
void CAudioMixerWaveMP3::CAudioMixerWaveMP3(CSfxTable* pSfx)
{
	CStrongHandle<InfoForResourceTypeVSound_t>::operator->(); // 116
	VSoundV00_t::channels(); // 116
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 120
	CStrongHandle<InfoForResourceTypeVSound_t>::operator->(); // 117
	VSoundV00_t::m_rate(); // 117
} /* size: 0, inline expansions: 6 (81 bytes) */

// <02524459> soundsystem/snd_wave_mixer_mp3.cpp:114
void CAudioMixerWaveMP3::CAudioMixerWaveMP3(CSfxTable* pSfx)
{
} /* size: 0 */

// <0252438F> soundsystem/snd_wave_mixer_mp3.cpp:124
// function calls: 2
void CAudioMixerWaveMP3::~CAudioMixerWaveMP3()
{
	CAudioMixerWaveMP3::CloseHandle(); // 210
	CAudioMixerWaveMP3::CloseHandle(); // 126
} /* size: 76, inline expansions: 2 (63 bytes) */

// <02524293> soundsystem/snd_wave_mixer_mp3.cpp:124
// function calls: 3
void CAudioMixerWaveMP3::~CAudioMixerWaveMP3()
{
	CAudioMixerWaveMP3::CloseHandle(); // 210
	CAudioMixerWaveMP3::CloseHandle(); // 126
	CAudioMixerWaveMP3::~CAudioMixerWaveMP3(); // 127
} /* size: 85, inline expansions: 3 (99 bytes) */

// <0252427A> soundsystem/snd_wave_mixer_mp3.cpp:124
void CAudioMixerWaveMP3::~CAudioMixerWaveMP3()
{
} /* size: 0 */

// <02525DD8> soundsystem/snd_wave_mixer_mp3.cpp:130
void CAudioMixerWaveMP3::OpenHandle()
{
} /* size: 0 */

// <02524F59> soundsystem/snd_wave_mixer_mp3.cpp:130
// variables: 9
// function calls: 53
void CAudioMixerWaveMP3::OpenHandle()
{
	{
		int nDataSize; // 136
		void* pData; // 145
		uint nLoopEndSample; // 176
		CSfxTable::IsCached(); // 134
		{
		}
		CStrongHandle<InfoForResourceTypeVSound_t>::operator->(); // 136
		{
			CPathBufferString soundName; // 139
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 591
			CBufferStringN<200>::CBufferStringN(); // 139
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 141
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 143
		}
		{
			CPathBufferString soundName; // 148
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 591
			CBufferStringN<200>::CBufferStringN(); // 148
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 150
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 152
		}
		{
			CPathBufferString soundName; // 156
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 591
			CBufferStringN<200>::CBufferStringN(); // 156
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 158
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 160
		}
		{
			CPathBufferString soundName; // 169
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 591
			CBufferStringN<200>::CBufferStringN(); // 169
			CAudioMixerWaveMP3::CloseHandle(); // 210
			CAudioMixerWaveMP3::CloseHandle(); // 172
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 174
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 171
		}
		CStrongHandle<InfoForResourceTypeVSound_t>::operator->(); // 176
		{
			CPathBufferString soundName; // 184
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 591
			CBufferStringN<200>::CBufferStringN(); // 184
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 188
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 186
		}
		{
			CPathBufferString soundName; // 192
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 591
			CBufferStringN<200>::CBufferStringN(); // 192
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 194
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 195
		}
	}
} /* size: 0 */

// <025241A8> soundsystem/snd_wave_mixer_mp3.cpp:130
// variables: 11
void CAudioMixerWaveMP3::OpenHandle()
{
	const char   __FUNCTION__; // 19558
	{
		int nDataSize; // 136
		void* pData; // 145
		uint nLoopEndSample; // 176
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 134
		}
		{
			CPathBufferString soundName; // 139
		}
		{
			CPathBufferString soundName; // 148
		}
		{
			CPathBufferString soundName; // 156
		}
		{
			CPathBufferString soundName; // 169
		}
		{
			CPathBufferString soundName; // 184
		}
		{
			CPathBufferString soundName; // 192
		}
	}
} /* size: 0, variables: 1 */

// <02525E1E> soundsystem/snd_wave_mixer_mp3.cpp:210
// function call: 1
void CAudioMixerWaveMP3::CloseHandle()
{
	CAudioMixerWaveMP3::CloseHandle(); // 210
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0252418F> soundsystem/snd_wave_mixer_mp3.cpp:210
void CAudioMixerWaveMP3::CloseHandle()
{
} /* size: 0 */

// <02524115> soundsystem/snd_wave_mixer_mp3.cpp:219
// function call: 1
void CAudioMixerWaveMP3::OnCachedDataAvailable()
{
	CAudioMixerWaveMP3::OpenHandle(); // 221
} /* size: 25, inline expansions: 1 (20 bytes) */

// <02525CB0> soundsystem/snd_wave_mixer_mp3.cpp:230
// function calls: 3
void CAudioMixerWaveMP3::SetSamplePosition(int newPosition)
{
	CAudioMixerWaveMP3::OpenHandle(); // 233
	CAudioMixerWaveMP3::ResetLoop(
			int32 nLoopPos);  // 86
	CAudioMixerWaveMP3::ResetLoop(
			int32 nLoopPos);  // 236
} /* size: 106, inline expansions: 3 (88 bytes) */

// <025240F0> soundsystem/snd_wave_mixer_mp3.cpp:230
void CAudioMixerWaveMP3::SetSamplePosition(int newPosition)
{
} /* size: 0 */

