
//
// soundsystem/smbpitchshift.cpp
//
//	referenced by: libengine2.so
//
//	functions: 8
//	class: 1
//

// <026B1245> soundsystem/smbpitchshift.cpp:48
// member functions: 10
// member variables: 13
// class size: 304
class CFFTAdapter {
private:
	CFFTPlan m_forward; /* 0 12 */
	CFFTPlan m_inverse; /* 12 12 */
	int m_nFrameSize; /* 24 4 */
	CUtlVector<float, CUtlMemory<float, int> > m_flSignal; /* 32 32 */
	CUtlVector<float, CUtlMemory<float, int> > m_complexSpectrum; /* 64 32 */
	float m_flInverseScale; /* 96 4 */
	CUtlVector<float, CUtlMemory<float, int> > m_InFIFO; /* 104 32 */
	CUtlVector<float, CUtlMemory<float, int> > m_OutFIFO; /* 136 32 */
	CUtlVector<float, CUtlMemory<float, int> > m_LastPhase; /* 168 32 */
	CUtlVector<float, CUtlMemory<float, int> > m_SumPhase; /* 200 32 */
	CUtlVector<float, CUtlMemory<float, int> > m_OutputAccum; /* 232 32 */
	CUtlVector<float, CUtlMemory<float, int> > m_flWindow; /* 264 32 */
	uint m_Rover; /* 296 4 */
	/* soundsystem/smbpitchshift.cpp:66 */
	void CFFTAdapter(CFFTAdapter* , int);
	/* soundsystem/smbpitchshift.cpp:96 */
	void TransformSignalToSpectrum(CFFTAdapter* , const float* , float* );
	/* soundsystem/smbpitchshift.cpp:101 */
	void TransformSpectrumToSignal(CFFTAdapter* , const float* , float* );
	/* soundsystem/smbpitchshift.cpp:106 */
	void smbPitchShift(CFFTAdapter* , float, uint, uint, int, float, const float* , float* );
	/* soundsystem/smbpitchshift.cpp:246 */
	void ProcessShift(CFFTAdapter* , float* , const float* , uint, float, float, int);
	void CFFTAdapter(class CFFTAdapter *, int); /* linkage=_ZN11CFFTAdapterC4Ei */
	void TransformSignalToSpectrum(class CFFTAdapter *, const float  *, float *); /* linkage=_ZN11CFFTAdapter25TransformSignalToSpectrumEPKfPf */
	void TransformSpectrumToSignal(class CFFTAdapter *, const float  *, float *); /* linkage=_ZN11CFFTAdapter25TransformSpectrumToSignalEPKfPf */
	void smbPitchShift(class CFFTAdapter *, float, uint, uint, int, float, const float  *, float *); /* linkage=_ZN11CFFTAdapter13smbPitchShiftEfjjifPKfPf */
	void ProcessShift(class CFFTAdapter *, float *, const float  *, uint, float, float, int); /* linkage=_ZN11CFFTAdapter12ProcessShiftEPfPKfjffi */
};

// <026B782F> soundsystem/smbpitchshift.cpp:66
// variables: 4
// function calls: 85
void CFFTAdapter::CFFTAdapter(int nFrameSize)
{
	{
		int nHalf; // 72
		{
			int i; // 90
		}
	}
	{
		int nHalf; // 72
		CUtlMemory<float, int>::AllocSize(); // 1867
		CUtlVectorBase<float, CUtlMemory<float, int> >::AllocSize(); // 77
		CUtlMemory<float, int>::Base(); // 112
		CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 77
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 77
		CUtlMemory<float, int>::AllocSize(); // 1867
		CUtlVectorBase<float, CUtlMemory<float, int> >::AllocSize(); // 78
		CUtlMemory<float, int>::Base(); // 112
		CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 78
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 78
		CUtlMemory<float, int>::AllocSize(); // 1867
		CUtlVectorBase<float, CUtlMemory<float, int> >::AllocSize(); // 79
		CUtlMemory<float, int>::Base(); // 112
		CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 79
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 79
		CUtlMemory<float, int>::AllocSize(); // 1867
		CUtlVectorBase<float, CUtlMemory<float, int> >::AllocSize(); // 80
		CUtlMemory<float, int>::Base(); // 112
		CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 80
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 80
		CUtlMemory<float, int>::AllocSize(); // 1867
		CUtlVectorBase<float, CUtlMemory<float, int> >::AllocSize(); // 81
		CUtlMemory<float, int>::Base(); // 112
		CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 81
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 81
		CUtlMemory<float, int>::AllocSize(); // 1867
		CUtlVectorBase<float, CUtlMemory<float, int> >::AllocSize(); // 82
		CUtlMemory<float, int>::Base(); // 112
		CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 82
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 82
		CUtlMemory<float, int>::AllocSize(); // 1867
		CUtlVectorBase<float, CUtlMemory<float, int> >::AllocSize(); // 83
		CUtlMemory<float, int>::Base(); // 112
		CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 83
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 83
		{
			int i; // 90
			CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 90
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
					int i);  // 92
		}
	}
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 66
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 66
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 66
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 66
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 66
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 66
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 66
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 66
} /* size: 802, inline expansions: 40 (826 bytes) */

// <026B77EF> soundsystem/smbpitchshift.cpp:66
// variables: 2
inline void CFFTAdapter::CFFTAdapter(int nFrameSize)
{
	{
		int nHalf; // 72
		{
			int i; // 90
		}
	}
} /* size: 0 */

// <026B77BE> soundsystem/smbpitchshift.cpp:96
inline void CFFTAdapter::TransformSignalToSpectrum(const float* pSignalIn, float* pSpectrumOut)
{
} /* size: 0 */

// <026B56B3> soundsystem/smbpitchshift.cpp:106
// variables: 30
// function calls: 131
void CFFTAdapter::smbPitchShift(float pitchShift, uint numSampsToProcess, uint fftFrameSize, int osamp, float sampleRate, const float* indata, float* outdata)
{
	uint fftFrameSize2; // 109
	uint stepSize; // 110
	float ooFrameSize; // 111
	float freqPerBin; // 112
	float expct; // 113
	uint inFifoLatency; // 114
	{
		uint i; // 119
		{
			CUtlVectorFixedGrowable<float, 1088> flSynFreq; // 141
			CUtlVectorFixedGrowable<float, 1088> flSynMagn; // 142
			float flScale; // 230
			{
				uint k; // 132
				CUtlMemory<float, int>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
						int i);  // 134
				CUtlMemory<float, int>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
						int i);  // 134
				CUtlMemory<float, int>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
						int i);  // 134
			}
			{
				float flSampFactor; // 149
				{
					uint k; // 151
					{
						float real; // 154
						float imag; // 155
						float magn; // 158
						float phase; // 159
						float tmp; // 162
						int qpd; // 169
						uint index; // 181
						CUtlMemory<float, int>::operator[](
								int i);  // 588
						CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
								int i);  // 154
						CUtlMemory<float, int>::operator[](
								int i);  // 588
						CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
								int i);  // 155
						CUtlMemory<float, int>::operator[](
								int i);  // 588
						CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
								int i);  // 162
						CUtlMemory<float, int>::operator[](
								int i);  // 588
						CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 1088, int> >::operator[](
								int i);  // 184
						CUtlMemory<float, int>::operator[](
								int i);  // 588
						CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 1088, int> >::operator[](
								int i);  // 185
					}
				}
				CUtlMemory<float, int>::AllocSize(); // 1867
				CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 1088, int> >::AllocSize(); // 146
				CUtlMemory<float, int>::Base(); // 112
				CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 1088, int> >::Base(); // 146
				memset(void* __dest,
					int __ch,
					size_t __len);  // 67
				V_memset(void* dest,
					int fill,
					size_t count);  // 146
				CUtlMemory<float, int>::AllocSize(); // 1867
				CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 1088, int> >::AllocSize(); // 147
				CUtlMemory<float, int>::Base(); // 112
				CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 1088, int> >::Base(); // 147
				memset(void* __dest,
					int __ch,
					size_t __len);  // 67
				V_memset(void* dest,
					int fill,
					size_t count);  // 147
			}
			{
				float flOSampFactor; // 193
				float oofreqPerBin; // 194
				{
					uint k; // 195
					{
						float magn; // 198
						float flFreq; // 199
						float flPhase; // 215
						CUtlMemory<float, int>::operator[](
								int i);  // 588
						CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 1088, int> >::operator[](
								int i);  // 198
						CUtlMemory<float, int>::operator[](
								int i);  // 588
						CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 1088, int> >::operator[](
								int i);  // 199
						CUtlMemory<float, int>::operator[](
								int i);  // 588
						CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
								int i);  // 214
						CUtlMemory<float, int>::operator[](
								int i);  // 588
						CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
								int i);  // 215
						CUtlMemory<float, int>::operator[](
								int i);  // 588
						CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
								int i);  // 218
						CUtlMemory<float, int>::operator[](
								int i);  // 588
						CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
								int i);  // 219
					}
				}
			}
			{
				uint k; // 224
				CUtlMemory<float, int>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
						int i);  // 224
			}
			{
				uint k; // 231
				CUtlMemory<float, int>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
						int i);  // 233
				CUtlMemory<float, int>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
						int i);  // 233
				CUtlMemory<float, int>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
						int i);  // 233
			}
			{
				uint k; // 235
				CUtlMemory<float, int>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
						int i);  // 235
				CUtlMemory<float, int>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
						int i);  // 235
			}
			{
				uint k; // 241
				CUtlMemory<float, int>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
						int i);  // 241
				CUtlMemory<float, int>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
						int i);  // 241
			}
			CUtlMemory<float, int>::Base(); // 112
			CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 139
			CUtlMemory<float, int>::Base(); // 112
			CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 139
			CFFTAdapter::TransformSignalToSpectrum(
							const float* pSignalIn,
							float* pSpectrumOut);  // 139
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
			AlignedByteArrayExplicit_t<1088, float, 4>::AlignedByteArrayExplicit_t(); // 1597
			AlignedByteArray_t<1088, float>::AlignedByteArray_t(); // 228
			AlignedByteArrayExplicit_t<1088, float, 4>::Base(); // 231
			CUtlMemoryFixedGrowable<float, 1088, int>::CUtlMemoryFixedGrowable(
						int nGrowSize,
						int nInitSize);  // 527
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 1088, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 1088, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 484
			CUtlVectorFixedGrowable<float, 1088>::CUtlVectorFixedGrowable(
						int growSize);  // 141
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
			AlignedByteArrayExplicit_t<1088, float, 4>::AlignedByteArrayExplicit_t(); // 1597
			AlignedByteArray_t<1088, float>::AlignedByteArray_t(); // 228
			AlignedByteArrayExplicit_t<1088, float, 4>::Base(); // 231
			CUtlMemoryFixedGrowable<float, 1088, int>::CUtlMemoryFixedGrowable(
						int nGrowSize,
						int nInitSize);  // 527
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 1088, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 1088, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 484
			CUtlVectorFixedGrowable<float, 1088>::CUtlVectorFixedGrowable(
						int growSize);  // 142
			CUtlMemory<float, int>::Base(); // 112
			CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 227
			CUtlMemory<float, int>::Base(); // 112
			CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 227
			CFFTAdapter::TransformSpectrumToSignal(
							const float* pSpectrumIn,
							float* pSignalOut);  // 227
			CUtlMemory<float, int>::Base(); // 112
			CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 238
			memmove(void* __dest,
				const void* __src,
				size_t __len);  // 238
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 1088, int> >::RemoveAll(); // 1798
			AlignedByteArrayExplicit_t<1088, float, 4>::Base(); // 237
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
			CUtlMemoryFixedGrowable<float, 1088, int>::Purge(
				int numElements);  // 1799
			CUtlMemory<float, int>::Base(); // 112
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 1088, int> >::Base(); // 368
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 1088, int> >::ResetDbgInfo(); // 1800
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 1088, int> >::Purge(); // 560
			ValidateAlignment<float>(void); // 508
			CUtlMemory<float, int>::Purge(); // 903
			CUtlMemory<float, int>::Purge(); // 510
			CUtlMemory<float, int>::~CUtlMemory(); // 191
			CUtlMemoryFixedGrowable_Base<float, int>::~CUtlMemoryFixedGrowable_Base(); // 223
			CUtlMemoryFixedGrowable<float, 1088, int>::~CUtlMemoryFixedGrowable(); // 562
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 1088, int> >::~CUtlVectorBase(); // 478
			CUtlVectorFixedGrowable<float, 1088>::~CUtlVectorFixedGrowable(); // 242
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 1088, int> >::RemoveAll(); // 1798
			AlignedByteArrayExplicit_t<1088, float, 4>::Base(); // 237
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
			CUtlMemoryFixedGrowable<float, 1088, int>::Purge(
				int numElements);  // 1799
			CUtlMemory<float, int>::Base(); // 112
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 1088, int> >::Base(); // 368
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 1088, int> >::ResetDbgInfo(); // 1800
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 1088, int> >::Purge(); // 560
			ValidateAlignment<float>(void); // 508
			CUtlMemory<float, int>::Purge(); // 903
			CUtlMemory<float, int>::Purge(); // 510
			CUtlMemory<float, int>::~CUtlMemory(); // 191
			CUtlMemoryFixedGrowable_Base<float, int>::~CUtlMemoryFixedGrowable_Base(); // 223
			CUtlMemoryFixedGrowable<float, 1088, int>::~CUtlMemoryFixedGrowable(); // 562
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 1088, int> >::~CUtlVectorBase(); // 478
			CUtlVectorFixedGrowable<float, 1088>::~CUtlVectorFixedGrowable(); // 242
		}
		CUtlMemory<float, int>::operator[](
				int i);  // 588
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 122
		CUtlMemory<float, int>::operator[](
				int i);  // 588
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 123
	}
} /* size: 2112, variables: 6 */

// <026B5646> soundsystem/smbpitchshift.cpp:246
// variable: 1
inline void CFFTAdapter::ProcessShift(float* pOutput, const float* pInput, uint nSampleCount, float flSampleRate, float flPitchShift, int nQuality)
{
	int nOversampleFactor; // 248
} /* size: 0, variables: 1 */

// <026B550E> soundsystem/smbpitchshift.cpp:253
// variables: 4
// function call: 1
void CPitchShiftFFT::CPitchShiftFFT(int nQuality)
{
	{
		const int   nFrameSizesForQualityLevel; // 260
		int nFrameSize; // 261
	}
	{
		const int   nFrameSizesForQualityLevel; // 260
		int nFrameSize; // 261
		clamp<int, int>(const int& val,
				const int& minVal,
				const int& maxVal);  // 256
	}
} /* size: 160 */

// <026B54B5> soundsystem/smbpitchshift.cpp:253
// variables: 2
void CPitchShiftFFT::CPitchShiftFFT(int nQuality)
{
	{
		const int   nFrameSizesForQualityLevel; // 260
		int nFrameSize; // 261
	}
} /* size: 0 */

// <026B535D> soundsystem/smbpitchshift.cpp:266
// function call: 1
void CPitchShiftFFT::ProcessShift(float* pOutput, const float* pInput, uint nSampleCount, float flSampleRate, float flPitchShift)
{
	CFFTAdapter::ProcessShift(
			float* pOutput,
			const float* pInput,
			uint nSampleCount,
			float flSampleRate,
			float flPitchShift,
			int nQuality);  // 268
} /* size: 37, inline expansions: 1 (19 bytes) */

