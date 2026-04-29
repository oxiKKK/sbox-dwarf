
//
// soundsystem/audio_stream_managed.cpp
//
//	referenced by: libengine2.so
//
//	functions: 23
//

// <02427ECC> soundsystem/audio_stream_managed.cpp:8
// variables: 2
// function calls: 30
void CAudioStreamManaged::CAudioStreamManaged(int nChannels, uint nSampleRate)
{
	{
		{
			CFmtStr name; // 19
			{
			}
			{
			}
			{
			}
			{
			}
			{
			}
		}
	}
	{
		CUtlMemory<short int, int>::ValidateGrowSize(); // 475
		CUtlMemory<short int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<short int, CUtlMemory<short int, int> >::CUtlVector(); // 26
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::RemoveMultipleFromTail(
					int num);  // 1323
		CUtlMemory<short int, int>::IsExternallyAllocated(); // 859
		CUtlMemory<short int, int>::IsExternallyAllocated(); // 861
		CUtlMemory<short int, int>::Grow(
			int num);  // 806
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
			int count);  // 28
		CAudioOutputBuffers::CAudioOutputBuffers(
					int nBlockSize,
					int nBlockCount);  // 8
		CAudioSource::CAudioSource(); // 8
		CThreadMutex::CThreadMutex(
				const char* pName);  // 8
		CUtlString::CUtlString(); // 8
		CManagedHandle::CManagedHandle(); // 8
		{
			CFmtStr name; // 19
			{
			}
			{
			}
			{
			}
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 80
			CFmtStrN<256>::Get(); // 20
			CUtlString::operator=(
					const char* src);  // 20
			CUtlString::Get(); // 22
			{
			}
			{
			}
			CBufferString::~CBufferString(); // 587
			CBufferStringN<256>::~CBufferStringN(); // 41
			CFmtStrN<256>::~CFmtStrN(); // 30
		}
	}
} /* size: 0 */

// <02427DF9> soundsystem/audio_stream_managed.cpp:8
// variables: 7
void CAudioStreamManaged::CAudioStreamManaged(int nChannels, uint nSampleRate)
{
	const char   __FUNCTION__; // 25729
	{
		CFmtStr name; // 19
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 10
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 11
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 12
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 25
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 26
		}
	}
} /* size: 0, variables: 1 */

// <02427A8A> soundsystem/audio_stream_managed.cpp:32
// function calls: 14
void CAudioStreamManaged::~CAudioStreamManaged()
{
	{
		{
		}
	}
	{
		{
		}
		CManagedHandle::~CManagedHandle(); // 46
		CThreadMutex::~CThreadMutex(); // 46
		CUtlString::~CUtlString(); // 46
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::RemoveAll(); // 1798
		CUtlMemory<short int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<short int, int>::Purge(); // 903
		CUtlMemory<short int, int>::Purge(); // 1799
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::Purge(); // 560
		ValidateAlignment<short int>(void); // 508
		CUtlMemory<short int, int>::Purge(); // 510
		CUtlMemory<short int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<short int, CUtlMemory<short int, int> >::~CUtlVector(); // 17
		CAudioOutputBuffers::~CAudioOutputBuffers(); // 46
	}
} /* size: 0 */

// <02427A24> soundsystem/audio_stream_managed.cpp:32
void CAudioStreamManaged::~CAudioStreamManaged()
{
} /* size: 36 */

// <024279E7> soundsystem/audio_stream_managed.cpp:32
// variables: 2
void CAudioStreamManaged::~CAudioStreamManaged()
{
	const char   __FUNCTION__; // 25756
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 36
	}
} /* size: 0, variables: 1 */

// <02427675> soundsystem/audio_stream_managed.cpp:51
// variable: 1
// function calls: 10
void CAudioStreamManaged::WriteAudioData(const int16* pData, uint nSampleCount, uint nChannels)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_53; // 53
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 55
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
			int nLineNumber);  // 53
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 62
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 62
} /* size: 0, variables: 1, inline expansions: 9 (339 bytes) */

// <02427498> soundsystem/audio_stream_managed.cpp:64
// variable: 1
// function calls: 6
void CAudioStreamManaged::QueuedSampleCount()
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_66; // 66
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 66
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 68
} /* size: 133, variables: 1, inline expansions: 6 (246 bytes) */

// <024272D3> soundsystem/audio_stream_managed.cpp:70
// variable: 1
// function calls: 6
void CAudioStreamManaged::MaxWriteSampleCount()
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_72; // 72
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 72
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 74
} /* size: 91, variables: 1, inline expansions: 6 (189 bytes) */

// <024272A5> soundsystem/audio_stream_managed.cpp:76
void CAudioStreamManaged::LatencySamplesCount()
{
} /* size: 10 */

// <024270C1> soundsystem/audio_stream_managed.cpp:81
// variable: 1
// function calls: 6
void CAudioStreamManaged::Pause()
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_83; // 83
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 83
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 85
} /* size: 99, variables: 1, inline expansions: 6 (207 bytes) */

// <02426EDD> soundsystem/audio_stream_managed.cpp:87
// variable: 1
// function calls: 6
void CAudioStreamManaged::Resume()
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_89; // 89
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 89
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 91
} /* size: 99, variables: 1, inline expansions: 6 (207 bytes) */

// <02426CFD> soundsystem/audio_stream_managed.cpp:93
// variable: 1
// function calls: 6
void CAudioStreamManaged::Clear()
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_95; // 95
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 95
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 97
} /* size: 117, variables: 1, inline expansions: 6 (270 bytes) */

// <02426B19> soundsystem/audio_stream_managed.cpp:99
// variable: 1
// function calls: 6
void CAudioStreamManaged::Close()
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
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 103
} /* size: 99, variables: 1, inline expansions: 6 (207 bytes) */

// <02426AB3> soundsystem/audio_stream_managed.cpp:105
void CAudioStreamManaged::GetOutputData(void** pData, int samplePosition, int sampleCount, char* copyBuf)
{
} /* size: 10 */

// <024269F9> soundsystem/audio_stream_managed.cpp:111
// variable: 1
// function call: 1
void CAudioStreamManaged::CreateMixer()
{
	CAudioMixer* pWaveMixer; // 113
	CAudioStreamManaged::ReferenceAdd(
			CAudioMixer* pMixer);  // 114
} /* size: 102, variables: 1, inline expansions: 1 (18 bytes) */

// <02429615> soundsystem/audio_stream_managed.cpp:118
void CAudioStreamManaged::ReferenceAdd(CAudioMixer* pMixer)
{
} /* size: 14 */

// <0242698C> soundsystem/audio_stream_managed.cpp:123
void CAudioStreamManaged::ReferenceRemove(CAudioMixer* pMixer)
{
} /* size: 14 */

// <024268B4> soundsystem/audio_stream_managed.cpp:128
// function call: 1
void CAudioStreamManaged::InitPackets(CAudioMixerData* pData)
{
	CAudioStreamManaged::AppendBufferToMixerAndAdvance(
					CAudioMixerData* pData);  // 130
} /* size: 90, inline expansions: 1 (71 bytes) */

// <024267BF> soundsystem/audio_stream_managed.cpp:133
// function call: 1
void CAudioStreamManaged::UpdateMixerData(const audio_source_indexstate_t& index, CAudioMixerData* pData)
{
	CAudioStreamManaged::AppendBufferToMixerAndAdvance(
					CAudioMixerData* pData);  // 137
} /* size: 85, inline expansions: 1 (41 bytes) */

// <02429D9B> soundsystem/audio_stream_managed.cpp:141
// variables: 4
void CAudioStreamManaged::AppendBufferToMixerAndAdvance(CAudioMixerData* pData)
{
	audio_buffer_input_t* pOut; // 152
	int16* pSamples; // 153
	uint nBytesPerSampleFrame; // 154
	uint nSampleFrameCount; // 155
} /* size: 0, variables: 4 */

// <024296DF> soundsystem/audio_stream_managed.cpp:141
// variables: 5
// function calls: 25
void CAudioStreamManaged::AppendBufferToMixerAndAdvance(CAudioMixerData* pData)
{
	audio_buffer_input_t* pOut; // 152
	int16* pSamples; // 153
	uint nBytesPerSampleFrame; // 154
	uint nSampleFrameCount; // 155
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
	CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::AddToTail(); // 1156
	CUtlMemory<audio_buffer_input_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::Element(
		int i);  // 1156
	CUtlVectorBase<audio_buffer_input_t, CUtlMemoryFixedGrowable<audio_buffer_input_t, 4, int> >::AddToTailGetPtr(); // 152
	CUtlMemory<short int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator[](
			int i);  // 35
	CAudioOutputBuffers::GetNextBlock(); // 153
	CAudioStreamManaged::SampleSize(); // 154
	CAudioOutputBuffers::BlockSize(); // 155
	CAudioOutputBuffers::BlockSize(); // 165
	memset(void* __dest,
		int __ch,
		size_t __len);  // 51
	V_memset(void* dest,
		int fill,
		int count);  // 165
	CAudioOutputBuffers::BlockSize(); // 161
	CAudioOutputBuffers::BlockSize(); // 170
	{
		uint nSampleFramesAvailable; // 183
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 55
	V_memset(void* dest,
		int fill,
		uint count);  // 178
} /* size: 606, variables: 4, inline expansions: 25 (1076 bytes) */

// <0242675C> soundsystem/audio_stream_managed.cpp:141
// variables: 5
void CAudioStreamManaged::AppendBufferToMixerAndAdvance(CAudioMixerData* pData)
{
	audio_buffer_input_t* pOut; // 152
	int16* pSamples; // 153
	uint nBytesPerSampleFrame; // 154
	uint nSampleFrameCount; // 155
	{
		uint nSampleFramesAvailable; // 183
	}
} /* size: 0, variables: 4 */

// <02426687> soundsystem/audio_stream_managed.cpp:194
// variables: 2
// function call: 1
void CAudioStreamManaged::Destroy()
{
	const char   __FUNCTION__; // 25455
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 196
	}
	CAudioStreamManaged::~CAudioStreamManaged(); // 197
} /* size: 0, variables: 1, inline expansions: 1 (27 bytes) */

