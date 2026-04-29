
//
// soundsystem/snd_wave_mixer_private.h
//
//	referenced by: libengine2.so
//
//	functions: 6
//	classes: 2
//

// <024FBD18> soundsystem/snd_wave_mixer_private.h:23
// member functions: 44
// member variables: 8
// vtable entries: 16
// class size: 160
class CAudioMixerWave : public CAudioMixer {
public:
	/* class CAudioMixer <ancestor>; */ /* 0 8 */
	void CAudioMixerWave(CAudioMixerWave* , const CAudioMixerWave& );
	/* soundsystem/snd_wave_mixer.cpp:73 */
	void CAudioMixerWave(CAudioMixerWave* , CSfxTable* );
	/* soundsystem/snd_wave_mixer.cpp:96 */
	virtual void ~CAudioMixerWave(CAudioMixerWave* );
	/* soundsystem/snd_wave_mixer.cpp:206 */
	void SeekOverSamples(CAudioMixerWave* , int);
	/* soundsystem/snd_wave_mixer.cpp:221 */
	virtual bool ShouldContinueMixing(CAudioMixerWave* );
	/* soundsystem/snd_wave_mixer.cpp:136 */
	virtual CAudioSource* GetSource(CAudioMixerWave* );
	/* soundsystem/snd_wave_mixer.cpp:147 */
	virtual int GetSamplePosition(CAudioMixerWave* );
	/* soundsystem/snd_wave_mixer.cpp:153 */
	virtual uint GetSampleCount(CAudioMixerWave* );
	/* soundsystem/snd_wave_mixer.cpp:183 */
	virtual void SetSamplePosition(CAudioMixerWave* , int);
	/* soundsystem/snd_wave_mixer.cpp:197 */
	virtual void SetSampleEnd(CAudioMixerWave* , uint);
	/* soundsystem/snd_wave_mixer.cpp:166 */
	virtual void DelayOrSkipSamples(CAudioMixerWave* , int);
	/* soundsystem/snd_wave_mixer.cpp:114 */
	virtual bool IsReadyToMix(CAudioMixerWave* );
	/* soundsystem/snd_wave_mixer_private.h:45 */
	virtual int GetPositionForSave(CAudioMixerWave* );
	/* soundsystem/snd_wave_mixer_private.h:46 */
	virtual void SetPositionFromSaved(CAudioMixerWave* , int);
	/* soundsystem/snd_wave_mixer.cpp:252 */
	virtual const CAudioMixerData* GetMixerData(CAudioMixerWave* );
	/* soundsystem/snd_wave_mixer.cpp:270 */
	virtual void UpdateMixerState(CAudioMixerWave* , audio_source_indexstate_t& );
	/* soundsystem/snd_wave_mixer.cpp:105 */
	virtual void OnCachedDataAvailable(CAudioMixerWave* );
	/* soundsystem/snd_wave_mixer_private.h:52 */
	virtual CSfxTable* GetSfxTable(CAudioMixerWave* );
	/* soundsystem/snd_wave_mixer.cpp:297 */
	virtual void SetChannelSelect(CAudioMixerWave* , vaudio_channel_index_t);
	/* soundsystem/snd_wave_mixer.cpp:302 */
	virtual void EnableLooping(CAudioMixerWave* , bool);
protected:
	/* soundsystem/snd_wave_mixer.cpp:226 */
	void AddDelaySamplesToPacket(CAudioMixerWave* );
	/* soundsystem/snd_wave_mixer.cpp:238 */
	void ForceSampleEndOnPackets(CAudioMixerWave* );
	CSfxTable * m_pSfx; /* 8 8 */
	int m_nDelaySamples; /* 16 4 */
	uint m_nSampleEnd; /* 20 4 */
	CAudioMixerData m_mixerData __attribute__((__aligned__(8))); /* 24 128 */
	uint m_nSamplePosition; /* 152 4 */
	bool m_bFinished; /* 156 1 */
	bool m_bCacheAvailable; /* 157 1 */
	void CAudioMixerWave(class CAudioMixerWave *, const class CAudioMixerWave  &); /* linkage=_ZN15CAudioMixerWaveC4ERKS_ */
	void CAudioMixerWave(class CAudioMixerWave *, class CSfxTable *); /* linkage=_ZN15CAudioMixerWaveC4EP9CSfxTable */
	virtual void ~CAudioMixerWave(class CAudioMixerWave *); /* linkage=_ZN15CAudioMixerWaveD4Ev */
	void SeekOverSamples(class CAudioMixerWave *, int); /* linkage=_ZN15CAudioMixerWave15SeekOverSamplesEi */
	virtual bool ShouldContinueMixing(class CAudioMixerWave *); /* linkage=_ZN15CAudioMixerWave20ShouldContinueMixingEv */
	/* <24ff830> soundsystem/snd_wave_mixer.cpp:136 */
	virtual class CAudioSource * GetSource(class CAudioMixerWave *); /* linkage=_ZN15CAudioMixerWave9GetSourceEv */
	/* <24ff966> soundsystem/snd_wave_mixer.cpp:147 */
	virtual int GetSamplePosition(class CAudioMixerWave *); /* linkage=_ZN15CAudioMixerWave17GetSamplePositionEv */
	/* <24ff85a> soundsystem/snd_wave_mixer.cpp:153 */
	virtual uint GetSampleCount(class CAudioMixerWave *); /* linkage=_ZN15CAudioMixerWave14GetSampleCountEv */
	/* <24ffad5> soundsystem/snd_wave_mixer.cpp:183 */
	virtual void SetSamplePosition(class CAudioMixerWave *, int); /* linkage=_ZN15CAudioMixerWave17SetSamplePositionEi */
	virtual void SetSampleEnd(class CAudioMixerWave *, uint); /* linkage=_ZN15CAudioMixerWave12SetSampleEndEj */
	/* <24ff898> soundsystem/snd_wave_mixer.cpp:166 */
	virtual void DelayOrSkipSamples(class CAudioMixerWave *, int); /* linkage=_ZN15CAudioMixerWave18DelayOrSkipSamplesEi */
	virtual bool IsReadyToMix(class CAudioMixerWave *); /* linkage=_ZN15CAudioMixerWave12IsReadyToMixEv */
	virtual int GetPositionForSave(class CAudioMixerWave *); /* linkage=_ZN15CAudioMixerWave18GetPositionForSaveEv */
	virtual void SetPositionFromSaved(class CAudioMixerWave *, int); /* linkage=_ZN15CAudioMixerWave20SetPositionFromSavedEi */
	virtual const class CAudioMixerData  * GetMixerData(class CAudioMixerWave *); /* linkage=_ZN15CAudioMixerWave12GetMixerDataEv */
	virtual void UpdateMixerState(class CAudioMixerWave *, class audio_source_indexstate_t &); /* linkage=_ZN15CAudioMixerWave16UpdateMixerStateER25audio_source_indexstate_t */
	virtual void OnCachedDataAvailable(class CAudioMixerWave *); /* linkage=_ZN15CAudioMixerWave21OnCachedDataAvailableEv */
	virtual class CSfxTable * GetSfxTable(class CAudioMixerWave *); /* linkage=_ZN15CAudioMixerWave11GetSfxTableEv */
	virtual void SetChannelSelect(class CAudioMixerWave *, enum vaudio_channel_index_t); /* linkage=_ZN15CAudioMixerWave16SetChannelSelectE22vaudio_channel_index_t */
	virtual void EnableLooping(class CAudioMixerWave *, bool); /* linkage=_ZN15CAudioMixerWave13EnableLoopingEb */
	void AddDelaySamplesToPacket(class CAudioMixerWave *); /* linkage=_ZN15CAudioMixerWave23AddDelaySamplesToPacketEv */
	/* <24ffc59> soundsystem/snd_wave_mixer.cpp:238 */
	void ForceSampleEndOnPackets(class CAudioMixerWave *); /* linkage=_ZN15CAudioMixerWave23ForceSampleEndOnPacketsEv */
} __attribute__((__aligned__(8)));

// <02511F3B> soundsystem/snd_wave_mixer_private.h:45
void CAudioMixerWave::GetPositionForSave()
{
} /* size: 0 */

// <024FF3D2> soundsystem/snd_wave_mixer_private.h:45
// variables: 3
// function calls: 3
void CAudioMixerWave::GetPositionForSave()
{
	CStrongHandle<InfoForResourceTypeVSound_t>::operator const ResourceHandleInfo_t<InfoForResourceTypeVSound_t>::RuntimeClass_t*(); // 149
	{
		uint nStart; // 46
		uint nEnd; // 47
		{
			uint nLoopCount; // 51
		}
	}
	LoopPosition(uint nPos,
			const VSound_t* pSoundData);  // 149
	CAudioMixerWave::GetSamplePosition(); // 45
} /* size: 124, inline expansions: 3 (161 bytes) */

// <02511ED9> soundsystem/snd_wave_mixer_private.h:46
void CAudioMixerWave::SetPositionFromSaved(int savedPosition)
{
} /* size: 10 */

// <02524BA5> soundsystem/snd_wave_mixer_private.h:52
void CAudioMixerWave::GetSfxTable()
{
} /* size: 9 */

// <024FBB1D> soundsystem/snd_wave_mixer_private.h:75
// member functions: 20
// member variables: 6
// vtable entries: 5
// class size: 8,400
class CAudioMixerEncoded : public CAudioMixerWave {
public:
	/* class CAudioMixerWave <ancestor>; */ /* 0 160 */
	void CAudioMixerEncoded(CAudioMixerEncoded* , const CAudioMixerEncoded& );
	/* soundsystem/snd_wave_mixer.cpp:310 */
	void CAudioMixerEncoded(CAudioMixerEncoded* , CSfxTable* );
	/* soundsystem/snd_wave_mixer.cpp:327 */
	virtual void ~CAudioMixerEncoded(CAudioMixerEncoded* );
	/* soundsystem/snd_wave_mixer.cpp:372 */
	virtual const CAudioMixerData* GetMixerData(CAudioMixerEncoded* );
	/* soundsystem/snd_wave_mixer.cpp:404 */
	virtual void UpdateMixerState(CAudioMixerEncoded* , audio_source_indexstate_t& );
	/* soundsystem/snd_wave_mixer.cpp:436 */
	virtual void OnCachedDataAvailable(CAudioMixerEncoded* );
	/* soundsystem/snd_wave_mixer_private.h:84 */
	virtual uint GetDecodedData(CAudioMixerEncoded* , void* , uint);
	/* soundsystem/snd_wave_mixer_private.h:85 */
	virtual void LoopToStart(CAudioMixerEncoded* );
protected:
	uint m_nMixSampleSize; /* 160 4 */
private:
	/* soundsystem/snd_wave_mixer.cpp:332 */
	bool AddBuffer(CAudioMixerEncoded* );
	/* soundsystem/snd_wave_mixer.cpp:358 */
	void FreeBuffer(CAudioMixerEncoded* , char* );
	char m_bufferSpace[8192]; /* 164 8192 */
	char * m_pFreeBuffers[4]; /* 8360 32 */
	short int m_nFreeBufferCount; /* 8392 2 */
	bool m_bFinishedDecode; /* 8394 1 */
	void CAudioMixerEncoded(class CAudioMixerEncoded *, const class CAudioMixerEncoded  &); /* linkage=_ZN18CAudioMixerEncodedC4ERKS_ */
	void CAudioMixerEncoded(class CAudioMixerEncoded *, class CSfxTable *); /* linkage=_ZN18CAudioMixerEncodedC4EP9CSfxTable */
	virtual void ~CAudioMixerEncoded(class CAudioMixerEncoded *); /* linkage=_ZN18CAudioMixerEncodedD4Ev */
	virtual const class CAudioMixerData  * GetMixerData(class CAudioMixerEncoded *); /* linkage=_ZN18CAudioMixerEncoded12GetMixerDataEv */
	virtual void UpdateMixerState(class CAudioMixerEncoded *, class audio_source_indexstate_t &); /* linkage=_ZN18CAudioMixerEncoded16UpdateMixerStateER25audio_source_indexstate_t */
	virtual void OnCachedDataAvailable(class CAudioMixerEncoded *); /* linkage=_ZN18CAudioMixerEncoded21OnCachedDataAvailableEv */
	virtual uint GetDecodedData(class CAudioMixerEncoded *, void *, uint); /* linkage=_ZN18CAudioMixerEncoded14GetDecodedDataEPvj */
	virtual void LoopToStart(class CAudioMixerEncoded *); /* linkage=_ZN18CAudioMixerEncoded11LoopToStartEv */
	bool AddBuffer(class CAudioMixerEncoded *); /* linkage=_ZN18CAudioMixerEncoded9AddBufferEv */
	void FreeBuffer(class CAudioMixerEncoded *, char *); /* linkage=_ZN18CAudioMixerEncoded10FreeBufferEPc */
} __attribute__((__aligned__(8)));

// <02523B0C> soundsystem/snd_wave_mixer_private.h:78
void CAudioMixerEncoded::CAudioMixerEncoded(CSfxTable* pSfx)
{
} /* size: 0 */

// <02523AF0> soundsystem/snd_wave_mixer_private.h:79
void CAudioMixerEncoded::~CAudioMixerEncoded()
{
} /* size: 0 */

