
//
// tier0/jobthread.cpp
//
//	referenced by: libtier0.so
//
//	functions: 121
//	classes: 7
//

// <001C8D04> tier0/jobthread.cpp:78
// function calls: 5
void CPooledStdFunctionJob::~CPooledStdFunctionJob()
{
	_Function_base::~_Function_base(); // 336
	function<void()>::~function()>* this); // 474
	CThreadMutex::~CThreadMutex(); // 358
	CThreadedJob::~CThreadedJob(); // 474
	CStdFunctionJob::~CStdFunctionJob(); // 78
} /* size: 136, inline expansions: 5 (214 bytes) */

// <001C8A7C> tier0/jobthread.cpp:78
// function calls: 11
void CPooledStdFunctionJob::~CPooledStdFunctionJob()
{
	_Function_base::~_Function_base(); // 336
	function<void()>::~function()>* this); // 474
	CThreadMutex::~CThreadMutex(); // 358
	CRefCountServiceBase<true, CRefMT>::~CRefCountServiceBase(); // 355
	IRefCounted::~IRefCounted(); // 355
	CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >::~CRefCounted1(); // 358
	CThreadedJob::~CThreadedJob(); // 474
	CStdFunctionJob::~CStdFunctionJob(); // 78
	CPooledStdFunctionJob::~CPooledStdFunctionJob(); // 78
	CUtlMemoryPool<CPooledStdFunctionJob>::Free(
		CPooledStdFunctionJob* pMem);  // 82
	operator delete(void* p); // 78
} /* size: 151, inline expansions: 11 (339 bytes) */

// <001C8A60> tier0/jobthread.cpp:78
inline void CPooledStdFunctionJob::~CPooledStdFunctionJob()
{
} /* size: 0 */

// <001B8807> tier0/jobthread.cpp:78
// member functions: 19
// member variable: 1
// static member variable: 1
// class size: 192
class CPooledStdFunctionJob : public CStdFunctionJob {
public:
	/* class CStdFunctionJob <ancestor>; */ /* 0 192 */
	void CPooledStdFunctionJob(CPooledStdFunctionJob* , CPooledStdFunctionJob& );
	void CPooledStdFunctionJob(CPooledStdFunctionJob* , const CPooledStdFunctionJob& );
	/* tier0/jobthread.cpp:82 */
	void* operator new(size_t);
	/* tier0/jobthread.cpp:82 */
	void* operator new(size_t, int, const char* , int);
	/* tier0/jobthread.cpp:82 */
	void operator delete(void* );
	/* tier0/jobthread.cpp:82 */
	void operator delete(void* , int, const char* , int);
	/* tier0/jobthread.cpp:82 */
	void PurgeFixedAllocator(bool);
private:
	static class CUtlMemoryPool<CPooledStdFunctionJob> s_Allocator; /* 0 0 */
	/* tier0/jobthread.cpp:85 */
	void CPooledStdFunctionJob(CPooledStdFunctionJob* , VoidStdFunction_t& , const char* , JobPriority_t);
	/* tier0/jobthread.cpp:80 */
	typedef struct function<void()> VoidStdFunction_t;
	virtual void ~CPooledStdFunctionJob(CPooledStdFunctionJob* );
	void CPooledStdFunctionJob(class CPooledStdFunctionJob *, class CPooledStdFunctionJob &); /* linkage=_ZN21CPooledStdFunctionJobC4EOS_ */
	void CPooledStdFunctionJob(class CPooledStdFunctionJob *, const class CPooledStdFunctionJob  &); /* linkage=_ZN21CPooledStdFunctionJobC4ERKS_ */
	void * operator new(size_t); /* linkage=_ZN21CPooledStdFunctionJobnwEm */
	void * operator new(size_t, int, const char  *, int); /* linkage=_ZN21CPooledStdFunctionJobnwEmiPKci */
	void operator delete(void *); /* linkage=_ZN21CPooledStdFunctionJobdlEPv */
	void operator delete(void *, int, const char  *, int); /* linkage=_ZN21CPooledStdFunctionJobdlEPviPKci */
	void PurgeFixedAllocator(bool); /* linkage=_ZN21CPooledStdFunctionJob19PurgeFixedAllocatorEb */
	void CPooledStdFunctionJob(class CPooledStdFunctionJob *, VoidStdFunction_t &, const char  *, enum JobPriority_t); /* linkage=_ZN21CPooledStdFunctionJobC4EOSt8functionIFvvEEPKc13JobPriority_t */
	virtual void ~CPooledStdFunctionJob(class CPooledStdFunctionJob *); /* linkage=_ZN21CPooledStdFunctionJobD4Ev */
};

// <001DDEB2> tier0/jobthread.cpp:85
void CPooledStdFunctionJob::CPooledStdFunctionJob(VoidStdFunction_t& func, const char* pszDescription, JobPriority_t jobPriority)
{
} /* size: 0 */

// <001DDE75> tier0/jobthread.cpp:85
inline void CPooledStdFunctionJob::CPooledStdFunctionJob(VoidStdFunction_t& func, const char* pszDescription, JobPriority_t jobPriority)
{
} /* size: 0 */

// <001DDBBB> tier0/jobthread.cpp:95
// function calls: 9
JobManualEvent_t* GetJobManualEventFromPool(void)
{
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 480
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 490
	JobManualEvent_t::JobManualEvent_t(); // 341
	simpleTSPoolStruct_t::simpleTSPoolStruct_t(); // 486
	CTSPoolCounted<JobManualEvent_t>::GetObject(); // 97
} /* size: 185, inline expansions: 9 (356 bytes) */

// <001DD823> tier0/jobthread.cpp:100
// function calls: 14
void ReturnJobManualEventToPool(JobManualEvent_t* pEvent)
{
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 466
	JobManualEvent_t::~JobManualEvent_t(); // 341
	simpleTSPoolStruct_t::~simpleTSPoolStruct_t(); // 399
	CTSPool<JobManualEvent_t>::DeleteObject(
			JobManualEvent_t* pInfo);  // 470
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 371
	CTSPool<JobManualEvent_t>::PutObject(
			JobManualEvent_t* pInfo);  // 474
	CTSPoolCounted<JobManualEvent_t>::PutObjectMax(
			JobManualEvent_t* pInfo,
			int nMax);  // 464
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 469
	CTSPoolCounted<JobManualEvent_t>::PutObjectMax(
			JobManualEvent_t* pInfo,
			int nMax);  // 115
} /* size: 198, inline expansions: 14 (504 bytes) */

// <001C9042> tier0/jobthread.cpp:121
// function calls: 2
void CExecMultiWorkerJob::~CExecMultiWorkerJob()
{
	CThreadMutex::~CThreadMutex(); // 358
	CThreadedJob::~CThreadedJob(); // 121
} /* size: 71, inline expansions: 2 (59 bytes) */

// <001C8E56> tier0/jobthread.cpp:121
// function calls: 8
void CExecMultiWorkerJob::~CExecMultiWorkerJob()
{
	CThreadMutex::~CThreadMutex(); // 358
	CRefCountServiceBase<true, CRefMT>::~CRefCountServiceBase(); // 355
	IRefCounted::~IRefCounted(); // 355
	CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >::~CRefCounted1(); // 358
	CThreadedJob::~CThreadedJob(); // 121
	CExecMultiWorkerJob::~CExecMultiWorkerJob(); // 121
	CUtlMemoryPool<CExecMultiWorkerJob>::Free(
		CExecMultiWorkerJob* pMem);  // 123
	operator delete(void* p); // 121
} /* size: 86, inline expansions: 8 (139 bytes) */

// <001C8E3A> tier0/jobthread.cpp:121
inline void CExecMultiWorkerJob::~CExecMultiWorkerJob()
{
} /* size: 0 */

// <001B8D00> tier0/jobthread.cpp:121
// member functions: 20
// member variables: 3
// static member variable: 1
// vtable entry: 1
// class size: 176
class CExecMultiWorkerJob : public CThreadedJob {
public:
	/* class CThreadedJob <ancestor>; */ /* 0 160 */
	void CExecMultiWorkerJob(CExecMultiWorkerJob* , CExecMultiWorkerJob& );
	void CExecMultiWorkerJob(CExecMultiWorkerJob* , const CExecMultiWorkerJob& );
	/* tier0/jobthread.cpp:123 */
	void* operator new(size_t);
	/* tier0/jobthread.cpp:123 */
	void* operator new(size_t, int, const char* , int);
	/* tier0/jobthread.cpp:123 */
	void operator delete(void* );
	/* tier0/jobthread.cpp:123 */
	void operator delete(void* , int, const char* , int);
	/* tier0/jobthread.cpp:123 */
	void PurgeFixedAllocator(bool);
private:
	static class CUtlMemoryPool<CExecMultiWorkerJob> s_Allocator; /* 0 0 */
	/* tier0/jobthread.cpp:126 */
	void CExecMultiWorkerJob(CExecMultiWorkerJob* , IMultipleWorkerJob* , int, const char* , JobPriority_t);
	/* tier0/jobthread.cpp:134 */
	virtual void DoExecute(CExecMultiWorkerJob* );
	const class IMultipleWorkerJob * m_pJob; /* 160 8 */
	const int m_nIndex; /* 168 4 */
	virtual void ~CExecMultiWorkerJob(CExecMultiWorkerJob* );
	void CExecMultiWorkerJob(class CExecMultiWorkerJob *, class CExecMultiWorkerJob &); /* linkage=_ZN19CExecMultiWorkerJobC4EOS_ */
	void CExecMultiWorkerJob(class CExecMultiWorkerJob *, const class CExecMultiWorkerJob  &); /* linkage=_ZN19CExecMultiWorkerJobC4ERKS_ */
	void * operator new(size_t); /* linkage=_ZN19CExecMultiWorkerJobnwEm */
	void * operator new(size_t, int, const char  *, int); /* linkage=_ZN19CExecMultiWorkerJobnwEmiPKci */
	void operator delete(void *); /* linkage=_ZN19CExecMultiWorkerJobdlEPv */
	void operator delete(void *, int, const char  *, int); /* linkage=_ZN19CExecMultiWorkerJobdlEPviPKci */
	void PurgeFixedAllocator(bool); /* linkage=_ZN19CExecMultiWorkerJob19PurgeFixedAllocatorEb */
	void CExecMultiWorkerJob(class CExecMultiWorkerJob *, class IMultipleWorkerJob *, int, const char  *, enum JobPriority_t); /* linkage=_ZN19CExecMultiWorkerJobC4EP18IMultipleWorkerJobiPKc13JobPriority_t */
	virtual void DoExecute(class CExecMultiWorkerJob *); /* linkage=_ZN19CExecMultiWorkerJob9DoExecuteEv */
	virtual void ~CExecMultiWorkerJob(class CExecMultiWorkerJob *); /* linkage=_ZN19CExecMultiWorkerJobD4Ev */
};

// <001DD7C7> tier0/jobthread.cpp:126
void CExecMultiWorkerJob::CExecMultiWorkerJob(IMultipleWorkerJob* pJob, int nIndex, const char* pszDescription, JobPriority_t jobPriority)
{
} /* size: 0 */

// <001DD77E> tier0/jobthread.cpp:126
inline void CExecMultiWorkerJob::CExecMultiWorkerJob(IMultipleWorkerJob* pJob, int nIndex, const char* pszDescription, JobPriority_t jobPriority)
{
} /* size: 0 */

// <001DD74A> tier0/jobthread.cpp:134
void CExecMultiWorkerJob::DoExecute()
{
} /* size: 26 */

// <001B8EC5> tier0/jobthread.cpp:148
// member functions: 8
// member variable: 1
// class size: 24
class CJobQueue {
	/* tier0/jobthread.cpp:151 */
	void CJobQueue(CJobQueue* );
	/* tier0/jobthread.cpp:160 */
	void ~CJobQueue(CJobQueue* );
	/* tier0/jobthread.cpp:184 */
	void Push(CJobQueue* , CThreadedJob* );
	/* tier0/jobthread.cpp:194 */
	bool TryPop(CJobQueue* , CThreadedJob** );
	/* tier0/jobthread.cpp:213 */
	typedef CTSFastPushQueue QueueType;
private:
	QueueType * m_queues[3]; /* 0 24 */
	void CJobQueue(class CJobQueue *); /* linkage=_ZN9CJobQueueC4Ev */
	void ~CJobQueue(class CJobQueue *); /* linkage=_ZN9CJobQueueD4Ev */
	void Push(class CJobQueue *, class CThreadedJob *); /* linkage=_ZN9CJobQueue4PushEP12CThreadedJob */
	bool TryPop(class CJobQueue *, class CThreadedJob * *); /* linkage=_ZN9CJobQueue6TryPopEPP12CThreadedJob */
};

// <001DD727> tier0/jobthread.cpp:151
// variable: 1
void CJobQueue::CJobQueue()
{
	{
		int i; // 153
	}
} /* size: 0 */

// <001DD701> tier0/jobthread.cpp:151
// variable: 1
inline void CJobQueue::CJobQueue()
{
	{
		int i; // 153
	}
} /* size: 0 */

// <001DD6C2> tier0/jobthread.cpp:160
// variables: 3
void CJobQueue::~CJobQueue()
{
	{
		CThreadedJob* pJob; // 163
		{
			int i; // 164
		}
		{
			int i; // 177
		}
	}
} /* size: 0 */

// <001DD67C> tier0/jobthread.cpp:160
// variables: 3
inline void CJobQueue::~CJobQueue()
{
	{
		CThreadedJob* pJob; // 163
		{
			int i; // 164
		}
		{
			int i; // 177
		}
	}
} /* size: 0 */

// <001DD657> tier0/jobthread.cpp:184
inline void CJobQueue::Push(CThreadedJob* pJob)
{
} /* size: 0 */

// <001DD617> tier0/jobthread.cpp:194
// variables: 2
inline void CJobQueue::TryPop(CThreadedJob** ppJob)
{
	{
		int i; // 196
		{
			CThreadedJob* pJob; // 198
		}
	}
} /* size: 0 */

// <001B93C0> tier0/jobthread.cpp:224
// member functions: 43
// member variables: 22
// vtable entries: 20
// class size: 640
class CThreadPool : public CRefCounted1<IThreadPool, CRefCountServiceBase<true, CRefMT> >, public IFiberThreadWorkerPool {
	/* tier0/jobthread.cpp:336 */
	enum {
		COMPUTATION_STACKSIZE = 0,
		QUEUE_DEPTH = 8192,
	};
	/* tier0/jobthread.cpp:390 */
	struct MainThreadjob {
		function<void()> Function; /* 0 32 */
		CThreadFastSemaphore * CompleteEvent; /* 32 8 */
		void ~MainThreadjob(MainThreadjob* );
		void MainThreadjob(MainThreadjob* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tier0/jobthread.cpp:319 */
	class CSerialJobExecutor : public CThreadedJob {
	public:
		/* class CThreadedJob <ancestor>; */ /* 0 160 */
		void CSerialJobExecutor(CSerialJobExecutor* , const CSerialJobExecutor& );
		/* tier0/jobthread.cpp:321 */
		void* operator new(size_t);
		/* tier0/jobthread.cpp:321 */
		void* operator new(size_t, int, const char* , int);
		/* tier0/jobthread.cpp:321 */
		void operator delete(void* );
		/* tier0/jobthread.cpp:321 */
		void operator delete(void* , int, const char* , int);
		/* tier0/jobthread.cpp:321 */
		void PurgeFixedAllocator(bool);
	private:
		static CUtlMemoryPoolMT s_Allocator; /* 0 0 */
		/* tier0/jobthread.cpp:324 */
		void CSerialJobExecutor(CSerialJobExecutor* );
		/* tier0/jobthread.cpp:325 */
		virtual void ~CSerialJobExecutor(CSerialJobExecutor* );
		/* tier0/jobthread.cpp:328 */
		virtual void DoExecute(CSerialJobExecutor* );
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class CRefCounted1<IThreadPool, CRefCountServiceBase<true, CRefMT> > <ancestor>; */ /* 0 24 */
	/* class IFiberThreadWorkerPool <ancestor>; */ /* 24 8 */
	void CThreadPool(CThreadPool* , const CThreadPool& );
	/* tier0/jobthread.cpp:589 */
	void CThreadPool(CThreadPool* , bool);
	/* tier0/jobthread.cpp:609 */
	virtual void ~CThreadPool(CThreadPool* );
	/* tier0/jobthread.cpp:233 */
	void* operator new(size_t);
	/* tier0/jobthread.cpp:234 */
	void operator delete(void* );
	/* tier0/jobthread.cpp:239 */
	virtual bool Start(CThreadPool* , const ThreadPoolStartParams_t& );
	/* tier0/jobthread.cpp:1341 */
	virtual bool Start(CThreadPool* , const ThreadPoolStartParams_t& , const char* );
	/* tier0/jobthread.cpp:1627 */
	virtual bool Stop(CThreadPool* , int);
	/* tier0/jobthread.cpp:246 */
	virtual int NumThreads(const CThreadPool* );
	/* tier0/jobthread.cpp:247 */
	virtual int NumIdleThreads(const CThreadPool* );
	/* tier0/jobthread.cpp:618 */
	virtual bool IsCurrentThreadInPool(const CThreadPool* );
	/* tier0/jobthread.cpp:636 */
	virtual int SuspendExecution(CThreadPool* );
	/* tier0/jobthread.cpp:666 */
	virtual int ResumeExecution(CThreadPool* );
	/* tier0/jobthread.cpp:685 */
	virtual bool YieldWait(CThreadPool* , JobWaitItem_t* , JobWaitExtra_t* , int, bool, uint32, ThreadMultiWaitObjectSet_t** );
	/* tier0/jobthread.cpp:887 */
	virtual bool YieldWait(CThreadPool* , CThreadedJob** , int, bool, uint32);
	/* tier0/jobthread.cpp:1043 */
	virtual bool YieldSingleJob(CThreadPool* );
	/* tier0/jobthread.cpp:1061 */
	virtual bool YieldWaitPerFrameJobs(CThreadPool* );
	/* tier0/jobthread.cpp:1142 */
	virtual void AddPerFrameJob(CThreadPool* , CThreadedJob* );
	/* tier0/jobthread.cpp:1098 */
	virtual void AddJob(CThreadPool* , CThreadedJob* );
	/* tier0/jobthread.cpp:1156 */
	void InsertJobInQueue(CThreadPool* , CThreadedJob* );
	/* tier0/jobthread.cpp:1198 */
	bool GetJobFromQueue(CThreadPool* , CThreadedJob** , int, bool);
	/* tier0/jobthread.cpp:1238 */
	void ServiceJobAndRelease(CThreadPool* , CThreadedJob* );
	/* tier0/jobthread.cpp:2325 */
	virtual void ExecuteOnMainThread(CThreadPool* , function<void()>);
	/* tier0/jobthread.cpp:286 */
	virtual JobEvent_t* MainThreadJobSignal(CThreadPool* );
	/* tier0/jobthread.cpp:2351 */
	virtual void ProcessMainThreadJobs(CThreadPool* );
	/* tier0/jobthread.cpp:1256 */
	virtual void AddLambdaInternal(CThreadPool* , VoidStdFunction_t& , CThreadedJob** , const char* , unsigned int, JobPriority_t);
	/* tier0/jobthread.cpp:1280 */
	virtual void QueueMultipleAndWait(CThreadPool* , IMultipleWorkerJob* , int, const char* , JobPriority_t);
	/* tier0/jobthread.cpp:299 */
	int GetWorkerThreadWait(const CThreadPool* );
	/* tier0/jobthread.cpp:305 */
	virtual void FiberJobAvailable(CThreadPool* );
	/* tier0/jobthread.cpp:310 */
	ThreadAffinityPreference_t GetStartAffinityPreference(const CThreadPool* );
	/* tier0/jobthread.cpp:314 */
	ThreadAffinityPreferenceFlag_t GetStartAffinityPreferenceFlags(const CThreadPool* );
private:
	/* tier0/jobthread.cpp:1225 */
	void RunSerialJobs(CThreadPool* , CSerialJobExecutor* );
	CThreadMutex m_PerFrameJobListMutex __attribute__((__aligned__(64))); /* 64 72 */
	CUtlVector<CThreadedJob*, CUtlMemory<CThreadedJob*, int> > m_PerFrameJobs; /* 136 32 */
	CInterlockedInt m_nIdleThreads __attribute__((__aligned__(64))); /* 192 4 */
	atomic_int m_nSerialJobs __attribute__((__aligned__(64))); /* 256 4 */
	CJobQueue m_SerialQueue; /* 264 24 */
	atomic_int m_nThreadsInYieldWait __attribute__((__aligned__(64))); /* 320 4 */
	JobEvent_t m_WakeYieldWaitEvent; /* 324 8 */
	unique_ptr<CJobQueue, std::default_delete<CJobQueue> > m_SharedQueue; /* 336 8 */
	CThreadFastSemaphore * m_pJobAvailableSemaphore; /* 344 8 */
	CUtlVector<CJobThread*, CUtlMemory<CJobThread*, int> > m_Threads; /* 352 32 */
	CThreadMutex m_SuspendMutex; /* 384 72 */
	int m_nSuspend; /* 456 4 */
	int m_nWorkerThreadWait; /* 460 4 */
	bool m_bExecOnThreadPoolThreadsOnly; /* 464 1 */
	bool m_bRunFiberJobsWhenIdle; /* 465 1 */
	ThreadAffinityPreference_t m_affinityPreference; /* 468 4 */
	ThreadAffinityPreferenceFlag_t m_nAffinityPreferenceFlags; /* 472 4 */
	CThreadMutex m_MainThreadJobQueueMutex __attribute__((__aligned__(64))); /* 512 72 */
	CUtlVector<CThreadPool::MainThreadjob, CUtlMemory<CThreadPool::MainThreadjob, int> > m_MainThreadJobs; /* 584 32 */
	CThreadMultiWaitManualEvent m_MainThreadJobSignal; /* 616 8 */
} __attribute__((__aligned__(64)));

// <001DD57B> tier0/jobthread.cpp:239
void CThreadPool::Start(const ThreadPoolStartParams_t& startParams)
{
} /* size: 42 */

// <001DFA23> tier0/jobthread.cpp:246
// function call: 1
void CThreadPool::NumThreads()
{
	CUtlVectorBase<CJobThread::Count(); // 246
} /* size: 11, inline expansions: 1 (0 bytes) */

// <001DD562> tier0/jobthread.cpp:246
inline void CThreadPool::NumThreads()
{
} /* size: 0 */

// <001DFA7D> tier0/jobthread.cpp:247
// function call: 1
void CThreadPool::NumIdleThreads()
{
	CInterlockedIntT<int, 4>::operator int(); // 247
} /* size: 11, inline expansions: 1 (6 bytes) */

// <001DD549> tier0/jobthread.cpp:247
inline void CThreadPool::NumIdleThreads()
{
} /* size: 0 */

// <001DD519> tier0/jobthread.cpp:286
void CThreadPool::MainThreadJobSignal()
{
} /* size: 12 */

// <001E0019> tier0/jobthread.cpp:305
// variables: 2
// function calls: 2
void CThreadPool::FiberJobAvailable()
{
	__atomic_base<int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1488
	{
		int32 nWaiters; // 1491
		int32 nWake; // 1492
	}
	CThreadFastSemaphore::Release(
		int32 releaseCount);  // 307
} /* size: 48, inline expansions: 2 (38 bytes) */

// <001DD500> tier0/jobthread.cpp:305
inline void CThreadPool::FiberJobAvailable()
{
} /* size: 0 */

// <001DD4E7> tier0/jobthread.cpp:310
inline void CThreadPool::GetStartAffinityPreference()
{
} /* size: 0 */

// <001DD4CE> tier0/jobthread.cpp:314
inline void CThreadPool::GetStartAffinityPreferenceFlags()
{
} /* size: 0 */

// <001DD484> tier0/jobthread.cpp:324
void CSerialJobExecutor::CSerialJobExecutor()
{
} /* size: 0 */

// <001DD46B> tier0/jobthread.cpp:324
inline void CSerialJobExecutor::CSerialJobExecutor()
{
} /* size: 0 */

// <001DD3C4> tier0/jobthread.cpp:325
// function calls: 2
void CSerialJobExecutor::~CSerialJobExecutor()
{
	CThreadMutex::~CThreadMutex(); // 358
	CThreadedJob::~CThreadedJob(); // 325
} /* size: 71, inline expansions: 2 (59 bytes) */

// <001DD1D4> tier0/jobthread.cpp:325
// function calls: 8
void CSerialJobExecutor::~CSerialJobExecutor()
{
	CThreadMutex::~CThreadMutex(); // 358
	CRefCountServiceBase<true, CRefMT>::~CRefCountServiceBase(); // 355
	IRefCounted::~IRefCounted(); // 355
	CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >::~CRefCounted1(); // 358
	CThreadedJob::~CThreadedJob(); // 325
	CSerialJobExecutor::~CSerialJobExecutor(); // 325
	CUtlMemoryPool<CThreadPool::CSerialJobExecutor>::Free(
		CSerialJobExecutor* pMem);  // 321
	operator delete(void* p); // 325
} /* size: 86, inline expansions: 8 (139 bytes) */

// <001DD1BB> tier0/jobthread.cpp:325
inline void CSerialJobExecutor::~CSerialJobExecutor()
{
} /* size: 0 */

// <001DD170> tier0/jobthread.cpp:328
void CSerialJobExecutor::DoExecute()
{
} /* size: 19 */

// <001CAD0E> tier0/jobthread.cpp:390
void MainThreadjob::MainThreadjob()
{
} /* size: 0 */

// <001CACF1> tier0/jobthread.cpp:390
inline void MainThreadjob::MainThreadjob()
{
} /* size: 0 */

// <001CAC64> tier0/jobthread.cpp:390
void MainThreadjob::~MainThreadjob()
{
} /* size: 0 */

// <001CAC47> tier0/jobthread.cpp:390
inline void MainThreadjob::~MainThreadjob()
{
} /* size: 0 */

// <001C91B2> tier0/jobthread.cpp:407
void CGlobalThreadPool::~CGlobalThreadPool()
{
} /* size: 44 */

// <001C9105> tier0/jobthread.cpp:407
// function calls: 2
void CGlobalThreadPool::~CGlobalThreadPool()
{
	CGlobalThreadPool::~CGlobalThreadPool(); // 407
	operator delete(void* p); // 407
} /* size: 66, inline expansions: 2 (53 bytes) */

// <001C90E8> tier0/jobthread.cpp:407
inline void CGlobalThreadPool::~CGlobalThreadPool()
{
} /* size: 0 */

// <001C298E> tier0/jobthread.cpp:407
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 640
class CGlobalThreadPool : public CThreadPool {
public:
	/* class CThreadPool <ancestor>; */ /* 0 640 */
	void CGlobalThreadPool(CGlobalThreadPool* , CGlobalThreadPool& );
	void CGlobalThreadPool(CGlobalThreadPool* , const CGlobalThreadPool& );
	/* tier0/jobthread.cpp:410 */
	void CGlobalThreadPool(CGlobalThreadPool* );
	/* tier0/jobthread.cpp:415 */
	virtual bool Start(CGlobalThreadPool* , const ThreadPoolStartParams_t& );
	virtual void ~CGlobalThreadPool(CGlobalThreadPool* );
	void CGlobalThreadPool(class CGlobalThreadPool *, class CGlobalThreadPool &); /* linkage=_ZN17CGlobalThreadPoolC4EOS_ */
	void CGlobalThreadPool(class CGlobalThreadPool *, const class CGlobalThreadPool  &); /* linkage=_ZN17CGlobalThreadPoolC4ERKS_ */
	void CGlobalThreadPool(class CGlobalThreadPool *); /* linkage=_ZN17CGlobalThreadPoolC4Ev */
	virtual bool Start(class CGlobalThreadPool *, const class ThreadPoolStartParams_t  &); /* linkage=_ZN17CGlobalThreadPool5StartERK23ThreadPoolStartParams_t */
	virtual void ~CGlobalThreadPool(class CGlobalThreadPool *); /* linkage=_ZN17CGlobalThreadPoolD4Ev */
} __attribute__((__aligned__(64)));

// <001DD159> tier0/jobthread.cpp:410
void CGlobalThreadPool::CGlobalThreadPool()
{
} /* size: 0 */

// <001DD140> tier0/jobthread.cpp:410
inline void CGlobalThreadPool::CGlobalThreadPool()
{
} /* size: 0 */

// <001DD04A> tier0/jobthread.cpp:415
// variables: 2
void CGlobalThreadPool::Start(const ThreadPoolStartParams_t& startParamsIn)
{
	int nThreads; // 417
	ThreadPoolStartParams_t startParams; // 418
} /* size: 158, variables: 2 */

// <001D3844> tier0/jobthread.cpp:439
void CJobThread::~CJobThread()
{
} /* size: 19 */

// <001D37B5> tier0/jobthread.cpp:439
// function call: 1
void CJobThread::~CJobThread()
{
	CJobThread::~CJobThread(); // 439
} /* size: 46, inline expansions: 1 (19 bytes) */

// <001D3798> tier0/jobthread.cpp:439
inline void CJobThread::~CJobThread()
{
} /* size: 0 */

// <001BBC10> tier0/jobthread.cpp:439
// member functions: 14
// member variables: 6
// vtable entry: 1
// class size: 416
class CJobThread : public CThread {
public:
	/* class CThread <ancestor>; */ /* 0 0 */
	void CJobThread(CJobThread* , CJobThread& );
	void CJobThread(CJobThread* , const CJobThread& );
	/* tier0/jobthread.cpp:442 */
	void CJobThread(CJobThread* , CThreadPool* , int, bool);
	/* tier0/jobthread.cpp:453 */
	void RequestExit(CJobThread* );
	/* tier0/jobthread.cpp:459 */
	void RequestSuspend(CJobThread* );
private:
	/* tier0/jobthread.cpp:466 */
	virtual int Run(CJobThread* );
	CThreadPool * m_pOwner; /* 400 8 */
	int m_iThread; /* 408 4 */
	volatile bool m_bRequestExit; /* 412 1 */
	volatile bool m_bRequestSuspend; /* 413 1 */
	bool m_bRunFiberJobsWhenIdle; /* 414 1 */
	virtual void ~CJobThread(CJobThread* );
	void CJobThread(class CJobThread *, class CJobThread &); /* linkage=_ZN10CJobThreadC4EOS_ */
	void CJobThread(class CJobThread *, const class CJobThread  &); /* linkage=_ZN10CJobThreadC4ERKS_ */
	void CJobThread(class CJobThread *, class CThreadPool *, int, bool); /* linkage=_ZN10CJobThreadC4EP11CThreadPoolib */
	void RequestExit(class CJobThread *); /* linkage=_ZN10CJobThread11RequestExitEv */
	void RequestSuspend(class CJobThread *); /* linkage=_ZN10CJobThread14RequestSuspendEv */
	virtual int Run(class CJobThread *); /* linkage=_ZN10CJobThread3RunEv */
	virtual void ~CJobThread(class CJobThread *); /* linkage=_ZN10CJobThreadD4Ev */
} __attribute__((__aligned__(16)));

// <001DD01C> tier0/jobthread.cpp:442
void CJobThread::CJobThread(CThreadPool* pOwner, int iThread, bool bRunFiberJobsWhenIdle)
{
	{
		{
		}
	}
} /* size: 0 */

// <001DCFB2> tier0/jobthread.cpp:442
// variables: 2
inline void CJobThread::CJobThread(CThreadPool* pOwner, int iThread, bool bRunFiberJobsWhenIdle)
{
	const char   __FUNCTION__; // 25879
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 450
	}
} /* size: 0, variables: 1 */

// <001DCF99> tier0/jobthread.cpp:453
inline void CJobThread::RequestExit()
{
} /* size: 0 */

// <001DCF80> tier0/jobthread.cpp:459
inline void CJobThread::RequestSuspend()
{
} /* size: 0 */

// <001DCA11> tier0/jobthread.cpp:466
// variables: 6
// function calls: 17
void CJobThread::Run()
{
	CFiber* pIdleFiber; // 473
	bool bWait; // 474
	{
		bool bProcessedJob; // 478
		CThreadedJob* pJob; // 479
		bool bGrabJobs; // 481
		{
			bool bHasWaitingJobs; // 546
		}
		atomic_thread_fence(memory_order __m); // 503
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 582
		CInterlockedIntT<int, 4>::operator++(
				int);  // 485
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 592
		CInterlockedIntT<int, 4>::operator--(
				int);  // 487
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<unsigned int, 4>::operator--(); // 146
		CFiber::Release(); // 556
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 357
		CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >::Release(); // 509
	}
	CThreadPool::GetStartAffinityPreference(); // 468
	CThreadPool::GetStartAffinityPreferenceFlags(); // 470
} /* size: 756, variables: 2, inline expansions: 2 (6 bytes) */

// <001DB9B0> tier0/jobthread.cpp:589
// variables: 4
// function calls: 63
void CThreadPool::CThreadPool(bool bRunFiberJobsWhenIdle)
{
	IRefCounted::IRefCounted(); // 193
	IThreadPool::IThreadPool(); // 351
	CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 351
	CRefCounted1<IThreadPool, CRefCountServiceBase<true, CRefMT> >::CRefCounted1(); // 600
	CThreadMutex::CThreadMutex(
			const char* pName);  // 598
	IFiberThreadWorkerPool::IFiberThreadWorkerPool(); // 600
	CUtlMemory<CThreadedJob::ValidateGrowSize(); // 475
	CUtlMemory<CThreadedJob::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CThreadedJob::ResetDbgInfo(); // 530
	CUtlVectorBase<CThreadedJob::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CThreadedJob::CUtlVector(); // 600
	CInterlockedIntT<int, 4>::CInterlockedIntT(
			int value);  // 590
	__atomic_base<int>::__atomic_base(
			__int_type __i);  // 843
	atomic<int>::atomic(
		__integral_type __i);  // 593
	{
		int i; // 153
		operator new(size_t,
				void* __p);  // 156
		CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::GetLoopbackAddress(); // 149
		CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::CTSFastPushQueue_Base(); // 156
	}
	CJobQueue::CJobQueue(); // 599
	__atomic_base<int>::__atomic_base(
			__int_type __i);  // 843
	atomic<int>::atomic(
		__integral_type __i);  // 600
	_Head_base<1, std::default_delete<CJobQueue>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CJobQueue> >::_Tuple_impl(); // 303
	_Head_base<0, CJobQueue::_Head_base(); // 303
	_Tuple_impl<0, CJobQueue::_Tuple_impl(); // 966
	tuple<CJobQueue::tuple(); // 167
	__uniq_ptr_impl<CJobQueue, std::default_delete<CJobQueue> >::__uniq_ptr_impl(); // 232
	__uniq_ptr_data<CJobQueue, std::default_delete<CJobQueue>, true, true>::__uniq_ptr_data(); // 298
	unique_ptr<CJobQueue, std::default_delete<CJobQueue> >::unique_ptr<>(); // 600
	CUtlMemory<CJobThread::ValidateGrowSize(); // 475
	CUtlMemory<CJobThread::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CJobThread::ResetDbgInfo(); // 530
	CUtlVectorBase<CJobThread::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CJobThread::CUtlVector(); // 600
	CThreadMutex::CThreadMutex(
			const char* pName);  // 597
	CThreadMutex::CThreadMutex(
			const char* pName);  // 600
	CUtlMemory<CThreadPool::MainThreadjob, int>::ValidateGrowSize(); // 475
	CUtlMemory<CThreadPool::MainThreadjob, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CThreadPool::MainThreadjob, CUtlMemory<CThreadPool::MainThreadjob, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CThreadPool::MainThreadjob, CUtlMemory<CThreadPool::MainThreadjob, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CThreadPool::MainThreadjob, CUtlMemory<CThreadPool::MainThreadjob, int> >::CUtlVector(); // 600
	CThreadMultiWaitManualEvent::CThreadMultiWaitManualEvent(); // 600
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1259
	ThreadPause(void); // 1264
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1272
	{
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
		}
	}
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1346
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1350
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1358
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1365
	COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_FiberTools>, false>::AddRef(
		bool bIsWrapperRef);  // 602
	CUtlMemory<CThreadedJob::IsGrowable(); // 881
	CUtlMemory<CThreadedJob::IsExternallyAllocated(); // 888
	CUtlMemory<CThreadedJob::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<CThreadedJob::ResetDbgInfo(); // 1024
	CUtlVectorBase<CThreadedJob::EnsureCapacity(
			int num);  // 604
} /* size: 0, inline expansions: 58 (1564 bytes) */

// <001DB98A> tier0/jobthread.cpp:589
void CThreadPool::CThreadPool(bool bRunFiberJobsWhenIdle)
{
} /* size: 0 */

// <001DA7B3> tier0/jobthread.cpp:609
// variables: 12
// function calls: 76
void CThreadPool::~CThreadPool()
{
	CThreadMultiWaitManualEvent::~CThreadMultiWaitManualEvent(); // 613
	{
		int i; // 1721
		CUtlMemory<CThreadPool::MainThreadjob, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CThreadPool::MainThreadjob, CUtlMemory<CThreadPool::MainThreadjob, int> >::Element(
			int i);  // 1723
		_Function_base::~_Function_base(); // 336
		function<void()>::~function()>* this); // 390
		MainThreadjob::~MainThreadjob(); // 1526
		Destruct<CThreadPool::MainThreadjob>(MainThreadjob* pMemory); // 1723
	}
	CUtlVectorBase<CThreadPool::MainThreadjob, CUtlMemory<CThreadPool::MainThreadjob, int> >::RemoveAll(); // 1798
	CUtlMemory<CThreadPool::MainThreadjob, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CThreadPool::MainThreadjob, int>::Purge(); // 903
	CUtlMemory<CThreadPool::MainThreadjob, int>::Purge(); // 1799
	CUtlVectorBase<CThreadPool::MainThreadjob, CUtlMemory<CThreadPool::MainThreadjob, int> >::Purge(); // 560
	ValidateAlignment<CThreadPool::MainThreadjob>(void); // 508
	CUtlMemory<CThreadPool::MainThreadjob, int>::Purge(); // 510
	CUtlMemory<CThreadPool::MainThreadjob, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CThreadPool::MainThreadjob, CUtlMemory<CThreadPool::MainThreadjob, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CThreadPool::MainThreadjob, CUtlMemory<CThreadPool::MainThreadjob, int> >::~CUtlVector(); // 613
	CThreadMutex::~CThreadMutex(); // 613
	CThreadMutex::~CThreadMutex(); // 613
	CUtlVectorBase<CJobThread::RemoveAll(); // 1798
	CUtlMemory<CJobThread::IsExternallyAllocated(); // 905
	CUtlMemory<CJobThread::Purge(); // 903
	CUtlMemory<CJobThread::Purge(); // 1799
	CUtlVectorBase<CJobThread::Purge(); // 560
	ValidateAlignment<CJobThread*>(void); // 508
	CUtlMemory<CJobThread::Purge(); // 510
	CUtlMemory<CJobThread::~CUtlMemory(); // 562
	CUtlVectorBase<CJobThread::~CUtlVectorBase(); // 410
	CUtlVector<CJobThread::~CUtlVector(); // 613
	{
		CJobQueue *& __ptr; // 396
		__uniq_ptr_impl<CJobQueue, std::default_delete<CJobQueue> >::_M_ptr(); // 396
		{
			CThreadedJob* pJob; // 163
			{
				int i; // 164
				{
					volatile CThreadedJob* pPop; // 237
					ThreadInterlockedExchange64(volatile int64* p,
									int64 value);  // 415
					ThreadInterlockedExchangePointer(volatile void** p,
									void* value);  // 237
					CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::GetLoopbackAddress(); // 242
				}
				CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::BeginPeek(
						bool bWaitIfAlreadyPeeked);  // 414
				{
					volatile CThreadedJob* pNext; // 277
					CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::InternalGetNextPopItemFromActiveList(
										volatile CThreadedJob* pCurItem);  // 277
					ThreadInterlockedCompareExchange64(volatile int64* p,
										int64 value,
										int64 comparand);  // 417
					ThreadInterlockedAssignPointerIf(volatile void** p,
									void* value,
									void* comparand);  // 270
				}
				CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::EndPeek_Pop(
						CThreadedJob* pPeeked);  // 260
				CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::EndPeek_Pop(
						CThreadedJob* pPeeked);  // 415
				CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::Pop(
					bool bWaitIfAlreadyPeeked);  // 168
				ThreadInterlockedDecrement(volatile int32* p); // 159
				Decrement(int* p); // 204
				CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
				CRefCountServiceBase<true, CRefMT>::DoRelease(); // 357
				CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >::Release(); // 173
			}
			{
				int i; // 177
			}
		}
		CJobQueue::~CJobQueue(); // 92
		default_delete<CJobQueue>::operator(
				CJobQueue* __ptr);  // 86
		default_delete<CJobQueue>::operator(
				CJobQueue* __ptr);  // 398
	}
	unique_ptr<CJobQueue, std::default_delete<CJobQueue> >::~unique_ptr(); // 613
	{
		CThreadedJob* pJob; // 163
		{
			int i; // 164
			{
				volatile CThreadedJob* pPop; // 237
				ThreadInterlockedExchange64(volatile int64* p,
								int64 value);  // 415
				ThreadInterlockedExchangePointer(volatile void** p,
								void* value);  // 237
				CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::GetLoopbackAddress(); // 242
			}
			CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::BeginPeek(
					bool bWaitIfAlreadyPeeked);  // 414
			{
				volatile CThreadedJob* pNext; // 277
				CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::InternalGetNextPopItemFromActiveList(
									volatile CThreadedJob* pCurItem);  // 277
				ThreadInterlockedCompareExchange64(volatile int64* p,
									int64 value,
									int64 comparand);  // 417
				ThreadInterlockedAssignPointerIf(volatile void** p,
								void* value,
								void* comparand);  // 270
			}
			CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::EndPeek_Pop(
					CThreadedJob* pPeeked);  // 260
			CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::EndPeek_Pop(
					CThreadedJob* pPeeked);  // 415
			CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::Pop(
				bool bWaitIfAlreadyPeeked);  // 168
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 204
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 357
			CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >::Release(); // 173
		}
		{
			int i; // 177
		}
	}
	CJobQueue::~CJobQueue(); // 613
	CUtlVectorBase<CThreadedJob::RemoveAll(); // 1798
	CUtlMemory<CThreadedJob::IsExternallyAllocated(); // 905
	CUtlMemory<CThreadedJob::Purge(); // 903
	CUtlMemory<CThreadedJob::Purge(); // 1799
	CUtlVectorBase<CThreadedJob::Purge(); // 560
	ValidateAlignment<CThreadedJob*>(void); // 508
	CUtlMemory<CThreadedJob::Purge(); // 510
	CUtlMemory<CThreadedJob::~CUtlMemory(); // 562
	CUtlVectorBase<CThreadedJob::~CUtlVectorBase(); // 410
	CUtlVector<CThreadedJob::~CUtlVector(); // 613
	CThreadMutex::~CThreadMutex(); // 613
} /* size: 904, inline expansions: 36 (1442 bytes) */

// <001DA72F> tier0/jobthread.cpp:609
// function call: 1
void CThreadPool::~CThreadPool()
{
	operator delete(void* p); // 613
} /* size: 31, inline expansions: 1 (9 bytes) */

// <001DA716> tier0/jobthread.cpp:609
void CThreadPool::~CThreadPool()
{
} /* size: 0 */

// <001DA5C8> tier0/jobthread.cpp:618
// variables: 2
// function calls: 4
void CThreadPool::IsCurrentThreadInPool()
{
	ThreadId_t nCurrentThreadID; // 620
	{
		int i; // 622
		CUtlVectorBase<CJobThread::Count(); // 622
		CUtlMemory<CJobThread::operator[](
				int i);  // 595
		CUtlVectorBase<CJobThread::operator[](
				int i);  // 624
		CThread::GetThreadID(); // 624
	}
} /* size: 104, variables: 1 */

// <001DA10B> tier0/jobthread.cpp:636
// variables: 5
// function calls: 17
void CThreadPool::SuspendExecution()
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_638; // 638
	{
		int i; // 643
		CUtlVectorBase<CJobThread::Count(); // 643
		CUtlMemory<CJobThread::operator[](
				int i);  // 588
		CUtlVectorBase<CJobThread::operator[](
				int i);  // 645
		atomic_thread_fence(memory_order __m); // 462
		CJobThread::RequestSuspend(); // 645
	}
	{
		int i; // 652
		CUtlVectorBase<CJobThread::Count(); // 652
		CUtlMemory<CJobThread::operator[](
				int i);  // 588
		CUtlVectorBase<CJobThread::operator[](
				int i);  // 654
		CThread::IsSuspended(); // 654
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
			int nLineNumber);  // 638
	__atomic_base<int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1488
	{
		int32 nWaiters; // 1491
		int32 nWake; // 1492
	}
	CThreadFastSemaphore::Release(
		int32 releaseCount);  // 649
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 662
} /* size: 458, variables: 1, inline expansions: 8 (403 bytes) */

// <001D9DC8> tier0/jobthread.cpp:666
// variables: 5
// function calls: 9
void CThreadPool::ResumeExecution()
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_668; // 668
	const char   __FUNCTION__; // 41984
	int result; // 670
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 669
	}
	{
		int i; // 673
		CUtlVectorBase<CJobThread::Count(); // 673
		CUtlMemory<CJobThread::operator[](
				int i);  // 588
		CUtlVectorBase<CJobThread::operator[](
				int i);  // 675
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
			int nLineNumber);  // 668
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 679
} /* size: 0, variables: 3, inline expansions: 6 (285 bytes) */

// <001D96B5> tier0/jobthread.cpp:685
// variables: 19
// function calls: 13
void CThreadPool::YieldWait(JobWaitItem_t* pItems, JobWaitExtra_t* pExtra, int nItems, bool bWaitAll, uint32 timeout, ThreadMultiWaitObjectSet_t** ppSaveObjectSet)
{
	bool bFinalResult; // 697
	uint32 nLoopTimeout; // 699
	uint64 nStartTicks; // 700
	JobWaitItem_t* pItemsCopy; // 706
	JobWaitExtra_t* pExtraCopy; // 707
	int nWaitItems; // 708
	int nCallerItems; // 709
	uint32 nWaitFlags; // 710
	bool bCanUseWaitSet; // 719
	ThreadMultiWaitObjectSet_t* pWaitSet; // 720
	bool bRunJobs; // 732
	const char   __FUNCTION__; // 64606
	bool bWait; // 782
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 778
	}
	{
		uint64 nSignalled; // 800
		int nResult; // 801
		{
			uint64 nCallerItemsMask; // 809
			{
				int i; // 841
				memmove(void* __dest,
					const void* __src,
					size_t __len);  // 115
				V_memmove(void* dest,
						const void* src,
						size_t count);  // 845
				memmove(void* __dest,
					const void* __src,
					size_t __len);  // 115
				V_memmove(void* dest,
						const void* src,
						size_t count);  // 846
			}
		}
		{
			uint64 nElapsedMs; // 866
		}
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 727
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 729
	CUtlVectorBase<CJobThread::Count(); // 719
	__atomic_base<int>::operator++(); // 735
	__atomic_base<int>::operator--(); // 879
	CThreadMultiWaitObject::GetWaitItem(
			ThreadMultiWaitItem_t* pItem,
			ThreadMultiWaitExtra_t* pExtra);  // 164
	JobGetWaitItem(JobWaitObject_t* pObject,
			JobWaitItem_t* pItem,
			JobWaitExtra_t* pExtra);  // 739
} /* size: 0, variables: 13, inline expansions: 9 (143 bytes) */

// <001D7E63> tier0/jobthread.cpp:887
// variables: 18
// function calls: 97
void CThreadPool::YieldWait(CThreadedJob** ppJobs, int nJobs, bool bWaitAll, uint32 timeout)
{
	CUtlVectorFixed<pollfd, 64> handles; // 892
	CUtlVectorFixed<ThreadMultiWaitExtra_t, 64> extra; // 893
	const char   __FUNCTION__; // 64606
	int nFinished; // 912
	uint64 nStartTicks; // 981
	{
		int i; // 900
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 903
		}
		CThreadSyncValue<int>::Load(); // 379
		CThreadSyncValue<int>::Load(); // 379
		CThreadSyncValue<int>::Load(); // 379
		CThreadedJob::IsFinished(); // 386
		IThreadPool::YieldWait(
				CThreadedJob* pJob,
				uint32 timeout);  // 386
		CThreadedJob::WaitForFinish(
				uint32 dwTimeout);  // 902
		CThreadSyncValue<int>::Load(); // 379
		CThreadSyncValue<int>::Load(); // 379
		CThreadSyncValue<int>::Load(); // 379
		CThreadedJob::IsFinished(); // 903
	}
	{
		int i; // 913
		CThreadSyncValue<int>::Load(); // 379
		CThreadSyncValue<int>::Load(); // 379
		CThreadSyncValue<int>::Load(); // 379
		CThreadedJob::IsFinished(); // 915
	}
	{
		int i; // 936
		{
			JobWaitItem_t waitItem; // 940
			JobWaitExtra_t waitExtra; // 941
			{
				JobManualEvent_t* pEvent; // 393
				ThreadInterlockedCompareExchange64(volatile int64* p,
									int64 value,
									int64 comparand);  // 416
				ThreadInterlockedCompareExchangePointer(volatile void** p,
									void* value,
									void* comparand);  // 394
			}
			CThreadedJob::CreateCompleteWaitItem(
						JobWaitItem_t* pItem,
						JobWaitExtra_t* pExtra);  // 942
		}
		CThreadSyncValue<int>::Load(); // 379
		CThreadSyncValue<int>::Load(); // 379
		CThreadSyncValue<int>::Load(); // 379
		CThreadedJob::IsFinished(); // 380
		CThreadSyncValue<int>::Load(); // 380
		CThreadedJob::IsFinishingOrFinished(); // 938
	}
	{
		int i; // 958
		{
			int nTail; // 962
			AlignedByteArrayExplicit_t<64, pollfd, 4>::Base(); // 268
			CUtlMemoryFixed<pollfd, 64>::Base(); // 112
			CUtlVectorBase<pollfd, CUtlMemoryFixed<pollfd, 64> >::Base(); // 368
			CUtlVectorBase<pollfd, CUtlMemoryFixed<pollfd, 64> >::ResetDbgInfo(); // 824
			CUtlVectorBase<pollfd, CUtlMemoryFixed<pollfd, 64> >::GrowMemory(
					int num);  // 1145
			CUtlVectorBase<pollfd, CUtlMemoryFixed<pollfd, 64> >::AddToTail(); // 962
			AlignedByteArrayExplicit_t<64, ThreadMultiWaitExtra_t, 4>::Base(); // 268
			CUtlMemoryFixed<ThreadMultiWaitExtra_t, 64>::Base(); // 112
			CUtlVectorBase<ThreadMultiWaitExtra_t, CUtlMemoryFixed<ThreadMultiWaitExtra_t, 64> >::Base(); // 368
			CUtlVectorBase<ThreadMultiWaitExtra_t, CUtlMemoryFixed<ThreadMultiWaitExtra_t, 64> >::ResetDbgInfo(); // 824
			CUtlVectorBase<ThreadMultiWaitExtra_t, CUtlMemoryFixed<ThreadMultiWaitExtra_t, 64> >::GrowMemory(
					int num);  // 1145
			CUtlVectorBase<ThreadMultiWaitExtra_t, CUtlMemoryFixed<ThreadMultiWaitExtra_t, 64> >::AddToTail(); // 963
			AlignedByteArrayExplicit_t<64, ThreadMultiWaitExtra_t, 4>::Base(); // 268
			CUtlMemoryFixed<ThreadMultiWaitExtra_t, 64>::Base(); // 272
			CUtlMemoryFixed<ThreadMultiWaitExtra_t, 64>::operator[](
					int i);  // 588
			CUtlVectorBase<ThreadMultiWaitExtra_t, CUtlMemoryFixed<ThreadMultiWaitExtra_t, 64> >::operator[](
					int i);  // 964
			AlignedByteArrayExplicit_t<64, pollfd, 4>::Base(); // 268
			CUtlMemoryFixed<pollfd, 64>::Base(); // 272
			CUtlMemoryFixed<pollfd, 64>::operator[](
					int i);  // 588
			CUtlVectorBase<pollfd, CUtlMemoryFixed<pollfd, 64> >::operator[](
					int i);  // 964
			{
				JobManualEvent_t* pEvent; // 393
				ThreadInterlockedCompareExchange64(volatile int64* p,
									int64 value,
									int64 comparand);  // 416
				ThreadInterlockedCompareExchangePointer(volatile void** p,
									void* value,
									void* comparand);  // 394
			}
			CThreadMultiWaitObject::GetWaitItem(
					ThreadMultiWaitItem_t* pItem,
					ThreadMultiWaitExtra_t* pExtra);  // 164
			JobGetWaitItem(JobWaitObject_t* pObject,
					JobWaitItem_t* pItem,
					JobWaitExtra_t* pExtra);  // 401
			CThreadedJob::CreateCompleteWaitItem(
						JobWaitItem_t* pItem,
						JobWaitExtra_t* pExtra);  // 964
			_DebuggerBreakInlineExpressionWrapper(void); // 963
		}
		CThreadSyncValue<int>::Load(); // 379
		CThreadSyncValue<int>::Load(); // 379
		CThreadSyncValue<int>::Load(); // 379
		CThreadedJob::IsFinished(); // 380
		CThreadSyncValue<int>::Load(); // 380
		CThreadedJob::IsFinishingOrFinished(); // 960
	}
	{
		int i; // 985
		CThreadSyncValue<int>::Load(); // 379
		CThreadSyncValue<int>::Load(); // 379
		CThreadSyncValue<int>::Load(); // 379
		CThreadedJob::IsFinished(); // 987
	}
	{
		uint64 nDiffMs; // 1021
		{
			int* _pCrash; // 1024
		}
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 1024
	}
	AlignedByteArrayExplicit_t<64, ThreadMultiWaitExtra_t, 4>::Base(); // 268
	CUtlMemoryFixed<ThreadMultiWaitExtra_t, 64>::Base(); // 112
	CUtlVectorBase<ThreadMultiWaitExtra_t, CUtlMemoryFixed<ThreadMultiWaitExtra_t, 64> >::Base(); // 368
	CUtlVectorBase<ThreadMultiWaitExtra_t, CUtlMemoryFixed<ThreadMultiWaitExtra_t, 64> >::ResetDbgInfo(); // 530
	AlignedByteArrayExplicit_t<64, ThreadMultiWaitExtra_t, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<64, ThreadMultiWaitExtra_t>::AlignedByteArray_t(); // 256
	CUtlMemoryFixed<ThreadMultiWaitExtra_t, 64>::CUtlMemoryFixed(
			int nGrowSize,
			int nInitSize);  // 527
	CUtlVectorBase<ThreadMultiWaitExtra_t, CUtlMemoryFixed<ThreadMultiWaitExtra_t, 64> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 467
	CUtlVectorFixed<ThreadMultiWaitExtra_t, 64>::CUtlVectorFixed(
			int growSize,
			int initCapacity);  // 893
	AlignedByteArrayExplicit_t<64, pollfd, 4>::Base(); // 268
	CUtlMemoryFixed<pollfd, 64>::Base(); // 112
	CUtlVectorBase<pollfd, CUtlMemoryFixed<pollfd, 64> >::Base(); // 368
	CUtlVectorBase<pollfd, CUtlMemoryFixed<pollfd, 64> >::ResetDbgInfo(); // 530
	AlignedByteArrayExplicit_t<64, pollfd, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<64, pollfd>::AlignedByteArray_t(); // 256
	CUtlMemoryFixed<pollfd, 64>::CUtlMemoryFixed(
			int nGrowSize,
			int nInitSize);  // 527
	CUtlVectorBase<pollfd, CUtlMemoryFixed<pollfd, 64> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 467
	CUtlVectorFixed<pollfd, 64>::CUtlVectorFixed(
			int growSize,
			int initCapacity);  // 892
	CUtlVectorBase<pollfd, CUtlMemoryFixed<pollfd, 64> >::Count(); // 969
	AlignedByteArrayExplicit_t<64, ThreadMultiWaitExtra_t, 4>::Base(); // 268
	CUtlMemoryFixed<ThreadMultiWaitExtra_t, 64>::Base(); // 112
	CUtlVectorBase<ThreadMultiWaitExtra_t, CUtlMemoryFixed<ThreadMultiWaitExtra_t, 64> >::Base(); // 971
	AlignedByteArrayExplicit_t<64, pollfd, 4>::Base(); // 268
	CUtlMemoryFixed<pollfd, 64>::Base(); // 112
	CUtlVectorBase<pollfd, CUtlMemoryFixed<pollfd, 64> >::Base(); // 971
	CUtlVectorBase<ThreadMultiWaitExtra_t, CUtlMemoryFixed<ThreadMultiWaitExtra_t, 64> >::Purge(); // 560
	ValidateAlignment<ThreadMultiWaitExtra_t>(void); // 258
	CUtlMemoryFixed<ThreadMultiWaitExtra_t, 64>::~CUtlMemoryFixed(); // 562
	CUtlVectorBase<ThreadMultiWaitExtra_t, CUtlMemoryFixed<ThreadMultiWaitExtra_t, 64> >::~CUtlVectorBase(); // 461
	CUtlVectorFixed<ThreadMultiWaitExtra_t, 64>::~CUtlVectorFixed(); // 1039
	CUtlVectorBase<pollfd, CUtlMemoryFixed<pollfd, 64> >::Purge(); // 560
	ValidateAlignment<pollfd>(void); // 258
	CUtlMemoryFixed<pollfd, 64>::~CUtlMemoryFixed(); // 562
	CUtlVectorBase<pollfd, CUtlMemoryFixed<pollfd, 64> >::~CUtlVectorBase(); // 461
	CUtlVectorFixed<pollfd, 64>::~CUtlVectorFixed(); // 1039
	ThreadPause(void); // 1004
	Plat_IsInDebugSession(void); // 1012
} /* size: 0, variables: 5, inline expansions: 37 (204 bytes) */

// <001D7D90> tier0/jobthread.cpp:1043
// variable: 1
// function call: 1
void CThreadPool::YieldSingleJob()
{
	{
		CThreadedJob* pJob; // 1047
	}
	CUtlVectorBase<CJobThread::Count(); // 1045
} /* size: 117, inline expansions: 1 (0 bytes) */

// <001D74C2> tier0/jobthread.cpp:1061
// variables: 4
// function calls: 35
void CThreadPool::YieldWaitPerFrameJobs()
{
	bool bRetVal; // 1066
	CUtlVector<CThreadedJob*, CUtlMemory<CThreadedJob*, int> > scratch; // 1067
	{
		int nCount; // 1072
		{
			int i; // 1086
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 204
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 357
			CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >::Release(); // 1088
		}
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 1071
		CUtlVectorBase<CThreadedJob::Count(); // 1072
		CUtlVectorBase<CThreadedJob::ResetDbgInfo(); // 824
		CUtlVectorBase<CThreadedJob::GrowMemory(
				int num);  // 784
		CUtlVectorBase<CThreadedJob::GrowVector(
				int num);  // 1445
		CUtlVectorBase<CThreadedJob::ShiftElementsRight(
					int elem,
					int num);  // 1446
		CUtlVectorBase<CThreadedJob::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<CThreadedJob::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<CThreadedJob::AddMultipleToTail(
					int num);  // 1071
		CUtlVectorBase<CThreadedJob::EnsureCount(
				int num);  // 1079
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 1080
		CUtlMemory<CThreadedJob::Base(); // 112
		CUtlVectorBase<CThreadedJob::Base(); // 1080
		CUtlVectorBase<CThreadedJob::RemoveAll(); // 1081
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 1082
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 1075
	}
	CUtlMemory<CThreadedJob::ValidateGrowSize(); // 475
	CUtlMemory<CThreadedJob::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CThreadedJob::ResetDbgInfo(); // 530
	CUtlVectorBase<CThreadedJob::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CThreadedJob::CUtlVector(); // 1067
	CUtlMemory<CThreadedJob::Purge(); // 903
	CUtlMemory<CThreadedJob::Purge(); // 1799
	CUtlVectorBase<CThreadedJob::Purge(); // 560
	ValidateAlignment<CThreadedJob*>(void); // 508
	CUtlMemory<CThreadedJob::Purge(); // 510
	CUtlMemory<CThreadedJob::~CUtlMemory(); // 562
	CUtlVectorBase<CThreadedJob::~CUtlVectorBase(); // 410
	CUtlVector<CThreadedJob::~CUtlVector(); // 1092
} /* size: 629, variables: 2, inline expansions: 13 (267 bytes) */

// <001E2036> tier0/jobthread.cpp:1098
// variable: 1
// function call: 1
void CThreadPool::AddJob(CThreadedJob* pJob)
{
	int flags; // 1114
	CUtlVectorBase<CJobThread::Count(); // 1105
} /* size: 48, variables: 1, inline expansions: 1 (0 bytes) */

// <001E1DE5> tier0/jobthread.cpp:1098
// variable: 1
// function calls: 8
void CThreadPool::AddJob(CThreadedJob* pJob)
{
	int flags; // 1114
	CThreadedJob::GetFlags(); // 1114
	CInterlockedIntT<int, 4>::operator int(); // 247
	CThreadPool::NumIdleThreads(); // 1117
	CThreadedJob::SetPriority(
			JobPriority_t priority);  // 1122
	CThreadSyncValue<int>::Load(); // 378
	CThreadSyncValue<int>::Load(); // 378
	CThreadedJob::CanExecute(); // 1125
	{
	}
	CThreadSyncValue<int>::CThreadSyncValue<JobStatusEnum_t>(); // 1133
} /* size: 164, variables: 1, inline expansions: 8 (28 bytes) */

// <001D7476> tier0/jobthread.cpp:1098
// variables: 2
void CThreadPool::AddJob(CThreadedJob* pJob)
{
	int flags; // 1114
	{
		int __executeCount; // 1128
	}
} /* size: 0, variables: 1 */

// <001D6FCB> tier0/jobthread.cpp:1142
// function calls: 17
void CThreadPool::AddPerFrameJob(CThreadedJob* pJob)
{
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 1144
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 199
	CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 356
	CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >::AddRef(); // 1145
	CUtlMemory<CThreadedJob::NumAllocated(); // 1196
	CUtlMemory<CThreadedJob::operator[](
			int i);  // 602
	CUtlVectorBase<CThreadedJob::Element(
		int i);  // 1201
	CopyConstruct<CThreadedJob*>(CThreadedJob** pMemory,
					CThreadedJob* const& src);  // 1201
	CUtlMemory<CThreadedJob::Base(); // 112
	CUtlVectorBase<CThreadedJob::Base(); // 368
	CUtlVectorBase<CThreadedJob::ResetDbgInfo(); // 824
	CUtlVectorBase<CThreadedJob::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CThreadedJob::AddToTail(
			CThreadedJob* const& src);  // 1146
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 1147
	CUtlVectorBase<CJobThread::Count(); // 1105
	CThreadPool::AddJob(
		CThreadedJob* pJob);  // 1149
} /* size: 346, inline expansions: 17 (340 bytes) */

// <001D6591> tier0/jobthread.cpp:1156
// variables: 3
// function calls: 40
void CThreadPool::InsertJobInQueue(CThreadedJob* pJob)
{
	{
		CSerialJobExecutor* pExecutor; // 1167
		CUtlMemoryPool<CThreadPool::CSerialJobExecutor>::Alloc(); // 321
		operator new(size_t size); // 1167
		CThreadMutex::CThreadMutex(
				const char* pName);  // 347
		CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 351
		IRefCounted::IRefCounted(); // 351
		CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >::CRefCounted1(); // 347
		CThreadSyncValue<int>::CThreadSyncValue<JobStatusEnum_t>(); // 342
		strcpy(char* __dest,
			const char* __src);  // 124
		V_strcpy(char* dest,
			const char* src);  // 349
		CThreadedJob::CThreadedJob(
				JobPriority_t priority);  // 324
		CSerialJobExecutor::CSerialJobExecutor(); // 1167
		CThreadSyncValue<int>::CThreadSyncValue<JobStatusEnum_t>(); // 1169
	}
	CThreadedJob::GetFlags(); // 1158
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 199
	CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 356
	CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >::AddRef(); // 1161
	CThreadedJob::GetPriority(); // 186
	{
	}
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 198
	CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::Push(
		CThreadedJob* pPushNode);  // 186
	CJobQueue::Push(
		CThreadedJob* pJob);  // 1162
	__atomic_base<int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1165
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 199
	CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 356
	CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >::AddRef(); // 1176
	__uniq_ptr_impl<CJobQueue, std::default_delete<CJobQueue> >::_M_ptr(); // 472
	unique_ptr<CJobQueue, std::default_delete<CJobQueue> >::get(); // 465
	unique_ptr<CJobQueue, std::default_delete<CJobQueue> >::operator->(); // 1178
	CThreadedJob::GetPriority(); // 186
	{
	}
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 198
	CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::Push(
		CThreadedJob* pPushNode);  // 186
	CJobQueue::Push(
		CThreadedJob* pJob);  // 1178
	__atomic_base<int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1488
	{
		int32 nWaiters; // 1491
		int32 nWake; // 1492
	}
	CThreadFastSemaphore::Release(
		int32 releaseCount);  // 1182
	__atomic_base<int>::load(
		memory_order __m);  // 361
	__atomic_base<int>::operator std::__atomic_base<int>::__int_type(); // 1187
	CInterlockedIntT<int, 4>::operator==(
			int rhs);  // 1187
} /* size: 0, inline expansions: 28 (380 bytes) */

// <001D5DC6> tier0/jobthread.cpp:1198
// variables: 7
// function calls: 29
void CThreadPool::GetJobFromQueue(CThreadedJob** ppJob, int nThreadId, bool bWait)
{
	const char   __FUNCTION__; // 41984
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1200
	}
	{
		uint i; // 1518
		__atomic_base<int>::load(
			memory_order __m);  // 1500
		__atomic_base<int>::compare_exchange_weak(
					__int_type& __i1,
					__int_type __i2,
					memory_order __m1,
					memory_order __m2);  // 555
		__atomic_base<int>::compare_exchange_weak(
					__int_type& __i1,
					__int_type __i2,
					memory_order __m);  // 1503
		ThreadPause(void); // 1509
		CThreadFastSemaphore::TryWait(); // 1520
		ThreadPause(void); // 1526
		ThreadPause(void); // 1527
	}
	__atomic_base<int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1530
	CThreadFastSemaphore::Wait(); // 1515
	CThreadFastSemaphore::Wait(); // 1207
	__uniq_ptr_impl<CJobQueue, std::default_delete<CJobQueue> >::_M_ptr(); // 472
	unique_ptr<CJobQueue, std::default_delete<CJobQueue> >::get(); // 465
	unique_ptr<CJobQueue, std::default_delete<CJobQueue> >::operator->(); // 1221
	{
		int i; // 196
		{
			CThreadedJob* pJob; // 198
			{
				volatile CThreadedJob* pPop; // 237
				ThreadInterlockedExchange64(volatile int64* p,
								int64 value);  // 415
				ThreadInterlockedExchangePointer(volatile void** p,
								void* value);  // 237
				CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::GetLoopbackAddress(); // 242
			}
			CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::BeginPeek(
					bool bWaitIfAlreadyPeeked);  // 414
			{
				volatile CThreadedJob* pNext; // 277
				CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::InternalGetNextPopItemFromActiveList(
									volatile CThreadedJob* pCurItem);  // 277
				ThreadInterlockedCompareExchange64(volatile int64* p,
									int64 value,
									int64 comparand);  // 417
				ThreadInterlockedAssignPointerIf(volatile void** p,
								void* value,
								void* comparand);  // 270
			}
			CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::EndPeek_Pop(
					CThreadedJob* pPeeked);  // 260
			CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::EndPeek_Pop(
					CThreadedJob* pPeeked);  // 415
			CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::Pop(
				bool bWaitIfAlreadyPeeked);  // 198
		}
	}
	CJobQueue::TryPop(
		CThreadedJob** ppJob);  // 1221
	__atomic_base<int>::load(
		memory_order __m);  // 1500
	__atomic_base<int>::compare_exchange_weak(
				__int_type& __i1,
				__int_type __i2,
				memory_order __m1,
				memory_order __m2);  // 555
	__atomic_base<int>::compare_exchange_weak(
				__int_type& __i1,
				__int_type __i2,
				memory_order __m);  // 1503
	ThreadPause(void); // 1509
	CThreadFastSemaphore::TryWait(); // 1209
} /* size: 0, variables: 1, inline expansions: 12 (300 bytes) */

// <001D59C1> tier0/jobthread.cpp:1225
// variables: 5
// function calls: 13
void CThreadPool::RunSerialJobs(CSerialJobExecutor* pSerialJob)
{
	{
		CThreadedJob* pJob; // 1229
		{
			int i; // 196
			{
				CThreadedJob* pJob; // 198
				{
					volatile CThreadedJob* pPop; // 237
					ThreadInterlockedExchange64(volatile int64* p,
									int64 value);  // 415
					ThreadInterlockedExchangePointer(volatile void** p,
									void* value);  // 237
					CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::GetLoopbackAddress(); // 242
				}
				CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::BeginPeek(
						bool bWaitIfAlreadyPeeked);  // 414
				{
					volatile CThreadedJob* pNext; // 277
					ThreadInterlockedCompareExchange64(volatile int64* p,
										int64 value,
										int64 comparand);  // 417
					ThreadInterlockedAssignPointerIf(volatile void** p,
									void* value,
									void* comparand);  // 270
					CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::InternalGetNextPopItemFromActiveList(
										volatile CThreadedJob* pCurItem);  // 277
				}
				CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::EndPeek_Pop(
						CThreadedJob* pPeeked);  // 260
				CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::EndPeek_Pop(
						CThreadedJob* pPeeked);  // 415
				CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::Pop(
					bool bWaitIfAlreadyPeeked);  // 198
			}
		}
		CJobQueue::TryPop(
			CThreadedJob** ppJob);  // 1230
		_DebuggerBreakInlineExpressionWrapper(void); // 1230
	}
	__atomic_base<int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1234
} /* size: 0, inline expansions: 1 (13 bytes) */

// <001D5666> tier0/jobthread.cpp:1238
// function calls: 12
void CThreadPool::ServiceJobAndRelease(CThreadedJob* pJob)
{
	CThreadSyncValue<int>::Load(); // 379
	CThreadSyncValue<int>::Load(); // 379
	CThreadSyncValue<int>::Load(); // 379
	CThreadedJob::IsFinished(); // 1242
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 357
	CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >::Release(); // 1249
	CThreadedJob::TryLock(
		const char* pFileName,
		int nLineNumber);  // 1242
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 435
	CThreadedJob::Unlock(
		const char* pFileName,
		int nLineNumber);  // 1246
} /* size: 198, inline expansions: 12 (238 bytes) */

// <001D4EFD> tier0/jobthread.cpp:1256
// variable: 1
// function calls: 28
void CThreadPool::AddLambdaInternal(VoidStdFunction_t& func, CThreadedJob** pJobOut, const char* pszDescription, unsigned int flags, JobPriority_t jobPriority)
{
	CThreadedJob* pJob; // 1258
	CUtlMemoryPool<CPooledStdFunctionJob>::Alloc(); // 82
	operator new(size_t size); // 1258
	CThreadMutex::CThreadMutex(
			const char* pName);  // 347
	CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 351
	IRefCounted::IRefCounted(); // 351
	CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >::CRefCounted1(); // 347
	CThreadSyncValue<int>::CThreadSyncValue<JobStatusEnum_t>(); // 342
	strcpy(char* __dest,
		const char* __src);  // 124
	V_strcpy(char* dest,
		const char* src);  // 349
	CThreadedJob::CThreadedJob(
			JobPriority_t priority);  // 470
	_Function_base::_M_empty(); // 576
	function<void()>::operator bool()>* this); // 391
	_Function_base::_Function_base(); // 389
	function<void()>::function(
		const function<void()>& __x); // 470
	V_strncpy<long unsigned int>(char* pDest,
					const char* pSrc,
					long unsigned int maxLenInChars);  // 418
	CThreadedJob::SetDescription(
			const char* pszDescription);  // 415
	CThreadedJob::SetDescription(
			const char* pszDescription);  // 472
	CStdFunctionJob::CStdFunctionJob(
			function<void()>& func,
			const char* pszDescription,
			JobPriority_t jobPriority);  // 86
	CPooledStdFunctionJob::CPooledStdFunctionJob(
				VoidStdFunction_t& func,
				const char* pszDescription,
				JobPriority_t jobPriority);  // 1258
	CThreadedJob::SetFlags(
		uint32 flags);  // 1259
	CUtlVectorBase<CJobThread::Count(); // 1105
	CThreadPool::AddJob(
		CThreadedJob* pJob);  // 1266
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 357
	CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >::Release(); // 1275
} /* size: 708, variables: 1, inline expansions: 27 (1626 bytes) */

// <001E39F6> tier0/jobthread.cpp:1280
// variables: 2
// function calls: 5
void CThreadPool::QueueMultipleAndWait(IMultipleWorkerJob* pWork, int nMaxCopies, const char* szDescription, JobPriority_t jp)
{
	const int  nJobs; // 1297
	CUtlVectorFixedGrowable<CExecMultiWorkerJob*, 48> jobs; // 1299
	CUtlVectorBase<CJobThread::Count(); // 1282
	__uniq_ptr_impl<CJobQueue, std::default_delete<CJobQueue> >::_M_ptr(); // 472
	unique_ptr<CJobQueue, std::default_delete<CJobQueue> >::get(); // 489
	unique_ptr<CJobQueue, std::default_delete<CJobQueue> >::operator bool(); // 854
	operator==<CJobQueue, std::default_delete<CJobQueue> >(const unique_ptr<CJobQueue, std::default_delete<CJobQueue> >& __x,
								nullptr_t);  // 1282
} /* size: 62, variables: 2, inline expansions: 5 (0 bytes) */

// <001E2558> tier0/jobthread.cpp:1280
// variables: 10
// function calls: 86
void CThreadPool::QueueMultipleAndWait(IMultipleWorkerJob* pWork, int nMaxCopies, const char* szDescription, JobPriority_t jp)
{
	const int  nJobs; // 1297
	CUtlVectorFixedGrowable<CExecMultiWorkerJob*, 48> jobs; // 1299
	CUtlMemory<CExecMultiWorkerJob::CUtlMemory(
			CExecMultiWorkerJob** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CExecMultiWorkerJob::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CExecMultiWorkerJob::CUtlMemoryFixedGrowable_Base(
					CExecMultiWorkerJob** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<48, CExecMultiWorkerJob::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<48, CExecMultiWorkerJob::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<48, CExecMultiWorkerJob::Base(); // 231
	CUtlMemoryFixedGrowable<CExecMultiWorkerJob::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CExecMultiWorkerJob::ResetDbgInfo(); // 530
	CUtlVectorBase<CExecMultiWorkerJob::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CExecMultiWorkerJob::CUtlVectorFixedGrowable(
				int growSize);  // 1299
	{
		int i; // 1300
		{
			CExecMultiWorkerJob* pJob; // 1302
			CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 351
			IRefCounted::IRefCounted(); // 351
			CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >::CRefCounted1(); // 347
			CThreadMutex::CThreadMutex(
					const char* pName);  // 347
			CThreadSyncValue<int>::CThreadSyncValue<JobStatusEnum_t>(); // 342
			strcpy(char* __dest,
				const char* __src);  // 124
			V_strcpy(char* dest,
				const char* src);  // 349
			CThreadedJob::CThreadedJob(
					JobPriority_t priority);  // 129
			V_strncpy<long unsigned int>(char* pDest,
							const char* pSrc,
							long unsigned int maxLenInChars);  // 418
			CThreadedJob::SetDescription(
					const char* pszDescription);  // 415
			CThreadedJob::SetDescription(
					const char* pszDescription);  // 131
			CExecMultiWorkerJob::CExecMultiWorkerJob(
						IMultipleWorkerJob* pJob,
						int nIndex,
						const char* pszDescription,
						JobPriority_t jobPriority);  // 1302
			ThreadInterlockedIncrement(volatile int32* p); // 158
			Increment(int* p); // 199
			CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 356
			CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >::AddRef(); // 1303
			CUtlMemory<CExecMultiWorkerJob::NumAllocated(); // 1196
			CUtlMemory<CExecMultiWorkerJob::Base(); // 112
			CUtlVectorBase<CExecMultiWorkerJob::Base(); // 368
			CUtlVectorBase<CExecMultiWorkerJob::ResetDbgInfo(); // 824
			CUtlMemory<CExecMultiWorkerJob::IsGrowable(); // 823
			CUtlMemory<CExecMultiWorkerJob::IsExternallyAllocated(); // 859
			CUtlMemory<CExecMultiWorkerJob::IsExternallyAllocated(); // 861
			CUtlMemory<CExecMultiWorkerJob::Grow(
				int num);  // 806
			CUtlVectorBase<CExecMultiWorkerJob::GrowMemory(
					int num);  // 1198
			CUtlMemory<CExecMultiWorkerJob::operator[](
					int i);  // 602
			CUtlVectorBase<CExecMultiWorkerJob::Element(
				int i);  // 1201
			CopyConstruct<CExecMultiWorkerJob*>(CExecMultiWorkerJob** pMemory,
								CExecMultiWorkerJob* const& src);  // 1201
			CUtlVectorBase<CExecMultiWorkerJob::AddToTail(
					CExecMultiWorkerJob* const& src);  // 1304
			CThreadedJob::GetPriority(); // 186
			{
			}
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 415
			ThreadInterlockedExchangePointer(volatile void** p,
							void* value);  // 198
			CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::Push(
				CThreadedJob* pPushNode);  // 186
			CJobQueue::Push(
				CThreadedJob* pJob);  // 1308
			CThreadSyncValue<int>::CThreadSyncValue<JobStatusEnum_t>(); // 1307
			__uniq_ptr_impl<CJobQueue, std::default_delete<CJobQueue> >::_M_ptr(); // 472
			unique_ptr<CJobQueue, std::default_delete<CJobQueue> >::get(); // 465
			unique_ptr<CJobQueue, std::default_delete<CJobQueue> >::operator->(); // 1308
			CUtlMemoryPool<CExecMultiWorkerJob>::Alloc(); // 123
			operator new(size_t size); // 1302
		}
	}
	CUtlVectorBase<CJobThread::Count(); // 246
	CThreadPool::NumThreads(); // 1297
	__atomic_base<int>::load(
		memory_order __m);  // 361
	__atomic_base<int>::operator std::__atomic_base<int>::__int_type(); // 1319
	CInterlockedIntT<int, 4>::operator==(
			int rhs);  // 1319
	{
		CThreadedJob* pJob; // 1329
		CUtlVectorFixedGrowable<CExecMultiWorkerJob*, 48>& __for_range; // 36116
		iterator __for_begin; // 36127
		iterator __for_end; // 36138
		CUtlMemory<CExecMultiWorkerJob::Base(); // 112
		CUtlVectorBase<CExecMultiWorkerJob::Base(); // 102
		CUtlVectorBase<CExecMultiWorkerJob::begin(); // 1329
		CUtlVectorBase<CExecMultiWorkerJob::Count(); // 104
		CUtlVectorBase<CExecMultiWorkerJob::end(); // 1329
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 357
		CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >::Release(); // 1332
	}
	CUtlMemory<CExecMultiWorkerJob::IsExternallyAllocated(); // 577
	CUtlMemory<CExecMultiWorkerJob::ConvertToExternalMemory(
				CExecMultiWorkerJob** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CExecMultiWorkerJob::Purge_FixedGrowable(
				CExecMultiWorkerJob** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CExecMultiWorkerJob::Purge_FixedGrowable(
				CExecMultiWorkerJob** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<48, CExecMultiWorkerJob::Base(); // 237
	CUtlMemoryFixedGrowable<CExecMultiWorkerJob::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CExecMultiWorkerJob::RemoveAll(); // 1798
	CUtlMemory<CExecMultiWorkerJob::Base(); // 112
	CUtlVectorBase<CExecMultiWorkerJob::Base(); // 368
	CUtlVectorBase<CExecMultiWorkerJob::ResetDbgInfo(); // 1800
	CUtlVectorBase<CExecMultiWorkerJob::Purge(); // 560
	ValidateAlignment<CExecMultiWorkerJob*>(void); // 508
	CUtlMemory<CExecMultiWorkerJob::Purge(); // 903
	CUtlMemory<CExecMultiWorkerJob::Purge(); // 510
	CUtlMemory<CExecMultiWorkerJob::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CExecMultiWorkerJob::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CExecMultiWorkerJob::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CExecMultiWorkerJob::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CExecMultiWorkerJob::~CUtlVectorFixedGrowable(); // 1335
	__atomic_base<int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1488
	{
		int32 nWaiters; // 1491
		int32 nWake; // 1492
	}
	CThreadFastSemaphore::Release(
		int32 releaseCount);  // 1314
} /* size: 0, variables: 2, inline expansions: 36 (1312 bytes) */

// <001D4E0C> tier0/jobthread.cpp:1280
// variables: 8
void CThreadPool::QueueMultipleAndWait(IMultipleWorkerJob* pWork, int nMaxCopies, const char* szDescription, JobPriority_t jp)
{
	const int  nJobs; // 1297
	CUtlVectorFixedGrowable<CExecMultiWorkerJob*, 48> jobs; // 1299
	{
		int i; // 1300
		{
			CExecMultiWorkerJob* pJob; // 1302
		}
	}
	{
		CThreadedJob* pJob; // 1329
		CUtlVectorFixedGrowable<CExecMultiWorkerJob*, 48>& __for_range; // 36151
		iterator __for_begin; // 22863
		iterator __for_end; // 22863
	}
} /* size: 0, variables: 2 */

// <001D388E> tier0/jobthread.cpp:1341
// variables: 20
// function calls: 76
void CThreadPool::Start(const ThreadPoolStartParams_t& startParams, const char* pszName)
{
	bool bSpewDetailedCpuInfo; // 1343
	const char   __FUNCTION__; // 26118
	const CPUInformation& ci; // 1386
	int nHwThreadsPer; // 1389
	int nThreads; // 1390
	int nStackSize; // 1413
	int priority; // 1419
	bool bDistribute; // 1427
	bool bForceAffinity; // 1452
	const uint64* pAffinityTable; // 1474
	int nLogicalProc; // 1523
	{
		int* _pCrash; // 1354
	}
	{
		int iThread; // 1554
		CUtlMemory<CJobThread::operator[](
				int i);  // 588
		CUtlVectorBase<CJobThread::operator[](
				int i);  // 1567
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1556
		CUtlMemory<CJobThread::NumAllocated(); // 1143
		CUtlMemory<CJobThread::IsGrowable(); // 823
		CUtlMemory<CJobThread::IsExternallyAllocated(); // 859
		CUtlMemory<CJobThread::IsExternallyAllocated(); // 861
		CUtlMemory<CJobThread::Grow(
			int num);  // 806
		CUtlMemory<CJobThread::Base(); // 112
		CUtlVectorBase<CJobThread::Base(); // 368
		CUtlVectorBase<CJobThread::ResetDbgInfo(); // 824
		CUtlVectorBase<CJobThread::GrowMemory(
				int num);  // 1145
		CUtlVectorBase<CJobThread::AddToTail(); // 1554
		{
		}
		{
		}
		CJobThread::CJobThread(
				CThreadPool* pOwner,
				int iThread,
				bool bRunFiberJobsWhenIdle);  // 442
		CJobThread::CJobThread(
				CThreadPool* pOwner,
				int iThread,
				bool bRunFiberJobsWhenIdle);  // 1555
		CUtlMemory<CJobThread::operator[](
				int i);  // 588
		CUtlVectorBase<CJobThread::operator[](
				int i);  // 1555
		CUtlMemory<CJobThread::operator[](
				int i);  // 588
		CUtlVectorBase<CJobThread::operator[](
				int i);  // 1556
		CBufferString::~CBufferString(); // 1484
		CFmtBufferStringN<80>::~CFmtBufferStringN(); // 1556
		CUtlMemory<CJobThread::operator[](
				int i);  // 588
		CUtlVectorBase<CJobThread::operator[](
				int i);  // 1557
		CInterlockedIntT<int, 4>::operator int(); // 247
		CThreadPool::NumIdleThreads(); // 1560
		CUtlVectorBase<CJobThread::Count(); // 1560
	}
	CUtlVectorBase<CJobThread::Count(); // 1352
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 1354
	CUtlMemory<CJobThread::IsGrowable(); // 881
	CUtlMemory<CJobThread::IsExternallyAllocated(); // 888
	CUtlMemory<CJobThread::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<CJobThread::ResetDbgInfo(); // 1024
	CUtlVectorBase<CJobThread::EnsureCapacity(
			int num);  // 1516
	{
		int i; // 153
		operator new(size_t,
				void* __p);  // 156
		CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::GetLoopbackAddress(); // 149
		CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::CTSFastPushQueue_Base(); // 156
	}
	CJobQueue::CJobQueue(); // 1084
	_Head_base<1, std::default_delete<CJobQueue>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CJobQueue> >::_Tuple_impl(); // 303
	_Head_base<0, CJobQueue::_Head_base(); // 303
	_Tuple_impl<0, CJobQueue::_Tuple_impl(); // 966
	tuple<CJobQueue::tuple(); // 169
	__uniq_ptr_impl<CJobQueue, std::default_delete<CJobQueue> >::_M_ptr(); // 169
	__uniq_ptr_impl<CJobQueue, std::default_delete<CJobQueue> >::__uniq_ptr_impl(
			pointer __p);  // 234
	__uniq_ptr_data<CJobQueue, std::default_delete<CJobQueue>, true, true>::__uniq_ptr_data(
			pointer);  // 311
	unique_ptr<CJobQueue, std::default_delete<CJobQueue> >::unique_ptr<>(
			pointer __p);  // 1084
	make_unique<CJobQueue>(void); // 1518
	{
		CThreadedJob* pJob; // 163
		{
			int i; // 164
			{
				volatile CThreadedJob* pPop; // 237
				ThreadInterlockedExchange64(volatile int64* p,
								int64 value);  // 415
				ThreadInterlockedExchangePointer(volatile void** p,
								void* value);  // 237
				CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::GetLoopbackAddress(); // 242
			}
			CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::BeginPeek(
					bool bWaitIfAlreadyPeeked);  // 414
			{
				volatile CThreadedJob* pNext; // 277
				CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::InternalGetNextPopItemFromActiveList(
									volatile CThreadedJob* pCurItem);  // 277
				ThreadInterlockedCompareExchange64(volatile int64* p,
									int64 value,
									int64 comparand);  // 417
				ThreadInterlockedAssignPointerIf(volatile void** p,
								void* value,
								void* comparand);  // 270
			}
			CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::EndPeek_Pop(
					CThreadedJob* pPeeked);  // 260
			CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::EndPeek_Pop(
					CThreadedJob* pPeeked);  // 415
			CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::Pop(
				bool bWaitIfAlreadyPeeked);  // 168
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 204
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 357
			CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >::Release(); // 173
		}
		{
			int i; // 177
		}
	}
	CJobQueue::~CJobQueue(); // 92
	default_delete<CJobQueue>::operator(
			CJobQueue* __ptr);  // 86
	default_delete<CJobQueue>::operator(
			CJobQueue* __ptr);  // 204
	__uniq_ptr_impl<CJobQueue, std::default_delete<CJobQueue> >::reset(
		pointer __p);  // 184
	__uniq_ptr_impl<CJobQueue, std::default_delete<CJobQueue> >::operator=(
			__uniq_ptr_impl<CJobQueue, std::default_delete<CJobQueue> >& __u);  // 236
	__uniq_ptr_data<CJobQueue, std::default_delete<CJobQueue>, true, true>::operator=(
			__uniq_ptr_data<CJobQueue, std::default_delete<CJobQueue>, true, true> &);  // 408
	unique_ptr<CJobQueue, std::default_delete<CJobQueue> >::operator=(
			unique_ptr<CJobQueue, std::default_delete<CJobQueue> > &);  // 1518
	{
		CJobQueue *& __ptr; // 396
		__uniq_ptr_impl<CJobQueue, std::default_delete<CJobQueue> >::_M_ptr(); // 396
	}
	unique_ptr<CJobQueue, std::default_delete<CJobQueue> >::~unique_ptr(); // 1518
	__atomic_base<int>::__atomic_base(
			__int_type __i);  // 843
	atomic<int>::atomic(
		__integral_type __i);  // 1484
	CThreadFastSemaphore::CThreadFastSemaphore(); // 1520
} /* size: 0, variables: 11, inline expansions: 29 (2768 bytes) */

// <001D280C> tier0/jobthread.cpp:1627
// variables: 16
// function calls: 58
void CThreadPool::Stop(int timeout)
{
	const char   __FUNCTION__; // 4844
	{
		int i; // 1636
		CUtlVectorBase<CJobThread::Count(); // 1636
		CUtlMemory<CJobThread::operator[](
				int i);  // 588
		CUtlVectorBase<CJobThread::operator[](
				int i);  // 1638
		atomic_thread_fence(memory_order __m); // 456
		CJobThread::RequestExit(); // 1638
	}
	{
		int i; // 1644
		CUtlVectorBase<CJobThread::Count(); // 1644
		CUtlMemory<CJobThread::operator[](
				int i);  // 588
		CUtlVectorBase<CJobThread::operator[](
				int i);  // 1648
		CUtlMemory<CJobThread::operator[](
				int i);  // 588
		CUtlVectorBase<CJobThread::operator[](
				int i);  // 1649
	}
	{
		CThreadedJob* pJob; // 1655
		{
			int i; // 196
			{
				CThreadedJob* pJob; // 198
				{
					volatile CThreadedJob* pPop; // 237
					ThreadInterlockedExchange64(volatile int64* p,
									int64 value);  // 415
					ThreadInterlockedExchangePointer(volatile void** p,
									void* value);  // 237
					CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::GetLoopbackAddress(); // 242
				}
				CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::BeginPeek(
						bool bWaitIfAlreadyPeeked);  // 414
				{
					volatile CThreadedJob* pNext; // 277
					CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::InternalGetNextPopItemFromActiveList(
										volatile CThreadedJob* pCurItem);  // 277
					ThreadInterlockedCompareExchange64(volatile int64* p,
										int64 value,
										int64 comparand);  // 417
					ThreadInterlockedAssignPointerIf(volatile void** p,
									void* value,
									void* comparand);  // 270
				}
				CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::EndPeek_Pop(
						CThreadedJob* pPeeked);  // 260
				CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::EndPeek_Pop(
						CThreadedJob* pPeeked);  // 415
				CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::Pop(
					bool bWaitIfAlreadyPeeked);  // 198
			}
		}
		CJobQueue::TryPop(
			CThreadedJob** ppJob);  // 1656
		__atomic_base<int>::store(
			__int_type __i,
			memory_order __m);  // 369
		__atomic_base<int>::operator=(
				__int_type __i);  // 1662
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 357
		CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >::Release(); // 1659
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1665
	}
	CUtlVectorBase<CJobThread::Count(); // 135
	CUtlVectorBase<CJobThread::IsEmpty(); // 1634
	__atomic_base<int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1488
	{
		int32 nWaiters; // 1491
		int32 nWake; // 1492
	}
	CThreadFastSemaphore::Release(
		int32 releaseCount);  // 1642
	CInterlockedIntT<int, 4>::operator==(
			int rhs);  // 1665
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 1666
	CUtlVectorBase<CJobThread::RemoveAll(); // 1667
	{
		CThreadedJob* pJob; // 163
		{
			int i; // 164
			{
				volatile CThreadedJob* pPop; // 237
				ThreadInterlockedExchange64(volatile int64* p,
								int64 value);  // 415
				ThreadInterlockedExchangePointer(volatile void** p,
								void* value);  // 237
				CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::GetLoopbackAddress(); // 242
			}
			CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::BeginPeek(
					bool bWaitIfAlreadyPeeked);  // 414
			{
				volatile CThreadedJob* pNext; // 277
				CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::InternalGetNextPopItemFromActiveList(
									volatile CThreadedJob* pCurItem);  // 277
				ThreadInterlockedCompareExchange64(volatile int64* p,
									int64 value,
									int64 comparand);  // 417
				ThreadInterlockedAssignPointerIf(volatile void** p,
								void* value,
								void* comparand);  // 270
			}
			CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::EndPeek_Pop(
					CThreadedJob* pPeeked);  // 260
			CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::EndPeek_Pop(
					CThreadedJob* pPeeked);  // 415
			CTSFastPushQueue_Base<CThreadedJob, CThreadedJob, CThreadedJob, &CThreadedJob::m_pNext>::Pop(
				bool bWaitIfAlreadyPeeked);  // 168
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 204
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 357
			CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >::Release(); // 173
		}
		{
			int i; // 177
		}
	}
	CJobQueue::~CJobQueue(); // 92
	default_delete<CJobQueue>::operator(
			CJobQueue* __ptr);  // 86
	default_delete<CJobQueue>::operator(
			CJobQueue* __ptr);  // 204
	__uniq_ptr_impl<CJobQueue, std::default_delete<CJobQueue> >::reset(
		pointer __p);  // 511
	unique_ptr<CJobQueue, std::default_delete<CJobQueue> >::reset(
		pointer __p);  // 436
	unique_ptr<CJobQueue, std::default_delete<CJobQueue> >::operator=(
			nullptr_t);  // 1668
	CThreadFastSemaphore::~CThreadFastSemaphore(); // 1670
} /* size: 0, variables: 1, inline expansions: 15 (1741 bytes) */

// <001E18B2> tier0/jobthread.cpp:1680
// variables: 2
// function calls: 18
void CThreadedJob::Execute()
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1687; // 1687
	JobStatus_t result; // 1689
	CThreadSyncValue<int>::Load(); // 379
	CThreadSyncValue<int>::Load(); // 379
	CThreadSyncValue<int>::Load(); // 379
	CThreadedJob::IsFinished(); // 1682
	CThreadSyncValue<int>::Load(); // 1684
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 1687
	CThreadSyncValue<int>::Load(); // 1691
	CThreadSyncValue<int>::Load(); // 1735
	{
	}
	CThreadSyncValue<int>::Load(); // 1736
	CThreadSyncValue<int>::Store(
		int value);  // 1697
	CThreadSyncValue<int>::Store(
		int value);  // 1705
	CThreadSyncValue<int>::Store(
		int value);  // 1719
	{
	}
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1740
	CThreadedJob::Execute(); // 1680
} /* size: 0, variables: 2, inline expansions: 18 (519 bytes) */

// <001D2797> tier0/jobthread.cpp:1680
// variables: 5
void CThreadedJob::Execute()
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1687; // 1687
	JobStatus_t result; // 1689
	const char   __FUNCTION__; // 3665
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1726
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1735
	}
} /* size: 0, variables: 3 */

// <001E20E5> tier0/jobthread.cpp:1746
// variable: 1
// function calls: 17
void CThreadedJob::Abort(bool bDiscard)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1753; // 1753
	CThreadSyncValue<int>::Load(); // 379
	CThreadSyncValue<int>::Load(); // 379
	CThreadSyncValue<int>::Load(); // 379
	CThreadedJob::IsFinished(); // 1748
	CThreadSyncValue<int>::Load(); // 1750
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 1753
	CThreadSyncValue<int>::Load(); // 1755
	CThreadSyncValue<int>::Load(); // 1791
	{
	}
	CThreadSyncValue<int>::Store(
		int value);  // 1766
	CThreadSyncValue<int>::Store(
		int value);  // 1779
	CThreadSyncValue<int>::Load(); // 1794
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1795
	CThreadedJob::Abort(
		bool bDiscard);  // 1746
} /* size: 0, variables: 1, inline expansions: 17 (570 bytes) */

// <001D272B> tier0/jobthread.cpp:1746
// variables: 3
void CThreadedJob::Abort(bool bDiscard)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1753; // 1753
	const char   __FUNCTION__; // 26118
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1791
	}
} /* size: 0, variables: 2 */

// <001D26A8> tier0/jobthread.cpp:1797
// function call: 1
IThreadPool* CreateNewThreadPool(void)
{
	operator new(size_t size); // 1799
} /* size: 47, inline expansions: 1 (15 bytes) */

// <001D2601> tier0/jobthread.cpp:1802
void DestroyThreadPool(IThreadPool* pPool)
{
} /* size: 0 */

// <001C2F1B> tier0/jobthread.cpp:1821
// member functions: 24
// member variables: 7
// vtable entries: 5
// class size: 288
class CAsyncScheduledFunctionManager : public IAsyncScheduledFunctions {
	/* tier0/jobthread.cpp:1913 */
	struct scheduled_call_t {
		double m_flTimeToCall; /* 0 8 */
		CUtlDelegate<float()> m_fn; /* 8 24 */
		/* tier0/jobthread.cpp:1918 */
		void scheduled_call_t(scheduled_call_t* );
		/* tier0/jobthread.cpp:1919 */
		void scheduled_call_t(scheduled_call_t* , double, const CUtlDelegate<float()>& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tier0/jobthread.cpp:1926 */
	struct call_time_change_t {
		AsyncFunctionHandle_t m_nHandle; /* 0 4 */
		double m_flTime; /* 8 8 */
		/* tier0/jobthread.cpp:1930 */
		void call_time_change_t(call_time_change_t* );
		/* tier0/jobthread.cpp:1931 */
		void call_time_change_t(call_time_change_t* , AsyncFunctionHandle_t, double);
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class IAsyncScheduledFunctions <ancestor>; */ /* 0 8 */
	void CAsyncScheduledFunctionManager(CAsyncScheduledFunctionManager* , const CAsyncScheduledFunctionManager& );
	/* tier0/jobthread.cpp:1824 */
	virtual void ~CAsyncScheduledFunctionManager(CAsyncScheduledFunctionManager* );
	/* tier0/jobthread.cpp:1828 */
	void CAsyncScheduledFunctionManager(CAsyncScheduledFunctionManager* );
	/* tier0/jobthread.cpp:1835 */
	virtual void Init(CAsyncScheduledFunctionManager* );
	/* tier0/jobthread.cpp:1849 */
	virtual void Shutdown(CAsyncScheduledFunctionManager* );
	/* tier0/jobthread.cpp:1860 */
	virtual AsyncFunctionHandle_t RegisterScheduledFunction(CAsyncScheduledFunctionManager* , const CUtlDelegate<float()>& , double);
	/* tier0/jobthread.cpp:1890 */
	virtual bool RescheduleFunction(CAsyncScheduledFunctionManager* , AsyncFunctionHandle_t, double);
	/* tier0/jobthread.cpp:1899 */
	virtual void UnregisterScheduledFunction(CAsyncScheduledFunctionManager* , AsyncFunctionHandle_t);
private:
	/* tier0/jobthread.cpp:1949 */
	void RunScheduledCalls(CAsyncScheduledFunctionManager* );
	/* tier0/jobthread.cpp:1906 */
	uintp StaticRunScheduledCalls(void* );
	ThreadHandle_t m_hCallThread; /* 8 8 */
	volatile bool m_bJoin; /* 16 1 */
	CThreadEvent m_wakeup; /* 24 128 */
	CThreadMutex m_callMutex; /* 152 72 */
	CUtlVector<CAsyncScheduledFunctionManager::scheduled_call_t, CUtlMemory<CAsyncScheduledFunctionManager::scheduled_call_t, int> > m_scheduledCalls; /* 224 32 */
	CTSItemList<CAsyncScheduledFunctionManager::call_time_change_t> m_pending __attribute__((__aligned__(16))); /* 256 32 */
	void CAsyncScheduledFunctionManager(class CAsyncScheduledFunctionManager *, const class CAsyncScheduledFunctionManager  &); /* linkage=_ZN30CAsyncScheduledFunctionManagerC4ERKS_ */
	virtual void ~CAsyncScheduledFunctionManager(class CAsyncScheduledFunctionManager *); /* linkage=_ZN30CAsyncScheduledFunctionManagerD4Ev */
	void CAsyncScheduledFunctionManager(class CAsyncScheduledFunctionManager *); /* linkage=_ZN30CAsyncScheduledFunctionManagerC4Ev */
	/* <1dfca2> tier0/jobthread.cpp:1835 */
	virtual void Init(class CAsyncScheduledFunctionManager *); /* linkage=_ZN30CAsyncScheduledFunctionManager4InitEv */
	/* <1dff86> tier0/jobthread.cpp:1849 */
	virtual void Shutdown(class CAsyncScheduledFunctionManager *); /* linkage=_ZN30CAsyncScheduledFunctionManager8ShutdownEv */
	virtual class AsyncFunctionHandle_t RegisterScheduledFunction(class CAsyncScheduledFunctionManager *, const class CUtlDelegate<float()>  &, double); /* linkage=_ZN30CAsyncScheduledFunctionManager25RegisterScheduledFunctionERK12CUtlDelegateIFfvEEd */
	/* <1e150a> tier0/jobthread.cpp:1890 */
	virtual bool RescheduleFunction(class CAsyncScheduledFunctionManager *, class AsyncFunctionHandle_t, double); /* linkage=_ZN30CAsyncScheduledFunctionManager18RescheduleFunctionE21AsyncFunctionHandle_td */
	virtual void UnregisterScheduledFunction(class CAsyncScheduledFunctionManager *, class AsyncFunctionHandle_t); /* linkage=_ZN30CAsyncScheduledFunctionManager27UnregisterScheduledFunctionE21AsyncFunctionHandle_t */
	void RunScheduledCalls(class CAsyncScheduledFunctionManager *); /* linkage=_ZN30CAsyncScheduledFunctionManager17RunScheduledCallsEv */
	uintp StaticRunScheduledCalls(void *); /* linkage=_ZN30CAsyncScheduledFunctionManager23StaticRunScheduledCallsEPv */
} __attribute__((__aligned__(16)));

// <001D1D3D> tier0/jobthread.cpp:1824
// function calls: 35
void CAsyncScheduledFunctionManager::~CAsyncScheduledFunctionManager()
{
	CAsyncScheduledFunctionManager::Shutdown(); // 1849
	CAsyncScheduledFunctionManager::Shutdown(); // 1826
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 792
	CTSItemList<CAsyncScheduledFunctionManager::call_time_change_t>::Detach(); // 737
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 745
	CTSItemList<CAsyncScheduledFunctionManager::call_time_change_t>::Purge(); // 732
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 135
	CTSListBase::~CTSListBase(); // 733
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 135
	CTSListBase::~CTSListBase(); // 733
	CTSItemList<CAsyncScheduledFunctionManager::call_time_change_t>::~CTSItemList(); // 1827
	RemoveAll(const CUtlVectorBase<CAsyncScheduledFunctionManager::scheduled_call_t, CUtlMemory<CAsyncScheduledFunctionManager::schedul this); // 1798
	CUtlMemory<CAsyncScheduledFunctionManager::scheduled_call_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAsyncScheduledFunctionManager::scheduled_call_t, int>::Purge(); // 903
	CUtlMemory<CAsyncScheduledFunctionManager::scheduled_call_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CAsyncScheduledFunctionManager::scheduled_call_t, CUtlMemory<CAsyncScheduledFunctionManager::schedul this); // 560
	ValidateAlignment<CAsyncScheduledFunctionManager::scheduled_call_t>(void); // 508
	CUtlMemory<CAsyncScheduledFunctionManager::scheduled_call_t, int>::Purge(); // 510
	CUtlMemory<CAsyncScheduledFunctionManager::scheduled_call_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CAsyncScheduledFunctionManager::scheduled_call_t, CUtlMemory<CAsyncScheduledFunctionManager::schedul this); // 410
	~CUtlVector(const CUtlVector<CAsyncScheduledFunctionManager::scheduled_call_t, CUtlMemory<CAsyncScheduledFunctionManager::scheduled_c this); // 1827
	CThreadMutex::~CThreadMutex(); // 1827
	CThreadEvent::~CThreadEvent(); // 1827
} /* size: 626, inline expansions: 35 (1885 bytes) */

// <001D142A> tier0/jobthread.cpp:1824
// function calls: 37
void CAsyncScheduledFunctionManager::~CAsyncScheduledFunctionManager()
{
	CAsyncScheduledFunctionManager::Shutdown(); // 1849
	CAsyncScheduledFunctionManager::Shutdown(); // 1826
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 792
	CTSItemList<CAsyncScheduledFunctionManager::call_time_change_t>::Detach(); // 737
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 745
	CTSItemList<CAsyncScheduledFunctionManager::call_time_change_t>::Purge(); // 732
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 135
	CTSListBase::~CTSListBase(); // 733
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 135
	CTSListBase::~CTSListBase(); // 733
	CTSItemList<CAsyncScheduledFunctionManager::call_time_change_t>::~CTSItemList(); // 1827
	RemoveAll(const CUtlVectorBase<CAsyncScheduledFunctionManager::scheduled_call_t, CUtlMemory<CAsyncScheduledFunctionManager::schedul this); // 1798
	CUtlMemory<CAsyncScheduledFunctionManager::scheduled_call_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CAsyncScheduledFunctionManager::scheduled_call_t, int>::Purge(); // 903
	CUtlMemory<CAsyncScheduledFunctionManager::scheduled_call_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CAsyncScheduledFunctionManager::scheduled_call_t, CUtlMemory<CAsyncScheduledFunctionManager::schedul this); // 560
	ValidateAlignment<CAsyncScheduledFunctionManager::scheduled_call_t>(void); // 508
	CUtlMemory<CAsyncScheduledFunctionManager::scheduled_call_t, int>::Purge(); // 510
	CUtlMemory<CAsyncScheduledFunctionManager::scheduled_call_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CAsyncScheduledFunctionManager::scheduled_call_t, CUtlMemory<CAsyncScheduledFunctionManager::schedul this); // 410
	~CUtlVector(const CUtlVector<CAsyncScheduledFunctionManager::scheduled_call_t, CUtlMemory<CAsyncScheduledFunctionManager::scheduled_c this); // 1827
	CThreadMutex::~CThreadMutex(); // 1827
	CThreadEvent::~CThreadEvent(); // 1827
	IAsyncScheduledFunctions::~IAsyncScheduledFunctions(); // 1827
	CAsyncScheduledFunctionManager::~CAsyncScheduledFunctionManager(); // 1827
} /* size: 634, inline expansions: 37 (2471 bytes) */

// <001D1411> tier0/jobthread.cpp:1824
inline void CAsyncScheduledFunctionManager::~CAsyncScheduledFunctionManager()
{
} /* size: 0 */

// <001D1393> tier0/jobthread.cpp:1828
void CAsyncScheduledFunctionManager::CAsyncScheduledFunctionManager()
{
} /* size: 0 */

// <001D137A> tier0/jobthread.cpp:1828
inline void CAsyncScheduledFunctionManager::CAsyncScheduledFunctionManager()
{
} /* size: 0 */

// <001DFCA2> tier0/jobthread.cpp:1835
// function call: 1
void CAsyncScheduledFunctionManager::Init()
{
	CreateSimpleThread(ThreadFunc_t pfnThread,
				void* pParam,
				unsigned int stackSize,
				const char* szName,
				size_t nDuplicateParamSize);  // 1840
} /* size: 88, inline expansions: 1 (35 bytes) */

// <001DFBBC> tier0/jobthread.cpp:1835
// variable: 1
// function call: 1
void CAsyncScheduledFunctionManager::Init()
{
	{
		int* _pCrash; // 1843
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 1843
} /* size: 123, inline expansions: 1 (29 bytes) */

// <001D1347> tier0/jobthread.cpp:1835
// variables: 2
inline void CAsyncScheduledFunctionManager::Init()
{
	const char   __FUNCTION__; // 4844
	{
		int* _pCrash; // 1843
	}
} /* size: 0, variables: 1 */

// <001DFF86> tier0/jobthread.cpp:1849
// function call: 1
void CAsyncScheduledFunctionManager::Shutdown()
{
	CAsyncScheduledFunctionManager::Shutdown(); // 1849
} /* size: 81, inline expansions: 1 (44 bytes) */

// <001D132E> tier0/jobthread.cpp:1849
inline void CAsyncScheduledFunctionManager::Shutdown()
{
} /* size: 0 */

// <001D0A09> tier0/jobthread.cpp:1860
// variables: 3
// function calls: 38
void CAsyncScheduledFunctionManager::RegisterScheduledFunction(const CUtlDelegate<float()>& fn, double flTimeToCall)
{
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1868; // 1868
		int nIndex; // 1870
		{
			int i; // 1871
			Count(const CUtlVectorBase<CAsyncScheduledFunctionManager::scheduled_call_t, CUtlMemory<CAsyncScheduledFunctionManager::s this); // 1871
			CUtlMemory<CAsyncScheduledFunctionManager::scheduled_call_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CAsyncScheduledFunctionManager::scheduled_call_t, CUtlMemory<CAsyncScheduledFunctionManager::schedul this,
					int i);  // 1873
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
				int nLineNumber);  // 1868
		CreateSimpleThread(ThreadFunc_t pfnThread,
					void* pParam,
					unsigned int stackSize,
					const char* szName,
					size_t nDuplicateParamSize);  // 1840
		CAsyncScheduledFunctionManager::Init(); // 1869
		CUtlMemory<CAsyncScheduledFunctionManager::scheduled_call_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CAsyncScheduledFunctionManager::scheduled_call_t, CUtlMemory<CAsyncScheduledFunctionManager::schedul this,
				int i);  // 1883
		CUtlAbstractDelegate::SetMementoFrom(
				const CUtlAbstractDelegate& right);  // 843
		ClosurePtr<float (detail::GenericClass::::CopyFrom<FastDelegate0<float> >(
						FastDelegate0<float>* pParent,
						const CUtlAbstractDelegate& right);  // 964
		FastDelegate0<float>::operator=(
				const FastDelegate0<float>& x);  // 2108
		CUtlDelegate<float()>::operator=(
				const CUtlDelegate<float()> &); // 1883
		CUtlMemory<CAsyncScheduledFunctionManager::scheduled_call_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CAsyncScheduledFunctionManager::scheduled_call_t, CUtlMemory<CAsyncScheduledFunctionManager::schedul this,
				int i);  // 1884
		AsyncFunctionHandle_t::AsyncFunctionHandle_t(
					int32 value);  // 1886
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1887
		CUtlMemory<CAsyncScheduledFunctionManager::scheduled_call_t, int>::NumAllocated(); // 1143
		CUtlMemory<CAsyncScheduledFunctionManager::scheduled_call_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CAsyncScheduledFunctionManager::scheduled_call_t, CUtlMemory<CAsyncScheduledFunctionManager::schedul this,
			int i);  // 1148
		CUtlAbstractDelegate::CUtlAbstractDelegate(); // 734
		ClosurePtr<float (detail::GenericClass::::ClosurePtr()(), float (*)(), float (*)()>* this); // 957
		FastDelegate0<float>::Clear(); // 957
		FastDelegate0<float>::FastDelegate0(); // 2120
		CUtlDelegate<float()>::CUtlDelegate()>* this); // 1918
		scheduled_call_t::scheduled_call_t(); // 1479
		Construct<CAsyncScheduledFunctionManager::scheduled_call_t>(scheduled_call_t* pMemory); // 1148
		CUtlMemory<CAsyncScheduledFunctionManager::scheduled_call_t, int>::IsGrowable(); // 823
		CUtlMemory<CAsyncScheduledFunctionManager::scheduled_call_t, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CAsyncScheduledFunctionManager::scheduled_call_t, int>::IsExternallyAllocated(); // 861
		CUtlMemory<CAsyncScheduledFunctionManager::scheduled_call_t, int>::Grow(
			int num);  // 806
		ResetDbgInfo(const CUtlVectorBase<CAsyncScheduledFunctionManager::scheduled_call_t, CUtlMemory<CAsyncScheduledFunctionManager::schedul this); // 824
		GrowMemory(const CUtlVectorBase<CAsyncScheduledFunctionManager::scheduled_call_t, CUtlMemory<CAsyncScheduledFunctionManager::schedul this,
				int num);  // 1145
		AddToTail(const CUtlVectorBase<CAsyncScheduledFunctionManager::scheduled_call_t, CUtlMemory<CAsyncScheduledFunctionManager::schedul this); // 1881
	}
} /* size: 763 */

// <001E150A> tier0/jobthread.cpp:1890
// function calls: 14
void CAsyncScheduledFunctionManager::RescheduleFunction(AsyncFunctionHandle_t nHandle, double flTimeToCall)
{
	AsyncFunctionHandle_t::AsyncFunctionHandle_t(); // 1932
	call_time_change_t::call_time_change_t(
				AsyncFunctionHandle_t nHandle,
				double flTimeToCall);  // 1894
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 768
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 777
	AsyncFunctionHandle_t::AsyncFunctionHandle_t(); // 1930
	call_time_change_t::call_time_change_t(); // 725
	Node_t::Node_t(); // 774
	CTSItemList<CAsyncScheduledFunctionManager::call_time_change_t>::PushItem(
		const call_time_change_t& init);  // 1894
} /* size: 351, inline expansions: 14 (617 bytes) */

// <001D09D6> tier0/jobthread.cpp:1890
inline void CAsyncScheduledFunctionManager::RescheduleFunction(AsyncFunctionHandle_t nHandle, double flTimeToCall)
{
} /* size: 0 */

// <001D05CD> tier0/jobthread.cpp:1899
// function calls: 15
void CAsyncScheduledFunctionManager::UnregisterScheduledFunction(AsyncFunctionHandle_t nHandle)
{
	AsyncFunctionHandle_t::AsyncFunctionHandle_t(); // 1932
	call_time_change_t::call_time_change_t(
				AsyncFunctionHandle_t nHandle,
				double flTimeToCall);  // 1894
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 768
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 777
	AsyncFunctionHandle_t::AsyncFunctionHandle_t(); // 1930
	call_time_change_t::call_time_change_t(); // 725
	Node_t::Node_t(); // 774
	CTSItemList<CAsyncScheduledFunctionManager::call_time_change_t>::PushItem(
		const call_time_change_t& init);  // 1894
	CAsyncScheduledFunctionManager::RescheduleFunction(
				AsyncFunctionHandle_t nHandle,
				double flTimeToCall);  // 1901
} /* size: 389, inline expansions: 15 (846 bytes) */

// <001D056E> tier0/jobthread.cpp:1906
// variable: 1
void StaticRunScheduledCalls(void* _pManager)
{
	CAsyncScheduledFunctionManager* pManager; // 1908
} /* size: 17, variables: 1 */

// <001D0557> tier0/jobthread.cpp:1918
void scheduled_call_t::scheduled_call_t()
{
} /* size: 0 */

// <001D053E> tier0/jobthread.cpp:1918
inline void scheduled_call_t::scheduled_call_t()
{
} /* size: 0 */

// <001D0527> tier0/jobthread.cpp:1930
void call_time_change_t::call_time_change_t()
{
} /* size: 0 */

// <001D050E> tier0/jobthread.cpp:1930
inline void call_time_change_t::call_time_change_t()
{
} /* size: 0 */

// <001D04ED> tier0/jobthread.cpp:1931
void call_time_change_t::call_time_change_t(AsyncFunctionHandle_t nHandle, double flTimeToCall)
{
} /* size: 0 */

// <001D04BA> tier0/jobthread.cpp:1931
inline void call_time_change_t::call_time_change_t(AsyncFunctionHandle_t nHandle, double flTimeToCall)
{
} /* size: 0 */

// <001CFA69> tier0/jobthread.cpp:1949
// variables: 10
// function calls: 38
void CAsyncScheduledFunctionManager::RunScheduledCalls()
{
	uint nWaitMs; // 1951
	{
		double flCurrentTime; // 1959
		call_time_change_t item; // 1960
		{
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1963; // 1963
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 943
			Lock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
					const CThreadMutex& lock,
					const char* pFilename,
					int nLineNumber);  // 1963
			CUtlMemory<CAsyncScheduledFunctionManager::scheduled_call_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CAsyncScheduledFunctionManager::scheduled_call_t, CUtlMemory<CAsyncScheduledFunctionManager::schedul this,
					int i);  // 1966
			ThreadInterlockedAssignIf128(volatile int128* pDest,
							const int128& value,
							const int128& comparand);  // 478
			ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
								const InterlockedPointerX2SizedInt_t& value,
								const InterlockedPointerX2SizedInt_t& comperand);  // 203
			ThreadPause(void); // 208
			CTSListBase::Pop(); // 782
			ThreadPause(void); // 173
			ThreadInterlockedAssignIf128(volatile int128* pDest,
							const int128& value,
							const int128& comparand);  // 478
			ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
								const InterlockedPointerX2SizedInt_t& value,
								const InterlockedPointerX2SizedInt_t& comperand);  // 168
			CTSListBase::Push(
				TSLNodeBase_t* pNode);  // 786
			CTSItemList<CAsyncScheduledFunctionManager::call_time_change_t>::PopItem(
				call_time_change_t* pResult);  // 1967
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1968
		}
		{
			double flMin; // 1976
			int nMin; // 1977
			{
				int i; // 1978
				CUtlMemory<CAsyncScheduledFunctionManager::scheduled_call_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CAsyncScheduledFunctionManager::scheduled_call_t, CUtlMemory<CAsyncScheduledFunctionManager::schedul this,
						int i);  // 1980
			}
			{
				float flDelta; // 1992
				{
					float flInterval; // 1996
					double flNextThink; // 1997
					CUtlMemory<CAsyncScheduledFunctionManager::scheduled_call_t, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CAsyncScheduledFunctionManager::scheduled_call_t, CUtlMemory<CAsyncScheduledFunctionManager::schedul this,
							int i);  // 1996
					ClosurePtr<float (detail::GenericClass::::GetClosureThis()(), float (*)(), float (*)()>* this); // 1023
					ClosurePtr<float (detail::GenericClass::::GetClosureMemPtr()(), float (*)(), float (*)()>* this); // 1023
					FastDelegate0<float>::operator()(const FastDelegate0<float>* this); // 1996
					CUtlMemory<CAsyncScheduledFunctionManager::scheduled_call_t, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CAsyncScheduledFunctionManager::scheduled_call_t, CUtlMemory<CAsyncScheduledFunctionManager::schedul this,
							int i);  // 2002
				}
			}
		}
		Count(const CUtlVectorBase<CAsyncScheduledFunctionManager::scheduled_call_t, CUtlMemory<CAsyncScheduledFunctionManager::s this); // 1974
		ThreadPause(void); // 208
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 203
		CTSListBase::Pop(); // 782
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 786
		CTSItemList<CAsyncScheduledFunctionManager::call_time_change_t>::PopItem(
			call_time_change_t* pResult);  // 1961
		AsyncFunctionHandle_t::AsyncFunctionHandle_t(); // 1930
		call_time_change_t::call_time_change_t(); // 1960
	}
} /* size: 1181, variables: 1 */

// <001C97C1> tier0/jobthread.cpp:2028
// function calls: 2
void CCountJob::~CCountJob()
{
	CThreadMutex::~CThreadMutex(); // 358
	CThreadedJob::~CThreadedJob(); // 2028
} /* size: 71, inline expansions: 2 (59 bytes) */

// <001C9632> tier0/jobthread.cpp:2028
// function calls: 6
void CCountJob::~CCountJob()
{
	CThreadMutex::~CThreadMutex(); // 358
	CRefCountServiceBase<true, CRefMT>::~CRefCountServiceBase(); // 355
	IRefCounted::~IRefCounted(); // 355
	CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >::~CRefCounted1(); // 358
	CThreadedJob::~CThreadedJob(); // 2028
	CCountJob::~CCountJob(); // 2028
} /* size: 84, inline expansions: 6 (109 bytes) */

// <001C9615> tier0/jobthread.cpp:2028
inline void CCountJob::~CCountJob()
{
} /* size: 0 */

// <001C9563> tier0/jobthread.cpp:2028
void CCountJob::CCountJob()
{
} /* size: 0 */

// <001C9546> tier0/jobthread.cpp:2028
inline void CCountJob::CCountJob()
{
} /* size: 0 */

// <001CF7D6> tier0/jobthread.cpp:2031
// variables: 2
// function calls: 7
void CCountJob::DoExecute()
{
	{
		byte pMemory; // 2039
		int i; // 2040
		HashBlock(const void* pKey,
				unsigned int size);  // 2047
		HashBlock(const void* pKey,
				unsigned int size);  // 2047
	}
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 2033
	ThreadPause(void); // 2034
	CInterlockedIntT<int, 4>::operator==(
			int rhs);  // 2051
} /* size: 339, inline expansions: 5 (32 bytes) */

// <001CE1C4> tier0/jobthread.cpp:2063
// variables: 16
// function calls: 74
void Test(int nJobs, bool bDistribute, bool bSleep, bool bFinishExecute, bool bDoWork, bool bIncludeMain, bool bPrioritized)
{
	const char   __FUNCTION__; // 4844
	int nTimeoutMs; // 2072
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2067
	}
	{
		int bInterleavePushPop; // 2074
		{
			int nMaxThreads; // 2079
			int nIncrement; // 2080
			{
				int i; // 2081
				{
					ThreadPoolStartParams_t params; // 2085
					CUtlVector<ThreadPoolTest::CCountJob, CUtlMemory<ThreadPoolTest::CCountJob, int> > jobs; // 2100
					CRelativeTickTimer timer; // 2104
					CRelativeTickTimer suspendTimer; // 2104
					{
						int j; // 2108
						CUtlVectorBase<CJobThread::Count(); // 1105
						CThreadPool::AddJob(
							CThreadedJob* pJob);  // 2116
						CUtlMemory<ThreadPoolTest::CCountJob, int>::operator[](
								int i);  // 588
						CUtlVectorBase<ThreadPoolTest::CCountJob, CUtlMemory<ThreadPoolTest::CCountJob, int> >::operator[](
								int i);  // 2110
						CThreadedJob::SetFlags(
							uint32 flags);  // 2110
						CThreadedJob::SetPriority(
								JobPriority_t priority);  // 2114
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2136
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2146
					}
					{
						int i; // 1451
						strcpy(char* __dest,
							const char* __src);  // 124
						V_strcpy(char* dest,
							const char* src);  // 349
						IRefCounted::IRefCounted(); // 351
						CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 351
						CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >::CRefCounted1(); // 347
						CThreadMutex::CThreadMutex(
								const char* pName);  // 347
						CThreadSyncValue<int>::CThreadSyncValue<JobStatusEnum_t>(); // 342
						CThreadedJob::CThreadedJob(
								JobPriority_t priority);  // 2028
						CCountJob::CCountJob(); // 1479
						Construct<ThreadPoolTest::CCountJob>(CCountJob* pMemory); // 1453
						CUtlMemory<ThreadPoolTest::CCountJob, int>::operator[](
								int i);  // 602
						CUtlVectorBase<ThreadPoolTest::CCountJob, CUtlMemory<ThreadPoolTest::CCountJob, int> >::Element(
							int i);  // 1453
					}
					CUtlMemory<ThreadPoolTest::CCountJob, int>::Grow(
						int num);  // 806
					CUtlVectorBase<ThreadPoolTest::CCountJob, CUtlMemory<ThreadPoolTest::CCountJob, int> >::GrowMemory(
							int num);  // 784
					CUtlVectorBase<ThreadPoolTest::CCountJob, CUtlMemory<ThreadPoolTest::CCountJob, int> >::GrowVector(
							int num);  // 1445
					CUtlVectorBase<ThreadPoolTest::CCountJob, CUtlMemory<ThreadPoolTest::CCountJob, int> >::InsertMultipleBefore(
								int elem,
								int num);  // 1437
					CUtlVectorBase<ThreadPoolTest::CCountJob, CUtlMemory<ThreadPoolTest::CCountJob, int> >::InsertMultipleBefore(
								int elem,
								int num);  // 1294
					CUtlVectorBase<ThreadPoolTest::CCountJob, CUtlMemory<ThreadPoolTest::CCountJob, int> >::AddMultipleToTail(
								int num);  // 1071
					CUtlVectorBase<ThreadPoolTest::CCountJob, CUtlMemory<ThreadPoolTest::CCountJob, int> >::EnsureCount(
							int num);  // 2101
					ThreadInterlockedExchange(volatile int32* p,
									int32 value);  // 641
					CInterlockedIntT<int, 4>::operator=(
							int newValue);  // 2083
					ThreadPoolStartParams_t::ThreadPoolStartParams_t(
								unsigned int _nThreads,
								uint64* _pAffinities,
								ThreadPoolDistribute_t _fDistribute,
								unsigned int _nStackSize,
								int _iThreadPriority,
								ThreadAffinityPreference_t _affinityPref,
								ThreadAffinityPreferenceFlag_t _nAffinityPrefFlags);  // 2085
					CUtlMemory<ThreadPoolTest::CCountJob, int>::ValidateGrowSize(); // 475
					CUtlMemory<ThreadPoolTest::CCountJob, int>::CUtlMemory(
							int nGrowSize,
							int nInitAllocationCount);  // 527
					CUtlVectorBase<ThreadPoolTest::CCountJob, CUtlMemory<ThreadPoolTest::CCountJob, int> >::ResetDbgInfo(); // 530
					CUtlVectorBase<ThreadPoolTest::CCountJob, CUtlMemory<ThreadPoolTest::CCountJob, int> >::CUtlVectorBase(
							int growSize,
							int initCapacity);  // 418
					CUtlVector<ThreadPoolTest::CCountJob, CUtlMemory<ThreadPoolTest::CCountJob, int> >::CUtlVector(); // 2100
					CRelativeTickCount::Init(); // 547
					CRelativeTickCount::CRelativeTickCount(); // 613
					CRelativeTickTimer::CRelativeTickTimer(); // 2104
					CRelativeTickCount::Init(); // 547
					CRelativeTickCount::CRelativeTickCount(); // 613
					CRelativeTickTimer::CRelativeTickTimer(); // 2104
					CRelativeTickCount::Sample(); // 618
					CRelativeTickTimer::Start(); // 2106
					CRelativeTickCount::Sample(); // 618
					CRelativeTickTimer::Start(); // 2107
					CInterlockedIntT<int, 4>::operator int(); // 247
					CThreadPool::NumIdleThreads(); // 2130
					CUtlVectorBase<CJobThread::Count(); // 246
					CThreadPool::NumThreads(); // 2130
					CThreadMultiWaitObject::GetWaitItem(
							ThreadMultiWaitItem_t* pItem,
							ThreadMultiWaitExtra_t* pExtra);  // 164
					JobGetWaitItem(JobWaitObject_t* pObject,
							JobWaitItem_t* pItem,
							JobWaitExtra_t* pExtra);  // 1131
					IThreadPool::YieldWait(
							JobWaitObject_t* pWaitObject,
							uint32 timeout,
							ThreadMultiWaitObjectSet_t** pSaveObjectSet);  // 2134
					CThreadMultiWaitObject::GetWaitItem(
							ThreadMultiWaitItem_t* pItem,
							ThreadMultiWaitExtra_t* pExtra);  // 1782
					CThreadMultiWaitObject::Wait(
						uint32 nMillis);  // 2144
					CInterlockedIntT<int, 4>::operator int(); // 2153
					CRelativeTickTimer::End(); // 2154
					CRelativeTickTimer::End(); // 2156
					CRelativeTickCount::GetMillisecondsF(); // 2180
					CRelativeTickCount::GetMillisecondsF(); // 2180
					CInterlockedIntT<int, 4>::operator int(); // 2180
					CRelativeTickCount::GetMillisecondsF(); // 2179
					CRelativeTickCount::GetMillisecondsF(); // 2179
					CRelativeTickCount::GetMillisecondsF(); // 2178
					CInterlockedIntT<int, 4>::operator int(); // 2178
					{
						int i; // 1721
						CUtlMemory<ThreadPoolTest::CCountJob, int>::operator[](
								int i);  // 602
						CUtlVectorBase<ThreadPoolTest::CCountJob, CUtlMemory<ThreadPoolTest::CCountJob, int> >::Element(
							int i);  // 1723
						Destruct<ThreadPoolTest::CCountJob>(CCountJob* pMemory); // 1723
					}
					CUtlVectorBase<ThreadPoolTest::CCountJob, CUtlMemory<ThreadPoolTest::CCountJob, int> >::RemoveAll(); // 1798
					CUtlMemory<ThreadPoolTest::CCountJob, int>::Purge(); // 903
					CUtlMemory<ThreadPoolTest::CCountJob, int>::Purge(); // 1799
					CUtlVectorBase<ThreadPoolTest::CCountJob, CUtlMemory<ThreadPoolTest::CCountJob, int> >::Purge(); // 560
					ValidateAlignment<ThreadPoolTest::CCountJob>(void); // 508
					CUtlMemory<ThreadPoolTest::CCountJob, int>::Purge(); // 510
					CUtlMemory<ThreadPoolTest::CCountJob, int>::~CUtlMemory(); // 562
					CUtlVectorBase<ThreadPoolTest::CCountJob, CUtlMemory<ThreadPoolTest::CCountJob, int> >::~CUtlVectorBase(); // 410
					CUtlVector<ThreadPoolTest::CCountJob, CUtlMemory<ThreadPoolTest::CCountJob, int> >::~CUtlVector(); // 2181
				}
			}
		}
	}
} /* size: 0, variables: 2 */

// <001CE162> tier0/jobthread.cpp:2194
// variables: 4
void CExecuteTestJob::DoExecute()
{
	byte pMemory; // 2196
	int i; // 2197
	const char   __FUNCTION__; // 64606
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2211
	}
} /* size: 0, variables: 3 */

// <001CE132> tier0/jobthread.cpp:2220
// variable: 1
void CExecuteTestExecuteJob::DoExecute()
{
	bool bAbort; // 2222
} /* size: 0, variables: 1 */

// <001CDC5E> tier0/jobthread.cpp:2242
// variables: 7
// function calls: 5
void RunThreadPoolTests(int nJobs)
{
	const CScopeGuardLambdaImpl<RunThreadPoolTests(int)::<lambda()> >& generated_id_2245; // 2245
	uintp mask1; // 2257
	{
		int i; // 2261
		{
			bool bToCompletion; // 2263
		}
	}
	{
		int bMain; // 2290
		{
			int i; // 2293
			{
				bool bToCompletion; // 2295
			}
		}
	}
	CScopeGuardLambdaImpl<RunThreadPoolTests(int)::<lambda()> >::CScopeGuardLambdaImpl(
				class& lambda); // 39
	MakeScopeGuardLambda<RunThreadPoolTests(int)::<lambda()> >(class& lambda); // 2245
	operator()(const class* __closure); // 31
	CScopeGuardLambdaImpl<RunThreadPoolTests(int)::<lambda()> >::~CScopeGuardLambdaImpl()::<lambda()> >* this); // 2323
} /* size: 587, variables: 2, inline expansions: 4 (46 bytes) */

// <001E072D> tier0/jobthread.cpp:2325
// variables: 3
// function calls: 55
void CThreadPool::ExecuteOnMainThread(function<void()> job)
{
	CThreadFastSemaphore completedEvent; // 2336
	int index; // 2340
	__atomic_base<int>::__atomic_base(
			__int_type __i);  // 843
	atomic<int>::atomic(
		__integral_type __i);  // 1484
	CThreadFastSemaphore::CThreadFastSemaphore(); // 2336
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 2339
	CUtlMemory<CThreadPool::MainThreadjob, int>::NumAllocated(); // 1143
	CUtlMemory<CThreadPool::MainThreadjob, int>::Base(); // 112
	CUtlVectorBase<CThreadPool::MainThreadjob, CUtlMemory<CThreadPool::MainThreadjob, int> >::Base(); // 368
	CUtlVectorBase<CThreadPool::MainThreadjob, CUtlMemory<CThreadPool::MainThreadjob, int> >::ResetDbgInfo(); // 824
	CUtlMemory<CThreadPool::MainThreadjob, int>::IsGrowable(); // 823
	CUtlMemory<CThreadPool::MainThreadjob, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CThreadPool::MainThreadjob, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CThreadPool::MainThreadjob, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CThreadPool::MainThreadjob, CUtlMemory<CThreadPool::MainThreadjob, int> >::GrowMemory(
			int num);  // 1145
	CUtlMemory<CThreadPool::MainThreadjob, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CThreadPool::MainThreadjob, CUtlMemory<CThreadPool::MainThreadjob, int> >::Element(
		int i);  // 1148
	_Function_base::_Function_base(); // 371
	function<void()>::function()>* this); // 390
	MainThreadjob::MainThreadjob(); // 1479
	Construct<CThreadPool::MainThreadjob>(MainThreadjob* pMemory); // 1148
	CUtlVectorBase<CThreadPool::MainThreadjob, CUtlMemory<CThreadPool::MainThreadjob, int> >::AddToTail(); // 2340
	CUtlMemory<CThreadPool::MainThreadjob, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CThreadPool::MainThreadjob, CUtlMemory<CThreadPool::MainThreadjob, int> >::operator[](
			int i);  // 2342
	_Function_base::_M_empty(); // 576
	function<void()>::operator bool()>* this); // 391
	_Function_base::_Function_base(); // 389
	function<void()>::function(
		const function<void()>& __x); // 473
	swap<std::_Any_data>(union _Any_data& __a,
				union _Any_data& __b);  // 560
	swap<bool (*)(std::_Any_data&, const std::_Any_data&, std::_Manager_operation)>(bool ()(union _Any_data &, const union _Any_data &, _Manager_operation) *& __a,
											bool ()(union _Any_data &, const union _Any_data &, _Manager_operation) *& __b); // 561
	swap<void (*)(const std::_Any_data&)>(void ()(const union _Any_data &) *& __a,
						void ()(const union _Any_data &) *& __b); // 562
	function<void()>::swap(
		function<void()>& __x); // 473
	_Function_base::~_Function_base(); // 336
	function<void()>::~function()>* this); // 473
	function<void()>::operator=(
			const function<void()>& __x); // 2343
	CUtlMemory<CThreadPool::MainThreadjob, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CThreadPool::MainThreadjob, CUtlMemory<CThreadPool::MainThreadjob, int> >::operator[](
			int i);  // 2343
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 2346
	{
		uint i; // 1518
		__atomic_base<int>::load(
			memory_order __m);  // 1500
		__atomic_base<int>::compare_exchange_weak(
					__int_type& __i1,
					__int_type __i2,
					memory_order __m1,
					memory_order __m2);  // 555
		__atomic_base<int>::compare_exchange_weak(
					__int_type& __i1,
					__int_type __i2,
					memory_order __m);  // 1503
		ThreadPause(void); // 1509
		CThreadFastSemaphore::TryWait(); // 1520
		ThreadPause(void); // 1526
		ThreadPause(void); // 1527
	}
	__atomic_base<int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1530
	CThreadFastSemaphore::Wait(); // 1515
	CThreadFastSemaphore::Wait(); // 2348
	CThreadFastSemaphore::~CThreadFastSemaphore(); // 2349
	CThreadPool::ExecuteOnMainThread(
				function<void()> job);  // 2325
	_Function_base::_M_empty(); // 591
	function<void()>::operator()(const function<void()>* this); // 2329
} /* size: 0, variables: 2, inline expansions: 43 (2995 bytes) */

// <001CDC1E> tier0/jobthread.cpp:2325
// variables: 2
void CThreadPool::ExecuteOnMainThread(function<void()> job)
{
	CThreadFastSemaphore completedEvent; // 2336
	int index; // 2340
} /* size: 0, variables: 2 */

// <001E0114> tier0/jobthread.cpp:2351
// variables: 3
// function calls: 22
void CThreadPool::ProcessMainThreadJobs()
{
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 2356
	CUtlVectorBase<CThreadPool::MainThreadjob, CUtlMemory<CThreadPool::MainThreadjob, int> >::Count(); // 2358
	{
		MainThreadjob& job; // 2360
		CUtlMemory<CThreadPool::MainThreadjob, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CThreadPool::MainThreadjob, CUtlMemory<CThreadPool::MainThreadjob, int> >::operator[](
				int i);  // 2360
		_Function_base::_M_empty(); // 591
		function<void()>::operator()(const function<void()>* this); // 2361
		__atomic_base<int>::fetch_add(
				__int_type __i,
				memory_order __m);  // 1488
		{
			int32 nWaiters; // 1491
			int32 nWake; // 1492
		}
		CThreadFastSemaphore::Release(
			int32 releaseCount);  // 2362
		CUtlMemory<CThreadPool::MainThreadjob, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CThreadPool::MainThreadjob, CUtlMemory<CThreadPool::MainThreadjob, int> >::Element(
			int i);  // 1607
		_Function_base::~_Function_base(); // 336
		function<void()>::~function()>* this); // 390
		MainThreadjob::~MainThreadjob(); // 1526
		Destruct<CThreadPool::MainThreadjob>(MainThreadjob* pMemory); // 1607
		CUtlMemory<CThreadPool::MainThreadjob, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CThreadPool::MainThreadjob, CUtlMemory<CThreadPool::MainThreadjob, int> >::Element(
			int i);  // 1114
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 115
		V_memmove(void* dest,
				const void* src,
				size_t count);  // 1114
		CUtlVectorBase<CThreadPool::MainThreadjob, CUtlMemory<CThreadPool::MainThreadjob, int> >::ShiftElementsLeft(
					int elem,
					int num);  // 1608
		CUtlVectorBase<CThreadPool::MainThreadjob, CUtlMemory<CThreadPool::MainThreadjob, int> >::Remove(
			int elem);  // 2363
	}
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 2367
	CThreadPool::ProcessMainThreadJobs(); // 2351
} /* size: 0, inline expansions: 4 (397 bytes) */

// <001CDBF6> tier0/jobthread.cpp:2351
// variable: 1
void CThreadPool::ProcessMainThreadJobs()
{
	{
		MainThreadjob& job; // 2360
	}
} /* size: 0 */

