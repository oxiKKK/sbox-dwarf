
//
// soundsystem/audio_stream.cpp
//
//	referenced by: libengine2.so
//
//	functions: 32
//	class: 1
//

// <0240FAAD> soundsystem/audio_stream.cpp:11
void CAudioResampleBuffer::BytesPerInputSample()
{
} /* size: 0 */

// <0240F567> soundsystem/audio_stream.cpp:16
void CAudioResampleBuffer::BytesPerOutputSample()
{
} /* size: 0 */

// <0240F4A3> soundsystem/audio_stream.cpp:22
// variables: 4
void CAudioResampleBuffer::CAudioResampleBuffer(int nInputChannels, uint nInputSampleRate, int nOutputChannels, uint nOutputSampleRate)
{
	{
		const SDL_AudioSpec  srcSpec; // 28
		const SDL_AudioSpec  dstSpec; // 29
	}
	{
		const SDL_AudioSpec  srcSpec; // 28
		const SDL_AudioSpec  dstSpec; // 29
	}
} /* size: 133 */

// <0240F43D> soundsystem/audio_stream.cpp:22
// variables: 2
void CAudioResampleBuffer::CAudioResampleBuffer(int nInputChannels, uint nInputSampleRate, int nOutputChannels, uint nOutputSampleRate)
{
	{
		const SDL_AudioSpec  srcSpec; // 28
		const SDL_AudioSpec  dstSpec; // 29
	}
} /* size: 0 */

// <0240F3FB> soundsystem/audio_stream.cpp:33
void CAudioResampleBuffer::~CAudioResampleBuffer()
{
} /* size: 12 */

// <0240FAD7> soundsystem/audio_stream.cpp:39
// variable: 1
// function call: 1
void CAudioResampleBuffer::WriteSampleFrames(const int16* pSamples, uint nSampleFrameCount)
{
	uint nBytesPerSampleFrame; // 41
	CAudioResampleBuffer::BytesPerInputSample(); // 41
} /* size: 30, variables: 1, inline expansions: 1 (9 bytes) */

// <0240F39F> soundsystem/audio_stream.cpp:39
// variable: 1
void CAudioResampleBuffer::WriteSampleFrames(const int16* pSamples, uint nSampleFrameCount)
{
	uint nBytesPerSampleFrame; // 41
} /* size: 0, variables: 1 */

// <0240FB6B> soundsystem/audio_stream.cpp:45
// variables: 2
// function call: 1
void CAudioResampleBuffer::SampleFramesAvailable()
{
	uint nBytesPerSampleFrame; // 47
	uint nBytesAvailable; // 48
	CAudioResampleBuffer::BytesPerInputSample(); // 47
} /* size: 44, variables: 2, inline expansions: 1 (9 bytes) */

// <0240F36B> soundsystem/audio_stream.cpp:45
// variables: 2
void CAudioResampleBuffer::SampleFramesAvailable()
{
	uint nBytesPerSampleFrame; // 47
	uint nBytesAvailable; // 48
} /* size: 0, variables: 2 */

// <0240F325> soundsystem/audio_stream.cpp:52
void CAudioResampleBuffer::BytesAvailable()
{
} /* size: 12 */

// <0240FBEB> soundsystem/audio_stream.cpp:57
// variables: 3
// function call: 1
void CAudioResampleBuffer::ReadSampleFrames(int16* pOut, uint nSampleFrameCount)
{
	uint nBytesPerSampleFrame; // 59
	uint nBytesRequested; // 60
	uint nBytesGet; // 61
	CAudioResampleBuffer::BytesPerInputSample(); // 59
} /* size: 50, variables: 3, inline expansions: 1 (9 bytes) */

// <0240F2CD> soundsystem/audio_stream.cpp:57
// variables: 3
void CAudioResampleBuffer::ReadSampleFrames(int16* pOut, uint nSampleFrameCount)
{
	uint nBytesPerSampleFrame; // 59
	uint nBytesRequested; // 60
	uint nBytesGet; // 61
} /* size: 0, variables: 3 */

// <0240FCA0> soundsystem/audio_stream.cpp:65
void CAudioResampleBuffer::Flush()
{
} /* size: 12 */

// <0240FCDD> soundsystem/audio_stream.cpp:70
void CAudioResampleBuffer::Clear()
{
} /* size: 12 */

// <02407AE7> soundsystem/audio_stream.cpp:75
// member functions: 26
// member variables: 9
// vtable entries: 8
// class size: 128
class CAudioOutputStream : public IAudioOutputStream {
public:
	/* class IAudioOutputStream <ancestor>; */ /* 0 8 */
	void CAudioOutputStream(CAudioOutputStream* , const CAudioOutputStream& );
private:
	CAudioResampleBuffer m_resampleBuffer; /* 8 24 */
	float m_flVolume; /* 32 4 */
	float m_flLastMixVolume; /* 36 4 */
	int m_nChannels; /* 40 4 */
	uint m_nSampleRate; /* 44 4 */
	bool m_bPaused; /* 48 1 */
	bool m_bHasMixed; /* 49 1 */
	CThreadMutex m_mixLock; /* 56 72 */
	/* soundsystem/audio_stream.cpp:89 */
	void CAudioOutputStream(CAudioOutputStream* , int, uint);
	/* soundsystem/audio_stream.cpp:95 */
	virtual void ~CAudioOutputStream(CAudioOutputStream* );
	/* soundsystem/audio_stream.cpp:99 */
	virtual void WriteAudioData(CAudioOutputStream* , const int16* , uint, uint);
	/* soundsystem/audio_stream.cpp:109 */
	virtual void SetVolume(CAudioOutputStream* , float);
	/* soundsystem/audio_stream.cpp:114 */
	virtual uint32 QueuedSampleCount(CAudioOutputStream* );
	/* soundsystem/audio_stream.cpp:120 */
	virtual uint32 MaxWriteSampleCount(CAudioOutputStream* );
	/* soundsystem/audio_stream.cpp:126 */
	virtual uint32 LatencySamplesCount(CAudioOutputStream* );
	/* soundsystem/audio_stream.cpp:131 */
	virtual void Pause(CAudioOutputStream* );
	/* soundsystem/audio_stream.cpp:137 */
	virtual void Resume(CAudioOutputStream* );
	/* soundsystem/audio_stream.cpp:143 */
	virtual void Clear(CAudioOutputStream* );
	/* soundsystem/audio_stream.cpp:150 */
	void ConvertSourceToFloat(CAudioOutputStream* , CAudioMixBuffer* , int16* , uint, int, int);
	/* soundsystem/audio_stream.cpp:163 */
	void MixToOutput(CAudioOutputStream* , int, CAudioMixBuffer* , float);
	void CAudioOutputStream(class CAudioOutputStream *, const class CAudioOutputStream  &); /* linkage=_ZN18CAudioOutputStreamC4ERKS_ */
	void CAudioOutputStream(class CAudioOutputStream *, int, uint); /* linkage=_ZN18CAudioOutputStreamC4Eij */
	virtual void ~CAudioOutputStream(class CAudioOutputStream *); /* linkage=_ZN18CAudioOutputStreamD4Ev */
	virtual void WriteAudioData(class CAudioOutputStream *, const int16  *, uint, uint); /* linkage=_ZN18CAudioOutputStream14WriteAudioDataEPKsjj */
	virtual void SetVolume(class CAudioOutputStream *, float); /* linkage=_ZN18CAudioOutputStream9SetVolumeEf */
	virtual uint32 QueuedSampleCount(class CAudioOutputStream *); /* linkage=_ZN18CAudioOutputStream17QueuedSampleCountEv */
	virtual uint32 MaxWriteSampleCount(class CAudioOutputStream *); /* linkage=_ZN18CAudioOutputStream19MaxWriteSampleCountEv */
	virtual uint32 LatencySamplesCount(class CAudioOutputStream *); /* linkage=_ZN18CAudioOutputStream19LatencySamplesCountEv */
	virtual void Pause(class CAudioOutputStream *); /* linkage=_ZN18CAudioOutputStream5PauseEv */
	virtual void Resume(class CAudioOutputStream *); /* linkage=_ZN18CAudioOutputStream6ResumeEv */
	virtual void Clear(class CAudioOutputStream *); /* linkage=_ZN18CAudioOutputStream5ClearEv */
	void ConvertSourceToFloat(class CAudioOutputStream *, class CAudioMixBuffer *, int16 *, uint, int, int); /* linkage=_ZN18CAudioOutputStream20ConvertSourceToFloatEP15CAudioMixBufferPsjii */
	void MixToOutput(class CAudioOutputStream *, int, class CAudioMixBuffer *, float); /* linkage=_ZN18CAudioOutputStream11MixToOutputEiP15CAudioMixBufferf */
};

// <0240F241> soundsystem/audio_stream.cpp:89
void CAudioOutputStream::CAudioOutputStream(int nChannels, uint nSampleRate)
{
} /* size: 0 */

// <0240F210> soundsystem/audio_stream.cpp:89
inline void CAudioOutputStream::CAudioOutputStream(int nChannels, uint nSampleRate)
{
} /* size: 0 */

// <0240F175> soundsystem/audio_stream.cpp:95
// function calls: 2
void CAudioOutputStream::~CAudioOutputStream()
{
	CThreadMutex::~CThreadMutex(); // 97
	CAudioResampleBuffer::~CAudioResampleBuffer(); // 97
} /* size: 50, inline expansions: 2 (18 bytes) */

// <0240F057> soundsystem/audio_stream.cpp:95
// function calls: 4
void CAudioOutputStream::~CAudioOutputStream()
{
	CThreadMutex::~CThreadMutex(); // 97
	CAudioResampleBuffer::~CAudioResampleBuffer(); // 97
	IAudioOutputStream::~IAudioOutputStream(); // 97
	CAudioOutputStream::~CAudioOutputStream(); // 97
} /* size: 63, inline expansions: 4 (47 bytes) */

// <0240F03E> soundsystem/audio_stream.cpp:95
inline void CAudioOutputStream::~CAudioOutputStream()
{
} /* size: 0 */

// <0240ED18> soundsystem/audio_stream.cpp:99
// variable: 1
// function calls: 11
void CAudioOutputStream::WriteAudioData(const int16* pData, uint nSampleCount, uint nChannels)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_101; // 101
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 101
	CAudioResampleBuffer::BytesPerInputSample(); // 41
	CAudioResampleBuffer::WriteSampleFrames(
				const int16* pSamples,
				uint nSampleFrameCount);  // 106
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 107
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 107
} /* size: 188, variables: 1, inline expansions: 11 (330 bytes) */

// <0240ECD9> soundsystem/audio_stream.cpp:109
void CAudioOutputStream::SetVolume(float flVolume)
{
} /* size: 10 */

// <0240EA99> soundsystem/audio_stream.cpp:114
// variable: 1
// function calls: 8
void CAudioOutputStream::QueuedSampleCount()
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_116; // 116
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 116
	CAudioResampleBuffer::BytesPerInputSample(); // 47
	CAudioResampleBuffer::SampleFramesAvailable(); // 117
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 118
} /* size: 135, variables: 1, inline expansions: 8 (238 bytes) */

// <0240E8D0> soundsystem/audio_stream.cpp:120
// variable: 1
// function calls: 6
void CAudioOutputStream::MaxWriteSampleCount()
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_122; // 122
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 122
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 124
} /* size: 82, variables: 1, inline expansions: 6 (153 bytes) */

// <0240E8A0> soundsystem/audio_stream.cpp:126
void CAudioOutputStream::LatencySamplesCount()
{
} /* size: 10 */

// <0240E6B6> soundsystem/audio_stream.cpp:131
// variable: 1
// function calls: 6
void CAudioOutputStream::Pause()
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_133; // 133
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 133
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 135
} /* size: 85, variables: 1, inline expansions: 6 (165 bytes) */

// <0240E4CC> soundsystem/audio_stream.cpp:137
// variable: 1
// function calls: 6
void CAudioOutputStream::Resume()
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_139; // 139
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 139
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 141
} /* size: 85, variables: 1, inline expansions: 6 (165 bytes) */

// <0240E2CA> soundsystem/audio_stream.cpp:143
// variable: 1
// function calls: 7
void CAudioOutputStream::Clear()
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_145; // 145
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 145
	CAudioResampleBuffer::Clear(); // 146
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 147
} /* size: 95, variables: 1, inline expansions: 7 (213 bytes) */

// <0240C64F> soundsystem/audio_stream.cpp:163
// variables: 12
// function calls: 113
void CAudioOutputStream::MixToOutput(int nChannels, CAudioMixBuffer* pChannelArray, float flMasterVolume)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_166; // 166
	uint nSampleFramesAvailable; // 172
	const char   __FUNCTION__; // 41114
	{
		float flVolume; // 176
		CUtlVectorFixedGrowable<short int, 1024> sampleFrames; // 183
		CUtlVectorFixedGrowable<CAudioMixBuffer, 2> mixBuffers; // 185
		{
			int i; // 195
			CUtlMemory<short int, int>::Base(); // 112
			CUtlVectorBase<short int, CUtlMemoryFixedGrowable<short int, 1024, int> >::Base(); // 197
			CUtlMemory<CAudioMixBuffer, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAudioMixBuffer, CUtlMemoryFixedGrowable<CAudioMixBuffer, 2, int> >::operator[](
					int i);  // 197
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 42
			audio_source_input_t::InitPackets(
					const audio_buffer_input_t* pPacketsIn,
					int nPacketCountIn,
					int nSamplingRate,
					vaudio_sampleformats_t nSampleFormat,
					int nChannelsPerSample);  // 156
			audio_source_indexstate_t::Clear(); // 159
			CAudioOutputStream::ConvertSourceToFloat(
						CAudioMixBuffer* pOut,
						int16* pSamples,
						uint nSampleFrameCount,
						int nChannel,
						int nChannelCount);  // 197
		}
		{
			int i; // 199
			{
				int nInputChannel; // 209
				float flScale; // 211
				CUtlMemory<CAudioMixBuffer, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CAudioMixBuffer, CUtlMemoryFixedGrowable<CAudioMixBuffer, 2, int> >::operator[](
						int i);  // 212
			}
			{
				float flScale; // 217
				CUtlMemory<CAudioMixBuffer, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CAudioMixBuffer, CUtlMemoryFixedGrowable<CAudioMixBuffer, 2, int> >::operator[](
						int i);  // 218
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 222
			}
			CUtlMemory<CAudioMixBuffer, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAudioMixBuffer, CUtlMemoryFixedGrowable<CAudioMixBuffer, 2, int> >::operator[](
					int i);  // 204
		}
		CUtlMemory<short int, int>::CUtlMemory(
				short int* pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 197
		CUtlMemory<short int, int>::EnsureCapacity(
				int num);  // 199
		CUtlMemoryFixedGrowable_Base<short int, int>::CUtlMemoryFixedGrowable_Base(
						short int* pFixedMemory,
						int nFixedElements,
						int nGrowSize,
						int nInitAllocationCount);  // 228
		AlignedByteArrayExplicit_t<1024, short int, 2>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<1024, short int>::AlignedByteArray_t(); // 228
		AlignedByteArrayExplicit_t<1024, short int, 2>::Base(); // 231
		CUtlMemoryFixedGrowable<short int, 1024, int>::CUtlMemoryFixedGrowable(
					int nGrowSize,
					int nInitSize);  // 527
		CUtlVectorBase<short int, CUtlMemoryFixedGrowable<short int, 1024, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<short int, CUtlMemoryFixedGrowable<short int, 1024, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 484
		CUtlVectorFixedGrowable<short int, 1024>::CUtlVectorFixedGrowable(
					int growSize);  // 183
		CUtlVectorBase<short int, CUtlMemoryFixedGrowable<short int, 1024, int> >::RemoveMultipleFromTail(
					int num);  // 1323
		CUtlMemory<short int, int>::IsExternallyAllocated(); // 859
		CUtlMemory<short int, int>::IsExternallyAllocated(); // 861
		CUtlMemory<short int, int>::Grow(
			int num);  // 806
		CUtlVectorBase<short int, CUtlMemoryFixedGrowable<short int, 1024, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<short int, CUtlMemoryFixedGrowable<short int, 1024, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<short int, CUtlMemoryFixedGrowable<short int, 1024, int> >::GrowVector(
				int num);  // 1445
		CUtlVectorBase<short int, CUtlMemoryFixedGrowable<short int, 1024, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<short int, CUtlMemoryFixedGrowable<short int, 1024, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<short int, CUtlMemoryFixedGrowable<short int, 1024, int> >::AddMultipleToTail(
					int num);  // 1319
		CUtlVectorBase<short int, CUtlMemoryFixedGrowable<short int, 1024, int> >::SetCount(
			int count);  // 184
		CUtlMemory<CAudioMixBuffer, int>::CUtlMemory(
				CAudioMixBuffer* pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 197
		CUtlMemory<CAudioMixBuffer, int>::EnsureCapacity(
				int num);  // 199
		CUtlMemoryFixedGrowable_Base<CAudioMixBuffer, int>::CUtlMemoryFixedGrowable_Base(
						CAudioMixBuffer* pFixedMemory,
						int nFixedElements,
						int nGrowSize,
						int nInitAllocationCount);  // 228
		AlignedByteArrayExplicit_t<2, CAudioMixBuffer, 16>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<2, CAudioMixBuffer>::AlignedByteArray_t(); // 228
		AlignedByteArrayExplicit_t<2, CAudioMixBuffer, 16>::Base(); // 231
		CUtlMemoryFixedGrowable<CAudioMixBuffer, 2, int>::CUtlMemoryFixedGrowable(
					int nGrowSize,
					int nInitSize);  // 527
		CUtlVectorBase<CAudioMixBuffer, CUtlMemoryFixedGrowable<CAudioMixBuffer, 2, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CAudioMixBuffer, CUtlMemoryFixedGrowable<CAudioMixBuffer, 2, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 484
		CUtlVectorFixedGrowable<CAudioMixBuffer, 2>::CUtlVectorFixedGrowable(
					int growSize);  // 185
		CUtlVectorBase<CAudioMixBuffer, CUtlMemoryFixedGrowable<CAudioMixBuffer, 2, int> >::RemoveMultipleFromTail(
					int num);  // 1323
		CUtlMemory<CAudioMixBuffer, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CAudioMixBuffer, int>::IsExternallyAllocated(); // 861
		CUtlMemory<CAudioMixBuffer, int>::Grow(
			int num);  // 806
		CUtlVectorBase<CAudioMixBuffer, CUtlMemoryFixedGrowable<CAudioMixBuffer, 2, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CAudioMixBuffer, CUtlMemoryFixedGrowable<CAudioMixBuffer, 2, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<CAudioMixBuffer, CUtlMemoryFixedGrowable<CAudioMixBuffer, 2, int> >::GrowVector(
				int num);  // 1445
		CUtlVectorBase<CAudioMixBuffer, CUtlMemoryFixedGrowable<CAudioMixBuffer, 2, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<CAudioMixBuffer, CUtlMemoryFixedGrowable<CAudioMixBuffer, 2, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<CAudioMixBuffer, CUtlMemoryFixedGrowable<CAudioMixBuffer, 2, int> >::AddMultipleToTail(
					int num);  // 1319
		CUtlVectorBase<CAudioMixBuffer, CUtlMemoryFixedGrowable<CAudioMixBuffer, 2, int> >::SetCount(
			int count);  // 186
		CAudioResampleBuffer::BytesPerInputSample(); // 59
		CAudioResampleBuffer::ReadSampleFrames(
				int16* pOut,
				uint nSampleFrameCount);  // 194
		CUtlMemory<short int, int>::Base(); // 112
		CUtlVectorBase<short int, CUtlMemoryFixedGrowable<short int, 1024, int> >::Base(); // 194
		CUtlMemory<CAudioMixBuffer, int>::IsExternallyAllocated(); // 577
		CUtlMemory<CAudioMixBuffer, int>::ConvertToExternalMemory(
					CAudioMixBuffer* pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<CAudioMixBuffer, int>::Purge_FixedGrowable(
					CAudioMixBuffer* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<CAudioMixBuffer, int>::Purge_FixedGrowable(
					CAudioMixBuffer* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		AlignedByteArrayExplicit_t<2, CAudioMixBuffer, 16>::Base(); // 237
		CUtlMemoryFixedGrowable<CAudioMixBuffer, 2, int>::Purge(
			int numElements);  // 1799
		CUtlVectorBase<CAudioMixBuffer, CUtlMemoryFixedGrowable<CAudioMixBuffer, 2, int> >::RemoveAll(); // 1798
		CUtlMemory<CAudioMixBuffer, int>::Base(); // 112
		CUtlVectorBase<CAudioMixBuffer, CUtlMemoryFixedGrowable<CAudioMixBuffer, 2, int> >::Base(); // 368
		CUtlVectorBase<CAudioMixBuffer, CUtlMemoryFixedGrowable<CAudioMixBuffer, 2, int> >::ResetDbgInfo(); // 1800
		CUtlVectorBase<CAudioMixBuffer, CUtlMemoryFixedGrowable<CAudioMixBuffer, 2, int> >::Purge(); // 560
		ValidateAlignment<CAudioMixBuffer>(void); // 508
		CUtlMemory<CAudioMixBuffer, int>::Purge(); // 903
		CUtlMemory<CAudioMixBuffer, int>::Purge(); // 510
		CUtlMemory<CAudioMixBuffer, int>::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<CAudioMixBuffer, int>::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<CAudioMixBuffer, 2, int>::~CUtlMemoryFixedGrowable(); // 562
		CUtlVectorBase<CAudioMixBuffer, CUtlMemoryFixedGrowable<CAudioMixBuffer, 2, int> >::~CUtlVectorBase(); // 478
		CUtlVectorFixedGrowable<CAudioMixBuffer, 2>::~CUtlVectorFixedGrowable(); // 227
		CUtlVectorBase<short int, CUtlMemoryFixedGrowable<short int, 1024, int> >::RemoveAll(); // 1798
		AlignedByteArrayExplicit_t<1024, short int, 2>::Base(); // 237
		CUtlMemory<short int, int>::IsExternallyAllocated(); // 577
		CUtlMemory<short int, int>::ConvertToExternalMemory(
					short int* pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<short int, int>::Purge_FixedGrowable(
					short int* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<short int, int>::Purge_FixedGrowable(
					short int* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		CUtlMemoryFixedGrowable<short int, 1024, int>::Purge(
			int numElements);  // 1799
		CUtlMemory<short int, int>::Base(); // 112
		CUtlVectorBase<short int, CUtlMemoryFixedGrowable<short int, 1024, int> >::Base(); // 368
		CUtlVectorBase<short int, CUtlMemoryFixedGrowable<short int, 1024, int> >::ResetDbgInfo(); // 1800
		CUtlVectorBase<short int, CUtlMemoryFixedGrowable<short int, 1024, int> >::Purge(); // 560
		ValidateAlignment<short int>(void); // 508
		CUtlMemory<short int, int>::Purge(); // 903
		CUtlMemory<short int, int>::Purge(); // 510
		CUtlMemory<short int, int>::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<short int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<short int, 1024, int>::~CUtlMemoryFixedGrowable(); // 562
		CUtlVectorBase<short int, CUtlMemoryFixedGrowable<short int, 1024, int> >::~CUtlVectorBase(); // 478
		CUtlVectorFixedGrowable<short int, 1024>::~CUtlVectorFixedGrowable(); // 227
		CAudioResampleBuffer::Flush(); // 190
		CAudioResampleBuffer::BytesPerInputSample(); // 47
		CAudioResampleBuffer::SampleFramesAvailable(); // 191
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 166
	CAudioResampleBuffer::BytesPerInputSample(); // 47
	CAudioResampleBuffer::SampleFramesAvailable(); // 172
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 228
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 228
} /* size: 0, variables: 3, inline expansions: 11 (0 bytes) */

// <0240C323> soundsystem/audio_stream.cpp:235
// variables: 2
// function calls: 10
void AudioStreamMix(uint nChannelCount, CAudioMixBuffer* pChannelArray, float flMasterVolume)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_237; // 237
	{
		int i; // 240
		CUtlMemory<CAudioOutputStream::operator[](
				int i);  // 588
		CUtlVectorBase<CAudioOutputStream::operator[](
				int i);  // 242
		CUtlVectorBase<CAudioOutputStream::Count(); // 240
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 237
	CUtlVectorBase<CAudioOutputStream::Count(); // 238
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 245
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <0240BBF4> soundsystem/audio_stream.cpp:247
// variables: 6
// function calls: 23
IAudioOutputStream* AudioStreamCreate(uint nSampleRate, uint nChannels, uint nBits)
{
	const char   __FUNCTION__; // 41135
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_252; // 252
	CAudioOutputStream* pNewStream; // 253
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 249
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 252
	{
		const SDL_AudioSpec  srcSpec; // 28
		const SDL_AudioSpec  dstSpec; // 29
	}
	CAudioResampleBuffer::CAudioResampleBuffer(
				int nInputChannels,
				uint nInputSampleRate,
				int nOutputChannels,
				uint nOutputSampleRate);  // 91
	IAudioOutputStream::IAudioOutputStream(); // 91
	CThreadMutex::CThreadMutex(
			const char* pName);  // 91
	CAudioOutputStream::CAudioOutputStream(
				int nChannels,
				uint nSampleRate);  // 253
	CUtlMemory<CAudioOutputStream::NumAllocated(); // 1196
	CUtlMemory<CAudioOutputStream::Base(); // 112
	CUtlVectorBase<CAudioOutputStream::Base(); // 368
	CUtlVectorBase<CAudioOutputStream::ResetDbgInfo(); // 824
	CUtlMemory<CAudioOutputStream::IsGrowable(); // 823
	CUtlMemory<CAudioOutputStream::IsExternallyAllocated(); // 859
	CUtlMemory<CAudioOutputStream::IsExternallyAllocated(); // 861
	CUtlMemory<CAudioOutputStream::Grow(
		int num);  // 806
	CUtlVectorBase<CAudioOutputStream::GrowMemory(
			int num);  // 1198
	CUtlMemory<CAudioOutputStream::operator[](
			int i);  // 602
	CUtlVectorBase<CAudioOutputStream::Element(
		int i);  // 1201
	CopyConstruct<CAudioOutputStream*>(CAudioOutputStream** pMemory,
						CAudioOutputStream* const& src);  // 1201
	CUtlVectorBase<CAudioOutputStream::AddToTail(
			CAudioOutputStream* const& src);  // 254
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 257
} /* size: 0, variables: 3, inline expansions: 23 (1460 bytes) */

// <0240B5B3> soundsystem/audio_stream.cpp:259
// variables: 5
// function calls: 24
void AudioStreamDestroy(IAudioOutputStream* pStream)
{
	const char   __FUNCTION__; // 41156
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_263; // 263
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 261
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 263
	{
		int i; // 1531
		CUtlVectorBase<CAudioOutputStream::Count(); // 1531
		CUtlMemory<CAudioOutputStream::operator[](
				int i);  // 609
		CUtlVectorBase<CAudioOutputStream::Element(
			int i);  // 1533
	}
	CUtlVectorBase<CAudioOutputStream::Find(
		CAudioOutputStream* const& src);  // 1629
	CUtlMemory<CAudioOutputStream::operator[](
			int i);  // 602
	CUtlVectorBase<CAudioOutputStream::Element(
		int i);  // 1575
	Destruct<CAudioOutputStream*>(CAudioOutputStream** pMemory); // 1575
	{
		const bool  bNotLast; // 1578
		CUtlMemory<CAudioOutputStream::operator[](
				int i);  // 602
		CUtlVectorBase<CAudioOutputStream::Element(
			int i);  // 1584
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 1584
	}
	CUtlVectorBase<CAudioOutputStream::FastRemove(
			int elem);  // 1632
	CUtlVectorBase<CAudioOutputStream::FindAndFastRemove(
				CAudioOutputStream* const& src);  // 265
	CThreadMutex::~CThreadMutex(); // 97
	CAudioResampleBuffer::~CAudioResampleBuffer(); // 97
	IAudioOutputStream::~IAudioOutputStream(); // 97
	CAudioOutputStream::~CAudioOutputStream(); // 97
	CAudioOutputStream::~CAudioOutputStream(); // 266
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 268
} /* size: 0, variables: 2, inline expansions: 17 (600 bytes) */

// <0240B122> soundsystem/audio_stream.cpp:270
// variables: 5
// function calls: 17
void AudioStreamShutdown(void)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_272; // 272
	{
		CAudioOutputStream* pStream; // 273
		CUtlVector<CAudioOutputStream*, CUtlMemory<CAudioOutputStream*, int> >& __for_range; // 19913
		iterator __for_begin; // 6153
		iterator __for_end; // 6153
		CUtlMemory<CAudioOutputStream::Base(); // 112
		CUtlVectorBase<CAudioOutputStream::Base(); // 102
		CUtlVectorBase<CAudioOutputStream::begin(); // 273
		CUtlVectorBase<CAudioOutputStream::Count(); // 104
		CUtlVectorBase<CAudioOutputStream::end(); // 273
		CThreadMutex::~CThreadMutex(); // 97
		CAudioResampleBuffer::~CAudioResampleBuffer(); // 97
		IAudioOutputStream::~IAudioOutputStream(); // 97
		CAudioOutputStream::~CAudioOutputStream(); // 97
		CAudioOutputStream::~CAudioOutputStream(); // 276
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 272
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 279
	CUtlVectorBase<CAudioOutputStream::RemoveAll(); // 278
} /* size: 405, variables: 1, inline expansions: 7 (392 bytes) */

