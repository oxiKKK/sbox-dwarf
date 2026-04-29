
//
// tier0/eventdispatcherutils.cpp
//
//	referenced by: libtier0.so
//
//	functions: 3
//

// <0011A44C> tier0/eventdispatcherutils.cpp:19
// variable: 1
// function calls: 15
EventHandle_t Event_CreateHandle(void* pData)
{
	UtlHandle_t h; // 22
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 3305
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 3226
	CThreadSpinRWLock::AssignIf(
		const union LockInfo_t& newValue,
		const union LockInfo_t& comparand);  // 3257
	CThreadSpinRWLock::TryLockForWrite(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 3307
	ThreadPause(void); // 3309
	CThreadSpinRWLock::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 21
	Count(const CUtlVectorBase<CUtlHandleTable<void, 16>::EntryType_t, CUtlMemory<CUtlHandleTable<void, 16>::EntryType_t, int this); // 273
	{
	}
	CUtlMemory<CUtlHandleTable<void, 16>::EntryType_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CUtlHandleTable<void, 16>::EntryType_t, CUtlMemory<CUtlHandleTable<void, 16>::EntryType_t, int this,
			int i);  // 277
	Count(const CUtlVectorBase<CUtlHandleTable<void, 16>::EntryType_t, CUtlMemory<CUtlHandleTable<void, 16>::EntryType_t, int this); // 274
	CUtlHandleTable<void, 16>::GetEntry(
		UtlHandle_t handle,
		bool checkValidity);  // 150
	{
	}
	CUtlHandleTable<void, 16>::SetHandle(
			UtlHandle_t handle,
			void* pData);  // 148
	CUtlHandleTable<void, 16>::SetHandle(
			UtlHandle_t handle,
			void* pData);  // 23
} /* size: 0, variables: 1, inline expansions: 15 (594 bytes) */

// <0011A011> tier0/eventdispatcherutils.cpp:28
// function calls: 13
void Event_DestroyHandle(EventHandle_t h)
{
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 3305
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 3226
	CThreadSpinRWLock::AssignIf(
		const union LockInfo_t& newValue,
		const union LockInfo_t& comparand);  // 3257
	CThreadSpinRWLock::TryLockForWrite(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 3307
	ThreadPause(void); // 3309
	CThreadSpinRWLock::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 30
	Count(const CUtlVectorBase<CUtlHandleTable<void, 16>::EntryType_t, CUtlMemory<CUtlHandleTable<void, 16>::EntryType_t, int this); // 120
	{
	}
	CUtlMemory<CUtlHandleTable<void, 16>::EntryType_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlHandleTable<void, 16>::EntryType_t, CUtlMemory<CUtlHandleTable<void, 16>::EntryType_t, int> >::operator[](
			int i);  // 124
	Count(const CUtlVectorBase<CUtlHandleTable<void, 16>::EntryType_t, CUtlMemory<CUtlHandleTable<void, 16>::EntryType_t, int this); // 121
	CUtlHandleTable<void, 16>::RemoveHandle(
			UtlHandle_t handle);  // 31
} /* size: 0, inline expansions: 13 (437 bytes) */

// <00119DD9> tier0/eventdispatcherutils.cpp:35
// variable: 1
// function calls: 6
void* Event_HandleToData(EventHandle_t h)
{
	void* pData; // 38
	Count(const CUtlVectorBase<CUtlHandleTable<void, 16>::EntryType_t, CUtlMemory<CUtlHandleTable<void, 16>::EntryType_t, int this); // 273
	{
	}
	CUtlMemory<CUtlHandleTable<void, 16>::EntryType_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CUtlHandleTable<void, 16>::EntryType_t, CUtlMemory<CUtlHandleTable<void, 16>::EntryType_t, int this,
			int i);  // 277
	Count(const CUtlVectorBase<CUtlHandleTable<void, 16>::EntryType_t, CUtlMemory<CUtlHandleTable<void, 16>::EntryType_t, int this); // 274
	CUtlHandleTable<void, 16>::GetEntry(
		UtlHandle_t handle,
		bool checkValidity);  // 167
	CUtlHandleTable<void, 16>::GetHandle(
			UtlHandle_t handle);  // 38
} /* size: 0, variables: 1, inline expansions: 6 (222 bytes) */

