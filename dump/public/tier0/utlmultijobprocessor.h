
//
// public/tier0/utlmultijobprocessor.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 21
//	classes: 2
//

// <0633C221> ../public/tier0/utlmultijobprocessor.h:26
void CUtlMultiJobProcessor::~CUtlMultiJobProcessor()
{
} /* size: 0 */

// <0633C204> ../public/tier0/utlmultijobprocessor.h:26
inline void CUtlMultiJobProcessor::~CUtlMultiJobProcessor()
{
} /* size: 0 */

// <02B22382> ../public/tier0/utlmultijobprocessor.h:26
// member functions: 30
// member variables: 5
// vtable entry: 1
// class size: 24
class CUtlMultiJobProcessor {
	void ~CUtlMultiJobProcessor(CUtlMultiJobProcessor* );
	int ()(void) * * _vptr.CUtlMultiJobProcessor; /* 0 8 */
private:
	JobEvent_t m_jobsFinishedEvent; /* 8 8 */
	CInterlockedInt m_nUnfinishedJobsCount __attribute__((__aligned__(4))); /* 16 4 */
	bool m_bDisableThreading; /* 20 1 */
	bool m_bUseCachedWaitSet; /* 21 1 */
	/* ../public/tier0/utlmultijobprocessor.h:103 */
	void StartSubmittingInitialJobs(CUtlMultiJobProcessor* );
	/* ../public/tier0/utlmultijobprocessor.h:111 */
	void EndSubmittingInitialJobs(CUtlMultiJobProcessor* );
	/* ../public/tier0/utlmultijobprocessor.h:116 */
	void MarkJobFinished(CUtlMultiJobProcessor* );
	/* ../public/tier0/utlmultijobprocessor.h:127 */
	bool JobsRunning(const CUtlMultiJobProcessor* );
	/* ../public/tier0/utlmultijobprocessor.h:48 */
	void WaitForCompletion(CUtlMultiJobProcessor* );
	/* ../public/tier0/utlmultijobprocessor.h:50 */
	void QueueJobWithFlags(CUtlMultiJobProcessor* , const char* , JobPriority_t, uint, function<void()>& );
	/* ../public/tier0/utlmultijobprocessor.h:60 */
	void QueueJob(CUtlMultiJobProcessor* , const char* , function<void()>& );
	/* ../public/tier0/utlmultijobprocessor.h:66 */
	virtual void AtFinish(CUtlMultiJobProcessor* );
	/* ../public/tier0/utlmultijobprocessor.h:98 */
	void RegisterUnfinishedJob(CUtlMultiJobProcessor* );
	/* ../public/tier0/utlmultijobprocessor.h:75 */
	void DisableThreading(CUtlMultiJobProcessor* , bool);
	/* ../public/tier0/utlmultijobprocessor.h:80 */
	void SetUseCachedWaitSet(CUtlMultiJobProcessor* , bool);
	/* ../public/tier0/utlmultijobprocessor.h:82 */
	void CUtlMultiJobProcessor(CUtlMultiJobProcessor* );
	/* ../public/tier0/utlmultijobprocessor.h:95 */
	bool WaitForCompletionRunMainThreadJobs(CUtlMultiJobProcessor* , unsigned int);
	void ~CUtlMultiJobProcessor(class CUtlMultiJobProcessor *); /* linkage=_ZN21CUtlMultiJobProcessorD4Ev */
	void CUtlMultiJobProcessor(class CUtlMultiJobProcessor *, class CUtlMultiJobProcessor &); /* linkage=_ZN21CUtlMultiJobProcessorC4EOS_ */
	void CUtlMultiJobProcessor(class CUtlMultiJobProcessor *, const class CUtlMultiJobProcessor  &); /* linkage=_ZN21CUtlMultiJobProcessorC4ERKS_ */
	void StartSubmittingInitialJobs(class CUtlMultiJobProcessor *); /* linkage=_ZN21CUtlMultiJobProcessor26StartSubmittingInitialJobsEv */
	void EndSubmittingInitialJobs(class CUtlMultiJobProcessor *); /* linkage=_ZN21CUtlMultiJobProcessor24EndSubmittingInitialJobsEv */
	void MarkJobFinished(class CUtlMultiJobProcessor *); /* linkage=_ZN21CUtlMultiJobProcessor15MarkJobFinishedEv */
	bool JobsRunning(const class CUtlMultiJobProcessor  *); /* linkage=_ZNK21CUtlMultiJobProcessor11JobsRunningEv */
	void WaitForCompletion(class CUtlMultiJobProcessor *); /* linkage=_ZN21CUtlMultiJobProcessor17WaitForCompletionEv */
	void QueueJobWithFlags(class CUtlMultiJobProcessor *, const char  *, enum JobPriority_t, uint, class function<void()> &); /* linkage=_ZN21CUtlMultiJobProcessor17QueueJobWithFlagsEPKc13JobPriority_tjOSt8functionIFvvEE */
	void QueueJob(class CUtlMultiJobProcessor *, const char  *, class function<void()> &); /* linkage=_ZN21CUtlMultiJobProcessor8QueueJobEPKcOSt8functionIFvvEE */
	/* <635500f> ../public/tier0/utlmultijobprocessor.h:66 */
	virtual void AtFinish(class CUtlMultiJobProcessor *); /* linkage=_ZN21CUtlMultiJobProcessor8AtFinishEv */
	void RegisterUnfinishedJob(class CUtlMultiJobProcessor *); /* linkage=_ZN21CUtlMultiJobProcessor21RegisterUnfinishedJobEv */
	void DisableThreading(class CUtlMultiJobProcessor *, bool); /* linkage=_ZN21CUtlMultiJobProcessor16DisableThreadingEb */
	void SetUseCachedWaitSet(class CUtlMultiJobProcessor *, bool); /* linkage=_ZN21CUtlMultiJobProcessor19SetUseCachedWaitSetEb */
	void CUtlMultiJobProcessor(class CUtlMultiJobProcessor *); /* linkage=_ZN21CUtlMultiJobProcessorC4Ev */
	bool WaitForCompletionRunMainThreadJobs(class CUtlMultiJobProcessor *, unsigned int); /* linkage=_ZN21CUtlMultiJobProcessor34WaitForCompletionRunMainThreadJobsEj */
} __attribute__((__aligned__(8)));

// <02D4429D> ../public/tier0/utlmultijobprocessor.h:26
// member functions: 32
// member variables: 5
// vtable entry: 1
// class size: 24
class CUtlMultiJobProcessor {
	void CUtlMultiJobProcessor(CUtlMultiJobProcessor* , CUtlMultiJobProcessor& );
	void CUtlMultiJobProcessor(CUtlMultiJobProcessor* , const CUtlMultiJobProcessor& );
	void ~CUtlMultiJobProcessor(CUtlMultiJobProcessor* );
	int ()(void) * * _vptr.CUtlMultiJobProcessor; /* 0 8 */
private:
	JobEvent_t m_jobsFinishedEvent; /* 8 8 */
	CInterlockedInt m_nUnfinishedJobsCount __attribute__((__aligned__(4))); /* 16 4 */
	bool m_bDisableThreading; /* 20 1 */
	bool m_bUseCachedWaitSet; /* 21 1 */
	/* ../public/tier0/utlmultijobprocessor.h:103 */
	void StartSubmittingInitialJobs(CUtlMultiJobProcessor* );
	/* ../public/tier0/utlmultijobprocessor.h:111 */
	void EndSubmittingInitialJobs(CUtlMultiJobProcessor* );
	/* ../public/tier0/utlmultijobprocessor.h:116 */
	void MarkJobFinished(CUtlMultiJobProcessor* );
	/* ../public/tier0/utlmultijobprocessor.h:127 */
	bool JobsRunning(const CUtlMultiJobProcessor* );
	/* ../public/tier0/utlmultijobprocessor.h:48 */
	void WaitForCompletion(CUtlMultiJobProcessor* );
	/* ../public/tier0/utlmultijobprocessor.h:50 */
	void QueueJobWithFlags(CUtlMultiJobProcessor* , const char* , JobPriority_t, uint, function<void()>& );
	/* ../public/tier0/utlmultijobprocessor.h:60 */
	void QueueJob(CUtlMultiJobProcessor* , const char* , function<void()>& );
	/* ../public/tier0/utlmultijobprocessor.h:66 */
	virtual void AtFinish(CUtlMultiJobProcessor* );
	/* ../public/tier0/utlmultijobprocessor.h:98 */
	void RegisterUnfinishedJob(CUtlMultiJobProcessor* );
	/* ../public/tier0/utlmultijobprocessor.h:75 */
	void DisableThreading(CUtlMultiJobProcessor* , bool);
	/* ../public/tier0/utlmultijobprocessor.h:80 */
	void SetUseCachedWaitSet(CUtlMultiJobProcessor* , bool);
	/* ../public/tier0/utlmultijobprocessor.h:82 */
	void CUtlMultiJobProcessor(CUtlMultiJobProcessor* );
	/* ../public/tier0/utlmultijobprocessor.h:95 */
	bool WaitForCompletionRunMainThreadJobs(CUtlMultiJobProcessor* , unsigned int);
	void ~CUtlMultiJobProcessor(class CUtlMultiJobProcessor *); /* linkage=_ZN21CUtlMultiJobProcessorD4Ev */
	void CUtlMultiJobProcessor(class CUtlMultiJobProcessor *, class CUtlMultiJobProcessor &); /* linkage=_ZN21CUtlMultiJobProcessorC4EOS_ */
	void CUtlMultiJobProcessor(class CUtlMultiJobProcessor *, const class CUtlMultiJobProcessor  &); /* linkage=_ZN21CUtlMultiJobProcessorC4ERKS_ */
	void StartSubmittingInitialJobs(class CUtlMultiJobProcessor *); /* linkage=_ZN21CUtlMultiJobProcessor26StartSubmittingInitialJobsEv */
	void EndSubmittingInitialJobs(class CUtlMultiJobProcessor *); /* linkage=_ZN21CUtlMultiJobProcessor24EndSubmittingInitialJobsEv */
	void MarkJobFinished(class CUtlMultiJobProcessor *); /* linkage=_ZN21CUtlMultiJobProcessor15MarkJobFinishedEv */
	bool JobsRunning(const class CUtlMultiJobProcessor  *); /* linkage=_ZNK21CUtlMultiJobProcessor11JobsRunningEv */
	void WaitForCompletion(class CUtlMultiJobProcessor *); /* linkage=_ZN21CUtlMultiJobProcessor17WaitForCompletionEv */
	void QueueJobWithFlags(class CUtlMultiJobProcessor *, const char  *, enum JobPriority_t, uint, class function<void()> &); /* linkage=_ZN21CUtlMultiJobProcessor17QueueJobWithFlagsEPKc13JobPriority_tjOSt8functionIFvvEE */
	void QueueJob(class CUtlMultiJobProcessor *, const char  *, class function<void()> &); /* linkage=_ZN21CUtlMultiJobProcessor8QueueJobEPKcOSt8functionIFvvEE */
	/* <635500f> ../public/tier0/utlmultijobprocessor.h:66 */
	virtual void AtFinish(class CUtlMultiJobProcessor *); /* linkage=_ZN21CUtlMultiJobProcessor8AtFinishEv */
	void RegisterUnfinishedJob(class CUtlMultiJobProcessor *); /* linkage=_ZN21CUtlMultiJobProcessor21RegisterUnfinishedJobEv */
	void DisableThreading(class CUtlMultiJobProcessor *, bool); /* linkage=_ZN21CUtlMultiJobProcessor16DisableThreadingEb */
	void SetUseCachedWaitSet(class CUtlMultiJobProcessor *, bool); /* linkage=_ZN21CUtlMultiJobProcessor19SetUseCachedWaitSetEb */
	void CUtlMultiJobProcessor(class CUtlMultiJobProcessor *); /* linkage=_ZN21CUtlMultiJobProcessorC4Ev */
	bool WaitForCompletionRunMainThreadJobs(class CUtlMultiJobProcessor *, unsigned int); /* linkage=_ZN21CUtlMultiJobProcessor34WaitForCompletionRunMainThreadJobsEj */
} __attribute__((__aligned__(8)));

// <06350143> ../public/tier0/utlmultijobprocessor.h:50
inline void CUtlMultiJobProcessor::QueueJobWithFlags(const char* szDescription, JobPriority_t jobPriority, uint nFlags, function<void()>& func)
{
} /* size: 0 */

// <06350112> ../public/tier0/utlmultijobprocessor.h:60
inline void CUtlMultiJobProcessor::QueueJob(const char* szDescription, function<void()>& func)
{
} /* size: 0 */

// <0635500F> ../public/tier0/utlmultijobprocessor.h:66
void CUtlMultiJobProcessor::AtFinish()
{
} /* size: 5 */

// <063500F9> ../public/tier0/utlmultijobprocessor.h:66
inline void CUtlMultiJobProcessor::AtFinish()
{
} /* size: 0 */

// <02F20434> ../public/tier0/utlmultijobprocessor.h:75
inline void CUtlMultiJobProcessor::DisableThreading(bool bDisable)
{
} /* size: 0 */

// <02F2040F> ../public/tier0/utlmultijobprocessor.h:80
inline void CUtlMultiJobProcessor::SetUseCachedWaitSet(bool bSet)
{
} /* size: 0 */

// <063500E2> ../public/tier0/utlmultijobprocessor.h:82
void CUtlMultiJobProcessor::CUtlMultiJobProcessor()
{
} /* size: 0 */

// <063500C9> ../public/tier0/utlmultijobprocessor.h:82
inline void CUtlMultiJobProcessor::CUtlMultiJobProcessor()
{
} /* size: 0 */

// <063500B0> ../public/tier0/utlmultijobprocessor.h:98
inline void CUtlMultiJobProcessor::RegisterUnfinishedJob()
{
} /* size: 0 */

// <0635006E> ../public/tier0/utlmultijobprocessor.h:103
// variables: 2
inline void CUtlMultiJobProcessor::StartSubmittingInitialJobs()
{
	const char   __FUNCTION__; // 5275
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 106
	}
} /* size: 0, variables: 1 */

// <02F20384> ../public/tier0/utlmultijobprocessor.h:103
// variables: 2
inline void CUtlMultiJobProcessor::StartSubmittingInitialJobs()
{
	const char   __FUNCTION__; // 63871
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 106
	}
} /* size: 0, variables: 1 */

// <02F74B83> ../public/tier0/utlmultijobprocessor.h:103
// variables: 2
inline void CUtlMultiJobProcessor::StartSubmittingInitialJobs()
{
	const char   __FUNCTION__; // 11941
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 106
	}
} /* size: 0, variables: 1 */

// <0175E7BB> ../public/tier0/utlmultijobprocessor.h:103
// variables: 2
inline void CUtlMultiJobProcessor::StartSubmittingInitialJobs()
{
	const char   __FUNCTION__; // 2125
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 106
	}
} /* size: 0, variables: 1 */

// <06350055> ../public/tier0/utlmultijobprocessor.h:111
inline void CUtlMultiJobProcessor::EndSubmittingInitialJobs()
{
} /* size: 0 */

// <06350013> ../public/tier0/utlmultijobprocessor.h:116
// variables: 2
inline void CUtlMultiJobProcessor::MarkJobFinished()
{
	const char   __FUNCTION__; // 4998
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 121
	}
} /* size: 0, variables: 1 */

// <02F20329> ../public/tier0/utlmultijobprocessor.h:116
// variables: 2
inline void CUtlMultiJobProcessor::MarkJobFinished()
{
	const char   __FUNCTION__; // 63574
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 121
	}
} /* size: 0, variables: 1 */

// <02F74B28> ../public/tier0/utlmultijobprocessor.h:116
// variables: 2
inline void CUtlMultiJobProcessor::MarkJobFinished()
{
	const char   __FUNCTION__; // 11664
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 121
	}
} /* size: 0, variables: 1 */

// <0175E760> ../public/tier0/utlmultijobprocessor.h:116
// variables: 2
inline void CUtlMultiJobProcessor::MarkJobFinished()
{
	const char   __FUNCTION__; // 1848
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 121
	}
} /* size: 0, variables: 1 */

// <02F20310> ../public/tier0/utlmultijobprocessor.h:127
inline void CUtlMultiJobProcessor::JobsRunning()
{
} /* size: 0 */

