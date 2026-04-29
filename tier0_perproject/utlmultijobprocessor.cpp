
//
// tier0_perproject/utlmultijobprocessor.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 2
//

// <04463267> tier0_perproject/utlmultijobprocessor.cpp:12
// function calls: 4
void CUtlMultiJobProcessor::WaitForCompletion()
{
	CThreadMultiWaitObject::GetWaitItem(
			ThreadMultiWaitItem_t* pItem,
			ThreadMultiWaitExtra_t* pExtra);  // 164
	JobGetWaitItem(JobWaitObject_t* pObject,
			JobWaitItem_t* pItem,
			JobWaitExtra_t* pExtra);  // 1131
	IThreadPool::YieldWait(
			JobWaitObject_t* pWaitObject,
			uint32 timeout,
			ThreadMultiWaitObjectSet_t** pSaveObjectSet);  // 15
	_DebuggerBreakInlineExpressionWrapper(void); // 15
} /* size: 0, inline expansions: 4 (93 bytes) */

// <04462E97> tier0_perproject/utlmultijobprocessor.cpp:18
// variables: 3
// function calls: 10
void CUtlMultiJobProcessor::WaitForCompletionRunMainThreadJobs(unsigned int timeout)
{
	JobEvent_t* mainThreadJobs; // 22
	{
		JobWaitItem_t item; // 31
		JobWaitExtra_t extra; // 32
		CThreadMultiWaitObject::GetWaitItem(
				ThreadMultiWaitItem_t* pItem,
				ThreadMultiWaitExtra_t* pExtra);  // 164
		JobGetWaitItem(JobWaitObject_t* pObject,
				JobWaitItem_t* pItem,
				JobWaitExtra_t* pExtra);  // 34
		CThreadMultiWaitObject::GetWaitItem(
				ThreadMultiWaitItem_t* pItem,
				ThreadMultiWaitExtra_t* pExtra);  // 164
		JobGetWaitItem(JobWaitObject_t* pObject,
				JobWaitItem_t* pItem,
				JobWaitExtra_t* pExtra);  // 35
		CThreadMultiWaitObject::GetWaitItem(
				ThreadMultiWaitItem_t* pItem,
				ThreadMultiWaitExtra_t* pExtra);  // 1782
		CThreadMultiWaitObject::Wait(
			uint32 nMillis);  // 1787
		CThreadMultiWaitObject::Check(); // 40
	}
	CThreadMultiWaitObject::GetWaitItem(
			ThreadMultiWaitItem_t* pItem,
			ThreadMultiWaitExtra_t* pExtra);  // 1782
	CThreadMultiWaitObject::Wait(
		uint32 nMillis);  // 1787
	CThreadMultiWaitObject::Check(); // 29
} /* size: 401, variables: 1, inline expansions: 3 (123 bytes) */

