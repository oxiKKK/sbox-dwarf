
//
// soundsystem/snd_wave_mixer_adpcm.cpp
//
//	referenced by: libengine2.so
//
//	functions: 11
//	class: 1
//

// <025106D7> soundsystem/snd_wave_mixer_adpcm.cpp:18
// member functions: 20
// member variables: 10
// vtable entries: 3
// class size: 8,448
class CAudioMixerWaveADPCM : public CAudioMixerEncoded {
public:
	/* class CAudioMixerEncoded <ancestor>; */ /* 0 0 */
	void CAudioMixerWaveADPCM(CAudioMixerWaveADPCM* , const CAudioMixerWaveADPCM& );
	/* soundsystem/snd_wave_mixer_adpcm.cpp:81 */
	void CAudioMixerWaveADPCM(CAudioMixerWaveADPCM* , CSfxTable* );
	/* soundsystem/snd_wave_mixer_adpcm.cpp:119 */
	virtual void ~CAudioMixerWaveADPCM(CAudioMixerWaveADPCM* );
	/* soundsystem/snd_wave_mixer_adpcm.cpp:426 */
	virtual void SetSamplePosition(CAudioMixerWaveADPCM* , int);
	/* soundsystem/snd_wave_mixer_adpcm.cpp:51 */
	virtual uint GetDecodedData(CAudioMixerWaveADPCM* , void* , uint);
	/* soundsystem/snd_wave_mixer_adpcm.cpp:76 */
	virtual void LoopToStart(CAudioMixerWaveADPCM* );
private:
	/* soundsystem/snd_wave_mixer_adpcm.cpp:340 */
	bool DecodeBlock(CAudioMixerWaveADPCM* );
	/* soundsystem/snd_wave_mixer_adpcm.cpp:125 */
	int NumChannels(CAudioMixerWaveADPCM* );
	/* soundsystem/snd_wave_mixer_adpcm.cpp:144 */
	void DecompressBlockMono(CAudioMixerWaveADPCM* , short int* , const char* , int);
	/* soundsystem/snd_wave_mixer_adpcm.cpp:234 */
	void DecompressBlockStereo(CAudioMixerWaveADPCM* , short int* , const char* , int);
	const class adpcmwaveformat_t * m_pFormat; /* 8400 8 */
	const class adpcmcoefset_t * m_pCoefficients; /* 8408 8 */
	short int * m_pSamples; /* 8416 8 */
	int m_nSampleFrameCount; /* 8424 4 */
	int m_samplePosition; /* 8428 4 */
	int m_blockSize; /* 8432 4 */
	int m_offset; /* 8436 4 */
	int m_totalBytes; /* 8440 4 */
	int m_nSamplesCopied; /* 8444 4 */
	void CAudioMixerWaveADPCM(class CAudioMixerWaveADPCM *, const class CAudioMixerWaveADPCM  &); /* linkage=_ZN20CAudioMixerWaveADPCMC4ERKS_ */
	void CAudioMixerWaveADPCM(class CAudioMixerWaveADPCM *, class CSfxTable *); /* linkage=_ZN20CAudioMixerWaveADPCMC4EP9CSfxTable */
	virtual void ~CAudioMixerWaveADPCM(class CAudioMixerWaveADPCM *); /* linkage=_ZN20CAudioMixerWaveADPCMD4Ev */
	virtual void SetSamplePosition(class CAudioMixerWaveADPCM *, int); /* linkage=_ZN20CAudioMixerWaveADPCM17SetSamplePositionEi */
	virtual uint GetDecodedData(class CAudioMixerWaveADPCM *, void *, uint); /* linkage=_ZN20CAudioMixerWaveADPCM14GetDecodedDataEPvj */
	virtual void LoopToStart(class CAudioMixerWaveADPCM *); /* linkage=_ZN20CAudioMixerWaveADPCM11LoopToStartEv */
	bool DecodeBlock(class CAudioMixerWaveADPCM *); /* linkage=_ZN20CAudioMixerWaveADPCM11DecodeBlockEv */
	/* <25121d8> soundsystem/snd_wave_mixer_adpcm.cpp:125 */
	int NumChannels(class CAudioMixerWaveADPCM *); /* linkage=_ZN20CAudioMixerWaveADPCM11NumChannelsEv */
	void DecompressBlockMono(class CAudioMixerWaveADPCM *, short int *, const char  *, int); /* linkage=_ZN20CAudioMixerWaveADPCM19DecompressBlockMonoEPsPKci */
	void DecompressBlockStereo(class CAudioMixerWaveADPCM *, short int *, const char  *, int); /* linkage=_ZN20CAudioMixerWaveADPCM21DecompressBlockStereoEPsPKci */
} __attribute__((__aligned__(8)));

// <02511CEC> soundsystem/snd_wave_mixer_adpcm.cpp:51
// variables: 7
// function calls: 2
void CAudioMixerWaveADPCM::GetDecodedData(void* pBuffer, uint nBufferSize)
{
	uint nBytesCopied; // 53
	const char   __FUNCTION__; // 9992
	{
		int nSampleFramesAvailable; // 56
		{
			int nSampleFramesToCopy; // 59
			int nCopy; // 60
			uint nBytesToCopy; // 61
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 63
			}
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 79
			V_memcpy(void* dest,
				const void* src,
				uint count);  // 62
		}
	}
} /* size: 0, variables: 2 */

// <02511C75> soundsystem/snd_wave_mixer_adpcm.cpp:76
// variables: 2
void CAudioMixerWaveADPCM::LoopToStart()
{
	const char   __FUNCTION__; // 9971
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 78
	}
} /* size: 27, variables: 1 */

// <02511A78> soundsystem/snd_wave_mixer_adpcm.cpp:81
// variables: 2
// function calls: 3
void CAudioMixerWaveADPCM::CAudioMixerWaveADPCM(CSfxTable* pSfx)
{
	{
		{
			CAudioSourceWave* pSource; // 89
			{
			}
			{
			}
			{
			}
		}
	}
	{
		{
			CAudioSourceWave* pSource; // 89
			{
			}
			{
			}
			CStrongHandle<InfoForResourceTypeVSound_t>::operator->(); // 112
			VSoundV00_t::channels(); // 112
			{
			}
			CAudioMixerWaveADPCM::NumChannels(); // 113
		}
	}
} /* size: 0 */

// <025119E8> soundsystem/snd_wave_mixer_adpcm.cpp:81
// variables: 5
void CAudioMixerWaveADPCM::CAudioMixerWaveADPCM(CSfxTable* pSfx)
{
	const char   __FUNCTION__; // 10013
	{
		CAudioSourceWave* pSource; // 89
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 101
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 108
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 112
		}
	}
} /* size: 0, variables: 1 */

// <0251198F> soundsystem/snd_wave_mixer_adpcm.cpp:119
void CAudioMixerWaveADPCM::~CAudioMixerWaveADPCM()
{
} /* size: 56 */

// <025118F4> soundsystem/snd_wave_mixer_adpcm.cpp:119
// function call: 1
void CAudioMixerWaveADPCM::~CAudioMixerWaveADPCM()
{
	CAudioMixerWaveADPCM::~CAudioMixerWaveADPCM(); // 122
} /* size: 69, inline expansions: 1 (35 bytes) */

// <025121D8> soundsystem/snd_wave_mixer_adpcm.cpp:125
void CAudioMixerWaveADPCM::NumChannels()
{
} /* size: 0 */

// <0251176E> soundsystem/snd_wave_mixer_adpcm.cpp:144
// variables: 11
void CAudioMixerWaveADPCM::DecompressBlockMono(short int* pOut, const char* pIn, int count)
{
	int pred; // 146
	int co1; // 147
	int co2; // 148
	int delta; // 151
	int samp1; // 155
	int samp2; // 158
	int high; // 169
	int error; // 171
	int sample; // 171
	{
		int errorSign; // 195
		int predSample; // 198
	}
} /* size: 289, variables: 9 */

// <0251160B> soundsystem/snd_wave_mixer_adpcm.cpp:234
// variables: 12
void CAudioMixerWaveADPCM::DecompressBlockStereo(short int* pOut, const char* pIn, int count)
{
	int pred; // 236
	int co1; // 236
	int co2; // 236
	int i; // 237
	int delta; // 246
	int samp1; // 246
	int samp2; // 246
	int high; // 274
	int error; // 276
	int sample; // 276
	{
		int errorSign; // 302
		int predSample; // 305
	}
} /* size: 499, variables: 10 */

// <025113DA> soundsystem/snd_wave_mixer_adpcm.cpp:340
// variables: 8
// function calls: 2
void CAudioMixerWaveADPCM::DecodeBlock()
{
	char tmpBlock; // 342
	char* pData; // 343
	int blockSize; // 344
	int firstSample; // 345
	CAudioSourceWave* pSource; // 348
	int available; // 370
	int channelCount; // 394
	{
		int total; // 374
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 377
	}
	CAudioMixerWaveADPCM::NumChannels(); // 394
} /* size: 503, variables: 7, inline expansions: 1 (20 bytes) */

// <0251133A> soundsystem/snd_wave_mixer_adpcm.cpp:426
// variables: 2
void CAudioMixerWaveADPCM::SetSamplePosition(int newPosition)
{
	int blockStart; // 432
	int blockOffset; // 434
} /* size: 91, variables: 2 */

