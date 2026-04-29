
//
// public/soundsystem/audio_mix.h
//
//	referenced by: libengine2.so
//
//	functions: 5
//	class: 1
//	structs: 4
//

// <01200D58> ../public/soundsystem/audio_mix.h:17
// member variables: 2
// struct size: 16
struct audio_buffer_input_t {
	const short int * m_pSamples; /* 0 8 */
	uint m_nSampleCount; /* 8 4 */
};

// <01200DB3> ../public/soundsystem/audio_mix.h:31
// member function: 1
// member variables: 6
// struct size: 24
struct audio_source_input_t {
	const class audio_buffer_input_t * m_pPackets; /* 0 8 */
	uint m_nSamplingRate; /* 8 4 */
	uint8 m_nPacketCount; /* 12 1 */
	vaudio_sampleformats_t m_nSampleFormat; /* 14 2 */
	uint8 m_nChannelIndex; /* 16 1 */
	uint8 m_nChannelsPerFrame; /* 17 1 */
	/* ../public/soundsystem/audio_mix.h:40 */
	void InitPackets(audio_source_input_t* , const audio_buffer_input_t* , int, int, vaudio_sampleformats_t, int);
};

// <0240F5B8> ../public/soundsystem/audio_mix.h:40
// variables: 2
inline void audio_source_input_t::InitPackets(const audio_buffer_input_t* pPacketsIn, int nPacketCountIn, int nSamplingRate, vaudio_sampleformats_t nSampleFormat, int nChannelsPerSample)
{
	const char   __FUNCTION__; // 41114
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 43
	}
} /* size: 0, variables: 1 */

// <01200E67> ../public/soundsystem/audio_mix.h:53
// member function: 1
// member variables: 4
// struct size: 16
struct audio_source_indexstate_t {
	uint m_nPacketIndex; /* 0 4 */
	uint m_nBufferSampleOffset; /* 4 4 */
	uint m_nSampleFracOffset; /* 8 4 */
	uint m_nDelaySamples; /* 12 4 */
	/* ../public/soundsystem/audio_mix.h:59 */
	void Clear(audio_source_indexstate_t* );
};

// <02640C0B> ../public/soundsystem/audio_mix.h:59
inline void audio_source_indexstate_t::Clear()
{
} /* size: 0 */

// <06D65457> ../../public/soundsystem/audio_mix.h:132
// member functions: 3
// member variables: 6
// struct size: 16
struct audio_mix_command_t {
	uint16 m_nCommandId; /* 0 2 */
	uint16 m_nOutput; /* 2 2 */
	uint16 m_nInput0; /* 4 2 */
	uint16 m_nInput1; /* 6 2 */
	float m_flParam0; /* 8 4 */
	float m_flParam1; /* 12 4 */
	/* ../../public/soundsystem/audio_mix.h:140 */
	void Init(audio_mix_command_t* , mix_command_id_t, uint16);
	/* ../../public/soundsystem/audio_mix.h:150 */
	void Init(audio_mix_command_t* , mix_command_id_t, uint16, uint16, float);
	/* ../../public/soundsystem/audio_mix.h:160 */
	void Init(audio_mix_command_t* , mix_command_id_t, uint16, uint16, uint16, float, float);
};

// <06D7E09B> ../../public/soundsystem/audio_mix.h:140
inline void audio_mix_command_t::Init(mix_command_id_t cmd, uint16 nOut)
{
} /* size: 0 */

// <06D7E052> ../../public/soundsystem/audio_mix.h:150
inline void audio_mix_command_t::Init(mix_command_id_t cmd, uint16 nOut, uint16 nIn0, float flScale)
{
} /* size: 0 */

// <06D69CC3> ../../public/soundsystem/audio_mix.h:171
// member functions: 38
// member variables: 3
// class size: 5,344
class CAudioMixCommandList {
	/* ../../public/soundsystem/audio_mix.h:174 */
	void ClearBuffer(CAudioMixCommandList* , uint16);
	/* ../../public/soundsystem/audio_mix.h:181 */
	void ClearMultichannel(CAudioMixCommandList* , uint16, int);
	/* ../../public/soundsystem/audio_mix.h:182 */
	void ScaleMultichannel(CAudioMixCommandList* , uint16, uint16, int, float);
	/* ../../public/soundsystem/audio_mix.h:184 */
	void ExtractSourceToBuffer(CAudioMixCommandList* , uint16, uint16, float, float);
	/* ../../public/soundsystem/audio_mix.h:190 */
	void AdvanceSource(CAudioMixCommandList* , uint16, float);
	/* ../../public/soundsystem/audio_mix.h:197 */
	void ProcessBuffer(CAudioMixCommandList* , uint16, uint16, uint16, int);
	/* ../../public/soundsystem/audio_mix.h:204 */
	uint16 ProcessBuffer(CAudioMixCommandList* , uint16, uint16, int, CAudioProcessor* );
	/* ../../public/soundsystem/audio_mix.h:211 */
	uint16 GenerateSideChain(CAudioMixCommandList* , uint16, int, CAudioProcessor* );
	/* ../../public/soundsystem/audio_mix.h:220 */
	void ScaleBuffer(CAudioMixCommandList* , uint16, uint16, float);
	/* ../../public/soundsystem/audio_mix.h:227 */
	void AccumulateToBuffer(CAudioMixCommandList* , uint16, uint16, float);
	/* ../../public/soundsystem/audio_mix.h:238 */
	void AccumulateToBufferVolumeRamp(CAudioMixCommandList* , uint16, uint16, float, float);
	/* ../../public/soundsystem/audio_mix.h:254 */
	void Mix2x1(CAudioMixCommandList* , uint16, uint16, uint16, float, float);
	/* ../../public/soundsystem/audio_mix.h:261 */
	void SwapBuffers(CAudioMixCommandList* , uint16, uint16);
	/* ../../public/soundsystem/audio_mix.h:268 */
	void ReadOutputLevel(CAudioMixCommandList* , uint16, uint16, uint16);
	/* ../../public/soundsystem/audio_mix.h:275 */
	void DebugMeter(CAudioMixCommandList* , uint16, uint16, CAudioMeterInstance* );
	/* ../../public/soundsystem/audio_mix.h:284 */
	void DebugSpectrum(CAudioMixCommandList* , uint16, uint16, uint32, int32);
	/* ../../public/soundsystem/audio_mix.h:300 */
	uint16 AddProcessor(CAudioMixCommandList* , CAudioProcessor* );
	/* ../../public/soundsystem/audio_mix.h:305 */
	void Clear(CAudioMixCommandList* );
	/* ../../public/soundsystem/audio_mix.h:310 */
	void AccumulateMultichannel(CAudioMixCommandList* , uint16, int, uint16, int, float);
	CUtlVectorFixedGrowable<audio_mix_command_t, 256> m_commands __attribute__((__aligned__(8))); /* 0 4128 */
	CUtlVectorFixedGrowable<CAudioProcessor*, 64> m_processors __attribute__((__aligned__(8))); /* 4128 544 */
	CUtlVectorFixedGrowable<CAudioMeterInstance, 32> m_meters __attribute__((__aligned__(8))); /* 4672 672 */
	void ClearBuffer(class CAudioMixCommandList *, uint16); /* linkage=_ZN20CAudioMixCommandList11ClearBufferEt */
	void ClearMultichannel(class CAudioMixCommandList *, uint16, int); /* linkage=_ZN20CAudioMixCommandList17ClearMultichannelEti */
	void ScaleMultichannel(class CAudioMixCommandList *, uint16, uint16, int, float); /* linkage=_ZN20CAudioMixCommandList17ScaleMultichannelEttif */
	void ExtractSourceToBuffer(class CAudioMixCommandList *, uint16, uint16, float, float); /* linkage=_ZN20CAudioMixCommandList21ExtractSourceToBufferEttff */
	void AdvanceSource(class CAudioMixCommandList *, uint16, float); /* linkage=_ZN20CAudioMixCommandList13AdvanceSourceEtf */
	void ProcessBuffer(class CAudioMixCommandList *, uint16, uint16, uint16, int); /* linkage=_ZN20CAudioMixCommandList13ProcessBufferEttti */
	uint16 ProcessBuffer(class CAudioMixCommandList *, uint16, uint16, int, class CAudioProcessor *); /* linkage=_ZN20CAudioMixCommandList13ProcessBufferEttiP15CAudioProcessor */
	uint16 GenerateSideChain(class CAudioMixCommandList *, uint16, int, class CAudioProcessor *); /* linkage=_ZN20CAudioMixCommandList17GenerateSideChainEtiP15CAudioProcessor */
	void ScaleBuffer(class CAudioMixCommandList *, uint16, uint16, float); /* linkage=_ZN20CAudioMixCommandList11ScaleBufferEttf */
	void AccumulateToBuffer(class CAudioMixCommandList *, uint16, uint16, float); /* linkage=_ZN20CAudioMixCommandList18AccumulateToBufferEttf */
	void AccumulateToBufferVolumeRamp(class CAudioMixCommandList *, uint16, uint16, float, float); /* linkage=_ZN20CAudioMixCommandList28AccumulateToBufferVolumeRampEttff */
	void Mix2x1(class CAudioMixCommandList *, uint16, uint16, uint16, float, float); /* linkage=_ZN20CAudioMixCommandList6Mix2x1Etttff */
	void SwapBuffers(class CAudioMixCommandList *, uint16, uint16); /* linkage=_ZN20CAudioMixCommandList11SwapBuffersEtt */
	void ReadOutputLevel(class CAudioMixCommandList *, uint16, uint16, uint16); /* linkage=_ZN20CAudioMixCommandList15ReadOutputLevelEttt */
	void DebugMeter(class CAudioMixCommandList *, uint16, uint16, class CAudioMeterInstance *); /* linkage=_ZN20CAudioMixCommandList10DebugMeterEttP19CAudioMeterInstance */
	void DebugSpectrum(class CAudioMixCommandList *, uint16, uint16, uint32, int32); /* linkage=_ZN20CAudioMixCommandList13DebugSpectrumEttji */
	uint16 AddProcessor(class CAudioMixCommandList *, class CAudioProcessor *); /* linkage=_ZN20CAudioMixCommandList12AddProcessorEP15CAudioProcessor */
	void Clear(class CAudioMixCommandList *); /* linkage=_ZN20CAudioMixCommandList5ClearEv */
	void AccumulateMultichannel(class CAudioMixCommandList *, uint16, int, uint16, int, float); /* linkage=_ZN20CAudioMixCommandList22AccumulateMultichannelEtitif */
} __attribute__((__aligned__(8)));

// <06D7E008> ../../public/soundsystem/audio_mix.h:227
// variable: 1
inline void CAudioMixCommandList::AccumulateToBuffer(uint16 nOutput, uint16 nInput, float flVolume)
{
	audio_mix_command_t cmd; // 233
} /* size: 0, variables: 1 */

