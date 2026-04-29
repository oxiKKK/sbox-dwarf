
//
// public/soundsystem/snd_audio_source.h
//
//	referenced by: libengine2.so
//
//	functions: 16
//	classes: 6
//	structs: 3
//

// <0250E91A> ../public/soundsystem/snd_audio_source.h:23
// member variables: 7
// struct size: 18
struct waveformatex_t {
	uint16 wFormatTag; /* 0 2 */
	uint16 nChannels; /* 2 2 */
	uint32 nSamplesPerSec; /* 4 4 */
	uint32 nAvgBytesPerSec; /* 8 4 */
	uint16 nBlockAlign; /* 12 2 */
	uint16 wBitsPerSample; /* 14 2 */
	uint16 cbSize; /* 16 2 */
} __attribute__((__packed__));

// <0250E991> ../public/soundsystem/snd_audio_source.h:49
// member variables: 2
// struct size: 4
struct adpcmcoefset_t {
	short int iCoef1; /* 0 2 */
	short int iCoef2; /* 2 2 */
};

// <0250E9C2> ../public/soundsystem/snd_audio_source.h:55
// member variables: 4
// struct size: 26
struct adpcmwaveformat_t {
	waveformatex_t wfx; /* 0 18 */
	uint16 wSamplesPerBlock; /* 18 2 */
	uint16 wNumCoef; /* 20 2 */
	adpcmcoefset_t aCoef[1]; /* 22 4 */
} __attribute__((__packed__));

// <0263DDC1> ../public/soundsystem/snd_audio_source.h:75
void CAudioMixerData::CAudioMixerData()
{
} /* size: 0 */

// <0263DDA5> ../public/soundsystem/snd_audio_source.h:75
inline void CAudioMixerData::CAudioMixerData()
{
} /* size: 0 */

// <0263DD8E> ../public/soundsystem/snd_audio_source.h:75
void CAudioMixerData::~CAudioMixerData()
{
} /* size: 0 */

// <0263DD72> ../public/soundsystem/snd_audio_source.h:75
inline void CAudioMixerData::~CAudioMixerData()
{
} /* size: 0 */

// <012026E2> ../public/soundsystem/snd_audio_source.h:75
// member functions: 8
// member variables: 7
// class size: 128
class CAudioMixerData {
	/* ../public/soundsystem/snd_audio_source.h:78 */
	void CreateSourceInputForChannel(const CAudioMixerData* , audio_source_input_t* , int);
	/* ../public/soundsystem/snd_audio_source.h:79 */
	uint QueuedSampleCount(const CAudioMixerData* , const audio_source_indexstate_t& );
	/* ../public/soundsystem/snd_audio_source.h:80 */
	void Truncate(CAudioMixerData* , const audio_source_indexstate_t& , uint);
	audio_source_indexstate_t m_indexState; /* 0 16 */
	uint32 m_nSamplingRate; /* 16 4 */
	uint8 m_nChannels; /* 20 1 */
	vaudio_channel_index_t m_nChannelSelect; /* 21 1 */
	vaudio_sampleformats_t m_nFormat; /* 22 2 */
	uint8 m_nLoopingEnabled; /* 24 1 */
	CUtlVectorFixedGrowable<audio_buffer_input_t, 4> m_packets __attribute__((__aligned__(8))); /* 32 96 */
	/* <2551096> soundsystem/snd_wave_source.cpp:43 */
	void CreateSourceInputForChannel(const class CAudioMixerData  *, class audio_source_input_t *, int); /* linkage=_ZNK15CAudioMixerData27CreateSourceInputForChannelEP20audio_source_input_ti */
	/* <25511a7> soundsystem/snd_wave_source.cpp:56 */
	uint QueuedSampleCount(const class CAudioMixerData  *, const class audio_source_indexstate_t  &); /* linkage=_ZNK15CAudioMixerData17QueuedSampleCountERK25audio_source_indexstate_t */
	void Truncate(class CAudioMixerData *, const class audio_source_indexstate_t  &, uint); /* linkage=_ZN15CAudioMixerData8TruncateERK25audio_source_indexstate_tj */
	void ~CAudioMixerData(class CAudioMixerData *); /* linkage=_ZN15CAudioMixerDataD4Ev */
	void CAudioMixerData(class CAudioMixerData *); /* linkage=_ZN15CAudioMixerDataC4Ev */
} __attribute__((__aligned__(8)));

// <024FB5BA> ../public/soundsystem/snd_audio_source.h:75
// member functions: 10
// member variables: 7
// class size: 128
class CAudioMixerData {
	/* ../public/soundsystem/snd_audio_source.h:78 */
	void CreateSourceInputForChannel(const CAudioMixerData* , audio_source_input_t* , int);
	/* ../public/soundsystem/snd_audio_source.h:79 */
	uint QueuedSampleCount(const CAudioMixerData* , const audio_source_indexstate_t& );
	/* ../public/soundsystem/snd_audio_source.h:80 */
	void Truncate(CAudioMixerData* , const audio_source_indexstate_t& , uint);
	audio_source_indexstate_t m_indexState; /* 0 16 */
	uint32 m_nSamplingRate; /* 16 4 */
	uint8 m_nChannels; /* 20 1 */
	vaudio_channel_index_t m_nChannelSelect; /* 21 1 */
	vaudio_sampleformats_t m_nFormat; /* 22 2 */
	uint8 m_nLoopingEnabled; /* 24 1 */
	CUtlVectorFixedGrowable<audio_buffer_input_t, 4> m_packets __attribute__((__aligned__(8))); /* 32 96 */
	void ~CAudioMixerData(CAudioMixerData* );
	void CAudioMixerData(CAudioMixerData* );
	/* <2551096> soundsystem/snd_wave_source.cpp:43 */
	void CreateSourceInputForChannel(const class CAudioMixerData  *, class audio_source_input_t *, int); /* linkage=_ZNK15CAudioMixerData27CreateSourceInputForChannelEP20audio_source_input_ti */
	/* <25511a7> soundsystem/snd_wave_source.cpp:56 */
	uint QueuedSampleCount(const class CAudioMixerData  *, const class audio_source_indexstate_t  &); /* linkage=_ZNK15CAudioMixerData17QueuedSampleCountERK25audio_source_indexstate_t */
	void Truncate(class CAudioMixerData *, const class audio_source_indexstate_t  &, uint); /* linkage=_ZN15CAudioMixerData8TruncateERK25audio_source_indexstate_tj */
	void ~CAudioMixerData(class CAudioMixerData *); /* linkage=_ZN15CAudioMixerDataD4Ev */
	void CAudioMixerData(class CAudioMixerData *); /* linkage=_ZN15CAudioMixerDataC4Ev */
} __attribute__((__aligned__(8)));

// <0263DE5B> ../public/soundsystem/snd_audio_source.h:100
void CAudioMixer::CAudioMixer()
{
} /* size: 0 */

// <0263DE3F> ../public/soundsystem/snd_audio_source.h:100
inline void CAudioMixer::CAudioMixer()
{
} /* size: 0 */

// <024FC142> ../public/soundsystem/snd_audio_source.h:100
// member functions: 40
// member variable: 1
// vtable entries: 16
// class size: 8
class CAudioMixer {
	void CAudioMixer(CAudioMixer* , const CAudioMixer& );
	void CAudioMixer(CAudioMixer* );
	int ()(void) * * _vptr.CAudioMixer; /* 0 8 */
	/* ../public/soundsystem/snd_audio_source.h:103 */
	virtual void ~CAudioMixer(CAudioMixer* );
	/* ../public/soundsystem/snd_audio_source.h:105 */
	virtual bool ShouldContinueMixing(CAudioMixer* );
	/* ../public/soundsystem/snd_audio_source.h:107 */
	virtual CAudioSource* GetSource(CAudioMixer* );
	/* ../public/soundsystem/snd_audio_source.h:110 */
	virtual int GetSamplePosition(CAudioMixer* );
	/* ../public/soundsystem/snd_audio_source.h:117 */
	virtual void SetSamplePosition(CAudioMixer* , int);
	/* ../public/soundsystem/snd_audio_source.h:120 */
	virtual void SetSampleEnd(CAudioMixer* , uint);
	/* ../public/soundsystem/snd_audio_source.h:126 */
	virtual void DelayOrSkipSamples(CAudioMixer* , int);
	/* ../public/soundsystem/snd_audio_source.h:130 */
	virtual bool IsReadyToMix(CAudioMixer* );
	/* ../public/soundsystem/snd_audio_source.h:134 */
	virtual int GetPositionForSave(CAudioMixer* );
	/* ../public/soundsystem/snd_audio_source.h:135 */
	virtual void SetPositionFromSaved(CAudioMixer* , int);
	/* ../public/soundsystem/snd_audio_source.h:137 */
	virtual const CAudioMixerData* GetMixerData(CAudioMixer* );
	/* ../public/soundsystem/snd_audio_source.h:138 */
	virtual void UpdateMixerState(CAudioMixer* , audio_source_indexstate_t& );
	/* ../public/soundsystem/snd_audio_source.h:140 */
	virtual CSfxTable* GetSfxTable(CAudioMixer* );
	/* ../public/soundsystem/snd_audio_source.h:142 */
	virtual uint GetSampleCount(CAudioMixer* );
	/* soundsystem/snd_wave_mixer.cpp:62 */
	virtual bool SetTimeScale(CAudioMixer* , float);
	/* ../public/soundsystem/snd_audio_source.h:145 */
	virtual void SetChannelSelect(CAudioMixer* , vaudio_channel_index_t);
	/* ../public/soundsystem/snd_audio_source.h:146 */
	virtual void EnableLooping(CAudioMixer* , bool);
	/* ../public/soundsystem/snd_audio_source.h:148 */
	void ReadToBuffer(CAudioMixer* , float, CAudioMixDeviceBuffers* );
	void ReadToBuffer(class CAudioMixer *, float, class CAudioMixDeviceBuffers *); /* linkage=_ZN11CAudioMixer12ReadToBufferEfP22CAudioMixDeviceBuffers */
	void CAudioMixer(class CAudioMixer *, const class CAudioMixer  &); /* linkage=_ZN11CAudioMixerC4ERKS_ */
	void CAudioMixer(class CAudioMixer *); /* linkage=_ZN11CAudioMixerC4Ev */
	virtual void ~CAudioMixer(class CAudioMixer *); /* linkage=_ZN11CAudioMixerD4Ev */
	virtual bool ShouldContinueMixing(class CAudioMixer *); /* linkage=_ZN11CAudioMixer20ShouldContinueMixingEv */
	virtual class CAudioSource * GetSource(class CAudioMixer *); /* linkage=_ZN11CAudioMixer9GetSourceEv */
	virtual int GetSamplePosition(class CAudioMixer *); /* linkage=_ZN11CAudioMixer17GetSamplePositionEv */
	virtual void SetSamplePosition(class CAudioMixer *, int); /* linkage=_ZN11CAudioMixer17SetSamplePositionEi */
	virtual void SetSampleEnd(class CAudioMixer *, uint); /* linkage=_ZN11CAudioMixer12SetSampleEndEj */
	virtual void DelayOrSkipSamples(class CAudioMixer *, int); /* linkage=_ZN11CAudioMixer18DelayOrSkipSamplesEi */
	virtual bool IsReadyToMix(class CAudioMixer *); /* linkage=_ZN11CAudioMixer12IsReadyToMixEv */
	virtual int GetPositionForSave(class CAudioMixer *); /* linkage=_ZN11CAudioMixer18GetPositionForSaveEv */
	virtual void SetPositionFromSaved(class CAudioMixer *, int); /* linkage=_ZN11CAudioMixer20SetPositionFromSavedEi */
	virtual const class CAudioMixerData  * GetMixerData(class CAudioMixer *); /* linkage=_ZN11CAudioMixer12GetMixerDataEv */
	virtual void UpdateMixerState(class CAudioMixer *, class audio_source_indexstate_t &); /* linkage=_ZN11CAudioMixer16UpdateMixerStateER25audio_source_indexstate_t */
	virtual class CSfxTable * GetSfxTable(class CAudioMixer *); /* linkage=_ZN11CAudioMixer11GetSfxTableEv */
	virtual uint GetSampleCount(class CAudioMixer *); /* linkage=_ZN11CAudioMixer14GetSampleCountEv */
	virtual bool SetTimeScale(class CAudioMixer *, float); /* linkage=_ZN11CAudioMixer12SetTimeScaleEf */
	virtual void SetChannelSelect(class CAudioMixer *, enum vaudio_channel_index_t); /* linkage=_ZN11CAudioMixer16SetChannelSelectE22vaudio_channel_index_t */
	virtual void EnableLooping(class CAudioMixer *, bool); /* linkage=_ZN11CAudioMixer13EnableLoopingEb */
};

// <02640BF4> ../public/soundsystem/snd_audio_source.h:103
void CAudioMixer::~CAudioMixer()
{
} /* size: 0 */

// <02640BC4> ../public/soundsystem/snd_audio_source.h:103
inline void CAudioMixer::~CAudioMixer()
{
} /* size: 0 */

// <01338F78> ../public/soundsystem/snd_audio_source.h:148
// variables: 4
inline void CAudioMixer::ReadToBuffer(float pitch, CAudioMixDeviceBuffers* buffers)
{
	const CAudioMixerData* pMixerData; // 150
	audio_source_indexstate_t index_out; // 152
	{
		int i; // 160
		{
			audio_source_input_t sourceInputDesc; // 163
		}
	}
} /* size: 0, variables: 2 */

// <024E1D21> ../public/soundsystem/snd_audio_source.h:182
void IAsyncWavDataCache::IAsyncWavDataCache()
{
} /* size: 0 */

// <024E1D04> ../public/soundsystem/snd_audio_source.h:182
inline void IAsyncWavDataCache::IAsyncWavDataCache()
{
} /* size: 0 */

// <024D05D3> ../public/soundsystem/snd_audio_source.h:182
// member functions: 44
// member variable: 1
// vtable entries: 18
// class size: 8
class IAsyncWavDataCache {
	void IAsyncWavDataCache(IAsyncWavDataCache* , IAsyncWavDataCache& );
	void IAsyncWavDataCache(IAsyncWavDataCache* , const IAsyncWavDataCache& );
	void IAsyncWavDataCache(IAsyncWavDataCache* );
	void ~IAsyncWavDataCache(IAsyncWavDataCache* );
	int ()(void) * * _vptr.IAsyncWavDataCache; /* 0 8 */
	/* ../public/soundsystem/snd_audio_source.h:185 */
	virtual bool Init(IAsyncWavDataCache* , unsigned int, bool);
	/* ../public/soundsystem/snd_audio_source.h:186 */
	virtual void Shutdown(IAsyncWavDataCache* );
	/* ../public/soundsystem/snd_audio_source.h:190 */
	virtual void AsyncLoadCache(IAsyncWavDataCache* , const char* , CSfxTable* );
	/* ../public/soundsystem/snd_audio_source.h:191 */
	virtual bool IsDataLoadCompleted(IAsyncWavDataCache* , memhandle_t, bool* , bool* );
	/* ../public/soundsystem/snd_audio_source.h:192 */
	virtual bool RestartDataLoad(IAsyncWavDataCache* , CSfxTable* );
	/* ../public/soundsystem/snd_audio_source.h:193 */
	virtual void* GetDataPointer(IAsyncWavDataCache* , CSfxTable* );
	/* ../public/soundsystem/snd_audio_source.h:194 */
	virtual void Unload(IAsyncWavDataCache* , memhandle_t);
	/* ../public/soundsystem/snd_audio_source.h:196 */
	virtual bool IsDataLoadInProgress(IAsyncWavDataCache* , memhandle_t);
	/* ../public/soundsystem/snd_audio_source.h:198 */
	virtual void Flush(IAsyncWavDataCache* , bool);
	/* ../public/soundsystem/snd_audio_source.h:199 */
	virtual bool LockHandle(IAsyncWavDataCache* , memhandle_t);
	/* ../public/soundsystem/snd_audio_source.h:200 */
	virtual void UnlockHandle(IAsyncWavDataCache* , memhandle_t);
	/* ../public/soundsystem/snd_audio_source.h:202 */
	virtual void FrameUpdate(IAsyncWavDataCache* );
	/* ../public/soundsystem/snd_audio_source.h:203 */
	virtual void TouchHandle(IAsyncWavDataCache* , memhandle_t);
	/* ../public/soundsystem/snd_audio_source.h:204 */
	virtual void* AllocWaveMemory(IAsyncWavDataCache* , uint32);
	/* ../public/soundsystem/snd_audio_source.h:205 */
	virtual uint32 FreeWaveMemory(IAsyncWavDataCache* , void* );
	/* ../public/soundsystem/snd_audio_source.h:206 */
	virtual void* EnsureMemoryIsWritable(IAsyncWavDataCache* , memhandle_t);
	/* ../public/soundsystem/snd_audio_source.h:207 */
	virtual void ClearCache(IAsyncWavDataCache* );
	/* ../public/soundsystem/snd_audio_source.h:208 */
	virtual bool CheckHandle(IAsyncWavDataCache* , memhandle_t);
	void IAsyncWavDataCache(class IAsyncWavDataCache *, class IAsyncWavDataCache &); /* linkage=_ZN18IAsyncWavDataCacheC4EOS_ */
	void IAsyncWavDataCache(class IAsyncWavDataCache *, const class IAsyncWavDataCache  &); /* linkage=_ZN18IAsyncWavDataCacheC4ERKS_ */
	void IAsyncWavDataCache(class IAsyncWavDataCache *); /* linkage=_ZN18IAsyncWavDataCacheC4Ev */
	void ~IAsyncWavDataCache(class IAsyncWavDataCache *); /* linkage=_ZN18IAsyncWavDataCacheD4Ev */
	virtual bool Init(class IAsyncWavDataCache *, unsigned int, bool); /* linkage=_ZN18IAsyncWavDataCache4InitEjb */
	virtual void Shutdown(class IAsyncWavDataCache *); /* linkage=_ZN18IAsyncWavDataCache8ShutdownEv */
	virtual void AsyncLoadCache(class IAsyncWavDataCache *, const char  *, class CSfxTable *); /* linkage=_ZN18IAsyncWavDataCache14AsyncLoadCacheEPKcP9CSfxTable */
	virtual bool IsDataLoadCompleted(class IAsyncWavDataCache *, memhandle_t, bool *, bool *); /* linkage=_ZN18IAsyncWavDataCache19IsDataLoadCompletedEP13memhandle_t__PbS2_ */
	virtual bool RestartDataLoad(class IAsyncWavDataCache *, class CSfxTable *); /* linkage=_ZN18IAsyncWavDataCache15RestartDataLoadEP9CSfxTable */
	virtual void * GetDataPointer(class IAsyncWavDataCache *, class CSfxTable *); /* linkage=_ZN18IAsyncWavDataCache14GetDataPointerEP9CSfxTable */
	virtual void Unload(class IAsyncWavDataCache *, memhandle_t); /* linkage=_ZN18IAsyncWavDataCache6UnloadEP13memhandle_t__ */
	virtual bool IsDataLoadInProgress(class IAsyncWavDataCache *, memhandle_t); /* linkage=_ZN18IAsyncWavDataCache20IsDataLoadInProgressEP13memhandle_t__ */
	virtual void Flush(class IAsyncWavDataCache *, bool); /* linkage=_ZN18IAsyncWavDataCache5FlushEb */
	virtual bool LockHandle(class IAsyncWavDataCache *, memhandle_t); /* linkage=_ZN18IAsyncWavDataCache10LockHandleEP13memhandle_t__ */
	virtual void UnlockHandle(class IAsyncWavDataCache *, memhandle_t); /* linkage=_ZN18IAsyncWavDataCache12UnlockHandleEP13memhandle_t__ */
	virtual void FrameUpdate(class IAsyncWavDataCache *); /* linkage=_ZN18IAsyncWavDataCache11FrameUpdateEv */
	virtual void TouchHandle(class IAsyncWavDataCache *, memhandle_t); /* linkage=_ZN18IAsyncWavDataCache11TouchHandleEP13memhandle_t__ */
	virtual void * AllocWaveMemory(class IAsyncWavDataCache *, uint32); /* linkage=_ZN18IAsyncWavDataCache15AllocWaveMemoryEj */
	virtual uint32 FreeWaveMemory(class IAsyncWavDataCache *, void *); /* linkage=_ZN18IAsyncWavDataCache14FreeWaveMemoryEPv */
	virtual void * EnsureMemoryIsWritable(class IAsyncWavDataCache *, memhandle_t); /* linkage=_ZN18IAsyncWavDataCache22EnsureMemoryIsWritableEP13memhandle_t__ */
	virtual void ClearCache(class IAsyncWavDataCache *); /* linkage=_ZN18IAsyncWavDataCache10ClearCacheEv */
	virtual bool CheckHandle(class IAsyncWavDataCache *, memhandle_t); /* linkage=_ZN18IAsyncWavDataCache11CheckHandleEP13memhandle_t__ */
};

// <0254FEB8> ../public/soundsystem/snd_audio_source.h:217
void CAudioSource::CAudioSource()
{
} /* size: 0 */

// <0254FE9B> ../public/soundsystem/snd_audio_source.h:217
inline void CAudioSource::CAudioSource()
{
} /* size: 0 */

// <02422A15> ../public/soundsystem/snd_audio_source.h:217
// member functions: 40
// member variable: 1
// vtable entries: 17
// class size: 8
class CAudioSource {
	/* ../public/soundsystem/snd_audio_source.h:221 */
	enum {
		AUDIO_SOURCE_UNK = 0,
		AUDIO_SOURCE_WAV = 1,
		AUDIO_SOURCE_MP3 = 2,
		AUDIO_SOURCE_VOICE = 3,
		AUDIO_SOURCE_MAXTYPE = 4,
	};
	void CAudioSource(CAudioSource* , const CAudioSource& );
	void CAudioSource(CAudioSource* );
	int ()(void) * * _vptr.CAudioSource; /* 0 8 */
	/* ../public/soundsystem/snd_audio_source.h:230 */
	virtual void ~CAudioSource(CAudioSource* );
	/* ../public/soundsystem/snd_audio_source.h:233 */
	virtual CAudioMixer* CreateMixer(CAudioSource* );
	/* ../public/soundsystem/snd_audio_source.h:236 */
	virtual int GetType(CAudioSource* );
	/* ../public/soundsystem/snd_audio_source.h:240 */
	virtual int GetOutputData(CAudioSource* , void** , int, int, char* );
	/* ../public/soundsystem/snd_audio_source.h:242 */
	virtual int SampleRate(CAudioSource* );
	/* ../public/soundsystem/snd_audio_source.h:245 */
	virtual bool ShouldDuckOtherVoices(CAudioSource* );
	/* ../public/soundsystem/snd_audio_source.h:248 */
	virtual bool IsPlayerVoice(CAudioSource* );
	/* ../public/soundsystem/snd_audio_source.h:253 */
	virtual int SampleSize(CAudioSource* );
	/* ../public/soundsystem/snd_audio_source.h:257 */
	virtual uint SampleCount(CAudioSource* );
	/* ../public/soundsystem/snd_audio_source.h:259 */
	virtual int DataSize(CAudioSource* );
	/* ../public/soundsystem/snd_audio_source.h:261 */
	virtual bool IsLooped(CAudioSource* );
	/* ../public/soundsystem/snd_audio_source.h:262 */
	virtual int ChannelCount(CAudioSource* );
	/* ../public/soundsystem/snd_audio_source.h:265 */
	virtual void ReferenceAdd(CAudioSource* , CAudioMixer* );
	/* ../public/soundsystem/snd_audio_source.h:266 */
	virtual void ReferenceRemove(CAudioSource* , CAudioMixer* );
	/* ../public/soundsystem/snd_audio_source.h:268 */
	virtual const char* GetFileName(CAudioSource* , CBufferString* );
	/* ../public/soundsystem/snd_audio_source.h:269 */
	virtual void InitPackets(CAudioSource* , CAudioMixerData* );
	/* ../public/soundsystem/snd_audio_source.h:270 */
	virtual void UpdateMixerData(CAudioSource* , const audio_source_indexstate_t& , CAudioMixerData* );
	/* ../public/soundsystem/snd_audio_source.h:274 */
	virtual bool CopySamples16(CAudioSource* , CUtlVector<short int, CUtlMemory<short int, int> >& );
	void CAudioSource(class CAudioSource *, const class CAudioSource  &); /* linkage=_ZN12CAudioSourceC4ERKS_ */
	void CAudioSource(class CAudioSource *); /* linkage=_ZN12CAudioSourceC4Ev */
	virtual void ~CAudioSource(class CAudioSource *); /* linkage=_ZN12CAudioSourceD4Ev */
	virtual class CAudioMixer * CreateMixer(class CAudioSource *); /* linkage=_ZN12CAudioSource11CreateMixerEv */
	virtual int GetType(class CAudioSource *); /* linkage=_ZN12CAudioSource7GetTypeEv */
	virtual int GetOutputData(class CAudioSource *, void * *, int, int, char *); /* linkage=_ZN12CAudioSource13GetOutputDataEPPviiPc */
	virtual int SampleRate(class CAudioSource *); /* linkage=_ZN12CAudioSource10SampleRateEv */
	virtual bool ShouldDuckOtherVoices(class CAudioSource *); /* linkage=_ZN12CAudioSource21ShouldDuckOtherVoicesEv */
	virtual bool IsPlayerVoice(class CAudioSource *); /* linkage=_ZN12CAudioSource13IsPlayerVoiceEv */
	virtual int SampleSize(class CAudioSource *); /* linkage=_ZN12CAudioSource10SampleSizeEv */
	virtual uint SampleCount(class CAudioSource *); /* linkage=_ZN12CAudioSource11SampleCountEv */
	virtual int DataSize(class CAudioSource *); /* linkage=_ZN12CAudioSource8DataSizeEv */
	virtual bool IsLooped(class CAudioSource *); /* linkage=_ZN12CAudioSource8IsLoopedEv */
	virtual int ChannelCount(class CAudioSource *); /* linkage=_ZN12CAudioSource12ChannelCountEv */
	virtual void ReferenceAdd(class CAudioSource *, class CAudioMixer *); /* linkage=_ZN12CAudioSource12ReferenceAddEP11CAudioMixer */
	virtual void ReferenceRemove(class CAudioSource *, class CAudioMixer *); /* linkage=_ZN12CAudioSource15ReferenceRemoveEP11CAudioMixer */
	virtual const char  * GetFileName(class CAudioSource *, class CBufferString *); /* linkage=_ZN12CAudioSource11GetFileNameEP13CBufferString */
	virtual void InitPackets(class CAudioSource *, class CAudioMixerData *); /* linkage=_ZN12CAudioSource11InitPacketsEP15CAudioMixerData */
	virtual void UpdateMixerData(class CAudioSource *, const class audio_source_indexstate_t  &, class CAudioMixerData *); /* linkage=_ZN12CAudioSource15UpdateMixerDataERK25audio_source_indexstate_tP15CAudioMixerData */
	virtual bool CopySamples16(class CAudioSource *, class CUtlVector<short int, CUtlMemory<short int, int> > &); /* linkage=_ZN12CAudioSource13CopySamples16ER10CUtlVectorIs10CUtlMemoryIsiEE */
};

// <02690B4E> ../public/soundsystem/snd_audio_source.h:217
// member functions: 38
// member variable: 1
// vtable entries: 17
// class size: 8
class CAudioSource {
	/* ../public/soundsystem/snd_audio_source.h:221 */
	enum {
		AUDIO_SOURCE_UNK = 0,
		AUDIO_SOURCE_WAV = 1,
		AUDIO_SOURCE_MP3 = 2,
		AUDIO_SOURCE_VOICE = 3,
		AUDIO_SOURCE_MAXTYPE = 4,
	};
	int ()(void) * * _vptr.CAudioSource; /* 0 8 */
	/* ../public/soundsystem/snd_audio_source.h:230 */
	virtual void ~CAudioSource(CAudioSource* );
	/* ../public/soundsystem/snd_audio_source.h:233 */
	virtual CAudioMixer* CreateMixer(CAudioSource* );
	/* ../public/soundsystem/snd_audio_source.h:236 */
	virtual int GetType(CAudioSource* );
	/* ../public/soundsystem/snd_audio_source.h:240 */
	virtual int GetOutputData(CAudioSource* , void** , int, int, char* );
	/* ../public/soundsystem/snd_audio_source.h:242 */
	virtual int SampleRate(CAudioSource* );
	/* ../public/soundsystem/snd_audio_source.h:245 */
	virtual bool ShouldDuckOtherVoices(CAudioSource* );
	/* ../public/soundsystem/snd_audio_source.h:248 */
	virtual bool IsPlayerVoice(CAudioSource* );
	/* ../public/soundsystem/snd_audio_source.h:253 */
	virtual int SampleSize(CAudioSource* );
	/* ../public/soundsystem/snd_audio_source.h:257 */
	virtual uint SampleCount(CAudioSource* );
	/* ../public/soundsystem/snd_audio_source.h:259 */
	virtual int DataSize(CAudioSource* );
	/* ../public/soundsystem/snd_audio_source.h:261 */
	virtual bool IsLooped(CAudioSource* );
	/* ../public/soundsystem/snd_audio_source.h:262 */
	virtual int ChannelCount(CAudioSource* );
	/* ../public/soundsystem/snd_audio_source.h:265 */
	virtual void ReferenceAdd(CAudioSource* , CAudioMixer* );
	/* ../public/soundsystem/snd_audio_source.h:266 */
	virtual void ReferenceRemove(CAudioSource* , CAudioMixer* );
	/* ../public/soundsystem/snd_audio_source.h:268 */
	virtual const char* GetFileName(CAudioSource* , CBufferString* );
	/* ../public/soundsystem/snd_audio_source.h:269 */
	virtual void InitPackets(CAudioSource* , CAudioMixerData* );
	/* ../public/soundsystem/snd_audio_source.h:270 */
	virtual void UpdateMixerData(CAudioSource* , const audio_source_indexstate_t& , CAudioMixerData* );
	/* ../public/soundsystem/snd_audio_source.h:274 */
	virtual bool CopySamples16(CAudioSource* , CUtlVector<short int, CUtlMemory<short int, int> >& );
	void CAudioSource(class CAudioSource *, const class CAudioSource  &); /* linkage=_ZN12CAudioSourceC4ERKS_ */
	void CAudioSource(class CAudioSource *); /* linkage=_ZN12CAudioSourceC4Ev */
	virtual void ~CAudioSource(class CAudioSource *); /* linkage=_ZN12CAudioSourceD4Ev */
	virtual class CAudioMixer * CreateMixer(class CAudioSource *); /* linkage=_ZN12CAudioSource11CreateMixerEv */
	virtual int GetType(class CAudioSource *); /* linkage=_ZN12CAudioSource7GetTypeEv */
	virtual int GetOutputData(class CAudioSource *, void * *, int, int, char *); /* linkage=_ZN12CAudioSource13GetOutputDataEPPviiPc */
	virtual int SampleRate(class CAudioSource *); /* linkage=_ZN12CAudioSource10SampleRateEv */
	virtual bool ShouldDuckOtherVoices(class CAudioSource *); /* linkage=_ZN12CAudioSource21ShouldDuckOtherVoicesEv */
	virtual bool IsPlayerVoice(class CAudioSource *); /* linkage=_ZN12CAudioSource13IsPlayerVoiceEv */
	virtual int SampleSize(class CAudioSource *); /* linkage=_ZN12CAudioSource10SampleSizeEv */
	virtual uint SampleCount(class CAudioSource *); /* linkage=_ZN12CAudioSource11SampleCountEv */
	virtual int DataSize(class CAudioSource *); /* linkage=_ZN12CAudioSource8DataSizeEv */
	virtual bool IsLooped(class CAudioSource *); /* linkage=_ZN12CAudioSource8IsLoopedEv */
	virtual int ChannelCount(class CAudioSource *); /* linkage=_ZN12CAudioSource12ChannelCountEv */
	virtual void ReferenceAdd(class CAudioSource *, class CAudioMixer *); /* linkage=_ZN12CAudioSource12ReferenceAddEP11CAudioMixer */
	virtual void ReferenceRemove(class CAudioSource *, class CAudioMixer *); /* linkage=_ZN12CAudioSource15ReferenceRemoveEP11CAudioMixer */
	virtual const char  * GetFileName(class CAudioSource *, class CBufferString *); /* linkage=_ZN12CAudioSource11GetFileNameEP13CBufferString */
	virtual void InitPackets(class CAudioSource *, class CAudioMixerData *); /* linkage=_ZN12CAudioSource11InitPacketsEP15CAudioMixerData */
	virtual void UpdateMixerData(class CAudioSource *, const class audio_source_indexstate_t  &, class CAudioMixerData *); /* linkage=_ZN12CAudioSource15UpdateMixerDataERK25audio_source_indexstate_tP15CAudioMixerData */
	virtual bool CopySamples16(class CAudioSource *, class CUtlVector<short int, CUtlMemory<short int, int> > &); /* linkage=_ZN12CAudioSource13CopySamples16ER10CUtlVectorIs10CUtlMemoryIsiEE */
};

// <02550A40> ../public/soundsystem/snd_audio_source.h:230
void CAudioSource::~CAudioSource()
{
} /* size: 0 */

// <02550A10> ../public/soundsystem/snd_audio_source.h:230
inline void CAudioSource::~CAudioSource()
{
} /* size: 0 */

// <025509E2> ../public/soundsystem/snd_audio_source.h:248
void CAudioSource::IsPlayerVoice()
{
} /* size: 7 */

