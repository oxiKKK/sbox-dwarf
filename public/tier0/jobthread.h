
//
// public/tier0/jobthread.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libtier0.so
//				   libvfx_vulkan.so
//
//	functions: 277
//	classes: 52
//	struct: 1
//

// <0009FC8A> ../public/tier0/jobthread.h:97
// member function: 1
// member variables: 9
// struct size: 544
struct ThreadPoolStartParams_t {
	/* ../public/tier0/jobthread.h:99 */
	void ThreadPoolStartParams_t(ThreadPoolStartParams_t* , unsigned int, uint64* , ThreadPoolDistribute_t, unsigned int, int, ThreadAffinityPreference_t, ThreadAffinityPreferenceFlag_t);
	int nThreads; /* 0 4 */
	ThreadPoolDistribute_t fDistribute; /* 4 4 */
	int nStackSize; /* 8 4 */
	int iThreadPriority; /* 12 4 */
	uint64 nAffinityTable[64]; /* 16 512 */
	ThreadAffinityPreference_t affinityPreference; /* 528 4 */
	ThreadAffinityPreferenceFlag_t nAffinityPreferenceFlags; /* 532 4 */
	bool bUseAffinityTable:1; /* 536: 0 1 */
	bool bExecOnThreadPoolThreadsOnly:1; /* 536: 1 1 */
};

// <0015CAC6> ../public/tier0/jobthread.h:99
// variable: 1
void ThreadPoolStartParams_t::ThreadPoolStartParams_t(unsigned int _nThreads, uint64* _pAffinities, ThreadPoolDistribute_t _fDistribute, unsigned int _nStackSize, int _iThreadPriority, ThreadAffinityPreference_t _affinityPref, ThreadAffinityPreferenceFlag_t _nAffinityPrefFlags)
{
	{
		int i; // 117
	}
} /* size: 0 */

// <0015CA4C> ../public/tier0/jobthread.h:99
// variable: 1
inline void ThreadPoolStartParams_t::ThreadPoolStartParams_t(unsigned int _nThreads, uint64* _pAffinities, ThreadPoolDistribute_t _fDistribute, unsigned int _nStackSize, int _iThreadPriority, ThreadAffinityPreference_t _affinityPref, ThreadAffinityPreferenceFlag_t _nAffinityPrefFlags)
{
	{
		int i; // 117
	}
} /* size: 0 */

// <044634A7> ../public/tier0/jobthread.h:160
inline void JobGetWaitItem(JobWaitObject_t* pObject, JobWaitItem_t* pItem, JobWaitExtra_t* pExtra)
{
} /* size: 0 */

// <068E9D79> ../public/tier0/jobthread.h:186
void IMultipleWorkerJob::IMultipleWorkerJob()
{
} /* size: 0 */

// <068E9D5C> ../public/tier0/jobthread.h:186
inline void IMultipleWorkerJob::IMultipleWorkerJob()
{
} /* size: 0 */

// <001213F6> ../public/tier0/jobthread.h:186
// member functions: 8
// member variable: 1
// vtable entry: 1
// class size: 8
class IMultipleWorkerJob {
	void IMultipleWorkerJob(IMultipleWorkerJob* , const IMultipleWorkerJob& );
	void IMultipleWorkerJob(IMultipleWorkerJob* );
	int ()(void) * * _vptr.IMultipleWorkerJob; /* 0 8 */
	/* ../public/tier0/jobthread.h:189 */
	virtual void ~IMultipleWorkerJob(IMultipleWorkerJob* );
	/* ../public/tier0/jobthread.h:190 */
	virtual void Run(IMultipleWorkerJob* , int);
	void IMultipleWorkerJob(class IMultipleWorkerJob *, const class IMultipleWorkerJob  &); /* linkage=_ZN18IMultipleWorkerJobC4ERKS_ */
	void IMultipleWorkerJob(class IMultipleWorkerJob *); /* linkage=_ZN18IMultipleWorkerJobC4Ev */
	virtual void ~IMultipleWorkerJob(class IMultipleWorkerJob *); /* linkage=_ZN18IMultipleWorkerJobD4Ev */
	virtual void Run(class IMultipleWorkerJob *, int); /* linkage=_ZN18IMultipleWorkerJob3RunEi */
};

// <002F4DD5> ../public/tier0/jobthread.h:186
// member functions: 6
// member variable: 1
// vtable entry: 1
// class size: 8
class IMultipleWorkerJob {
	int ()(void) * * _vptr.IMultipleWorkerJob; /* 0 8 */
	/* ../public/tier0/jobthread.h:189 */
	virtual void ~IMultipleWorkerJob(IMultipleWorkerJob* );
	/* ../public/tier0/jobthread.h:190 */
	virtual void Run(IMultipleWorkerJob* , int);
	void IMultipleWorkerJob(class IMultipleWorkerJob *, const class IMultipleWorkerJob  &); /* linkage=_ZN18IMultipleWorkerJobC4ERKS_ */
	void IMultipleWorkerJob(class IMultipleWorkerJob *); /* linkage=_ZN18IMultipleWorkerJobC4Ev */
	virtual void ~IMultipleWorkerJob(class IMultipleWorkerJob *); /* linkage=_ZN18IMultipleWorkerJobD4Ev */
	virtual void Run(class IMultipleWorkerJob *, int); /* linkage=_ZN18IMultipleWorkerJob3RunEi */
};

// <06970697> ../public/tier0/jobthread.h:189
void IMultipleWorkerJob::~IMultipleWorkerJob()
{
} /* size: 0 */

// <06970667> ../public/tier0/jobthread.h:189
inline void IMultipleWorkerJob::~IMultipleWorkerJob()
{
} /* size: 0 */

// <001DC9FA> ../public/tier0/jobthread.h:193
void IThreadPool::IThreadPool()
{
} /* size: 0 */

// <001DC9DE> ../public/tier0/jobthread.h:193
inline void IThreadPool::IThreadPool()
{
} /* size: 0 */

// <0009FDBD> ../public/tier0/jobthread.h:193
// member functions: 51
// member variable: 1
// vtable entries: 19
// class size: 8
class IThreadPool : public IRefCounted {
public:
	/* class IRefCounted <ancestor>; */ /* 0 8 */
	/* ../public/tier0/jobthread.h:196 */
	virtual void ~IThreadPool(IThreadPool* );
	/* ../public/tier0/jobthread.h:201 */
	virtual bool Start(IThreadPool* , const ThreadPoolStartParams_t& , const char* );
	/* ../public/tier0/jobthread.h:202 */
	virtual bool Start(IThreadPool* , const ThreadPoolStartParams_t& );
	/* ../public/tier0/jobthread.h:203 */
	virtual bool Stop(IThreadPool* , int);
	/* ../public/tier0/jobthread.h:208 */
	virtual int NumThreads(const IThreadPool* );
	/* ../public/tier0/jobthread.h:212 */
	virtual int NumIdleThreads(const IThreadPool* );
	/* ../public/tier0/jobthread.h:214 */
	virtual bool IsCurrentThreadInPool(const IThreadPool* );
	/* ../public/tier0/jobthread.h:219 */
	virtual int SuspendExecution(IThreadPool* );
	/* ../public/tier0/jobthread.h:220 */
	virtual int ResumeExecution(IThreadPool* );
	/* ../public/tier0/jobthread.h:225 */
	virtual bool YieldWait(IThreadPool* , JobWaitItem_t* , JobWaitExtra_t* , int, bool, uint32, ThreadMultiWaitObjectSet_t** );
	/* ../public/tier0/jobthread.h:231 */
	virtual bool YieldWait(IThreadPool* , CThreadedJob** , int, bool, uint32);
	/* ../public/tier0/jobthread.h:1124 */
	bool YieldWait(IThreadPool* , JobWaitObject_t* , uint32, ThreadMultiWaitObjectSet_t** );
	/* ../public/tier0/jobthread.h:1135 */
	bool YieldWait(IThreadPool* , CThreadedJob* , uint32);
	/* ../public/tier0/jobthread.h:253 */
	virtual bool YieldSingleJob(IThreadPool* );
	/* ../public/tier0/jobthread.h:262 */
	virtual void AddJob(IThreadPool* , CThreadedJob* );
	/* ../public/tier0/jobthread.h:268 */
	virtual void AddPerFrameJob(IThreadPool* , CThreadedJob* );
	/* ../public/tier0/jobthread.h:275 */
	virtual void ExecuteOnMainThread(IThreadPool* , function<void()>);
	/* ../public/tier0/jobthread.h:276 */
	virtual JobEvent_t* MainThreadJobSignal(IThreadPool* );
	/* ../public/tier0/jobthread.h:277 */
	virtual void ProcessMainThreadJobs(IThreadPool* );
	/* ../public/tier0/jobthread.h:1142 */
	void QueueCall(IThreadPool* , const char* , function<void()>& );
	/* ../public/tier0/jobthread.h:1147 */
	void QueueCallWithFlags(IThreadPool* , const char* , JobPriority_t, uint, function<void()>& );
	/* ../public/tier0/jobthread.h:299 */
	virtual bool YieldWaitPerFrameJobs(IThreadPool* );
	/* ../public/tier0/jobthread.h:303 */
	virtual void QueueMultipleAndWait(IThreadPool* , IMultipleWorkerJob* , int, const char* , JobPriority_t);
protected:
	/* ../public/tier0/jobthread.h:307 */
	virtual void AddLambdaInternal(IThreadPool* , VoidStdFunction_t& , CThreadedJob** , const char* , unsigned int, JobPriority_t);
	/* ../public/tier0/jobthread.h:306 */
	typedef struct function<void()> VoidStdFunction_t;
	virtual void ~IThreadPool(class IThreadPool *); /* linkage=_ZN11IThreadPoolD4Ev */
	virtual bool Start(class IThreadPool *, const class ThreadPoolStartParams_t  &, const char  *); /* linkage=_ZN11IThreadPool5StartERK23ThreadPoolStartParams_tPKc */
	virtual bool Start(class IThreadPool *, const class ThreadPoolStartParams_t  &); /* linkage=_ZN11IThreadPool5StartERK23ThreadPoolStartParams_t */
	virtual bool Stop(class IThreadPool *, int); /* linkage=_ZN11IThreadPool4StopEi */
	virtual int NumThreads(const class IThreadPool  *); /* linkage=_ZNK11IThreadPool10NumThreadsEv */
	virtual int NumIdleThreads(const class IThreadPool  *); /* linkage=_ZNK11IThreadPool14NumIdleThreadsEv */
	virtual bool IsCurrentThreadInPool(const class IThreadPool  *); /* linkage=_ZNK11IThreadPool21IsCurrentThreadInPoolEv */
	virtual int SuspendExecution(class IThreadPool *); /* linkage=_ZN11IThreadPool16SuspendExecutionEv */
	virtual int ResumeExecution(class IThreadPool *); /* linkage=_ZN11IThreadPool15ResumeExecutionEv */
	virtual bool YieldWait(class IThreadPool *, JobWaitItem_t *, JobWaitExtra_t *, int, bool, uint32, class ThreadMultiWaitObjectSet_t * *); /* linkage=_ZN11IThreadPool9YieldWaitEP6pollfdP22ThreadMultiWaitExtra_tibjPP26ThreadMultiWaitObjectSet_t */
	virtual bool YieldWait(class IThreadPool *, class CThreadedJob * *, int, bool, uint32); /* linkage=_ZN11IThreadPool9YieldWaitEPP12CThreadedJobibj */
	bool YieldWait(class IThreadPool *, JobWaitObject_t *, uint32, class ThreadMultiWaitObjectSet_t * *); /* linkage=_ZN11IThreadPool9YieldWaitEP22CThreadMultiWaitObjectjPP26ThreadMultiWaitObjectSet_t */
	bool YieldWait(class IThreadPool *, class CThreadedJob *, uint32); /* linkage=_ZN11IThreadPool9YieldWaitEP12CThreadedJobj */
	virtual bool YieldSingleJob(class IThreadPool *); /* linkage=_ZN11IThreadPool14YieldSingleJobEv */
	virtual void AddJob(class IThreadPool *, class CThreadedJob *); /* linkage=_ZN11IThreadPool6AddJobEP12CThreadedJob */
	virtual void AddPerFrameJob(class IThreadPool *, class CThreadedJob *); /* linkage=_ZN11IThreadPool14AddPerFrameJobEP12CThreadedJob */
	virtual void ExecuteOnMainThread(class IThreadPool *, class function<void()>); /* linkage=_ZN11IThreadPool19ExecuteOnMainThreadESt8functionIFvvEE */
	virtual JobEvent_t * MainThreadJobSignal(class IThreadPool *); /* linkage=_ZN11IThreadPool19MainThreadJobSignalEv */
	virtual void ProcessMainThreadJobs(class IThreadPool *); /* linkage=_ZN11IThreadPool21ProcessMainThreadJobsEv */
	void QueueCall(class IThreadPool *, const char  *, class function<void()> &); /* linkage=_ZN11IThreadPool9QueueCallEPKcOSt8functionIFvvEE */
	void QueueCallWithFlags(class IThreadPool *, const char  *, enum JobPriority_t, uint, class function<void()> &); /* linkage=_ZN11IThreadPool18QueueCallWithFlagsEPKc13JobPriority_tjOSt8functionIFvvEE */
	virtual bool YieldWaitPerFrameJobs(class IThreadPool *); /* linkage=_ZN11IThreadPool21YieldWaitPerFrameJobsEv */
	virtual void QueueMultipleAndWait(class IThreadPool *, class IMultipleWorkerJob *, int, const char  *, enum JobPriority_t); /* linkage=_ZN11IThreadPool20QueueMultipleAndWaitEP18IMultipleWorkerJobiPKc13JobPriority_t */
	virtual void AddLambdaInternal(class IThreadPool *, VoidStdFunction_t &, class CThreadedJob * *, const char  *, unsigned int, enum JobPriority_t); /* linkage=_ZN11IThreadPool17AddLambdaInternalEOSt8functionIFvvEEPP12CThreadedJobPKcj13JobPriority_t */
	void IThreadPool(class IThreadPool *, const class IThreadPool  &); /* linkage=_ZN11IThreadPoolC4ERKS_ */
	void IThreadPool(class IThreadPool *); /* linkage=_ZN11IThreadPoolC4Ev */
};

// <001B23F3> ../public/tier0/jobthread.h:193
// member functions: 53
// member variable: 1
// vtable entries: 19
// class size: 8
class IThreadPool : public IRefCounted {
	/* ../public/tier0/jobthread.h:306 */
	typedef struct function<void()> VoidStdFunction_t;
public:
	/* class IRefCounted <ancestor>; */ /* 0 8 */
	void IThreadPool(IThreadPool* , const IThreadPool& );
	void IThreadPool(IThreadPool* );
	/* ../public/tier0/jobthread.h:196 */
	virtual void ~IThreadPool(IThreadPool* );
	/* ../public/tier0/jobthread.h:201 */
	virtual bool Start(IThreadPool* , const ThreadPoolStartParams_t& , const char* );
	/* ../public/tier0/jobthread.h:202 */
	virtual bool Start(IThreadPool* , const ThreadPoolStartParams_t& );
	/* ../public/tier0/jobthread.h:203 */
	virtual bool Stop(IThreadPool* , int);
	/* ../public/tier0/jobthread.h:208 */
	virtual int NumThreads(const IThreadPool* );
	/* ../public/tier0/jobthread.h:212 */
	virtual int NumIdleThreads(const IThreadPool* );
	/* ../public/tier0/jobthread.h:214 */
	virtual bool IsCurrentThreadInPool(const IThreadPool* );
	/* ../public/tier0/jobthread.h:219 */
	virtual int SuspendExecution(IThreadPool* );
	/* ../public/tier0/jobthread.h:220 */
	virtual int ResumeExecution(IThreadPool* );
	/* ../public/tier0/jobthread.h:225 */
	virtual bool YieldWait(IThreadPool* , JobWaitItem_t* , JobWaitExtra_t* , int, bool, uint32, ThreadMultiWaitObjectSet_t** );
	/* ../public/tier0/jobthread.h:231 */
	virtual bool YieldWait(IThreadPool* , CThreadedJob** , int, bool, uint32);
	/* ../public/tier0/jobthread.h:1124 */
	bool YieldWait(IThreadPool* , JobWaitObject_t* , uint32, ThreadMultiWaitObjectSet_t** );
	/* ../public/tier0/jobthread.h:1135 */
	bool YieldWait(IThreadPool* , CThreadedJob* , uint32);
	/* ../public/tier0/jobthread.h:253 */
	virtual bool YieldSingleJob(IThreadPool* );
	/* ../public/tier0/jobthread.h:262 */
	virtual void AddJob(IThreadPool* , CThreadedJob* );
	/* ../public/tier0/jobthread.h:268 */
	virtual void AddPerFrameJob(IThreadPool* , CThreadedJob* );
	/* ../public/tier0/jobthread.h:275 */
	virtual void ExecuteOnMainThread(IThreadPool* , function<void()>);
	/* ../public/tier0/jobthread.h:276 */
	virtual JobEvent_t* MainThreadJobSignal(IThreadPool* );
	/* ../public/tier0/jobthread.h:277 */
	virtual void ProcessMainThreadJobs(IThreadPool* );
	/* ../public/tier0/jobthread.h:1142 */
	void QueueCall(IThreadPool* , const char* , function<void()>& );
	/* ../public/tier0/jobthread.h:1147 */
	void QueueCallWithFlags(IThreadPool* , const char* , JobPriority_t, uint, function<void()>& );
	/* ../public/tier0/jobthread.h:299 */
	virtual bool YieldWaitPerFrameJobs(IThreadPool* );
	/* ../public/tier0/jobthread.h:303 */
	virtual void QueueMultipleAndWait(IThreadPool* , IMultipleWorkerJob* , int, const char* , JobPriority_t);
protected:
	/* ../public/tier0/jobthread.h:307 */
	virtual void AddLambdaInternal(IThreadPool* , VoidStdFunction_t& , CThreadedJob** , const char* , unsigned int, JobPriority_t);
	virtual void ~IThreadPool(class IThreadPool *); /* linkage=_ZN11IThreadPoolD4Ev */
	virtual bool Start(class IThreadPool *, const class ThreadPoolStartParams_t  &, const char  *); /* linkage=_ZN11IThreadPool5StartERK23ThreadPoolStartParams_tPKc */
	virtual bool Start(class IThreadPool *, const class ThreadPoolStartParams_t  &); /* linkage=_ZN11IThreadPool5StartERK23ThreadPoolStartParams_t */
	virtual bool Stop(class IThreadPool *, int); /* linkage=_ZN11IThreadPool4StopEi */
	virtual int NumThreads(const class IThreadPool  *); /* linkage=_ZNK11IThreadPool10NumThreadsEv */
	virtual int NumIdleThreads(const class IThreadPool  *); /* linkage=_ZNK11IThreadPool14NumIdleThreadsEv */
	virtual bool IsCurrentThreadInPool(const class IThreadPool  *); /* linkage=_ZNK11IThreadPool21IsCurrentThreadInPoolEv */
	virtual int SuspendExecution(class IThreadPool *); /* linkage=_ZN11IThreadPool16SuspendExecutionEv */
	virtual int ResumeExecution(class IThreadPool *); /* linkage=_ZN11IThreadPool15ResumeExecutionEv */
	virtual bool YieldWait(class IThreadPool *, JobWaitItem_t *, JobWaitExtra_t *, int, bool, uint32, class ThreadMultiWaitObjectSet_t * *); /* linkage=_ZN11IThreadPool9YieldWaitEP6pollfdP22ThreadMultiWaitExtra_tibjPP26ThreadMultiWaitObjectSet_t */
	virtual bool YieldWait(class IThreadPool *, class CThreadedJob * *, int, bool, uint32); /* linkage=_ZN11IThreadPool9YieldWaitEPP12CThreadedJobibj */
	bool YieldWait(class IThreadPool *, JobWaitObject_t *, uint32, class ThreadMultiWaitObjectSet_t * *); /* linkage=_ZN11IThreadPool9YieldWaitEP22CThreadMultiWaitObjectjPP26ThreadMultiWaitObjectSet_t */
	bool YieldWait(class IThreadPool *, class CThreadedJob *, uint32); /* linkage=_ZN11IThreadPool9YieldWaitEP12CThreadedJobj */
	virtual bool YieldSingleJob(class IThreadPool *); /* linkage=_ZN11IThreadPool14YieldSingleJobEv */
	virtual void AddJob(class IThreadPool *, class CThreadedJob *); /* linkage=_ZN11IThreadPool6AddJobEP12CThreadedJob */
	virtual void AddPerFrameJob(class IThreadPool *, class CThreadedJob *); /* linkage=_ZN11IThreadPool14AddPerFrameJobEP12CThreadedJob */
	virtual void ExecuteOnMainThread(class IThreadPool *, class function<void()>); /* linkage=_ZN11IThreadPool19ExecuteOnMainThreadESt8functionIFvvEE */
	virtual JobEvent_t * MainThreadJobSignal(class IThreadPool *); /* linkage=_ZN11IThreadPool19MainThreadJobSignalEv */
	virtual void ProcessMainThreadJobs(class IThreadPool *); /* linkage=_ZN11IThreadPool21ProcessMainThreadJobsEv */
	void QueueCall(class IThreadPool *, const char  *, class function<void()> &); /* linkage=_ZN11IThreadPool9QueueCallEPKcOSt8functionIFvvEE */
	void QueueCallWithFlags(class IThreadPool *, const char  *, enum JobPriority_t, uint, class function<void()> &); /* linkage=_ZN11IThreadPool18QueueCallWithFlagsEPKc13JobPriority_tjOSt8functionIFvvEE */
	virtual bool YieldWaitPerFrameJobs(class IThreadPool *); /* linkage=_ZN11IThreadPool21YieldWaitPerFrameJobsEv */
	virtual void QueueMultipleAndWait(class IThreadPool *, class IMultipleWorkerJob *, int, const char  *, enum JobPriority_t); /* linkage=_ZN11IThreadPool20QueueMultipleAndWaitEP18IMultipleWorkerJobiPKc13JobPriority_t */
	virtual void AddLambdaInternal(class IThreadPool *, VoidStdFunction_t &, class CThreadedJob * *, const char  *, unsigned int, enum JobPriority_t); /* linkage=_ZN11IThreadPool17AddLambdaInternalEOSt8functionIFvvEEPP12CThreadedJobPKcj13JobPriority_t */
	void IThreadPool(class IThreadPool *, const class IThreadPool  &); /* linkage=_ZN11IThreadPoolC4ERKS_ */
	void IThreadPool(class IThreadPool *); /* linkage=_ZN11IThreadPoolC4Ev */
};

// <001DEB3C> ../public/tier0/jobthread.h:196
void IThreadPool::~IThreadPool()
{
} /* size: 0 */

// <001DEB0C> ../public/tier0/jobthread.h:196
inline void IThreadPool::~IThreadPool()
{
} /* size: 0 */

// <002F5E0F> ../public/tier0/jobthread.h:312
IThreadPool* CreateNewThreadPool(void)
{
} /* size: 0 */

// <001CD63E> ../public/tier0/jobthread.h:329
void JobManualEvent_t::~JobManualEvent_t()
{
} /* size: 0 */

// <001CD621> ../public/tier0/jobthread.h:329
inline void JobManualEvent_t::~JobManualEvent_t()
{
} /* size: 0 */

// <000A025B> ../public/tier0/jobthread.h:329
// member functions: 3
// member variable: 1
// class size: 8
class JobManualEvent_t : public CThreadMultiWaitEvent {
public:
	/* class CThreadMultiWaitEvent <ancestor>; */ /* 0 8 */
	/* ../public/tier0/jobthread.h:332 */
	void JobManualEvent_t(JobManualEvent_t* );
	void JobManualEvent_t(class JobManualEvent_t *); /* linkage=_ZN16JobManualEvent_tC4Ev */
	void ~JobManualEvent_t(class JobManualEvent_t *); /* linkage=_ZN16JobManualEvent_tD4Ev */
};

// <001DEAF5> ../public/tier0/jobthread.h:332
void JobManualEvent_t::JobManualEvent_t()
{
} /* size: 0 */

// <001DEADC> ../public/tier0/jobthread.h:332
inline void JobManualEvent_t::JobManualEvent_t()
{
} /* size: 0 */

// <001283E5> ../public/tier0/jobthread.h:336
void ReturnJobManualEventToPool(JobManualEvent_t *)
{
} /* size: 0 */

// <000A04BF> ../public/tier0/jobthread.h:338
// member functions: 54
// member variables: 10
// vtable entries: 4
// class size: 160
class CThreadedJob : public CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> > {
public:
	/* class CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> > <ancestor>; */ /* 0 24 */
	/* ../public/tier0/jobthread.h:341 */
	void CThreadedJob(CThreadedJob* , JobPriority_t);
	/* ../public/tier0/jobthread.h:352 */
	virtual void ~CThreadedJob(CThreadedJob* );
	/* ../public/tier0/jobthread.h:363 */
	void SetPriority(CThreadedJob* , JobPriority_t);
	/* ../public/tier0/jobthread.h:364 */
	JobPriority_t GetPriority(const CThreadedJob* );
	/* ../public/tier0/jobthread.h:367 */
	void SetFlags(CThreadedJob* , uint32);
	/* ../public/tier0/jobthread.h:368 */
	uint32 GetFlags(const CThreadedJob* );
	/* ../public/tier0/jobthread.h:372 */
	void ResetStatusAfterFinished(CThreadedJob* );
	/* ../public/tier0/jobthread.h:377 */
	bool Executed(const CThreadedJob* );
	/* ../public/tier0/jobthread.h:378 */
	bool CanExecute(const CThreadedJob* );
	/* ../public/tier0/jobthread.h:379 */
	bool IsFinished(const CThreadedJob* );
	/* ../public/tier0/jobthread.h:380 */
	bool IsFinishingOrFinished(const CThreadedJob* );
	/* ../public/tier0/jobthread.h:381 */
	JobStatus_t GetStatus(const CThreadedJob* );
	/* ../public/tier0/jobthread.h:386 */
	bool WaitForFinish(CThreadedJob* , uint32);
	/* ../public/tier0/jobthread.h:387 */
	bool WaitForFinishAndRelease(CThreadedJob* , uint32);
	/* ../public/tier0/jobthread.h:389 */
	void CreateCompleteWaitItem(CThreadedJob* , JobWaitItem_t* , JobWaitExtra_t* );
	/* ../public/tier0/jobthread.h:407 */
	JobStatus_t Execute(CThreadedJob* );
	/* ../public/tier0/jobthread.h:412 */
	JobStatus_t Abort(CThreadedJob* , bool);
	/* ../public/tier0/jobthread.h:414 */
	virtual const char* Describe(CThreadedJob* );
	/* ../public/tier0/jobthread.h:415 */
	virtual void SetDescription(CThreadedJob* , const char* );
private:
	/* ../public/tier0/jobthread.h:433 */
	bool TryLock(CThreadedJob* , const char* , int);
	/* ../public/tier0/jobthread.h:434 */
	void Lock(CThreadedJob* , const char* , int);
	/* ../public/tier0/jobthread.h:435 */
	void Unlock(CThreadedJob* , const char* , int);
	CThreadSyncValue<int> m_status; /* 20 4 */
	CThreadedJob * m_pNext; /* 24 8 */
	CThreadMutex m_mutex; /* 32 72 */
	unsigned char m_flags; /* 104 1 */
	JobPriority_t m_priority; /* 105 1 */
	short int m_reserved; /* 106 2 */
	IThreadPool * m_pThreadPool; /* 112 8 */
	JobManualEvent_t * m_pCompleteEvent; /* 120 8 */
	char m_szDescription[32]; /* 128 32 */
	/* ../public/tier0/jobthread.h:455 */
	void CThreadedJob(CThreadedJob* , CThreadedJob& );
	/* ../public/tier0/jobthread.h:456 */
	void CThreadedJob(CThreadedJob* , const CThreadedJob& );
	/* ../public/tier0/jobthread.h:457 */
	void operator=(CThreadedJob* , const CThreadedJob& );
	/* ../public/tier0/jobthread.h:459 */
	virtual void DoExecute(CThreadedJob* );
	/* ../public/tier0/jobthread.h:460 */
	virtual void DoCleanup(CThreadedJob* );
	void CThreadedJob(class CThreadedJob *, enum JobPriority_t); /* linkage=_ZN12CThreadedJobC4E13JobPriority_t */
	virtual void ~CThreadedJob(class CThreadedJob *); /* linkage=_ZN12CThreadedJobD4Ev */
	void SetPriority(class CThreadedJob *, enum JobPriority_t); /* linkage=_ZN12CThreadedJob11SetPriorityE13JobPriority_t */
	enum JobPriority_t GetPriority(const class CThreadedJob  *); /* linkage=_ZNK12CThreadedJob11GetPriorityEv */
	void SetFlags(class CThreadedJob *, uint32); /* linkage=_ZN12CThreadedJob8SetFlagsEj */
	uint32 GetFlags(const class CThreadedJob  *); /* linkage=_ZNK12CThreadedJob8GetFlagsEv */
	void ResetStatusAfterFinished(class CThreadedJob *); /* linkage=_ZN12CThreadedJob24ResetStatusAfterFinishedEv */
	bool Executed(const class CThreadedJob  *); /* linkage=_ZNK12CThreadedJob8ExecutedEv */
	bool CanExecute(const class CThreadedJob  *); /* linkage=_ZNK12CThreadedJob10CanExecuteEv */
	bool IsFinished(const class CThreadedJob  *); /* linkage=_ZNK12CThreadedJob10IsFinishedEv */
	bool IsFinishingOrFinished(const class CThreadedJob  *); /* linkage=_ZNK12CThreadedJob21IsFinishingOrFinishedEv */
	JobStatus_t GetStatus(const class CThreadedJob  *); /* linkage=_ZNK12CThreadedJob9GetStatusEv */
	bool WaitForFinish(class CThreadedJob *, uint32); /* linkage=_ZN12CThreadedJob13WaitForFinishEj */
	bool WaitForFinishAndRelease(class CThreadedJob *, uint32); /* linkage=_ZN12CThreadedJob23WaitForFinishAndReleaseEj */
	void CreateCompleteWaitItem(class CThreadedJob *, JobWaitItem_t *, JobWaitExtra_t *); /* linkage=_ZN12CThreadedJob22CreateCompleteWaitItemEP6pollfdP22ThreadMultiWaitExtra_t */
	/* <1e18b2> tier0/jobthread.cpp:1680 */
	JobStatus_t Execute(class CThreadedJob *); /* linkage=_ZN12CThreadedJob7ExecuteEv */
	/* <1e20e5> tier0/jobthread.cpp:1746 */
	JobStatus_t Abort(class CThreadedJob *, bool); /* linkage=_ZN12CThreadedJob5AbortEb */
	virtual const char  * Describe(class CThreadedJob *); /* linkage=_ZN12CThreadedJob8DescribeEv */
	/* <1dfea2> ../public/tier0/jobthread.h:415 */
	virtual void SetDescription(class CThreadedJob *, const char  *); /* linkage=_ZN12CThreadedJob14SetDescriptionEPKc */
	bool TryLock(class CThreadedJob *, const char  *, int); /* linkage=_ZN12CThreadedJob7TryLockEPKci */
	void Lock(class CThreadedJob *, const char  *, int); /* linkage=_ZN12CThreadedJob4LockEPKci */
	void Unlock(class CThreadedJob *, const char  *, int); /* linkage=_ZN12CThreadedJob6UnlockEPKci */
	void CThreadedJob(class CThreadedJob *, class CThreadedJob &); /* linkage=_ZN12CThreadedJobC4EOS_ */
	void CThreadedJob(class CThreadedJob *, const class CThreadedJob  &); /* linkage=_ZN12CThreadedJobC4ERKS_ */
	void operator=(class CThreadedJob *, const class CThreadedJob  &); /* linkage=_ZN12CThreadedJobaSERKS_ */
	virtual void DoExecute(class CThreadedJob *); /* linkage=_ZN12CThreadedJob9DoExecuteEv */
	/* <1df9f9> ../public/tier0/jobthread.h:460 */
	virtual void DoCleanup(class CThreadedJob *); /* linkage=_ZN12CThreadedJob9DoCleanupEv */
};

// <001B2A2F> ../public/tier0/jobthread.h:338
// member functions: 54
// member variables: 10
// vtable entries: 4
// class size: 160
class CThreadedJob : public CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> > {
public:
	/* class CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> > <ancestor>; */ /* 0 24 */
	/* ../public/tier0/jobthread.h:341 */
	void CThreadedJob(CThreadedJob* , JobPriority_t);
	/* ../public/tier0/jobthread.h:352 */
	virtual void ~CThreadedJob(CThreadedJob* );
	/* ../public/tier0/jobthread.h:363 */
	void SetPriority(CThreadedJob* , JobPriority_t);
	/* ../public/tier0/jobthread.h:364 */
	JobPriority_t GetPriority(const CThreadedJob* );
	/* ../public/tier0/jobthread.h:367 */
	void SetFlags(CThreadedJob* , uint32);
	/* ../public/tier0/jobthread.h:368 */
	uint32 GetFlags(const CThreadedJob* );
	/* ../public/tier0/jobthread.h:372 */
	void ResetStatusAfterFinished(CThreadedJob* );
	/* ../public/tier0/jobthread.h:377 */
	bool Executed(const CThreadedJob* );
	/* ../public/tier0/jobthread.h:378 */
	bool CanExecute(const CThreadedJob* );
	/* ../public/tier0/jobthread.h:379 */
	bool IsFinished(const CThreadedJob* );
	/* ../public/tier0/jobthread.h:380 */
	bool IsFinishingOrFinished(const CThreadedJob* );
	/* ../public/tier0/jobthread.h:381 */
	JobStatus_t GetStatus(const CThreadedJob* );
	/* ../public/tier0/jobthread.h:386 */
	bool WaitForFinish(CThreadedJob* , uint32);
	/* ../public/tier0/jobthread.h:387 */
	bool WaitForFinishAndRelease(CThreadedJob* , uint32);
	/* ../public/tier0/jobthread.h:389 */
	void CreateCompleteWaitItem(CThreadedJob* , JobWaitItem_t* , JobWaitExtra_t* );
	/* tier0/jobthread.cpp:1680 */
	JobStatus_t Execute(CThreadedJob* );
	/* tier0/jobthread.cpp:1746 */
	JobStatus_t Abort(CThreadedJob* , bool);
	/* ../public/tier0/jobthread.h:414 */
	virtual const char* Describe(CThreadedJob* );
	/* ../public/tier0/jobthread.h:415 */
	virtual void SetDescription(CThreadedJob* , const char* );
private:
	/* ../public/tier0/jobthread.h:433 */
	bool TryLock(CThreadedJob* , const char* , int);
	/* ../public/tier0/jobthread.h:434 */
	void Lock(CThreadedJob* , const char* , int);
	/* ../public/tier0/jobthread.h:435 */
	void Unlock(CThreadedJob* , const char* , int);
	CThreadSyncValue<int> m_status; /* 20 4 */
	CThreadedJob * m_pNext; /* 24 8 */
	CThreadMutex m_mutex; /* 32 72 */
	unsigned char m_flags; /* 104 1 */
	JobPriority_t m_priority; /* 105 1 */
	short int m_reserved; /* 106 2 */
	IThreadPool * m_pThreadPool; /* 112 8 */
	JobManualEvent_t * m_pCompleteEvent; /* 120 8 */
	char m_szDescription[32]; /* 128 32 */
	/* ../public/tier0/jobthread.h:455 */
	void CThreadedJob(CThreadedJob* , CThreadedJob& );
	/* ../public/tier0/jobthread.h:456 */
	void CThreadedJob(CThreadedJob* , const CThreadedJob& );
	/* ../public/tier0/jobthread.h:457 */
	void operator=(CThreadedJob* , const CThreadedJob& );
	/* ../public/tier0/jobthread.h:459 */
	virtual void DoExecute(CThreadedJob* );
	/* ../public/tier0/jobthread.h:460 */
	virtual void DoCleanup(CThreadedJob* );
	void CThreadedJob(class CThreadedJob *, enum JobPriority_t); /* linkage=_ZN12CThreadedJobC4E13JobPriority_t */
	virtual void ~CThreadedJob(class CThreadedJob *); /* linkage=_ZN12CThreadedJobD4Ev */
	void SetPriority(class CThreadedJob *, enum JobPriority_t); /* linkage=_ZN12CThreadedJob11SetPriorityE13JobPriority_t */
	enum JobPriority_t GetPriority(const class CThreadedJob  *); /* linkage=_ZNK12CThreadedJob11GetPriorityEv */
	void SetFlags(class CThreadedJob *, uint32); /* linkage=_ZN12CThreadedJob8SetFlagsEj */
	uint32 GetFlags(const class CThreadedJob  *); /* linkage=_ZNK12CThreadedJob8GetFlagsEv */
	void ResetStatusAfterFinished(class CThreadedJob *); /* linkage=_ZN12CThreadedJob24ResetStatusAfterFinishedEv */
	bool Executed(const class CThreadedJob  *); /* linkage=_ZNK12CThreadedJob8ExecutedEv */
	bool CanExecute(const class CThreadedJob  *); /* linkage=_ZNK12CThreadedJob10CanExecuteEv */
	bool IsFinished(const class CThreadedJob  *); /* linkage=_ZNK12CThreadedJob10IsFinishedEv */
	bool IsFinishingOrFinished(const class CThreadedJob  *); /* linkage=_ZNK12CThreadedJob21IsFinishingOrFinishedEv */
	JobStatus_t GetStatus(const class CThreadedJob  *); /* linkage=_ZNK12CThreadedJob9GetStatusEv */
	bool WaitForFinish(class CThreadedJob *, uint32); /* linkage=_ZN12CThreadedJob13WaitForFinishEj */
	bool WaitForFinishAndRelease(class CThreadedJob *, uint32); /* linkage=_ZN12CThreadedJob23WaitForFinishAndReleaseEj */
	void CreateCompleteWaitItem(class CThreadedJob *, JobWaitItem_t *, JobWaitExtra_t *); /* linkage=_ZN12CThreadedJob22CreateCompleteWaitItemEP6pollfdP22ThreadMultiWaitExtra_t */
	/* <1e18b2> tier0/jobthread.cpp:1680 */
	JobStatus_t Execute(class CThreadedJob *); /* linkage=_ZN12CThreadedJob7ExecuteEv */
	/* <1e20e5> tier0/jobthread.cpp:1746 */
	JobStatus_t Abort(class CThreadedJob *, bool); /* linkage=_ZN12CThreadedJob5AbortEb */
	virtual const char  * Describe(class CThreadedJob *); /* linkage=_ZN12CThreadedJob8DescribeEv */
	/* <1dfea2> ../public/tier0/jobthread.h:415 */
	virtual void SetDescription(class CThreadedJob *, const char  *); /* linkage=_ZN12CThreadedJob14SetDescriptionEPKc */
	bool TryLock(class CThreadedJob *, const char  *, int); /* linkage=_ZN12CThreadedJob7TryLockEPKci */
	void Lock(class CThreadedJob *, const char  *, int); /* linkage=_ZN12CThreadedJob4LockEPKci */
	void Unlock(class CThreadedJob *, const char  *, int); /* linkage=_ZN12CThreadedJob6UnlockEPKci */
	void CThreadedJob(class CThreadedJob *, class CThreadedJob &); /* linkage=_ZN12CThreadedJobC4EOS_ */
	void CThreadedJob(class CThreadedJob *, const class CThreadedJob  &); /* linkage=_ZN12CThreadedJobC4ERKS_ */
	void operator=(class CThreadedJob *, const class CThreadedJob  &); /* linkage=_ZN12CThreadedJobaSERKS_ */
	virtual void DoExecute(class CThreadedJob *); /* linkage=_ZN12CThreadedJob9DoExecuteEv */
	/* <1df9f9> ../public/tier0/jobthread.h:460 */
	virtual void DoCleanup(class CThreadedJob *); /* linkage=_ZN12CThreadedJob9DoCleanupEv */
};

// <001DEA8C> ../public/tier0/jobthread.h:341
void CThreadedJob::CThreadedJob(JobPriority_t priority)
{
} /* size: 0 */

// <001DEA66> ../public/tier0/jobthread.h:341
inline void CThreadedJob::CThreadedJob(JobPriority_t priority)
{
} /* size: 0 */

// <03EABF05> ../public/tier0/jobthread.h:352
void CThreadedJob::~CThreadedJob()
{
} /* size: 0 */

// <03EABED5> ../public/tier0/jobthread.h:352
inline void CThreadedJob::~CThreadedJob()
{
} /* size: 0 */

// <0040D15F> ../public/tier0/jobthread.h:363
inline void CThreadedJob::SetPriority(JobPriority_t priority)
{
} /* size: 0 */

// <001DE9E0> ../public/tier0/jobthread.h:364
inline void CThreadedJob::GetPriority()
{
} /* size: 0 */

// <001DE9BA> ../public/tier0/jobthread.h:367
inline void CThreadedJob::SetFlags(uint32 flags)
{
} /* size: 0 */

// <001DE9A1> ../public/tier0/jobthread.h:368
inline void CThreadedJob::GetFlags()
{
} /* size: 0 */

// <001DE988> ../public/tier0/jobthread.h:378
inline void CThreadedJob::CanExecute()
{
} /* size: 0 */

// <0024BCC9> ../public/tier0/jobthread.h:379
void CThreadedJob::IsFinished()
{
} /* size: 0 */

// <001DE96F> ../public/tier0/jobthread.h:379
inline void CThreadedJob::IsFinished()
{
} /* size: 0 */

// <001DE956> ../public/tier0/jobthread.h:380
inline void CThreadedJob::IsFinishingOrFinished()
{
} /* size: 0 */

// <0024BCB0> ../public/tier0/jobthread.h:381
inline void CThreadedJob::GetStatus()
{
} /* size: 0 */

// <001DE930> ../public/tier0/jobthread.h:386
inline void CThreadedJob::WaitForFinish(uint32 dwTimeout)
{
} /* size: 0 */

// <001DE8EE> ../public/tier0/jobthread.h:389
// variable: 1
inline void CThreadedJob::CreateCompleteWaitItem(JobWaitItem_t* pItem, JobWaitExtra_t* pExtra)
{
	{
		JobManualEvent_t* pEvent; // 393
	}
} /* size: 0 */

// <03EABEBD> ../public/tier0/jobthread.h:414
void CThreadedJob::Describe()
{
} /* size: 0 */

// <03EABE97> ../public/tier0/jobthread.h:415
inline void CThreadedJob::SetDescription(const char* pszDescription)
{
} /* size: 0 */

// <001DFEA2> ../public/tier0/jobthread.h:415
// function calls: 2
void CThreadedJob::SetDescription(const char* pszDescription)
{
	V_strncpy<long unsigned int>(char* pDest,
					const char* pSrc,
					long unsigned int maxLenInChars);  // 418
	CThreadedJob::SetDescription(
			const char* pszDescription);  // 415
} /* size: 40, inline expansions: 2 (42 bytes) */

// <001DE865> ../public/tier0/jobthread.h:433
inline void CThreadedJob::TryLock(const char* pFileName, int nLineNumber)
{
} /* size: 0 */

// <001DE832> ../public/tier0/jobthread.h:435
inline void CThreadedJob::Unlock(const char* pFileName, int nLineNumber)
{
} /* size: 0 */

// <03EABE7F> ../public/tier0/jobthread.h:460
void CThreadedJob::DoCleanup()
{
} /* size: 0 */

// <001DE819> ../public/tier0/jobthread.h:460
inline void CThreadedJob::DoCleanup()
{
} /* size: 0 */

// <00125A93> ../public/tier0/jobthread.h:464
// member functions: 7
// member variables: 2
// vtable entry: 1
// class size: 192
class CStdFunctionJob : public CThreadedJob {
public:
	/* class CThreadedJob <ancestor>; */ /* 0 160 */
private:
	function<void()> m_func; /* 160 32 */
	/* ../public/tier0/jobthread.h:468 */
	void CStdFunctionJob(CStdFunctionJob* , function<void()>& , const char* , JobPriority_t);
	/* ../public/tier0/jobthread.h:474 */
	virtual void ~CStdFunctionJob(CStdFunctionJob* );
	/* ../public/tier0/jobthread.h:476 */
	virtual void DoExecute(CStdFunctionJob* );
	void CStdFunctionJob(class CStdFunctionJob *, const class CStdFunctionJob  &); /* linkage=_ZN15CStdFunctionJobC4ERKS_ */
	void CStdFunctionJob(class CStdFunctionJob *, class function<void()> &, const char  *, enum JobPriority_t); /* linkage=_ZN15CStdFunctionJobC4EOSt8functionIFvvEEPKc13JobPriority_t */
	virtual void ~CStdFunctionJob(class CStdFunctionJob *); /* linkage=_ZN15CStdFunctionJobD4Ev */
	virtual void DoExecute(class CStdFunctionJob *); /* linkage=_ZN15CStdFunctionJob9DoExecuteEv */
};

// <001C6A21> ../public/tier0/jobthread.h:464
// member functions: 8
// member variables: 2
// vtable entry: 1
// class size: 192
class CStdFunctionJob : public CThreadedJob {
public:
	/* class CThreadedJob <ancestor>; */ /* 0 160 */
	void CStdFunctionJob(CStdFunctionJob* , const CStdFunctionJob& );
private:
	function<void()> m_func; /* 160 32 */
	/* ../public/tier0/jobthread.h:468 */
	void CStdFunctionJob(CStdFunctionJob* , function<void()>& , const char* , JobPriority_t);
	/* ../public/tier0/jobthread.h:474 */
	virtual void ~CStdFunctionJob(CStdFunctionJob* );
	/* ../public/tier0/jobthread.h:476 */
	virtual void DoExecute(CStdFunctionJob* );
	void CStdFunctionJob(class CStdFunctionJob *, const class CStdFunctionJob  &); /* linkage=_ZN15CStdFunctionJobC4ERKS_ */
	void CStdFunctionJob(class CStdFunctionJob *, class function<void()> &, const char  *, enum JobPriority_t); /* linkage=_ZN15CStdFunctionJobC4EOSt8functionIFvvEEPKc13JobPriority_t */
	virtual void ~CStdFunctionJob(class CStdFunctionJob *); /* linkage=_ZN15CStdFunctionJobD4Ev */
	virtual void DoExecute(class CStdFunctionJob *); /* linkage=_ZN15CStdFunctionJob9DoExecuteEv */
};

// <001DE7BF> ../public/tier0/jobthread.h:468
void CStdFunctionJob::CStdFunctionJob(function<void()>& func, const char* pszDescription, JobPriority_t jobPriority)
{
} /* size: 0 */

// <001DE77F> ../public/tier0/jobthread.h:468
inline void CStdFunctionJob::CStdFunctionJob(function<void()>& func, const char* pszDescription, JobPriority_t jobPriority)
{
} /* size: 0 */

// <03EABE34> ../public/tier0/jobthread.h:474
void CStdFunctionJob::~CStdFunctionJob()
{
} /* size: 0 */

// <03EABE04> ../public/tier0/jobthread.h:474
inline void CStdFunctionJob::~CStdFunctionJob()
{
} /* size: 0 */

// <001DE66D> ../public/tier0/jobthread.h:474
// function calls: 4
void CStdFunctionJob::~CStdFunctionJob()
{
	_Function_base::~_Function_base(); // 336
	function<void()>::~function()>* this); // 474
	CThreadMutex::~CThreadMutex(); // 358
	CThreadedJob::~CThreadedJob(); // 474
} /* size: 136, inline expansions: 4 (119 bytes) */

// <001DE467> ../public/tier0/jobthread.h:474
// function calls: 8
void CStdFunctionJob::~CStdFunctionJob()
{
	_Function_base::~_Function_base(); // 336
	function<void()>::~function()>* this); // 474
	CThreadMutex::~CThreadMutex(); // 358
	CRefCountServiceBase<true, CRefMT>::~CRefCountServiceBase(); // 355
	IRefCounted::~IRefCounted(); // 355
	CRefCounted1<IRefCounted, CRefCountServiceBase<true, CRefMT> >::~CRefCounted1(); // 358
	CThreadedJob::~CThreadedJob(); // 474
	CStdFunctionJob::~CStdFunctionJob(); // 474
} /* size: 149, inline expansions: 8 (214 bytes) */

// <03EABDEC> ../public/tier0/jobthread.h:476
void CStdFunctionJob::DoExecute()
{
} /* size: 0 */

// <001DE398> ../public/tier0/jobthread.h:476
// function calls: 2
void CStdFunctionJob::DoExecute()
{
	_Function_base::_M_empty(); // 591
	function<void()>::operator()(const function<void()>* this); // 478
} /* size: 39, inline expansions: 2 (31 bytes) */

// <000A034B> ../public/tier0/jobthread.h:487
// member functions: 6
// member variables: 2
// class size: 16
class CParallelProcessorAbstract_Base {
	/* ../public/tier0/jobthread.h:491 */
	int GetMaxJobs(const CParallelProcessorAbstract_Base* );
	/* ../public/tier0/jobthread.h:493 */
	IThreadPool* GetThreadPool(const CParallelProcessorAbstract_Base* );
protected:
	/* ../public/tier0/jobthread.h:496 */
	void CParallelProcessorAbstract_Base(CParallelProcessorAbstract_Base* , IThreadPool* );
	IThreadPool * m_pThreadPool; /* 0 8 */
	int m_nMaxJobThreads; /* 8 4 */
	int GetMaxJobs(const class CParallelProcessorAbstract_Base  *); /* linkage=_ZNK31CParallelProcessorAbstract_Base10GetMaxJobsEv */
	class IThreadPool * GetThreadPool(const class CParallelProcessorAbstract_Base  *); /* linkage=_ZNK31CParallelProcessorAbstract_Base13GetThreadPoolEv */
	void CParallelProcessorAbstract_Base(class CParallelProcessorAbstract_Base *, class IThreadPool *); /* linkage=_ZN31CParallelProcessorAbstract_BaseC4EP11IThreadPool */
};

// <0697064B> ../public/tier0/jobthread.h:496
void CParallelProcessorAbstract_Base::CParallelProcessorAbstract_Base(IThreadPool* pThreadPool)
{
} /* size: 0 */

// <06970625> ../public/tier0/jobthread.h:496
inline void CParallelProcessorAbstract_Base::CParallelProcessorAbstract_Base(IThreadPool* pThreadPool)
{
} /* size: 0 */

// <000A03FA> ../public/tier0/jobthread.h:532
// member functions: 8
// class size: 1
class CDefaultParallelController {
	/* ../public/tier0/jobthread.h:536 */
	const char* Description(CDefaultParallelController* );
	/* ../public/tier0/jobthread.h:544 */
	size_t GetScratchSpaceRequired(CDefaultParallelController* , int);
	/* ../public/tier0/jobthread.h:547 */
	void ParallelProcessStarting(CDefaultParallelController* , void* , size_t, int);
	/* ../public/tier0/jobthread.h:550 */
	void ParallelProcessFinished(CDefaultParallelController* , void* , size_t, int);
	const char  * Description(class CDefaultParallelController *); /* linkage=_ZN26CDefaultParallelController11DescriptionEv */
	size_t GetScratchSpaceRequired(class CDefaultParallelController *, int); /* linkage=_ZN26CDefaultParallelController23GetScratchSpaceRequiredEi */
	void ParallelProcessStarting(class CDefaultParallelController *, void *, size_t, int); /* linkage=_ZN26CDefaultParallelController23ParallelProcessStartingEPvmi */
	void ParallelProcessFinished(class CDefaultParallelController *, void *, size_t, int); /* linkage=_ZN26CDefaultParallelController23ParallelProcessFinishedEPvmi */
};

// <069705FF> ../public/tier0/jobthread.h:544
inline void CDefaultParallelController::GetScratchSpaceRequired(int nMaxThreads)
{
} /* size: 0 */

// <068EDFCB> ../public/tier0/jobthread.h:559
// function call: 1
void ~CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStati this)
{
	IMultipleWorkerJob::~IMultipleWorkerJob(); // 559
} /* size: 5, inline expansions: 1 (0 bytes) */

// <068EDF15> ../public/tier0/jobthread.h:559
// function calls: 2
void ~CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStati this)
{
	IMultipleWorkerJob::~IMultipleWorkerJob(); // 559
	~CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStati this); // 559
} /* size: 14, inline expansions: 2 (0 bytes) */

// <068EDEF8> ../public/tier0/jobthread.h:559
inline void ~CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStati this)
{
} /* size: 0 */

// <06190DB1> ../public/tier0/jobthread.h:559
// function call: 1
void ~CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputati this)
{
	IMultipleWorkerJob::~IMultipleWorkerJob(); // 559
} /* size: 0, inline expansions: 1 (0 bytes) */

// <06190CFA> ../public/tier0/jobthread.h:559
// function calls: 2
void ~CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputati this)
{
	IMultipleWorkerJob::~IMultipleWorkerJob(); // 559
	~CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputati this); // 559
} /* size: 0, inline expansions: 2 (0 bytes) */

// <06190CDC> ../public/tier0/jobthread.h:559
inline void ~CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputati this)
{
} /* size: 0 */

// <046CF33F> ../public/tier0/jobthread.h:559
// function call: 1
void CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> >::~CParallelProcessorAbstract()
{
	IMultipleWorkerJob::~IMultipleWorkerJob(); // 559
} /* size: 5, inline expansions: 1 (0 bytes) */

// <046CF289> ../public/tier0/jobthread.h:559
// function calls: 2
void CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> >::~CParallelProcessorAbstract()
{
	IMultipleWorkerJob::~IMultipleWorkerJob(); // 559
	CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> >::~CParallelProcessorAbstract(); // 559
} /* size: 14, inline expansions: 2 (0 bytes) */

// <046CF26C> ../public/tier0/jobthread.h:559
inline void CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> >::~CParallelProcessorAbstract()
{
} /* size: 0 */

// <046C9C42> ../public/tier0/jobthread.h:559
// function call: 1
void ~CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, Flo this)
{
	IMultipleWorkerJob::~IMultipleWorkerJob(); // 559
} /* size: 0, inline expansions: 1 (0 bytes) */

// <046C9B8C> ../public/tier0/jobthread.h:559
// function calls: 2
void ~CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, Flo this)
{
	IMultipleWorkerJob::~IMultipleWorkerJob(); // 559
	~CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, Flo this); // 559
} /* size: 0, inline expansions: 2 (0 bytes) */

// <046C9B6F> ../public/tier0/jobthread.h:559
inline void ~CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, Flo this)
{
} /* size: 0 */

// <046C83D8> ../public/tier0/jobthread.h:559
// function call: 1
void ~CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapR this)
{
	IMultipleWorkerJob::~IMultipleWorkerJob(); // 559
} /* size: 0, inline expansions: 1 (0 bytes) */

// <046C8322> ../public/tier0/jobthread.h:559
// function calls: 2
void ~CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapR this)
{
	IMultipleWorkerJob::~IMultipleWorkerJob(); // 559
	~CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapR this); // 559
} /* size: 0, inline expansions: 2 (0 bytes) */

// <046C8305> ../public/tier0/jobthread.h:559
inline void ~CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapR this)
{
} /* size: 0 */

// <044C042E> ../public/tier0/jobthread.h:559
// function call: 1
void ~CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationW this)
{
	IMultipleWorkerJob::~IMultipleWorkerJob(); // 559
} /* size: 0, inline expansions: 1 (0 bytes) */

// <044C0378> ../public/tier0/jobthread.h:559
// function calls: 2
void ~CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationW this)
{
	IMultipleWorkerJob::~IMultipleWorkerJob(); // 559
	~CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationW this); // 559
} /* size: 0, inline expansions: 2 (0 bytes) */

// <044C035B> ../public/tier0/jobthread.h:559
inline void ~CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationW this)
{
} /* size: 0 */

// <02E93AA8> ../public/tier0/jobthread.h:559
// function call: 1
void CParallelProcessorAbstract<CParallelProcessor<CSceneObject::~CParallelProcessorAbstract()
{
	IMultipleWorkerJob::~IMultipleWorkerJob(); // 559
} /* size: 5, inline expansions: 1 (0 bytes) */

// <02E939F2> ../public/tier0/jobthread.h:559
// function calls: 2
void CParallelProcessorAbstract<CParallelProcessor<CSceneObject::~CParallelProcessorAbstract()
{
	IMultipleWorkerJob::~IMultipleWorkerJob(); // 559
	CParallelProcessorAbstract<CParallelProcessor<CSceneObject::~CParallelProcessorAbstract(); // 559
} /* size: 14, inline expansions: 2 (0 bytes) */

// <02E939D5> ../public/tier0/jobthread.h:559
inline void CParallelProcessorAbstract<CParallelProcessor<CSceneObject::~CParallelProcessorAbstract()
{
} /* size: 0 */

// <00131D4E> ../public/tier0/jobthread.h:559
// function call: 1
void CParallelProcessorAbstract<CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> >::~CParallelProcessorAbstract()
{
	IMultipleWorkerJob::~IMultipleWorkerJob(); // 559
} /* size: 5, inline expansions: 1 (0 bytes) */

// <00131C99> ../public/tier0/jobthread.h:559
// function calls: 2
void CParallelProcessorAbstract<CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> >::~CParallelProcessorAbstract()
{
	IMultipleWorkerJob::~IMultipleWorkerJob(); // 559
	CParallelProcessorAbstract<CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> >::~CParallelProcessorAbstract(); // 559
} /* size: 14, inline expansions: 2 (0 bytes) */

// <00131C7B> ../public/tier0/jobthread.h:559
inline void CParallelProcessorAbstract<CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> >::~CParallelProcessorAbstract()
{
} /* size: 0 */

// <00660311> ../public/tier0/jobthread.h:559
// function call: 1
void ~CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcess this)
{
	IMultipleWorkerJob::~IMultipleWorkerJob(); // 559
} /* size: 5, inline expansions: 1 (0 bytes) */

// <0066025A> ../public/tier0/jobthread.h:559
// function calls: 2
void ~CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcess this)
{
	IMultipleWorkerJob::~IMultipleWorkerJob(); // 559
	~CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcess this); // 559
} /* size: 14, inline expansions: 2 (0 bytes) */

// <0066023D> ../public/tier0/jobthread.h:559
inline void ~CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcess this)
{
} /* size: 0 */

// <0005A239> ../public/tier0/jobthread.h:559
// function call: 1
void CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> >::~CParallelProcessorAbstract()
{
	IMultipleWorkerJob::~IMultipleWorkerJob(); // 559
} /* size: 5, inline expansions: 1 (0 bytes) */

// <0005A184> ../public/tier0/jobthread.h:559
// function calls: 2
void CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> >::~CParallelProcessorAbstract()
{
	IMultipleWorkerJob::~IMultipleWorkerJob(); // 559
	CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> >::~CParallelProcessorAbstract(); // 559
} /* size: 14, inline expansions: 2 (0 bytes) */

// <0005A166> ../public/tier0/jobthread.h:559
inline void CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> >::~CParallelProcessorAbstract()
{
} /* size: 0 */

// <0011E8BE> ../public/tier0/jobthread.h:559
// member functions: 12
// member variables: 3
// vtable entry: 1
// class size: 32
class CParallelProcessorAbstract<CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> > : public CParallelProcessorAbstract_Base, IMultipleWorkerJob {
public:
	/* class CParallelProcessorAbstract_Base <ancestor>; */ /* 8 16 */
	/* class IMultipleWorkerJob <ancestor>; */ /* 0 8 */
	void CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> >* , CParallelProcessorAbstract<CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> >& );
	void CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> >* , const CParallelProcessorAbstract<CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> >& );
	/* ../public/tier0/jobthread.h:562 */
	void CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> >* , CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1>* , IThreadPool* );
	/* ../public/tier0/jobthread.h:568 */
	void Run(CParallelProcessorAbstract<CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> >* );
private:
	/* ../public/tier0/jobthread.h:598 */
	virtual void Run(CParallelProcessorAbstract<CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> >* , int);
	CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> * m_pController; /* 24 8 */
	virtual void ~CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> >* );
	void CParallelProcessorAbstract(class CParallelProcessorAbstract<CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> > *, class CParallelProcessorAbstract<CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> > &); /* linkage=_ZN26CParallelProcessorAbstractI18CParallelProcessorI11CrashItem_t21CFuncJobItemProcessorIS1_ELi1EEEC4EOS5_ */
	void CParallelProcessorAbstract(class CParallelProcessorAbstract<CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> > *, const class CParallelProcessorAbstract<CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> >  &); /* linkage=_ZN26CParallelProcessorAbstractI18CParallelProcessorI11CrashItem_t21CFuncJobItemProcessorIS1_ELi1EEEC4ERKS5_ */
	void CParallelProcessorAbstract(class CParallelProcessorAbstract<CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> > *, class CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> *, class IThreadPool *); /* linkage=_ZN26CParallelProcessorAbstractI18CParallelProcessorI11CrashItem_t21CFuncJobItemProcessorIS1_ELi1EEEC4EPS4_P11IThreadPool */
	void Run(class CParallelProcessorAbstract<CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> > *); /* linkage=_ZN26CParallelProcessorAbstractI18CParallelProcessorI11CrashItem_t21CFuncJobItemProcessorIS1_ELi1EEE3RunEv */
	virtual void Run(class CParallelProcessorAbstract<CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> > *, int); /* linkage=_ZN26CParallelProcessorAbstractI18CParallelProcessorI11CrashItem_t21CFuncJobItemProcessorIS1_ELi1EEE3RunEi */
	virtual void ~CParallelProcessorAbstract(class CParallelProcessorAbstract<CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> > *); /* linkage=_ZN26CParallelProcessorAbstractI18CParallelProcessorI11CrashItem_t21CFuncJobItemProcessorIS1_ELi1EEED4Ev */
};

// <02E05E99> ../public/tier0/jobthread.h:559
// member functions: 6
// member variables: 3
// vtable entry: 1
// class size: 32
class CParallelProcessorAbstract<CParallelProcessor<CSceneObject*, CFuncJobItemProcessor<CSceneObject*>, 1> > : public CParallelProcessorAbstract_Base, IMultipleWorkerJob {
public:
	/* class CParallelProcessorAbstract_Base <ancestor>; */ /* 8 16 */
	/* class IMultipleWorkerJob <ancestor>; */ /* 0 8 */
	void CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelProcessor<CSceneObject*, CFuncJobItemProcessor<CSceneObject*>, 1> >* , CParallelProcessorAbstract<CParallelProcessor<CSceneObject*, CFuncJobItemProcessor<CSceneObject*>, 1> >& );
	void CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelProcessor<CSceneObject*, CFuncJobItemProcessor<CSceneObject*>, 1> >* , const CParallelProcessorAbstract<CParallelProcessor<CSceneObject*, CFuncJobItemProcessor<CSceneObject*>, 1> >& );
	/* ../public/tier0/jobthread.h:562 */
	void CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelProcessor<CSceneObject*, CFuncJobItemProcessor<CSceneObject*>, 1> >* , CParallelProcessor<CSceneObject*, CFuncJobItemProcessor<CSceneObject*>, 1>* , IThreadPool* );
	/* ../public/tier0/jobthread.h:568 */
	void Run(CParallelProcessorAbstract<CParallelProcessor<CSceneObject*, CFuncJobItemProcessor<CSceneObject*>, 1> >* );
private:
	/* ../public/tier0/jobthread.h:598 */
	virtual void Run(CParallelProcessorAbstract<CParallelProcessor<CSceneObject*, CFuncJobItemProcessor<CSceneObject*>, 1> >* , int);
	CParallelProcessor<CSceneObject*, CFuncJobItemProcessor<CSceneObject*>, 1> * m_pController; /* 24 8 */
	virtual void ~CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelProcessor<CSceneObject*, CFuncJobItemProcessor<CSceneObject*>, 1> >* );
};

// <044886BF> ../public/tier0/jobthread.h:559
// member functions: 6
// member variables: 3
// vtable entry: 1
// class size: 32
class CParallelProcessorAbstract<CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUnit>, 1> > : public CParallelProcessorAbstract_Base, IMultipleWorkerJob {
public:
	/* class CParallelProcessorAbstract_Base <ancestor>; */ /* 8 16 */
	/* class IMultipleWorkerJob <ancestor>; */ /* 0 8 */
	void CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUni, CParallelProcessorAbstract<CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUni);
	void CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUni, const CParallelProcessorAbstract<CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationW);
	/* ../public/tier0/jobthread.h:562 */
	void CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUni, CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUnit>, 1>* , IThreadPool* );
	/* ../public/tier0/jobthread.h:568 */
	void Run(CParallelProcessorAbstract<CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUni);
private:
	/* ../public/tier0/jobthread.h:598 */
	virtual void Run(CParallelProcessorAbstract<CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUni, int);
	CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUnit>, 1> * m_pController; /* 24 8 */
	virtual void ~CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUni);
};

// <046BC2C8> ../public/tier0/jobthread.h:559
// member functions: 18
// member variables: 3
// vtable entry: 1
// class size: 32
class CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> > : public CParallelProcessorAbstract_Base, IMultipleWorkerJob {
public:
	/* class CParallelProcessorAbstract_Base <ancestor>; */ /* 8 16 */
	/* class IMultipleWorkerJob <ancestor>; */ /* 0 8 */
	void CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> >* , CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> >& );
	void CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> >* , const CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> >& );
	/* ../public/tier0/jobthread.h:562 */
	void CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> >* , CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1>* , IThreadPool* );
	/* ../public/tier0/jobthread.h:568 */
	void Run(CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> >* );
private:
	/* ../public/tier0/jobthread.h:598 */
	virtual void Run(CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> >* , int);
	CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> * m_pController; /* 24 8 */
	virtual void ~CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> >* );
	void CParallelProcessorAbstract(class CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> > *, class CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> > &); /* linkage=_ZN26CParallelProcessorAbstractI18CParallelProcessorIi27CMemberFuncJobItemProcessorIi10CCallQueueS2_ELi1EEEC4EOS5_ */
	void CParallelProcessorAbstract(class CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> > *, const class CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> >  ); /* linkage=_ZN26CParallelProcessorAbstractI18CParallelProcessorIi27CMemberFuncJobItemProcessorIi10CCallQueueS2_ELi1EEEC4ERKS5_ */
	void CParallelProcessorAbstract(class CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> > *, class CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> *, class IThreadPool *); /* linkage=_ZN26CParallelProcessorAbstractI18CParallelProcessorIi27CMemberFuncJobItemProcessorIi10CCallQueueS2_ELi1EEEC4EPS4_P11IThreadPool */
	void Run(class CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> > *); /* linkage=_ZN26CParallelProcessorAbstractI18CParallelProcessorIi27CMemberFuncJobItemProcessorIi10CCallQueueS2_ELi1EEE3RunEv */
	virtual void Run(class CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> > *, int); /* linkage=_ZN26CParallelProcessorAbstractI18CParallelProcessorIi27CMemberFuncJobItemProcessorIi10CCallQueueS2_ELi1EEE3RunEi */
	virtual void ~CParallelProcessorAbstract(class CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> > *); /* linkage=_ZN26CParallelProcessorAbstractI18CParallelProcessorIi27CMemberFuncJobItemProcessorIi10CCallQueueS2_ELi1EEED4Ev */
	void CParallelProcessorAbstract(class CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> > *, class CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> > &); /* linkage=_ZN26CParallelProcessorAbstractI18CParallelProcessorIi23CLambdaJobItemProcessorIiELi1EEEC4EOS4_ */
	void CParallelProcessorAbstract(class CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> > *, const class CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> >  &); /* linkage=_ZN26CParallelProcessorAbstractI18CParallelProcessorIi23CLambdaJobItemProcessorIiELi1EEEC4ERKS4_ */
	void CParallelProcessorAbstract(class CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> > *, class CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> *, class IThreadPool *); /* linkage=_ZN26CParallelProcessorAbstractI18CParallelProcessorIi23CLambdaJobItemProcessorIiELi1EEEC4EPS3_P11IThreadPool */
	void Run(class CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> > *); /* linkage=_ZN26CParallelProcessorAbstractI18CParallelProcessorIi23CLambdaJobItemProcessorIiELi1EEE3RunEv */
	virtual void Run(class CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> > *, int); /* linkage=_ZN26CParallelProcessorAbstractI18CParallelProcessorIi23CLambdaJobItemProcessorIiELi1EEE3RunEi */
	virtual void ~CParallelProcessorAbstract(class CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> > *); /* linkage=_ZN26CParallelProcessorAbstractI18CParallelProcessorIi23CLambdaJobItemProcessorIiELi1EEED4Ev */
};

// <046BF4CA> ../public/tier0/jobthread.h:559
// member functions: 6
// member variables: 3
// vtable entry: 1
// class size: 32
class CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t> > > : public CParallelProcessorAbstract_Base, IMultipleWorkerJob {
public:
	/* class CParallelProcessorAbstract_Base <ancestor>; */ /* 8 16 */
	/* class IMultipleWorkerJob <ancestor>; */ /* 0 8 */
	void CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitM, CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitM);
	void CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitM, const CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, Flo);
	/* ../public/tier0/jobthread.h:562 */
	void CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitM, CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t> >* , IThreadPool* );
	/* ../public/tier0/jobthread.h:568 */
	void Run(CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitM);
private:
	/* ../public/tier0/jobthread.h:598 */
	virtual void Run(CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitM, int);
	CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t> > * m_pController; /* 24 8 */
	virtual void ~CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitM);
};

// <046BF916> ../public/tier0/jobthread.h:559
// member functions: 12
// member variables: 3
// vtable entry: 1
// class size: 32
class CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> > > : public CParallelProcessorAbstract_Base, IMultipleWorkerJob {
public:
	/* class CParallelProcessorAbstract_Base <ancestor>; */ /* 8 16 */
	/* class IMultipleWorkerJob <ancestor>; */ /* 0 8 */
	void CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampl, CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampl);
	void CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampl, const CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapR);
	/* ../public/tier0/jobthread.h:562 */
	void CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampl, CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> >* , IThreadPool* );
	/* ../public/tier0/jobthread.h:568 */
	void Run(CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampl);
private:
	/* ../public/tier0/jobthread.h:598 */
	virtual void Run(CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampl, int);
	CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> > * m_pController; /* 24 8 */
	virtual void ~CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampl);
	void CParallelProcessorAbstract(class CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampl, class CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampl); /* linkage=_ZN26CParallelProcessorAbstractI22CParallelLoopProcessorI25FloatBitmapResampleInfo_t25CLoopFuncJobItemProcessorIS1_EEEC4EOS5_ */
	void CParallelProcessorAbstract(class CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampl, const class CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapR); /* linkage=_ZN26CParallelProcessorAbstractI22CParallelLoopProcessorI25FloatBitmapResampleInfo_t25CLoopFuncJobItemProcessorIS1_EEEC4ERKS5_ */
	void CParallelProcessorAbstract(class CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampl, class CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> > *, class IThreadPool *); /* linkage=_ZN26CParallelProcessorAbstractI22CParallelLoopProcessorI25FloatBitmapResampleInfo_t25CLoopFuncJobItemProcessorIS1_EEEC4EPS4_P11IThreadPool */
	void Run(class CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampl); /* linkage=_ZN26CParallelProcessorAbstractI22CParallelLoopProcessorI25FloatBitmapResampleInfo_t25CLoopFuncJobItemProcessorIS1_EEE3RunEv */
	virtual void Run(class CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampl, int); /* linkage=_ZN26CParallelProcessorAbstractI22CParallelLoopProcessorI25FloatBitmapResampleInfo_t25CLoopFuncJobItemProcessorIS1_EEE3RunEi */
	virtual void ~CParallelProcessorAbstract(class CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampl); /* linkage=_ZN26CParallelProcessorAbstractI22CParallelLoopProcessorI25FloatBitmapResampleInfo_t25CLoopFuncJobItemProcessorIS1_EEED4Ev */
};

// <0618EB55> ../public/tier0/jobthread.h:559
// member functions: 6
// member variables: 3
// vtable entry: 1
// class size: 32
class CParallelProcessorAbstract<CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_t>, 1> > : public CParallelProcessorAbstract_Base, IMultipleWorkerJob {
public:
	/* class CParallelProcessorAbstract_Base <ancestor>; */ /* 8 16 */
	/* class IMultipleWorkerJob <ancestor>; */ /* 0 8 */
	void CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_, CParallelProcessorAbstract<CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_);
	void CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_, const CParallelProcessorAbstract<CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputati);
	/* ../public/tier0/jobthread.h:562 */
	void CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_, CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_t>, 1>* , IThreadPool* );
	/* ../public/tier0/jobthread.h:568 */
	void Run(CParallelProcessorAbstract<CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_);
private:
	/* ../public/tier0/jobthread.h:598 */
	virtual void Run(CParallelProcessorAbstract<CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_, int);
	CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_t>, 1> * m_pController; /* 24 8 */
	virtual void ~CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_);
};

// <068D8203> ../public/tier0/jobthread.h:559
// member functions: 12
// member variables: 3
// vtable entry: 1
// class size: 32
class CParallelProcessorAbstract<CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>, 1> > : public CParallelProcessorAbstract_Base, IMultipleWorkerJob {
public:
	/* class CParallelProcessorAbstract_Base <ancestor>; */ /* 8 16 */
	/* class IMultipleWorkerJob <ancestor>; */ /* 0 8 */
	void CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombo, CParallelProcessorAbstract<CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombo);
	void CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombo, const CParallelProcessorAbstract<CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStati);
	/* ../public/tier0/jobthread.h:562 */
	void CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombo, CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>, 1>* , IThreadPool* );
	/* ../public/tier0/jobthread.h:568 */
	void Run(CParallelProcessorAbstract<CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombo);
private:
	/* ../public/tier0/jobthread.h:598 */
	virtual void Run(CParallelProcessorAbstract<CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombo, int);
	CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>, 1> * m_pController; /* 24 8 */
	virtual void ~CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombo);
	void CParallelProcessorAbstract(class CParallelProcessorAbstract<CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombo, class CParallelProcessorAbstract<CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombo); /* linkage=_ZN26CParallelProcessorAbstractI18CParallelProcessorI31SerializeStaticCombosWorkUnit_t21CFuncJobItemProcessorIS1_ELi1EEEC4EOS5_ */
	void CParallelProcessorAbstract(class CParallelProcessorAbstract<CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombo, const class CParallelProcessorAbstract<CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStati); /* linkage=_ZN26CParallelProcessorAbstractI18CParallelProcessorI31SerializeStaticCombosWorkUnit_t21CFuncJobItemProcessorIS1_ELi1EEEC4ERKS5_ */
	void CParallelProcessorAbstract(class CParallelProcessorAbstract<CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombo, class CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>, 1> *, class IThreadPool *); /* linkage=_ZN26CParallelProcessorAbstractI18CParallelProcessorI31SerializeStaticCombosWorkUnit_t21CFuncJobItemProcessorIS1_ELi1EEEC4EPS4_P11IThreadPool */
	void Run(class CParallelProcessorAbstract<CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombo); /* linkage=_ZN26CParallelProcessorAbstractI18CParallelProcessorI31SerializeStaticCombosWorkUnit_t21CFuncJobItemProcessorIS1_ELi1EEE3RunEv */
	virtual void Run(class CParallelProcessorAbstract<CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombo, int); /* linkage=_ZN26CParallelProcessorAbstractI18CParallelProcessorI31SerializeStaticCombosWorkUnit_t21CFuncJobItemProcessorIS1_ELi1EEE3RunEi */
	virtual void ~CParallelProcessorAbstract(class CParallelProcessorAbstract<CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombo); /* linkage=_ZN26CParallelProcessorAbstractI18CParallelProcessorI31SerializeStaticCombosWorkUnit_t21CFuncJobItemProcessorIS1_ELi1EEED4Ev */
};

// <00635D9C> ../public/tier0/jobthread.h:559
// member functions: 6
// member variables: 3
// vtable entry: 1
// class size: 32
class CParallelProcessorAbstract<CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CFossilizeStateCreator, CFossilizeStateCreator>, 1> > : public CParallelProcessorAbstract_Base, IMultipleWorkerJob {
public:
	/* class CParallelProcessorAbstract_Base <ancestor>; */ /* 8 16 */
	/* class IMultipleWorkerJob <ancestor>; */ /* 0 8 */
	void CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFo, CParallelProcessorAbstract<CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFo);
	void CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFo, const CParallelProcessorAbstract<CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcess);
	/* ../public/tier0/jobthread.h:562 */
	void CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFo, CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFossilizeStateCreator::Pipeli, IThreadPool* );
	/* ../public/tier0/jobthread.h:568 */
	void Run(CParallelProcessorAbstract<CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFo);
private:
	/* ../public/tier0/jobthread.h:598 */
	virtual void Run(CParallelProcessorAbstract<CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFo, int);
	CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFossilizeStateCreator::Pipeli m_pController; /* 24 8 */
	virtual void ~CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFo);
};

// <00058A21> ../public/tier0/jobthread.h:559
// member functions: 18
// member variables: 3
// vtable entry: 1
// class size: 32
class CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> > : public CParallelProcessorAbstract_Base, IMultipleWorkerJob {
public:
	/* class CParallelProcessorAbstract_Base <ancestor>; */ /* 8 16 */
	/* class IMultipleWorkerJob <ancestor>; */ /* 0 8 */
	void CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> >* , CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> >& );
	void CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> >* , const CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> > );
	/* ../public/tier0/jobthread.h:562 */
	void CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> >* , CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1>* , IThreadPool* );
	/* ../public/tier0/jobthread.h:568 */
	void Run(CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> >* );
private:
	/* ../public/tier0/jobthread.h:598 */
	virtual void Run(CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> >* , int);
	CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> * m_pController; /* 24 8 */
	virtual void ~CParallelProcessorAbstract(CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> >* );
	void CParallelProcessorAbstract(class CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> > *, class CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> > &); /* linkage=_ZN26CParallelProcessorAbstractI18CParallelProcessorIi27CMemberFuncJobItemProcessorIi10CCallQueueS2_ELi1EEEC4EOS5_ */
	void CParallelProcessorAbstract(class CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> > *, const class CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> >  ); /* linkage=_ZN26CParallelProcessorAbstractI18CParallelProcessorIi27CMemberFuncJobItemProcessorIi10CCallQueueS2_ELi1EEEC4ERKS5_ */
	void CParallelProcessorAbstract(class CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> > *, class CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> *, class IThreadPool *); /* linkage=_ZN26CParallelProcessorAbstractI18CParallelProcessorIi27CMemberFuncJobItemProcessorIi10CCallQueueS2_ELi1EEEC4EPS4_P11IThreadPool */
	void Run(class CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> > *); /* linkage=_ZN26CParallelProcessorAbstractI18CParallelProcessorIi27CMemberFuncJobItemProcessorIi10CCallQueueS2_ELi1EEE3RunEv */
	virtual void Run(class CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> > *, int); /* linkage=_ZN26CParallelProcessorAbstractI18CParallelProcessorIi27CMemberFuncJobItemProcessorIi10CCallQueueS2_ELi1EEE3RunEi */
	virtual void ~CParallelProcessorAbstract(class CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> > *); /* linkage=_ZN26CParallelProcessorAbstractI18CParallelProcessorIi27CMemberFuncJobItemProcessorIi10CCallQueueS2_ELi1EEED4Ev */
	void CParallelProcessorAbstract(class CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> > *, class CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> > &); /* linkage=_ZN26CParallelProcessorAbstractI18CParallelProcessorIi23CLambdaJobItemProcessorIiELi1EEEC4EOS4_ */
	void CParallelProcessorAbstract(class CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> > *, const class CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> >  &); /* linkage=_ZN26CParallelProcessorAbstractI18CParallelProcessorIi23CLambdaJobItemProcessorIiELi1EEEC4ERKS4_ */
	void CParallelProcessorAbstract(class CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> > *, class CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> *, class IThreadPool *); /* linkage=_ZN26CParallelProcessorAbstractI18CParallelProcessorIi23CLambdaJobItemProcessorIiELi1EEEC4EPS3_P11IThreadPool */
	void Run(class CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> > *); /* linkage=_ZN26CParallelProcessorAbstractI18CParallelProcessorIi23CLambdaJobItemProcessorIiELi1EEE3RunEv */
	virtual void Run(class CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> > *, int); /* linkage=_ZN26CParallelProcessorAbstractI18CParallelProcessorIi23CLambdaJobItemProcessorIiELi1EEE3RunEi */
	virtual void ~CParallelProcessorAbstract(class CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> > *); /* linkage=_ZN26CParallelProcessorAbstractI18CParallelProcessorIi23CLambdaJobItemProcessorIiELi1EEED4Ev */
};

// <068E9D3B> ../public/tier0/jobthread.h:562
void CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStati this, CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>, 1>* pController, IThreadPool* pThreadPool)
{
} /* size: 0 */

// <068E9D08> ../public/tier0/jobthread.h:562
inline void CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStati this, CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>, 1>* pController, IThreadPool* pThreadPool)
{
} /* size: 0 */

// <06190948> ../public/tier0/jobthread.h:562
void CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputati this, CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_t>, 1>* pController, IThreadPool* pThreadPool)
{
} /* size: 0 */

// <06190915> ../public/tier0/jobthread.h:562
inline void CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputati this, CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_t>, 1>* pController, IThreadPool* pThreadPool)
{
} /* size: 0 */

// <046CA0C3> ../public/tier0/jobthread.h:562
void CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> >::CParallelProcessorAbstract(CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1>* pController, IThreadPool* pThreadPool)
{
} /* size: 0 */

// <046CA090> ../public/tier0/jobthread.h:562
inline void CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> >::CParallelProcessorAbstract(CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1>* pController, IThreadPool* pThreadPool)
{
} /* size: 0 */

// <046C550E> ../public/tier0/jobthread.h:562
void CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, Flo this, CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t> >* pController, IThreadPool* pThreadPool)
{
} /* size: 0 */

// <046C54DB> ../public/tier0/jobthread.h:562
inline void CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, Flo this, CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t> >* pController, IThreadPool* pThreadPool)
{
} /* size: 0 */

// <046C5098> ../public/tier0/jobthread.h:562
void CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapR this, CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> >* pController, IThreadPool* pThreadPool)
{
} /* size: 0 */

// <046C5065> ../public/tier0/jobthread.h:562
inline void CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapR this, CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> >* pController, IThreadPool* pThreadPool)
{
} /* size: 0 */

// <044ABE08> ../public/tier0/jobthread.h:562
void CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationW this, CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUnit>, 1>* pController, IThreadPool* pThreadPool)
{
} /* size: 0 */

// <044ABDD5> ../public/tier0/jobthread.h:562
inline void CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationW this, CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUnit>, 1>* pController, IThreadPool* pThreadPool)
{
} /* size: 0 */

// <02E23EBE> ../public/tier0/jobthread.h:562
void CParallelProcessorAbstract<CParallelProcessor<CSceneObject::CParallelProcessorAbstract(CParallelProcessor<CSceneObject*, CFuncJobItemProcessor<CSceneObject*>, 1>* pController, IThreadPool* pThreadPool)
{
} /* size: 0 */

// <02E23E8B> ../public/tier0/jobthread.h:562
inline void CParallelProcessorAbstract<CParallelProcessor<CSceneObject::CParallelProcessorAbstract(CParallelProcessor<CSceneObject*, CFuncJobItemProcessor<CSceneObject*>, 1>* pController, IThreadPool* pThreadPool)
{
} /* size: 0 */

// <0012FAEA> ../public/tier0/jobthread.h:562
void CParallelProcessorAbstract<CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> >::CParallelProcessorAbstract(CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1>* pController, IThreadPool* pThreadPool)
{
} /* size: 0 */

// <0012FAB7> ../public/tier0/jobthread.h:562
inline void CParallelProcessorAbstract<CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> >::CParallelProcessorAbstract(CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1>* pController, IThreadPool* pThreadPool)
{
} /* size: 0 */

// <0065544C> ../public/tier0/jobthread.h:562
void CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcess this, CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFossilizeStateCreator::Pipeli pController, IThreadPool* pThreadPool)
{
} /* size: 0 */

// <00655419> ../public/tier0/jobthread.h:562
inline void CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcess this, CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFossilizeStateCreator::Pipeli pController, IThreadPool* pThreadPool)
{
} /* size: 0 */

// <00059F94> ../public/tier0/jobthread.h:562
void CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> >::CParallelProcessorAbstract(CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1>* pController, IThreadPool* pThreadPool)
{
} /* size: 0 */

// <00059F61> ../public/tier0/jobthread.h:562
inline void CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> >::CParallelProcessorAbstract(CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1>* pController, IThreadPool* pThreadPool)
{
} /* size: 0 */

// <068E9990> ../public/tier0/jobthread.h:568
// variables: 7
// function calls: 10
void Run(const CParallelProcessorAbstract<CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStati this)
{
	const size_t  MAXIMUM_STACK_SCRATCH_SPACE; // 570
	const int  nMaxThreads; // 571
	uint8* pScratchSpace; // 580
	size_t nScratchSpaceSize; // 581
	int nJobThreads; // 588
	CInterlockedPtr<SerializeStaticCombosWorkUnit_t>::GetRaw(); // 835
	Min<int>(const int& val1,
		const int& val2);  // 840
	CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>, 1>::InitialWorkerCount(
				CParallelProcessorAbstract<CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombo pProcessor);  // 588
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 589
	{
		int nItems; // 847
		CInterlockedPtr<SerializeStaticCombosWorkUnit_t>::GetRaw(); // 847
		{
			int nTargetChunks; // 856
		}
	}
	CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>::Begin(); // 876
	CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>, 1>::ParallelProcessStarting(
				void* pScratchSpace,
				size_t nScratchSpaceBytes,
				int nMaxThreads);  // 591
	CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>, 1>::Description(); // 592
	CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>::End(); // 881
	CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>, 1>::ParallelProcessFinished(
				void* pScratchSpace,
				size_t nScratchSpaceBytes,
				int nMaxThreads);  // 593
} /* size: 281, variables: 5, inline expansions: 9 (247 bytes) */

// <0619059B> ../public/tier0/jobthread.h:568
// variables: 7
// function calls: 10
void Run(const CParallelProcessorAbstract<CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputati this)
{
	const size_t  MAXIMUM_STACK_SCRATCH_SPACE; // 570
	const int  nMaxThreads; // 571
	uint8* pScratchSpace; // 580
	size_t nScratchSpaceSize; // 581
	int nJobThreads; // 588
	CInterlockedPtr<BentNormalComputationJob_t>::GetRaw(); // 835
	Min<int>(const int& val1,
		const int& val2);  // 840
	CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_t>, 1>::InitialWorkerCount(
				CParallelProcessorAbstract<CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_ pProcessor);  // 588
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 589
	{
		int nItems; // 847
		CInterlockedPtr<BentNormalComputationJob_t>::GetRaw(); // 847
		{
			int nTargetChunks; // 856
		}
	}
	CFuncJobItemProcessor<BentNormalComputationJob_t>::Begin(); // 876
	CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_t>, 1>::ParallelProcessStarting(
				void* pScratchSpace,
				size_t nScratchSpaceBytes,
				int nMaxThreads);  // 591
	CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_t>, 1>::Description(); // 592
	CFuncJobItemProcessor<BentNormalComputationJob_t>::End(); // 881
	CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_t>, 1>::ParallelProcessFinished(
				void* pScratchSpace,
				size_t nScratchSpaceBytes,
				int nMaxThreads);  // 593
} /* size: 0, variables: 5, inline expansions: 9 (0 bytes) */

// <046C9DF7> ../public/tier0/jobthread.h:568
// variables: 7
// function calls: 7
void CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> >::Run()
{
	const size_t  MAXIMUM_STACK_SCRATCH_SPACE; // 570
	const int  nMaxThreads; // 571
	uint8* pScratchSpace; // 580
	size_t nScratchSpaceSize; // 581
	int nJobThreads; // 588
	CInterlockedPtr<int>::GetRaw(); // 835
	Min<int>(const int& val1,
		const int& val2);  // 840
	CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1>::InitialWorkerCount(
				CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> >* pProcessor);  // 588
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 589
	{
		int nItems; // 847
		CInterlockedPtr<int>::GetRaw(); // 847
		{
			int nTargetChunks; // 856
		}
	}
	CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1>::ParallelProcessStarting(
				void* pScratchSpace,
				size_t nScratchSpaceBytes,
				int nMaxThreads);  // 591
	CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1>::Description(); // 592
} /* size: 238, variables: 5, inline expansions: 6 (150 bytes) */

// <046C525D> ../public/tier0/jobthread.h:568
// variables: 5
// function calls: 8
void Run(const CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, Flo this)
{
	const size_t  MAXIMUM_STACK_SCRATCH_SPACE; // 570
	const int  nMaxThreads; // 571
	uint8* pScratchSpace; // 580
	size_t nScratchSpaceSize; // 581
	int nJobThreads; // 588
	CInterlockedIntT<int, 4>::GetRaw(); // 1058
	InitialWorkerCount(const CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t>  this,
				CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitM pProcessor);  // 588
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 589
	CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t>::Begin(); // 1065
	ParallelProcessStarting(const CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t>  this,
				void* pScratchSpace,
				size_t nScratchSpaceBytes,
				int nMaxThreads);  // 591
	Description(const CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t> this); // 592
	CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t>::End(); // 1070
	ParallelProcessFinished(const CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t>  this,
				void* pScratchSpace,
				size_t nScratchSpaceBytes,
				int nMaxThreads);  // 593
} /* size: 0, variables: 5, inline expansions: 8 (0 bytes) */

// <046C4DDB> ../public/tier0/jobthread.h:568
// variables: 5
// function calls: 8
void Run(const CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapR this)
{
	const size_t  MAXIMUM_STACK_SCRATCH_SPACE; // 570
	const int  nMaxThreads; // 571
	uint8* pScratchSpace; // 580
	size_t nScratchSpaceSize; // 581
	int nJobThreads; // 588
	CInterlockedIntT<int, 4>::GetRaw(); // 1058
	CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> >::InitialWorkerCount(
				CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampl pProcessor);  // 588
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 589
	CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t>::Begin(); // 1065
	CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> >::ParallelProcessStarting(
				void* pScratchSpace,
				size_t nScratchSpaceBytes,
				int nMaxThreads);  // 591
	CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> >::Description(); // 592
	CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t>::End(); // 1070
	CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> >::ParallelProcessFinished(
				void* pScratchSpace,
				size_t nScratchSpaceBytes,
				int nMaxThreads);  // 593
} /* size: 0, variables: 5, inline expansions: 8 (0 bytes) */

// <044ABAA3> ../public/tier0/jobthread.h:568
// variables: 7
// function calls: 10
void Run(const CParallelProcessorAbstract<CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationW this)
{
	const size_t  MAXIMUM_STACK_SCRATCH_SPACE; // 570
	const int  nMaxThreads; // 571
	uint8* pScratchSpace; // 580
	size_t nScratchSpaceSize; // 581
	int nJobThreads; // 588
	CInterlockedPtr<KMeansQuantizationWorkUnit>::GetRaw(); // 835
	Min<int>(const int& val1,
		const int& val2);  // 840
	CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUnit>, 1>::InitialWorkerCount(
				CParallelProcessorAbstract<CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUni pProcessor);  // 588
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 589
	{
		int nItems; // 847
		CInterlockedPtr<KMeansQuantizationWorkUnit>::GetRaw(); // 847
		{
			int nTargetChunks; // 856
		}
	}
	CFuncJobItemProcessor<KMeansQuantizationWorkUnit>::Begin(); // 876
	CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUnit>, 1>::ParallelProcessStarting(
				void* pScratchSpace,
				size_t nScratchSpaceBytes,
				int nMaxThreads);  // 591
	CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUnit>, 1>::Description(); // 592
	CFuncJobItemProcessor<KMeansQuantizationWorkUnit>::End(); // 881
	CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUnit>, 1>::ParallelProcessFinished(
				void* pScratchSpace,
				size_t nScratchSpaceBytes,
				int nMaxThreads);  // 593
} /* size: 0, variables: 5, inline expansions: 9 (0 bytes) */

// <02E23B57> ../public/tier0/jobthread.h:568
// variables: 7
// function calls: 10
void CParallelProcessorAbstract<CParallelProcessor<CSceneObject::Run()
{
	const size_t  MAXIMUM_STACK_SCRATCH_SPACE; // 570
	const int  nMaxThreads; // 571
	uint8* pScratchSpace; // 580
	size_t nScratchSpaceSize; // 581
	int nJobThreads; // 588
	CInterlockedPtr<CSceneObject::GetRaw(); // 835
	Min<int>(const int& val1,
		const int& val2);  // 840
	CParallelProcessor<CSceneObject::InitialWorkerCount(
				CParallelProcessorAbstract<CParallelProcessor<CSceneObject*, CFuncJobItemProcessor<CSceneObject*>, 1> >* pProcessor);  // 588
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 589
	{
		int nItems; // 847
		CInterlockedPtr<CSceneObject::GetRaw(); // 847
		{
			int nTargetChunks; // 856
		}
	}
	CFuncJobItemProcessor<CSceneObject::Begin(); // 876
	CParallelProcessor<CSceneObject::ParallelProcessStarting(
				void* pScratchSpace,
				size_t nScratchSpaceBytes,
				int nMaxThreads);  // 591
	CParallelProcessor<CSceneObject::Description(); // 592
	CFuncJobItemProcessor<CSceneObject::End(); // 881
	CParallelProcessor<CSceneObject::ParallelProcessFinished(
				void* pScratchSpace,
				size_t nScratchSpaceBytes,
				int nMaxThreads);  // 593
} /* size: 277, variables: 5, inline expansions: 9 (248 bytes) */

// <0012F783> ../public/tier0/jobthread.h:568
// variables: 7
// function calls: 10
void CParallelProcessorAbstract<CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> >::Run()
{
	const size_t  MAXIMUM_STACK_SCRATCH_SPACE; // 570
	const int  nMaxThreads; // 571
	uint8* pScratchSpace; // 580
	size_t nScratchSpaceSize; // 581
	int nJobThreads; // 588
	CInterlockedPtr<CrashItem_t>::GetRaw(); // 835
	Min<int>(const int& val1,
		const int& val2);  // 840
	CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1>::InitialWorkerCount(
				CParallelProcessorAbstract<CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> >* pProcessor);  // 588
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 589
	{
		int nItems; // 847
		CInterlockedPtr<CrashItem_t>::GetRaw(); // 847
		{
			int nTargetChunks; // 856
		}
	}
	CFuncJobItemProcessor<CrashItem_t>::Begin(); // 876
	CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1>::ParallelProcessStarting(
				void* pScratchSpace,
				size_t nScratchSpaceBytes,
				int nMaxThreads);  // 591
	CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1>::Description(); // 592
	CFuncJobItemProcessor<CrashItem_t>::End(); // 881
	CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1>::ParallelProcessFinished(
				void* pScratchSpace,
				size_t nScratchSpaceBytes,
				int nMaxThreads);  // 593
} /* size: 277, variables: 5, inline expansions: 9 (248 bytes) */

// <006550B0> ../public/tier0/jobthread.h:568
// variables: 7
// function calls: 10
void Run(const CParallelProcessorAbstract<CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcess this)
{
	const size_t  MAXIMUM_STACK_SCRATCH_SPACE; // 570
	const int  nMaxThreads; // 571
	uint8* pScratchSpace; // 580
	size_t nScratchSpaceSize; // 581
	int nJobThreads; // 588
	CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t>::GetRaw(); // 835
	Min<int>(const int& val1,
		const int& val2);  // 840
	InitialWorkerCount(const CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFossilizeStateCreator:: this,
				CParallelProcessorAbstract<CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFo pProcessor);  // 588
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 589
	{
		int nItems; // 847
		CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t>::GetRaw(); // 847
		{
			int nTargetChunks; // 856
		}
	}
	Begin(const CMemberFuncJobItemProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CFossilizeStateCreator, CFossilizeStateCrea this); // 876
	ParallelProcessStarting(const CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFossilizeStateCreator:: this,
				void* pScratchSpace,
				size_t nScratchSpaceBytes,
				int nMaxThreads);  // 591
	Description(const CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFossilizeStateCreator:: this); // 592
	End(const CMemberFuncJobItemProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CFossilizeStateCreator, CFossilizeStateCrea this); // 881
	ParallelProcessFinished(const CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFossilizeStateCreator:: this,
				void* pScratchSpace,
				size_t nScratchSpaceBytes,
				int nMaxThreads);  // 593
} /* size: 340, variables: 5, inline expansions: 9 (342 bytes) */

// <00059C02> ../public/tier0/jobthread.h:568
// variables: 7
// function calls: 10
void CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> >::Run()
{
	const size_t  MAXIMUM_STACK_SCRATCH_SPACE; // 570
	const int  nMaxThreads; // 571
	uint8* pScratchSpace; // 580
	size_t nScratchSpaceSize; // 581
	int nJobThreads; // 588
	CInterlockedPtr<int>::GetRaw(); // 835
	Min<int>(const int& val1,
		const int& val2);  // 840
	CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1>::InitialWorkerCount(
				CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> >* pProcessor);  // 588
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 589
	{
		int nItems; // 847
		CInterlockedPtr<int>::GetRaw(); // 847
		{
			int nTargetChunks; // 856
		}
	}
	CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>::Begin(); // 876
	CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1>::ParallelProcessStarting(
				void* pScratchSpace,
				size_t nScratchSpaceBytes,
				int nMaxThreads);  // 591
	CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1>::Description(); // 592
	CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>::End(); // 881
	CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1>::ParallelProcessFinished(
				void* pScratchSpace,
				size_t nScratchSpaceBytes,
				int nMaxThreads);  // 593
} /* size: 325, variables: 5, inline expansions: 9 (332 bytes) */

// <068DC5C9> ../public/tier0/jobthread.h:598
// variables: 6
// function calls: 16
void Run(const CParallelProcessorAbstract<CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStati this, int nJobIndex)
{
	CInterlockedPtr<SerializeStaticCombosWorkUnit_t>::operator SerializeStaticCombosWorkUnit_t*(); // 886
	{
		SerializeStaticCombosWorkUnit_t* pLimit; // 890
		int nChunkSize; // 891
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 888
		{
			SerializeStaticCombosWorkUnit_t* pCurrent; // 895
			SerializeStaticCombosWorkUnit_t* pLast; // 924
			{
				int nThreadsWorking; // 903
				CInterlockedPtr<SerializeStaticCombosWorkUnit_t>::operator SerializeStaticCombosWorkUnit_t*(); // 899
				CInterlockedIntT<int, 4>::operator int(); // 903
				ThreadInterlockedExchangeAdd64(volatile int64* p,
								int64 value);  // 810
				CInterlockedPtr<SerializeStaticCombosWorkUnit_t>::AtomicAdd(
						int add);  // 906
				{
					int nItems; // 911
					ThreadInterlockedExchangeAdd64(volatile int64* p,
									int64 value);  // 810
					CInterlockedPtr<SerializeStaticCombosWorkUnit_t>::AtomicAdd(
							int add);  // 913
				}
			}
			ThreadInterlockedExchangeAdd64(volatile int64* p,
							int64 value);  // 810
			CInterlockedPtr<SerializeStaticCombosWorkUnit_t>::AtomicAdd(
					int add);  // 919
			Min<SerializeStaticCombosWorkUnit_t*>(SerializeStaticCombosWorkUnit_t* const& val1,
								SerializeStaticCombosWorkUnit_t* const& val2);  // 924
			CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>::Process(
				SerializeStaticCombosWorkUnit_t& item);  // 927
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 931
	}
	CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>, 1>::Process(
		int nThreadIndex,
		CParallelProcessorAbstract<CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombo pProcessor);  // 600
} /* size: 318, inline expansions: 2 (263 bytes) */

// <0618FD67> ../public/tier0/jobthread.h:598
// variables: 6
// function calls: 15
void Run(const CParallelProcessorAbstract<CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputati this, int nJobIndex)
{
	CInterlockedPtr<BentNormalComputationJob_t>::operator BentNormalComputationJob_t*(); // 886
	{
		BentNormalComputationJob_t* pLimit; // 890
		int nChunkSize; // 891
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 888
		{
			BentNormalComputationJob_t* pCurrent; // 895
			BentNormalComputationJob_t* pLast; // 924
			{
				int nThreadsWorking; // 903
				CInterlockedPtr<BentNormalComputationJob_t>::operator BentNormalComputationJob_t*(); // 899
				CInterlockedIntT<int, 4>::operator int(); // 903
				CInterlockedPtr<BentNormalComputationJob_t>::AtomicAdd(
						int add);  // 906
				{
					int nItems; // 911
					ThreadInterlockedExchangeAdd64(volatile int64* p,
									int64 value);  // 810
					CInterlockedPtr<BentNormalComputationJob_t>::AtomicAdd(
							int add);  // 913
				}
			}
			ThreadInterlockedExchangeAdd64(volatile int64* p,
							int64 value);  // 810
			CInterlockedPtr<BentNormalComputationJob_t>::AtomicAdd(
					int add);  // 919
			Min<BentNormalComputationJob_t*>(BentNormalComputationJob_t* const& val1,
							BentNormalComputationJob_t* const& val2);  // 924
			CFuncJobItemProcessor<BentNormalComputationJob_t>::Process(
				BentNormalComputationJob_t& item);  // 927
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 931
	}
	CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_t>, 1>::Process(
		int nThreadIndex,
		CParallelProcessorAbstract<CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_ pProcessor);  // 600
} /* size: 0, inline expansions: 2 (0 bytes) */

// <046C37A1> ../public/tier0/jobthread.h:598
// variables: 2
// function calls: 5
void Run(const CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapR this, int nJobIndex)
{
	{
		int nIndex; // 1077
		{
			int nCount; // 1080
			Min<int>(const int& val1,
				const int& val2);  // 1080
			CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t>::Process(
				FloatBitmapResampleInfo_t* pContext,
				int nFirst,
				int nCount);  // 1081
		}
		ThreadInterlockedExchangeAdd(volatile int32* p,
						int32 value);  // 660
		CInterlockedIntT<int, 4>::AtomicAdd(
				int add);  // 1077
	}
	CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> >::Process(
		int nThreadIndex,
		CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampl pProcessor);  // 600
} /* size: 0, inline expansions: 1 (0 bytes) */

// <046C35E3> ../public/tier0/jobthread.h:598
// variables: 2
// function calls: 5
void Run(const CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, Flo this, int nJobIndex)
{
	{
		int nIndex; // 1077
		ThreadInterlockedExchangeAdd(volatile int32* p,
						int32 value);  // 660
		CInterlockedIntT<int, 4>::AtomicAdd(
				int add);  // 1077
		{
			int nCount; // 1080
			Min<int>(const int& val1,
				const int& val2);  // 1080
			CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t>::Process(
				FloatBitMap_t* item,
				int nFirst,
				int nCount);  // 1081
		}
	}
	Process(const CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t>  this,
		int nThreadIndex,
		CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitM pProcessor);  // 600
} /* size: 0, inline expansions: 1 (0 bytes) */

// <046C3178> ../public/tier0/jobthread.h:598
// variables: 7
// function calls: 18
void CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> >::Run(int nJobIndex)
{
	CInterlockedPtr<int>::operator int*(); // 886
	{
		int* pLimit; // 890
		int nChunkSize; // 891
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 888
		{
			int* pCurrent; // 895
			int* pLast; // 924
			{
				int nThreadsWorking; // 903
				CInterlockedPtr<int>::operator int*(); // 899
				CInterlockedIntT<int, 4>::operator int(); // 903
				ThreadInterlockedExchangeAdd64(volatile int64* p,
								int64 value);  // 810
				CInterlockedPtr<int>::AtomicAdd(
						int add);  // 906
				{
					int nItems; // 911
					ThreadInterlockedExchangeAdd64(volatile int64* p,
									int64 value);  // 810
					CInterlockedPtr<int>::AtomicAdd(
							int add);  // 913
				}
			}
			ThreadInterlockedExchangeAdd64(volatile int64* p,
							int64 value);  // 810
			CInterlockedPtr<int>::AtomicAdd(
					int add);  // 919
			Min<int*>(int* const& val1,
					int* const& val2);  // 924
			_Function_base::_M_empty(); // 591
			function<void(int&)>::operator(
					int& __args#0); // 23
			CLambdaJobItemProcessor<int>::Process(
				int& item);  // 927
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 931
	}
	CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1>::Process(
		int nThreadIndex,
		CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> >* pProcessor);  // 600
} /* size: 316, inline expansions: 2 (265 bytes) */

// <0448C3E4> ../public/tier0/jobthread.h:598
// variables: 6
// function calls: 16
void Run(const CParallelProcessorAbstract<CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationW this, int nJobIndex)
{
	CInterlockedPtr<KMeansQuantizationWorkUnit>::operator KMeansQuantizationWorkUnit*(); // 886
	{
		KMeansQuantizationWorkUnit* pLimit; // 890
		int nChunkSize; // 891
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 888
		{
			KMeansQuantizationWorkUnit* pCurrent; // 895
			KMeansQuantizationWorkUnit* pLast; // 924
			{
				int nThreadsWorking; // 903
				CInterlockedPtr<KMeansQuantizationWorkUnit>::operator KMeansQuantizationWorkUnit*(); // 899
				CInterlockedIntT<int, 4>::operator int(); // 903
				ThreadInterlockedExchangeAdd64(volatile int64* p,
								int64 value);  // 810
				CInterlockedPtr<KMeansQuantizationWorkUnit>::AtomicAdd(
						int add);  // 906
				{
					int nItems; // 911
					ThreadInterlockedExchangeAdd64(volatile int64* p,
									int64 value);  // 810
					CInterlockedPtr<KMeansQuantizationWorkUnit>::AtomicAdd(
							int add);  // 913
				}
			}
			ThreadInterlockedExchangeAdd64(volatile int64* p,
							int64 value);  // 810
			CInterlockedPtr<KMeansQuantizationWorkUnit>::AtomicAdd(
					int add);  // 919
			Min<KMeansQuantizationWorkUnit*>(KMeansQuantizationWorkUnit* const& val1,
							KMeansQuantizationWorkUnit* const& val2);  // 924
			CFuncJobItemProcessor<KMeansQuantizationWorkUnit>::Process(
				KMeansQuantizationWorkUnit& item);  // 927
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 931
	}
	CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUnit>, 1>::Process(
		int nThreadIndex,
		CParallelProcessorAbstract<CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUni pProcessor);  // 600
} /* size: 0, inline expansions: 2 (0 bytes) */

// <02E12F3C> ../public/tier0/jobthread.h:598
// variables: 6
// function calls: 16
void CParallelProcessorAbstract<CParallelProcessor<CSceneObject::Run(int nJobIndex)
{
	CInterlockedPtr<CSceneObject::operator CSceneObject**(); // 886
	{
		CSceneObject** pLimit; // 890
		int nChunkSize; // 891
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 888
		{
			CSceneObject** pCurrent; // 895
			CSceneObject** pLast; // 924
			{
				int nThreadsWorking; // 903
				CInterlockedPtr<CSceneObject::operator CSceneObject**(); // 899
				CInterlockedIntT<int, 4>::operator int(); // 903
				ThreadInterlockedExchangeAdd64(volatile int64* p,
								int64 value);  // 810
				CInterlockedPtr<CSceneObject::AtomicAdd(
						int add);  // 906
				{
					int nItems; // 911
					ThreadInterlockedExchangeAdd64(volatile int64* p,
									int64 value);  // 810
					CInterlockedPtr<CSceneObject::AtomicAdd(
							int add);  // 913
				}
			}
			ThreadInterlockedExchangeAdd64(volatile int64* p,
							int64 value);  // 810
			CInterlockedPtr<CSceneObject::AtomicAdd(
					int add);  // 919
			Min<CSceneObject**>(CSceneObject** const& val1,
						CSceneObject** const& val2);  // 924
			CFuncJobItemProcessor<CSceneObject::Process(
				CSceneObject *& item);  // 927
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 931
	}
	CParallelProcessor<CSceneObject::Process(
		int nThreadIndex,
		CParallelProcessorAbstract<CParallelProcessor<CSceneObject*, CFuncJobItemProcessor<CSceneObject*>, 1> >* pProcessor);  // 600
} /* size: 293, inline expansions: 2 (243 bytes) */

// <0012C181> ../public/tier0/jobthread.h:598
// variables: 6
// function calls: 16
void CParallelProcessorAbstract<CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> >::Run(int nJobIndex)
{
	CInterlockedPtr<CrashItem_t>::operator CrashItem_t*(); // 886
	{
		CrashItem_t* pLimit; // 890
		int nChunkSize; // 891
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 888
		{
			CrashItem_t* pCurrent; // 895
			CrashItem_t* pLast; // 924
			{
				int nThreadsWorking; // 903
				CInterlockedPtr<CrashItem_t>::operator CrashItem_t*(); // 899
				CInterlockedIntT<int, 4>::operator int(); // 903
				ThreadInterlockedExchangeAdd64(volatile int64* p,
								int64 value);  // 810
				CInterlockedPtr<CrashItem_t>::AtomicAdd(
						int add);  // 906
				{
					int nItems; // 911
					ThreadInterlockedExchangeAdd64(volatile int64* p,
									int64 value);  // 810
					CInterlockedPtr<CrashItem_t>::AtomicAdd(
							int add);  // 913
				}
			}
			ThreadInterlockedExchangeAdd64(volatile int64* p,
							int64 value);  // 810
			CInterlockedPtr<CrashItem_t>::AtomicAdd(
					int add);  // 919
			Min<CrashItem_t*>(CrashItem_t* const& val1,
						CrashItem_t* const& val2);  // 924
			CFuncJobItemProcessor<CrashItem_t>::Process(
				CrashItem_t& item);  // 927
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 931
	}
	CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1>::Process(
		int nThreadIndex,
		CParallelProcessorAbstract<CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> >* pProcessor);  // 600
} /* size: 293, inline expansions: 2 (243 bytes) */

// <00637CA9> ../public/tier0/jobthread.h:598
// variables: 6
// function calls: 16
void Run(const CParallelProcessorAbstract<CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcess this, int nJobIndex)
{
	CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t>::operator CFossilizeStateCreator::PipelineWorkItem_t*(); // 886
	{
		PipelineWorkItem_t* pLimit; // 890
		int nChunkSize; // 891
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 888
		{
			PipelineWorkItem_t* pCurrent; // 895
			PipelineWorkItem_t* pLast; // 924
			{
				int nThreadsWorking; // 903
				CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t>::operator CFossilizeStateCreator::PipelineWorkItem_t*(); // 899
				CInterlockedIntT<int, 4>::operator int(); // 903
				ThreadInterlockedExchangeAdd64(volatile int64* p,
								int64 value);  // 810
				CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t>::AtomicAdd(
						int add);  // 906
				{
					int nItems; // 911
					ThreadInterlockedExchangeAdd64(volatile int64* p,
									int64 value);  // 810
					CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t>::AtomicAdd(
							int add);  // 913
				}
			}
			ThreadInterlockedExchangeAdd64(volatile int64* p,
							int64 value);  // 810
			CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t>::AtomicAdd(
					int add);  // 919
			Min<CFossilizeStateCreator::PipelineWorkItem_t*>(PipelineWorkItem_t* const& val1,
									PipelineWorkItem_t* const& val2);  // 924
			Process(const CMemberFuncJobItemProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CFossilizeStateCreator, CFossilizeStateCrea this,
				PipelineWorkItem_t& item);  // 927
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 931
	}
	Process(const CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFossilizeStateCreator:: this,
		int nThreadIndex,
		CParallelProcessorAbstract<CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFo pProcessor);  // 600
} /* size: 357, inline expansions: 2 (305 bytes) */

// <000596BA> ../public/tier0/jobthread.h:598
// variables: 6
// function calls: 16
void CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> >::Run(int nJobIndex)
{
	CInterlockedPtr<int>::operator int*(); // 886
	{
		int* pLimit; // 890
		int nChunkSize; // 891
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 888
		{
			int* pCurrent; // 895
			int* pLast; // 924
			{
				int nThreadsWorking; // 903
				CInterlockedPtr<int>::operator int*(); // 899
				CInterlockedIntT<int, 4>::operator int(); // 903
				ThreadInterlockedExchangeAdd64(volatile int64* p,
								int64 value);  // 810
				CInterlockedPtr<int>::AtomicAdd(
						int add);  // 906
				{
					int nItems; // 911
					ThreadInterlockedExchangeAdd64(volatile int64* p,
									int64 value);  // 810
					CInterlockedPtr<int>::AtomicAdd(
							int add);  // 913
				}
			}
			ThreadInterlockedExchangeAdd64(volatile int64* p,
							int64 value);  // 810
			CInterlockedPtr<int>::AtomicAdd(
					int add);  // 919
			Min<int*>(int* const& val1,
					int* const& val2);  // 924
			CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>::Process(
				int& item);  // 927
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 931
	}
	CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1>::Process(
		int nThreadIndex,
		CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> >* pProcessor);  // 600
} /* size: 332, inline expansions: 2 (284 bytes) */

// <0447DB61> ../public/tier0/jobthread.h:621
// member functions: 8
// member variables: 3
// vtable entry: 1
// class size: 24
class CParallelProcessLauncher {
	/* ../public/tier0/jobthread.h:638 */
	void CParallelProcessLauncher(CParallelProcessLauncher* , int, const char* , IThreadPool* );
private:
	const int m_nMaxThreads; /* 0 4 */
	const const char * m_szDescription; /* 8 8 */
	const class IThreadPool * m_pThreadPool; /* 16 8 */
	/* ../public/tier0/jobthread.h:624 */
	class CParallelLambdaJob<CSOAContainer::FilterInX(int, IntAABB_t, int, float const*, bool)::<lambda(int)> > : public IMultipleWorkerJob {
	public:
		/* class IMultipleWorkerJob <ancestor>; */ /* 0 8 */
		void CParallelLambdaJob(CParallelLambdaJob<CSOAContainer::FilterInX(int, IntAABB_t, int, float const*, bool)::<lambda(int)> >* , CParallelLambdaJob<CSOAContainer::FilterInX(int, IntAABB_t, int, float const*, bool)::<lambda(int)> >& );
		void CParallelLambdaJob(CParallelLambdaJob<CSOAContainer::FilterInX(int, IntAABB_t, int, float const*, bool)::<lambda(int)> >* , const CParallelLambdaJob<CSOAContainer::FilterInX(int, IntAABB_t, int, float const*, bool)::<lambda(int)> >& );
		/* ../public/tier0/jobthread.h:627 */
		void CParallelLambdaJob(CParallelLambdaJob<CSOAContainer::FilterInX(int, IntAABB_t, int, float const*, bool)::<lambda(int)> >* , const class& );
		/* ../public/tier0/jobthread.h:629 */
		virtual void Run(CParallelLambdaJob<CSOAContainer::FilterInX(int, IntAABB_t, int, float const*, bool)::<lambda(int)> >* , int);
		const class & m_lambda; /* 8 8 */
		virtual void ~CParallelLambdaJob(CParallelLambdaJob<CSOAContainer::FilterInX(int, IntAABB_t, int, float const*, bool)::<lambda(int)> >* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/jobthread.h:646 */
	void operator<< <CSOAContainer::FilterInX(int, IntAABB_t, int, float const*, bool)::<lambda(int)> >(CParallelProcessLauncher* , const class& );
	void CParallelProcessLauncher(class CParallelProcessLauncher *, int, const char  *, class IThreadPool *); /* linkage=_ZN24CParallelProcessLauncherC4EiPKcP11IThreadPool */
};

// <047A28F9> ../public/tier0/jobthread.h:621
// member functions: 8
// member variables: 3
// vtable entry: 1
// class size: 24
class CParallelProcessLauncher {
	/* ../public/tier0/jobthread.h:638 */
	void CParallelProcessLauncher(CParallelProcessLauncher* , int, const char* , IThreadPool* );
private:
	const int m_nMaxThreads; /* 0 4 */
	const const char * m_szDescription; /* 8 8 */
	const class IThreadPool * m_pThreadPool; /* 16 8 */
	/* ../public/tier0/jobthread.h:624 */
	class CParallelLambdaJob<FloatBitMap_t::WriteInMemoryEXRFast(CUtlBuffer&) const::<lambda(int)> > : public IMultipleWorkerJob {
	public:
		/* class IMultipleWorkerJob <ancestor>; */ /* 0 8 */
		void CParallelLambdaJob(CParallelLambdaJob<FloatBitMap_t::WriteInMemoryEXRFast(CUtlBuffer&) const::<lambda(int)> >* , CParallelLambdaJob<FloatBitMap_t::WriteInMemoryEXRFast(CUtlBuffer&) const::<lambda(int)> >& );
		void CParallelLambdaJob(CParallelLambdaJob<FloatBitMap_t::WriteInMemoryEXRFast(CUtlBuffer&) const::<lambda(int)> >* , const CParallelLambdaJob<FloatBitMap_t::WriteInMemoryEXRFast(CUtlBuffer&) const::<lambda(int)> >& );
		/* ../public/tier0/jobthread.h:627 */
		void CParallelLambdaJob(CParallelLambdaJob<FloatBitMap_t::WriteInMemoryEXRFast(CUtlBuffer&) const::<lambda(int)> >* , const class& );
		/* ../public/tier0/jobthread.h:629 */
		virtual void Run(CParallelLambdaJob<FloatBitMap_t::WriteInMemoryEXRFast(CUtlBuffer&) const::<lambda(int)> >* , int);
		const class & m_lambda; /* 8 8 */
		virtual void ~CParallelLambdaJob(CParallelLambdaJob<FloatBitMap_t::WriteInMemoryEXRFast(CUtlBuffer&) const::<lambda(int)> >* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/jobthread.h:646 */
	void operator<< <FloatBitMap_t::WriteInMemoryEXRFast(CUtlBuffer&) const::<lambda(int)> >(CParallelProcessLauncher* , const class& );
	void CParallelProcessLauncher(class CParallelProcessLauncher *, int, const char  *, class IThreadPool *); /* linkage=_ZN24CParallelProcessLauncherC4EiPKcP11IThreadPool */
};

// <0079A953> ../public/tier0/jobthread.h:621
// member functions: 8
// member variables: 3
// vtable entry: 1
// class size: 24
class CParallelProcessLauncher {
	/* ../public/tier0/jobthread.h:638 */
	void CParallelProcessLauncher(CParallelProcessLauncher* , int, const char* , IThreadPool* );
private:
	const int m_nMaxThreads; /* 0 4 */
	const const char * m_szDescription; /* 8 8 */
	const class IThreadPool * m_pThreadPool; /* 16 8 */
	/* ../public/tier0/jobthread.h:624 */
	class CParallelLambdaJob<ParallelFor<>(int, int, char const*, CRayTracePipelineVulkan::CRayTracePipelineVulkan(VkDevice, const RayTracePipelineStateCreateDesc_t&)::<lambda(int)>, int, int, int)::<lambda(int)> > : public IMultipleWorkerJob {
	public:
		/* class IMultipleWorkerJob <ancestor>; */ /* 0 8 */
		void CParallelLambdaJob(CParallelLambdaJob<ParallelFor<>(int, int, char const*, CRayTracePipelineVulkan::CRayTracePipelineVulkan(VkDevice, const , CParallelLambdaJob<ParallelFor<>(int, int, char const*, CRayTracePipelineVulkan::CRayTracePipelineVulkan(VkDevice, const );
		void CParallelLambdaJob(CParallelLambdaJob<ParallelFor<>(int, int, char const*, CRayTracePipelineVulkan::CRayTracePipelineVulkan(VkDevice, const , const CParallelLambdaJob<ParallelFor<>(int, int, char const*, CRayTracePipelineVulkan::CRayTracePipelineVulkan(VkDevice, );
		/* ../public/tier0/jobthread.h:627 */
		void CParallelLambdaJob(CParallelLambdaJob<ParallelFor<>(int, int, char const*, CRayTracePipelineVulkan::CRayTracePipelineVulkan(VkDevice, const , const class& );
		/* ../public/tier0/jobthread.h:629 */
		virtual void Run(CParallelLambdaJob<ParallelFor<>(int, int, char const*, CRayTracePipelineVulkan::CRayTracePipelineVulkan(VkDevice, const , int);
		const class & m_lambda; /* 8 8 */
		virtual void ~CParallelLambdaJob(CParallelLambdaJob<ParallelFor<>(int, int, char const*, CRayTracePipelineVulkan::CRayTracePipelineVulkan(VkDevice, const );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/jobthread.h:646 */
	void operator<< <ParallelFor<>(int, int, char const*, CRayTracePipelineVulkan::CRayTracePipelineVulkan(VkDevice, const RayTracePipelineStateCreateDesc_t&)::<lambda(int)>, int, int, int)::<lambda(int)> >(CParallelProcessLauncher* , const class& );
	void CParallelProcessLauncher(class CParallelProcessLauncher *, int, const char  *, class IThreadPool *); /* linkage=_ZN24CParallelProcessLauncherC4EiPKcP11IThreadPool */
};

// <047B0B8C> ../public/tier0/jobthread.h:624
// function call: 1
void CParallelLambdaJob<FloatBitMap_t::WriteInMemoryEXRFast(CUtlBuffer&) const::<lambda(int)> >::~CParallelLambdaJob() const::<lambda(int)> >* this)
{
	IMultipleWorkerJob::~IMultipleWorkerJob(); // 624
} /* size: 5, inline expansions: 1 (0 bytes) */

// <047B0ADA> ../public/tier0/jobthread.h:624
// function calls: 2
void CParallelLambdaJob<FloatBitMap_t::WriteInMemoryEXRFast(CUtlBuffer&) const::<lambda(int)> >::~CParallelLambdaJob() const::<lambda(int)> >* this)
{
	IMultipleWorkerJob::~IMultipleWorkerJob(); // 624
	CParallelLambdaJob<FloatBitMap_t::WriteInMemoryEXRFast(CUtlBuffer&) const::<lambda(int)> >::~CParallelLambdaJob() const::<lambda(int)> >* this); // 624
} /* size: 14, inline expansions: 2 (0 bytes) */

// <047B0ABD> ../public/tier0/jobthread.h:624
inline void CParallelLambdaJob<FloatBitMap_t::WriteInMemoryEXRFast(CUtlBuffer&) const::<lambda(int)> >::~CParallelLambdaJob() const::<lambda(int)> >* this)
{
} /* size: 0 */

// <044CC4B8> ../public/tier0/jobthread.h:624
// function call: 1
void CParallelLambdaJob<CSOAContainer::FilterInX(int, IntAABB_t, int, float const::~CParallelLambdaJob()::<lambda(int)> >* this)
{
	IMultipleWorkerJob::~IMultipleWorkerJob(); // 624
} /* size: 0, inline expansions: 1 (0 bytes) */

// <044CC407> ../public/tier0/jobthread.h:624
// function calls: 2
void CParallelLambdaJob<CSOAContainer::FilterInX(int, IntAABB_t, int, float const::~CParallelLambdaJob()::<lambda(int)> >* this)
{
	IMultipleWorkerJob::~IMultipleWorkerJob(); // 624
	CParallelLambdaJob<CSOAContainer::FilterInX(int, IntAABB_t, int, float const::~CParallelLambdaJob()::<lambda(int)> >* this); // 624
} /* size: 0, inline expansions: 2 (0 bytes) */

// <044CC3EA> ../public/tier0/jobthread.h:624
inline void CParallelLambdaJob<CSOAContainer::FilterInX(int, IntAABB_t, int, float const::~CParallelLambdaJob()::<lambda(int)> >* this)
{
} /* size: 0 */

// <007AAB87> ../public/tier0/jobthread.h:624
// function call: 1
void CParallelLambdaJob<ParallelFor<>(int, int, char const::~CParallelLambdaJob()
{
	IMultipleWorkerJob::~IMultipleWorkerJob(); // 624
} /* size: 5, inline expansions: 1 (0 bytes) */

// <007AAAD6> ../public/tier0/jobthread.h:624
// function calls: 2
void CParallelLambdaJob<ParallelFor<>(int, int, char const::~CParallelLambdaJob()
{
	IMultipleWorkerJob::~IMultipleWorkerJob(); // 624
	CParallelLambdaJob<ParallelFor<>(int, int, char const::~CParallelLambdaJob(); // 624
} /* size: 14, inline expansions: 2 (0 bytes) */

// <007AAAB9> ../public/tier0/jobthread.h:624
inline void CParallelLambdaJob<ParallelFor<>(int, int, char const::~CParallelLambdaJob()
{
} /* size: 0 */

// <047ADE40> ../public/tier0/jobthread.h:627
void CParallelLambdaJob<FloatBitMap_t::WriteInMemoryEXRFast(CUtlBuffer&) const::<lambda(int)> >::CParallelLambdaJob(const class& lambda)
{
} /* size: 0 */

// <047ADE1A> ../public/tier0/jobthread.h:627
inline void CParallelLambdaJob<FloatBitMap_t::WriteInMemoryEXRFast(CUtlBuffer&) const::<lambda(int)> >::CParallelLambdaJob(const class& lambda)
{
} /* size: 0 */

// <044BCD96> ../public/tier0/jobthread.h:627
void CParallelLambdaJob<CSOAContainer::FilterInX(int, IntAABB_t, int, float const::CParallelLambdaJob(const class& lambda)
{
} /* size: 0 */

// <044BCD70> ../public/tier0/jobthread.h:627
inline void CParallelLambdaJob<CSOAContainer::FilterInX(int, IntAABB_t, int, float const::CParallelLambdaJob(const class& lambda)
{
} /* size: 0 */

// <007A9802> ../public/tier0/jobthread.h:627
void CParallelLambdaJob<ParallelFor<>(int, int, char const::CParallelLambdaJob(const class& lambda)
{
} /* size: 0 */

// <007A97DC> ../public/tier0/jobthread.h:627
inline void CParallelLambdaJob<ParallelFor<>(int, int, char const::CParallelLambdaJob(const class& lambda)
{
} /* size: 0 */

// <047A4316> ../public/tier0/jobthread.h:629
// variables: 11
// function calls: 31
void CParallelLambdaJob<FloatBitMap_t::WriteInMemoryEXRFast(CUtlBuffer&) const::<lambda(int)> >::Run(int nJobIndex)
{
	{
		int y; // 165
		ThreadInterlockedExchangeAdd(volatile int32* p,
						int32 value);  // 660
		CInterlockedIntT<int, 4>::AtomicAdd(
				int add);  // 165
		CSOAContainer::NumRows(); // 383
		CSOAContainer::Height(); // 165
		{
			uint8_t* scanline_ptr; // 167
			uint32_t headerY; // 172
			uint32_t headerDataLen; // 173
			CSOAContainer::NumCols(); // 382
			CSOAContainer::Width(); // 167
			vector<unsigned char, std::allocator<unsigned char> >::size(); // 1292
			vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(
					size_type __n);  // 1315
			vector<unsigned char, std::allocator<unsigned char> >::operator[](
					size_type __n);  // 1316
			vector<unsigned char, std::allocator<unsigned char> >::at(
				size_type __n);  // 167
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 178
			{
				int c; // 181
				{
					short unsigned int* line_ptr; // 183
					int comp; // 184
					vector<long unsigned int, std::allocator<long unsigned int> >::operator[](
							size_type __n);  // 183
					CSOAContainer::NumCols(); // 382
					CSOAContainer::Width(); // 183
					{
						int x; // 186
						CSOAContainer::NumCols(); // 382
						CSOAContainer::Width(); // 186
						{
							union FP32 f32; // 188
							union FP16 h16; // 191
							clamp<int, int>(const int& val,
									const int& minVal,
									const int& maxVal);  // 525
							{
							}
							CSOAContainer::NumSlices(); // 526
							clamp<int, int>(const int& val,
									const int& minVal,
									const int& maxVal);  // 526
							CSOAContainer::ElementPointer<float>(
										int nAttributeIdx,
										int nX,
										int nY,
										int nZ);  // 535
							CSOAContainer::NumRows(); // 529
							{
							}
							CSOAContainer::NumSlices(); // 530
							{
							}
							_CUnalignedPointer_Base<float>::_Initialize(
									float* pOriginal);  // 145
							CUnalignedPointer<float>::CUnalignedPointer(
										Pointer_t pOriginal);  // 535
							clamp<int, int>(const int& val,
									const int& minVal,
									const int& maxVal);  // 524
							CSOAContainer::NumRows(); // 525
							FloatBitMap_t::Pixel(
								int x,
								int y,
								int z,
								int comp);  // 189
							cpy2(short unsigned int* dst_val,
								const short unsigned int* src_val);  // 197
						}
					}
				}
			}
		}
		ThreadInterlockedExchangeAdd(volatile int32* p,
						int32 value);  // 660
		CInterlockedIntT<int, 4>::AtomicAdd(
				int add);  // 165
	}
	operator()(const class* __closure,
			int _nParallelProcessMacroThreadIndex); // 631
} /* size: 0, inline expansions: 1 (762 bytes) */

// <0448BFBE> ../public/tier0/jobthread.h:629
// variables: 11
// function calls: 13
void CParallelLambdaJob<CSOAContainer::FilterInX(int, IntAABB_t, int, float const::Run(int nJobIndex)
{
	{
		CArrayAutoPtr<__vector(4) float> fl4OutputBuffer; // 2543
		fltx4* pfl4Output; // 2544
		IntAABB_t::Width(); // 2543
		CPlainAutoPtr<__vector(4) float>::CPlainAutoPtr(
				float* p); // 146
		CPlainAutoPtr<__vector(4) float>::Attach(
			float* p); // 146
		CArrayAutoPtr<__vector(4) float>::CArrayAutoPtr(
				int nNumElements); // 2543
		{
			int nJob; // 2546
			ThreadInterlockedExchangeAdd(volatile int32* p,
							int32 value);  // 660
			CInterlockedIntT<int, 4>::AtomicAdd(
					int add);  // 2546
			{
				int i; // 2548
				{
					int nRow; // 2550
					int nSlice; // 2551
					int nChannel; // 2552
					float* pRowPtr; // 2555
					CSOAContainer::RowPtr<float>(
							int nAttributeIdx,
							int nRowNumber,
							int nSliceNumber);  // 2555
				}
			}
			ThreadInterlockedExchangeAdd(volatile int32* p,
							int32 value);  // 660
			CInterlockedIntT<int, 4>::AtomicAdd(
					int add);  // 2546
		}
		CArrayAutoPtr<__vector(4) float>::Delete() float>* this); // 147
		CArrayAutoPtr<__vector(4) float>::~CArrayAutoPtr() float>* this); // 2559
	}
	operator()(const class* __closure,
			int _nParallelProcessMacroThreadIndex); // 631
} /* size: 0, inline expansions: 1 (0 bytes) */

// <007A87ED> ../public/tier0/jobthread.h:629
// variables: 6
// function calls: 4
void CParallelLambdaJob<ParallelFor<>(int, int, char const::Run(int nJobIndex)
{
	{
		int nCtrValue; // 1208
		int nLimit; // 1209
		__atomic_base<int>::fetch_add(
				__int_type __i,
				memory_order __m);  // 1208
		Min<int>(const int& val1,
			const int& val2);  // 1209
		{
			int nCtr; // 1212
			{
				VkResult nDeferredResult; // 885
			}
			operator()(const class* __closure,
					int nUnused); // 1214
		}
	}
	operator()(const class* __closure,
			int nParallelProcessIndex); // 631
} /* size: 186, inline expansions: 1 (146 bytes) */

// <047BCF89> ../public/tier0/jobthread.h:638
void CParallelProcessLauncher::CParallelProcessLauncher(int nMaxThreads, const char* szDescription, IThreadPool* pThreadPool)
{
} /* size: 0 */

// <047BCF49> ../public/tier0/jobthread.h:638
inline void CParallelProcessLauncher::CParallelProcessLauncher(int nMaxThreads, const char* szDescription, IThreadPool* pThreadPool)
{
} /* size: 0 */

// <047B0A81> ../public/tier0/jobthread.h:646
// function call: 1
inline void operator<< CParallelProcessLauncher::<FloatBitMap_t::WriteInMemoryEXRFast(const class& lambda)
{
	CParallelLambdaJob<FloatBitMap_t::WriteInMemoryEXRFast(CUtlBuffer&) const::<lambda(int)> > job; // 648
} /* size: 0, variables: 1 */

// <044CC3AE> ../public/tier0/jobthread.h:646
// function call: 1
inline void operator<< CParallelProcessLauncher::<CSOAContainer::FilterInX(const class& lambda)
{
	CParallelLambdaJob<CSOAContainer::FilterInX(int, IntAABB_t, int, float const*, bool)::<lambda(int)> > job; // 648
} /* size: 0, variables: 1 */

// <007AAA7D> ../public/tier0/jobthread.h:646
// function call: 1
inline void operator<< CParallelProcessLauncher::<ParallelFor<>(const class& lambda)
{
	CParallelLambdaJob<ParallelFor<>(int, int, char const*, CRayTracePipelineVulkan::CRayTracePipelineVulkan(VkDevice, const RayTracePipelineStateCreateDesc_t&)::<lambda(int)>, int, int, int)::<lambda(int)> > job; // 648
} /* size: 0, variables: 1 */

// <0011E18A> ../public/tier0/jobthread.h:704
// member functions: 2
// class size: 1
class CJobItemProcessor<CrashItem_t> {
	/* ../public/tier0/jobthread.h:708 */
	void Begin(CJobItemProcessor<CrashItem_t>* );
	/* ../public/tier0/jobthread.h:710 */
	void End(CJobItemProcessor<CrashItem_t>* );
};

// <02E0577C> ../public/tier0/jobthread.h:704
// member functions: 2
// class size: 1
class CJobItemProcessor<CSceneObject*> {
	/* ../public/tier0/jobthread.h:708 */
	void Begin(CJobItemProcessor<CSceneObject*>* );
	/* ../public/tier0/jobthread.h:710 */
	void End(CJobItemProcessor<CSceneObject*>* );
};

// <04487F98> ../public/tier0/jobthread.h:704
// member functions: 2
// class size: 1
class CJobItemProcessor<KMeansQuantizationWorkUnit> {
	/* ../public/tier0/jobthread.h:708 */
	void Begin(CJobItemProcessor<KMeansQuantizationWorkUnit>* );
	/* ../public/tier0/jobthread.h:710 */
	void End(CJobItemProcessor<KMeansQuantizationWorkUnit>* );
};

// <046BBB5D> ../public/tier0/jobthread.h:704
// member functions: 2
// class size: 1
class CJobItemProcessor<int> {
	/* ../public/tier0/jobthread.h:708 */
	void Begin(CJobItemProcessor<int>* );
	/* ../public/tier0/jobthread.h:710 */
	void End(CJobItemProcessor<int>* );
};

// <046BF128> ../public/tier0/jobthread.h:704
// member functions: 2
// class size: 1
class CJobItemProcessor<FloatBitMap_t> {
	/* ../public/tier0/jobthread.h:708 */
	void Begin(CJobItemProcessor<FloatBitMap_t>* );
	/* ../public/tier0/jobthread.h:710 */
	void End(CJobItemProcessor<FloatBitMap_t>* );
};

// <046BF5E2> ../public/tier0/jobthread.h:704
// member functions: 2
// class size: 1
class CJobItemProcessor<FloatBitmapResampleInfo_t> {
	/* ../public/tier0/jobthread.h:708 */
	void Begin(CJobItemProcessor<FloatBitmapResampleInfo_t>* );
	/* ../public/tier0/jobthread.h:710 */
	void End(CJobItemProcessor<FloatBitmapResampleInfo_t>* );
};

// <0618E439> ../public/tier0/jobthread.h:704
// member functions: 2
// class size: 1
class CJobItemProcessor<BentNormalComputationJob_t> {
	/* ../public/tier0/jobthread.h:708 */
	void Begin(CJobItemProcessor<BentNormalComputationJob_t>* );
	/* ../public/tier0/jobthread.h:710 */
	void End(CJobItemProcessor<BentNormalComputationJob_t>* );
};

// <068D7AE4> ../public/tier0/jobthread.h:704
// member functions: 2
// class size: 1
class CJobItemProcessor<SerializeStaticCombosWorkUnit_t> {
	/* ../public/tier0/jobthread.h:708 */
	void Begin(CJobItemProcessor<SerializeStaticCombosWorkUnit_t>* );
	/* ../public/tier0/jobthread.h:710 */
	void End(CJobItemProcessor<SerializeStaticCombosWorkUnit_t>* );
};

// <00635621> ../public/tier0/jobthread.h:704
// member functions: 2
// class size: 1
class CJobItemProcessor<CFossilizeStateCreator::PipelineWorkItem_t> {
	/* ../public/tier0/jobthread.h:708 */
	void Begin(CJobItemProcessor<CFossilizeStateCreator::PipelineWorkItem_t>* );
	/* ../public/tier0/jobthread.h:710 */
	void End(CJobItemProcessor<CFossilizeStateCreator::PipelineWorkItem_t>* );
};

// <0011E1E3> ../public/tier0/jobthread.h:714
// member functions: 11
// member variables: 4
// class size: 24
class CFuncJobItemProcessor<CrashItem_t> : public CJobItemProcessor<CrashItem_t> {
public:
	/* class CJobItemProcessor<CrashItem_t> <ancestor>; */ /* 0 0 */
	/* ../public/tier0/jobthread.h:717 */
	void Init(CFuncJobItemProcessor<CrashItem_t>* , void (*)(CrashItem_t& ), void (*)(void), void (*)(void));
	/* ../public/tier0/jobthread.h:725 */
	void Begin(CFuncJobItemProcessor<CrashItem_t>* );
	/* ../public/tier0/jobthread.h:726 */
	void Process(CFuncJobItemProcessor<CrashItem_t>* , CrashItem_t& );
	/* ../public/tier0/jobthread.h:727 */
	void End(CFuncJobItemProcessor<CrashItem_t>* );
protected:
	void (*m_pfnProcess)(CrashItem_t& ); /* 0 8* /
	void (*m_pfnBegin)(void); /* 8 8* /
	void (*m_pfnEnd)(void); /* 16 8* /
	void Init(class CFuncJobItemProcessor<CrashItem_t> *, void (*)(class CrashItem_t &), void (*)(void), void (*)(void)); /* linkage=_ZN21CFuncJobItemProcessorI11CrashItem_tE4InitEPFvRS0_EPFvvES6_ */
	void Begin(class CFuncJobItemProcessor<CrashItem_t> *); /* linkage=_ZN21CFuncJobItemProcessorI11CrashItem_tE5BeginEv */
	void Process(class CFuncJobItemProcessor<CrashItem_t> *, class CrashItem_t &); /* linkage=_ZN21CFuncJobItemProcessorI11CrashItem_tE7ProcessERS0_ */
	void End(class CFuncJobItemProcessor<CrashItem_t> *); /* linkage=_ZN21CFuncJobItemProcessorI11CrashItem_tE3EndEv */
};

// <02E057D5> ../public/tier0/jobthread.h:714
// member functions: 7
// member variables: 4
// class size: 24
class CFuncJobItemProcessor<CSceneObject*> : public CJobItemProcessor<CSceneObject*> {
public:
	/* class CJobItemProcessor<CSceneObject*> <ancestor>; */ /* 0 0 */
	/* ../public/tier0/jobthread.h:717 */
	void Init(CFuncJobItemProcessor<CSceneObject*>* , void (*)(CSceneObject* & ), void (*)(void), void (*)(void));
	/* ../public/tier0/jobthread.h:725 */
	void Begin(CFuncJobItemProcessor<CSceneObject*>* );
	/* ../public/tier0/jobthread.h:726 */
	void Process(CFuncJobItemProcessor<CSceneObject*>* , CSceneObject* & );
	/* ../public/tier0/jobthread.h:727 */
	void End(CFuncJobItemProcessor<CSceneObject*>* );
protected:
	void (*m_pfnProcess)(CSceneObject* & ); /* 0 8* /
	void (*m_pfnBegin)(void); /* 8 8* /
	void (*m_pfnEnd)(void); /* 16 8* /
};

// <04487FF1> ../public/tier0/jobthread.h:714
// member functions: 7
// member variables: 4
// class size: 24
class CFuncJobItemProcessor<KMeansQuantizationWorkUnit> : public CJobItemProcessor<KMeansQuantizationWorkUnit> {
public:
	/* class CJobItemProcessor<KMeansQuantizationWorkUnit> <ancestor>; */ /* 0 0 */
	/* ../public/tier0/jobthread.h:717 */
	void Init(CFuncJobItemProcessor<KMeansQuantizationWorkUnit>* , void (*)(KMeansQuantizationWorkUnit& ), void (*)(void), void (*)(void));
	/* ../public/tier0/jobthread.h:725 */
	void Begin(CFuncJobItemProcessor<KMeansQuantizationWorkUnit>* );
	/* ../public/tier0/jobthread.h:726 */
	void Process(CFuncJobItemProcessor<KMeansQuantizationWorkUnit>* , KMeansQuantizationWorkUnit& );
	/* ../public/tier0/jobthread.h:727 */
	void End(CFuncJobItemProcessor<KMeansQuantizationWorkUnit>* );
protected:
	void (*m_pfnProcess)(KMeansQuantizationWorkUnit& ); /* 0 8* /
	void (*m_pfnBegin)(void); /* 8 8* /
	void (*m_pfnEnd)(void); /* 16 8* /
};

// <0618E491> ../public/tier0/jobthread.h:714
// member functions: 7
// member variables: 4
// class size: 24
class CFuncJobItemProcessor<BentNormalComputationJob_t> : public CJobItemProcessor<BentNormalComputationJob_t> {
public:
	/* class CJobItemProcessor<BentNormalComputationJob_t> <ancestor>; */ /* 0 0 */
	/* ../public/tier0/jobthread.h:717 */
	void Init(CFuncJobItemProcessor<BentNormalComputationJob_t>* , void (*)(BentNormalComputationJob_t& ), void (*)(void), void (*)(void));
	/* ../public/tier0/jobthread.h:725 */
	void Begin(CFuncJobItemProcessor<BentNormalComputationJob_t>* );
	/* ../public/tier0/jobthread.h:726 */
	void Process(CFuncJobItemProcessor<BentNormalComputationJob_t>* , BentNormalComputationJob_t& );
	/* ../public/tier0/jobthread.h:727 */
	void End(CFuncJobItemProcessor<BentNormalComputationJob_t>* );
protected:
	void (*m_pfnProcess)(BentNormalComputationJob_t& ); /* 0 8* /
	void (*m_pfnBegin)(void); /* 8 8* /
	void (*m_pfnEnd)(void); /* 16 8* /
};

// <068D7B3D> ../public/tier0/jobthread.h:714
// member functions: 11
// member variables: 4
// class size: 24
class CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t> : public CJobItemProcessor<SerializeStaticCombosWorkUnit_t> {
public:
	/* class CJobItemProcessor<SerializeStaticCombosWorkUnit_t> <ancestor>; */ /* 0 0 */
	/* ../public/tier0/jobthread.h:717 */
	void Init(CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>* , void (*)(SerializeStaticCombosWorkUnit_t& ), void (*)(void), void (*)(void));
	/* ../public/tier0/jobthread.h:725 */
	void Begin(CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>* );
	/* ../public/tier0/jobthread.h:726 */
	void Process(CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>* , SerializeStaticCombosWorkUnit_t& );
	/* ../public/tier0/jobthread.h:727 */
	void End(CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>* );
protected:
	void (*m_pfnProcess)(SerializeStaticCombosWorkUnit_t& ); /* 0 8* /
	void (*m_pfnBegin)(void); /* 8 8* /
	void (*m_pfnEnd)(void); /* 16 8* /
	void Init(class CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t> *, void (*)(class SerializeStaticCombosWorkUnit_t &), void (*)(void), void (*)(void)); /* linkage=_ZN21CFuncJobItemProcessorI31SerializeStaticCombosWorkUnit_tE4InitEPFvRS0_EPFvvES6_ */
	void Begin(class CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t> *); /* linkage=_ZN21CFuncJobItemProcessorI31SerializeStaticCombosWorkUnit_tE5BeginEv */
	void Process(class CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t> *, class SerializeStaticCombosWorkUnit_t &); /* linkage=_ZN21CFuncJobItemProcessorI31SerializeStaticCombosWorkUnit_tE7ProcessERS0_ */
	void End(class CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t> *); /* linkage=_ZN21CFuncJobItemProcessorI31SerializeStaticCombosWorkUnit_tE3EndEv */
};

// <068EE02B> ../public/tier0/jobthread.h:717
inline void CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>::Init(void (*pfnProcess)(SerializeStaticCombosWorkUnit_t &), void (*pfnBegin)(void), void (*pfnEnd)(void))
{
} /* size: 0 */

// <06190E11> ../public/tier0/jobthread.h:717
inline void CFuncJobItemProcessor<BentNormalComputationJob_t>::Init(void (*pfnProcess)(BentNormalComputationJob_t &), void (*pfnBegin)(void), void (*pfnEnd)(void))
{
} /* size: 0 */

// <044C048D> ../public/tier0/jobthread.h:717
inline void CFuncJobItemProcessor<KMeansQuantizationWorkUnit>::Init(void (*pfnProcess)(KMeansQuantizationWorkUnit &), void (*pfnBegin)(void), void (*pfnEnd)(void))
{
} /* size: 0 */

// <02E93B07> ../public/tier0/jobthread.h:717
inline void CFuncJobItemProcessor<CSceneObject::Init(void (*pfnProcess)(CSceneObject* &), void (*pfnBegin)(void), void (*pfnEnd)(void))
{
} /* size: 0 */

// <00131DAD> ../public/tier0/jobthread.h:717
inline void CFuncJobItemProcessor<CrashItem_t>::Init(void (*pfnProcess)(CrashItem_t &), void (*pfnBegin)(void), void (*pfnEnd)(void))
{
} /* size: 0 */

// <068E186C> ../public/tier0/jobthread.h:725
inline void CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>::Begin()
{
} /* size: 0 */

// <061901F2> ../public/tier0/jobthread.h:725
inline void CFuncJobItemProcessor<BentNormalComputationJob_t>::Begin()
{
} /* size: 0 */

// <0449046B> ../public/tier0/jobthread.h:725
inline void CFuncJobItemProcessor<KMeansQuantizationWorkUnit>::Begin()
{
} /* size: 0 */

// <02E19850> ../public/tier0/jobthread.h:725
inline void CFuncJobItemProcessor<CSceneObject::Begin()
{
} /* size: 0 */

// <0012CFB5> ../public/tier0/jobthread.h:725
inline void CFuncJobItemProcessor<CrashItem_t>::Begin()
{
} /* size: 0 */

// <068DC2B7> ../public/tier0/jobthread.h:726
inline void CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>::Process(SerializeStaticCombosWorkUnit_t& item)
{
} /* size: 0 */

// <0618FC3A> ../public/tier0/jobthread.h:726
inline void CFuncJobItemProcessor<BentNormalComputationJob_t>::Process(BentNormalComputationJob_t& item)
{
} /* size: 0 */

// <0448BE91> ../public/tier0/jobthread.h:726
inline void CFuncJobItemProcessor<KMeansQuantizationWorkUnit>::Process(KMeansQuantizationWorkUnit& item)
{
} /* size: 0 */

// <02E1227F> ../public/tier0/jobthread.h:726
inline void CFuncJobItemProcessor<CSceneObject::Process(CSceneObject *& item)
{
} /* size: 0 */

// <0012A4D8> ../public/tier0/jobthread.h:726
inline void CFuncJobItemProcessor<CrashItem_t>::Process(CrashItem_t& item)
{
} /* size: 0 */

// <068E1853> ../public/tier0/jobthread.h:727
inline void CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>::End()
{
} /* size: 0 */

// <061901D9> ../public/tier0/jobthread.h:727
inline void CFuncJobItemProcessor<BentNormalComputationJob_t>::End()
{
} /* size: 0 */

// <04490452> ../public/tier0/jobthread.h:727
inline void CFuncJobItemProcessor<KMeansQuantizationWorkUnit>::End()
{
} /* size: 0 */

// <02E19837> ../public/tier0/jobthread.h:727
inline void CFuncJobItemProcessor<CSceneObject::End()
{
} /* size: 0 */

// <0012CF9C> ../public/tier0/jobthread.h:727
inline void CFuncJobItemProcessor<CrashItem_t>::End()
{
} /* size: 0 */

// <0063567A> ../public/tier0/jobthread.h:736
// member functions: 4
// member variables: 5
// class size: 56
class CMemberFuncJobItemProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CFossilizeStateCreator, CFossilizeStateCreator> : public CJobItemProcessor<CFossilizeStateCreator::PipelineWorkItem_t> {
public:
	/* class CJobItemProcessor<CFossilizeStateCreator::PipelineWorkItem_t> <ancestor>; */ /* 0 0 */
	/* ../public/tier0/jobthread.h:739 */
	void Init(CMemberFuncJobItemProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CFossilizeStateCreator, CFossilizeStateCreator>* , CFossilizeStateCreator* , void ()(CFossilizeStateCreator* , PipelineWorkItem_t& ) CFossilizeStateCreator::*, void ()(CFossilizeStateCreator* ) CFossilizeStateCreator::*, void ()(CFossilizeStateCreator* ) CFossilizeStateCreator::*);
	/* ../public/tier0/jobthread.h:747 */
	void Begin(CMemberFuncJobItemProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CFossilizeStateCreator, CFossilizeStateCreator>* );
	/* ../public/tier0/jobthread.h:748 */
	void Process(CMemberFuncJobItemProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CFossilizeStateCreator, CFossilizeStateCreator>* , PipelineWorkItem_t& );
	/* ../public/tier0/jobthread.h:749 */
	void End(CMemberFuncJobItemProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CFossilizeStateCreator, CFossilizeStateCreator>* );
protected:
	CFossilizeStateCreator * m_pObject; /* 0 8 */
	void ()(class CFossilizeStateCreator *, class PipelineWorkItem_t &) CFossilizeStateCreator::* m_pfnProcess; /* 8 8 */
	void ()(class CFossilizeStateCreator *) CFossilizeStateCreator::* m_pfnBegin; /* 24 8 */
	void ()(class CFossilizeStateCreator *) CFossilizeStateCreator::* m_pfnEnd; /* 40 8 */
};

// <0005830F> ../public/tier0/jobthread.h:736
// member functions: 8
// member variables: 5
// class size: 56
class CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue> : public CJobItemProcessor<int> {
public:
	/* class CJobItemProcessor<int> <ancestor>; */ /* 0 0 */
	/* ../public/tier0/jobthread.h:739 */
	void Init(CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>* , CCallQueue* , void ()(CCallQueue* , int& ) CCallQueue::*, void ()(CCallQueue* ) CCallQueue::*, void ()(CCallQueue* ) CCallQueue::*);
	/* ../public/tier0/jobthread.h:747 */
	void Begin(CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>* );
	/* ../public/tier0/jobthread.h:748 */
	void Process(CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>* , int& );
	/* ../public/tier0/jobthread.h:749 */
	void End(CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>* );
protected:
	CCallQueue * m_pObject; /* 0 8 */
	void ()(class CCallQueue *, int &) CCallQueue::* m_pfnProcess; /* 8 8 */
	void ()(class CCallQueue *) CCallQueue::* m_pfnBegin; /* 24 8 */
	void ()(class CCallQueue *) CCallQueue::* m_pfnEnd; /* 40 8 */
	void Init(class CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue> *, class CCallQueue *, void ()(class CCallQueue *, int &) CCallQueue::*, void ()(class CCallQueue *) CCallQueue::*, void ()(class CCallQueue *) CCallQueue::*); /* linkage=_ZN27CMemberFuncJobItemProcessorIi10CCallQueueS0_E4InitEPS0_MS0_FvRiEMS0_FvvES7_ */
	void Begin(class CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue> *); /* linkage=_ZN27CMemberFuncJobItemProcessorIi10CCallQueueS0_E5BeginEv */
	void Process(class CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue> *, int &); /* linkage=_ZN27CMemberFuncJobItemProcessorIi10CCallQueueS0_E7ProcessERi */
	void End(class CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue> *); /* linkage=_ZN27CMemberFuncJobItemProcessorIi10CCallQueueS0_E3EndEv */
};

// <00660371> ../public/tier0/jobthread.h:739
inline void Init(const CMemberFuncJobItemProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CFossilizeStateCreator, CFossilizeStateCrea this, CFossilizeStateCreator* pObject, void ()(CFossilizeStateCreator *, PipelineWorkItem_t &) CFossilizeStateCreator::* pfnProcess, void ()(CFossilizeStateCreator *) CFossilizeStateCreator::* pfnBegin, void ()(CFossilizeStateCreator *) CFossilizeStateCreator::* pfnEnd)
{
} /* size: 0 */

// <0005A298> ../public/tier0/jobthread.h:739
inline void CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>::Init(CCallQueue* pObject, void ()(CCallQueue *, int &) CCallQueue::* pfnProcess, void ()(CCallQueue *) CCallQueue::* pfnBegin, void ()(CCallQueue *) CCallQueue::* pfnEnd)
{
} /* size: 0 */

// <0064161F> ../public/tier0/jobthread.h:747
inline void Begin(const CMemberFuncJobItemProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CFossilizeStateCreator, CFossilizeStateCrea this)
{
} /* size: 0 */

// <00059ACC> ../public/tier0/jobthread.h:747
inline void CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>::Begin()
{
} /* size: 0 */

// <00637B4B> ../public/tier0/jobthread.h:748
inline void Process(const CMemberFuncJobItemProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CFossilizeStateCreator, CFossilizeStateCrea this, PipelineWorkItem_t& item)
{
} /* size: 0 */

// <0005958D> ../public/tier0/jobthread.h:748
inline void CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>::Process(int& item)
{
} /* size: 0 */

// <00641606> ../public/tier0/jobthread.h:749
inline void End(const CMemberFuncJobItemProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CFossilizeStateCreator, CFossilizeStateCrea this)
{
} /* size: 0 */

// <00059AB3> ../public/tier0/jobthread.h:749
inline void CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>::End()
{
} /* size: 0 */

// <046BF63A> ../public/tier0/jobthread.h:760
// member functions: 11
// member variables: 4
// class size: 24
class CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> : public CJobItemProcessor<FloatBitmapResampleInfo_t> {
public:
	/* class CJobItemProcessor<FloatBitmapResampleInfo_t> <ancestor>; */ /* 0 0 */
	/* ../public/tier0/jobthread.h:763 */
	void Init(CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t>* , void (*)(FloatBitmapResampleInfo_t* , int, int), void (*)(void), void (*)(void));
	/* ../public/tier0/jobthread.h:770 */
	void Begin(CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t>* );
	/* ../public/tier0/jobthread.h:771 */
	void Process(CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t>* , FloatBitmapResampleInfo_t* , int, int);
	/* ../public/tier0/jobthread.h:772 */
	void End(CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t>* );
protected:
	void (*m_pfnProcess)(FloatBitmapResampleInfo_t* , int, int); /* 0 8* /
	void (*m_pfnBegin)(void); /* 8 8* /
	void (*m_pfnEnd)(void); /* 16 8* /
	void Init(class CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> *, void (*)(class FloatBitmapResampleInfo_t *, int, int), void (*)(void), void (*)(void)); /* linkage=_ZN25CLoopFuncJobItemProcessorI25FloatBitmapResampleInfo_tE4InitEPFvPS0_iiEPFvvES6_ */
	void Begin(class CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> *); /* linkage=_ZN25CLoopFuncJobItemProcessorI25FloatBitmapResampleInfo_tE5BeginEv */
	void Process(class CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> *, class FloatBitmapResampleInfo_t *, int, int); /* linkage=_ZN25CLoopFuncJobItemProcessorI25FloatBitmapResampleInfo_tE7ProcessEPS0_ii */
	void End(class CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> *); /* linkage=_ZN25CLoopFuncJobItemProcessorI25FloatBitmapResampleInfo_tE3EndEv */
};

// <046C8438> ../public/tier0/jobthread.h:763
inline void CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t>::Init(void (*pfnProcess)(FloatBitmapResampleInfo_t *, int, int), void (*pfnBegin)(void), void (*pfnEnd)(void))
{
} /* size: 0 */

// <046C3B3C> ../public/tier0/jobthread.h:770
inline void CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t>::Begin()
{
} /* size: 0 */

// <046C2E79> ../public/tier0/jobthread.h:771
inline void CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t>::Process(FloatBitmapResampleInfo_t* pContext, int nFirst, int nCount)
{
} /* size: 0 */

// <046C3B23> ../public/tier0/jobthread.h:772
inline void CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t>::End()
{
} /* size: 0 */

// <046BF180> ../public/tier0/jobthread.h:781
// member functions: 4
// member variables: 5
// class size: 56
class CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t> : public CJobItemProcessor<FloatBitMap_t> {
public:
	/* class CJobItemProcessor<FloatBitMap_t> <ancestor>; */ /* 0 0 */
	/* ../public/tier0/jobthread.h:784 */
	void Init(CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t>* , FloatBitMap_t* , void ()(FloatBitMap_t* , FloatBitMap_t* , int, int) FloatBitMap_t::*, void ()(FloatBitMap_t* ) FloatBitMap_t::*, void ()(FloatBitMap_t* ) FloatBitMap_t::*);
	/* ../public/tier0/jobthread.h:792 */
	void Begin(CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t>* );
	/* ../public/tier0/jobthread.h:793 */
	void Process(CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t>* , FloatBitMap_t* , int, int);
	/* ../public/tier0/jobthread.h:794 */
	void End(CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t>* );
protected:
	FloatBitMap_t * m_pObject; /* 0 8 */
	void ()(class FloatBitMap_t *, class FloatBitMap_t *, int, int) FloatBitMap_t::* m_pfnProcess; /* 8 8 */
	void ()(class FloatBitMap_t *) FloatBitMap_t::* m_pfnBegin; /* 24 8 */
	void ()(class FloatBitMap_t *) FloatBitMap_t::* m_pfnEnd; /* 40 8 */
};

// <046C9CA2> ../public/tier0/jobthread.h:784
inline void CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t>::Init(FloatBitMap_t* pObject, void ()(FloatBitMap_t *, FloatBitMap_t *, int, int) FloatBitMap_t::* pfnProcess, void ()(FloatBitMap_t *) FloatBitMap_t::* pfnBegin, void ()(FloatBitMap_t *) FloatBitMap_t::* pfnEnd)
{
} /* size: 0 */

// <046C3B6E> ../public/tier0/jobthread.h:792
inline void CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t>::Begin()
{
} /* size: 0 */

// <046C2E39> ../public/tier0/jobthread.h:793
inline void CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t>::Process(FloatBitMap_t* item, int nFirst, int nCount)
{
} /* size: 0 */

// <046C3B55> ../public/tier0/jobthread.h:794
inline void CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t>::End()
{
} /* size: 0 */

// <046F734F> ../public/tier0/jobthread.h:805
void CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1>::~CParallelProcessor()
{
} /* size: 0 */

// <046F7332> ../public/tier0/jobthread.h:805
inline void CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1>::~CParallelProcessor()
{
} /* size: 0 */

// <0011E6BD> ../public/tier0/jobthread.h:805
// member functions: 14
// member variables: 9
// class size: 192
class CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> : public CDefaultParallelController {
public:
	/* class CDefaultParallelController <ancestor>; */ /* 0 0 */
	/* ../public/tier0/jobthread.h:808 */
	void CParallelProcessor(CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1>* , const char* );
	/* ../public/tier0/jobthread.h:814 */
	void Run(CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1>* , CrashItem_t* , unsigned int, int, int, IThreadPool* );
protected:
	/* ../public/tier0/jobthread.h:831 */
	const char* Description(CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1>* );
	/* ../public/tier0/jobthread.h:833 */
	int InitialWorkerCount(CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1>* , CParallelProcessorAbstract<CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> >* );
	/* ../public/tier0/jobthread.h:843 */
	void ParallelProcessStarting(CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1>* , void* , size_t, int);
	/* ../public/tier0/jobthread.h:879 */
	void ParallelProcessFinished(CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1>* , void* , size_t, int);
	/* ../public/tier0/jobthread.h:884 */
	void Process(CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1>* , int, CParallelProcessorAbstract<CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> >* );
	CFuncJobItemProcessor<CrashItem_t> m_ItemProcessor; /* 0 24 */
private:
	CrashItem_t * m_pLimit; /* 24 8 */
	int m_nChunkSize; /* 32 4 */
	const char * m_szDescription; /* 40 8 */
	int m_nMaxParallel; /* 48 4 */
	bool m_bReduceFinalChunkSize; /* 52 1 */
	CInterlockedInt m_nThreadsWorking __attribute__((__aligned__(64))); /* 64 4 */
	CInterlockedPtr<CrashItem_t> m_pItems __attribute__((__aligned__(64))); /* 128 8 */
	void CParallelProcessor(class CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> *, const char  *); /* linkage=_ZN18CParallelProcessorI11CrashItem_t21CFuncJobItemProcessorIS0_ELi1EEC4EPKc */
	void Run(class CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> *, class CrashItem_t *, unsigned int, int, int, class IThreadPool *); /* linkage=_ZN18CParallelProcessorI11CrashItem_t21CFuncJobItemProcessorIS0_ELi1EE3RunEPS0_jiiP11IThreadPool */
	const char  * Description(class CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> *); /* linkage=_ZN18CParallelProcessorI11CrashItem_t21CFuncJobItemProcessorIS0_ELi1EE11DescriptionEv */
	int InitialWorkerCount(class CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> *, class CParallelProcessorAbstract<CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> > *); /* linkage=_ZN18CParallelProcessorI11CrashItem_t21CFuncJobItemProcessorIS0_ELi1EE18InitialWorkerCountEP26CParallelProcessorAbstractIS3_E */
	void ParallelProcessStarting(class CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> *, void *, size_t, int); /* linkage=_ZN18CParallelProcessorI11CrashItem_t21CFuncJobItemProcessorIS0_ELi1EE23ParallelProcessStartingEPvmi */
	void ParallelProcessFinished(class CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> *, void *, size_t, int); /* linkage=_ZN18CParallelProcessorI11CrashItem_t21CFuncJobItemProcessorIS0_ELi1EE23ParallelProcessFinishedEPvmi */
	void Process(class CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> *, int, class CParallelProcessorAbstract<CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> > *); /* linkage=_ZN18CParallelProcessorI11CrashItem_t21CFuncJobItemProcessorIS0_ELi1EE7ProcessEiP26CParallelProcessorAbstractIS3_E */
} __attribute__((__aligned__(64)));

// <02E05C98> ../public/tier0/jobthread.h:805
// member functions: 7
// member variables: 9
// class size: 192
class CParallelProcessor<CSceneObject*, CFuncJobItemProcessor<CSceneObject*>, 1> : public CDefaultParallelController {
public:
	/* class CDefaultParallelController <ancestor>; */ /* 0 0 */
	/* ../public/tier0/jobthread.h:808 */
	void CParallelProcessor(CParallelProcessor<CSceneObject*, CFuncJobItemProcessor<CSceneObject*>, 1>* , const char* );
	/* ../public/tier0/jobthread.h:814 */
	void Run(CParallelProcessor<CSceneObject*, CFuncJobItemProcessor<CSceneObject*>, 1>* , CSceneObject** , unsigned int, int, int, IThreadPool* );
protected:
	/* ../public/tier0/jobthread.h:831 */
	const char* Description(CParallelProcessor<CSceneObject*, CFuncJobItemProcessor<CSceneObject*>, 1>* );
	/* ../public/tier0/jobthread.h:833 */
	int InitialWorkerCount(CParallelProcessor<CSceneObject*, CFuncJobItemProcessor<CSceneObject*>, 1>* , CParallelProcessorAbstract<CParallelProcessor<CSceneObject*, CFuncJobItemProcessor<CSceneObject*>, 1> >* );
	/* ../public/tier0/jobthread.h:843 */
	void ParallelProcessStarting(CParallelProcessor<CSceneObject*, CFuncJobItemProcessor<CSceneObject*>, 1>* , void* , size_t, int);
	/* ../public/tier0/jobthread.h:879 */
	void ParallelProcessFinished(CParallelProcessor<CSceneObject*, CFuncJobItemProcessor<CSceneObject*>, 1>* , void* , size_t, int);
	/* ../public/tier0/jobthread.h:884 */
	void Process(CParallelProcessor<CSceneObject*, CFuncJobItemProcessor<CSceneObject*>, 1>* , int, CParallelProcessorAbstract<CParallelProcessor<CSceneObject*, CFuncJobItemProcessor<CSceneObject*>, 1> >* );
	CFuncJobItemProcessor<CSceneObject*> m_ItemProcessor; /* 0 24 */
private:
	CSceneObject * * m_pLimit; /* 24 8 */
	int m_nChunkSize; /* 32 4 */
	const char * m_szDescription; /* 40 8 */
	int m_nMaxParallel; /* 48 4 */
	bool m_bReduceFinalChunkSize; /* 52 1 */
	CInterlockedInt m_nThreadsWorking __attribute__((__aligned__(64))); /* 64 4 */
	CInterlockedPtr<CSceneObject*> m_pItems __attribute__((__aligned__(64))); /* 128 8 */
} __attribute__((__aligned__(64)));

// <044884BA> ../public/tier0/jobthread.h:805
// member functions: 7
// member variables: 9
// class size: 192
class CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUnit>, 1> : public CDefaultParallelController {
public:
	/* class CDefaultParallelController <ancestor>; */ /* 0 0 */
	/* ../public/tier0/jobthread.h:808 */
	void CParallelProcessor(CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUnit>, 1>* , const char* );
	/* ../public/tier0/jobthread.h:814 */
	void Run(CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUnit>, 1>* , KMeansQuantizationWorkUnit* , unsigned int, int, int, IThreadPool* );
protected:
	/* ../public/tier0/jobthread.h:831 */
	const char* Description(CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUnit>, 1>* );
	/* ../public/tier0/jobthread.h:833 */
	int InitialWorkerCount(CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUnit>, 1>* , CParallelProcessorAbstract<CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUni);
	/* ../public/tier0/jobthread.h:843 */
	void ParallelProcessStarting(CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUnit>, 1>* , void* , size_t, int);
	/* ../public/tier0/jobthread.h:879 */
	void ParallelProcessFinished(CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUnit>, 1>* , void* , size_t, int);
	/* ../public/tier0/jobthread.h:884 */
	void Process(CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUnit>, 1>* , int, CParallelProcessorAbstract<CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUni);
	CFuncJobItemProcessor<KMeansQuantizationWorkUnit> m_ItemProcessor; /* 0 24 */
private:
	KMeansQuantizationWorkUnit * m_pLimit; /* 24 8 */
	int m_nChunkSize; /* 32 4 */
	const char * m_szDescription; /* 40 8 */
	int m_nMaxParallel; /* 48 4 */
	bool m_bReduceFinalChunkSize; /* 52 1 */
	CInterlockedInt m_nThreadsWorking __attribute__((__aligned__(64))); /* 64 4 */
	CInterlockedPtr<KMeansQuantizationWorkUnit> m_pItems __attribute__((__aligned__(64))); /* 128 8 */
} __attribute__((__aligned__(64)));

// <046BC0A9> ../public/tier0/jobthread.h:805
// member functions: 23
// member variables: 9
// class size: 192
class CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> : public CDefaultParallelController {
public:
	/* class CDefaultParallelController <ancestor>; */ /* 0 0 */
	/* ../public/tier0/jobthread.h:808 */
	void CParallelProcessor(CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1>* , const char* );
	/* ../public/tier0/jobthread.h:814 */
	void Run(CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1>* , int* , unsigned int, int, int, IThreadPool* );
protected:
	/* ../public/tier0/jobthread.h:831 */
	const char* Description(CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1>* );
	/* ../public/tier0/jobthread.h:833 */
	int InitialWorkerCount(CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1>* , CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> >* );
	/* ../public/tier0/jobthread.h:843 */
	void ParallelProcessStarting(CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1>* , void* , size_t, int);
	/* ../public/tier0/jobthread.h:879 */
	void ParallelProcessFinished(CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1>* , void* , size_t, int);
	/* ../public/tier0/jobthread.h:884 */
	void Process(CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1>* , int, CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> >* );
	CLambdaJobItemProcessor<int> m_ItemProcessor; /* 0 32 */
private:
	int * m_pLimit; /* 32 8 */
	int m_nChunkSize; /* 40 4 */
	const char * m_szDescription; /* 48 8 */
	int m_nMaxParallel; /* 56 4 */
	bool m_bReduceFinalChunkSize; /* 60 1 */
	CInterlockedInt m_nThreadsWorking __attribute__((__aligned__(64))); /* 64 4 */
	CInterlockedPtr<int> m_pItems __attribute__((__aligned__(64))); /* 128 8 */
	void ~CParallelProcessor(CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1>* );
	void CParallelProcessor(class CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> *, const char  *); /* linkage=_ZN18CParallelProcessorIi27CMemberFuncJobItemProcessorIi10CCallQueueS1_ELi1EEC4EPKc */
	void Run(class CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> *, int *, unsigned int, int, int, class IThreadPool *); /* linkage=_ZN18CParallelProcessorIi27CMemberFuncJobItemProcessorIi10CCallQueueS1_ELi1EE3RunEPijiiP11IThreadPool */
	const char  * Description(class CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> *); /* linkage=_ZN18CParallelProcessorIi27CMemberFuncJobItemProcessorIi10CCallQueueS1_ELi1EE11DescriptionEv */
	int InitialWorkerCount(class CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> *, class CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> > *); /* linkage=_ZN18CParallelProcessorIi27CMemberFuncJobItemProcessorIi10CCallQueueS1_ELi1EE18InitialWorkerCountEP26CParallelProcessorAbstractIS3_E */
	void ParallelProcessStarting(class CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> *, void *, size_t, int); /* linkage=_ZN18CParallelProcessorIi27CMemberFuncJobItemProcessorIi10CCallQueueS1_ELi1EE23ParallelProcessStartingEPvmi */
	void ParallelProcessFinished(class CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> *, void *, size_t, int); /* linkage=_ZN18CParallelProcessorIi27CMemberFuncJobItemProcessorIi10CCallQueueS1_ELi1EE23ParallelProcessFinishedEPvmi */
	void Process(class CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> *, int, class CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> > *); /* linkage=_ZN18CParallelProcessorIi27CMemberFuncJobItemProcessorIi10CCallQueueS1_ELi1EE7ProcessEiP26CParallelProcessorAbstractIS3_E */
	void CParallelProcessor(class CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> *, const char  *); /* linkage=_ZN18CParallelProcessorIi23CLambdaJobItemProcessorIiELi1EEC4EPKc */
	void Run(class CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> *, int *, unsigned int, int, int, class IThreadPool *); /* linkage=_ZN18CParallelProcessorIi23CLambdaJobItemProcessorIiELi1EE3RunEPijiiP11IThreadPool */
	const char  * Description(class CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> *); /* linkage=_ZN18CParallelProcessorIi23CLambdaJobItemProcessorIiELi1EE11DescriptionEv */
	int InitialWorkerCount(class CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> *, class CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> > *); /* linkage=_ZN18CParallelProcessorIi23CLambdaJobItemProcessorIiELi1EE18InitialWorkerCountEP26CParallelProcessorAbstractIS2_E */
	void ParallelProcessStarting(class CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> *, void *, size_t, int); /* linkage=_ZN18CParallelProcessorIi23CLambdaJobItemProcessorIiELi1EE23ParallelProcessStartingEPvmi */
	void ParallelProcessFinished(class CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> *, void *, size_t, int); /* linkage=_ZN18CParallelProcessorIi23CLambdaJobItemProcessorIiELi1EE23ParallelProcessFinishedEPvmi */
	void Process(class CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> *, int, class CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> > *); /* linkage=_ZN18CParallelProcessorIi23CLambdaJobItemProcessorIiELi1EE7ProcessEiP26CParallelProcessorAbstractIS2_E */
	void ~CParallelProcessor(class CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> *); /* linkage=_ZN18CParallelProcessorIi23CLambdaJobItemProcessorIiELi1EED4Ev */
} __attribute__((__aligned__(64)));

// <0618E953> ../public/tier0/jobthread.h:805
// member functions: 7
// member variables: 9
// class size: 192
class CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_t>, 1> : public CDefaultParallelController {
public:
	/* class CDefaultParallelController <ancestor>; */ /* 0 0 */
	/* ../public/tier0/jobthread.h:808 */
	void CParallelProcessor(CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_t>, 1>* , const char* );
	/* ../public/tier0/jobthread.h:814 */
	void Run(CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_t>, 1>* , BentNormalComputationJob_t* , unsigned int, int, int, IThreadPool* );
protected:
	/* ../public/tier0/jobthread.h:831 */
	const char* Description(CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_t>, 1>* );
	/* ../public/tier0/jobthread.h:833 */
	int InitialWorkerCount(CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_t>, 1>* , CParallelProcessorAbstract<CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_);
	/* ../public/tier0/jobthread.h:843 */
	void ParallelProcessStarting(CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_t>, 1>* , void* , size_t, int);
	/* ../public/tier0/jobthread.h:879 */
	void ParallelProcessFinished(CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_t>, 1>* , void* , size_t, int);
	/* ../public/tier0/jobthread.h:884 */
	void Process(CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_t>, 1>* , int, CParallelProcessorAbstract<CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_);
	CFuncJobItemProcessor<BentNormalComputationJob_t> m_ItemProcessor; /* 0 24 */
private:
	BentNormalComputationJob_t * m_pLimit; /* 24 8 */
	int m_nChunkSize; /* 32 4 */
	const char * m_szDescription; /* 40 8 */
	int m_nMaxParallel; /* 48 4 */
	bool m_bReduceFinalChunkSize; /* 52 1 */
	CInterlockedInt m_nThreadsWorking __attribute__((__aligned__(64))); /* 64 4 */
	CInterlockedPtr<BentNormalComputationJob_t> m_pItems __attribute__((__aligned__(64))); /* 128 8 */
} __attribute__((__aligned__(64)));

// <068D8000> ../public/tier0/jobthread.h:805
// member functions: 14
// member variables: 9
// class size: 192
class CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>, 1> : public CDefaultParallelController {
public:
	/* class CDefaultParallelController <ancestor>; */ /* 0 0 */
	/* ../public/tier0/jobthread.h:808 */
	void CParallelProcessor(CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>, 1>* , const char* );
	/* ../public/tier0/jobthread.h:814 */
	void Run(CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>, 1>* , SerializeStaticCombosWorkUnit_t* , unsigned int, int, int, IThreadPool* );
protected:
	/* ../public/tier0/jobthread.h:831 */
	const char* Description(CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>, 1>* );
	/* ../public/tier0/jobthread.h:833 */
	int InitialWorkerCount(CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>, 1>* , CParallelProcessorAbstract<CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombo);
	/* ../public/tier0/jobthread.h:843 */
	void ParallelProcessStarting(CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>, 1>* , void* , size_t, int);
	/* ../public/tier0/jobthread.h:879 */
	void ParallelProcessFinished(CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>, 1>* , void* , size_t, int);
	/* ../public/tier0/jobthread.h:884 */
	void Process(CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>, 1>* , int, CParallelProcessorAbstract<CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombo);
	CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t> m_ItemProcessor; /* 0 24 */
private:
	SerializeStaticCombosWorkUnit_t * m_pLimit; /* 24 8 */
	int m_nChunkSize; /* 32 4 */
	const char * m_szDescription; /* 40 8 */
	int m_nMaxParallel; /* 48 4 */
	bool m_bReduceFinalChunkSize; /* 52 1 */
	CInterlockedInt m_nThreadsWorking __attribute__((__aligned__(64))); /* 64 4 */
	CInterlockedPtr<SerializeStaticCombosWorkUnit_t> m_pItems __attribute__((__aligned__(64))); /* 128 8 */
	void CParallelProcessor(class CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>, 1> *, const char  *); /* linkage=_ZN18CParallelProcessorI31SerializeStaticCombosWorkUnit_t21CFuncJobItemProcessorIS0_ELi1EEC4EPKc */
	void Run(class CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>, 1> *, class SerializeStaticCombosWorkUnit_t *, unsigned int, int, int, class IThreadPool *); /* linkage=_ZN18CParallelProcessorI31SerializeStaticCombosWorkUnit_t21CFuncJobItemProcessorIS0_ELi1EE3RunEPS0_jiiP11IThreadPool */
	const char  * Description(class CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>, 1> *); /* linkage=_ZN18CParallelProcessorI31SerializeStaticCombosWorkUnit_t21CFuncJobItemProcessorIS0_ELi1EE11DescriptionEv */
	int InitialWorkerCount(class CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>, 1> *, class CParallelProcessorAbstract<CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombo); /* linkage=_ZN18CParallelProcessorI31SerializeStaticCombosWorkUnit_t21CFuncJobItemProcessorIS0_ELi1EE18InitialWorkerCountEP26CParallelProcessorAbstractIS3_E */
	void ParallelProcessStarting(class CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>, 1> *, void *, size_t, int); /* linkage=_ZN18CParallelProcessorI31SerializeStaticCombosWorkUnit_t21CFuncJobItemProcessorIS0_ELi1EE23ParallelProcessStartingEPvmi */
	void ParallelProcessFinished(class CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>, 1> *, void *, size_t, int); /* linkage=_ZN18CParallelProcessorI31SerializeStaticCombosWorkUnit_t21CFuncJobItemProcessorIS0_ELi1EE23ParallelProcessFinishedEPvmi */
	void Process(class CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>, 1> *, int, class CParallelProcessorAbstract<CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombo); /* linkage=_ZN18CParallelProcessorI31SerializeStaticCombosWorkUnit_t21CFuncJobItemProcessorIS0_ELi1EE7ProcessEiP26CParallelProcessorAbstractIS3_E */
} __attribute__((__aligned__(64)));

// <00635B99> ../public/tier0/jobthread.h:805
// member functions: 7
// member variables: 9
// class size: 256
class CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CFossilizeStateCreator, CFossilizeStateCreator>, 1> : public CDefaultParallelController {
public:
	/* class CDefaultParallelController <ancestor>; */ /* 0 0 */
	/* ../public/tier0/jobthread.h:808 */
	void CParallelProcessor(CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFossilizeStateCreator::Pipeli, const char* );
	/* ../public/tier0/jobthread.h:814 */
	void Run(CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFossilizeStateCreator::Pipeli, PipelineWorkItem_t* , unsigned int, int, int, IThreadPool* );
protected:
	/* ../public/tier0/jobthread.h:831 */
	const char* Description(CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFossilizeStateCreator::Pipeli);
	/* ../public/tier0/jobthread.h:833 */
	int InitialWorkerCount(CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFossilizeStateCreator::Pipeli, CParallelProcessorAbstract<CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFo);
	/* ../public/tier0/jobthread.h:843 */
	void ParallelProcessStarting(CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFossilizeStateCreator::Pipeli, void* , size_t, int);
	/* ../public/tier0/jobthread.h:879 */
	void ParallelProcessFinished(CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFossilizeStateCreator::Pipeli, void* , size_t, int);
	/* ../public/tier0/jobthread.h:884 */
	void Process(CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFossilizeStateCreator::Pipeli, int, CParallelProcessorAbstract<CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFo);
	CMemberFuncJobItemProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CFossilizeStateCreator, CFossilizeStateCreator> m_ItemProcessor; /* 0 56 */
private:
	PipelineWorkItem_t * m_pLimit; /* 56 8 */
	int m_nChunkSize; /* 64 4 */
	const char * m_szDescription; /* 72 8 */
	int m_nMaxParallel; /* 80 4 */
	bool m_bReduceFinalChunkSize; /* 84 1 */
	CInterlockedInt m_nThreadsWorking __attribute__((__aligned__(64))); /* 128 4 */
	CInterlockedPtr<CFossilizeStateCreator::PipelineWorkItem_t> m_pItems __attribute__((__aligned__(64))); /* 192 8 */
} __attribute__((__aligned__(64)));

// <0005881E> ../public/tier0/jobthread.h:805
// member functions: 22
// member variables: 9
// class size: 256
class CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> : public CDefaultParallelController {
public:
	/* class CDefaultParallelController <ancestor>; */ /* 0 0 */
	/* ../public/tier0/jobthread.h:808 */
	void CParallelProcessor(CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1>* , const char* );
	/* ../public/tier0/jobthread.h:814 */
	void Run(CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1>* , int* , unsigned int, int, int, IThreadPool* );
protected:
	/* ../public/tier0/jobthread.h:831 */
	const char* Description(CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1>* );
	/* ../public/tier0/jobthread.h:833 */
	int InitialWorkerCount(CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1>* , CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> >* );
	/* ../public/tier0/jobthread.h:843 */
	void ParallelProcessStarting(CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1>* , void* , size_t, int);
	/* ../public/tier0/jobthread.h:879 */
	void ParallelProcessFinished(CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1>* , void* , size_t, int);
	/* ../public/tier0/jobthread.h:884 */
	void Process(CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1>* , int, CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> >* );
	CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue> m_ItemProcessor; /* 0 56 */
private:
	int * m_pLimit; /* 56 8 */
	int m_nChunkSize; /* 64 4 */
	const char * m_szDescription; /* 72 8 */
	int m_nMaxParallel; /* 80 4 */
	bool m_bReduceFinalChunkSize; /* 84 1 */
	CInterlockedInt m_nThreadsWorking __attribute__((__aligned__(64))); /* 128 4 */
	CInterlockedPtr<int> m_pItems __attribute__((__aligned__(64))); /* 192 8 */
	void CParallelProcessor(class CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> *, const char  *); /* linkage=_ZN18CParallelProcessorIi27CMemberFuncJobItemProcessorIi10CCallQueueS1_ELi1EEC4EPKc */
	void Run(class CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> *, int *, unsigned int, int, int, class IThreadPool *); /* linkage=_ZN18CParallelProcessorIi27CMemberFuncJobItemProcessorIi10CCallQueueS1_ELi1EE3RunEPijiiP11IThreadPool */
	const char  * Description(class CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> *); /* linkage=_ZN18CParallelProcessorIi27CMemberFuncJobItemProcessorIi10CCallQueueS1_ELi1EE11DescriptionEv */
	int InitialWorkerCount(class CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> *, class CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> > *); /* linkage=_ZN18CParallelProcessorIi27CMemberFuncJobItemProcessorIi10CCallQueueS1_ELi1EE18InitialWorkerCountEP26CParallelProcessorAbstractIS3_E */
	void ParallelProcessStarting(class CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> *, void *, size_t, int); /* linkage=_ZN18CParallelProcessorIi27CMemberFuncJobItemProcessorIi10CCallQueueS1_ELi1EE23ParallelProcessStartingEPvmi */
	void ParallelProcessFinished(class CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> *, void *, size_t, int); /* linkage=_ZN18CParallelProcessorIi27CMemberFuncJobItemProcessorIi10CCallQueueS1_ELi1EE23ParallelProcessFinishedEPvmi */
	void Process(class CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> *, int, class CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> > *); /* linkage=_ZN18CParallelProcessorIi27CMemberFuncJobItemProcessorIi10CCallQueueS1_ELi1EE7ProcessEiP26CParallelProcessorAbstractIS3_E */
	void CParallelProcessor(class CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> *, const char  *); /* linkage=_ZN18CParallelProcessorIi23CLambdaJobItemProcessorIiELi1EEC4EPKc */
	void Run(class CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> *, int *, unsigned int, int, int, class IThreadPool *); /* linkage=_ZN18CParallelProcessorIi23CLambdaJobItemProcessorIiELi1EE3RunEPijiiP11IThreadPool */
	const char  * Description(class CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> *); /* linkage=_ZN18CParallelProcessorIi23CLambdaJobItemProcessorIiELi1EE11DescriptionEv */
	int InitialWorkerCount(class CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> *, class CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> > *); /* linkage=_ZN18CParallelProcessorIi23CLambdaJobItemProcessorIiELi1EE18InitialWorkerCountEP26CParallelProcessorAbstractIS2_E */
	void ParallelProcessStarting(class CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> *, void *, size_t, int); /* linkage=_ZN18CParallelProcessorIi23CLambdaJobItemProcessorIiELi1EE23ParallelProcessStartingEPvmi */
	void ParallelProcessFinished(class CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> *, void *, size_t, int); /* linkage=_ZN18CParallelProcessorIi23CLambdaJobItemProcessorIiELi1EE23ParallelProcessFinishedEPvmi */
	void Process(class CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> *, int, class CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> > *); /* linkage=_ZN18CParallelProcessorIi23CLambdaJobItemProcessorIiELi1EE7ProcessEiP26CParallelProcessorAbstractIS2_E */
	void ~CParallelProcessor(class CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> *); /* linkage=_ZN18CParallelProcessorIi23CLambdaJobItemProcessorIiELi1EED4Ev */
} __attribute__((__aligned__(64)));

// <068EE091> ../public/tier0/jobthread.h:808
void CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>, 1>::CParallelProcessor(const char* pszDescription)
{
} /* size: 0 */

// <068EE06B> ../public/tier0/jobthread.h:808
inline void CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>, 1>::CParallelProcessor(const char* pszDescription)
{
} /* size: 0 */

// <06190E77> ../public/tier0/jobthread.h:808
void CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_t>, 1>::CParallelProcessor(const char* pszDescription)
{
} /* size: 0 */

// <06190E51> ../public/tier0/jobthread.h:808
inline void CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_t>, 1>::CParallelProcessor(const char* pszDescription)
{
} /* size: 0 */

// <046CF483> ../public/tier0/jobthread.h:808
void CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1>::CParallelProcessor(const char* pszDescription)
{
} /* size: 0 */

// <046CF45D> ../public/tier0/jobthread.h:808
inline void CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1>::CParallelProcessor(const char* pszDescription)
{
} /* size: 0 */

// <044C04F3> ../public/tier0/jobthread.h:808
void CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUnit>, 1>::CParallelProcessor(const char* pszDescription)
{
} /* size: 0 */

// <044C04CD> ../public/tier0/jobthread.h:808
inline void CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUnit>, 1>::CParallelProcessor(const char* pszDescription)
{
} /* size: 0 */

// <02E93B6D> ../public/tier0/jobthread.h:808
void CParallelProcessor<CSceneObject::CParallelProcessor(const char* pszDescription)
{
} /* size: 0 */

// <02E93B47> ../public/tier0/jobthread.h:808
inline void CParallelProcessor<CSceneObject::CParallelProcessor(const char* pszDescription)
{
} /* size: 0 */

// <00131E13> ../public/tier0/jobthread.h:808
void CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1>::CParallelProcessor(const char* pszDescription)
{
} /* size: 0 */

// <00131DED> ../public/tier0/jobthread.h:808
inline void CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1>::CParallelProcessor(const char* pszDescription)
{
} /* size: 0 */

// <006603E4> ../public/tier0/jobthread.h:808
void CParallelProcessor(const CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFossilizeStateCreator:: this, const char* pszDescription)
{
} /* size: 0 */

// <006603BE> ../public/tier0/jobthread.h:808
inline void CParallelProcessor(const CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFossilizeStateCreator:: this, const char* pszDescription)
{
} /* size: 0 */

// <0005A30B> ../public/tier0/jobthread.h:808
void CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1>::CParallelProcessor(const char* pszDescription)
{
} /* size: 0 */

// <0005A2E5> ../public/tier0/jobthread.h:808
inline void CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1>::CParallelProcessor(const char* pszDescription)
{
} /* size: 0 */

// <068EDE91> ../public/tier0/jobthread.h:814
// variable: 1
inline void CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>, 1>::Run(SerializeStaticCombosWorkUnit_t* pItems, unsigned int nItems, int nChunkSize, int nMaxParallel, IThreadPool* pThreadPool)
{
	CParallelProcessorAbstract<CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>, 1> > abstractProcessor; // 825
} /* size: 0, variables: 1 */

// <06190C75> ../public/tier0/jobthread.h:814
// variable: 1
inline void CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_t>, 1>::Run(BentNormalComputationJob_t* pItems, unsigned int nItems, int nChunkSize, int nMaxParallel, IThreadPool* pThreadPool)
{
	CParallelProcessorAbstract<CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_t>, 1> > abstractProcessor; // 825
} /* size: 0, variables: 1 */

// <046CF205> ../public/tier0/jobthread.h:814
// variable: 1
inline void CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1>::Run(int* pItems, unsigned int nItems, int nChunkSize, int nMaxParallel, IThreadPool* pThreadPool)
{
	CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> > abstractProcessor; // 825
} /* size: 0, variables: 1 */

// <044C02F4> ../public/tier0/jobthread.h:814
// variable: 1
inline void CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUnit>, 1>::Run(KMeansQuantizationWorkUnit* pItems, unsigned int nItems, int nChunkSize, int nMaxParallel, IThreadPool* pThreadPool)
{
	CParallelProcessorAbstract<CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUnit>, 1> > abstractProcessor; // 825
} /* size: 0, variables: 1 */

// <02E9396E> ../public/tier0/jobthread.h:814
// variable: 1
inline void CParallelProcessor<CSceneObject::Run(CSceneObject** pItems, unsigned int nItems, int nChunkSize, int nMaxParallel, IThreadPool* pThreadPool)
{
	CParallelProcessorAbstract<CParallelProcessor<CSceneObject*, CFuncJobItemProcessor<CSceneObject*>, 1> > abstractProcessor; // 825
} /* size: 0, variables: 1 */

// <00131C14> ../public/tier0/jobthread.h:814
// variable: 1
inline void CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1>::Run(CrashItem_t* pItems, unsigned int nItems, int nChunkSize, int nMaxParallel, IThreadPool* pThreadPool)
{
	CParallelProcessorAbstract<CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> > abstractProcessor; // 825
} /* size: 0, variables: 1 */

// <006601D6> ../public/tier0/jobthread.h:814
// variable: 1
inline void Run(const CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFossilizeStateCreator:: this, PipelineWorkItem_t* pItems, unsigned int nItems, int nChunkSize, int nMaxParallel, IThreadPool* pThreadPool)
{
	CParallelProcessorAbstract<CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CFossilizeStateCreator, CFossilizeStateCreator>, 1> > abstractProcessor; // 825
} /* size: 0, variables: 1 */

// <0005A0FF> ../public/tier0/jobthread.h:814
// variable: 1
inline void CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1>::Run(int* pItems, unsigned int nItems, int nChunkSize, int nMaxParallel, IThreadPool* pThreadPool)
{
	CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> > abstractProcessor; // 825
} /* size: 0, variables: 1 */

// <068E5557> ../public/tier0/jobthread.h:831
inline void CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>, 1>::Description()
{
} /* size: 0 */

// <061902E2> ../public/tier0/jobthread.h:831
inline void CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_t>, 1>::Description()
{
} /* size: 0 */

// <046C56CE> ../public/tier0/jobthread.h:831
inline void CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1>::Description()
{
} /* size: 0 */

// <0449950F> ../public/tier0/jobthread.h:831
inline void CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUnit>, 1>::Description()
{
} /* size: 0 */

// <02E1CFFC> ../public/tier0/jobthread.h:831
inline void CParallelProcessor<CSceneObject::Description()
{
} /* size: 0 */

// <0012D677> ../public/tier0/jobthread.h:831
inline void CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1>::Description()
{
} /* size: 0 */

// <00649EAC> ../public/tier0/jobthread.h:831
inline void Description(const CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFossilizeStateCreator:: this)
{
} /* size: 0 */

// <00059B3E> ../public/tier0/jobthread.h:831
inline void CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1>::Description()
{
} /* size: 0 */

// <068E55CE> ../public/tier0/jobthread.h:833
// variables: 3
inline void CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>, 1>::InitialWorkerCount(CParallelProcessorAbstract<CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombo pProcessor)
{
	int nItems; // 835
	int nInitialChunkSize; // 836
	int nInitialChunks; // 838
} /* size: 0, variables: 3 */

// <06190359> ../public/tier0/jobthread.h:833
// variables: 3
inline void CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_t>, 1>::InitialWorkerCount(CParallelProcessorAbstract<CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_ pProcessor)
{
	int nItems; // 835
	int nInitialChunkSize; // 836
	int nInitialChunks; // 838
} /* size: 0, variables: 3 */

// <046C5745> ../public/tier0/jobthread.h:833
// variables: 3
inline void CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1>::InitialWorkerCount(CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> >* pProcessor)
{
	int nItems; // 835
	int nInitialChunkSize; // 836
	int nInitialChunks; // 838
} /* size: 0, variables: 3 */

// <04499586> ../public/tier0/jobthread.h:833
// variables: 3
inline void CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUnit>, 1>::InitialWorkerCount(CParallelProcessorAbstract<CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUni pProcessor)
{
	int nItems; // 835
	int nInitialChunkSize; // 836
	int nInitialChunks; // 838
} /* size: 0, variables: 3 */

// <02E1D073> ../public/tier0/jobthread.h:833
// variables: 3
inline void CParallelProcessor<CSceneObject::InitialWorkerCount(CParallelProcessorAbstract<CParallelProcessor<CSceneObject*, CFuncJobItemProcessor<CSceneObject*>, 1> >* pProcessor)
{
	int nItems; // 835
	int nInitialChunkSize; // 836
	int nInitialChunks; // 838
} /* size: 0, variables: 3 */

// <0012D6EE> ../public/tier0/jobthread.h:833
// variables: 3
inline void CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1>::InitialWorkerCount(CParallelProcessorAbstract<CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> >* pProcessor)
{
	int nItems; // 835
	int nInitialChunkSize; // 836
	int nInitialChunks; // 838
} /* size: 0, variables: 3 */

// <00649F23> ../public/tier0/jobthread.h:833
// variables: 3
inline void InitialWorkerCount(const CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFossilizeStateCreator:: this, CParallelProcessorAbstract<CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFo pProcessor)
{
	int nItems; // 835
	int nInitialChunkSize; // 836
	int nInitialChunks; // 838
} /* size: 0, variables: 3 */

// <00059BB5> ../public/tier0/jobthread.h:833
// variables: 3
inline void CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1>::InitialWorkerCount(CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> >* pProcessor)
{
	int nItems; // 835
	int nInitialChunkSize; // 836
	int nInitialChunks; // 838
} /* size: 0, variables: 3 */

// <068E5570> ../public/tier0/jobthread.h:843
// variables: 2
inline void CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>, 1>::ParallelProcessStarting(void* pScratchSpace, size_t nScratchSpaceBytes, int nMaxThreads)
{
	{
		int nItems; // 847
		{
			int nTargetChunks; // 856
		}
	}
} /* size: 0 */

// <061902FB> ../public/tier0/jobthread.h:843
// variables: 2
inline void CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_t>, 1>::ParallelProcessStarting(void* pScratchSpace, size_t nScratchSpaceBytes, int nMaxThreads)
{
	{
		int nItems; // 847
		{
			int nTargetChunks; // 856
		}
	}
} /* size: 0 */

// <046C56E7> ../public/tier0/jobthread.h:843
// variables: 2
inline void CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1>::ParallelProcessStarting(void* pScratchSpace, size_t nScratchSpaceBytes, int nMaxThreads)
{
	{
		int nItems; // 847
		{
			int nTargetChunks; // 856
		}
	}
} /* size: 0 */

// <04499528> ../public/tier0/jobthread.h:843
// variables: 2
inline void CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUnit>, 1>::ParallelProcessStarting(void* pScratchSpace, size_t nScratchSpaceBytes, int nMaxThreads)
{
	{
		int nItems; // 847
		{
			int nTargetChunks; // 856
		}
	}
} /* size: 0 */

// <02E1D015> ../public/tier0/jobthread.h:843
// variables: 2
inline void CParallelProcessor<CSceneObject::ParallelProcessStarting(void* pScratchSpace, size_t nScratchSpaceBytes, int nMaxThreads)
{
	{
		int nItems; // 847
		{
			int nTargetChunks; // 856
		}
	}
} /* size: 0 */

// <0012D690> ../public/tier0/jobthread.h:843
// variables: 2
inline void CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1>::ParallelProcessStarting(void* pScratchSpace, size_t nScratchSpaceBytes, int nMaxThreads)
{
	{
		int nItems; // 847
		{
			int nTargetChunks; // 856
		}
	}
} /* size: 0 */

// <00649EC5> ../public/tier0/jobthread.h:843
// variables: 2
inline void ParallelProcessStarting(const CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFossilizeStateCreator:: this, void* pScratchSpace, size_t nScratchSpaceBytes, int nMaxThreads)
{
	{
		int nItems; // 847
		{
			int nTargetChunks; // 856
		}
	}
} /* size: 0 */

// <00059B57> ../public/tier0/jobthread.h:843
// variables: 2
inline void CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1>::ParallelProcessStarting(void* pScratchSpace, size_t nScratchSpaceBytes, int nMaxThreads)
{
	{
		int nItems; // 847
		{
			int nTargetChunks; // 856
		}
	}
} /* size: 0 */

// <068E5517> ../public/tier0/jobthread.h:879
inline void CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>, 1>::ParallelProcessFinished(void* pScratchSpace, size_t nScratchSpaceBytes, int nMaxThreads)
{
} /* size: 0 */

// <061902A2> ../public/tier0/jobthread.h:879
inline void CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_t>, 1>::ParallelProcessFinished(void* pScratchSpace, size_t nScratchSpaceBytes, int nMaxThreads)
{
} /* size: 0 */

// <046C568E> ../public/tier0/jobthread.h:879
inline void CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1>::ParallelProcessFinished(void* pScratchSpace, size_t nScratchSpaceBytes, int nMaxThreads)
{
} /* size: 0 */

// <044994CF> ../public/tier0/jobthread.h:879
inline void CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUnit>, 1>::ParallelProcessFinished(void* pScratchSpace, size_t nScratchSpaceBytes, int nMaxThreads)
{
} /* size: 0 */

// <02E1CFBC> ../public/tier0/jobthread.h:879
inline void CParallelProcessor<CSceneObject::ParallelProcessFinished(void* pScratchSpace, size_t nScratchSpaceBytes, int nMaxThreads)
{
} /* size: 0 */

// <0012D637> ../public/tier0/jobthread.h:879
inline void CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1>::ParallelProcessFinished(void* pScratchSpace, size_t nScratchSpaceBytes, int nMaxThreads)
{
} /* size: 0 */

// <00649E6C> ../public/tier0/jobthread.h:879
inline void ParallelProcessFinished(const CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFossilizeStateCreator:: this, void* pScratchSpace, size_t nScratchSpaceBytes, int nMaxThreads)
{
} /* size: 0 */

// <00059AFE> ../public/tier0/jobthread.h:879
inline void CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1>::ParallelProcessFinished(void* pScratchSpace, size_t nScratchSpaceBytes, int nMaxThreads)
{
} /* size: 0 */

// <068DC393> ../public/tier0/jobthread.h:884
// variables: 6
inline void CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>, 1>::Process(int nThreadIndex, CParallelProcessorAbstract<CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombo pProcessor)
{
	{
		SerializeStaticCombosWorkUnit_t* pLimit; // 890
		int nChunkSize; // 891
		{
			SerializeStaticCombosWorkUnit_t* pCurrent; // 895
			SerializeStaticCombosWorkUnit_t* pLast; // 924
			{
				int nThreadsWorking; // 903
				{
					int nItems; // 911
				}
			}
		}
	}
} /* size: 0 */

// <0618FCDE> ../public/tier0/jobthread.h:884
// variables: 6
inline void CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_t>, 1>::Process(int nThreadIndex, CParallelProcessorAbstract<CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_ pProcessor)
{
	{
		BentNormalComputationJob_t* pLimit; // 890
		int nChunkSize; // 891
		{
			BentNormalComputationJob_t* pCurrent; // 895
			BentNormalComputationJob_t* pLast; // 924
			{
				int nThreadsWorking; // 903
				{
					int nItems; // 911
				}
			}
		}
	}
} /* size: 0 */

// <046C2EDF> ../public/tier0/jobthread.h:884
// variables: 6
inline void CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1>::Process(int nThreadIndex, CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> >* pProcessor)
{
	{
		int* pLimit; // 890
		int nChunkSize; // 891
		{
			int* pCurrent; // 895
			int* pLast; // 924
			{
				int nThreadsWorking; // 903
				{
					int nItems; // 911
				}
			}
		}
	}
} /* size: 0 */

// <0448BF35> ../public/tier0/jobthread.h:884
// variables: 6
inline void CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUnit>, 1>::Process(int nThreadIndex, CParallelProcessorAbstract<CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUni pProcessor)
{
	{
		KMeansQuantizationWorkUnit* pLimit; // 890
		int nChunkSize; // 891
		{
			KMeansQuantizationWorkUnit* pCurrent; // 895
			KMeansQuantizationWorkUnit* pLast; // 924
			{
				int nThreadsWorking; // 903
				{
					int nItems; // 911
				}
			}
		}
	}
} /* size: 0 */

// <02E12451> ../public/tier0/jobthread.h:884
// variables: 6
inline void CParallelProcessor<CSceneObject::Process(int nThreadIndex, CParallelProcessorAbstract<CParallelProcessor<CSceneObject*, CFuncJobItemProcessor<CSceneObject*>, 1> >* pProcessor)
{
	{
		CSceneObject** pLimit; // 890
		int nChunkSize; // 891
		{
			CSceneObject** pCurrent; // 895
			CSceneObject** pLast; // 924
			{
				int nThreadsWorking; // 903
				{
					int nItems; // 911
				}
			}
		}
	}
} /* size: 0 */

// <0012AA7E> ../public/tier0/jobthread.h:884
// variables: 6
inline void CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1>::Process(int nThreadIndex, CParallelProcessorAbstract<CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> >* pProcessor)
{
	{
		CrashItem_t* pLimit; // 890
		int nChunkSize; // 891
		{
			CrashItem_t* pCurrent; // 895
			CrashItem_t* pLast; // 924
			{
				int nThreadsWorking; // 903
				{
					int nItems; // 911
				}
			}
		}
	}
} /* size: 0 */

// <00637BEF> ../public/tier0/jobthread.h:884
// variables: 6
inline void Process(const CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFossilizeStateCreator:: this, int nThreadIndex, CParallelProcessorAbstract<CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFo pProcessor)
{
	{
		PipelineWorkItem_t* pLimit; // 890
		int nChunkSize; // 891
		{
			PipelineWorkItem_t* pCurrent; // 895
			PipelineWorkItem_t* pLast; // 924
			{
				int nThreadsWorking; // 903
				{
					int nItems; // 911
				}
			}
		}
	}
} /* size: 0 */

// <00059631> ../public/tier0/jobthread.h:884
// variables: 6
inline void CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1>::Process(int nThreadIndex, CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> >* pProcessor)
{
	{
		int* pLimit; // 890
		int nChunkSize; // 891
		{
			int* pCurrent; // 895
			int* pLast; // 924
			{
				int nThreadsWorking; // 903
				{
					int nItems; // 911
				}
			}
		}
	}
} /* size: 0 */

// <068F7042> ../public/tier0/jobthread.h:953
// variable: 1
inline void ParallelProcess<SerializeStaticCombosWorkUnit_t>(const char* pszDescription, SerializeStaticCombosWorkUnit_t* pItems, unsigned int nItems, void (*pfnProcess)(SerializeStaticCombosWorkUnit_t &), void (*pfnBegin)(void), void (*pfnEnd)(void), int nMaxParallel)
{
	CParallelProcessor<SerializeStaticCombosWorkUnit_t, CFuncJobItemProcessor<SerializeStaticCombosWorkUnit_t>, 1> processor; // 955
} /* size: 0, variables: 1 */

// <061910F9> ../public/tier0/jobthread.h:953
// variable: 1
inline void ParallelProcess<BentNormalComputationJob_t>(const char* pszDescription, BentNormalComputationJob_t* pItems, unsigned int nItems, void (*pfnProcess)(BentNormalComputationJob_t &), void (*pfnBegin)(void), void (*pfnEnd)(void), int nMaxParallel)
{
	CParallelProcessor<BentNormalComputationJob_t, CFuncJobItemProcessor<BentNormalComputationJob_t>, 1> processor; // 955
} /* size: 0, variables: 1 */

// <044D57DD> ../public/tier0/jobthread.h:953
// variable: 1
inline void ParallelProcess<KMeansQuantizationWorkUnit>(const char* pszDescription, KMeansQuantizationWorkUnit* pItems, unsigned int nItems, void (*pfnProcess)(KMeansQuantizationWorkUnit &), void (*pfnBegin)(void), void (*pfnEnd)(void), int nMaxParallel)
{
	CParallelProcessor<KMeansQuantizationWorkUnit, CFuncJobItemProcessor<KMeansQuantizationWorkUnit>, 1> processor; // 955
} /* size: 0, variables: 1 */

// <02EA5A01> ../public/tier0/jobthread.h:953
// variable: 1
inline void ParallelProcess<CSceneObject*>(const char* pszDescription, CSceneObject** pItems, unsigned int nItems, void (*pfnProcess)(CSceneObject* &), void (*pfnBegin)(void), void (*pfnEnd)(void), int nMaxParallel)
{
	CParallelProcessor<CSceneObject*, CFuncJobItemProcessor<CSceneObject*>, 1> processor; // 955
} /* size: 0, variables: 1 */

// <00133F06> ../public/tier0/jobthread.h:953
// variable: 1
inline void ParallelProcess<CrashItem_t>(const char* pszDescription, CrashItem_t* pItems, unsigned int nItems, void (*pfnProcess)(CrashItem_t &), void (*pfnBegin)(void), void (*pfnEnd)(void), int nMaxParallel)
{
	CParallelProcessor<CrashItem_t, CFuncJobItemProcessor<CrashItem_t>, 1> processor; // 955
} /* size: 0, variables: 1 */

// <006674CB> ../public/tier0/jobthread.h:978
// variable: 1
inline void ParallelProcess<CFossilizeStateCreator::PipelineWorkItem_t, CFossilizeStateCreator, CFossilizeStateCreator>(const char* pszDescription, IThreadPool* pPool, PipelineWorkItem_t* pItems, unsigned int nItems, CFossilizeStateCreator* pObject, void ()(CFossilizeStateCreator *, PipelineWorkItem_t &) CFossilizeStateCreator::* pfnProcess, void ()(CFossilizeStateCreator *) CFossilizeStateCreator::* pfnBegin, void ()(CFossilizeStateCreator *) CFossilizeStateCreator::* pfnEnd, int nMaxParallel)
{
	CParallelProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CMemberFuncJobItemProcessor<CFossilizeStateCreator::PipelineWorkItem_t, CFossilizeStateCreator, CFossilizeStateCreator>, 1> processor; // 980
} /* size: 0, variables: 1 */

// <0005A966> ../public/tier0/jobthread.h:978
// variable: 1
// function calls: 14
void ParallelProcess<int, CCallQueue, CCallQueue>(const char* pszDescription, IThreadPool* pPool, int* pItems, unsigned int nItems, CCallQueue* pObject, void ()(CCallQueue *, int &) CCallQueue::* pfnProcess, void ()(CCallQueue *) CCallQueue::* pfnBegin, void ()(CCallQueue *) CCallQueue::* pfnEnd, int nMaxParallel)
{
	CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> processor; // 980
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 800
	CInterlockedPtr<int>::operator=(
			int* newValue);  // 819
	CParallelProcessorAbstract_Base::CParallelProcessorAbstract_Base(
					IThreadPool* pThreadPool);  // 564
	IMultipleWorkerJob::IMultipleWorkerJob(); // 564
	CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> >::CParallelProcessorAbstract(
					CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1>* pController,
					IThreadPool* pThreadPool);  // 825
	IMultipleWorkerJob::~IMultipleWorkerJob(); // 559
	CParallelProcessorAbstract<CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1> >::~CParallelProcessorAbstract(); // 827
	CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1>::Run(
		int* pItems,
		unsigned int nItems,
		int nChunkSize,
		int nMaxParallel,
		IThreadPool* pThreadPool);  // 814
	CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1>::Run(
		int* pItems,
		unsigned int nItems,
		int nChunkSize,
		int nMaxParallel,
		IThreadPool* pThreadPool);  // 982
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 811
	CInterlockedPtr<int>::CInterlockedPtr(); // 811
	CParallelProcessor<int, CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>, 1>::CParallelProcessor(
				const char* pszDescription);  // 980
	CMemberFuncJobItemProcessor<int, CCallQueue, CCallQueue>::Init(
		CCallQueue* pObject,
		void ()(CCallQueue *, int &) CCallQueue::* pfnProcess,
		void ()(CCallQueue *) CCallQueue::* pfnBegin,
		void ()(CCallQueue *) CCallQueue::* pfnEnd);  // 981
} /* size: 367, variables: 1, inline expansions: 14 (736 bytes) */

// <046BF2E0> ../public/tier0/jobthread.h:1022
// member functions: 7
// member variables: 8
// class size: 192
class CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t> > : public CDefaultParallelController {
public:
	/* class CDefaultParallelController <ancestor>; */ /* 0 0 */
	/* ../public/tier0/jobthread.h:1025 */
	void CParallelLoopProcessor(CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t> >* , const char* );
	/* ../public/tier0/jobthread.h:1034 */
	void Run(CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t> >* , FloatBitMap_t* , int, int, int, int, IThreadPool* );
protected:
	/* ../public/tier0/jobthread.h:1052 */
	const char* Description(CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t> >* );
	/* ../public/tier0/jobthread.h:1054 */
	int InitialWorkerCount(CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t> >* , CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitM);
	/* ../public/tier0/jobthread.h:1063 */
	void ParallelProcessStarting(CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t> >* , void* , size_t, int);
	/* ../public/tier0/jobthread.h:1068 */
	void ParallelProcessFinished(CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t> >* , void* , size_t, int);
	/* ../public/tier0/jobthread.h:1073 */
	void Process(CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t> >* , int, CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitM);
	CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t> m_ItemProcessor; /* 0 56 */
private:
	FloatBitMap_t * m_pContext; /* 56 8 */
	int m_nLimit; /* 64 4 */
	int m_nChunkSize; /* 68 4 */
	const char * m_szDescription; /* 72 8 */
	int m_nMaxParallel; /* 80 4 */
	CInterlockedInt m_nIndex __attribute__((__aligned__(64))); /* 128 4 */
} __attribute__((__aligned__(64)));

// <046BF72D> ../public/tier0/jobthread.h:1022
// member functions: 14
// member variables: 8
// class size: 128
class CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> > : public CDefaultParallelController {
public:
	/* class CDefaultParallelController <ancestor>; */ /* 0 0 */
	/* ../public/tier0/jobthread.h:1025 */
	void CParallelLoopProcessor(CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> >* , const char* );
	/* ../public/tier0/jobthread.h:1034 */
	void Run(CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> >* , FloatBitmapResampleInfo_t* , int, int, int, int, IThreadPool* );
protected:
	/* ../public/tier0/jobthread.h:1052 */
	const char* Description(CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> >* );
	/* ../public/tier0/jobthread.h:1054 */
	int InitialWorkerCount(CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> >* , CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampl);
	/* ../public/tier0/jobthread.h:1063 */
	void ParallelProcessStarting(CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> >* , void* , size_t, int);
	/* ../public/tier0/jobthread.h:1068 */
	void ParallelProcessFinished(CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> >* , void* , size_t, int);
	/* ../public/tier0/jobthread.h:1073 */
	void Process(CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> >* , int, CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampl);
	CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> m_ItemProcessor; /* 0 24 */
private:
	FloatBitmapResampleInfo_t * m_pContext; /* 24 8 */
	int m_nLimit; /* 32 4 */
	int m_nChunkSize; /* 36 4 */
	const char * m_szDescription; /* 40 8 */
	int m_nMaxParallel; /* 48 4 */
	CInterlockedInt m_nIndex __attribute__((__aligned__(64))); /* 64 4 */
	void CParallelLoopProcessor(class CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> > *, const char  *); /* linkage=_ZN22CParallelLoopProcessorI25FloatBitmapResampleInfo_t25CLoopFuncJobItemProcessorIS0_EEC4EPKc */
	void Run(class CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> > *, class FloatBitmapResampleInfo_t *, int, int, int, int, class IThreadPool *); /* linkage=_ZN22CParallelLoopProcessorI25FloatBitmapResampleInfo_t25CLoopFuncJobItemProcessorIS0_EE3RunEPS0_iiiiP11IThreadPool */
	const char  * Description(class CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> > *); /* linkage=_ZN22CParallelLoopProcessorI25FloatBitmapResampleInfo_t25CLoopFuncJobItemProcessorIS0_EE11DescriptionEv */
	int InitialWorkerCount(class CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> > *, class CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampl); /* linkage=_ZN22CParallelLoopProcessorI25FloatBitmapResampleInfo_t25CLoopFuncJobItemProcessorIS0_EE18InitialWorkerCountEP26CParallelProcessorAbstractIS3_E */
	void ParallelProcessStarting(class CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> > *, void *, size_t, int); /* linkage=_ZN22CParallelLoopProcessorI25FloatBitmapResampleInfo_t25CLoopFuncJobItemProcessorIS0_EE23ParallelProcessStartingEPvmi */
	void ParallelProcessFinished(class CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> > *, void *, size_t, int); /* linkage=_ZN22CParallelLoopProcessorI25FloatBitmapResampleInfo_t25CLoopFuncJobItemProcessorIS0_EE23ParallelProcessFinishedEPvmi */
	void Process(class CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> > *, int, class CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampl); /* linkage=_ZN22CParallelLoopProcessorI25FloatBitmapResampleInfo_t25CLoopFuncJobItemProcessorIS0_EE7ProcessEiP26CParallelProcessorAbstractIS3_E */
} __attribute__((__aligned__(64)));

// <046C9D15> ../public/tier0/jobthread.h:1025
void CParallelLoopProcessor(const CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t> this, const char* pszDescription)
{
} /* size: 0 */

// <046C9CEF> ../public/tier0/jobthread.h:1025
inline void CParallelLoopProcessor(const CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t> this, const char* pszDescription)
{
} /* size: 0 */

// <046C849E> ../public/tier0/jobthread.h:1025
void CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> >::CParallelLoopProcessor(const char* pszDescription)
{
} /* size: 0 */

// <046C8478> ../public/tier0/jobthread.h:1025
inline void CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> >::CParallelLoopProcessor(const char* pszDescription)
{
} /* size: 0 */

// <046C9AFB> ../public/tier0/jobthread.h:1034
// variable: 1
inline void Run(const CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t> this, FloatBitMap_t* pContext, int nBegin, int nItems, int nChunkSize, int nMaxParallel, IThreadPool* pThreadPool)
{
	CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t> > > abstractProcessor; // 1046
} /* size: 0, variables: 1 */

// <046C8291> ../public/tier0/jobthread.h:1034
// variable: 1
inline void CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> >::Run(FloatBitmapResampleInfo_t* pContext, int nBegin, int nItems, int nChunkSize, int nMaxParallel, IThreadPool* pThreadPool)
{
	CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> > > abstractProcessor; // 1046
} /* size: 0, variables: 1 */

// <046C41A0> ../public/tier0/jobthread.h:1052
inline void Description(const CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t> this)
{
} /* size: 0 */

// <046C40C7> ../public/tier0/jobthread.h:1052
inline void CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> >::Description()
{
} /* size: 0 */

// <046C41F9> ../public/tier0/jobthread.h:1054
// variables: 2
inline void InitialWorkerCount(const CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t> this, CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitM pProcessor)
{
	int nItems; // 1058
	int nChunks; // 1059
} /* size: 0, variables: 2 */

// <046C4120> ../public/tier0/jobthread.h:1054
// variables: 2
inline void CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> >::InitialWorkerCount(CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampl pProcessor)
{
	int nItems; // 1058
	int nChunks; // 1059
} /* size: 0, variables: 2 */

// <046C41B9> ../public/tier0/jobthread.h:1063
inline void ParallelProcessStarting(const CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t> this, void* pScratchSpace, size_t nScratchSpaceBytes, int nMaxThreads)
{
} /* size: 0 */

// <046C40E0> ../public/tier0/jobthread.h:1063
inline void CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> >::ParallelProcessStarting(void* pScratchSpace, size_t nScratchSpaceBytes, int nMaxThreads)
{
} /* size: 0 */

// <046C4160> ../public/tier0/jobthread.h:1068
inline void ParallelProcessFinished(const CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t> this, void* pScratchSpace, size_t nScratchSpaceBytes, int nMaxThreads)
{
} /* size: 0 */

// <046C4087> ../public/tier0/jobthread.h:1068
inline void CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> >::ParallelProcessFinished(void* pScratchSpace, size_t nScratchSpaceBytes, int nMaxThreads)
{
} /* size: 0 */

// <046C2FB9> ../public/tier0/jobthread.h:1073
// variables: 2
inline void CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> >::Process(int nThreadIndex, CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampl pProcessor)
{
	{
		int nIndex; // 1077
		{
			int nCount; // 1080
		}
	}
} /* size: 0 */

// <046C2F68> ../public/tier0/jobthread.h:1073
// variables: 2
inline void Process(const CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t> this, int nThreadIndex, CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitM pProcessor)
{
	{
		int nIndex; // 1077
		{
			int nCount; // 1080
		}
	}
} /* size: 0 */

// <046CC6AE> ../public/tier0/jobthread.h:1107
// variable: 1
inline void ParallelLoopProcessChunks<FloatBitmapResampleInfo_t>(const char* szDescription, IThreadPool* pPool, FloatBitmapResampleInfo_t* pContext, int nStart, int nCount, int nChunkSize, void (*pfnProcess)(FloatBitmapResampleInfo_t *, int, int), void (*pfnBegin)(void), void (*pfnEnd)(void), int nMaxParallel)
{
	CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> > processor; // 1109
} /* size: 0, variables: 1 */

// <046CED88> ../public/tier0/jobthread.h:1115
// variable: 1
inline void ParallelLoopProcessChunks<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t>(const char* szDescription, IThreadPool* pPool, FloatBitMap_t* pContext, int nStart, int nCount, int nChunkSize, FloatBitMap_t* pObject, void ()(FloatBitMap_t *, FloatBitMap_t *, int, int) FloatBitMap_t::* pfnProcess, void ()(FloatBitMap_t *) FloatBitMap_t::* pfnBegin, void ()(FloatBitMap_t *) FloatBitMap_t::* pfnEnd, int nMaxParallel)
{
	CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t> > processor; // 1117
} /* size: 0, variables: 1 */

// <0446344D> ../public/tier0/jobthread.h:1124
// variables: 2
inline void IThreadPool::YieldWait(JobWaitObject_t* pWaitObject, uint32 timeout, ThreadMultiWaitObjectSet_t** pSaveObjectSet)
{
	JobWaitItem_t item; // 1128
	JobWaitExtra_t extra; // 1129
} /* size: 0, variables: 2 */

// <001DE30B> ../public/tier0/jobthread.h:1135
inline void IThreadPool::YieldWait(CThreadedJob* pJob, uint32 timeout)
{
} /* size: 0 */

// <00682819> ../public/tier0/jobthread.h:1142
inline void IThreadPool::QueueCall(const char* szDescription, function<void()>& func)
{
} /* size: 0 */

// <0635018C> ../public/tier0/jobthread.h:1147
inline void IThreadPool::QueueCallWithFlags(const char* szDescription, JobPriority_t jobPriority, uint nFlags, function<void()>& func)
{
} /* size: 0 */

// <0040993F> ../public/tier0/jobthread.h:1153
// variable: 1
inline void IThreadPool::QueueJobWithFlags<CAsyncCompileHelperVulkan::QueueShaderCompile(const char* szDescription, JobPriority_t jobPriority, uint nFlags, class& func)
{
	CThreadedJob* pJob; // 1155
} /* size: 0, variables: 1 */

// <00409E8E> ../public/tier0/jobthread.h:1163
inline void IThreadPool::QueueJob<CAsyncCompileHelperVulkan::QueueShaderCompile(const char* szDescription, class& func)
{
} /* size: 0 */

// <007AC374> ../public/tier0/jobthread.h:1180
// variables: 3
void ParallelFor<>(int nStart, int nEnd, const char* pLabel, f, int nMinimumIterationsPerJob, int nMaxParallelism, int nJobRequestSize)
{
	int nIndexCount; // 1182
	{
		int i; // 1195
	}
	{
		atomic_int nIterationCounter; // 1203
	}
} /* size: 0, variables: 1 */

