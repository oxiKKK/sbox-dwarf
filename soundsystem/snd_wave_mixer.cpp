
//
// soundsystem/snd_wave_mixer.cpp
//
//	referenced by: libengine2.so
//
//	functions: 36
//

// <024FF205> soundsystem/snd_wave_mixer.cpp:40
// variables: 3
uint LoopPosition(uint nPos, const VSound_t* pSoundData)
{
	{
		uint nStart; // 46
		uint nEnd; // 47
		{
			uint nLoopCount; // 51
		}
	}
} /* size: 0 */

// <024FF1C8> soundsystem/snd_wave_mixer.cpp:62
void CAudioMixer::SetTimeScale(float flTimeScale)
{
} /* size: 23 */

// <024FEDB1> soundsystem/snd_wave_mixer.cpp:73
// variables: 2
// function calls: 13
void CAudioMixerWave::CAudioMixerWave(CSfxTable* pSfx)
{
	{
		int nBytesPerSample; // 88
	}
	CAudioMixer::CAudioMixer(); // 74
	{
	}
	AlignedByteArrayExplicit_t<4, audio_buffer_input_t, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<4, audio_buffer_input_t>::AlignedByteArray_t(); // 228
	CUtlMemory<audio_buffer_input_t, int>::CUtlMemory(
			audio_buffer_input_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<audio_buffer_input_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<audio_buffer_input_t, int>::CUtlMemoryFixedGrowable_Base(
					audio_buffer_input_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<4, audio_buffer_input_t, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<audio_buffer_input_t, 4>::CUtlVectorFixedGrowable(
				int growSize);  // 75
	CAudioMixerData::CAudioMixerData(); // 74
	{
		int nBytesPerSample; // 88
		audio_source_indexstate_t::Clear(); // 82
	}
} /* size: 258, inline expansions: 12 (304 bytes) */

// <024FED7E> soundsystem/snd_wave_mixer.cpp:73
// variable: 1
void CAudioMixerWave::CAudioMixerWave(CSfxTable* pSfx)
{
	{
		int nBytesPerSample; // 88
	}
} /* size: 0 */

// <024FE997> soundsystem/snd_wave_mixer.cpp:96
// variables: 2
// function calls: 19
void CAudioMixerWave::~CAudioMixerWave()
{
	{
		CAudioSource* pSource; // 98
	}
	{
		CAudioSource* pSource; // 98
		CAudioMixerWave::GetSource(); // 98
	}
	CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::RemoveAll(); // 1798
	CUtlMemory<audio_buffer_input_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<audio_buffer_input_t, int>::ConvertToExternalMemory(
				audio_buffer_input_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<audio_buffer_input_t, int>::Purge_FixedGrowable(
				audio_buffer_input_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<audio_buffer_input_t, int>::Purge_FixedGrowable(
				audio_buffer_input_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<4, audio_buffer_input_t, 8>::Base(); // 237
	CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::Purge(); // 560
	ValidateAlignment<audio_buffer_input_t>(void); // 508
	CUtlMemory<audio_buffer_input_t, int>::Purge(); // 903
	CUtlMemory<audio_buffer_input_t, int>::Purge(); // 510
	CUtlMemory<audio_buffer_input_t, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<audio_buffer_input_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<audio_buffer_input_t, 4>::~CUtlVectorFixedGrowable(); // 75
	CAudioMixerData::~CAudioMixerData(); // 103
} /* size: 126, inline expansions: 18 (466 bytes) */

// <024FE92F> soundsystem/snd_wave_mixer.cpp:96
void CAudioMixerWave::~CAudioMixerWave()
{
} /* size: 36 */

// <024FE908> soundsystem/snd_wave_mixer.cpp:96
// variable: 1
void CAudioMixerWave::~CAudioMixerWave()
{
	{
		CAudioSource* pSource; // 98
	}
} /* size: 0 */

// <024FE896> soundsystem/snd_wave_mixer.cpp:105
// variable: 1
void CAudioMixerWave::OnCachedDataAvailable()
{
	int nSeek; // 109
} /* size: 70, variables: 1 */

// <024FE7FD> soundsystem/snd_wave_mixer.cpp:114
// variables: 2
void CAudioMixerWave::IsReadyToMix()
{
	const char   __FUNCTION__; // 55258
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 117
	}
} /* size: 0, variables: 1 */

// <024FF830> soundsystem/snd_wave_mixer.cpp:136
void CAudioMixerWave::GetSource()
{
} /* size: 13 */

// <024FF966> soundsystem/snd_wave_mixer.cpp:147
// variables: 3
// function calls: 2
void CAudioMixerWave::GetSamplePosition()
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
} /* size: 74, inline expansions: 2 (60 bytes) */

// <024FE7CB> soundsystem/snd_wave_mixer.cpp:147
void CAudioMixerWave::GetSamplePosition()
{
} /* size: 0 */

// <024FF85A> soundsystem/snd_wave_mixer.cpp:153
void CAudioMixerWave::GetSampleCount()
{
} /* size: 27 */

// <024FF898> soundsystem/snd_wave_mixer.cpp:166
// variable: 1
// function calls: 2
void CAudioMixerWave::DelayOrSkipSamples(int nDelaySamples)
{
	{
		const int  nMaxSkip; // 175
		CAudioMixerWave::GetSampleCount(); // 175
	}
	CAudioMixerWave::DelayOrSkipSamples(
				int nDelaySamples);  // 166
} /* size: 124, inline expansions: 1 (90 bytes) */

// <024FE77F> soundsystem/snd_wave_mixer.cpp:166
// variable: 1
void CAudioMixerWave::DelayOrSkipSamples(int nDelaySamples)
{
	{
		const int  nMaxSkip; // 175
	}
} /* size: 0 */

// <024FFAD5> soundsystem/snd_wave_mixer.cpp:183
// variables: 4
// function calls: 4
void CAudioMixerWave::SetSamplePosition(int nStartPosition)
{
	int nSeek; // 192
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
	CAudioMixerWave::GetSamplePosition(); // 192
	CAudioMixerWave::SetSamplePosition(
				int nStartPosition);  // 183
} /* size: 167, variables: 1, inline expansions: 4 (269 bytes) */

// <024FE74E> soundsystem/snd_wave_mixer.cpp:183
// variable: 1
void CAudioMixerWave::SetSamplePosition(int nStartPosition)
{
	int nSeek; // 192
} /* size: 0, variables: 1 */

// <024FE711> soundsystem/snd_wave_mixer.cpp:197
void CAudioMixerWave::SetSampleEnd(uint nEndSample)
{
} /* size: 8 */

// <024FE624> soundsystem/snd_wave_mixer.cpp:206
// variables: 2
void CAudioMixerWave::SeekOverSamples(int nSeek)
{
	{
		audio_source_input_t mixInput; // 211
		audio_source_indexstate_t mixOutput; // 213
	}
} /* size: 156 */

// <024FE5F6> soundsystem/snd_wave_mixer.cpp:221
void CAudioMixerWave::ShouldContinueMixing()
{
} /* size: 15 */

// <024FE4EF> soundsystem/snd_wave_mixer.cpp:226
// variables: 4
void CAudioMixerWave::AddDelaySamplesToPacket()
{
	const char   __FUNCTION__; // 55300
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 228
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 229
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 230
	}
} /* size: 0, variables: 1 */

// <024FFC59> soundsystem/snd_wave_mixer.cpp:238
// variable: 1
// function call: 1
void CAudioMixerWave::ForceSampleEndOnPackets()
{
	{
		uint nRemaining; // 243
		CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::Count(); // 245
	}
} /* size: 0 */

// <024FE4A8> soundsystem/snd_wave_mixer.cpp:238
// variable: 1
void CAudioMixerWave::ForceSampleEndOnPackets()
{
	{
		uint nRemaining; // 243
	}
} /* size: 0 */

// <024FE3BC> soundsystem/snd_wave_mixer.cpp:252
// variable: 1
// function calls: 2
void CAudioMixerWave::GetMixerData()
{
	{
		uint nRemaining; // 243
		CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::Count(); // 245
	}
	CAudioMixerWave::ForceSampleEndOnPackets(); // 266
} /* size: 112, inline expansions: 1 (59 bytes) */

// <024FE005> soundsystem/snd_wave_mixer.cpp:270
// variables: 4
// function calls: 13
void CAudioMixerWave::UpdateMixerState(audio_source_indexstate_t& state)
{
	CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::Count(); // 278
	CUtlMemory<audio_buffer_input_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::Remove(
		int elem);  // 286
	CUtlMemory<audio_buffer_input_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::operator[](
			int i);  // 285
	CStrongHandle<InfoForResourceTypeVSound_t>::operator const ResourceHandleInfo_t<InfoForResourceTypeVSound_t>::RuntimeClass_t*(); // 291
	{
		uint nStart; // 46
		uint nEnd; // 47
		{
			uint nLoopCount; // 51
		}
	}
	LoopPosition(uint nPos,
			const VSound_t* pSoundData);  // 291
	{
		uint nRemaining; // 243
		CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::Count(); // 245
	}
	CAudioMixerWave::ForceSampleEndOnPackets(); // 294
} /* size: 348, inline expansions: 12 (214 bytes) */

// <024FDFC7> soundsystem/snd_wave_mixer.cpp:297
void CAudioMixerWave::SetChannelSelect(vaudio_channel_index_t nChannels)
{
} /* size: 9 */

// <024FDF89> soundsystem/snd_wave_mixer.cpp:302
void CAudioMixerWave::EnableLooping(bool bEnable)
{
} /* size: 9 */

// <024FDE2E> soundsystem/snd_wave_mixer.cpp:310
// variables: 4
// function calls: 4
void CAudioMixerEncoded::CAudioMixerEncoded(CSfxTable* pSfx)
{
	{
		int nBytesPerSample; // 315
		{
			int i; // 321
		}
	}
	{
		int nBytesPerSample; // 315
		CStrongHandle<InfoForResourceTypeVSound_t>::operator->(); // 315
		VSoundV00_t::format(); // 315
		VSoundV00_t::channels(); // 316
		CStrongHandle<InfoForResourceTypeVSound_t>::operator->(); // 316
		{
			int i; // 321
		}
	}
} /* size: 0 */

// <024FDDEB> soundsystem/snd_wave_mixer.cpp:310
// variables: 2
void CAudioMixerEncoded::CAudioMixerEncoded(CSfxTable* pSfx)
{
	{
		int nBytesPerSample; // 315
		{
			int i; // 321
		}
	}
} /* size: 0 */

// <024FDDA0> soundsystem/snd_wave_mixer.cpp:327
void CAudioMixerEncoded::~CAudioMixerEncoded()
{
} /* size: 19 */

// <024FDD10> soundsystem/snd_wave_mixer.cpp:327
// function call: 1
void CAudioMixerEncoded::~CAudioMixerEncoded()
{
	CAudioMixerEncoded::~CAudioMixerEncoded(); // 330
} /* size: 0, inline expansions: 1 (0 bytes) */

// <024FD9BC> soundsystem/snd_wave_mixer.cpp:332
// variables: 5
// function calls: 12
void CAudioMixerEncoded::AddBuffer()
{
	{
		char* pBuffer; // 336
		int nBytesDecoded; // 339
		{
			int nSamples; // 342
			int nIndex; // 343
			audio_buffer_input_t& out; // 344
			CUtlMemory<audio_buffer_input_t, int>::NumAllocated(); // 1143
			CUtlMemory<audio_buffer_input_t, int>::Base(); // 112
			CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::Base(); // 368
			CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::ResetDbgInfo(); // 824
			CUtlMemory<audio_buffer_input_t, int>::IsGrowable(); // 823
			CUtlMemory<audio_buffer_input_t, int>::IsExternallyAllocated(); // 859
			CUtlMemory<audio_buffer_input_t, int>::IsExternallyAllocated(); // 861
			CUtlMemory<audio_buffer_input_t, int>::Grow(
				int num);  // 806
			CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::GrowMemory(
					int num);  // 1145
			CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::AddToTail(); // 343
			CUtlMemory<audio_buffer_input_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::Element(
				int i);  // 344
		}
	}
} /* size: 443 */

// <024FD884> soundsystem/snd_wave_mixer.cpp:358
// variables: 5
void CAudioMixerEncoded::FreeBuffer(char* pBuffer)
{
	uintp nOffset; // 360
	const char   __FUNCTION__; // 55237
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 363
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 366
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 367
	}
} /* size: 0, variables: 2 */

// <024FD69F> soundsystem/snd_wave_mixer.cpp:372
// variables: 3
// function calls: 3
void CAudioMixerEncoded::GetMixerData()
{
	{
		int nSkip; // 379
		int nPos; // 380
	}
	CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::Count(); // 374
	{
		uint nRemaining; // 243
		CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::Count(); // 245
	}
	CAudioMixerWave::ForceSampleEndOnPackets(); // 399
} /* size: 260, inline expansions: 2 (59 bytes) */

// <024FD2AC> soundsystem/snd_wave_mixer.cpp:404
// variables: 5
// function calls: 13
void CAudioMixerEncoded::UpdateMixerState(audio_source_indexstate_t& state)
{
	{
		uint i; // 408
		CUtlMemory<audio_buffer_input_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::Element(
			int i);  // 1114
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 115
		V_memmove(void* dest,
				const void* src,
				size_t count);  // 1114
		CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::ShiftElementsLeft(
					int elem,
					int num);  // 1608
		CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::Remove(
			int elem);  // 412
		CUtlMemory<audio_buffer_input_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::operator[](
				int i);  // 410
	}
	CStrongHandle<InfoForResourceTypeVSound_t>::operator const ResourceHandleInfo_t<InfoForResourceTypeVSound_t>::RuntimeClass_t*(); // 417
	{
		uint nStart; // 46
		uint nEnd; // 47
		{
			uint nLoopCount; // 51
		}
	}
	LoopPosition(uint nPos,
			const VSound_t* pSoundData);  // 417
	CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::Count(); // 424
	{
		uint nRemaining; // 243
		CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::Count(); // 245
	}
	CAudioMixerWave::ForceSampleEndOnPackets(); // 430
} /* size: 352, inline expansions: 4 (150 bytes) */

// <024FD265> soundsystem/snd_wave_mixer.cpp:436
void CAudioMixerEncoded::OnCachedDataAvailable()
{
} /* size: 10 */

