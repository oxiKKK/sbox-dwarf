
//
// soundsystem/time_stretch.cpp
//
//	referenced by: libengine2.so
//
//	functions: 56
//	classes: 2
//

// <02640993> soundsystem/time_stretch.cpp:40
// variables: 4
// function call: 1
void PeekOffset(CCircularBuffer& output, CCircularBuffer& samplesIn, uint nOffsetBytes, uint nSize)
{
	int nAvail; // 42
	{
		int nStart; // 45
		int nEnd; // 50
		{
			int nSpan1; // 53
		}
	}
	CCircularBuffer::GetReadAvailable(); // 42
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <026402E4> soundsystem/time_stretch.cpp:73
// variables: 12
// function calls: 31
float CrossCorrelate(const float* pSamples, const float* pCompare, uint nSampleCount)
{
	fltx4 fl4CrossCorrelation; // 75
	fltx4 fl4Norm; // 76
	float flNormOut; // 83
	float flCrossCorrelationOut; // 84
	{
		uint j; // 77
		{
			fltx4 fl4Sample; // 79
			{
				fltx4 retVal; // 947
				_mm_loadu_ps(const float* __P); // 948
			}
			LoadUnalignedSIMD<>(const void* pSIMD); // 79
			{
				fltx4 retVal; // 947
				_mm_loadu_ps(const float* __P); // 948
			}
			LoadUnalignedSIMD<>(const void* pSIMD); // 80
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 1684
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1684
			MaddSIMD<>(const fltx4& a,
					const fltx4& b,
					const fltx4& c);  // 80
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 1684
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 1684
			MaddSIMD<>(const fltx4& a,
					const fltx4& b,
					const fltx4& c);  // 81
		}
	}
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 83
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 83
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 83
	_mm_cvtss_f32(__m128 __A); // 1553
	GetWSIMD<>(fltx4 a); // 83
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 84
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 84
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 84
	_mm_cvtss_f32(__m128 __A); // 1553
	GetWSIMD<>(fltx4 a); // 84
	sqrt(float __x); // 85
} /* size: 0, variables: 4, inline expansions: 17 (0 bytes) */

// <0263DE28> soundsystem/time_stretch.cpp:91
void CTimeStretch::~CTimeStretch()
{
} /* size: 0 */

// <0263DE0C> soundsystem/time_stretch.cpp:91
inline void CTimeStretch::~CTimeStretch()
{
} /* size: 0 */

// <0263799D> soundsystem/time_stretch.cpp:91
// member functions: 28
// member variables: 9
// class size: 64
class CTimeStretch {
private:
	float m_flTimeScale; /* 0 4 */
	uint m_nSampleWindowSize; /* 4 4 */
	uint m_nCrossfadeWindowSize; /* 8 4 */
	uint m_nSearchWindowSize; /* 12 4 */
	uint m_nCopyWindowSize; /* 16 4 */
	int m_nChannels; /* 20 4 */
	uint m_nGrainStartFrame; /* 24 4 */
	float m_flGrainStartFrame; /* 28 4 */
	CUtlVector<float, CUtlMemory<float, int> > m_flFadeTemp; /* 32 32 */
	/* soundsystem/time_stretch.cpp:104 */
	void UpdateDerivedVals(CTimeStretch* );
	/* soundsystem/time_stretch.cpp:110 */
	void CalcStretchParams(CTimeStretch* , uint);
	/* soundsystem/time_stretch.cpp:128 */
	int OffsetWithMinimumPhaseError(CTimeStretch* , CCircularBuffer& , uint, uint);
	/* soundsystem/time_stretch.cpp:155 */
	void CrossfadeSamples(CTimeStretch* , CCircularBuffer& , CCircularBuffer& , uint, uint);
	/* soundsystem/time_stretch.cpp:195 */
	void CopyCorrelationSamples(CTimeStretch* , CCircularBuffer& , uint);
	/* soundsystem/time_stretch.cpp:207 */
	void CTimeStretch(CTimeStretch* , uint, uint, float);
	/* soundsystem/time_stretch.cpp:212 */
	float GetTimeScale(const CTimeStretch* );
	/* soundsystem/time_stretch.cpp:213 */
	void SetTimeScale(CTimeStretch* , float);
	/* soundsystem/time_stretch.cpp:217 */
	int ChannelCount(const CTimeStretch* );
	/* soundsystem/time_stretch.cpp:219 */
	uint MinRequiredSamples(CTimeStretch* );
	/* soundsystem/time_stretch.cpp:225 */
	float GetFloat(CTimeStretch* , CCircularBuffer& , uint);
	/* soundsystem/time_stretch.cpp:232 */
	uint StretchSamples(CTimeStretch* , CCircularBuffer& , CCircularBuffer& );
	/* soundsystem/time_stretch.cpp:299 */
	void ConsumeFinalInput(CTimeStretch* , CCircularBuffer& );
	void ~CTimeStretch(CTimeStretch* );
	void UpdateDerivedVals(class CTimeStretch *); /* linkage=_ZN12CTimeStretch17UpdateDerivedValsEv */
	void CalcStretchParams(class CTimeStretch *, uint); /* linkage=_ZN12CTimeStretch17CalcStretchParamsEj */
	int OffsetWithMinimumPhaseError(class CTimeStretch *, class CCircularBuffer &, uint, uint); /* linkage=_ZN12CTimeStretch27OffsetWithMinimumPhaseErrorER15CCircularBufferjj */
	void CrossfadeSamples(class CTimeStretch *, class CCircularBuffer &, class CCircularBuffer &, uint, uint); /* linkage=_ZN12CTimeStretch16CrossfadeSamplesER15CCircularBufferS1_jj */
	void CopyCorrelationSamples(class CTimeStretch *, class CCircularBuffer &, uint); /* linkage=_ZN12CTimeStretch22CopyCorrelationSamplesER15CCircularBufferj */
	void CTimeStretch(class CTimeStretch *, uint, uint, float); /* linkage=_ZN12CTimeStretchC4Ejjf */
	float GetTimeScale(const class CTimeStretch  *); /* linkage=_ZNK12CTimeStretch12GetTimeScaleEv */
	void SetTimeScale(class CTimeStretch *, float); /* linkage=_ZN12CTimeStretch12SetTimeScaleEf */
	int ChannelCount(const class CTimeStretch  *); /* linkage=_ZNK12CTimeStretch12ChannelCountEv */
	uint MinRequiredSamples(class CTimeStretch *); /* linkage=_ZN12CTimeStretch18MinRequiredSamplesEv */
	float GetFloat(class CTimeStretch *, class CCircularBuffer &, uint); /* linkage=_ZN12CTimeStretch8GetFloatER15CCircularBufferj */
	uint StretchSamples(class CTimeStretch *, class CCircularBuffer &, class CCircularBuffer &); /* linkage=_ZN12CTimeStretch14StretchSamplesER15CCircularBufferS1_ */
	void ConsumeFinalInput(class CTimeStretch *, class CCircularBuffer &); /* linkage=_ZN12CTimeStretch17ConsumeFinalInputER15CCircularBuffer */
	void ~CTimeStretch(class CTimeStretch *); /* linkage=_ZN12CTimeStretchD4Ev */
};

// <026402A2> soundsystem/time_stretch.cpp:104
// variables: 2
inline void CTimeStretch::UpdateDerivedVals()
{
	const char   __FUNCTION__; // 52154
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 107
	}
} /* size: 0, variables: 1 */

// <02640241> soundsystem/time_stretch.cpp:110
// variables: 5
inline void CTimeStretch::CalcStretchParams(uint nSampleRate)
{
	float flGrainSize; // 112
	const int  nGrainSize_ms; // 113
	float flSearchSize; // 114
	const int  nSearchWindow_ms; // 115
	const int  nOverlap_ms; // 116
} /* size: 0, variables: 5 */

// <0263F7CD> soundsystem/time_stretch.cpp:128
// variables: 8
// function calls: 41
void CTimeStretch::OffsetWithMinimumPhaseError(CCircularBuffer& samplesIn, uint nOffsetSampleFrames, uint nChannelCount)
{
	CUtlVectorFixedGrowable<float, 2048> waveForm; // 130
	uint nBytesPerSampleFrame; // 133
	uint nSearchWindowSampleCount; // 135
	int nBestOffset; // 138
	float flBest; // 139
	{
		uint i; // 141
		{
			uint nBase; // 143
			float flCrossCorrelation; // 144
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 2048, int> >::operator[](
					int i);  // 144
		}
	}
	CUtlMemory<float, int>::CUtlMemory(
			float* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<float, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<float, int>::CUtlMemoryFixedGrowable_Base(
					float* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<2048, float, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<2048, float>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<2048, float, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<float, 2048, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 2048, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 2048, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<float, 2048>::CUtlVectorFixedGrowable(
				int growSize);  // 130
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 136
	CCircularBuffer::GetReadAvailable(); // 10
	PeekOffset(void* pOut,
			CCircularBuffer& samplesIn,
			uint nOffsetBytes,
			uint nSize);  // 137
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 2048, int> >::Base(); // 137
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 2048, int> >::Base(); // 139
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 139
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 139
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 2048, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<2048, float, 4>::Base(); // 237
	CUtlMemory<float, int>::IsExternallyAllocated(); // 577
	CUtlMemory<float, int>::ConvertToExternalMemory(
				float* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<float, int>::Purge_FixedGrowable(
				float* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<float, int>::Purge_FixedGrowable(
				float* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<float, 2048, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 2048, int> >::Base(); // 368
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 2048, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 2048, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<float, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<float, 2048, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 2048, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<float, 2048>::~CUtlVectorFixedGrowable(); // 153
} /* size: 0, variables: 5, inline expansions: 39 (0 bytes) */

// <0263EC6A> soundsystem/time_stretch.cpp:155
// variables: 14
// function calls: 45
void CTimeStretch::CrossfadeSamples(CCircularBuffer& floatOut, CCircularBuffer& samplesIn, uint nInputOffsetBytes, uint nChannelCount)
{
	uint nSampleCount; // 157
	CUtlVectorFixedGrowable<float, 2048> waveForm; // 158
	{
		float flDelta; // 164
		float flFrac; // 165
		float* pFadeOut; // 166
		{
			uint i; // 167
			{
				float flSample; // 169
				CUtlMemory<float, int>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 2048, int> >::operator[](
						int i);  // 169
			}
		}
		CUtlMemory<float, int>::Base(); // 112
		CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 166
	}
	{
		float flDelta; // 176
		float flFadeInAmt; // 177
		float flFadeOutAmt; // 178
		float* pFadeOut; // 180
		{
			uint i; // 181
			{
				float flSampleLeft; // 183
				float flSampleRight; // 184
				CUtlMemory<float, int>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 2048, int> >::operator[](
						int i);  // 183
				CUtlMemory<float, int>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 2048, int> >::operator[](
						int i);  // 184
				CUtlMemory<float, int>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 2048, int> >::operator[](
						int i);  // 187
			}
		}
	}
	CUtlMemory<float, int>::CUtlMemory(
			float* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<float, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<float, int>::CUtlMemoryFixedGrowable_Base(
					float* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<2048, float, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<2048, float>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<2048, float, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<float, 2048, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 2048, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 2048, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<float, 2048>::CUtlVectorFixedGrowable(
				int growSize);  // 158
	CCircularBuffer::GetReadAvailable(); // 10
	PeekOffset(void* pOut,
			CCircularBuffer& samplesIn,
			uint nOffsetBytes,
			uint nSize);  // 160
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 2048, int> >::Base(); // 160
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 2048, int> >::Base(); // 192
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 2048, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::IsExternallyAllocated(); // 577
	CUtlMemory<float, int>::ConvertToExternalMemory(
				float* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<float, int>::Purge_FixedGrowable(
				float* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<float, int>::Purge_FixedGrowable(
				float* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<2048, float, 4>::Base(); // 237
	CUtlMemoryFixedGrowable<float, 2048, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 2048, int> >::Base(); // 368
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 2048, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 2048, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<float, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<float, 2048, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 2048, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<float, 2048>::~CUtlVectorFixedGrowable(); // 193
} /* size: 0, variables: 2, inline expansions: 35 (0 bytes) */

// <0263EC20> soundsystem/time_stretch.cpp:195
// variables: 2
inline void CTimeStretch::CopyCorrelationSamples(CCircularBuffer& samplesIn, uint nOffsetBytes)
{
	uint nCopy; // 197
	{
		uint i; // 200
	}
} /* size: 0, variables: 1 */

// <0263EBC6> soundsystem/time_stretch.cpp:207
void CTimeStretch::CTimeStretch(uint nSamplingRate, uint nChannels, float flTimeScale)
{
} /* size: 0 */

// <0263EB89> soundsystem/time_stretch.cpp:207
inline void CTimeStretch::CTimeStretch(uint nSamplingRate, uint nChannels, float flTimeScale)
{
} /* size: 0 */

// <0263EB70> soundsystem/time_stretch.cpp:212
inline void CTimeStretch::GetTimeScale()
{
} /* size: 0 */

// <0263EB4B> soundsystem/time_stretch.cpp:213
inline void CTimeStretch::SetTimeScale(float flTimeScale)
{
} /* size: 0 */

// <0263EB32> soundsystem/time_stretch.cpp:217
inline void CTimeStretch::ChannelCount()
{
} /* size: 0 */

// <0263EB0D> soundsystem/time_stretch.cpp:219
// variable: 1
inline void CTimeStretch::MinRequiredSamples()
{
	uint nMinSamples; // 221
} /* size: 0, variables: 1 */

// <0263E449> soundsystem/time_stretch.cpp:232
// variables: 16
// function calls: 17
void CTimeStretch::StretchSamples(CCircularBuffer& floatOut, CCircularBuffer& samplesIn)
{
	uint nMinSamples; // 234
	uint nBytesPerSampleFrame; // 235
	uint nMinBytes; // 236
	uint nSampleFrameCount; // 237
	uint nChannelCount; // 238
	float flSampleFramesBetweenGrainStarts; // 248
	uint nCurrentOffset; // 250
	uint nOutputCount; // 251
	uint nOutputBytesPerLoop; // 252
	const char   __FUNCTION__; // 52133
	{
		uint nShift; // 256
		uint nGrainInc; // 279
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 269
		}
		{
			uint nAvail; // 287
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 288
			}
		}
		CCircularBuffer::GetReadAvailable(); // 10
		PeekOffset(void* pOut,
				CCircularBuffer& samplesIn,
				uint nOffsetBytes,
				uint nSize);  // 199
		CUtlMemory<float, int>::Base(); // 112
		CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 199
		{
			uint i; // 200
			CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 200
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
					int i);  // 202
		}
		CTimeStretch::CopyCorrelationSamples(
					CCircularBuffer& samplesIn,
					uint nOffsetBytes);  // 277
	}
	CTimeStretch::MinRequiredSamples(); // 234
	CCircularBuffer::GetReadAvailable(); // 237
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 241
	CCircularBuffer::GetReadAvailable(); // 253
	CCircularBuffer::GetWriteAvailable(); // 253
	CCircularBuffer::GetReadAvailable(); // 10
	PeekOffset(void* pOut,
			CCircularBuffer& samplesIn,
			uint nOffsetBytes,
			uint nSize);  // 244
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 244
} /* size: 0, variables: 10, inline expansions: 9 (0 bytes) */

// <0263E414> soundsystem/time_stretch.cpp:299
// variable: 1
inline void CTimeStretch::ConsumeFinalInput(CCircularBuffer& samplesIn)
{
	{
		uint nBytesPerSampleFrame; // 303
	}
} /* size: 0 */

// <02638D65> soundsystem/time_stretch.cpp:311
// member functions: 48
// member variables: 8
// vtable entries: 16
// class size: 288
class CAudioMixerStretch : public CAudioMixer {
public:
	/* class CAudioMixer <ancestor>; */ /* 0 0 */
	void CAudioMixerStretch(CAudioMixerStretch* , const CAudioMixerStretch& );
	/* soundsystem/time_stretch.cpp:412 */
	void CAudioMixerStretch(CAudioMixerStretch* , CAudioMixer* , float);
	/* soundsystem/time_stretch.cpp:434 */
	virtual void ~CAudioMixerStretch(CAudioMixerStretch* );
	/* soundsystem/time_stretch.cpp:317 */
	virtual CAudioSource* GetSource(CAudioMixerStretch* );
	/* soundsystem/time_stretch.cpp:318 */
	virtual int GetSamplePosition(CAudioMixerStretch* );
	/* soundsystem/time_stretch.cpp:352 */
	virtual void SetSamplePosition(CAudioMixerStretch* , int);
	/* soundsystem/time_stretch.cpp:358 */
	virtual void SetSampleEnd(CAudioMixerStretch* , uint);
	/* soundsystem/time_stretch.cpp:363 */
	virtual void DelayOrSkipSamples(CAudioMixerStretch* , int);
	/* soundsystem/time_stretch.cpp:375 */
	virtual bool IsReadyToMix(CAudioMixerStretch* );
	/* soundsystem/time_stretch.cpp:376 */
	virtual int GetPositionForSave(CAudioMixerStretch* );
	/* soundsystem/time_stretch.cpp:377 */
	virtual void SetPositionFromSaved(CAudioMixerStretch* , int);
	/* soundsystem/time_stretch.cpp:379 */
	virtual CSfxTable* GetSfxTable(CAudioMixerStretch* );
	/* soundsystem/time_stretch.cpp:381 */
	virtual uint GetSampleCount(CAudioMixerStretch* );
	/* soundsystem/time_stretch.cpp:448 */
	virtual bool ShouldContinueMixing(CAudioMixerStretch* );
	/* soundsystem/time_stretch.cpp:456 */
	virtual const CAudioMixerData* GetMixerData(CAudioMixerStretch* );
	/* soundsystem/time_stretch.cpp:603 */
	virtual void UpdateMixerState(CAudioMixerStretch* , audio_source_indexstate_t& );
	/* soundsystem/time_stretch.cpp:623 */
	virtual bool SetTimeScale(CAudioMixerStretch* , float);
	/* soundsystem/time_stretch.cpp:630 */
	virtual void SetChannelSelect(CAudioMixerStretch* , vaudio_channel_index_t);
	/* soundsystem/time_stretch.cpp:635 */
	virtual void EnableLooping(CAudioMixerStretch* , bool);
private:
	/* soundsystem/time_stretch.cpp:392 */
	int ChannelCount(const CAudioMixerStretch* );
	/* soundsystem/time_stretch.cpp:566 */
	void BuildOutputData(CAudioMixerStretch* );
	/* soundsystem/time_stretch.cpp:543 */
	void CopyOutputDataTo16Bit(CAudioMixerStretch* );
	/* soundsystem/time_stretch.cpp:505 */
	bool StretchInputData(CAudioMixerStretch* );
	/* soundsystem/time_stretch.cpp:467 */
	int ReadInputFromSource(CAudioMixerStretch* );
	CAudioMixer * m_pBase; /* 8 8 */
	CTimeStretch m_timeStretch; /* 16 64 */
	CAudioMixerData m_mixerData __attribute__((__aligned__(8))); /* 80 128 */
	uint m_nSamplesOutput; /* 208 4 */
	CCircularBuffer m_inputData; /* 216 24 */
	CCircularBuffer m_stretchedData; /* 240 24 */
	CCircularBuffer m_outputData16; /* 264 24 */
	void CAudioMixerStretch(class CAudioMixerStretch *, const class CAudioMixerStretch  &); /* linkage=_ZN18CAudioMixerStretchC4ERKS_ */
	void CAudioMixerStretch(class CAudioMixerStretch *, class CAudioMixer *, float); /* linkage=_ZN18CAudioMixerStretchC4EP11CAudioMixerf */
	virtual void ~CAudioMixerStretch(class CAudioMixerStretch *); /* linkage=_ZN18CAudioMixerStretchD4Ev */
	/* <2641df5> soundsystem/time_stretch.cpp:317 */
	virtual class CAudioSource * GetSource(class CAudioMixerStretch *); /* linkage=_ZN18CAudioMixerStretch9GetSourceEv */
	virtual int GetSamplePosition(class CAudioMixerStretch *); /* linkage=_ZN18CAudioMixerStretch17GetSamplePositionEv */
	/* <264189e> soundsystem/time_stretch.cpp:352 */
	virtual void SetSamplePosition(class CAudioMixerStretch *, int); /* linkage=_ZN18CAudioMixerStretch17SetSamplePositionEi */
	/* <26416b3> soundsystem/time_stretch.cpp:358 */
	virtual void SetSampleEnd(class CAudioMixerStretch *, uint); /* linkage=_ZN18CAudioMixerStretch12SetSampleEndEj */
	/* <26413d0> soundsystem/time_stretch.cpp:363 */
	virtual void DelayOrSkipSamples(class CAudioMixerStretch *, int); /* linkage=_ZN18CAudioMixerStretch18DelayOrSkipSamplesEi */
	/* <2641c3f> soundsystem/time_stretch.cpp:375 */
	virtual bool IsReadyToMix(class CAudioMixerStretch *); /* linkage=_ZN18CAudioMixerStretch12IsReadyToMixEv */
	/* <26414fd> soundsystem/time_stretch.cpp:376 */
	virtual int GetPositionForSave(class CAudioMixerStretch *); /* linkage=_ZN18CAudioMixerStretch18GetPositionForSaveEv */
	virtual void SetPositionFromSaved(class CAudioMixerStretch *, int); /* linkage=_ZN18CAudioMixerStretch20SetPositionFromSavedEi */
	/* <2641a89> soundsystem/time_stretch.cpp:379 */
	virtual class CSfxTable * GetSfxTable(class CAudioMixerStretch *); /* linkage=_ZN18CAudioMixerStretch11GetSfxTableEv */
	/* <2641fab> soundsystem/time_stretch.cpp:381 */
	virtual uint GetSampleCount(class CAudioMixerStretch *); /* linkage=_ZN18CAudioMixerStretch14GetSampleCountEv */
	virtual bool ShouldContinueMixing(class CAudioMixerStretch *); /* linkage=_ZN18CAudioMixerStretch20ShouldContinueMixingEv */
	/* <2642875> soundsystem/time_stretch.cpp:456 */
	virtual const class CAudioMixerData  * GetMixerData(class CAudioMixerStretch *); /* linkage=_ZN18CAudioMixerStretch12GetMixerDataEv */
	virtual void UpdateMixerState(class CAudioMixerStretch *, class audio_source_indexstate_t &); /* linkage=_ZN18CAudioMixerStretch16UpdateMixerStateER25audio_source_indexstate_t */
	virtual bool SetTimeScale(class CAudioMixerStretch *, float); /* linkage=_ZN18CAudioMixerStretch12SetTimeScaleEf */
	/* <264256e> soundsystem/time_stretch.cpp:630 */
	virtual void SetChannelSelect(class CAudioMixerStretch *, enum vaudio_channel_index_t); /* linkage=_ZN18CAudioMixerStretch16SetChannelSelectE22vaudio_channel_index_t */
	/* <264232a> soundsystem/time_stretch.cpp:635 */
	virtual void EnableLooping(class CAudioMixerStretch *, bool); /* linkage=_ZN18CAudioMixerStretch13EnableLoopingEb */
	int ChannelCount(const class CAudioMixerStretch  *); /* linkage=_ZNK18CAudioMixerStretch12ChannelCountEv */
	void BuildOutputData(class CAudioMixerStretch *); /* linkage=_ZN18CAudioMixerStretch15BuildOutputDataEv */
	void CopyOutputDataTo16Bit(class CAudioMixerStretch *); /* linkage=_ZN18CAudioMixerStretch21CopyOutputDataTo16BitEv */
	bool StretchInputData(class CAudioMixerStretch *); /* linkage=_ZN18CAudioMixerStretch16StretchInputDataEv */
	/* <2642b81> soundsystem/time_stretch.cpp:467 */
	int ReadInputFromSource(class CAudioMixerStretch *); /* linkage=_ZN18CAudioMixerStretch19ReadInputFromSourceEv */
} __attribute__((__aligned__(8)));

// <02641DF5> soundsystem/time_stretch.cpp:317
// function calls: 8
void CAudioMixerStretch::GetSource()
{
	CAudioMixerStretch::GetSource(); // 317
	CAudioMixerStretch::GetSource(); // 317
	CAudioMixerStretch::GetSource(); // 317
	CAudioMixerStretch::GetSource(); // 317
	CAudioMixerStretch::GetSource(); // 317
	CAudioMixerStretch::GetSource(); // 317
	CAudioMixerStretch::GetSource(); // 317
	CAudioMixerStretch::GetSource(); // 317
} /* size: 0, inline expansions: 8 (0 bytes) */

// <0263E3FB> soundsystem/time_stretch.cpp:317
inline void CAudioMixerStretch::GetSource()
{
} /* size: 0 */

// <0263E0B8> soundsystem/time_stretch.cpp:318
// variables: 7
// function calls: 12
void CAudioMixerStretch::GetSamplePosition()
{
	uint nSourceSampleRate; // 320
	uint nSourceChannels; // 321
	double flSourceTime; // 324
	uint nBytesPerInputDataFrame; // 329
	uint nFrames; // 330
	uint nStretchedFrames; // 336
	uint nSampleFramePos; // 345
	CAudioMixerStretch::GetSfxTable(); // 379
	CAudioMixerStretch::GetSfxTable(); // 379
	CAudioMixerStretch::GetSfxTable(); // 379
	CAudioMixerStretch::GetSfxTable(); // 320
	CAudioMixerStretch::GetSfxTable(); // 379
	CAudioMixerStretch::GetSfxTable(); // 379
	CAudioMixerStretch::GetSfxTable(); // 379
	CAudioMixerStretch::GetSfxTable(); // 321
	CCircularBuffer::GetReadAvailable(); // 330
	CCircularBuffer::GetReadAvailable(); // 336
	CCircularBuffer::GetReadAvailable(); // 337
	CTimeStretch::GetTimeScale(); // 339
} /* size: 0, variables: 7, inline expansions: 12 (0 bytes) */

// <0264189E> soundsystem/time_stretch.cpp:352
// function calls: 8
void CAudioMixerStretch::SetSamplePosition(int newPosition)
{
	CAudioMixerStretch::SetSamplePosition(
				int newPosition);  // 354
	CAudioMixerStretch::SetSamplePosition(
				int newPosition);  // 354
	CAudioMixerStretch::SetSamplePosition(
				int newPosition);  // 354
	CAudioMixerStretch::SetSamplePosition(
				int newPosition);  // 354
	CAudioMixerStretch::SetSamplePosition(
				int newPosition);  // 354
	CAudioMixerStretch::SetSamplePosition(
				int newPosition);  // 354
	CAudioMixerStretch::SetSamplePosition(
				int newPosition);  // 354
	CAudioMixerStretch::SetSamplePosition(
				int newPosition);  // 354
} /* size: 0, inline expansions: 8 (0 bytes) */

// <0263E092> soundsystem/time_stretch.cpp:352
inline void CAudioMixerStretch::SetSamplePosition(int newPosition)
{
} /* size: 0 */

// <026416B3> soundsystem/time_stretch.cpp:358
// function calls: 8
void CAudioMixerStretch::SetSampleEnd(uint nEndSample)
{
	CAudioMixerStretch::SetSampleEnd(
			uint nEndSample);  // 360
	CAudioMixerStretch::SetSampleEnd(
			uint nEndSample);  // 360
	CAudioMixerStretch::SetSampleEnd(
			uint nEndSample);  // 360
	CAudioMixerStretch::SetSampleEnd(
			uint nEndSample);  // 360
	CAudioMixerStretch::SetSampleEnd(
			uint nEndSample);  // 360
	CAudioMixerStretch::SetSampleEnd(
			uint nEndSample);  // 360
	CAudioMixerStretch::SetSampleEnd(
			uint nEndSample);  // 360
	CAudioMixerStretch::SetSampleEnd(
			uint nEndSample);  // 360
} /* size: 0, inline expansions: 8 (0 bytes) */

// <0263E06C> soundsystem/time_stretch.cpp:358
inline void CAudioMixerStretch::SetSampleEnd(uint nEndSample)
{
} /* size: 0 */

// <026413D0> soundsystem/time_stretch.cpp:363
// function calls: 5
void CAudioMixerStretch::DelayOrSkipSamples(int nDelaySamples)
{
	CAudioMixerStretch::DelayOrSkipSamples(
				int nDelaySamples);  // 363
	CAudioMixerStretch::DelayOrSkipSamples(
				int nDelaySamples);  // 371
	CAudioMixerStretch::DelayOrSkipSamples(
				int nDelaySamples);  // 363
	CAudioMixerStretch::DelayOrSkipSamples(
				int nDelaySamples);  // 371
	CAudioMixerStretch::DelayOrSkipSamples(
				int nDelaySamples);  // 363
} /* size: 0, inline expansions: 5 (0 bytes) */

// <0263E046> soundsystem/time_stretch.cpp:363
inline void CAudioMixerStretch::DelayOrSkipSamples(int nDelaySamples)
{
} /* size: 0 */

// <02641C3F> soundsystem/time_stretch.cpp:375
// function calls: 8
void CAudioMixerStretch::IsReadyToMix()
{
	CAudioMixerStretch::IsReadyToMix(); // 375
	CAudioMixerStretch::IsReadyToMix(); // 375
	CAudioMixerStretch::IsReadyToMix(); // 375
	CAudioMixerStretch::IsReadyToMix(); // 375
	CAudioMixerStretch::IsReadyToMix(); // 375
	CAudioMixerStretch::IsReadyToMix(); // 375
	CAudioMixerStretch::IsReadyToMix(); // 375
	CAudioMixerStretch::IsReadyToMix(); // 375
} /* size: 0, inline expansions: 8 (0 bytes) */

// <0263E02D> soundsystem/time_stretch.cpp:375
inline void CAudioMixerStretch::IsReadyToMix()
{
} /* size: 0 */

// <026414FD> soundsystem/time_stretch.cpp:376
// function calls: 8
void CAudioMixerStretch::GetPositionForSave()
{
	CAudioMixerStretch::GetPositionForSave(); // 376
	CAudioMixerStretch::GetPositionForSave(); // 376
	CAudioMixerStretch::GetPositionForSave(); // 376
	CAudioMixerStretch::GetPositionForSave(); // 376
	CAudioMixerStretch::GetPositionForSave(); // 376
	CAudioMixerStretch::GetPositionForSave(); // 376
	CAudioMixerStretch::GetPositionForSave(); // 376
	CAudioMixerStretch::GetPositionForSave(); // 376
} /* size: 0, inline expansions: 8 (0 bytes) */

// <0263E014> soundsystem/time_stretch.cpp:376
inline void CAudioMixerStretch::GetPositionForSave()
{
} /* size: 0 */

// <0263DEBD> soundsystem/time_stretch.cpp:377
// function calls: 4
void CAudioMixerStretch::SetPositionFromSaved(int savedPosition)
{
	CAudioMixerStretch::SetSamplePosition(
				int newPosition);  // 354
	CAudioMixerStretch::SetSamplePosition(
				int newPosition);  // 354
	CAudioMixerStretch::SetSamplePosition(
				int newPosition);  // 354
	CAudioMixerStretch::SetSamplePosition(
				int newPosition);  // 377
} /* size: 0, inline expansions: 4 (0 bytes) */

// <02641A89> soundsystem/time_stretch.cpp:379
// function calls: 8
void CAudioMixerStretch::GetSfxTable()
{
	CAudioMixerStretch::GetSfxTable(); // 379
	CAudioMixerStretch::GetSfxTable(); // 379
	CAudioMixerStretch::GetSfxTable(); // 379
	CAudioMixerStretch::GetSfxTable(); // 379
	CAudioMixerStretch::GetSfxTable(); // 379
	CAudioMixerStretch::GetSfxTable(); // 379
	CAudioMixerStretch::GetSfxTable(); // 379
	CAudioMixerStretch::GetSfxTable(); // 379
} /* size: 0, inline expansions: 8 (0 bytes) */

// <0263DEA4> soundsystem/time_stretch.cpp:379
inline void CAudioMixerStretch::GetSfxTable()
{
} /* size: 0 */

// <02641FAB> soundsystem/time_stretch.cpp:381
// function calls: 17
void CAudioMixerStretch::GetSampleCount()
{
	CTimeStretch::GetTimeScale(); // 381
	CAudioMixerStretch::GetSampleCount(); // 381
	CTimeStretch::GetTimeScale(); // 381
	CAudioMixerStretch::GetSampleCount(); // 381
	CTimeStretch::GetTimeScale(); // 381
	CAudioMixerStretch::GetSampleCount(); // 381
	CTimeStretch::GetTimeScale(); // 381
	CAudioMixerStretch::GetSampleCount(); // 381
	CTimeStretch::GetTimeScale(); // 381
	CAudioMixerStretch::GetSampleCount(); // 381
	CTimeStretch::GetTimeScale(); // 381
	CAudioMixerStretch::GetSampleCount(); // 381
	CTimeStretch::GetTimeScale(); // 381
	CAudioMixerStretch::GetSampleCount(); // 381
	CTimeStretch::GetTimeScale(); // 381
	CAudioMixerStretch::GetSampleCount(); // 381
	CTimeStretch::GetTimeScale(); // 381
} /* size: 0, inline expansions: 17 (0 bytes) */

// <0263DE8B> soundsystem/time_stretch.cpp:381
inline void CAudioMixerStretch::GetSampleCount()
{
} /* size: 0 */

// <0263DE72> soundsystem/time_stretch.cpp:392
inline void CAudioMixerStretch::ChannelCount()
{
} /* size: 0 */

// <0263CEE5> soundsystem/time_stretch.cpp:412
// variables: 2
// function calls: 61
void CAudioMixerStretch::CAudioMixerStretch(CAudioMixer* pBase, float flTimeScale)
{
	{
		audio_source_indexstate_t indexState; // 420
	}
	CAudioMixerStretch::GetSource(); // 317
	CAudioMixerStretch::GetSource(); // 317
	CAudioMixerStretch::GetSource(); // 317
	CAudioMixerStretch::GetSource(); // 317
	CAudioMixerStretch::GetSource(); // 317
	CAudioMixerStretch::GetSource(); // 317
	CAudioMixerStretch::GetSource(); // 317
	CAudioMixerStretch::GetSource(); // 317
	CAudioMixerStretch::GetSource(); // 317
	CAudioMixerStretch::GetSource(); // 317
	CAudioMixerStretch::GetSource(); // 413
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 210
	RemapValClamped(float val,
			float A,
			float B,
			float C,
			float D);  // 205
	RemapValClamped(float val,
			float A,
			float B,
			float C,
			float D);  // 112
	RemapValClamped(float val,
			float A,
			float B,
			float C,
			float D);  // 205
	RemapValClamped(float val,
			float A,
			float B,
			float C,
			float D);  // 114
	{
	}
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 108
	CTimeStretch::UpdateDerivedVals(); // 122
	CTimeStretch::CalcStretchParams(
				uint nSampleRate);  // 209
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 207
	CTimeStretch::CTimeStretch(
			uint nSamplingRate,
			uint nChannels,
			float flTimeScale);  // 413
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
	CAudioMixerData::CAudioMixerData(); // 414
	CAudioMixerStretch::IsReadyToMix(); // 375
	CAudioMixerStretch::IsReadyToMix(); // 375
	CAudioMixerStretch::IsReadyToMix(); // 375
	CAudioMixerStretch::IsReadyToMix(); // 375
	CAudioMixerStretch::IsReadyToMix(); // 375
	CAudioMixerStretch::IsReadyToMix(); // 375
	CAudioMixerStretch::IsReadyToMix(); // 375
	CAudioMixerStretch::IsReadyToMix(); // 375
	CAudioMixerStretch::IsReadyToMix(); // 375
	CAudioMixerStretch::IsReadyToMix(); // 375
	CAudioMixerStretch::IsReadyToMix(); // 418
	{
		audio_source_indexstate_t indexState; // 420
		CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::Count(); // 459
		CAudioMixerStretch::GetMixerData(); // 420
	}
	audio_source_indexstate_t::Clear(); // 417
	CAudioMixerStretch::GetSource(); // 317
	CAudioMixerStretch::GetSource(); // 317
	CAudioMixerStretch::GetSource(); // 317
	CAudioMixerStretch::GetSource(); // 317
	CAudioMixerStretch::GetSource(); // 317
	CAudioMixerStretch::GetSource(); // 317
	CAudioMixerStretch::GetSource(); // 317
	CAudioMixerStretch::GetSource(); // 317
	CAudioMixerStretch::GetSource(); // 317
	CAudioMixerStretch::GetSource(); // 317
	CAudioMixerStretch::GetSource(); // 429
} /* size: 0, inline expansions: 59 (0 bytes) */

// <0263CEA3> soundsystem/time_stretch.cpp:412
// variable: 1
void CAudioMixerStretch::CAudioMixerStretch(CAudioMixer* pBase, float flTimeScale)
{
	{
		audio_source_indexstate_t indexState; // 420
	}
} /* size: 0 */

// <0263C922> soundsystem/time_stretch.cpp:434
// function calls: 27
void CAudioMixerStretch::~CAudioMixerStretch()
{
	CAudioMixerStretch::~CAudioMixerStretch(); // 438
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
	CAudioMixerData::~CAudioMixerData(); // 439
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 91
	CTimeStretch::~CTimeStretch(); // 439
} /* size: 0, inline expansions: 27 (0 bytes) */

// <0263C8BA> soundsystem/time_stretch.cpp:434
void CAudioMixerStretch::~CAudioMixerStretch()
{
} /* size: 0 */

// <0263C7BE> soundsystem/time_stretch.cpp:441
// variables: 3
CAudioMixer* CreateStretchMixer(CAudioMixer* pMixer, float flTimescale)
{
	const char   __FUNCTION__; // 52175
	CAudioMixerStretch* pOut; // 444
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 443
	}
} /* size: 0, variables: 2 */

// <0263C711> soundsystem/time_stretch.cpp:448
// function calls: 2
void CAudioMixerStretch::ShouldContinueMixing()
{
	CCircularBuffer::GetReadAvailable(); // 453
	CCircularBuffer::GetReadAvailable(); // 453
} /* size: 0, inline expansions: 2 (0 bytes) */

// <02642875> soundsystem/time_stretch.cpp:456
// function call: 1
void CAudioMixerStretch::GetMixerData()
{
	CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::Count(); // 459
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0263C6F8> soundsystem/time_stretch.cpp:456
void CAudioMixerStretch::GetMixerData()
{
} /* size: 0 */

// <02642B81> soundsystem/time_stretch.cpp:467
// variables: 6
// function calls: 4
void CAudioMixerStretch::ReadInputFromSource()
{
	const CAudioMixerData* pMixerData; // 472
	float flOutput0; // 473
	float flOutput1; // 474
	float flInterleaved; // 475
	audio_source_input_t sourceInputDesc; // 478
	audio_source_indexstate_t indexState; // 479
	CAudioMixerStretch::IsReadyToMix(); // 375
	CAudioMixerStretch::IsReadyToMix(); // 375
	CAudioMixerStretch::IsReadyToMix(); // 375
	CAudioMixerStretch::IsReadyToMix(); // 469
} /* size: 0, variables: 6, inline expansions: 4 (0 bytes) */

// <026428F0> soundsystem/time_stretch.cpp:467
// variables: 7
// function calls: 2
void CAudioMixerStretch::ReadInputFromSource()
{
	const CAudioMixerData* pMixerData; // 472
	float flOutput0; // 473
	float flOutput1; // 474
	float flInterleaved; // 475
	audio_source_input_t sourceInputDesc; // 478
	audio_source_indexstate_t indexState; // 479
	CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::Count(); // 459
	CAudioMixerStretch::GetMixerData(); // 472
	{
	}
	{
	}
	{
		int i; // 489
	}
} /* size: 0, variables: 6, inline expansions: 2 (0 bytes) */

// <0263C637> soundsystem/time_stretch.cpp:467
// variables: 10
void CAudioMixerStretch::ReadInputFromSource()
{
	const CAudioMixerData* pMixerData; // 472
	float flOutput0; // 473
	float flOutput1; // 474
	float flInterleaved; // 475
	audio_source_input_t sourceInputDesc; // 478
	audio_source_indexstate_t indexState; // 479
	const char   __FUNCTION__; // 52196
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 484
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 485
	}
	{
		int i; // 489
	}
} /* size: 0, variables: 7 */

// <0263C27D> soundsystem/time_stretch.cpp:505
// variables: 8
// function calls: 10
void CAudioMixerStretch::StretchInputData()
{
	uint nBytesPerSampleFrame; // 507
	uint nSamplesAvailable; // 508
	{
		bool bAvailInput; // 511
		uint nStretched; // 522
		{
			uint nBytesPerInputLoop; // 514
			CTimeStretch::ChannelCount(); // 392
			CAudioMixerStretch::ChannelCount(); // 514
			CCircularBuffer::GetWriteAvailable(); // 515
		}
		{
			uint nAvail; // 529
			uint nWrite; // 530
			CCircularBuffer::GetReadAvailable(); // 529
			CCircularBuffer::GetWriteAvailable(); // 530
			{
				uint nBytesPerSampleFrame; // 303
			}
			CTimeStretch::ConsumeFinalInput(
						CCircularBuffer& samplesIn);  // 527
		}
		CCircularBuffer::GetReadAvailable(); // 537
	}
	CTimeStretch::ChannelCount(); // 392
	CAudioMixerStretch::ChannelCount(); // 507
	CCircularBuffer::GetReadAvailable(); // 508
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

// <0263C063> soundsystem/time_stretch.cpp:543
// variables: 7
// function calls: 4
void CAudioMixerStretch::CopyOutputDataTo16Bit()
{
	{
		const uint  nBufferSampleCount; // 547
		short int temp; // 548
		float flTemp; // 549
		int nAvailSamples; // 550
		int nWriteSamples; // 552
		{
			int i; // 555
			{
				float flSample; // 557
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 558
			}
		}
		CCircularBuffer::GetWriteAvailable(); // 552
		CCircularBuffer::GetWriteAvailable(); // 561
	}
	CCircularBuffer::GetReadAvailable(); // 545
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0263B8D0> soundsystem/time_stretch.cpp:566
// variables: 4
// function calls: 33
void CAudioMixerStretch::BuildOutputData()
{
	uint nBytesPerSampleFrame; // 575
	int nReadAvail; // 576
	{
		uint nBytes; // 584
		CUtlMemory<audio_buffer_input_t, int>::NumAllocated(); // 1143
		CUtlMemory<audio_buffer_input_t, int>::Base(); // 112
		CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::Base(); // 368
		CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::GrowMemory(
				int num);  // 1145
		CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::AddToTail(); // 582
		CUtlMemory<audio_buffer_input_t, int>::NumAllocated(); // 1143
		CUtlMemory<audio_buffer_input_t, int>::Base(); // 112
		CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::Base(); // 368
		CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::GrowMemory(
				int num);  // 1145
		CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::AddToTail(); // 583
		CUtlMemory<audio_buffer_input_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::operator[](
				int i);  // 585
		CUtlMemory<audio_buffer_input_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::operator[](
				int i);  // 586
		CUtlMemory<audio_buffer_input_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::operator[](
				int i);  // 589
		CUtlMemory<audio_buffer_input_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::operator[](
				int i);  // 590
	}
	{
		uint nBytes; // 596
		CUtlMemory<audio_buffer_input_t, int>::Base(); // 112
		CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::Base(); // 368
		CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::GrowMemory(
				int num);  // 1145
		CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::AddToTail(); // 595
		CUtlMemory<audio_buffer_input_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::operator[](
				int i);  // 597
		CUtlMemory<audio_buffer_input_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::operator[](
				int i);  // 598
	}
	CCircularBuffer::GetReadAvailable(); // 576
	CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::RemoveAll(); // 574
	CTimeStretch::ChannelCount(); // 392
	CAudioMixerStretch::ChannelCount(); // 575
} /* size: 0, variables: 2, inline expansions: 4 (0 bytes) */

// <0263B4E4> soundsystem/time_stretch.cpp:603
// variable: 1
// function calls: 14
void CAudioMixerStretch::UpdateMixerState(audio_source_indexstate_t& state)
{
	{
		uint i; // 607
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
			int elem);  // 613
		CUtlMemory<audio_buffer_input_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::operator[](
				int i);  // 610
		CTimeStretch::ChannelCount(); // 392
		CAudioMixerStretch::ChannelCount(); // 610
		CUtlMemory<audio_buffer_input_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::operator[](
				int i);  // 611
	}
	CTimeStretch::ChannelCount(); // 392
	CAudioMixerStretch::ChannelCount(); // 616
} /* size: 0, inline expansions: 2 (0 bytes) */

// <0263B466> soundsystem/time_stretch.cpp:623
// function call: 1
void CAudioMixerStretch::SetTimeScale(float flTimeScale)
{
	CTimeStretch::SetTimeScale(
			float flTimeScale);  // 625
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0264256E> soundsystem/time_stretch.cpp:630
// function calls: 8
void CAudioMixerStretch::SetChannelSelect(vaudio_channel_index_t nChannels)
{
	CAudioMixerStretch::SetChannelSelect(
			vaudio_channel_index_t nChannels);  // 632
	CAudioMixerStretch::SetChannelSelect(
			vaudio_channel_index_t nChannels);  // 632
	CAudioMixerStretch::SetChannelSelect(
			vaudio_channel_index_t nChannels);  // 632
	CAudioMixerStretch::SetChannelSelect(
			vaudio_channel_index_t nChannels);  // 632
	CAudioMixerStretch::SetChannelSelect(
			vaudio_channel_index_t nChannels);  // 632
	CAudioMixerStretch::SetChannelSelect(
			vaudio_channel_index_t nChannels);  // 632
	CAudioMixerStretch::SetChannelSelect(
			vaudio_channel_index_t nChannels);  // 632
	CAudioMixerStretch::SetChannelSelect(
			vaudio_channel_index_t nChannels);  // 632
} /* size: 0, inline expansions: 8 (0 bytes) */

// <0263B440> soundsystem/time_stretch.cpp:630
void CAudioMixerStretch::SetChannelSelect(vaudio_channel_index_t nChannels)
{
} /* size: 0 */

// <0264232A> soundsystem/time_stretch.cpp:635
// function calls: 8
void CAudioMixerStretch::EnableLooping(bool bEnable)
{
	CAudioMixerStretch::EnableLooping(
			bool bEnable);  // 637
	CAudioMixerStretch::EnableLooping(
			bool bEnable);  // 637
	CAudioMixerStretch::EnableLooping(
			bool bEnable);  // 637
	CAudioMixerStretch::EnableLooping(
			bool bEnable);  // 637
	CAudioMixerStretch::EnableLooping(
			bool bEnable);  // 637
	CAudioMixerStretch::EnableLooping(
			bool bEnable);  // 637
	CAudioMixerStretch::EnableLooping(
			bool bEnable);  // 637
	CAudioMixerStretch::EnableLooping(
			bool bEnable);  // 637
} /* size: 0, inline expansions: 8 (0 bytes) */

// <0263B41A> soundsystem/time_stretch.cpp:635
void CAudioMixerStretch::EnableLooping(bool bEnable)
{
} /* size: 0 */

