
//
// vulkan/asynccompilehelpervulkan.cpp
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 12
//

// <0040CE1B> vulkan/asynccompilehelpervulkan.cpp:20
// function calls: 7
void CAsyncCompileHelperVulkan::CAsyncCompileHelperVulkan()
{
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 22
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 22
	CUtlMemory<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, CUtlMemory<CAsyncCompileHelperVulkan::ShaderWaitEntry_ this); // 530
	CUtlVectorBase(const CUtlVectorBase<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, CUtlMemory<CAsyncCompileHelperVulkan::ShaderWaitEntry_ this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, CUtlMemory<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, i this); // 22
} /* size: 127, inline expansions: 7 (124 bytes) */

// <0040CE02> vulkan/asynccompilehelpervulkan.cpp:20
void CAsyncCompileHelperVulkan::CAsyncCompileHelperVulkan()
{
} /* size: 0 */

// <0040CA5A> vulkan/asynccompilehelpervulkan.cpp:27
// function calls: 17
void CAsyncCompileHelperVulkan::~CAsyncCompileHelperVulkan()
{
	CInterlockedIntT<int, 4>::operator int(); // 60
	CAsyncCompileHelperVulkan::Shutdown(); // 53
	CAsyncCompileHelperVulkan::Shutdown(); // 29
	CThreadEvent::~CThreadEvent(); // 2177
	CThreadEvent::~CThreadEvent(); // 2177
	CThreadRWLock_FastRead::~CThreadRWLock_FastRead(); // 30
	RemoveAll(const CUtlVectorBase<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, CUtlMemory<CAsyncCompileHelperVulkan::ShaderWaitEntry_ this); // 1798
	CUtlMemory<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, int>::Purge(); // 903
	CUtlMemory<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, CUtlMemory<CAsyncCompileHelperVulkan::ShaderWaitEntry_ this); // 560
	ValidateAlignment<CAsyncCompileHelperVulkan::ShaderWaitEntry_t>(void); // 508
	CUtlMemory<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, int>::Purge(); // 510
	CUtlMemory<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, CUtlMemory<CAsyncCompileHelperVulkan::ShaderWaitEntry_ this); // 410
	~CUtlVector(const CUtlVector<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, CUtlMemory<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, i this); // 30
	CThreadEvent::~CThreadEvent(); // 30
} /* size: 224, inline expansions: 17 (428 bytes) */

// <0040C9F2> vulkan/asynccompilehelpervulkan.cpp:27
void CAsyncCompileHelperVulkan::~CAsyncCompileHelperVulkan()
{
} /* size: 36 */

// <0040C867> vulkan/asynccompilehelpervulkan.cpp:33
// variable: 1
// function calls: 2
void CAsyncCompileHelperVulkan::Init()
{
	{
		ThreadPoolStartParams_t threadPoolParams; // 43
		ThreadPoolStartParams_t::ThreadPoolStartParams_t(
					unsigned int _nThreads,
					uint64* _pAffinities,
					ThreadPoolDistribute_t _fDistribute,
					unsigned int _nStackSize,
					int _iThreadPriority,
					ThreadAffinityPreference_t _affinityPref,
					ThreadAffinityPreferenceFlag_t _nAffinityPrefFlags);  // 43
		Max<int>(const int& val1,
			const int& val2);  // 44
	}
} /* size: 235 */

// <0040DF83> vulkan/asynccompilehelpervulkan.cpp:53
// function calls: 2
void CAsyncCompileHelperVulkan::Shutdown()
{
	CInterlockedIntT<int, 4>::operator int(); // 60
	CAsyncCompileHelperVulkan::Shutdown(); // 53
} /* size: 89, inline expansions: 2 (68 bytes) */

// <0040C84E> vulkan/asynccompilehelpervulkan.cpp:53
void CAsyncCompileHelperVulkan::Shutdown()
{
} /* size: 0 */

// <0040BF5A> vulkan/asynccompilehelpervulkan.cpp:73
// variables: 6
// function calls: 31
void CAsyncCompileHelperVulkan::QueueShaderCompile(CShaderVulkanBase* pShader)
{
	{
		CThreadMutex s_pipelineLibraryCompileQueueMutex; // 78
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_79; // 79
		{
			CSmartPtr<CThreadedJob, CRefCountAccessor> pJob; // 84
			_Function_base::_Function_base(); // 439
			{
				_M_not_empty_function<CAsyncCompileHelperVulkan::QueueShaderCompile(CShaderVulkanBase*)::<lambda()> >(const &); // 449
				_M_create<CAsyncCompileHelperVulkan::QueueShaderCompile(CShaderVulkanBase*)::<lambda()> >(union _Any_data& __dest,
																class& __f,
																true_type); // 217
				_M_init_functor<CAsyncCompileHelperVulkan::QueueShaderCompile(CShaderVulkanBase*)::<lambda()> >(union _Any_data& __functor,
																class& __f); // 451
			}
			function<void()>::function<CAsyncCompileHelperVulkan::QueueShaderCompile(
														class& __f); // 1156
			_Function_base::~_Function_base(); // 336
			function<void()>::~function()>* this); // 1156
			CSmartPtr<CThreadedJob, CRefCountAccessor>::CSmartPtr(
					ESmartPtrNoAddRef,
					CThreadedJob* pObj);  // 1158
			IThreadPool::QueueJobWithFlags<CAsyncCompileHelperVulkan::QueueShaderCompile(
																const char* szDescription,
																JobPriority_t jobPriority,
																uint nFlags,
																class& func);  // 1165
			IThreadPool::QueueJob<CAsyncCompileHelperVulkan::QueueShaderCompile(
														const char* szDescription,
														class& func);  // 85
			CThreadedJob::SetPriority(
					JobPriority_t priority);  // 86
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<int, 4>::operator++(); // 582
			CInterlockedIntT<int, 4>::operator++(
					int);  // 88
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<int, 4>::operator++(); // 582
			CInterlockedIntT<int, 4>::operator++(
					int);  // 89
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 204
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 357
			CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >::Release(); // 27
			Release<CThreadedJob>(CThreadedJob* pObj); // 344
			CSmartPtr<CThreadedJob, CRefCountAccessor>::~CSmartPtr(); // 92
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
				int nLineNumber);  // 79
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 93
		CThreadMutex::CThreadMutex(
				const char* pName);  // 78
	}
} /* size: 707 */

// <0040B80D> vulkan/asynccompilehelpervulkan.cpp:97
// variables: 9
// function calls: 18
void CAsyncCompileHelperVulkan::ProcessCompileShaderJob(CShaderVulkanBase* pShader)
{
	volatile bool  bDone; // 99
	const char   __FUNCTION__; // 51032
	{
		ShaderLoadingState_t nState; // 102
		{
			int* _pCrash; // 107
		}
		{
			const bool  bForceCreateNow; // 131
		}
		{
			int* _pCrash; // 138
		}
		{
			int* _pCrash; // 170
		}
		ReadVolatileMemory<int>(const int* pPtr); // 102
		ThreadInterlockedAssignIf(volatile int32* p,
						int32 value,
						int32 comparand);  // 433
		ThreadInterlockedAssignIf(volatile uint32* p,
						uint32 value,
						uint32 comparand);  // 454
		InterlockedAssignIf<int>(int* p,
					const int& value,
					const int& comparand);  // 124
		CRenderDeviceVulkan::IsShuttingDown(); // 127
		ThreadInterlockedAssignIf(volatile int32* p,
						int32 value,
						int32 comparand);  // 433
		ThreadInterlockedAssignIf(volatile uint32* p,
						uint32 value,
						uint32 comparand);  // 454
		InterlockedAssignIf<int>(int* p,
					const int& value,
					const int& comparand);  // 136
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 138
		ThreadInterlockedAssignIf(volatile int32* p,
						int32 value,
						int32 comparand);  // 114
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 107
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 170
	}
	{
		int32 nTotalQueuedShaderCompiles; // 185
		int32 nRemainingShaderCompiles; // 186
		CInterlockedIntT<int, 4>::operator int(); // 185
		CInterlockedIntT<int, 4>::operator int(); // 186
	}
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 175
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 181
} /* size: 665, variables: 2, inline expansions: 4 (45 bytes) */

// <0040B110> vulkan/asynccompilehelpervulkan.cpp:193
// variables: 4
// function calls: 25
void CAsyncCompileHelperVulkan::OnShaderCompileFinished(CShaderVulkanBase* pShader)
{
	CSemiAutoRWLockT<CThreadRWLock_FastRead> lockHelper; // 195
	{
		int i; // 201
		COneTimeEvent* pEvent; // 218
		Count(const CUtlVectorBase<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, CUtlMemory<CAsyncCompileHelperVulkan::ShaderWait this); // 202
		CUtlMemory<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, CUtlMemory<CAsyncCompileHelperVulkan::ShaderWaitEntry_ this,
				int i);  // 204
		CSemiAutoRWLockT<CThreadRWLock_FastRead>::LockForWrite(
				const char* pFileName,
				int nLineNumber);  // 214
		CUtlMemory<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, CUtlMemory<CAsyncCompileHelperVulkan::ShaderWaitEntry_ this,
				int i);  // 218
		{
			const bool  bNotLast; // 1578
			CUtlMemory<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, CUtlMemory<CAsyncCompileHelperVulkan::ShaderWaitEntry_ this,
				int i);  // 1584
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 1584
		}
		Destruct<CAsyncCompileHelperVulkan::ShaderWaitEntry_t>(ShaderWaitEntry_t* pMemory); // 1575
		FastRemove(const CUtlVectorBase<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, CUtlMemory<CAsyncCompileHelperVulkan::ShaderWaitEntry_ this,
				int elem);  // 219
		COneTimeEvent::Set(); // 220
	}
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
	CThreadRWLock_FastRead::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 1045
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::LockForRead(
			const char* pFileName,
			int nLineNumber,
			bool bHoldExistingWriteLockInstead);  // 196
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::CSemiAutoRWLockT(
			CThreadRWLock_FastRead* pLock);  // 195
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::Unlock(
		const char* pFileName,
		int nLineNumber);  // 1113
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::~CSemiAutoRWLockT(); // 224
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 1098
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::Unlock(
		const char* pFileName,
		int nLineNumber);  // 1113
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::~CSemiAutoRWLockT(); // 224
} /* size: 436, variables: 1, inline expansions: 12 (356 bytes) */

// <0040A757> vulkan/asynccompilehelpervulkan.cpp:227
// variables: 5
// function calls: 35
void CAsyncCompileHelperVulkan::WaitForShaderCompile(CShaderVulkanBase* pShader)
{
	COneTimeEvent* pEvent; // 229
	CSemiAutoRWLockT<CThreadRWLock_FastRead> lockHelper; // 231
	ShaderLoadingState_t nState; // 271
	{
		ShaderLoadingState_t nState; // 235
		{
			int i; // 243
			Count(const CUtlVectorBase<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, CUtlMemory<CAsyncCompileHelperVulkan::ShaderWait this); // 243
			CUtlMemory<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, CUtlMemory<CAsyncCompileHelperVulkan::ShaderWaitEntry_ this,
					int i);  // 245
		}
		ReadVolatileMemory<int>(const int* pPtr); // 235
		CSemiAutoRWLockT<CThreadRWLock_FastRead>::LockForWrite(
				const char* pFileName,
				int nLineNumber);  // 257
		CUtlMemory<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, int>::NumAllocated(); // 1247
		CUtlMemory<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, CUtlMemory<CAsyncCompileHelperVulkan::ShaderWaitEntry_ this); // 368
		ResetDbgInfo(const CUtlVectorBase<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, CUtlMemory<CAsyncCompileHelperVulkan::ShaderWaitEntry_ this); // 824
		CUtlMemory<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, int>::IsGrowable(); // 823
		CUtlMemory<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, int>::IsExternallyAllocated(); // 861
		CUtlMemory<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, int>::Grow(
			int num);  // 806
		GrowMemory(const CUtlVectorBase<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, CUtlMemory<CAsyncCompileHelperVulkan::ShaderWaitEntry_ this,
				int num);  // 1249
		CUtlMemory<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, CUtlMemory<CAsyncCompileHelperVulkan::ShaderWaitEntry_ this,
			int i);  // 1252
		Construct<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, CAsyncCompileHelperVulkan::ShaderWaitEntry_t>(ShaderWaitEntry_t* pMemory); // 1252
		AddToTail(const CUtlVectorBase<CAsyncCompileHelperVulkan::ShaderWaitEntry_t, CUtlMemory<CAsyncCompileHelperVulkan::ShaderWaitEntry_ this,
				ShaderWaitEntry_t& src);  // 264
	}
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::CSemiAutoRWLockT(
			CThreadRWLock_FastRead* pLock);  // 231
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
	CThreadRWLock_FastRead::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 1045
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::LockForRead(
			const char* pFileName,
			int nLineNumber,
			bool bHoldExistingWriteLockInstead);  // 232
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 1098
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::Unlock(
		const char* pFileName,
		int nLineNumber);  // 269
	ReadVolatileMemory<int>(const int* pPtr); // 271
	ReadVolatileMemory<int>(const int* pPtr); // 281
	COneTimeEvent::Wait(
		uint32 dwTimeout);  // 276
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 1098
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::Unlock(
		const char* pFileName,
		int nLineNumber);  // 1113
	CSemiAutoRWLockT<CThreadRWLock_FastRead>::~CSemiAutoRWLockT(); // 284
} /* size: 848, variables: 3, inline expansions: 17 (572 bytes) */

// <0040A3B5> vulkan/asynccompilehelpervulkan.cpp:287
// variables: 4
// function calls: 8
void CAsyncCompileHelperVulkan::DestroyShader(RenderShaderHandle_t hShader, bool bIsVertexShader)
{
	CShaderVulkanBase* pShader; // 293
	const char   __FUNCTION__; // 50807
	{
		ShaderLoadingState_t nState; // 296
		{
			int* _pCrash; // 343
		}
		ReadVolatileMemory<int>(const int* pPtr); // 296
		ThreadInterlockedAssignIf(volatile int32* p,
						int32 value,
						int32 comparand);  // 433
		ThreadInterlockedAssignIf(volatile uint32* p,
						uint32 value,
						uint32 comparand);  // 454
		InterlockedAssignIf<int>(int* p,
					const int& value,
					const int& comparand);  // 327
		ThreadInterlockedAssignIf(volatile int32* p,
						int32 value,
						int32 comparand);  // 433
		ThreadInterlockedAssignIf(volatile uint32* p,
						uint32 value,
						uint32 comparand);  // 454
		InterlockedAssignIf<int>(int* p,
					const int& value,
					const int& comparand);  // 317
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 343
	}
} /* size: 344, variables: 2 */

