
//
// soundsystem/snd_wave_source.cpp
//
//	referenced by: libengine2.so
//
//	functions: 45
//	class: 1
//

// <02550936> soundsystem/snd_wave_source.cpp:16
// variables: 6
uint ADPCMSampleCount(adpcmwaveformat_t* pFormat, int length)
{
	uint nChannels; // 19
	uint wSamplesPerBlock; // 20
	uint blockSize; // 22
	uint blockCount; // 25
	uint blockRem; // 26
	uint sampleCount; // 29
} /* size: 0, variables: 6 */

// <02551096> soundsystem/snd_wave_source.cpp:43
// function calls: 4
void CAudioMixerData::CreateSourceInputForChannel(audio_source_input_t* pOut, int nChannel)
{
	CUtlMemory<audio_buffer_input_t, int>::Base(); // 113
	CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::Base(); // 47
	CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::Count(); // 48
	{
	}
	CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::Count(); // 49
} /* size: 0, inline expansions: 4 (14 bytes) */

// <025508C2> soundsystem/snd_wave_source.cpp:43
// variables: 2
void CAudioMixerData::CreateSourceInputForChannel(audio_source_input_t* pOut, int nChannel)
{
	const char   __FUNCTION__; // 27071
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 48
	}
} /* size: 0, variables: 1 */

// <025511A7> soundsystem/snd_wave_source.cpp:56
// variables: 2
// function calls: 3
void CAudioMixerData::QueuedSampleCount(const audio_source_indexstate_t& index)
{
	uint nSamples; // 58
	{
		int i; // 59
		CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::Count(); // 59
		CUtlMemory<audio_buffer_input_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::operator[](
				int i);  // 61
	}
} /* size: 70, variables: 1 */

// <02550880> soundsystem/snd_wave_source.cpp:56
// variables: 2
void CAudioMixerData::QueuedSampleCount(const audio_source_indexstate_t& index)
{
	uint nSamples; // 58
	{
		int i; // 59
	}
} /* size: 0, variables: 1 */

// <02550720> soundsystem/snd_wave_source.cpp:68
// variables: 3
// function calls: 3
void CAudioMixerData::Truncate(const audio_source_indexstate_t& index, uint nRemaining)
{
	{
		uint i; // 70
		{
			uint nThisPacket; // 72
			uint nOffset; // 73
			CUtlMemory<audio_buffer_input_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::operator[](
					int i);  // 72
		}
		CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::Count(); // 70
	}
} /* size: 130 */

// <0255042C> soundsystem/snd_wave_source.cpp:101
// variables: 2
// function calls: 11
void CAudioSourceWave::CAudioSourceWave(CSfxTable* pSfx)
{
	{
		const VSound_t* info; // 104
	}
	CAudioSource::CAudioSource(); // 207
	CAudioSourceCached::CAudioSourceCached(
				CSfxTable* pSfx);  // 102
	{
		const VSound_t* info; // 104
		CStrongHandle<InfoForResourceTypeVSound_t>::operator const ResourceHandleInfo_t<InfoForResourceTypeVSound_t>::RuntimeClass_t*(); // 104
		VSoundV00_t::format(); // 108
		ResolveOffset(const int32* pOffset); // 304
		CResourceArrayBase::GetRawPtr(); // 416
		CResourceArray<unsigned char>::GetPtr(); // 108
		ResolveOffset(const int32* pOffset); // 304
		CResourceArrayBase::GetRawPtr(); // 416
		CResourceArray<unsigned char>::GetPtr(); // 110
		ADPCMSampleCount(adpcmwaveformat_t* pFormat,
				int length);  // 110
	}
} /* size: 0, inline expansions: 2 (0 bytes) */

// <025503F9> soundsystem/snd_wave_source.cpp:101
// variable: 1
void CAudioSourceWave::CAudioSourceWave(CSfxTable* pSfx)
{
	{
		const VSound_t* info; // 104
	}
} /* size: 0 */

// <02550392> soundsystem/snd_wave_source.cpp:115
// function call: 1
void CAudioSourceWave::~CAudioSourceWave()
{
	{
	}
	CAudioSourceCached::~CAudioSourceCached(); // 117
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0255029F> soundsystem/snd_wave_source.cpp:115
// function calls: 3
void CAudioSourceWave::~CAudioSourceWave()
{
	{
		CAudioSource::~CAudioSource(); // 214
	}
	CAudioSourceCached::~CAudioSourceCached(); // 117
	CAudioSourceWave::~CAudioSourceWave(); // 117
} /* size: 0, inline expansions: 2 (0 bytes) */

// <02550286> soundsystem/snd_wave_source.cpp:115
void CAudioSourceWave::~CAudioSourceWave()
{
} /* size: 0 */

// <02550258> soundsystem/snd_wave_source.cpp:119
void CAudioSourceWave::GetType()
{
} /* size: 10 */

// <025501F9> soundsystem/snd_wave_source.cpp:128
void CAudioSourceCached::GetFileName(CBufferString* pNameOut)
{
} /* size: 32 */

// <025500D9> soundsystem/snd_wave_source.cpp:137
// function calls: 6
void CAudioSourceWave::SampleSize()
{
	CStrongHandle<InfoForResourceTypeVSound_t>::operator->(); // 139
	VSoundV00_t::format(); // 228
	VSoundV00_t::BytesPerSample(
			vsound_format_t nFormat);  // 227
	VSoundV00_t::BytesPerSample(); // 228
	VSoundV00_t::channels(); // 228
	VSoundV00_t::m_sampleFrameSize(); // 139
} /* size: 0, inline expansions: 6 (112 bytes) */

// <02550ED0> soundsystem/snd_wave_source.cpp:146
void CAudioSourceWave::SampleCount()
{
} /* size: 8 */

// <0255006D> soundsystem/snd_wave_source.cpp:152
// function call: 1
void CAudioSourceWave::DataSize()
{
	CStrongHandle<InfoForResourceTypeVSound_t>::operator->(); // 154
} /* size: 0, inline expansions: 1 (17 bytes) */

// <02550EFA> soundsystem/snd_wave_source.cpp:157
// function call: 1
void CAudioSourceWave::IsLooped()
{
	CStrongHandle<InfoForResourceTypeVSound_t>::operator->(); // 159
} /* size: 0, inline expansions: 1 (17 bytes) */

// <02550054> soundsystem/snd_wave_source.cpp:157
void CAudioSourceWave::IsLooped()
{
} /* size: 0 */

// <0254FFD9> soundsystem/snd_wave_source.cpp:162
// function calls: 2
void CAudioSourceWave::ChannelCount()
{
	CStrongHandle<InfoForResourceTypeVSound_t>::operator->(); // 164
	VSoundV00_t::channels(); // 164
} /* size: 0, inline expansions: 2 (34 bytes) */

// <0254FF02> soundsystem/snd_wave_source.cpp:170
// function calls: 4
const void* CAudioSourceWave::GetHeader()
{
	CStrongHandle<InfoForResourceTypeVSound_t>::operator->(); // 172
	ResolveOffset(const int32* pOffset); // 304
	CResourceArrayBase::GetRawPtr(); // 416
	CResourceArray<unsigned char>::GetPtr(); // 172
} /* size: 0, inline expansions: 4 (107 bytes) */

// <025512A5> soundsystem/snd_wave_source.cpp:180
// variable: 1
// function call: 1
void CAudioSourceWave::ConvertLoopedPosition(int samplePosition)
{
	CStrongHandle<InfoForResourceTypeVSound_t>::operator->(); // 186
	{
		int loopSize; // 189
	}
} /* size: 0, inline expansions: 1 (20 bytes) */

// <0254FECF> soundsystem/snd_wave_source.cpp:180
// variable: 1
void CAudioSourceWave::ConvertLoopedPosition(int samplePosition)
{
	{
		int loopSize; // 189
	}
} /* size: 0 */

// <0254FE36> soundsystem/snd_wave_source.cpp:207
// function call: 1
void CAudioSourceCached::CAudioSourceCached(CSfxTable* pSfx)
{
	CAudioSource::CAudioSource(); // 207
} /* size: 29, inline expansions: 1 (0 bytes) */

// <0254FE11> soundsystem/snd_wave_source.cpp:207
void CAudioSourceCached::CAudioSourceCached(CSfxTable* pSfx)
{
} /* size: 0 */

// <02550F85> soundsystem/snd_wave_source.cpp:211
// function call: 1
void CAudioSourceCached::~CAudioSourceCached()
{
	{
		{
		}
		CAudioSource::~CAudioSource(); // 214
	}
} /* size: 23 */

// <0254FDC1> soundsystem/snd_wave_source.cpp:211
void CAudioSourceCached::~CAudioSourceCached()
{
	{
		{
		}
	}
	{
	}
} /* size: 0 */

// <0254FCF2> soundsystem/snd_wave_source.cpp:211
// function calls: 2
void CAudioSourceCached::~CAudioSourceCached()
{
	{
		CAudioSource::~CAudioSource(); // 214
	}
	CAudioSourceCached::~CAudioSourceCached(); // 214
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0254FCB5> soundsystem/snd_wave_source.cpp:211
// variables: 2
void CAudioSourceCached::~CAudioSourceCached()
{
	const char   __FUNCTION__; // 26890
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
	}
} /* size: 0, variables: 1 */

// <0254FC3A> soundsystem/snd_wave_source.cpp:216
// function calls: 2
void CAudioSourceCached::SampleRate()
{
	CStrongHandle<InfoForResourceTypeVSound_t>::operator->(); // 218
	VSoundV00_t::m_rate(); // 218
} /* size: 0, inline expansions: 2 (33 bytes) */

// <0254FBF1> soundsystem/snd_wave_source.cpp:225
void CAudioSourceCached::ReferenceRemove(CAudioMixer* pMixer)
{
} /* size: 14 */

// <02550F49> soundsystem/snd_wave_source.cpp:235
void CAudioSourceCached::ReferenceAdd(CAudioMixer* pMixer)
{
} /* size: 14 */

// <02551323> soundsystem/snd_wave_source.cpp:244
void CAudioSourceCached::GetDataPointer()
{
} /* size: 13 */

// <0254ECC6> soundsystem/snd_wave_source.cpp:250
// variables: 18
// function calls: 49
void CAudioSourceCached::CopySamples16(CUtlVector<short int, CUtlMemory<short int, int> >& samplesOut)
{
	bool bCopied; // 252
	char* pData; // 254
	const char   __FUNCTION__; // 26748
	{
		uint nSampleCount; // 257
		vsound_format_t nFormat; // 259
		CAudioMixer* pMixer; // 285
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 262
		}
		{
			short int* pSamples; // 266
		}
		{
			short int* pSamples; // 273
			{
				uint i; // 275
				CUtlMemory<short int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
						int i);  // 277
			}
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::RemoveMultipleFromTail(
						int num);  // 1323
			CUtlMemory<short int, int>::NumAllocated(); // 782
			CUtlMemory<short int, int>::Base(); // 112
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::Base(); // 368
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::GrowMemory(
					int num);  // 784
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::GrowVector(
					int num);  // 1445
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1437
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1294
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::AddMultipleToTail(
						int num);  // 1319
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::SetCount(
				int count);  // 274
		}
		{
			audio_source_indexstate_t indexState; // 292
			uint nOffset; // 293
			{
				const CAudioMixerData* pMixerData; // 296
				float flOutput0; // 297
				float flOutput1; // 298
				audio_source_input_t sourceInputDesc; // 299
				{
					int i; // 317
					{
						int nOut; // 319
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 320
						CUtlMemory<short int, int>::operator[](
								int i);  // 588
						CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
								int i);  // 321
					}
				}
				CUtlMemory<audio_buffer_input_t, int>::Base(); // 113
				CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::Base(); // 47
				CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::Count(); // 48
				{
				}
				CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::Count(); // 49
				CAudioMixerData::CreateSourceInputForChannel(
								audio_source_input_t* pOut,
								int nChannel);  // 302
				CUtlMemory<short int, int>::NumAllocated(); // 782
				CUtlMemory<short int, int>::Base(); // 112
				CUtlVectorBase<short int, CUtlMemory<short int, int> >::Base(); // 368
				CUtlVectorBase<short int, CUtlMemory<short int, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<short int, CUtlMemory<short int, int> >::GrowMemory(
						int num);  // 784
				CUtlVectorBase<short int, CUtlMemory<short int, int> >::GrowVector(
						int num);  // 1445
				CUtlVectorBase<short int, CUtlMemory<short int, int> >::InsertMultipleBefore(
							int elem,
							int num);  // 1437
				CUtlVectorBase<short int, CUtlMemory<short int, int> >::InsertMultipleBefore(
							int elem,
							int num);  // 1294
				CUtlVectorBase<short int, CUtlMemory<short int, int> >::AddMultipleToTail(
							int num);  // 316
				CStrongHandle<InfoForResourceTypeVSound_t>::operator->(); // 159
				CAudioSourceWave::IsLooped(); // 325
				CUtlMemory<audio_buffer_input_t, int>::Base(); // 113
				CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::Base(); // 47
				CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::Count(); // 48
				{
				}
				CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::Count(); // 49
				CAudioMixerData::CreateSourceInputForChannel(
								audio_source_input_t* pOut,
								int nChannel);  // 309
			}
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::RemoveAll(); // 290
			CAudioSourceWave::SampleCount(); // 291
			CUtlMemory<short int, int>::IsGrowable(); // 881
			CUtlMemory<short int, int>::IsExternallyAllocated(); // 888
			CUtlMemory<short int, int>::EnsureCapacity(
					int num);  // 1006
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::ResetDbgInfo(); // 1024
			CUtlVectorBase<short int, CUtlMemory<short int, int> >::EnsureCapacity(
					int num);  // 291
		}
		CAudioSourceWave::SampleCount(); // 257
		CStrongHandle<InfoForResourceTypeVSound_t>::operator->(); // 259
		VSoundV00_t::format(); // 259
		VSoundV00_t::channels(); // 264
	}
	CAudioSourceCached::GetDataPointer(); // 254
} /* size: 0, variables: 3, inline expansions: 1 (9 bytes) */

// <0254EC98> soundsystem/snd_wave_source.cpp:338
void CAudioSourceCached::ShouldDuckOtherVoices()
{
} /* size: 7 */

// <0254C881> soundsystem/snd_wave_source.cpp:352
// function calls: 2
void CAudioSourceMemWave::~CAudioSourceMemWave()
{
	{
	}
	CAudioSourceCached::~CAudioSourceCached(); // 117
	CAudioSourceWave::~CAudioSourceWave(); // 352
} /* size: 31, inline expansions: 2 (52 bytes) */

// <0254C75B> soundsystem/snd_wave_source.cpp:352
// function calls: 4
void CAudioSourceMemWave::~CAudioSourceMemWave()
{
	{
		CAudioSource::~CAudioSource(); // 214
	}
	CAudioSourceCached::~CAudioSourceCached(); // 117
	CAudioSourceWave::~CAudioSourceWave(); // 352
	CAudioSourceMemWave::~CAudioSourceMemWave(); // 352
} /* size: 67, inline expansions: 3 (90 bytes) */

// <0254C73D> soundsystem/snd_wave_source.cpp:352
inline void CAudioSourceMemWave::~CAudioSourceMemWave()
{
} /* size: 0 */

// <0254B0C2> soundsystem/snd_wave_source.cpp:352
// member functions: 14
// member variable: 1
// vtable entries: 4
// class size: 24
class CAudioSourceMemWave : public CAudioSourceWave {
public:
	/* class CAudioSourceWave <ancestor>; */ /* 0 24 */
	/* soundsystem/snd_wave_source.cpp:369 */
	void CAudioSourceMemWave(CAudioSourceMemWave* , CSfxTable* );
	/* soundsystem/snd_wave_source.cpp:378 */
	virtual CAudioMixer* CreateMixer(CAudioSourceMemWave* );
	/* soundsystem/snd_wave_source.cpp:397 */
	virtual int GetOutputData(CAudioSourceMemWave* , void** , int, int, char* );
	/* soundsystem/snd_wave_source.cpp:440 */
	virtual void InitPackets(CAudioSourceMemWave* , CAudioMixerData* );
	/* soundsystem/snd_wave_source.cpp:455 */
	virtual void UpdateMixerData(CAudioSourceMemWave* , const audio_source_indexstate_t& , CAudioMixerData* );
private:
	/* soundsystem/snd_wave_source.cpp:365 */
	void CAudioSourceMemWave(CAudioSourceMemWave* , const CAudioSourceMemWave& );
	virtual void ~CAudioSourceMemWave(CAudioSourceMemWave* );
	void CAudioSourceMemWave(class CAudioSourceMemWave *, class CSfxTable *); /* linkage=_ZN19CAudioSourceMemWaveC4EP9CSfxTable */
	virtual class CAudioMixer * CreateMixer(class CAudioSourceMemWave *); /* linkage=_ZN19CAudioSourceMemWave11CreateMixerEv */
	virtual int GetOutputData(class CAudioSourceMemWave *, void * *, int, int, char *); /* linkage=_ZN19CAudioSourceMemWave13GetOutputDataEPPviiPc */
	virtual void InitPackets(class CAudioSourceMemWave *, class CAudioMixerData *); /* linkage=_ZN19CAudioSourceMemWave11InitPacketsEP15CAudioMixerData */
	/* <2551362> soundsystem/snd_wave_source.cpp:455 */
	virtual void UpdateMixerData(class CAudioSourceMemWave *, const class audio_source_indexstate_t  &, class CAudioMixerData *); /* linkage=_ZN19CAudioSourceMemWave15UpdateMixerDataERK25audio_source_indexstate_tP15CAudioMixerData */
	void CAudioSourceMemWave(class CAudioSourceMemWave *, const class CAudioSourceMemWave  &); /* linkage=_ZN19CAudioSourceMemWaveC4ERKS_ */
	virtual void ~CAudioSourceMemWave(class CAudioSourceMemWave *); /* linkage=_ZN19CAudioSourceMemWaveD4Ev */
};

// <0254E982> soundsystem/snd_wave_source.cpp:369
// variable: 1
// function calls: 12
void CAudioSourceMemWave::CAudioSourceMemWave(CSfxTable* pSfx)
{
	CAudioSource::CAudioSource(); // 207
	CAudioSourceCached::CAudioSourceCached(
				CSfxTable* pSfx);  // 102
	{
		const VSound_t* info; // 104
		CStrongHandle<InfoForResourceTypeVSound_t>::operator const ResourceHandleInfo_t<InfoForResourceTypeVSound_t>::RuntimeClass_t*(); // 104
		VSoundV00_t::format(); // 108
		ResolveOffset(const int32* pOffset); // 304
		CResourceArrayBase::GetRawPtr(); // 416
		CResourceArray<unsigned char>::GetPtr(); // 108
		ResolveOffset(const int32* pOffset); // 304
		CResourceArrayBase::GetRawPtr(); // 416
		CResourceArray<unsigned char>::GetPtr(); // 110
		ADPCMSampleCount(adpcmwaveformat_t* pFormat,
				int length);  // 110
	}
	CAudioSourceWave::CAudioSourceWave(
			CSfxTable* pSfx);  // 370
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0254E95C> soundsystem/snd_wave_source.cpp:369
void CAudioSourceMemWave::CAudioSourceMemWave(CSfxTable* pSfx)
{
} /* size: 0 */

// <0254E82F> soundsystem/snd_wave_source.cpp:378
// variable: 1
// function calls: 4
void CAudioSourceMemWave::CreateMixer()
{
	CAudioMixer* pMixer; // 380
	CStrongHandle<InfoForResourceTypeVSound_t>::operator->(); // 380
	VSoundV00_t::channels(); // 380
	VSoundV00_t::format(); // 380
	CAudioSourceCached::ReferenceAdd(
			CAudioMixer* pMixer);  // 383
} /* size: 0, variables: 1, inline expansions: 4 (48 bytes) */

// <0254E5C7> soundsystem/snd_wave_source.cpp:397
// variables: 4
// function calls: 8
void CAudioSourceMemWave::GetOutputData(void** pData, int samplePosition, int sampleCount, char* copyBuf)
{
	int totalSampleCount; // 403
	const char   __FUNCTION__; // 26748
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 423
	}
	CStrongHandle<InfoForResourceTypeVSound_t>::operator->(); // 186
	{
		int loopSize; // 189
	}
	CAudioSourceWave::ConvertLoopedPosition(
				int samplePosition);  // 400
	VSoundV00_t::format(); // 228
	VSoundV00_t::BytesPerSample(
			vsound_format_t nFormat);  // 227
	VSoundV00_t::BytesPerSample(); // 228
	VSoundV00_t::channels(); // 228
	VSoundV00_t::m_sampleFrameSize(); // 418
	CAudioSourceCached::GetDataPointer(); // 424
} /* size: 0, variables: 2, inline expansions: 8 (174 bytes) */

// <0254E0F6> soundsystem/snd_wave_source.cpp:440
// variable: 1
// function calls: 21
void CAudioSourceMemWave::InitPackets(CAudioMixerData* pData)
{
	{
		uint nLoopEnd; // 450
		CUtlMemory<audio_buffer_input_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::operator[](
				int i);  // 451
	}
	CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::RemoveAll(); // 442
	CUtlMemory<audio_buffer_input_t, int>::NumAllocated(); // 1143
	CUtlMemory<audio_buffer_input_t, int>::Base(); // 112
	CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::Base(); // 368
	CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::AddToTail(); // 443
	CAudioSourceCached::GetDataPointer(); // 444
	CUtlMemory<audio_buffer_input_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::operator[](
			int i);  // 444
	CStrongHandle<InfoForResourceTypeVSound_t>::operator->(); // 445
	VSoundV00_t::format(); // 228
	VSoundV00_t::BytesPerSample(
			vsound_format_t nFormat);  // 227
	VSoundV00_t::BytesPerSample(); // 228
	VSoundV00_t::channels(); // 228
	VSoundV00_t::m_sampleFrameSize(); // 445
	CUtlMemory<audio_buffer_input_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::operator[](
			int i);  // 445
	CStrongHandle<InfoForResourceTypeVSound_t>::operator->(); // 448
} /* size: 0, inline expansions: 19 (219 bytes) */

// <02551362> soundsystem/snd_wave_source.cpp:455
// variables: 18
// function calls: 37
void CAudioSourceMemWave::UpdateMixerData(const audio_source_indexstate_t& index, CAudioMixerData* pData)
{
	CStrongHandle<InfoForResourceTypeVSound_t>::operator->(); // 159
	CAudioSourceWave::IsLooped(); // 457
	{
		char* pSampleData; // 459
		uint nSampleSize; // 465
		CAudioSourceCached::GetDataPointer(); // 459
		{
		}
		CStrongHandle<InfoForResourceTypeVSound_t>::operator->(); // 465
		VSoundV00_t::format(); // 228
		VSoundV00_t::BytesPerSample(
				vsound_format_t nFormat);  // 227
		VSoundV00_t::BytesPerSample(); // 228
		VSoundV00_t::channels(); // 228
		VSoundV00_t::m_sampleFrameSize(); // 465
		{
			const uint  kMinQueuedSamples; // 468
			uint nStart; // 469
			uint nEnd; // 470
			uint nLoopLength; // 475
			const uint  kMinSamplesPerPacket; // 488
			uint nLoopsPerPacket; // 489
			uint nSamplesPerPacket; // 490
			{
				int nOut; // 494
				uint nOffset; // 495
				CUtlMemory<audio_buffer_input_t, int>::NumAllocated(); // 1143
				CUtlMemory<audio_buffer_input_t, int>::Base(); // 112
				CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::Base(); // 368
				CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::GrowMemory(
						int num);  // 1145
				CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::AddToTail(); // 494
				CUtlMemory<audio_buffer_input_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::operator[](
						int i);  // 496
				CUtlMemory<audio_buffer_input_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::operator[](
						int i);  // 497
			}
			{
				int i; // 59
				CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::Count(); // 59
				CUtlMemory<audio_buffer_input_t, int>::operator[](
						int i);  // 595
				CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::operator[](
						int i);  // 61
			}
			CAudioMixerData::QueuedSampleCount(
						const audio_source_indexstate_t& index);  // 492
		}
		{
			audio_buffer_input_t* pLastPacket; // 503
			char* pQueuedSamples; // 504
			uint nLastOffset; // 507
			char* pTail; // 510
			uint nRemainingBytes; // 511
			CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::Count(); // 503
			CUtlMemory<audio_buffer_input_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::operator[](
					int i);  // 503
			{
				int nOut; // 515
				CUtlMemory<audio_buffer_input_t, int>::NumAllocated(); // 1143
				CUtlMemory<audio_buffer_input_t, int>::Base(); // 112
				CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::Base(); // 368
				CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::GrowMemory(
						int num);  // 1145
				CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::AddToTail(); // 515
				CUtlMemory<audio_buffer_input_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::operator[](
						int i);  // 516
				CUtlMemory<audio_buffer_input_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::operator[](
						int i);  // 517
			}
		}
	}
	CAudioSourceMemWave::UpdateMixerData(
			const audio_source_indexstate_t& index,
			CAudioMixerData* pData);  // 455
} /* size: 0, inline expansions: 3 (567 bytes) */

// <0254DFAE> soundsystem/snd_wave_source.cpp:455
// variables: 19
void CAudioSourceMemWave::UpdateMixerData(const audio_source_indexstate_t& index, CAudioMixerData* pData)
{
	const char   __FUNCTION__; // 26797
	{
		char* pSampleData; // 459
		uint nSampleSize; // 465
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 462
		}
		{
			const uint  kMinQueuedSamples; // 468
			uint nStart; // 469
			uint nEnd; // 470
			uint nLoopLength; // 475
			const uint  kMinSamplesPerPacket; // 488
			uint nLoopsPerPacket; // 489
			uint nSamplesPerPacket; // 490
			{
				int nOut; // 494
				uint nOffset; // 495
			}
		}
		{
			audio_buffer_input_t* pLastPacket; // 503
			char* pQueuedSamples; // 504
			uint nLastOffset; // 507
			char* pTail; // 510
			uint nRemainingBytes; // 511
			{
				int nOut; // 515
			}
		}
	}
} /* size: 0, variables: 1 */

// <0254DDF2> soundsystem/snd_wave_source.cpp:529
// variables: 4
// function calls: 3
CAudioSource* CreateWave(CSfxTable* pSfx, bool bStreaming)
{
	const char   __FUNCTION__; // 26677
	CAudioSourceWave* pWave; // 541
	const VSound_t* pInfo; // 543
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 531
	}
	CStrongHandle<InfoForResourceTypeVSound_t>::operator const ResourceHandleInfo_t<InfoForResourceTypeVSound_t>::RuntimeClass_t*(); // 543
	VSoundV00_t::format(); // 547
	CAudioSourceMemWave::CAudioSourceMemWave(
				CSfxTable* pSfx);  // 549
} /* size: 0, variables: 3, inline expansions: 3 (35 bytes) */

