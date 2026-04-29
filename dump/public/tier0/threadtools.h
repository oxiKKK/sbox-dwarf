
//
// public/tier0/threadtools.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libfilesystem_stdio.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libtier0.so
//				   libvfx_vulkan.so
//
//	functions: 250
//	classes: 70
//	structs: 2
//

// <00127F08> ../public/tier0/threadtools.h:228
ThreadHandle_t CreateSimpleThread(ThreadFunc_t, void *, ThreadId_t *, unsigned int, bool, const char *, size_t)
{
} /* size: 0 */

// <020648CB> ../public/tier0/threadtools.h:235
bool ReleaseThreadHandle(ThreadHandle_t)
{
} /* size: 0 */

// <00380858> ../public/tier0/threadtools.h:256
void TEST_BLOCK_REQUIRES_APPLE_MAIN_THREAD_CONDITIONS(bool)
{
} /* size: 0 */

// <0016D19E> ../public/tier0/threadtools.h:273
void ThreadYield(void)
{
} /* size: 0 */

// <00128DB9> ../public/tier0/threadtools.h:274
void ThreadSleep(unsigned int)
{
} /* size: 0 */

// <02345A6D> ../public/tier0/threadtools.h:275
void ThreadNanoSleep(unsigned int)
{
} /* size: 0 */

// <00128C48> ../public/tier0/threadtools.h:290
bool ThreadSetPriority(ThreadPriorityEnum_t)
{
} /* size: 0 */

// <00128DCF> ../public/tier0/threadtools.h:293
bool ThreadInMainThread(void)
{
} /* size: 0 */

// <001286F9> ../public/tier0/threadtools.h:294
void DeclareCurrentThreadIsMainThread(void)
{
} /* size: 0 */

// <00128948> ../public/tier0/threadtools.h:305
ThreadId_t ThreadGetCurrentId(void)
{
} /* size: 0 */

// <020648E3> ../public/tier0/threadtools.h:310
bool ThreadJoin(ThreadHandle_t, unsigned int)
{
} /* size: 0 */

// <005838F3> ../public/tier0/threadtools.h:321
bool ThreadGetDebugNameForThreadId(ThreadId_t, char *, size_t)
{
} /* size: 0 */

// <001C760A> ../public/tier0/threadtools.h:330
bool ThreadSetAffinity(ThreadHandle_t, uint16, uint64)
{
} /* size: 0 */

// <001C7580> ../public/tier0/threadtools.h:362
uint64 ThreadSetAffinityPreference(ThreadAffinityPreference_t, ThreadAffinityPreferenceFlag_t)
{
} /* size: 0 */

// <001288B3> ../public/tier0/threadtools.h:384
ProcessHandle_t ThreadGetCurrentProcessHandle(void)
{
} /* size: 0 */

// <003D76AF> ../public/tier0/threadtools.h:388
bool ThreadTerminateProcessCode(ProcessHandle_t, int32)
{
} /* size: 0 */

// <003D7691> ../public/tier0/threadtools.h:395
bool ThreadIsProcessActive(ProcessHandle_t, int32 *)
{
} /* size: 0 */

// <003D7616> ../public/tier0/threadtools.h:396
bool ThreadWaitForProcessExit(ProcessHandle_t, uint, int32 *)
{
} /* size: 0 */

// <003D7639> ../public/tier0/threadtools.h:398
bool ThreadGetProcessExitCode(ProcessHandle_t, int32 *)
{
} /* size: 0 */

// <003D7348> ../public/tier0/threadtools.h:403
uint ThreadShellExecuteEx(const char *, const char *, const char *, const char *)
{
} /* size: 0 */

// <003E1EAD> ../public/tier0/threadtools.h:406
inline uint ThreadShellOpen(const char* pchFile, const char* pchCurrentDirectory)
{
} /* size: 0 */

// <00128833> ../public/tier0/threadtools.h:424
bool ThreadSetProcessPriority(ProcessHandle_t, ThreadProcessPriority_t)
{
} /* size: 0 */

// <0006ED65> ../public/tier0/threadtools.h:650
// member functions: 7
// member variable: 1
// class size: 1
class CThreadSyncValue<bool> {
	/* ../public/tier0/threadtools.h:658 */
	bool Load(const CThreadSyncValue<bool>* );
	/* ../public/tier0/threadtools.h:670 */
	void Store(CThreadSyncValue<bool>* , bool);
protected:
	bool m_value; /* 0 1 */
	/* ../public/tier0/threadtools.h:655 */
	void CThreadSyncValue<>(CThreadSyncValue<bool>* );
	bool Load(const class CThreadSyncValue<bool>  *); /* linkage=_ZNK16CThreadSyncValueIbE4LoadEv */
	void Store(class CThreadSyncValue<bool> *, bool); /* linkage=_ZN16CThreadSyncValueIbE5StoreEb */
	void CThreadSyncValue<bool>(class CThreadSyncValue<bool> *, bool); /* linkage=_ZN16CThreadSyncValueIbEC4IJbEEEDpT_ */
	void CThreadSyncValue<>(class CThreadSyncValue<bool> *); /* linkage=_ZN16CThreadSyncValueIbEC4IJEEEDpT_ */
};

// <000A0294> ../public/tier0/threadtools.h:650
// member functions: 5
// member variable: 1
// class size: 4
class CThreadSyncValue<int> {
	/* ../public/tier0/threadtools.h:658 */
	int Load(const CThreadSyncValue<int>* );
	/* ../public/tier0/threadtools.h:670 */
	void Store(CThreadSyncValue<int>* , int);
protected:
	int m_value; /* 0 4 */
	int Load(const class CThreadSyncValue<int>  *); /* linkage=_ZNK16CThreadSyncValueIiE4LoadEv */
	void Store(class CThreadSyncValue<int> *, int); /* linkage=_ZN16CThreadSyncValueIiE5StoreEi */
	void CThreadSyncValue<JobStatusEnum_t>(class CThreadSyncValue<int> *, enum JobStatusEnum_t); /* linkage=_ZN16CThreadSyncValueIiEC4IJ15JobStatusEnum_tEEEDpT_ */
};

// <02B97F24> ../public/tier0/threadtools.h:650
// member functions: 6
// member variable: 1
// class size: 1
class CThreadSyncValue<bool> {
	/* ../public/tier0/threadtools.h:658 */
	bool Load(const CThreadSyncValue<bool>* );
	/* ../public/tier0/threadtools.h:670 */
	void Store(CThreadSyncValue<bool>* , bool);
protected:
	bool m_value; /* 0 1 */
	bool Load(const class CThreadSyncValue<bool>  *); /* linkage=_ZNK16CThreadSyncValueIbE4LoadEv */
	void Store(class CThreadSyncValue<bool> *, bool); /* linkage=_ZN16CThreadSyncValueIbE5StoreEb */
	void CThreadSyncValue<bool>(class CThreadSyncValue<bool> *, bool); /* linkage=_ZN16CThreadSyncValueIbEC4IJbEEEDpT_ */
	void CThreadSyncValue<>(class CThreadSyncValue<bool> *); /* linkage=_ZN16CThreadSyncValueIbEC4IJEEEDpT_ */
};

// <03B7F8F6> ../public/tier0/threadtools.h:650
// member functions: 4
// member variable: 1
// class size: 4
class CThreadSyncValue<CModelSkeleton::BoneFlags_t> {
	/* ../public/tier0/threadtools.h:658 */
	BoneFlags_t Load(const CThreadSyncValue<CModelSkeleton::BoneFlags_t>* );
	/* ../public/tier0/threadtools.h:670 */
	void Store(CThreadSyncValue<CModelSkeleton::BoneFlags_t>* , BoneFlags_t);
protected:
	BoneFlags_t m_value; /* 0 4 */
	/* ../public/tier0/threadtools.h:655 */
	void CThreadSyncValue<CModelSkeleton::BoneFlags_t>(CThreadSyncValue<CModelSkeleton::BoneFlags_t>* , BoneFlags_t);
	/* ../public/tier0/threadtools.h:655 */
	void CThreadSyncValue<>(CThreadSyncValue<CModelSkeleton::BoneFlags_t>* );
};

// <001B2926> ../public/tier0/threadtools.h:650
// member functions: 6
// member variable: 1
// class size: 4
class CThreadSyncValue<int> {
	/* ../public/tier0/threadtools.h:658 */
	int Load(const CThreadSyncValue<int>* );
	/* ../public/tier0/threadtools.h:670 */
	void Store(CThreadSyncValue<int>* , int);
protected:
	int m_value; /* 0 4 */
	/* ../public/tier0/threadtools.h:655 */
	void CThreadSyncValue<JobStatusEnum_t>(CThreadSyncValue<int>* , JobStatusEnum_t);
	int Load(const class CThreadSyncValue<int>  *); /* linkage=_ZNK16CThreadSyncValueIiE4LoadEv */
	void Store(class CThreadSyncValue<int> *, int); /* linkage=_ZN16CThreadSyncValueIiE5StoreEi */
	void CThreadSyncValue<JobStatusEnum_t>(class CThreadSyncValue<int> *, enum JobStatusEnum_t); /* linkage=_ZN16CThreadSyncValueIiEC4IJ15JobStatusEnum_tEEEDpT_ */
};

// <004C3AA3> ../public/tier0/threadtools.h:650
// member functions: 7
// member variable: 1
// class size: 1
class CThreadSyncValue<bool> {
	/* ../public/tier0/threadtools.h:658 */
	bool Load(const CThreadSyncValue<bool>* );
	/* ../public/tier0/threadtools.h:670 */
	void Store(CThreadSyncValue<bool>* , bool);
protected:
	bool m_value; /* 0 1 */
	/* ../public/tier0/threadtools.h:655 */
	void CThreadSyncValue<bool>(CThreadSyncValue<bool>* , bool);
	bool Load(const class CThreadSyncValue<bool>  *); /* linkage=_ZNK16CThreadSyncValueIbE4LoadEv */
	void Store(class CThreadSyncValue<bool> *, bool); /* linkage=_ZN16CThreadSyncValueIbE5StoreEb */
	void CThreadSyncValue<bool>(class CThreadSyncValue<bool> *, bool); /* linkage=_ZN16CThreadSyncValueIbEC4IJbEEEDpT_ */
	void CThreadSyncValue<>(class CThreadSyncValue<bool> *); /* linkage=_ZN16CThreadSyncValueIbEC4IJEEEDpT_ */
};

// <066B541E> ../public/tier0/threadtools.h:655
void CThreadSyncValue<bool>::CThreadSyncValue<>()
{
} /* size: 0 */

// <066B53F7> ../public/tier0/threadtools.h:655
inline void CThreadSyncValue<bool>::CThreadSyncValue<>()
{
} /* size: 0 */

// <03B8D1CC> ../public/tier0/threadtools.h:655
void CThreadSyncValue<CModelSkeleton::BoneFlags_t>::CThreadSyncValue<>()
{
} /* size: 0 */

// <03B8D1A3> ../public/tier0/threadtools.h:655
inline void CThreadSyncValue<CModelSkeleton::BoneFlags_t>::CThreadSyncValue<>()
{
} /* size: 0 */

// <03B8D16B> ../public/tier0/threadtools.h:655
void CThreadSyncValue<CModelSkeleton::BoneFlags_t>::CThreadSyncValue<CModelSkeleton::BoneFlags_t>()
{
} /* size: 0 */

// <03B8D131> ../public/tier0/threadtools.h:655
inline void CThreadSyncValue<CModelSkeleton::BoneFlags_t>::CThreadSyncValue<CModelSkeleton::BoneFlags_t>()
{
} /* size: 0 */

// <004D1D70> ../public/tier0/threadtools.h:655
void CThreadSyncValue<bool>::CThreadSyncValue<bool>()
{
} /* size: 0 */

// <004D1D38> ../public/tier0/threadtools.h:655
inline void CThreadSyncValue<bool>::CThreadSyncValue<bool>()
{
} /* size: 0 */

// <001CD89C> ../public/tier0/threadtools.h:655
void CThreadSyncValue<int>::CThreadSyncValue<JobStatusEnum_t>()
{
} /* size: 0 */

// <001CD864> ../public/tier0/threadtools.h:655
inline void CThreadSyncValue<int>::CThreadSyncValue<JobStatusEnum_t>()
{
} /* size: 0 */

// <06457786> ../public/tier0/threadtools.h:658
inline void CThreadSyncValue<bool>::Load()
{
} /* size: 0 */

// <03B8CDD9> ../public/tier0/threadtools.h:658
inline void CThreadSyncValue<CModelSkeleton::BoneFlags_t>::Load()
{
} /* size: 0 */

// <00234928> ../public/tier0/threadtools.h:658
inline void CThreadSyncValue<int>::Load()
{
} /* size: 0 */

// <06457760> ../public/tier0/threadtools.h:670
inline void CThreadSyncValue<bool>::Store(bool value)
{
} /* size: 0 */

// <001CD83E> ../public/tier0/threadtools.h:670
inline void CThreadSyncValue<int>::Store(int value)
{
} /* size: 0 */

// <00012136> ../public/tier0/threadtools.h:695
// member functions: 46
// member variables: 6
// class size: 72
class CThreadMutex {
	/* ../public/tier0/threadtools.h:698 */
	void CThreadMutex(CThreadMutex* , const char* );
	/* ../public/tier0/threadtools.h:699 */
	void ~CThreadMutex(CThreadMutex* );
	/* ../public/tier0/threadtools.h:704 */
	void Lock(CThreadMutex* , const char* , int);
	/* ../public/tier0/threadtools.h:705 */
	void Lock(const CThreadMutex* , const char* , int);
	/* ../public/tier0/threadtools.h:706 */
	void Unlock(CThreadMutex* , const char* , int);
	/* ../public/tier0/threadtools.h:707 */
	void Unlock(const CThreadMutex* , const char* , int);
	/* ../public/tier0/threadtools.h:709 */
	bool TryLock(CThreadMutex* , const char* , int);
	/* ../public/tier0/threadtools.h:710 */
	bool TryLock(const CThreadMutex* , const char* , int);
	/* ../public/tier0/threadtools.h:712 */
	void LockSilent(CThreadMutex* , const char* , int);
	/* ../public/tier0/threadtools.h:713 */
	void UnlockSilent(CThreadMutex* , const char* , int);
	/* ../public/tier0/threadtools.h:716 */
	bool TryLockForWrite(CThreadMutex* , const char* , int);
	/* ../public/tier0/threadtools.h:716 */
	bool TryLockForRead(CThreadMutex* , const char* , int);
	/* ../public/tier0/threadtools.h:716 */
	void LockForRead(CThreadMutex* , const char* , int);
	/* ../public/tier0/threadtools.h:716 */
	void LockForWrite(CThreadMutex* , const char* , int);
	/* ../public/tier0/threadtools.h:716 */
	void UnlockRead(CThreadMutex* , const char* , int);
	/* ../public/tier0/threadtools.h:716 */
	void UnlockWrite(CThreadMutex* , const char* , int);
	/* ../public/tier0/threadtools.h:716 */
	RWLockTranstionResult_t UnlockRead_LockForWrite(CThreadMutex* , const char* , int);
	/* ../public/tier0/threadtools.h:716 */
	RWLockTranstionResult_t UnlockWrite_LockForRead(CThreadMutex* , const char* , int);
	/* ../public/tier0/threadtools.h:722 */
	bool OwnedByCurrentThread(const CThreadMutex* );
	/* ../public/tier0/threadtools.h:723 */
	bool AssertOwnedByCurrentThread(const CThreadMutex* );
	/* ../public/tier0/threadtools.h:728 */
	void SetTrace(CThreadMutex* , bool);
private:
	/* ../public/tier0/threadtools.h:732 */
	void CThreadMutex(CThreadMutex* , const CThreadMutex& );
	/* ../public/tier0/threadtools.h:733 */
	CThreadMutex& operator=(CThreadMutex* , const CThreadMutex& );
	pthread_mutex_t m_Mutex; /* 0 40 */
	pthread_mutexattr_t m_Attr; /* 40 4 */
	ThreadId_t m_currentOwnerID; /* 48 8 */
	uint16 m_lockCount; /* 56 2 */
	bool m_bTrace; /* 58 1 */
	const char * m_pLockName; /* 64 8 */
	void CThreadMutex(class CThreadMutex *, const char  *); /* linkage=_ZN12CThreadMutexC4EPKc */
	void ~CThreadMutex(class CThreadMutex *); /* linkage=_ZN12CThreadMutexD4Ev */
	void Lock(class CThreadMutex *, const char  *, int); /* linkage=_ZN12CThreadMutex4LockEPKci */
	void Lock(const class CThreadMutex  *, const char  *, int); /* linkage=_ZNK12CThreadMutex4LockEPKci */
	void Unlock(class CThreadMutex *, const char  *, int); /* linkage=_ZN12CThreadMutex6UnlockEPKci */
	void Unlock(const class CThreadMutex  *, const char  *, int); /* linkage=_ZNK12CThreadMutex6UnlockEPKci */
	bool TryLock(class CThreadMutex *, const char  *, int); /* linkage=_ZN12CThreadMutex7TryLockEPKci */
	bool TryLock(const class CThreadMutex  *, const char  *, int); /* linkage=_ZNK12CThreadMutex7TryLockEPKci */
	void LockSilent(class CThreadMutex *, const char  *, int); /* linkage=_ZN12CThreadMutex10LockSilentEPKci */
	void UnlockSilent(class CThreadMutex *, const char  *, int); /* linkage=_ZN12CThreadMutex12UnlockSilentEPKci */
	bool TryLockForWrite(class CThreadMutex *, const char  *, int); /* linkage=_ZN12CThreadMutex15TryLockForWriteEPKci */
	bool TryLockForRead(class CThreadMutex *, const char  *, int); /* linkage=_ZN12CThreadMutex14TryLockForReadEPKci */
	void LockForRead(class CThreadMutex *, const char  *, int); /* linkage=_ZN12CThreadMutex11LockForReadEPKci */
	void LockForWrite(class CThreadMutex *, const char  *, int); /* linkage=_ZN12CThreadMutex12LockForWriteEPKci */
	void UnlockRead(class CThreadMutex *, const char  *, int); /* linkage=_ZN12CThreadMutex10UnlockReadEPKci */
	void UnlockWrite(class CThreadMutex *, const char  *, int); /* linkage=_ZN12CThreadMutex11UnlockWriteEPKci */
	enum RWLockTranstionResult_t UnlockRead_LockForWrite(class CThreadMutex *, const char  *, int); /* linkage=_ZN12CThreadMutex23UnlockRead_LockForWriteEPKci */
	enum RWLockTranstionResult_t UnlockWrite_LockForRead(class CThreadMutex *, const char  *, int); /* linkage=_ZN12CThreadMutex23UnlockWrite_LockForReadEPKci */
	bool OwnedByCurrentThread(const class CThreadMutex  *); /* linkage=_ZNK12CThreadMutex20OwnedByCurrentThreadEv */
	bool AssertOwnedByCurrentThread(const class CThreadMutex  *); /* linkage=_ZNK12CThreadMutex26AssertOwnedByCurrentThreadEv */
	void SetTrace(class CThreadMutex *, bool); /* linkage=_ZN12CThreadMutex8SetTraceEb */
	void CThreadMutex(class CThreadMutex *, const class CThreadMutex  &); /* linkage=_ZN12CThreadMutexC4ERKS_ */
	class CThreadMutex & operator=(class CThreadMutex *, const class CThreadMutex  &); /* linkage=_ZN12CThreadMutexaSERKS_ */
};

// <0005A881> ../../public/tier0/threadtools.h:695
// member functions: 46
// member variables: 6
// class size: 72
class CThreadMutex {
	/* ../../public/tier0/threadtools.h:698 */
	void CThreadMutex(CThreadMutex* , const char* );
	/* ../../public/tier0/threadtools.h:699 */
	void ~CThreadMutex(CThreadMutex* );
	/* ../../public/tier0/threadtools.h:704 */
	void Lock(CThreadMutex* , const char* , int);
	/* ../../public/tier0/threadtools.h:705 */
	void Lock(const CThreadMutex* , const char* , int);
	/* ../../public/tier0/threadtools.h:706 */
	void Unlock(CThreadMutex* , const char* , int);
	/* ../../public/tier0/threadtools.h:707 */
	void Unlock(const CThreadMutex* , const char* , int);
	/* ../../public/tier0/threadtools.h:709 */
	bool TryLock(CThreadMutex* , const char* , int);
	/* ../../public/tier0/threadtools.h:710 */
	bool TryLock(const CThreadMutex* , const char* , int);
	/* ../../public/tier0/threadtools.h:712 */
	void LockSilent(CThreadMutex* , const char* , int);
	/* ../../public/tier0/threadtools.h:713 */
	void UnlockSilent(CThreadMutex* , const char* , int);
	/* ../../public/tier0/threadtools.h:716 */
	bool TryLockForWrite(CThreadMutex* , const char* , int);
	/* ../../public/tier0/threadtools.h:716 */
	bool TryLockForRead(CThreadMutex* , const char* , int);
	/* ../../public/tier0/threadtools.h:716 */
	void LockForRead(CThreadMutex* , const char* , int);
	/* ../../public/tier0/threadtools.h:716 */
	void LockForWrite(CThreadMutex* , const char* , int);
	/* ../../public/tier0/threadtools.h:716 */
	void UnlockRead(CThreadMutex* , const char* , int);
	/* ../../public/tier0/threadtools.h:716 */
	void UnlockWrite(CThreadMutex* , const char* , int);
	/* ../../public/tier0/threadtools.h:716 */
	RWLockTranstionResult_t UnlockRead_LockForWrite(CThreadMutex* , const char* , int);
	/* ../../public/tier0/threadtools.h:716 */
	RWLockTranstionResult_t UnlockWrite_LockForRead(CThreadMutex* , const char* , int);
	/* ../../public/tier0/threadtools.h:722 */
	bool OwnedByCurrentThread(const CThreadMutex* );
	/* ../../public/tier0/threadtools.h:723 */
	bool AssertOwnedByCurrentThread(const CThreadMutex* );
	/* ../../public/tier0/threadtools.h:728 */
	void SetTrace(CThreadMutex* , bool);
private:
	/* ../../public/tier0/threadtools.h:732 */
	void CThreadMutex(CThreadMutex* , const CThreadMutex& );
	/* ../../public/tier0/threadtools.h:733 */
	CThreadMutex& operator=(CThreadMutex* , const CThreadMutex& );
	pthread_mutex_t m_Mutex; /* 0 40 */
	pthread_mutexattr_t m_Attr; /* 40 4 */
	ThreadId_t m_currentOwnerID; /* 48 8 */
	uint16 m_lockCount; /* 56 2 */
	bool m_bTrace; /* 58 1 */
	const char * m_pLockName; /* 64 8 */
	void CThreadMutex(class CThreadMutex *, const char  *); /* linkage=_ZN12CThreadMutexC4EPKc */
	void ~CThreadMutex(class CThreadMutex *); /* linkage=_ZN12CThreadMutexD4Ev */
	void Lock(class CThreadMutex *, const char  *, int); /* linkage=_ZN12CThreadMutex4LockEPKci */
	void Lock(const class CThreadMutex  *, const char  *, int); /* linkage=_ZNK12CThreadMutex4LockEPKci */
	void Unlock(class CThreadMutex *, const char  *, int); /* linkage=_ZN12CThreadMutex6UnlockEPKci */
	void Unlock(const class CThreadMutex  *, const char  *, int); /* linkage=_ZNK12CThreadMutex6UnlockEPKci */
	bool TryLock(class CThreadMutex *, const char  *, int); /* linkage=_ZN12CThreadMutex7TryLockEPKci */
	bool TryLock(const class CThreadMutex  *, const char  *, int); /* linkage=_ZNK12CThreadMutex7TryLockEPKci */
	void LockSilent(class CThreadMutex *, const char  *, int); /* linkage=_ZN12CThreadMutex10LockSilentEPKci */
	void UnlockSilent(class CThreadMutex *, const char  *, int); /* linkage=_ZN12CThreadMutex12UnlockSilentEPKci */
	bool TryLockForWrite(class CThreadMutex *, const char  *, int); /* linkage=_ZN12CThreadMutex15TryLockForWriteEPKci */
	bool TryLockForRead(class CThreadMutex *, const char  *, int); /* linkage=_ZN12CThreadMutex14TryLockForReadEPKci */
	void LockForRead(class CThreadMutex *, const char  *, int); /* linkage=_ZN12CThreadMutex11LockForReadEPKci */
	void LockForWrite(class CThreadMutex *, const char  *, int); /* linkage=_ZN12CThreadMutex12LockForWriteEPKci */
	void UnlockRead(class CThreadMutex *, const char  *, int); /* linkage=_ZN12CThreadMutex10UnlockReadEPKci */
	void UnlockWrite(class CThreadMutex *, const char  *, int); /* linkage=_ZN12CThreadMutex11UnlockWriteEPKci */
	enum RWLockTranstionResult_t UnlockRead_LockForWrite(class CThreadMutex *, const char  *, int); /* linkage=_ZN12CThreadMutex23UnlockRead_LockForWriteEPKci */
	enum RWLockTranstionResult_t UnlockWrite_LockForRead(class CThreadMutex *, const char  *, int); /* linkage=_ZN12CThreadMutex23UnlockWrite_LockForReadEPKci */
	bool OwnedByCurrentThread(const class CThreadMutex  *); /* linkage=_ZNK12CThreadMutex20OwnedByCurrentThreadEv */
	bool AssertOwnedByCurrentThread(const class CThreadMutex  *); /* linkage=_ZNK12CThreadMutex26AssertOwnedByCurrentThreadEv */
	void SetTrace(class CThreadMutex *, bool); /* linkage=_ZN12CThreadMutex8SetTraceEb */
	void CThreadMutex(class CThreadMutex *, const class CThreadMutex  &); /* linkage=_ZN12CThreadMutexC4ERKS_ */
	class CThreadMutex & operator=(class CThreadMutex *, const class CThreadMutex  &); /* linkage=_ZN12CThreadMutexaSERKS_ */
};

// <02CE546B> ../public/tier0/threadtools.h:716
inline void CThreadMutex::LockForRead(const char* pFileName, int nLineNumber)
{
} /* size: 0 */

// <02CE5438> ../public/tier0/threadtools.h:716
inline void CThreadMutex::LockForWrite(const char* pFileName, int nLineNumber)
{
} /* size: 0 */

// <02CE5405> ../public/tier0/threadtools.h:716
inline void CThreadMutex::UnlockRead(const char* pFileName, int nLineNumber)
{
} /* size: 0 */

// <02CE53D2> ../public/tier0/threadtools.h:716
inline void CThreadMutex::UnlockWrite(const char* pFileName, int nLineNumber)
{
} /* size: 0 */

// <0000A68E> ../public/tier0/threadtools.h:781
// member functions: 52
// member variables: 3
// class size: 24
class CThreadFastMutex {
	/* ../public/tier0/threadtools.h:784 */
	void CThreadFastMutex(CThreadFastMutex* , const char* );
private:
	/* ../public/tier0/threadtools.h:792 */
	bool TryLockInline(volatile CThreadFastMutex* , const char* , int, ThreadId_t);
	/* ../public/tier0/threadtools.h:810 */
	bool TryLock(volatile CThreadFastMutex* , const char* , int, ThreadId_t);
	/* ../public/tier0/threadtools.h:815 */
	void Lock(volatile CThreadFastMutex* , const char* , int, ThreadId_t, unsigned int);
	/* ../public/tier0/threadtools.h:818 */
	bool TryLock(volatile CThreadFastMutex* , const char* , int);
	/* ../public/tier0/threadtools.h:833 */
	void Lock(volatile CThreadFastMutex* , const char* , int, unsigned int);
	/* ../public/tier0/threadtools.h:858 */
	void Unlock(volatile CThreadFastMutex* , const char* , int);
	/* ../public/tier0/threadtools.h:881 */
	bool TryLock(volatile const CThreadFastMutex* , const char* , int);
	/* ../public/tier0/threadtools.h:882 */
	void Lock(volatile const CThreadFastMutex* , const char* , int, unsigned int);
	/* ../public/tier0/threadtools.h:883 */
	void Unlock(volatile const CThreadFastMutex* , const char* , int);
	/* ../public/tier0/threadtools.h:886 */
	bool OwnedByCurrentThread(const CThreadFastMutex* );
	/* ../public/tier0/threadtools.h:887 */
	bool AssertOwnedByCurrentThread(const CThreadFastMutex* );
	/* ../public/tier0/threadtools.h:888 */
	void SetTrace(CThreadFastMutex* , bool);
	/* ../public/tier0/threadtools.h:889 */
	bool IsLocked(const CThreadFastMutex* );
	/* ../public/tier0/threadtools.h:891 */
	ThreadId_t GetOwnerId(const CThreadFastMutex* );
	/* ../public/tier0/threadtools.h:894 */
	int GetDepth(const CThreadFastMutex* );
	/* ../public/tier0/threadtools.h:897 */
	bool TryLockForWrite(CThreadFastMutex* , const char* , int);
	/* ../public/tier0/threadtools.h:897 */
	bool TryLockForRead(CThreadFastMutex* , const char* , int);
	/* ../public/tier0/threadtools.h:897 */
	void LockForRead(CThreadFastMutex* , const char* , int);
	/* ../public/tier0/threadtools.h:897 */
	void LockForWrite(CThreadFastMutex* , const char* , int);
	/* ../public/tier0/threadtools.h:897 */
	void UnlockRead(CThreadFastMutex* , const char* , int);
	/* ../public/tier0/threadtools.h:897 */
	void UnlockWrite(CThreadFastMutex* , const char* , int);
	/* ../public/tier0/threadtools.h:897 */
	RWLockTranstionResult_t UnlockRead_LockForWrite(CThreadFastMutex* , const char* , int);
	/* ../public/tier0/threadtools.h:897 */
	RWLockTranstionResult_t UnlockWrite_LockForRead(CThreadFastMutex* , const char* , int);
	/* ../public/tier0/threadtools.h:901 */
	void CThreadFastMutex(CThreadFastMutex* , const CThreadFastMutex& );
	/* ../public/tier0/threadtools.h:902 */
	CThreadFastMutex& operator=(CThreadFastMutex* , const CThreadFastMutex& );
	ThreadId_t m_ownerID; /* 0 8 */
	int m_depth; /* 8 4 */
	const char * m_pLockName; /* 16 8 */
	void CThreadFastMutex(class CThreadFastMutex *, const char  *); /* linkage=_ZN16CThreadFastMutexC4EPKc */
	bool TryLockInline(volatile class CThreadFastMutex  *, const char  *, int, ThreadId_t); /* linkage=_ZNV16CThreadFastMutex13TryLockInlineEPKciy */
	bool TryLock(volatile class CThreadFastMutex  *, const char  *, int, ThreadId_t); /* linkage=_ZNV16CThreadFastMutex7TryLockEPKciy */
	/* <4e4f97> tier0/threadtools.cpp:5203 */
	void Lock(volatile class CThreadFastMutex  *, const char  *, int, ThreadId_t, unsigned int); /* linkage=_ZNV16CThreadFastMutex4LockEPKciyj */
	bool TryLock(volatile class CThreadFastMutex  *, const char  *, int); /* linkage=_ZNV16CThreadFastMutex7TryLockEPKci */
	void Lock(volatile class CThreadFastMutex  *, const char  *, int, unsigned int); /* linkage=_ZNV16CThreadFastMutex4LockEPKcij */
	void Unlock(volatile class CThreadFastMutex  *, const char  *, int); /* linkage=_ZNV16CThreadFastMutex6UnlockEPKci */
	bool TryLock(volatile const class CThreadFastMutex   *, const char  *, int); /* linkage=_ZNVK16CThreadFastMutex7TryLockEPKci */
	void Lock(volatile const class CThreadFastMutex   *, const char  *, int, unsigned int); /* linkage=_ZNVK16CThreadFastMutex4LockEPKcij */
	void Unlock(volatile const class CThreadFastMutex   *, const char  *, int); /* linkage=_ZNVK16CThreadFastMutex6UnlockEPKci */
	bool OwnedByCurrentThread(const class CThreadFastMutex  *); /* linkage=_ZNK16CThreadFastMutex20OwnedByCurrentThreadEv */
	bool AssertOwnedByCurrentThread(const class CThreadFastMutex  *); /* linkage=_ZNK16CThreadFastMutex26AssertOwnedByCurrentThreadEv */
	void SetTrace(class CThreadFastMutex *, bool); /* linkage=_ZN16CThreadFastMutex8SetTraceEb */
	bool IsLocked(const class CThreadFastMutex  *); /* linkage=_ZNK16CThreadFastMutex8IsLockedEv */
	ThreadId_t GetOwnerId(const class CThreadFastMutex  *); /* linkage=_ZNK16CThreadFastMutex10GetOwnerIdEv */
	int GetDepth(const class CThreadFastMutex  *); /* linkage=_ZNK16CThreadFastMutex8GetDepthEv */
	bool TryLockForWrite(class CThreadFastMutex *, const char  *, int); /* linkage=_ZN16CThreadFastMutex15TryLockForWriteEPKci */
	bool TryLockForRead(class CThreadFastMutex *, const char  *, int); /* linkage=_ZN16CThreadFastMutex14TryLockForReadEPKci */
	void LockForRead(class CThreadFastMutex *, const char  *, int); /* linkage=_ZN16CThreadFastMutex11LockForReadEPKci */
	void LockForWrite(class CThreadFastMutex *, const char  *, int); /* linkage=_ZN16CThreadFastMutex12LockForWriteEPKci */
	void UnlockRead(class CThreadFastMutex *, const char  *, int); /* linkage=_ZN16CThreadFastMutex10UnlockReadEPKci */
	void UnlockWrite(class CThreadFastMutex *, const char  *, int); /* linkage=_ZN16CThreadFastMutex11UnlockWriteEPKci */
	enum RWLockTranstionResult_t UnlockRead_LockForWrite(class CThreadFastMutex *, const char  *, int); /* linkage=_ZN16CThreadFastMutex23UnlockRead_LockForWriteEPKci */
	enum RWLockTranstionResult_t UnlockWrite_LockForRead(class CThreadFastMutex *, const char  *, int); /* linkage=_ZN16CThreadFastMutex23UnlockWrite_LockForReadEPKci */
	void CThreadFastMutex(class CThreadFastMutex *, const class CThreadFastMutex  &); /* linkage=_ZN16CThreadFastMutexC4ERKS_ */
	class CThreadFastMutex & operator=(class CThreadFastMutex *, const class CThreadFastMutex  &); /* linkage=_ZN16CThreadFastMutexaSERKS_ */
};

// <0588310C> ../../public/tier0/threadtools.h:781
// member functions: 52
// member variables: 3
// class size: 24
class CThreadFastMutex {
	/* ../../public/tier0/threadtools.h:784 */
	void CThreadFastMutex(CThreadFastMutex* , const char* );
private:
	/* ../../public/tier0/threadtools.h:792 */
	bool TryLockInline(volatile CThreadFastMutex* , const char* , int, ThreadId_t);
	/* ../../public/tier0/threadtools.h:810 */
	bool TryLock(volatile CThreadFastMutex* , const char* , int, ThreadId_t);
	/* ../../public/tier0/threadtools.h:815 */
	void Lock(volatile CThreadFastMutex* , const char* , int, ThreadId_t, unsigned int);
	/* ../../public/tier0/threadtools.h:818 */
	bool TryLock(volatile CThreadFastMutex* , const char* , int);
	/* ../../public/tier0/threadtools.h:833 */
	void Lock(volatile CThreadFastMutex* , const char* , int, unsigned int);
	/* ../../public/tier0/threadtools.h:858 */
	void Unlock(volatile CThreadFastMutex* , const char* , int);
	/* ../../public/tier0/threadtools.h:881 */
	bool TryLock(volatile const CThreadFastMutex* , const char* , int);
	/* ../../public/tier0/threadtools.h:882 */
	void Lock(volatile const CThreadFastMutex* , const char* , int, unsigned int);
	/* ../../public/tier0/threadtools.h:883 */
	void Unlock(volatile const CThreadFastMutex* , const char* , int);
	/* ../../public/tier0/threadtools.h:886 */
	bool OwnedByCurrentThread(const CThreadFastMutex* );
	/* ../../public/tier0/threadtools.h:887 */
	bool AssertOwnedByCurrentThread(const CThreadFastMutex* );
	/* ../../public/tier0/threadtools.h:888 */
	void SetTrace(CThreadFastMutex* , bool);
	/* ../../public/tier0/threadtools.h:889 */
	bool IsLocked(const CThreadFastMutex* );
	/* ../../public/tier0/threadtools.h:891 */
	ThreadId_t GetOwnerId(const CThreadFastMutex* );
	/* ../../public/tier0/threadtools.h:894 */
	int GetDepth(const CThreadFastMutex* );
	/* ../../public/tier0/threadtools.h:897 */
	bool TryLockForWrite(CThreadFastMutex* , const char* , int);
	/* ../../public/tier0/threadtools.h:897 */
	bool TryLockForRead(CThreadFastMutex* , const char* , int);
	/* ../../public/tier0/threadtools.h:897 */
	void LockForRead(CThreadFastMutex* , const char* , int);
	/* ../../public/tier0/threadtools.h:897 */
	void LockForWrite(CThreadFastMutex* , const char* , int);
	/* ../../public/tier0/threadtools.h:897 */
	void UnlockRead(CThreadFastMutex* , const char* , int);
	/* ../../public/tier0/threadtools.h:897 */
	void UnlockWrite(CThreadFastMutex* , const char* , int);
	/* ../../public/tier0/threadtools.h:897 */
	RWLockTranstionResult_t UnlockRead_LockForWrite(CThreadFastMutex* , const char* , int);
	/* ../../public/tier0/threadtools.h:897 */
	RWLockTranstionResult_t UnlockWrite_LockForRead(CThreadFastMutex* , const char* , int);
	/* ../../public/tier0/threadtools.h:901 */
	void CThreadFastMutex(CThreadFastMutex* , const CThreadFastMutex& );
	/* ../../public/tier0/threadtools.h:902 */
	CThreadFastMutex& operator=(CThreadFastMutex* , const CThreadFastMutex& );
	ThreadId_t m_ownerID; /* 0 8 */
	int m_depth; /* 8 4 */
	const char * m_pLockName; /* 16 8 */
	void CThreadFastMutex(class CThreadFastMutex *, const char  *); /* linkage=_ZN16CThreadFastMutexC4EPKc */
	bool TryLockInline(volatile class CThreadFastMutex  *, const char  *, int, ThreadId_t); /* linkage=_ZNV16CThreadFastMutex13TryLockInlineEPKciy */
	bool TryLock(volatile class CThreadFastMutex  *, const char  *, int, ThreadId_t); /* linkage=_ZNV16CThreadFastMutex7TryLockEPKciy */
	/* <4e4f97> tier0/threadtools.cpp:5203 */
	void Lock(volatile class CThreadFastMutex  *, const char  *, int, ThreadId_t, unsigned int); /* linkage=_ZNV16CThreadFastMutex4LockEPKciyj */
	bool TryLock(volatile class CThreadFastMutex  *, const char  *, int); /* linkage=_ZNV16CThreadFastMutex7TryLockEPKci */
	void Lock(volatile class CThreadFastMutex  *, const char  *, int, unsigned int); /* linkage=_ZNV16CThreadFastMutex4LockEPKcij */
	void Unlock(volatile class CThreadFastMutex  *, const char  *, int); /* linkage=_ZNV16CThreadFastMutex6UnlockEPKci */
	bool TryLock(volatile const class CThreadFastMutex   *, const char  *, int); /* linkage=_ZNVK16CThreadFastMutex7TryLockEPKci */
	void Lock(volatile const class CThreadFastMutex   *, const char  *, int, unsigned int); /* linkage=_ZNVK16CThreadFastMutex4LockEPKcij */
	void Unlock(volatile const class CThreadFastMutex   *, const char  *, int); /* linkage=_ZNVK16CThreadFastMutex6UnlockEPKci */
	bool OwnedByCurrentThread(const class CThreadFastMutex  *); /* linkage=_ZNK16CThreadFastMutex20OwnedByCurrentThreadEv */
	bool AssertOwnedByCurrentThread(const class CThreadFastMutex  *); /* linkage=_ZNK16CThreadFastMutex26AssertOwnedByCurrentThreadEv */
	void SetTrace(class CThreadFastMutex *, bool); /* linkage=_ZN16CThreadFastMutex8SetTraceEb */
	bool IsLocked(const class CThreadFastMutex  *); /* linkage=_ZNK16CThreadFastMutex8IsLockedEv */
	ThreadId_t GetOwnerId(const class CThreadFastMutex  *); /* linkage=_ZNK16CThreadFastMutex10GetOwnerIdEv */
	int GetDepth(const class CThreadFastMutex  *); /* linkage=_ZNK16CThreadFastMutex8GetDepthEv */
	bool TryLockForWrite(class CThreadFastMutex *, const char  *, int); /* linkage=_ZN16CThreadFastMutex15TryLockForWriteEPKci */
	bool TryLockForRead(class CThreadFastMutex *, const char  *, int); /* linkage=_ZN16CThreadFastMutex14TryLockForReadEPKci */
	void LockForRead(class CThreadFastMutex *, const char  *, int); /* linkage=_ZN16CThreadFastMutex11LockForReadEPKci */
	void LockForWrite(class CThreadFastMutex *, const char  *, int); /* linkage=_ZN16CThreadFastMutex12LockForWriteEPKci */
	void UnlockRead(class CThreadFastMutex *, const char  *, int); /* linkage=_ZN16CThreadFastMutex10UnlockReadEPKci */
	void UnlockWrite(class CThreadFastMutex *, const char  *, int); /* linkage=_ZN16CThreadFastMutex11UnlockWriteEPKci */
	enum RWLockTranstionResult_t UnlockRead_LockForWrite(class CThreadFastMutex *, const char  *, int); /* linkage=_ZN16CThreadFastMutex23UnlockRead_LockForWriteEPKci */
	enum RWLockTranstionResult_t UnlockWrite_LockForRead(class CThreadFastMutex *, const char  *, int); /* linkage=_ZN16CThreadFastMutex23UnlockWrite_LockForReadEPKci */
	void CThreadFastMutex(class CThreadFastMutex *, const class CThreadFastMutex  &); /* linkage=_ZN16CThreadFastMutexC4ERKS_ */
	class CThreadFastMutex & operator=(class CThreadFastMutex *, const class CThreadFastMutex  &); /* linkage=_ZN16CThreadFastMutexaSERKS_ */
};

// <060E2757> ../public/tier0/threadtools.h:784
void CThreadFastMutex::CThreadFastMutex(const char* pLockName)
{
} /* size: 0 */

// <060E2731> ../public/tier0/threadtools.h:784
inline void CThreadFastMutex::CThreadFastMutex(const char* pLockName)
{
} /* size: 0 */

// <06470E77> ../public/tier0/threadtools.h:792
inline void CThreadFastMutex::TryLockInline(const char* pFileName, int nLineNumber, const ThreadId_t threadId)
{
} /* size: 0 */

// <0024D4FC> ../public/tier0/threadtools.h:792
void CThreadFastMutex::TryLockInline(const char* pFileName, int nLineNumber, const ThreadId_t threadId)
{
} /* size: 0 */

// <004E3A85> ../public/tier0/threadtools.h:810
inline void CThreadFastMutex::TryLock(const char* pFileName, int nLineNumber, const ThreadId_t threadId)
{
} /* size: 0 */

// <005A7FEB> ../public/tier0/threadtools.h:818
inline void CThreadFastMutex::TryLock(const char* pFileName, int nLineNumber)
{
} /* size: 0 */

// <06470E2A> ../public/tier0/threadtools.h:833
// variable: 1
inline void CThreadFastMutex::Lock(const char* pFileName, int nLineNumber, unsigned int nSpinSleepTime)
{
	const ThreadId_t  threadId; // 835
} /* size: 0, variables: 1 */

// <0024D4B0> ../public/tier0/threadtools.h:833
// variable: 1
void CThreadFastMutex::Lock(const char* pFileName, int nLineNumber, unsigned int nSpinSleepTime)
{
	const ThreadId_t  threadId; // 835
} /* size: 0, variables: 1 */

// <06470DF7> ../public/tier0/threadtools.h:858
inline void CThreadFastMutex::Unlock(const char* pFileName, int nLineNumber)
{
} /* size: 0 */

// <004E39EC> ../public/tier0/threadtools.h:886
inline void CThreadFastMutex::OwnedByCurrentThread()
{
} /* size: 0 */

// <00589967> ../public/tier0/threadtools.h:894
inline void CThreadFastMutex::GetDepth()
{
} /* size: 0 */

// <032466B3> ../public/tier0/threadtools.h:897
inline void CThreadFastMutex::LockForRead(const char* pFileName, int nLineNumber)
{
} /* size: 0 */

// <03246680> ../public/tier0/threadtools.h:897
inline void CThreadFastMutex::UnlockRead(const char* pFileName, int nLineNumber)
{
} /* size: 0 */

// <02F2E748> ../public/tier0/threadtools.h:897
inline void CThreadFastMutex::LockForWrite(const char* pFileName, int nLineNumber)
{
} /* size: 0 */

// <02F2E715> ../public/tier0/threadtools.h:897
inline void CThreadFastMutex::UnlockWrite(const char* pFileName, int nLineNumber)
{
} /* size: 0 */

// <00DED184> ../public/tier0/threadtools.h:916
// member functions: 32
// class size: 1
class CThreadNullMutex {
	/* ../public/tier0/threadtools.h:919 */
	void CThreadNullMutex(CThreadNullMutex* , const char* );
	/* ../public/tier0/threadtools.h:921 */
	void Lock(const char* , int);
	/* ../public/tier0/threadtools.h:922 */
	void Unlock(const char* , int);
	/* ../public/tier0/threadtools.h:924 */
	bool TryLock(const char* , int);
	/* ../public/tier0/threadtools.h:925 */
	bool AssertOwnedByCurrentThread(void);
	/* ../public/tier0/threadtools.h:926 */
	void SetTrace(bool);
	/* ../public/tier0/threadtools.h:928 */
	uint32 GetOwnerId(void);
	/* ../public/tier0/threadtools.h:929 */
	int GetDepth(void);
	/* ../public/tier0/threadtools.h:932 */
	bool TryLockForWrite(const char* , int);
	/* ../public/tier0/threadtools.h:932 */
	bool TryLockForRead(const char* , int);
	/* ../public/tier0/threadtools.h:932 */
	void LockForRead(const char* , int);
	/* ../public/tier0/threadtools.h:932 */
	void LockForWrite(const char* , int);
	/* ../public/tier0/threadtools.h:932 */
	void UnlockRead(const char* , int);
	/* ../public/tier0/threadtools.h:932 */
	void UnlockWrite(const char* , int);
	/* ../public/tier0/threadtools.h:932 */
	RWLockTranstionResult_t UnlockRead_LockForWrite(const char* , int);
	/* ../public/tier0/threadtools.h:932 */
	RWLockTranstionResult_t UnlockWrite_LockForRead(const char* , int);
	void CThreadNullMutex(class CThreadNullMutex *, const char  *); /* linkage=_ZN16CThreadNullMutexC4EPKc */
	void Lock(const char  *, int); /* linkage=_ZN16CThreadNullMutex4LockEPKci */
	void Unlock(const char  *, int); /* linkage=_ZN16CThreadNullMutex6UnlockEPKci */
	bool TryLock(const char  *, int); /* linkage=_ZN16CThreadNullMutex7TryLockEPKci */
	bool AssertOwnedByCurrentThread(void); /* linkage=_ZN16CThreadNullMutex26AssertOwnedByCurrentThreadEv */
	void SetTrace(bool); /* linkage=_ZN16CThreadNullMutex8SetTraceEb */
	uint32 GetOwnerId(void); /* linkage=_ZN16CThreadNullMutex10GetOwnerIdEv */
	int GetDepth(void); /* linkage=_ZN16CThreadNullMutex8GetDepthEv */
	bool TryLockForWrite(const char  *, int); /* linkage=_ZN16CThreadNullMutex15TryLockForWriteEPKci */
	bool TryLockForRead(const char  *, int); /* linkage=_ZN16CThreadNullMutex14TryLockForReadEPKci */
	void LockForRead(const char  *, int); /* linkage=_ZN16CThreadNullMutex11LockForReadEPKci */
	void LockForWrite(const char  *, int); /* linkage=_ZN16CThreadNullMutex12LockForWriteEPKci */
	void UnlockRead(const char  *, int); /* linkage=_ZN16CThreadNullMutex10UnlockReadEPKci */
	void UnlockWrite(const char  *, int); /* linkage=_ZN16CThreadNullMutex11UnlockWriteEPKci */
	enum RWLockTranstionResult_t UnlockRead_LockForWrite(const char  *, int); /* linkage=_ZN16CThreadNullMutex23UnlockRead_LockForWriteEPKci */
	enum RWLockTranstionResult_t UnlockWrite_LockForRead(const char  *, int); /* linkage=_ZN16CThreadNullMutex23UnlockWrite_LockForReadEPKci */
};

// <05698E9A> ../public/tier0/threadtools.h:919
void CThreadNullMutex::CThreadNullMutex(const char* pName)
{
} /* size: 0 */

// <05698E74> ../public/tier0/threadtools.h:919
inline void CThreadNullMutex::CThreadNullMutex(const char* pName)
{
} /* size: 0 */

// <05698E4F> ../public/tier0/threadtools.h:921
inline void Lock(const char* pFileName, int nLineNumber)
{
} /* size: 0 */

// <05698E2A> ../public/tier0/threadtools.h:922
inline void Unlock(const char* pFileName, int nLineNumber)
{
} /* size: 0 */

// <05698E05> ../public/tier0/threadtools.h:932
inline void LockForRead(const char* pFileName, int nLineNumber)
{
} /* size: 0 */

// <05698DE0> ../public/tier0/threadtools.h:932
inline void LockForWrite(const char* pFileName, int nLineNumber)
{
} /* size: 0 */

// <05698DBB> ../public/tier0/threadtools.h:932
inline void UnlockRead(const char* pFileName, int nLineNumber)
{
} /* size: 0 */

// <05698D96> ../public/tier0/threadtools.h:932
inline void UnlockWrite(const char* pFileName, int nLineNumber)
{
} /* size: 0 */

// <0011E037> ../public/tier0/threadtools.h:940
// member functions: 2
// class size: 1
class CAutoLockMutexTrait<CThreadFastMutex> {
	/* ../public/tier0/threadtools.h:943 */
	void Lock(CThreadFastMutex& , const char* , int);
	/* ../public/tier0/threadtools.h:944 */
	void Unlock(CThreadFastMutex& , const char* , int);
};

// <01FA5D14> ../public/tier0/threadtools.h:940
// member functions: 2
// class size: 1
class CAutoLockMutexTrait<CThreadMutex> {
	/* ../public/tier0/threadtools.h:943 */
	void Lock(CThreadMutex& , const char* , int);
	/* ../public/tier0/threadtools.h:944 */
	void Unlock(CThreadMutex& , const char* , int);
};

// <0305573B> ../public/tier0/threadtools.h:940
// member functions: 2
// class size: 1
class CAutoLockMutexTrait<CThreadRWLock> {
	/* ../public/tier0/threadtools.h:943 */
	void Lock(CThreadRWLock& , const char* , int);
	/* ../public/tier0/threadtools.h:944 */
	void Unlock(CThreadRWLock& , const char* , int);
};

// <009A1325> ../public/tier0/threadtools.h:940
// member functions: 2
// class size: 1
class CAutoLockMutexTrait<CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >, CThreadFastMutex> > {
	/* ../public/tier0/threadtools.h:943 */
	void Lock(CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >, CThreadFas, const char* , int);
	/* ../public/tier0/threadtools.h:944 */
	void Unlock(CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >, CThreadFas, const char* , int);
};

// <00B016E8> ../public/tier0/threadtools.h:940
// member functions: 2
// class size: 1
class CAutoLockMutexTrait<CThreadNullMutex> {
	/* ../public/tier0/threadtools.h:943 */
	void Lock(CThreadNullMutex& , const char* , int);
	/* ../public/tier0/threadtools.h:944 */
	void Unlock(CThreadNullMutex& , const char* , int);
};

// <003EFA02> ../public/tier0/threadtools.h:940
// member functions: 2
// class size: 1
class CAutoLockMutexTrait<CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1> > {
	/* ../public/tier0/threadtools.h:943 */
	void Lock(CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>& , const char* , int);
	/* ../public/tier0/threadtools.h:944 */
	void Unlock(CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>& , const char* , int);
};

// <0685C0FE> ../public/tier0/threadtools.h:943
inline void Lock(CThreadMutex& lock, const char* pFileName, int nLineNumber)
{
} /* size: 0 */

// <06454F55> ../public/tier0/threadtools.h:943
inline void Lock(CThreadFastMutex& lock, const char* pFileName, int nLineNumber)
{
} /* size: 0 */

// <009D6ADF> ../public/tier0/threadtools.h:943
inline void Lock(CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >, CThreadFas lock, const char* pFileName, int nLineNumber)
{
} /* size: 0 */

// <003EFEAC> ../public/tier0/threadtools.h:943
inline void Lock(CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>& lock, const char* pFileName, int nLineNumber)
{
} /* size: 0 */

// <0685C0CC> ../public/tier0/threadtools.h:944
inline void Unlock(CThreadMutex& lock, const char* pFileName, int nLineNumber)
{
} /* size: 0 */

// <06454F22> ../public/tier0/threadtools.h:944
inline void Unlock(CThreadFastMutex& lock, const char* pFileName, int nLineNumber)
{
} /* size: 0 */

// <009D6AAD> ../public/tier0/threadtools.h:944
inline void Unlock(CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >, CThreadFas lock, const char* pFileName, int nLineNumber)
{
} /* size: 0 */

// <003EFE7A> ../public/tier0/threadtools.h:944
inline void Unlock(CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>& lock, const char* pFileName, int nLineNumber)
{
} /* size: 0 */

// <00D98515> ../public/tier0/threadtools.h:948
// member functions: 2
// class size: 1
class CAutoLockRWLockLockForReadTrait<CThreadRWLock> {
	/* ../public/tier0/threadtools.h:951 */
	void Lock(CThreadRWLock& , const char* , int);
	/* ../public/tier0/threadtools.h:952 */
	void Unlock(CThreadRWLock& , const char* , int);
};

// <00E68C2D> ../public/tier0/threadtools.h:948
// member functions: 2
// class size: 1
class CAutoLockRWLockLockForReadTrait<CThreadNullMutex> {
	/* ../public/tier0/threadtools.h:951 */
	void Lock(CThreadNullMutex& , const char* , int);
	/* ../public/tier0/threadtools.h:952 */
	void Unlock(CThreadNullMutex& , const char* , int);
};

// <01D8C9F8> ../public/tier0/threadtools.h:948
// member functions: 2
// class size: 1
class CAutoLockRWLockLockForReadTrait<CThreadFastMutex> {
	/* ../public/tier0/threadtools.h:951 */
	void Lock(CThreadFastMutex& , const char* , int);
	/* ../public/tier0/threadtools.h:952 */
	void Unlock(CThreadFastMutex& , const char* , int);
};

// <02CE0282> ../public/tier0/threadtools.h:948
// member functions: 2
// class size: 1
class CAutoLockRWLockLockForReadTrait<CThreadMutex> {
	/* ../public/tier0/threadtools.h:951 */
	void Lock(CThreadMutex& , const char* , int);
	/* ../public/tier0/threadtools.h:952 */
	void Unlock(CThreadMutex& , const char* , int);
};

// <0572C537> ../public/tier0/threadtools.h:948
// member functions: 2
// class size: 1
class CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> {
	/* ../public/tier0/threadtools.h:951 */
	void Lock(CThreadRWLock_FastRead& , const char* , int);
	/* ../public/tier0/threadtools.h:952 */
	void Unlock(CThreadRWLock_FastRead& , const char* , int);
};

// <0568CDF6> ../public/tier0/threadtools.h:951
inline void Lock(CThreadNullMutex& lock, const char* pFileName, int nLineNumber)
{
} /* size: 0 */

// <0568CDC4> ../public/tier0/threadtools.h:952
inline void Unlock(CThreadNullMutex& lock, const char* pFileName, int nLineNumber)
{
} /* size: 0 */

// <00D98575> ../public/tier0/threadtools.h:956
// member functions: 2
// class size: 1
class CAutoLockRWLockLockForWriteTrait<CThreadRWLock> {
	/* ../public/tier0/threadtools.h:959 */
	void Lock(CThreadRWLock& , const char* , int);
	/* ../public/tier0/threadtools.h:960 */
	void Unlock(CThreadRWLock& , const char* , int);
};

// <00E68B9A> ../public/tier0/threadtools.h:956
// member functions: 2
// class size: 1
class CAutoLockRWLockLockForWriteTrait<CThreadNullMutex> {
	/* ../public/tier0/threadtools.h:959 */
	void Lock(CThreadNullMutex& , const char* , int);
	/* ../public/tier0/threadtools.h:960 */
	void Unlock(CThreadNullMutex& , const char* , int);
};

// <01D8CA58> ../public/tier0/threadtools.h:956
// member functions: 2
// class size: 1
class CAutoLockRWLockLockForWriteTrait<CThreadFastMutex> {
	/* ../public/tier0/threadtools.h:959 */
	void Lock(CThreadFastMutex& , const char* , int);
	/* ../public/tier0/threadtools.h:960 */
	void Unlock(CThreadFastMutex& , const char* , int);
};

// <02CE01F1> ../public/tier0/threadtools.h:956
// member functions: 2
// class size: 1
class CAutoLockRWLockLockForWriteTrait<CThreadMutex> {
	/* ../public/tier0/threadtools.h:959 */
	void Lock(CThreadMutex& , const char* , int);
	/* ../public/tier0/threadtools.h:960 */
	void Unlock(CThreadMutex& , const char* , int);
};

// <0572C4D9> ../public/tier0/threadtools.h:956
// member functions: 2
// class size: 1
class CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> {
	/* ../public/tier0/threadtools.h:959 */
	void Lock(CThreadRWLock_FastRead& , const char* , int);
	/* ../public/tier0/threadtools.h:960 */
	void Unlock(CThreadRWLock_FastRead& , const char* , int);
};

// <0572DCA9> ../public/tier0/threadtools.h:959
inline void Lock(CThreadRWLock_FastRead& lock, const char* pFileName, int nLineNumber)
{
} /* size: 0 */

// <0387ACA2> ../public/tier0/threadtools.h:959
inline void Lock(CThreadRWLock& lock, const char* pFileName, int nLineNumber)
{
} /* size: 0 */

// <0572DC77> ../public/tier0/threadtools.h:960
inline void Unlock(CThreadRWLock_FastRead& lock, const char* pFileName, int nLineNumber)
{
} /* size: 0 */

// <0387AC6F> ../public/tier0/threadtools.h:960
inline void Unlock(CThreadRWLock& lock, const char* pFileName, int nLineNumber)
{
} /* size: 0 */

// <000A1F2A> ../public/tier0/threadtools.h:964
// member functions: 12
// member variables: 3
// class size: 24
class CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > {
	/* ../public/tier0/threadtools.h:967 */
	void CAutoLockT(CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >* , CThreadFastMutex& , const char* , int);
	/* ../public/tier0/threadtools.h:975 */
	void CAutoLockT(CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >* , const CThreadFastMutex& , const char* , int);
	/* ../public/tier0/threadtools.h:981 */
	void ~CAutoLockT(CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >* );
private:
	CThreadFastMutex & m_lock; /* 0 8 */
	/* ../public/tier0/threadtools.h:991 */
	void CAutoLockT(CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >* , CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >& );
	/* ../public/tier0/threadtools.h:992 */
	void CAutoLockT(CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >* , const CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >& );
	/* ../public/tier0/threadtools.h:993 */
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >& operator=(CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >* , const CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >& );
	const char * m_pFileName; /* 8 8 */
	const int m_nLineNumber; /* 16 4 */
	void CAutoLockT(class CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > *, class CThreadFastMutex &, const char  *, int); /* linkage=_ZN10CAutoLockTI16CThreadFastMutex19CAutoLockMutexTraitIS0_EEC4ERS0_PKci */
	void CAutoLockT(class CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > *, const class CThreadFastMutex  &, const char  *, int); /* linkage=_ZN10CAutoLockTI16CThreadFastMutex19CAutoLockMutexTraitIS0_EEC4ERKS0_PKci */
	void ~CAutoLockT(class CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > *); /* linkage=_ZN10CAutoLockTI16CThreadFastMutex19CAutoLockMutexTraitIS0_EED4Ev */
	void CAutoLockT(class CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > *, class CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > &); /* linkage=_ZN10CAutoLockTI16CThreadFastMutex19CAutoLockMutexTraitIS0_EEC4EOS3_ */
	void CAutoLockT(class CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > *, const class CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >  &); /* linkage=_ZN10CAutoLockTI16CThreadFastMutex19CAutoLockMutexTraitIS0_EEC4ERKS3_ */
	class CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > & operator=(class CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > *, const class CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >  &); /* linkage=_ZN10CAutoLockTI16CThreadFastMutex19CAutoLockMutexTraitIS0_EEaSERKS3_ */
};

// <00D98249> ../public/tier0/threadtools.h:964
// member functions: 6
// member variables: 3
// class size: 24
class CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> > {
	/* ../public/tier0/threadtools.h:967 */
	void CAutoLockT(CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> >* , CThreadRWLock& , const char* , int);
	/* ../public/tier0/threadtools.h:975 */
	void CAutoLockT(CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> >* , const CThreadRWLock& , const char* , int);
	/* ../public/tier0/threadtools.h:981 */
	void ~CAutoLockT(CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> >* );
private:
	CThreadRWLock & m_lock; /* 0 8 */
	/* ../public/tier0/threadtools.h:991 */
	void CAutoLockT(CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> >* , CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> >& );
	/* ../public/tier0/threadtools.h:992 */
	void CAutoLockT(CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> >* , const CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> >& );
	/* ../public/tier0/threadtools.h:993 */
	CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> >& operator=(CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> >* , const CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> >& );
	const char * m_pFileName; /* 8 8 */
	const int m_nLineNumber; /* 16 4 */
};

// <00D983AF> ../public/tier0/threadtools.h:964
// member functions: 6
// member variables: 3
// class size: 24
class CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForWriteTrait<CThreadRWLock> > {
	/* ../public/tier0/threadtools.h:967 */
	void CAutoLockT(CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForWriteTrait<CThreadRWLock> >* , CThreadRWLock& , const char* , int);
	/* ../public/tier0/threadtools.h:975 */
	void CAutoLockT(CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForWriteTrait<CThreadRWLock> >* , const CThreadRWLock& , const char* , int);
	/* ../public/tier0/threadtools.h:981 */
	void ~CAutoLockT(CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForWriteTrait<CThreadRWLock> >* );
private:
	CThreadRWLock & m_lock; /* 0 8 */
	/* ../public/tier0/threadtools.h:991 */
	void CAutoLockT(CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForWriteTrait<CThreadRWLock> >* , CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForWriteTrait<CThreadRWLock> >& );
	/* ../public/tier0/threadtools.h:992 */
	void CAutoLockT(CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForWriteTrait<CThreadRWLock> >* , const CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForWriteTrait<CThreadRWLock> >& );
	/* ../public/tier0/threadtools.h:993 */
	CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForWriteTrait<CThreadRWLock> >& operator=(CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForWriteTrait<CThreadRWLock> >* , const CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForWriteTrait<CThreadRWLock> >& );
	const char * m_pFileName; /* 8 8 */
	const int m_nLineNumber; /* 16 4 */
};

// <00E6606F> ../public/tier0/threadtools.h:964
// member functions: 12
// member variables: 3
// class size: 24
class CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> > {
	/* ../public/tier0/threadtools.h:967 */
	void CAutoLockT(CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >* , CThreadNullMutex& , const char* , int);
	/* ../public/tier0/threadtools.h:975 */
	void CAutoLockT(CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >* , const CThreadNullMutex& , const char* , int);
	/* ../public/tier0/threadtools.h:981 */
	void ~CAutoLockT(CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >* );
private:
	CThreadNullMutex & m_lock; /* 0 8 */
	/* ../public/tier0/threadtools.h:991 */
	void CAutoLockT(CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >* , CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >& );
	/* ../public/tier0/threadtools.h:992 */
	void CAutoLockT(CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >* , const CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >& );
	/* ../public/tier0/threadtools.h:993 */
	CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >& operator=(CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >* , const CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >& );
	const char * m_pFileName; /* 8 8 */
	const int m_nLineNumber; /* 16 4 */
	void CAutoLockT(class CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> > *, class CThreadNullMutex &, const char  *, int); /* linkage=_ZN10CAutoLockTI16CThreadNullMutex31CAutoLockRWLockLockForReadTraitIS0_EEC4ERS0_PKci */
	void CAutoLockT(class CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> > *, const class CThreadNullMutex  &, const char  *, int); /* linkage=_ZN10CAutoLockTI16CThreadNullMutex31CAutoLockRWLockLockForReadTraitIS0_EEC4ERKS0_PKci */
	void ~CAutoLockT(class CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> > *); /* linkage=_ZN10CAutoLockTI16CThreadNullMutex31CAutoLockRWLockLockForReadTraitIS0_EED4Ev */
	void CAutoLockT(class CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> > *, class CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> > &); /* linkage=_ZN10CAutoLockTI16CThreadNullMutex31CAutoLockRWLockLockForReadTraitIS0_EEC4EOS3_ */
	void CAutoLockT(class CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> > *, const class CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >  &); /* linkage=_ZN10CAutoLockTI16CThreadNullMutex31CAutoLockRWLockLockForReadTraitIS0_EEC4ERKS3_ */
	class CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> > & operator=(class CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> > *, const class CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >  &); /* linkage=_ZN10CAutoLockTI16CThreadNullMutex31CAutoLockRWLockLockForReadTraitIS0_EEaSERKS3_ */
};

// <00E661B8> ../public/tier0/threadtools.h:964
// member functions: 12
// member variables: 3
// class size: 24
class CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForWriteTrait<CThreadNullMutex> > {
	/* ../public/tier0/threadtools.h:967 */
	void CAutoLockT(CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForWriteTrait<CThreadNullMutex> >* , CThreadNullMutex& , const char* , int);
	/* ../public/tier0/threadtools.h:975 */
	void CAutoLockT(CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForWriteTrait<CThreadNullMutex> >* , const CThreadNullMutex& , const char* , int);
	/* ../public/tier0/threadtools.h:981 */
	void ~CAutoLockT(CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForWriteTrait<CThreadNullMutex> >* );
private:
	CThreadNullMutex & m_lock; /* 0 8 */
	/* ../public/tier0/threadtools.h:991 */
	void CAutoLockT(CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForWriteTrait<CThreadNullMutex> >* , CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForWriteTrait<CThreadNullMutex> >& );
	/* ../public/tier0/threadtools.h:992 */
	void CAutoLockT(CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForWriteTrait<CThreadNullMutex> >* , const CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForWriteTrait<CThreadNullMutex> >& );
	/* ../public/tier0/threadtools.h:993 */
	CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForWriteTrait<CThreadNullMutex> >& operator=(CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForWriteTrait<CThreadNullMutex> >* , const CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForWriteTrait<CThreadNullMutex> >& );
	const char * m_pFileName; /* 8 8 */
	const int m_nLineNumber; /* 16 4 */
	void CAutoLockT(class CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> > *, class CThreadNullMutex &, const char  *, int); /* linkage=_ZN10CAutoLockTI16CThreadNullMutex31CAutoLockRWLockLockForReadTraitIS0_EEC4ERS0_PKci */
	void CAutoLockT(class CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> > *, const class CThreadNullMutex  &, const char  *, int); /* linkage=_ZN10CAutoLockTI16CThreadNullMutex31CAutoLockRWLockLockForReadTraitIS0_EEC4ERKS0_PKci */
	void ~CAutoLockT(class CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> > *); /* linkage=_ZN10CAutoLockTI16CThreadNullMutex31CAutoLockRWLockLockForReadTraitIS0_EED4Ev */
	void CAutoLockT(class CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> > *, class CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> > &); /* linkage=_ZN10CAutoLockTI16CThreadNullMutex31CAutoLockRWLockLockForReadTraitIS0_EEC4EOS3_ */
	void CAutoLockT(class CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> > *, const class CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >  &); /* linkage=_ZN10CAutoLockTI16CThreadNullMutex31CAutoLockRWLockLockForReadTraitIS0_EEC4ERKS3_ */
	class CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> > & operator=(class CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> > *, const class CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >  &); /* linkage=_ZN10CAutoLockTI16CThreadNullMutex31CAutoLockRWLockLockForReadTraitIS0_EEaSERKS3_ */
};

// <01D897A5> ../public/tier0/threadtools.h:964
// member functions: 12
// member variables: 3
// class size: 24
class CAutoLockT<CThreadFastMutex, CAutoLockRWLockLockForReadTrait<CThreadFastMutex> > {
	/* ../public/tier0/threadtools.h:967 */
	void CAutoLockT(CAutoLockT<CThreadFastMutex, CAutoLockRWLockLockForReadTrait<CThreadFastMutex> >* , CThreadFastMutex& , const char* , int);
	/* ../public/tier0/threadtools.h:975 */
	void CAutoLockT(CAutoLockT<CThreadFastMutex, CAutoLockRWLockLockForReadTrait<CThreadFastMutex> >* , const CThreadFastMutex& , const char* , int);
	/* ../public/tier0/threadtools.h:981 */
	void ~CAutoLockT(CAutoLockT<CThreadFastMutex, CAutoLockRWLockLockForReadTrait<CThreadFastMutex> >* );
private:
	CThreadFastMutex & m_lock; /* 0 8 */
	/* ../public/tier0/threadtools.h:991 */
	void CAutoLockT(CAutoLockT<CThreadFastMutex, CAutoLockRWLockLockForReadTrait<CThreadFastMutex> >* , CAutoLockT<CThreadFastMutex, CAutoLockRWLockLockForReadTrait<CThreadFastMutex> >& );
	/* ../public/tier0/threadtools.h:992 */
	void CAutoLockT(CAutoLockT<CThreadFastMutex, CAutoLockRWLockLockForReadTrait<CThreadFastMutex> >* , const CAutoLockT<CThreadFastMutex, CAutoLockRWLockLockForReadTrait<CThreadFastMutex> >& );
	/* ../public/tier0/threadtools.h:993 */
	CAutoLockT<CThreadFastMutex, CAutoLockRWLockLockForReadTrait<CThreadFastMutex> >& operator=(CAutoLockT<CThreadFastMutex, CAutoLockRWLockLockForReadTrait<CThreadFastMutex> >* , const CAutoLockT<CThreadFastMutex, CAutoLockRWLockLockForReadTrait<CThreadFastMutex> >& );
	const char * m_pFileName; /* 8 8 */
	const int m_nLineNumber; /* 16 4 */
	void CAutoLockT(class CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > *, class CThreadFastMutex &, const char  *, int); /* linkage=_ZN10CAutoLockTI16CThreadFastMutex19CAutoLockMutexTraitIS0_EEC4ERS0_PKci */
	void CAutoLockT(class CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > *, const class CThreadFastMutex  &, const char  *, int); /* linkage=_ZN10CAutoLockTI16CThreadFastMutex19CAutoLockMutexTraitIS0_EEC4ERKS0_PKci */
	void ~CAutoLockT(class CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > *); /* linkage=_ZN10CAutoLockTI16CThreadFastMutex19CAutoLockMutexTraitIS0_EED4Ev */
	void CAutoLockT(class CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > *, class CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > &); /* linkage=_ZN10CAutoLockTI16CThreadFastMutex19CAutoLockMutexTraitIS0_EEC4EOS3_ */
	void CAutoLockT(class CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > *, const class CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >  &); /* linkage=_ZN10CAutoLockTI16CThreadFastMutex19CAutoLockMutexTraitIS0_EEC4ERKS3_ */
	class CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > & operator=(class CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > *, const class CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >  &); /* linkage=_ZN10CAutoLockTI16CThreadFastMutex19CAutoLockMutexTraitIS0_EEaSERKS3_ */
};

// <01D8AEC5> ../public/tier0/threadtools.h:964
// member functions: 12
// member variables: 3
// class size: 24
class CAutoLockT<CThreadFastMutex, CAutoLockRWLockLockForWriteTrait<CThreadFastMutex> > {
	/* ../public/tier0/threadtools.h:967 */
	void CAutoLockT(CAutoLockT<CThreadFastMutex, CAutoLockRWLockLockForWriteTrait<CThreadFastMutex> >* , CThreadFastMutex& , const char* , int);
	/* ../public/tier0/threadtools.h:975 */
	void CAutoLockT(CAutoLockT<CThreadFastMutex, CAutoLockRWLockLockForWriteTrait<CThreadFastMutex> >* , const CThreadFastMutex& , const char* , int);
	/* ../public/tier0/threadtools.h:981 */
	void ~CAutoLockT(CAutoLockT<CThreadFastMutex, CAutoLockRWLockLockForWriteTrait<CThreadFastMutex> >* );
private:
	CThreadFastMutex & m_lock; /* 0 8 */
	/* ../public/tier0/threadtools.h:991 */
	void CAutoLockT(CAutoLockT<CThreadFastMutex, CAutoLockRWLockLockForWriteTrait<CThreadFastMutex> >* , CAutoLockT<CThreadFastMutex, CAutoLockRWLockLockForWriteTrait<CThreadFastMutex> >& );
	/* ../public/tier0/threadtools.h:992 */
	void CAutoLockT(CAutoLockT<CThreadFastMutex, CAutoLockRWLockLockForWriteTrait<CThreadFastMutex> >* , const CAutoLockT<CThreadFastMutex, CAutoLockRWLockLockForWriteTrait<CThreadFastMutex> >& );
	/* ../public/tier0/threadtools.h:993 */
	CAutoLockT<CThreadFastMutex, CAutoLockRWLockLockForWriteTrait<CThreadFastMutex> >& operator=(CAutoLockT<CThreadFastMutex, CAutoLockRWLockLockForWriteTrait<CThreadFastMutex> >* , const CAutoLockT<CThreadFastMutex, CAutoLockRWLockLockForWriteTrait<CThreadFastMutex> >& );
	const char * m_pFileName; /* 8 8 */
	const int m_nLineNumber; /* 16 4 */
	void CAutoLockT(class CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > *, class CThreadFastMutex &, const char  *, int); /* linkage=_ZN10CAutoLockTI16CThreadFastMutex19CAutoLockMutexTraitIS0_EEC4ERS0_PKci */
	void CAutoLockT(class CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > *, const class CThreadFastMutex  &, const char  *, int); /* linkage=_ZN10CAutoLockTI16CThreadFastMutex19CAutoLockMutexTraitIS0_EEC4ERKS0_PKci */
	void ~CAutoLockT(class CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > *); /* linkage=_ZN10CAutoLockTI16CThreadFastMutex19CAutoLockMutexTraitIS0_EED4Ev */
	void CAutoLockT(class CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > *, class CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > &); /* linkage=_ZN10CAutoLockTI16CThreadFastMutex19CAutoLockMutexTraitIS0_EEC4EOS3_ */
	void CAutoLockT(class CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > *, const class CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >  &); /* linkage=_ZN10CAutoLockTI16CThreadFastMutex19CAutoLockMutexTraitIS0_EEC4ERKS3_ */
	class CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > & operator=(class CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > *, const class CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >  &); /* linkage=_ZN10CAutoLockTI16CThreadFastMutex19CAutoLockMutexTraitIS0_EEaSERKS3_ */
};

// <01F99C94> ../public/tier0/threadtools.h:964
// member functions: 18
// member variables: 3
// class size: 24
class CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > {
	/* ../public/tier0/threadtools.h:967 */
	void CAutoLockT(CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >* , CThreadMutex& , const char* , int);
	/* ../public/tier0/threadtools.h:975 */
	void CAutoLockT(CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >* , const CThreadMutex& , const char* , int);
	/* ../public/tier0/threadtools.h:981 */
	void ~CAutoLockT(CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >* );
private:
	CThreadMutex & m_lock; /* 0 8 */
	/* ../public/tier0/threadtools.h:991 */
	void CAutoLockT(CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >* , CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >& );
	/* ../public/tier0/threadtools.h:992 */
	void CAutoLockT(CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >* , const CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >& );
	/* ../public/tier0/threadtools.h:993 */
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >& operator=(CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >* , const CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >& );
	const char * m_pFileName; /* 8 8 */
	const int m_nLineNumber; /* 16 4 */
	void CAutoLockT(class CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > *, class CThreadMutex &, const char  *, int); /* linkage=_ZN10CAutoLockTI12CThreadMutex19CAutoLockMutexTraitIS0_EEC4ERS0_PKci */
	void CAutoLockT(class CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > *, const class CThreadMutex  &, const char  *, int); /* linkage=_ZN10CAutoLockTI12CThreadMutex19CAutoLockMutexTraitIS0_EEC4ERKS0_PKci */
	void ~CAutoLockT(class CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > *); /* linkage=_ZN10CAutoLockTI12CThreadMutex19CAutoLockMutexTraitIS0_EED4Ev */
	void CAutoLockT(class CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > *, class CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > &); /* linkage=_ZN10CAutoLockTI12CThreadMutex19CAutoLockMutexTraitIS0_EEC4EOS3_ */
	void CAutoLockT(class CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > *, const class CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >  &); /* linkage=_ZN10CAutoLockTI12CThreadMutex19CAutoLockMutexTraitIS0_EEC4ERKS3_ */
	class CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > & operator=(class CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > *, const class CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >  &); /* linkage=_ZN10CAutoLockTI12CThreadMutex19CAutoLockMutexTraitIS0_EEaSERKS3_ */
	void CAutoLockT(class CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> > *, class CThreadMutex &, const char  *, int); /* linkage=_ZN10CAutoLockTI12CThreadMutex31CAutoLockRWLockLockForReadTraitIS0_EEC4ERS0_PKci */
	void CAutoLockT(class CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> > *, const class CThreadMutex  &, const char  *, int); /* linkage=_ZN10CAutoLockTI12CThreadMutex31CAutoLockRWLockLockForReadTraitIS0_EEC4ERKS0_PKci */
	void ~CAutoLockT(class CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> > *); /* linkage=_ZN10CAutoLockTI12CThreadMutex31CAutoLockRWLockLockForReadTraitIS0_EED4Ev */
	void CAutoLockT(class CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> > *, class CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> > &); /* linkage=_ZN10CAutoLockTI12CThreadMutex31CAutoLockRWLockLockForReadTraitIS0_EEC4EOS3_ */
	void CAutoLockT(class CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> > *, const class CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> >  &); /* linkage=_ZN10CAutoLockTI12CThreadMutex31CAutoLockRWLockLockForReadTraitIS0_EEC4ERKS3_ */
	class CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> > & operator=(class CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> > *, const class CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> >  &); /* linkage=_ZN10CAutoLockTI12CThreadMutex31CAutoLockRWLockLockForReadTraitIS0_EEaSERKS3_ */
};

// <02CDFE95> ../public/tier0/threadtools.h:964
// member functions: 18
// member variables: 3
// class size: 24
class CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> > {
	/* ../public/tier0/threadtools.h:967 */
	void CAutoLockT(CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> >* , CThreadMutex& , const char* , int);
	/* ../public/tier0/threadtools.h:975 */
	void CAutoLockT(CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> >* , const CThreadMutex& , const char* , int);
	/* ../public/tier0/threadtools.h:981 */
	void ~CAutoLockT(CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> >* );
private:
	CThreadMutex & m_lock; /* 0 8 */
	/* ../public/tier0/threadtools.h:991 */
	void CAutoLockT(CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> >* , CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> >& );
	/* ../public/tier0/threadtools.h:992 */
	void CAutoLockT(CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> >* , const CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> >& );
	/* ../public/tier0/threadtools.h:993 */
	CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> >& operator=(CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> >* , const CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> >& );
	const char * m_pFileName; /* 8 8 */
	const int m_nLineNumber; /* 16 4 */
	void CAutoLockT(class CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > *, class CThreadMutex &, const char  *, int); /* linkage=_ZN10CAutoLockTI12CThreadMutex19CAutoLockMutexTraitIS0_EEC4ERS0_PKci */
	void CAutoLockT(class CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > *, const class CThreadMutex  &, const char  *, int); /* linkage=_ZN10CAutoLockTI12CThreadMutex19CAutoLockMutexTraitIS0_EEC4ERKS0_PKci */
	void ~CAutoLockT(class CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > *); /* linkage=_ZN10CAutoLockTI12CThreadMutex19CAutoLockMutexTraitIS0_EED4Ev */
	void CAutoLockT(class CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > *, class CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > &); /* linkage=_ZN10CAutoLockTI12CThreadMutex19CAutoLockMutexTraitIS0_EEC4EOS3_ */
	void CAutoLockT(class CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > *, const class CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >  &); /* linkage=_ZN10CAutoLockTI12CThreadMutex19CAutoLockMutexTraitIS0_EEC4ERKS3_ */
	class CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > & operator=(class CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > *, const class CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >  &); /* linkage=_ZN10CAutoLockTI12CThreadMutex19CAutoLockMutexTraitIS0_EEaSERKS3_ */
	void CAutoLockT(class CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> > *, class CThreadMutex &, const char  *, int); /* linkage=_ZN10CAutoLockTI12CThreadMutex31CAutoLockRWLockLockForReadTraitIS0_EEC4ERS0_PKci */
	void CAutoLockT(class CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> > *, const class CThreadMutex  &, const char  *, int); /* linkage=_ZN10CAutoLockTI12CThreadMutex31CAutoLockRWLockLockForReadTraitIS0_EEC4ERKS0_PKci */
	void ~CAutoLockT(class CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> > *); /* linkage=_ZN10CAutoLockTI12CThreadMutex31CAutoLockRWLockLockForReadTraitIS0_EED4Ev */
	void CAutoLockT(class CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> > *, class CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> > &); /* linkage=_ZN10CAutoLockTI12CThreadMutex31CAutoLockRWLockLockForReadTraitIS0_EEC4EOS3_ */
	void CAutoLockT(class CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> > *, const class CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> >  &); /* linkage=_ZN10CAutoLockTI12CThreadMutex31CAutoLockRWLockLockForReadTraitIS0_EEC4ERKS3_ */
	class CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> > & operator=(class CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> > *, const class CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> >  &); /* linkage=_ZN10CAutoLockTI12CThreadMutex31CAutoLockRWLockLockForReadTraitIS0_EEaSERKS3_ */
};

// <02CDFFDC> ../public/tier0/threadtools.h:964
// member functions: 18
// member variables: 3
// class size: 24
class CAutoLockT<CThreadMutex, CAutoLockRWLockLockForWriteTrait<CThreadMutex> > {
	/* ../public/tier0/threadtools.h:967 */
	void CAutoLockT(CAutoLockT<CThreadMutex, CAutoLockRWLockLockForWriteTrait<CThreadMutex> >* , CThreadMutex& , const char* , int);
	/* ../public/tier0/threadtools.h:975 */
	void CAutoLockT(CAutoLockT<CThreadMutex, CAutoLockRWLockLockForWriteTrait<CThreadMutex> >* , const CThreadMutex& , const char* , int);
	/* ../public/tier0/threadtools.h:981 */
	void ~CAutoLockT(CAutoLockT<CThreadMutex, CAutoLockRWLockLockForWriteTrait<CThreadMutex> >* );
private:
	CThreadMutex & m_lock; /* 0 8 */
	/* ../public/tier0/threadtools.h:991 */
	void CAutoLockT(CAutoLockT<CThreadMutex, CAutoLockRWLockLockForWriteTrait<CThreadMutex> >* , CAutoLockT<CThreadMutex, CAutoLockRWLockLockForWriteTrait<CThreadMutex> >& );
	/* ../public/tier0/threadtools.h:992 */
	void CAutoLockT(CAutoLockT<CThreadMutex, CAutoLockRWLockLockForWriteTrait<CThreadMutex> >* , const CAutoLockT<CThreadMutex, CAutoLockRWLockLockForWriteTrait<CThreadMutex> >& );
	/* ../public/tier0/threadtools.h:993 */
	CAutoLockT<CThreadMutex, CAutoLockRWLockLockForWriteTrait<CThreadMutex> >& operator=(CAutoLockT<CThreadMutex, CAutoLockRWLockLockForWriteTrait<CThreadMutex> >* , const CAutoLockT<CThreadMutex, CAutoLockRWLockLockForWriteTrait<CThreadMutex> >& );
	const char * m_pFileName; /* 8 8 */
	const int m_nLineNumber; /* 16 4 */
	void CAutoLockT(class CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > *, class CThreadMutex &, const char  *, int); /* linkage=_ZN10CAutoLockTI12CThreadMutex19CAutoLockMutexTraitIS0_EEC4ERS0_PKci */
	void CAutoLockT(class CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > *, const class CThreadMutex  &, const char  *, int); /* linkage=_ZN10CAutoLockTI12CThreadMutex19CAutoLockMutexTraitIS0_EEC4ERKS0_PKci */
	void ~CAutoLockT(class CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > *); /* linkage=_ZN10CAutoLockTI12CThreadMutex19CAutoLockMutexTraitIS0_EED4Ev */
	void CAutoLockT(class CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > *, class CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > &); /* linkage=_ZN10CAutoLockTI12CThreadMutex19CAutoLockMutexTraitIS0_EEC4EOS3_ */
	void CAutoLockT(class CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > *, const class CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >  &); /* linkage=_ZN10CAutoLockTI12CThreadMutex19CAutoLockMutexTraitIS0_EEC4ERKS3_ */
	class CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > & operator=(class CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > *, const class CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >  &); /* linkage=_ZN10CAutoLockTI12CThreadMutex19CAutoLockMutexTraitIS0_EEaSERKS3_ */
	void CAutoLockT(class CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> > *, class CThreadMutex &, const char  *, int); /* linkage=_ZN10CAutoLockTI12CThreadMutex31CAutoLockRWLockLockForReadTraitIS0_EEC4ERS0_PKci */
	void CAutoLockT(class CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> > *, const class CThreadMutex  &, const char  *, int); /* linkage=_ZN10CAutoLockTI12CThreadMutex31CAutoLockRWLockLockForReadTraitIS0_EEC4ERKS0_PKci */
	void ~CAutoLockT(class CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> > *); /* linkage=_ZN10CAutoLockTI12CThreadMutex31CAutoLockRWLockLockForReadTraitIS0_EED4Ev */
	void CAutoLockT(class CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> > *, class CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> > &); /* linkage=_ZN10CAutoLockTI12CThreadMutex31CAutoLockRWLockLockForReadTraitIS0_EEC4EOS3_ */
	void CAutoLockT(class CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> > *, const class CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> >  &); /* linkage=_ZN10CAutoLockTI12CThreadMutex31CAutoLockRWLockLockForReadTraitIS0_EEC4ERKS3_ */
	class CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> > & operator=(class CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> > *, const class CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> >  &); /* linkage=_ZN10CAutoLockTI12CThreadMutex31CAutoLockRWLockLockForReadTraitIS0_EEaSERKS3_ */
};

// <03051CBC> ../public/tier0/threadtools.h:964
// member functions: 6
// member variables: 3
// class size: 24
class CAutoLockT<CThreadRWLock, CAutoLockMutexTrait<CThreadRWLock> > {
	/* ../public/tier0/threadtools.h:967 */
	void CAutoLockT(CAutoLockT<CThreadRWLock, CAutoLockMutexTrait<CThreadRWLock> >* , CThreadRWLock& , const char* , int);
	/* ../public/tier0/threadtools.h:975 */
	void CAutoLockT(CAutoLockT<CThreadRWLock, CAutoLockMutexTrait<CThreadRWLock> >* , const CThreadRWLock& , const char* , int);
	/* ../public/tier0/threadtools.h:981 */
	void ~CAutoLockT(CAutoLockT<CThreadRWLock, CAutoLockMutexTrait<CThreadRWLock> >* );
private:
	CThreadRWLock & m_lock; /* 0 8 */
	/* ../public/tier0/threadtools.h:991 */
	void CAutoLockT(CAutoLockT<CThreadRWLock, CAutoLockMutexTrait<CThreadRWLock> >* , CAutoLockT<CThreadRWLock, CAutoLockMutexTrait<CThreadRWLock> >& );
	/* ../public/tier0/threadtools.h:992 */
	void CAutoLockT(CAutoLockT<CThreadRWLock, CAutoLockMutexTrait<CThreadRWLock> >* , const CAutoLockT<CThreadRWLock, CAutoLockMutexTrait<CThreadRWLock> >& );
	/* ../public/tier0/threadtools.h:993 */
	CAutoLockT<CThreadRWLock, CAutoLockMutexTrait<CThreadRWLock> >& operator=(CAutoLockT<CThreadRWLock, CAutoLockMutexTrait<CThreadRWLock> >* , const CAutoLockT<CThreadRWLock, CAutoLockMutexTrait<CThreadRWLock> >& );
	const char * m_pFileName; /* 8 8 */
	const int m_nLineNumber; /* 16 4 */
};

// <057292D6> ../public/tier0/threadtools.h:964
// member functions: 6
// member variables: 3
// class size: 24
class CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > {
	/* ../public/tier0/threadtools.h:967 */
	void CAutoLockT(CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >* , CThreadRWLock_FastRead& , const char* , int);
	/* ../public/tier0/threadtools.h:975 */
	void CAutoLockT(CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >* , const CThreadRWLock_FastRead& , const char* , int);
	/* ../public/tier0/threadtools.h:981 */
	void ~CAutoLockT(CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >* );
private:
	CThreadRWLock_FastRead & m_lock; /* 0 8 */
	/* ../public/tier0/threadtools.h:991 */
	void CAutoLockT(CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >* , CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >& );
	/* ../public/tier0/threadtools.h:992 */
	void CAutoLockT(CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >* , const CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >& );
	/* ../public/tier0/threadtools.h:993 */
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >& operator=(CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >* , const CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >& );
	const char * m_pFileName; /* 8 8 */
	const int m_nLineNumber; /* 16 4 */
};

// <0572943A> ../public/tier0/threadtools.h:964
// member functions: 6
// member variables: 3
// class size: 24
class CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> > {
	/* ../public/tier0/threadtools.h:967 */
	void CAutoLockT(CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >* , CThreadRWLock_FastRead& , const char* , int);
	/* ../public/tier0/threadtools.h:975 */
	void CAutoLockT(CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >* , const CThreadRWLock_FastRead& , const char* , int);
	/* ../public/tier0/threadtools.h:981 */
	void ~CAutoLockT(CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >* );
private:
	CThreadRWLock_FastRead & m_lock; /* 0 8 */
	/* ../public/tier0/threadtools.h:991 */
	void CAutoLockT(CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >* , CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >& );
	/* ../public/tier0/threadtools.h:992 */
	void CAutoLockT(CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >* , const CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >& );
	/* ../public/tier0/threadtools.h:993 */
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >& operator=(CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >* , const CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >& );
	const char * m_pFileName; /* 8 8 */
	const int m_nLineNumber; /* 16 4 */
};

// <0099B224> ../public/tier0/threadtools.h:964
// member functions: 6
// member variables: 3
// class size: 24
class CAutoLockT<CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >, CThreadFastMutex>, CAutoLockMutexTrait<CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >, CThreadFastMutex> > > {
	/* ../public/tier0/threadtools.h:967 */
	void CAutoLockT(CAutoLockT<CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >,, CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >, CThreadFas, const char* , int);
	/* ../public/tier0/threadtools.h:975 */
	void CAutoLockT(CAutoLockT<CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >,, const CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >, CThr, const char* , int);
	/* ../public/tier0/threadtools.h:981 */
	void ~CAutoLockT(CAutoLockT<CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >,);
private:
	CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >, CThreadFas m_lock; /* 0 8 */
	/* ../public/tier0/threadtools.h:991 */
	void CAutoLockT(CAutoLockT<CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >,, CAutoLockT<CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >,);
	/* ../public/tier0/threadtools.h:992 */
	void CAutoLockT(CAutoLockT<CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >,, const CAutoLockT<CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, i);
	/* ../public/tier0/threadtools.h:993 */
	CAutoLockT<CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >, operator=(CAutoLockT<CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >,, const CAutoLockT<CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, i);
	const char * m_pFileName; /* 8 8 */
	const int m_nLineNumber; /* 16 4 */
};

// <00B01576> ../public/tier0/threadtools.h:964
// member functions: 12
// member variables: 3
// class size: 24
class CAutoLockT<CThreadNullMutex, CAutoLockMutexTrait<CThreadNullMutex> > {
	/* ../public/tier0/threadtools.h:967 */
	void CAutoLockT(CAutoLockT<CThreadNullMutex, CAutoLockMutexTrait<CThreadNullMutex> >* , CThreadNullMutex& , const char* , int);
	/* ../public/tier0/threadtools.h:975 */
	void CAutoLockT(CAutoLockT<CThreadNullMutex, CAutoLockMutexTrait<CThreadNullMutex> >* , const CThreadNullMutex& , const char* , int);
	/* ../public/tier0/threadtools.h:981 */
	void ~CAutoLockT(CAutoLockT<CThreadNullMutex, CAutoLockMutexTrait<CThreadNullMutex> >* );
private:
	CThreadNullMutex & m_lock; /* 0 8 */
	/* ../public/tier0/threadtools.h:991 */
	void CAutoLockT(CAutoLockT<CThreadNullMutex, CAutoLockMutexTrait<CThreadNullMutex> >* , CAutoLockT<CThreadNullMutex, CAutoLockMutexTrait<CThreadNullMutex> >& );
	/* ../public/tier0/threadtools.h:992 */
	void CAutoLockT(CAutoLockT<CThreadNullMutex, CAutoLockMutexTrait<CThreadNullMutex> >* , const CAutoLockT<CThreadNullMutex, CAutoLockMutexTrait<CThreadNullMutex> >& );
	/* ../public/tier0/threadtools.h:993 */
	CAutoLockT<CThreadNullMutex, CAutoLockMutexTrait<CThreadNullMutex> >& operator=(CAutoLockT<CThreadNullMutex, CAutoLockMutexTrait<CThreadNullMutex> >* , const CAutoLockT<CThreadNullMutex, CAutoLockMutexTrait<CThreadNullMutex> >& );
	const char * m_pFileName; /* 8 8 */
	const int m_nLineNumber; /* 16 4 */
	void CAutoLockT(class CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> > *, class CThreadNullMutex &, const char  *, int); /* linkage=_ZN10CAutoLockTI16CThreadNullMutex31CAutoLockRWLockLockForReadTraitIS0_EEC4ERS0_PKci */
	void CAutoLockT(class CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> > *, const class CThreadNullMutex  &, const char  *, int); /* linkage=_ZN10CAutoLockTI16CThreadNullMutex31CAutoLockRWLockLockForReadTraitIS0_EEC4ERKS0_PKci */
	void ~CAutoLockT(class CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> > *); /* linkage=_ZN10CAutoLockTI16CThreadNullMutex31CAutoLockRWLockLockForReadTraitIS0_EED4Ev */
	void CAutoLockT(class CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> > *, class CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> > &); /* linkage=_ZN10CAutoLockTI16CThreadNullMutex31CAutoLockRWLockLockForReadTraitIS0_EEC4EOS3_ */
	void CAutoLockT(class CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> > *, const class CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >  &); /* linkage=_ZN10CAutoLockTI16CThreadNullMutex31CAutoLockRWLockLockForReadTraitIS0_EEC4ERKS3_ */
	class CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> > & operator=(class CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> > *, const class CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >  &); /* linkage=_ZN10CAutoLockTI16CThreadNullMutex31CAutoLockRWLockLockForReadTraitIS0_EEaSERKS3_ */
};

// <003EF73A> ../public/tier0/threadtools.h:964
// member functions: 6
// member variables: 3
// class size: 24
class CAutoLockT<CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>, CAutoLockMutexTrait<CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1> > > {
	/* ../public/tier0/threadtools.h:967 */
	void CAutoLockT(CAutoLockT<CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>, CAutoLockMutexTrait<CCopyableLock<CThreadFastMutex, (Co, CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>& , const char* , int);
	/* ../public/tier0/threadtools.h:975 */
	void CAutoLockT(CAutoLockT<CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>, CAutoLockMutexTrait<CCopyableLock<CThreadFastMutex, (Co, const CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>& , const char* , int);
	/* ../public/tier0/threadtools.h:981 */
	void ~CAutoLockT(CAutoLockT<CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>, CAutoLockMutexTrait<CCopyableLock<CThreadFastMutex, (Co);
private:
	CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1> & m_lock; /* 0 8 */
	/* ../public/tier0/threadtools.h:991 */
	void CAutoLockT(CAutoLockT<CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>, CAutoLockMutexTrait<CCopyableLock<CThreadFastMutex, (Co, CAutoLockT<CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>, CAutoLockMutexTrait<CCopyableLock<CThreadFastMutex, (Co);
	/* ../public/tier0/threadtools.h:992 */
	void CAutoLockT(CAutoLockT<CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>, CAutoLockMutexTrait<CCopyableLock<CThreadFastMutex, (Co, const CAutoLockT<CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>, CAutoLockMutexTrait<CCopyableLock<CThreadFastMute);
	/* ../public/tier0/threadtools.h:993 */
	CAutoLockT<CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>, CAutoLockMutexTrait<CCopyableLock<CThreadFastMutex, (Co operator=(CAutoLockT<CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>, CAutoLockMutexTrait<CCopyableLock<CThreadFastMutex, (Co, const CAutoLockT<CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>, CAutoLockMutexTrait<CCopyableLock<CThreadFastMute);
	const char * m_pFileName; /* 8 8 */
	const int m_nLineNumber; /* 16 4 */
};

// <0568D08E> ../public/tier0/threadtools.h:967
void CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForWriteTrait<CThreadNullMutex> >::CAutoLockT(CThreadNullMutex& lock, const char* pFilename, int nLineNumber)
{
} /* size: 0 */

// <0568D04E> ../public/tier0/threadtools.h:967
inline void CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForWriteTrait<CThreadNullMutex> >::CAutoLockT(CThreadNullMutex& lock, const char* pFilename, int nLineNumber)
{
} /* size: 0 */

// <02CE350E> ../public/tier0/threadtools.h:967
void CAutoLockT<CThreadMutex, CAutoLockRWLockLockForWriteTrait<CThreadMutex> >::CAutoLockT(CThreadMutex& lock, const char* pFilename, int nLineNumber)
{
} /* size: 0 */

// <02CE34CE> ../public/tier0/threadtools.h:967
inline void CAutoLockT<CThreadMutex, CAutoLockRWLockLockForWriteTrait<CThreadMutex> >::CAutoLockT(CThreadMutex& lock, const char* pFilename, int nLineNumber)
{
} /* size: 0 */

// <0685C55A> ../public/tier0/threadtools.h:975
void CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(const CThreadMutex& lock, const char* pFilename, int nLineNumber)
{
} /* size: 0 */

// <0685C51A> ../public/tier0/threadtools.h:975
inline void CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(const CThreadMutex& lock, const char* pFilename, int nLineNumber)
{
} /* size: 0 */

// <06457F73> ../public/tier0/threadtools.h:975
void CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(const CThreadFastMutex& lock, const char* pFilename, int nLineNumber)
{
} /* size: 0 */

// <06457F33> ../public/tier0/threadtools.h:975
inline void CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(const CThreadFastMutex& lock, const char* pFilename, int nLineNumber)
{
} /* size: 0 */

// <0572E1D4> ../public/tier0/threadtools.h:975
void CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::CAutoLockT(const CThreadRWLock_FastRead& lock, const char* pFilename, int nLineNumber)
{
} /* size: 0 */

// <0572E194> ../public/tier0/threadtools.h:975
inline void CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::CAutoLockT(const CThreadRWLock_FastRead& lock, const char* pFilename, int nLineNumber)
{
} /* size: 0 */

// <0572E0CE> ../public/tier0/threadtools.h:975
void CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::CAutoLockT(const CThreadRWLock_FastRead& lock, const char* pFilename, int nLineNumber)
{
} /* size: 0 */

// <0572E08E> ../public/tier0/threadtools.h:975
inline void CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::CAutoLockT(const CThreadRWLock_FastRead& lock, const char* pFilename, int nLineNumber)
{
} /* size: 0 */

// <0568D761> ../public/tier0/threadtools.h:975
void CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::CAutoLockT(const CThreadNullMutex& lock, const char* pFilename, int nLineNumber)
{
} /* size: 0 */

// <0568D721> ../public/tier0/threadtools.h:975
inline void CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::CAutoLockT(const CThreadNullMutex& lock, const char* pFilename, int nLineNumber)
{
} /* size: 0 */

// <0387BAAE> ../public/tier0/threadtools.h:975
void CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForWriteTrait<CThreadRWLock> >::CAutoLockT(const CThreadRWLock& lock, const char* pFilename, int nLineNumber)
{
} /* size: 0 */

// <0387BA6E> ../public/tier0/threadtools.h:975
inline void CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForWriteTrait<CThreadRWLock> >::CAutoLockT(const CThreadRWLock& lock, const char* pFilename, int nLineNumber)
{
} /* size: 0 */

// <0387B969> ../public/tier0/threadtools.h:975
void CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> >::CAutoLockT(const CThreadRWLock& lock, const char* pFilename, int nLineNumber)
{
} /* size: 0 */

// <0387B929> ../public/tier0/threadtools.h:975
inline void CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> >::CAutoLockT(const CThreadRWLock& lock, const char* pFilename, int nLineNumber)
{
} /* size: 0 */

// <0305F8DE> ../public/tier0/threadtools.h:975
void CAutoLockT<CThreadRWLock, CAutoLockMutexTrait<CThreadRWLock> >::CAutoLockT(const CThreadRWLock& lock, const char* pFilename, int nLineNumber)
{
} /* size: 0 */

// <0305F89E> ../public/tier0/threadtools.h:975
inline void CAutoLockT<CThreadRWLock, CAutoLockMutexTrait<CThreadRWLock> >::CAutoLockT(const CThreadRWLock& lock, const char* pFilename, int nLineNumber)
{
} /* size: 0 */

// <02CE2EC6> ../public/tier0/threadtools.h:975
void CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> >::CAutoLockT(const CThreadMutex& lock, const char* pFilename, int nLineNumber)
{
} /* size: 0 */

// <02CE2E86> ../public/tier0/threadtools.h:975
inline void CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> >::CAutoLockT(const CThreadMutex& lock, const char* pFilename, int nLineNumber)
{
} /* size: 0 */

// <01DA50FE> ../public/tier0/threadtools.h:975
void CAutoLockT<CThreadFastMutex, CAutoLockRWLockLockForReadTrait<CThreadFastMutex> >::CAutoLockT(const CThreadFastMutex& lock, const char* pFilename, int nLineNumber)
{
} /* size: 0 */

// <01DA50BE> ../public/tier0/threadtools.h:975
inline void CAutoLockT<CThreadFastMutex, CAutoLockRWLockLockForReadTrait<CThreadFastMutex> >::CAutoLockT(const CThreadFastMutex& lock, const char* pFilename, int nLineNumber)
{
} /* size: 0 */

// <01DA502B> ../public/tier0/threadtools.h:975
void CAutoLockT<CThreadFastMutex, CAutoLockRWLockLockForWriteTrait<CThreadFastMutex> >::CAutoLockT(const CThreadFastMutex& lock, const char* pFilename, int nLineNumber)
{
} /* size: 0 */

// <01DA4FEB> ../public/tier0/threadtools.h:975
inline void CAutoLockT<CThreadFastMutex, CAutoLockRWLockLockForWriteTrait<CThreadFastMutex> >::CAutoLockT(const CThreadFastMutex& lock, const char* pFilename, int nLineNumber)
{
} /* size: 0 */

// <00B07508> ../public/tier0/threadtools.h:975
void CAutoLockT<CThreadNullMutex, CAutoLockMutexTrait<CThreadNullMutex> >::CAutoLockT(const CThreadNullMutex& lock, const char* pFilename, int nLineNumber)
{
} /* size: 0 */

// <00B074C8> ../public/tier0/threadtools.h:975
inline void CAutoLockT<CThreadNullMutex, CAutoLockMutexTrait<CThreadNullMutex> >::CAutoLockT(const CThreadNullMutex& lock, const char* pFilename, int nLineNumber)
{
} /* size: 0 */

// <009E5CD9> ../public/tier0/threadtools.h:975
void CAutoLockT(const CAutoLockT<CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, i this, const CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >, CThr lock, const char* pFilename, int nLineNumber)
{
} /* size: 0 */

// <009E5C99> ../public/tier0/threadtools.h:975
inline void CAutoLockT(const CAutoLockT<CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, i this, const CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >, CThr lock, const char* pFilename, int nLineNumber)
{
} /* size: 0 */

// <003EFFE4> ../public/tier0/threadtools.h:975
void CAutoLockT(const CAutoLockT<CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>, CAutoLockMutexTrait<CCopyableLock<CThreadFastMute this, const CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>& lock, const char* pFilename, int nLineNumber)
{
} /* size: 0 */

// <003EFFA4> ../public/tier0/threadtools.h:975
inline void CAutoLockT(const CAutoLockT<CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>, CAutoLockMutexTrait<CCopyableLock<CThreadFastMute this, const CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>& lock, const char* pFilename, int nLineNumber)
{
} /* size: 0 */

// <0685C503> ../public/tier0/threadtools.h:981
void CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT()
{
} /* size: 0 */

// <0685C4EA> ../public/tier0/threadtools.h:981
inline void CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT()
{
} /* size: 0 */

// <06457F1C> ../public/tier0/threadtools.h:981
void CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT()
{
} /* size: 0 */

// <06457F03> ../public/tier0/threadtools.h:981
inline void CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT()
{
} /* size: 0 */

// <0572E17D> ../public/tier0/threadtools.h:981
void CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT()
{
} /* size: 0 */

// <0572E164> ../public/tier0/threadtools.h:981
inline void CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT()
{
} /* size: 0 */

// <0572E077> ../public/tier0/threadtools.h:981
void CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::~CAutoLockT()
{
} /* size: 0 */

// <0572E05E> ../public/tier0/threadtools.h:981
inline void CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::~CAutoLockT()
{
} /* size: 0 */

// <0568D70A> ../public/tier0/threadtools.h:981
void CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::~CAutoLockT()
{
} /* size: 0 */

// <0568D6F1> ../public/tier0/threadtools.h:981
inline void CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::~CAutoLockT()
{
} /* size: 0 */

// <0568D037> ../public/tier0/threadtools.h:981
void CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForWriteTrait<CThreadNullMutex> >::~CAutoLockT()
{
} /* size: 0 */

// <0568D01E> ../public/tier0/threadtools.h:981
inline void CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForWriteTrait<CThreadNullMutex> >::~CAutoLockT()
{
} /* size: 0 */

// <0387BA57> ../public/tier0/threadtools.h:981
void CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForWriteTrait<CThreadRWLock> >::~CAutoLockT()
{
} /* size: 0 */

// <0387BA3E> ../public/tier0/threadtools.h:981
inline void CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForWriteTrait<CThreadRWLock> >::~CAutoLockT()
{
} /* size: 0 */

// <0387B912> ../public/tier0/threadtools.h:981
void CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> >::~CAutoLockT()
{
} /* size: 0 */

// <0387B8F9> ../public/tier0/threadtools.h:981
inline void CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> >::~CAutoLockT()
{
} /* size: 0 */

// <0305F887> ../public/tier0/threadtools.h:981
void CAutoLockT<CThreadRWLock, CAutoLockMutexTrait<CThreadRWLock> >::~CAutoLockT()
{
} /* size: 0 */

// <0305F86E> ../public/tier0/threadtools.h:981
inline void CAutoLockT<CThreadRWLock, CAutoLockMutexTrait<CThreadRWLock> >::~CAutoLockT()
{
} /* size: 0 */

// <02CE34B7> ../public/tier0/threadtools.h:981
void CAutoLockT<CThreadMutex, CAutoLockRWLockLockForWriteTrait<CThreadMutex> >::~CAutoLockT()
{
} /* size: 0 */

// <02CE349E> ../public/tier0/threadtools.h:981
inline void CAutoLockT<CThreadMutex, CAutoLockRWLockLockForWriteTrait<CThreadMutex> >::~CAutoLockT()
{
} /* size: 0 */

// <02CE2E6F> ../public/tier0/threadtools.h:981
void CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> >::~CAutoLockT()
{
} /* size: 0 */

// <02CE2E56> ../public/tier0/threadtools.h:981
inline void CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> >::~CAutoLockT()
{
} /* size: 0 */

// <01DA50A7> ../public/tier0/threadtools.h:981
void CAutoLockT<CThreadFastMutex, CAutoLockRWLockLockForReadTrait<CThreadFastMutex> >::~CAutoLockT()
{
} /* size: 0 */

// <01DA508E> ../public/tier0/threadtools.h:981
inline void CAutoLockT<CThreadFastMutex, CAutoLockRWLockLockForReadTrait<CThreadFastMutex> >::~CAutoLockT()
{
} /* size: 0 */

// <01DA4FD4> ../public/tier0/threadtools.h:981
void CAutoLockT<CThreadFastMutex, CAutoLockRWLockLockForWriteTrait<CThreadFastMutex> >::~CAutoLockT()
{
} /* size: 0 */

// <01DA4FBB> ../public/tier0/threadtools.h:981
inline void CAutoLockT<CThreadFastMutex, CAutoLockRWLockLockForWriteTrait<CThreadFastMutex> >::~CAutoLockT()
{
} /* size: 0 */

// <00B074B1> ../public/tier0/threadtools.h:981
void CAutoLockT<CThreadNullMutex, CAutoLockMutexTrait<CThreadNullMutex> >::~CAutoLockT()
{
} /* size: 0 */

// <00B07498> ../public/tier0/threadtools.h:981
inline void CAutoLockT<CThreadNullMutex, CAutoLockMutexTrait<CThreadNullMutex> >::~CAutoLockT()
{
} /* size: 0 */

// <009E5C82> ../public/tier0/threadtools.h:981
void ~CAutoLockT(const CAutoLockT<CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, i this)
{
} /* size: 0 */

// <009E5C69> ../public/tier0/threadtools.h:981
inline void ~CAutoLockT(const CAutoLockT<CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, i this)
{
} /* size: 0 */

// <003EFF8D> ../public/tier0/threadtools.h:981
void ~CAutoLockT(const CAutoLockT<CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>, CAutoLockMutexTrait<CCopyableLock<CThreadFastMute this)
{
} /* size: 0 */

// <003EFF74> ../public/tier0/threadtools.h:981
inline void ~CAutoLockT(const CAutoLockT<CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>, CAutoLockMutexTrait<CCopyableLock<CThreadFastMute this)
{
} /* size: 0 */

// <0040739C> ../public/tier0/threadtools.h:1012
// member functions: 24
// member variables: 2
// class size: 16
class CSemiAutoRWLockT<CThreadRWLock_FastRead> {
	/* ../public/tier0/threadtools.h:1015 */
	void CSemiAutoRWLockT(CSemiAutoRWLockT<CThreadRWLock_FastRead>* , CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:1020 */
	void SetLock(CSemiAutoRWLockT<CThreadRWLock_FastRead>* , CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:1029 */
	CThreadRWLock_FastRead* GetLock(const CSemiAutoRWLockT<CThreadRWLock_FastRead>* );
	/* ../public/tier0/threadtools.h:1034 */
	HeldLockType_t GetHeldLockType(const CSemiAutoRWLockT<CThreadRWLock_FastRead>* );
	/* ../public/tier0/threadtools.h:1039 */
	RWLockTranstionResult_t LockForRead(CSemiAutoRWLockT<CThreadRWLock_FastRead>* , const char* , int, bool);
	/* ../public/tier0/threadtools.h:1068 */
	RWLockTranstionResult_t LockForWrite(CSemiAutoRWLockT<CThreadRWLock_FastRead>* , const char* , int);
	/* ../public/tier0/threadtools.h:1090 */
	void Unlock(CSemiAutoRWLockT<CThreadRWLock_FastRead>* , const char* , int);
	/* ../public/tier0/threadtools.h:1111 */
	void ~CSemiAutoRWLockT(CSemiAutoRWLockT<CThreadRWLock_FastRead>* );
	/* ../public/tier0/threadtools.h:1116 */
	void TransferOwnershipFrom(CSemiAutoRWLockT<CThreadRWLock_FastRead>* , CSemiAutoRWLockT<CThreadRWLock_FastRead>& );
	/* ../public/tier0/threadtools.h:1127 */
	void CopyOwnershipFrom(CSemiAutoRWLockT<CThreadRWLock_FastRead>* , const CSemiAutoRWLockT<CThreadRWLock_FastRead>& );
private:
	CThreadRWLock_FastRead * m_pLock; /* 0 8 */
	HeldLockType_t m_HoldingLock; /* 8 4 */
	/* ../public/tier0/threadtools.h:1203 */
	void CSemiAutoRWLockT(CSemiAutoRWLockT<CThreadRWLock_FastRead>* , const CSemiAutoRWLockT<CThreadRWLock_FastRead>& );
	/* ../public/tier0/threadtools.h:1204 */
	CSemiAutoRWLockT<CThreadRWLock_FastRead>& operator=(CSemiAutoRWLockT<CThreadRWLock_FastRead>* , const CSemiAutoRWLockT<CThreadRWLock_FastRead>& );
	void CSemiAutoRWLockT(class CSemiAutoRWLockT<CThreadRWLock_FastRead> *, class CThreadRWLock_FastRead *); /* linkage=_ZN16CSemiAutoRWLockTI22CThreadRWLock_FastReadEC4EPS0_ */
	void SetLock(class CSemiAutoRWLockT<CThreadRWLock_FastRead> *, class CThreadRWLock_FastRead *); /* linkage=_ZN16CSemiAutoRWLockTI22CThreadRWLock_FastReadE7SetLockEPS0_ */
	class CThreadRWLock_FastRead * GetLock(const class CSemiAutoRWLockT<CThreadRWLock_FastRead>  *); /* linkage=_ZNK16CSemiAutoRWLockTI22CThreadRWLock_FastReadE7GetLockEv */
	enum HeldLockType_t GetHeldLockType(const class CSemiAutoRWLockT<CThreadRWLock_FastRead>  *); /* linkage=_ZNK16CSemiAutoRWLockTI22CThreadRWLock_FastReadE15GetHeldLockTypeEv */
	enum RWLockTranstionResult_t LockForRead(class CSemiAutoRWLockT<CThreadRWLock_FastRead> *, const char  *, int, bool); /* linkage=_ZN16CSemiAutoRWLockTI22CThreadRWLock_FastReadE11LockForReadEPKcib */
	enum RWLockTranstionResult_t LockForWrite(class CSemiAutoRWLockT<CThreadRWLock_FastRead> *, const char  *, int); /* linkage=_ZN16CSemiAutoRWLockTI22CThreadRWLock_FastReadE12LockForWriteEPKci */
	void Unlock(class CSemiAutoRWLockT<CThreadRWLock_FastRead> *, const char  *, int); /* linkage=_ZN16CSemiAutoRWLockTI22CThreadRWLock_FastReadE6UnlockEPKci */
	void ~CSemiAutoRWLockT(class CSemiAutoRWLockT<CThreadRWLock_FastRead> *); /* linkage=_ZN16CSemiAutoRWLockTI22CThreadRWLock_FastReadED4Ev */
	void TransferOwnershipFrom(class CSemiAutoRWLockT<CThreadRWLock_FastRead> *, class CSemiAutoRWLockT<CThreadRWLock_FastRead> &); /* linkage=_ZN16CSemiAutoRWLockTI22CThreadRWLock_FastReadE21TransferOwnershipFromERS1_ */
	void CopyOwnershipFrom(class CSemiAutoRWLockT<CThreadRWLock_FastRead> *, const class CSemiAutoRWLockT<CThreadRWLock_FastRead>  &); /* linkage=_ZN16CSemiAutoRWLockTI22CThreadRWLock_FastReadE17CopyOwnershipFromERKS1_ */
	void CSemiAutoRWLockT(class CSemiAutoRWLockT<CThreadRWLock_FastRead> *, const class CSemiAutoRWLockT<CThreadRWLock_FastRead>  &); /* linkage=_ZN16CSemiAutoRWLockTI22CThreadRWLock_FastReadEC4ERKS1_ */
	class CSemiAutoRWLockT<CThreadRWLock_FastRead> & operator=(class CSemiAutoRWLockT<CThreadRWLock_FastRead> *, const class CSemiAutoRWLockT<CThreadRWLock_FastRead>  &); /* linkage=_ZN16CSemiAutoRWLockTI22CThreadRWLock_FastReadEaSERKS1_ */
};

// <00AC5C99> ../public/tier0/threadtools.h:1015
void CSemiAutoRWLockT<CThreadRWLock_FastRead>::CSemiAutoRWLockT(CThreadRWLock_FastRead* pLock)
{
} /* size: 0 */

// <00AC5C73> ../public/tier0/threadtools.h:1015
inline void CSemiAutoRWLockT<CThreadRWLock_FastRead>::CSemiAutoRWLockT(CThreadRWLock_FastRead* pLock)
{
} /* size: 0 */

// <0025EA86> ../public/tier0/threadtools.h:1034
inline void CSemiAutoRWLockT<CThreadRWLock_FastRead>::GetHeldLockType()
{
} /* size: 0 */

// <00AC5BCA> ../public/tier0/threadtools.h:1039
// variables: 3
inline void CSemiAutoRWLockT<CThreadRWLock_FastRead>::LockForRead(const char* pFileName, int nLineNumber, bool bHoldExistingWriteLockInstead)
{
	const char   __FUNCTION__; // 14453
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1059
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1062
	}
} /* size: 0, variables: 1 */

// <00409CD3> ../public/tier0/threadtools.h:1039
// variables: 3
inline void CSemiAutoRWLockT<CThreadRWLock_FastRead>::LockForRead(const char* pFileName, int nLineNumber, bool bHoldExistingWriteLockInstead)
{
	const char   __FUNCTION__; // 50753
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1059
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1062
	}
} /* size: 0, variables: 1 */

// <0025EB81> ../public/tier0/threadtools.h:1039
// variables: 3
inline void CSemiAutoRWLockT<CThreadRWLock_FastRead>::LockForRead(const char* pFileName, int nLineNumber, bool bHoldExistingWriteLockInstead)
{
	const char   __FUNCTION__; // 4135
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1059
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1062
	}
} /* size: 0, variables: 1 */

// <0021A50C> ../public/tier0/threadtools.h:1039
// variables: 3
inline void CSemiAutoRWLockT<CThreadRWLock_FastRead>::LockForRead(const char* pFileName, int nLineNumber, bool bHoldExistingWriteLockInstead)
{
	const char   __FUNCTION__; // 25417
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1059
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1062
	}
} /* size: 0, variables: 1 */

// <00AC5ADD> ../public/tier0/threadtools.h:1068
// variables: 3
inline void CSemiAutoRWLockT<CThreadRWLock_FastRead>::LockForWrite(const char* pFileName, int nLineNumber)
{
	const char   __FUNCTION__; // 14480
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1084
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1087
	}
} /* size: 0, variables: 1 */

// <0040DD8D> ../public/tier0/threadtools.h:1068
void CSemiAutoRWLockT<CThreadRWLock_FastRead>::LockForWrite()
{
	{
	}
} /* size: 0 */

// <00409C1E> ../public/tier0/threadtools.h:1068
// variables: 3
inline void CSemiAutoRWLockT<CThreadRWLock_FastRead>::LockForWrite(const char* pFileName, int nLineNumber)
{
	const char   __FUNCTION__; // 50780
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1084
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1087
	}
} /* size: 0, variables: 1 */

// <0025EAC5> ../public/tier0/threadtools.h:1068
// variables: 3
inline void CSemiAutoRWLockT<CThreadRWLock_FastRead>::LockForWrite(const char* pFileName, int nLineNumber)
{
	const char   __FUNCTION__; // 4156
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1084
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1087
	}
} /* size: 0, variables: 1 */

// <0021A5E2> ../public/tier0/threadtools.h:1068
// variables: 3
inline void CSemiAutoRWLockT<CThreadRWLock_FastRead>::LockForWrite(const char* pFileName, int nLineNumber)
{
	const char   __FUNCTION__; // 25444
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1084
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1087
	}
} /* size: 0, variables: 1 */

// <00ADCFEB> ../public/tier0/threadtools.h:1090
void CSemiAutoRWLockT<CThreadRWLock_FastRead>::Unlock()
{
	{
	}
} /* size: 0 */

// <00AC5B49> ../public/tier0/threadtools.h:1090
// variables: 2
inline void CSemiAutoRWLockT<CThreadRWLock_FastRead>::Unlock(const char* pFileName, int nLineNumber)
{
	const char   __FUNCTION__; // 14318
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1107
	}
} /* size: 0, variables: 1 */

// <00409B58> ../public/tier0/threadtools.h:1090
// variables: 2
inline void CSemiAutoRWLockT<CThreadRWLock_FastRead>::Unlock(const char* pFileName, int nLineNumber)
{
	const char   __FUNCTION__; // 50638
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1107
	}
} /* size: 0, variables: 1 */

// <0025D9BB> ../public/tier0/threadtools.h:1090
// variables: 2
inline void CSemiAutoRWLockT<CThreadRWLock_FastRead>::Unlock(const char* pFileName, int nLineNumber)
{
	const char   __FUNCTION__; // 4072
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1107
	}
} /* size: 0, variables: 1 */

// <0021A585> ../public/tier0/threadtools.h:1090
// variables: 2
inline void CSemiAutoRWLockT<CThreadRWLock_FastRead>::Unlock(const char* pFileName, int nLineNumber)
{
	const char   __FUNCTION__; // 25282
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1107
	}
} /* size: 0, variables: 1 */

// <00AC5C5C> ../public/tier0/threadtools.h:1111
void CSemiAutoRWLockT<CThreadRWLock_FastRead>::~CSemiAutoRWLockT()
{
} /* size: 0 */

// <00AC5C43> ../public/tier0/threadtools.h:1111
inline void CSemiAutoRWLockT<CThreadRWLock_FastRead>::~CSemiAutoRWLockT()
{
} /* size: 0 */

// <004CA90D> ../public/tier0/threadtools.h:1347
// member functions: 46
// member variables: 11
// vtable entry: 1
// class size: 128
class CThreadSyncObject {
	int ()(void) * * _vptr.CThreadSyncObject; /* 0 8 */
	/* tier0/threadtools.cpp:2453 */
	void ~CThreadSyncObject(CThreadSyncObject* );
	/* tier0/threadtools.cpp:2483 */
	bool operator!(const CThreadSyncObject* );
	/* ../public/tier0/threadtools.h:1356 */
	bool IsValid(const CThreadSyncObject* );
	/* tier0/threadtools.cpp:2508 */
	bool Wait(CThreadSyncObject* , uint32);
	/* tier0/threadtools.cpp:3130 */
	uint32 WaitForMultiple(int, CThreadSyncObject** , bool, uint32);
	/* tier0/threadtools.cpp:3196 */
	uint32 WaitForMultiple(int, CThreadSyncObject* , bool, uint32);
protected:
	/* tier0/threadtools.cpp:2435 */
	void CThreadSyncObject(CThreadSyncObject* );
	/* tier0/threadtools.cpp:2494 */
	void AssertUseable(CThreadSyncObject* );
	/* tier0/threadtools.cpp:2590 */
	bool SaveNameToFile(CThreadSyncObject* , const char* );
	/* tier0/threadtools.cpp:2617 */
	bool CreateAnonymousSyncObjectInternal(CThreadSyncObject* , int32, bool);
	/* tier0/threadtools.cpp:2658 */
	bool SignalThreadSyncObjectInternal(CThreadSyncObject* );
	/* tier0/threadtools.cpp:2680 */
	bool ResetThreadSyncObjectInternal(CThreadSyncObject* );
	/* tier0/threadtools.cpp:2688 */
	bool IsSemaphoreOrphanedInternal(CThreadSyncObject* , sem_type, int);
	/* tier0/threadtools.cpp:2728 */
	sem_type CreateSemaphoreInternal(CThreadSyncObject* , const char* , int32, bool, bool* );
	/* tier0/threadtools.cpp:2901 */
	sem_type OpenSemaphoreInternal(CThreadSyncObject* , const char* , bool);
	/* tier0/threadtools.cpp:2929 */
	bool AcquireSemaphoreInternal(CThreadSyncObject* , uint32);
	/* tier0/threadtools.cpp:3009 */
	bool ReleaseSemaphoreInternal(CThreadSyncObject* , sem_type, int32);
	/* tier0/threadtools.cpp:3030 */
	void CloseSemaphoreInternal(CThreadSyncObject* , sem_type, bool, const char* );
	/* tier0/threadtools.cpp:3053 */
	bool EnsureSemaphoreClearedInternal(CThreadSyncObject* , sem_type);
	/* tier0/threadtools.cpp:3075 */
	bool EnsureSemaphorePostedInternal(CThreadSyncObject* , sem_type);
	char * m_pszSemName; /* 8 8 */
	sem_type m_pSemaphore; /* 16 4 */
	bool m_bSemOwner; /* 20 1 */
	bool m_bSemAutoUndo; /* 21 1 */
	pthread_mutex_t m_Mutex; /* 24 40 */
	pthread_cond_t m_Condition; /* 64 48 */
	bool m_bInitialized; /* 112 1 */
	bool m_bManualReset; /* 113 1 */
	int32 m_cSet; /* 116 4 */
	int m_nBroadcastCount; /* 120 4 */
private:
	/* ../public/tier0/threadtools.h:1425 */
	void CThreadSyncObject(CThreadSyncObject* , const CThreadSyncObject& );
	/* ../public/tier0/threadtools.h:1426 */
	CThreadSyncObject& operator=(CThreadSyncObject* , const CThreadSyncObject& );
	/* tier0/threadtools.cpp:2535 */
	virtual bool WaitImpl(CThreadSyncObject* , uint32);
	void ~CThreadSyncObject(class CThreadSyncObject *); /* linkage=_ZN17CThreadSyncObjectD4Ev */
	bool operator!(const class CThreadSyncObject  *); /* linkage=_ZNK17CThreadSyncObjectntEv */
	bool IsValid(const class CThreadSyncObject  *); /* linkage=_ZNK17CThreadSyncObject7IsValidEv */
	/* <4e4bcb> tier0/threadtools.cpp:2508 */
	bool Wait(class CThreadSyncObject *, uint32); /* linkage=_ZN17CThreadSyncObject4WaitEj */
	uint32 WaitForMultiple(int, class CThreadSyncObject * *, bool, uint32); /* linkage=_ZN17CThreadSyncObject15WaitForMultipleEiPPS_bj */
	uint32 WaitForMultiple(int, class CThreadSyncObject *, bool, uint32); /* linkage=_ZN17CThreadSyncObject15WaitForMultipleEiPS_bj */
	void CThreadSyncObject(class CThreadSyncObject *); /* linkage=_ZN17CThreadSyncObjectC4Ev */
	/* <4e4b50> tier0/threadtools.cpp:2494 */
	void AssertUseable(class CThreadSyncObject *); /* linkage=_ZN17CThreadSyncObject13AssertUseableEv */
	bool SaveNameToFile(class CThreadSyncObject *, const char  *); /* linkage=_ZN17CThreadSyncObject14SaveNameToFileEPKc */
	bool CreateAnonymousSyncObjectInternal(class CThreadSyncObject *, int32, bool); /* linkage=_ZN17CThreadSyncObject33CreateAnonymousSyncObjectInternalEib */
	bool SignalThreadSyncObjectInternal(class CThreadSyncObject *); /* linkage=_ZN17CThreadSyncObject30SignalThreadSyncObjectInternalEv */
	bool ResetThreadSyncObjectInternal(class CThreadSyncObject *); /* linkage=_ZN17CThreadSyncObject29ResetThreadSyncObjectInternalEv */
	bool IsSemaphoreOrphanedInternal(class CThreadSyncObject *, sem_type, int); /* linkage=_ZN17CThreadSyncObject27IsSemaphoreOrphanedInternalEii */
	sem_type CreateSemaphoreInternal(class CThreadSyncObject *, const char  *, int32, bool, bool *); /* linkage=_ZN17CThreadSyncObject23CreateSemaphoreInternalEPKcibPb */
	sem_type OpenSemaphoreInternal(class CThreadSyncObject *, const char  *, bool); /* linkage=_ZN17CThreadSyncObject21OpenSemaphoreInternalEPKcb */
	bool AcquireSemaphoreInternal(class CThreadSyncObject *, uint32); /* linkage=_ZN17CThreadSyncObject24AcquireSemaphoreInternalEj */
	bool ReleaseSemaphoreInternal(class CThreadSyncObject *, sem_type, int32); /* linkage=_ZN17CThreadSyncObject24ReleaseSemaphoreInternalEii */
	/* <4e4d05> tier0/threadtools.cpp:3030 */
	void CloseSemaphoreInternal(class CThreadSyncObject *, sem_type, bool, const char  *); /* linkage=_ZN17CThreadSyncObject22CloseSemaphoreInternalEibPKc */
	bool EnsureSemaphoreClearedInternal(class CThreadSyncObject *, sem_type); /* linkage=_ZN17CThreadSyncObject30EnsureSemaphoreClearedInternalEi */
	bool EnsureSemaphorePostedInternal(class CThreadSyncObject *, sem_type); /* linkage=_ZN17CThreadSyncObject29EnsureSemaphorePostedInternalEi */
	void CThreadSyncObject(class CThreadSyncObject *, const class CThreadSyncObject  &); /* linkage=_ZN17CThreadSyncObjectC4ERKS_ */
	class CThreadSyncObject & operator=(class CThreadSyncObject *, const class CThreadSyncObject  &); /* linkage=_ZN17CThreadSyncObjectaSERKS_ */
	virtual bool WaitImpl(class CThreadSyncObject *, uint32); /* linkage=_ZN17CThreadSyncObject8WaitImplEj */
};

// <0685ADCB> ../public/tier0/threadtools.h:1350
void CThreadSyncObject::~CThreadSyncObject()
{
} /* size: 0 */

// <004C210D> ../public/tier0/threadtools.h:1447
// member functions: 12
// member variable: 1
// vtable entry: 1
// class size: 128
class CThreadSemaphore : public CThreadSyncObject {
public:
	/* class CThreadSyncObject <ancestor>; */ /* 0 128 */
	/* tier0/threadtools.cpp:3446 */
	void CThreadSemaphore(CThreadSemaphore* , int32, int32, const char* , bool);
	/* tier0/threadtools.cpp:3500 */
	void ~CThreadSemaphore(CThreadSemaphore* );
	/* tier0/threadtools.cpp:3583 */
	bool Release(CThreadSemaphore* , int32, int32* );
private:
	/* ../public/tier0/threadtools.h:1460 */
	void CThreadSemaphore(CThreadSemaphore* , const CThreadSemaphore& );
	/* ../public/tier0/threadtools.h:1461 */
	CThreadSemaphore& operator=(CThreadSemaphore* , const CThreadSemaphore& );
	/* tier0/threadtools.cpp:3512 */
	virtual bool WaitImpl(CThreadSemaphore* , uint32);
	void CThreadSemaphore(class CThreadSemaphore *, int32, int32, const char  *, bool); /* linkage=_ZN16CThreadSemaphoreC4EiiPKcb */
	void ~CThreadSemaphore(class CThreadSemaphore *); /* linkage=_ZN16CThreadSemaphoreD4Ev */
	/* <4e4dee> tier0/threadtools.cpp:3583 */
	bool Release(class CThreadSemaphore *, int32, int32 *); /* linkage=_ZN16CThreadSemaphore7ReleaseEiPi */
	void CThreadSemaphore(class CThreadSemaphore *, const class CThreadSemaphore  &); /* linkage=_ZN16CThreadSemaphoreC4ERKS_ */
	class CThreadSemaphore & operator=(class CThreadSemaphore *, const class CThreadSemaphore  &); /* linkage=_ZN16CThreadSemaphoreaSERKS_ */
	virtual bool WaitImpl(class CThreadSemaphore *, uint32); /* linkage=_ZN16CThreadSemaphore8WaitImplEj */
};

// <0215BC0A> ../public/tier0/threadtools.h:1450
void CThreadSemaphore::CThreadSemaphore(int32 initialValue, int32 maxValue, const char* pszName, bool bAllAccess)
{
} /* size: 0 */

// <0572C667> ../public/tier0/threadtools.h:1451
void CThreadSemaphore::~CThreadSemaphore()
{
} /* size: 0 */

// <00B8B32D> ../public/tier0/threadtools.h:1477
void CThreadFastSemaphore::~CThreadFastSemaphore()
{
} /* size: 0 */

// <00B8B310> ../public/tier0/threadtools.h:1477
inline void CThreadFastSemaphore::~CThreadFastSemaphore()
{
} /* size: 0 */

// <0213F5D7> ../public/tier0/threadtools.h:1477
// member functions: 17
// member variables: 2
// class size: 136
class CThreadFastSemaphore {
	/* ../public/tier0/threadtools.h:1479 */
	enum {
		SPIN_COUNT = 10,
	};
	/* ../public/tier0/threadtools.h:1484 */
	void CThreadFastSemaphore(CThreadFastSemaphore* );
	/* ../public/tier0/threadtools.h:1486 */
	void Release(CThreadFastSemaphore* , int32);
	/* ../public/tier0/threadtools.h:1497 */
	bool TryWait(CThreadFastSemaphore* );
	/* ../public/tier0/threadtools.h:1515 */
	void Wait(CThreadFastSemaphore* );
	/* ../public/tier0/threadtools.h:1539 */
	void CThreadFastSemaphore(CThreadFastSemaphore* , const CThreadFastSemaphore& );
	/* ../public/tier0/threadtools.h:1540 */
	void CThreadFastSemaphore(CThreadFastSemaphore* , CThreadFastSemaphore& );
	/* ../public/tier0/threadtools.h:1541 */
	void operator=(CThreadFastSemaphore* , const CThreadFastSemaphore& );
	/* ../public/tier0/threadtools.h:1542 */
	void operator=(CThreadFastSemaphore* , CThreadFastSemaphore& );
private:
	atomic<int> m_counter __attribute__((__aligned__(4))); /* 0 4 */
	CThreadSemaphore m_sema; /* 8 0 */
	void CThreadFastSemaphore(class CThreadFastSemaphore *); /* linkage=_ZN20CThreadFastSemaphoreC4Ev */
	void Release(class CThreadFastSemaphore *, int32); /* linkage=_ZN20CThreadFastSemaphore7ReleaseEi */
	bool TryWait(class CThreadFastSemaphore *); /* linkage=_ZN20CThreadFastSemaphore7TryWaitEv */
	void Wait(class CThreadFastSemaphore *); /* linkage=_ZN20CThreadFastSemaphore4WaitEv */
	void CThreadFastSemaphore(class CThreadFastSemaphore *, const class CThreadFastSemaphore  &); /* linkage=_ZN20CThreadFastSemaphoreC4ERKS_ */
	void CThreadFastSemaphore(class CThreadFastSemaphore *, class CThreadFastSemaphore &); /* linkage=_ZN20CThreadFastSemaphoreC4EOS_ */
	void operator=(class CThreadFastSemaphore *, const class CThreadFastSemaphore  &); /* linkage=_ZN20CThreadFastSemaphoreaSERKS_ */
	void operator=(class CThreadFastSemaphore *, class CThreadFastSemaphore &); /* linkage=_ZN20CThreadFastSemaphoreaSEOS_ */
	void ~CThreadFastSemaphore(class CThreadFastSemaphore *); /* linkage=_ZN20CThreadFastSemaphoreD4Ev */
} __attribute__((__aligned__(8)));

// <00116696> ../public/tier0/threadtools.h:1477
// member functions: 18
// member variables: 2
// class size: 136
class CThreadFastSemaphore {
	/* ../public/tier0/threadtools.h:1484 */
	void CThreadFastSemaphore(CThreadFastSemaphore* );
	/* ../public/tier0/threadtools.h:1486 */
	void Release(CThreadFastSemaphore* , int32);
	/* ../public/tier0/threadtools.h:1497 */
	bool TryWait(CThreadFastSemaphore* );
	/* ../public/tier0/threadtools.h:1515 */
	void Wait(CThreadFastSemaphore* );
	/* ../public/tier0/threadtools.h:1539 */
	void CThreadFastSemaphore(CThreadFastSemaphore* , const CThreadFastSemaphore& );
	/* ../public/tier0/threadtools.h:1540 */
	void CThreadFastSemaphore(CThreadFastSemaphore* , CThreadFastSemaphore& );
	/* ../public/tier0/threadtools.h:1541 */
	void operator=(CThreadFastSemaphore* , const CThreadFastSemaphore& );
	/* ../public/tier0/threadtools.h:1542 */
	void operator=(CThreadFastSemaphore* , CThreadFastSemaphore& );
private:
	atomic<int> m_counter __attribute__((__aligned__(4))); /* 0 4 */
	CThreadSemaphore m_sema; /* 8 0 */
	void ~CThreadFastSemaphore(CThreadFastSemaphore* );
	void CThreadFastSemaphore(class CThreadFastSemaphore *); /* linkage=_ZN20CThreadFastSemaphoreC4Ev */
	void Release(class CThreadFastSemaphore *, int32); /* linkage=_ZN20CThreadFastSemaphore7ReleaseEi */
	bool TryWait(class CThreadFastSemaphore *); /* linkage=_ZN20CThreadFastSemaphore7TryWaitEv */
	void Wait(class CThreadFastSemaphore *); /* linkage=_ZN20CThreadFastSemaphore4WaitEv */
	void CThreadFastSemaphore(class CThreadFastSemaphore *, const class CThreadFastSemaphore  &); /* linkage=_ZN20CThreadFastSemaphoreC4ERKS_ */
	void CThreadFastSemaphore(class CThreadFastSemaphore *, class CThreadFastSemaphore &); /* linkage=_ZN20CThreadFastSemaphoreC4EOS_ */
	void operator=(class CThreadFastSemaphore *, const class CThreadFastSemaphore  &); /* linkage=_ZN20CThreadFastSemaphoreaSERKS_ */
	void operator=(class CThreadFastSemaphore *, class CThreadFastSemaphore &); /* linkage=_ZN20CThreadFastSemaphoreaSEOS_ */
	void ~CThreadFastSemaphore(class CThreadFastSemaphore *); /* linkage=_ZN20CThreadFastSemaphoreD4Ev */
} __attribute__((__aligned__(8)));

// <001B16A0> ../public/tier0/threadtools.h:1477
// member functions: 18
// member variables: 2
// class size: 136
class CThreadFastSemaphore {
	/* ../public/tier0/threadtools.h:1479 */
	enum {
		SPIN_COUNT = 10,
	};
	/* ../public/tier0/threadtools.h:1484 */
	void CThreadFastSemaphore(CThreadFastSemaphore* );
	/* ../public/tier0/threadtools.h:1486 */
	void Release(CThreadFastSemaphore* , int32);
	/* ../public/tier0/threadtools.h:1497 */
	bool TryWait(CThreadFastSemaphore* );
	/* ../public/tier0/threadtools.h:1515 */
	void Wait(CThreadFastSemaphore* );
	/* ../public/tier0/threadtools.h:1539 */
	void CThreadFastSemaphore(CThreadFastSemaphore* , const CThreadFastSemaphore& );
	/* ../public/tier0/threadtools.h:1540 */
	void CThreadFastSemaphore(CThreadFastSemaphore* , CThreadFastSemaphore& );
	/* ../public/tier0/threadtools.h:1541 */
	void operator=(CThreadFastSemaphore* , const CThreadFastSemaphore& );
	/* ../public/tier0/threadtools.h:1542 */
	void operator=(CThreadFastSemaphore* , CThreadFastSemaphore& );
private:
	atomic<int> m_counter __attribute__((__aligned__(4))); /* 0 4 */
	CThreadSemaphore m_sema; /* 8 0 */
	void ~CThreadFastSemaphore(CThreadFastSemaphore* );
	void CThreadFastSemaphore(class CThreadFastSemaphore *); /* linkage=_ZN20CThreadFastSemaphoreC4Ev */
	void Release(class CThreadFastSemaphore *, int32); /* linkage=_ZN20CThreadFastSemaphore7ReleaseEi */
	bool TryWait(class CThreadFastSemaphore *); /* linkage=_ZN20CThreadFastSemaphore7TryWaitEv */
	void Wait(class CThreadFastSemaphore *); /* linkage=_ZN20CThreadFastSemaphore4WaitEv */
	void CThreadFastSemaphore(class CThreadFastSemaphore *, const class CThreadFastSemaphore  &); /* linkage=_ZN20CThreadFastSemaphoreC4ERKS_ */
	void CThreadFastSemaphore(class CThreadFastSemaphore *, class CThreadFastSemaphore &); /* linkage=_ZN20CThreadFastSemaphoreC4EOS_ */
	void operator=(class CThreadFastSemaphore *, const class CThreadFastSemaphore  &); /* linkage=_ZN20CThreadFastSemaphoreaSERKS_ */
	void operator=(class CThreadFastSemaphore *, class CThreadFastSemaphore &); /* linkage=_ZN20CThreadFastSemaphoreaSEOS_ */
	void ~CThreadFastSemaphore(class CThreadFastSemaphore *); /* linkage=_ZN20CThreadFastSemaphoreD4Ev */
} __attribute__((__aligned__(8)));

// <02168621> ../public/tier0/threadtools.h:1484
void CThreadFastSemaphore::CThreadFastSemaphore()
{
} /* size: 0 */

// <02168608> ../public/tier0/threadtools.h:1484
inline void CThreadFastSemaphore::CThreadFastSemaphore()
{
} /* size: 0 */

// <021685B9> ../public/tier0/threadtools.h:1486
// variables: 3
inline void CThreadFastSemaphore::Release(int32 releaseCount)
{
	int32 nPrev; // 1488
	{
		int32 nWaiters; // 1491
		int32 nWake; // 1492
	}
} /* size: 0, variables: 1 */

// <02168593> ../public/tier0/threadtools.h:1497
// variable: 1
inline void CThreadFastSemaphore::TryWait()
{
	int32 nCount; // 1500
} /* size: 0, variables: 1 */

// <0216856C> ../public/tier0/threadtools.h:1515
// variable: 1
inline void CThreadFastSemaphore::Wait()
{
	{
		uint i; // 1518
	}
} /* size: 0 */

// <004CB0F3> ../public/tier0/threadtools.h:1555
// member functions: 20
// member variable: 1
// class size: 128
class CThreadFullMutex : public CThreadSyncObject {
public:
	/* class CThreadSyncObject <ancestor>; */ /* 0 128 */
	/* tier0/threadtools.cpp:3641 */
	void CThreadFullMutex(CThreadFullMutex* , bool, const char* , bool, bool);
	/* tier0/threadtools.cpp:3776 */
	bool Release(CThreadFullMutex* );
	/* ../public/tier0/threadtools.h:1572 */
	bool Lock(CThreadFullMutex* , const char* , int);
	/* ../public/tier0/threadtools.h:1573 */
	bool Lock(CThreadFullMutex* , const char* , int, unsigned int);
	/* ../public/tier0/threadtools.h:1574 */
	void Unlock(CThreadFullMutex* , const char* , int);
	/* ../public/tier0/threadtools.h:1575 */
	bool AssertOwnedByCurrentThread(const CThreadFullMutex* );
	/* ../public/tier0/threadtools.h:1576 */
	void SetTrace(CThreadFullMutex* , bool);
	/* tier0/threadtools.cpp:3799 */
	bool IsCreator(const CThreadFullMutex* );
private:
	/* ../public/tier0/threadtools.h:1586 */
	void CThreadFullMutex(CThreadFullMutex* , const CThreadFullMutex& );
	/* ../public/tier0/threadtools.h:1587 */
	CThreadFullMutex& operator=(CThreadFullMutex* , const CThreadFullMutex& );
	void CThreadFullMutex(class CThreadFullMutex *, bool, const char  *, bool, bool); /* linkage=_ZN16CThreadFullMutexC4EbPKcbb */
	bool Release(class CThreadFullMutex *); /* linkage=_ZN16CThreadFullMutex7ReleaseEv */
	bool Lock(class CThreadFullMutex *, const char  *, int); /* linkage=_ZN16CThreadFullMutex4LockEPKci */
	bool Lock(class CThreadFullMutex *, const char  *, int, unsigned int); /* linkage=_ZN16CThreadFullMutex4LockEPKcij */
	void Unlock(class CThreadFullMutex *, const char  *, int); /* linkage=_ZN16CThreadFullMutex6UnlockEPKci */
	bool AssertOwnedByCurrentThread(const class CThreadFullMutex  *); /* linkage=_ZNK16CThreadFullMutex26AssertOwnedByCurrentThreadEv */
	void SetTrace(class CThreadFullMutex *, bool); /* linkage=_ZN16CThreadFullMutex8SetTraceEb */
	bool IsCreator(const class CThreadFullMutex  *); /* linkage=_ZNK16CThreadFullMutex9IsCreatorEv */
	void CThreadFullMutex(class CThreadFullMutex *, const class CThreadFullMutex  &); /* linkage=_ZN16CThreadFullMutexC4ERKS_ */
	class CThreadFullMutex & operator=(class CThreadFullMutex *, const class CThreadFullMutex  &); /* linkage=_ZN16CThreadFullMutexaSERKS_ */
};

// <06860A72> ../public/tier0/threadtools.h:1597
void CThreadEvent::~CThreadEvent()
{
} /* size: 0 */

// <06860A55> ../public/tier0/threadtools.h:1597
inline void CThreadEvent::~CThreadEvent()
{
} /* size: 0 */

// <00012E52> ../public/tier0/threadtools.h:1597
// member functions: 20
// member variable: 1
// class size: 128
class CThreadEvent : public CThreadSyncObject {
public:
	/* class CThreadSyncObject <ancestor>; */ /* 0 0 */
	void ~CThreadEvent(CThreadEvent* );
	/* ../public/tier0/threadtools.h:1600 */
	void CThreadEvent(CThreadEvent* , bool);
	/* ../public/tier0/threadtools.h:1601 */
	void CThreadEvent(CThreadEvent* , const char* , bool, bool);
	/* ../public/tier0/threadtools.h:1613 */
	bool Set(CThreadEvent* );
	/* ../public/tier0/threadtools.h:1618 */
	bool Reset(CThreadEvent* );
	/* ../public/tier0/threadtools.h:1623 */
	bool Check(CThreadEvent* );
	/* ../public/tier0/threadtools.h:1626 */
	uint32 WaitForMultiple(int, CThreadEvent** , bool, uint32);
	/* ../public/tier0/threadtools.h:1628 */
	uint32 WaitForMultiple(int, CThreadEvent* , bool, uint32);
private:
	/* ../public/tier0/threadtools.h:1632 */
	void CThreadEvent(CThreadEvent* , const CThreadEvent& );
	/* ../public/tier0/threadtools.h:1633 */
	CThreadEvent& operator=(CThreadEvent* , const CThreadEvent& );
	void ~CThreadEvent(class CThreadEvent *); /* linkage=_ZN12CThreadEventD4Ev */
	void CThreadEvent(class CThreadEvent *, bool); /* linkage=_ZN12CThreadEventC4Eb */
	void CThreadEvent(class CThreadEvent *, const char  *, bool, bool); /* linkage=_ZN12CThreadEventC4EPKcbb */
	bool Set(class CThreadEvent *); /* linkage=_ZN12CThreadEvent3SetEv */
	bool Reset(class CThreadEvent *); /* linkage=_ZN12CThreadEvent5ResetEv */
	bool Check(class CThreadEvent *); /* linkage=_ZN12CThreadEvent5CheckEv */
	uint32 WaitForMultiple(int, class CThreadEvent * *, bool, uint32); /* linkage=_ZN12CThreadEvent15WaitForMultipleEiPPS_bj */
	uint32 WaitForMultiple(int, class CThreadEvent *, bool, uint32); /* linkage=_ZN12CThreadEvent15WaitForMultipleEiPS_bj */
	void CThreadEvent(class CThreadEvent *, const class CThreadEvent  &); /* linkage=_ZN12CThreadEventC4ERKS_ */
	class CThreadEvent & operator=(class CThreadEvent *, const class CThreadEvent  &); /* linkage=_ZN12CThreadEventaSERKS_ */
};

// <0685AE98> ../public/tier0/threadtools.h:1600
void CThreadEvent::CThreadEvent(bool fManualReset)
{
} /* size: 0 */

// <004E3609> ../public/tier0/threadtools.h:1637
void CThreadManualEvent::~CThreadManualEvent()
{
} /* size: 0 */

// <004E35EC> ../public/tier0/threadtools.h:1637
inline void CThreadManualEvent::~CThreadManualEvent()
{
} /* size: 0 */

// <0001D673> ../public/tier0/threadtools.h:1637
// member functions: 8
// member variable: 1
// class size: 128
class CThreadManualEvent : public CThreadEvent {
public:
	/* class CThreadEvent <ancestor>; */ /* 0 128 */
	void CThreadManualEvent(CThreadManualEvent* , CThreadManualEvent& );
	void CThreadManualEvent(CThreadManualEvent* , const CThreadManualEvent& );
	void ~CThreadManualEvent(CThreadManualEvent* );
	/* ../public/tier0/threadtools.h:1640 */
	void CThreadManualEvent(CThreadManualEvent* );
	void CThreadManualEvent(class CThreadManualEvent *, class CThreadManualEvent &); /* linkage=_ZN18CThreadManualEventC4EOS_ */
	void CThreadManualEvent(class CThreadManualEvent *, const class CThreadManualEvent  &); /* linkage=_ZN18CThreadManualEventC4ERKS_ */
	void ~CThreadManualEvent(class CThreadManualEvent *); /* linkage=_ZN18CThreadManualEventD4Ev */
	void CThreadManualEvent(class CThreadManualEvent *); /* linkage=_ZN18CThreadManualEventC4Ev */
};

// <004E39A1> ../public/tier0/threadtools.h:1640
void CThreadManualEvent::CThreadManualEvent()
{
} /* size: 0 */

// <004E3988> ../public/tier0/threadtools.h:1640
inline void CThreadManualEvent::CThreadManualEvent()
{
} /* size: 0 */

// <0006E53E> ../public/tier0/threadtools.h:1686
// member variable: 1
// struct size: 4
struct ThreadMultiWaitExtra_t {
	uint32 nFlags; /* 0 4 */
};

// <004C2236> ../public/tier0/threadtools.h:1686
// member variable: 1
// struct size: 4
struct ThreadMultiWaitExtra_t {
	/* ../public/tier0/threadtools.h:1689 */
	enum {
		k_ESemaphore = 1,
		k_EAutoResetEvent = 2,
		k_EManualResetEvent = 4,
		k_ETypeBits = 7,
		k_ESignalledHint = 8,
	};
	uint32 nFlags; /* 0 4 */
};

// <001C77B0> ../public/tier0/threadtools.h:1732
ThreadMultiWaitObjectSet_t* ThreadMultiWaitObjectSetCreate(const ThreadMultiWaitItem_t *, const ThreadMultiWaitExtra_t *, int)
{
} /* size: 0 */

// <001C7797> ../public/tier0/threadtools.h:1737
int ThreadMultiWaitObjectSetGetCount(ThreadMultiWaitObjectSet_t *)
{
} /* size: 0 */

// <0006E55D> ../public/tier0/threadtools.h:1767
// member functions: 16
// member variables: 2
// class size: 8
class CThreadMultiWaitObject {
	/* ../public/tier0/threadtools.h:1770 */
	void CThreadMultiWaitObject(CThreadMultiWaitObject* );
	/* ../public/tier0/threadtools.h:1771 */
	void ~CThreadMultiWaitObject(CThreadMultiWaitObject* );
	/* ../public/tier0/threadtools.h:1776 */
	bool Wait(CThreadMultiWaitObject* , uint32);
	/* ../public/tier0/threadtools.h:1785 */
	bool Check(CThreadMultiWaitObject* );
	/* ../public/tier0/threadtools.h:1791 */
	void Signal(CThreadMultiWaitObject* );
	/* ../public/tier0/threadtools.h:1796 */
	void GetWaitItem(const CThreadMultiWaitObject* , ThreadMultiWaitItem_t* , ThreadMultiWaitExtra_t* );
	/* ../public/tier0/threadtools.h:1821 */
	uint32 GetExtraFlags(const CThreadMultiWaitObject* );
	/* ../public/tier0/threadtools.h:1825 */
	uint32 GetObjectTypeBits(const CThreadMultiWaitObject* );
protected:
	int m_hEventFd; /* 0 4 */
	uint32 m_nExtraFlags; /* 4 4 */
	void CThreadMultiWaitObject(class CThreadMultiWaitObject *); /* linkage=_ZN22CThreadMultiWaitObjectC4Ev */
	void ~CThreadMultiWaitObject(class CThreadMultiWaitObject *); /* linkage=_ZN22CThreadMultiWaitObjectD4Ev */
	bool Wait(class CThreadMultiWaitObject *, uint32); /* linkage=_ZN22CThreadMultiWaitObject4WaitEj */
	bool Check(class CThreadMultiWaitObject *); /* linkage=_ZN22CThreadMultiWaitObject5CheckEv */
	void Signal(class CThreadMultiWaitObject *); /* linkage=_ZN22CThreadMultiWaitObject6SignalEv */
	void GetWaitItem(const class CThreadMultiWaitObject  *, ThreadMultiWaitItem_t *, class ThreadMultiWaitExtra_t *); /* linkage=_ZNK22CThreadMultiWaitObject11GetWaitItemEP6pollfdP22ThreadMultiWaitExtra_t */
	uint32 GetExtraFlags(const class CThreadMultiWaitObject  *); /* linkage=_ZNK22CThreadMultiWaitObject13GetExtraFlagsEv */
	uint32 GetObjectTypeBits(const class CThreadMultiWaitObject  *); /* linkage=_ZNK22CThreadMultiWaitObject17GetObjectTypeBitsEv */
};

// <0450061C> ../public/tier0/threadtools.h:1776
// variables: 3
inline void CThreadMultiWaitObject::Wait(uint32 nMillis)
{
	ThreadMultiWaitItem_t item; // 1778
	ThreadMultiWaitExtra_t extra; // 1779
	uint64 nSignalled; // 1780
} /* size: 0, variables: 3 */

// <04463512> ../public/tier0/threadtools.h:1785
inline void CThreadMultiWaitObject::Check()
{
} /* size: 0 */

// <045005E9> ../public/tier0/threadtools.h:1796
inline void CThreadMultiWaitObject::GetWaitItem(ThreadMultiWaitItem_t* pItem, ThreadMultiWaitExtra_t* pExtra)
{
} /* size: 0 */

// <004E393C> ../public/tier0/threadtools.h:1825
inline void CThreadMultiWaitObject::GetObjectTypeBits()
{
} /* size: 0 */

// <04462D3E> ../public/tier0/threadtools.h:1914
int ThreadMultiWait(ThreadMultiWaitObjectSet_t *, ThreadMultiWaitItem_t *, ThreadMultiWaitExtra_t *, int, uint32, uint64 *, uint32)
{
} /* size: 0 */

// <004C23F0> ../public/tier0/threadtools.h:1923
// member functions: 6
// member variable: 1
// class size: 8
class CThreadMultiWaitSemaphore : public CThreadMultiWaitObject {
public:
	/* class CThreadMultiWaitObject <ancestor>; */ /* 0 8 */
	/* ../public/tier0/threadtools.h:1927 */
	void CThreadMultiWaitSemaphore(CThreadMultiWaitSemaphore* );
	/* ../public/tier0/threadtools.h:1928 */
	void ~CThreadMultiWaitSemaphore(CThreadMultiWaitSemaphore* );
	/* ../public/tier0/threadtools.h:1932 */
	void Release(CThreadMultiWaitSemaphore* );
	void CThreadMultiWaitSemaphore(class CThreadMultiWaitSemaphore *); /* linkage=_ZN25CThreadMultiWaitSemaphoreC4Ev */
	void ~CThreadMultiWaitSemaphore(class CThreadMultiWaitSemaphore *); /* linkage=_ZN25CThreadMultiWaitSemaphoreD4Ev */
	void Release(class CThreadMultiWaitSemaphore *); /* linkage=_ZN25CThreadMultiWaitSemaphore7ReleaseEv */
};

// <0006E6BA> ../public/tier0/threadtools.h:1943
// member functions: 8
// member variable: 1
// class size: 8
class CThreadMultiWaitEvent : public CThreadMultiWaitObject {
public:
	/* class CThreadMultiWaitObject <ancestor>; */ /* 0 8 */
	/* ../public/tier0/threadtools.h:1947 */
	void CThreadMultiWaitEvent(CThreadMultiWaitEvent* , bool);
	/* ../public/tier0/threadtools.h:1948 */
	void ~CThreadMultiWaitEvent(CThreadMultiWaitEvent* );
	/* ../public/tier0/threadtools.h:1951 */
	void Set(CThreadMultiWaitEvent* );
	/* ../public/tier0/threadtools.h:1952 */
	void Reset(CThreadMultiWaitEvent* );
	void CThreadMultiWaitEvent(class CThreadMultiWaitEvent *, bool); /* linkage=_ZN21CThreadMultiWaitEventC4Eb */
	void ~CThreadMultiWaitEvent(class CThreadMultiWaitEvent *); /* linkage=_ZN21CThreadMultiWaitEventD4Ev */
	void Set(class CThreadMultiWaitEvent *); /* linkage=_ZN21CThreadMultiWaitEvent3SetEv */
	void Reset(class CThreadMultiWaitEvent *); /* linkage=_ZN21CThreadMultiWaitEvent5ResetEv */
};

// <062848DA> ../public/tier0/threadtools.h:1947
void CThreadMultiWaitEvent::CThreadMultiWaitEvent(bool bManualReset)
{
} /* size: 0 */

// <062848BE> ../public/tier0/threadtools.h:1948
void CThreadMultiWaitEvent::~CThreadMultiWaitEvent()
{
} /* size: 0 */

// <001DC8C3> ../public/tier0/threadtools.h:1960
void CThreadMultiWaitManualEvent::~CThreadMultiWaitManualEvent()
{
} /* size: 0 */

// <001DC8A6> ../public/tier0/threadtools.h:1960
inline void CThreadMultiWaitManualEvent::~CThreadMultiWaitManualEvent()
{
} /* size: 0 */

// <001B1B18> ../public/tier0/threadtools.h:1960
// member functions: 4
// member variable: 1
// class size: 8
class CThreadMultiWaitManualEvent : public CThreadMultiWaitEvent {
public:
	/* class CThreadMultiWaitEvent <ancestor>; */ /* 0 8 */
	/* ../public/tier0/threadtools.h:1963 */
	void CThreadMultiWaitManualEvent(CThreadMultiWaitManualEvent* );
	void ~CThreadMultiWaitManualEvent(CThreadMultiWaitManualEvent* );
	void CThreadMultiWaitManualEvent(class CThreadMultiWaitManualEvent *); /* linkage=_ZN27CThreadMultiWaitManualEventC4Ev */
	void ~CThreadMultiWaitManualEvent(class CThreadMultiWaitManualEvent *); /* linkage=_ZN27CThreadMultiWaitManualEventD4Ev */
};

// <001DF033> ../public/tier0/threadtools.h:1963
void CThreadMultiWaitManualEvent::CThreadMultiWaitManualEvent()
{
} /* size: 0 */

// <001DF01A> ../public/tier0/threadtools.h:1963
inline void CThreadMultiWaitManualEvent::CThreadMultiWaitManualEvent()
{
} /* size: 0 */

// <0451E525> ../public/tier0/threadtools.h:2084
void CThreadRWLock::~CThreadRWLock()
{
} /* size: 0 */

// <0451E508> ../public/tier0/threadtools.h:2084
inline void CThreadRWLock::~CThreadRWLock()
{
} /* size: 0 */

// <000F17ED> ../public/tier0/threadtools.h:2084
// function calls: 3
void CThreadRWLock::~CThreadRWLock()
{
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadMutex::~CThreadMutex(); // 2084
} /* size: 65, inline expansions: 3 (47 bytes) */

// <000129EE> ../public/tier0/threadtools.h:2084
// member functions: 49
// member variables: 6
// class size: 344
class CThreadRWLock {
	/* ../public/tier0/threadtools.h:2087 */
	void CThreadRWLock(CThreadRWLock* , const char* );
	/* ../public/tier0/threadtools.h:2089 */
	bool TryLockForRead(CThreadRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2090 */
	void LockForRead(CThreadRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2091 */
	void UnlockRead(CThreadRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2092 */
	bool TryLockForWrite(CThreadRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2093 */
	void LockForWrite(CThreadRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2094 */
	void UnlockWrite(CThreadRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2097 */
	RWLockTranstionResult_t UnlockRead_LockForWrite(CThreadRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2098 */
	RWLockTranstionResult_t UnlockWrite_LockForRead(CThreadRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2100 */
	bool TryLockForRead(const CThreadRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2101 */
	void LockForRead(const CThreadRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2102 */
	void UnlockRead(const CThreadRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2103 */
	bool TryLockForWrite(const CThreadRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2104 */
	void LockForWrite(const CThreadRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2105 */
	void UnlockWrite(const CThreadRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2106 */
	RWLockTranstionResult_t UnlockRead_LockForWrite(const CThreadRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2107 */
	RWLockTranstionResult_t UnlockWrite_LockForRead(const CThreadRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2110 */
	bool TryLock(CThreadRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2110 */
	void Lock(CThreadRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2110 */
	void Unlock(CThreadRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2135 */
	bool IsLockedForWrite(const CThreadRWLock* );
private:
	/* ../public/tier0/threadtools.h:2139 */
	void CThreadRWLock(CThreadRWLock* , const CThreadRWLock& );
	/* ../public/tier0/threadtools.h:2140 */
	CThreadRWLock& operator=(CThreadRWLock* , const CThreadRWLock& );
	/* ../public/tier0/threadtools.h:2142 */
	void WaitForRead(CThreadRWLock* );
	CThreadMutex m_mutex; /* 0 72 */
	CThreadEvent m_CanWrite; /* 72 128 */
	CThreadEvent m_CanRead; /* 200 128 */
	int m_nWriters; /* 328 4 */
	int m_nActiveReaders; /* 332 4 */
	int m_nPendingReaders; /* 336 4 */
	void CThreadRWLock(class CThreadRWLock *, const char  *); /* linkage=_ZN13CThreadRWLockC4EPKc */
	bool TryLockForRead(class CThreadRWLock *, const char  *, int); /* linkage=_ZN13CThreadRWLock14TryLockForReadEPKci */
	void LockForRead(class CThreadRWLock *, const char  *, int); /* linkage=_ZN13CThreadRWLock11LockForReadEPKci */
	void UnlockRead(class CThreadRWLock *, const char  *, int); /* linkage=_ZN13CThreadRWLock10UnlockReadEPKci */
	bool TryLockForWrite(class CThreadRWLock *, const char  *, int); /* linkage=_ZN13CThreadRWLock15TryLockForWriteEPKci */
	void LockForWrite(class CThreadRWLock *, const char  *, int); /* linkage=_ZN13CThreadRWLock12LockForWriteEPKci */
	void UnlockWrite(class CThreadRWLock *, const char  *, int); /* linkage=_ZN13CThreadRWLock11UnlockWriteEPKci */
	enum RWLockTranstionResult_t UnlockRead_LockForWrite(class CThreadRWLock *, const char  *, int); /* linkage=_ZN13CThreadRWLock23UnlockRead_LockForWriteEPKci */
	enum RWLockTranstionResult_t UnlockWrite_LockForRead(class CThreadRWLock *, const char  *, int); /* linkage=_ZN13CThreadRWLock23UnlockWrite_LockForReadEPKci */
	bool TryLockForRead(const class CThreadRWLock  *, const char  *, int); /* linkage=_ZNK13CThreadRWLock14TryLockForReadEPKci */
	void LockForRead(const class CThreadRWLock  *, const char  *, int); /* linkage=_ZNK13CThreadRWLock11LockForReadEPKci */
	void UnlockRead(const class CThreadRWLock  *, const char  *, int); /* linkage=_ZNK13CThreadRWLock10UnlockReadEPKci */
	bool TryLockForWrite(const class CThreadRWLock  *, const char  *, int); /* linkage=_ZNK13CThreadRWLock15TryLockForWriteEPKci */
	void LockForWrite(const class CThreadRWLock  *, const char  *, int); /* linkage=_ZNK13CThreadRWLock12LockForWriteEPKci */
	void UnlockWrite(const class CThreadRWLock  *, const char  *, int); /* linkage=_ZNK13CThreadRWLock11UnlockWriteEPKci */
	enum RWLockTranstionResult_t UnlockRead_LockForWrite(const class CThreadRWLock  *, const char  *, int); /* linkage=_ZNK13CThreadRWLock23UnlockRead_LockForWriteEPKci */
	enum RWLockTranstionResult_t UnlockWrite_LockForRead(const class CThreadRWLock  *, const char  *, int); /* linkage=_ZNK13CThreadRWLock23UnlockWrite_LockForReadEPKci */
	bool TryLock(class CThreadRWLock *, const char  *, int); /* linkage=_ZN13CThreadRWLock7TryLockEPKci */
	void Lock(class CThreadRWLock *, const char  *, int); /* linkage=_ZN13CThreadRWLock4LockEPKci */
	void Unlock(class CThreadRWLock *, const char  *, int); /* linkage=_ZN13CThreadRWLock6UnlockEPKci */
	bool IsLockedForWrite(const class CThreadRWLock  *); /* linkage=_ZNK13CThreadRWLock16IsLockedForWriteEv */
	void CThreadRWLock(class CThreadRWLock *, const class CThreadRWLock  &); /* linkage=_ZN13CThreadRWLockC4ERKS_ */
	class CThreadRWLock & operator=(class CThreadRWLock *, const class CThreadRWLock  &); /* linkage=_ZN13CThreadRWLockaSERKS_ */
	void WaitForRead(class CThreadRWLock *); /* linkage=_ZN13CThreadRWLock11WaitForReadEv */
	void ~CThreadRWLock(class CThreadRWLock *); /* linkage=_ZN13CThreadRWLockD4Ev */
};

// <008F948F> ../public/tier0/threadtools.h:2084
// member functions: 50
// member variables: 6
// class size: 344
class CThreadRWLock {
	/* ../public/tier0/threadtools.h:2087 */
	void CThreadRWLock(CThreadRWLock* , const char* );
	/* ../public/tier0/threadtools.h:2089 */
	bool TryLockForRead(CThreadRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2090 */
	void LockForRead(CThreadRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2091 */
	void UnlockRead(CThreadRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2092 */
	bool TryLockForWrite(CThreadRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2093 */
	void LockForWrite(CThreadRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2094 */
	void UnlockWrite(CThreadRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2097 */
	RWLockTranstionResult_t UnlockRead_LockForWrite(CThreadRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2098 */
	RWLockTranstionResult_t UnlockWrite_LockForRead(CThreadRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2100 */
	bool TryLockForRead(const CThreadRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2101 */
	void LockForRead(const CThreadRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2102 */
	void UnlockRead(const CThreadRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2103 */
	bool TryLockForWrite(const CThreadRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2104 */
	void LockForWrite(const CThreadRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2105 */
	void UnlockWrite(const CThreadRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2106 */
	RWLockTranstionResult_t UnlockRead_LockForWrite(const CThreadRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2107 */
	RWLockTranstionResult_t UnlockWrite_LockForRead(const CThreadRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2110 */
	bool TryLock(CThreadRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2110 */
	void Lock(CThreadRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2110 */
	void Unlock(CThreadRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2135 */
	bool IsLockedForWrite(const CThreadRWLock* );
private:
	/* ../public/tier0/threadtools.h:2139 */
	void CThreadRWLock(CThreadRWLock* , const CThreadRWLock& );
	/* ../public/tier0/threadtools.h:2140 */
	CThreadRWLock& operator=(CThreadRWLock* , const CThreadRWLock& );
	/* ../public/tier0/threadtools.h:2142 */
	void WaitForRead(CThreadRWLock* );
	CThreadMutex m_mutex; /* 0 72 */
	CThreadEvent m_CanWrite; /* 72 128 */
	CThreadEvent m_CanRead; /* 200 128 */
	int m_nWriters; /* 328 4 */
	int m_nActiveReaders; /* 332 4 */
	int m_nPendingReaders; /* 336 4 */
	void ~CThreadRWLock(CThreadRWLock* );
	void CThreadRWLock(class CThreadRWLock *, const char  *); /* linkage=_ZN13CThreadRWLockC4EPKc */
	bool TryLockForRead(class CThreadRWLock *, const char  *, int); /* linkage=_ZN13CThreadRWLock14TryLockForReadEPKci */
	void LockForRead(class CThreadRWLock *, const char  *, int); /* linkage=_ZN13CThreadRWLock11LockForReadEPKci */
	void UnlockRead(class CThreadRWLock *, const char  *, int); /* linkage=_ZN13CThreadRWLock10UnlockReadEPKci */
	bool TryLockForWrite(class CThreadRWLock *, const char  *, int); /* linkage=_ZN13CThreadRWLock15TryLockForWriteEPKci */
	void LockForWrite(class CThreadRWLock *, const char  *, int); /* linkage=_ZN13CThreadRWLock12LockForWriteEPKci */
	void UnlockWrite(class CThreadRWLock *, const char  *, int); /* linkage=_ZN13CThreadRWLock11UnlockWriteEPKci */
	enum RWLockTranstionResult_t UnlockRead_LockForWrite(class CThreadRWLock *, const char  *, int); /* linkage=_ZN13CThreadRWLock23UnlockRead_LockForWriteEPKci */
	enum RWLockTranstionResult_t UnlockWrite_LockForRead(class CThreadRWLock *, const char  *, int); /* linkage=_ZN13CThreadRWLock23UnlockWrite_LockForReadEPKci */
	bool TryLockForRead(const class CThreadRWLock  *, const char  *, int); /* linkage=_ZNK13CThreadRWLock14TryLockForReadEPKci */
	void LockForRead(const class CThreadRWLock  *, const char  *, int); /* linkage=_ZNK13CThreadRWLock11LockForReadEPKci */
	void UnlockRead(const class CThreadRWLock  *, const char  *, int); /* linkage=_ZNK13CThreadRWLock10UnlockReadEPKci */
	bool TryLockForWrite(const class CThreadRWLock  *, const char  *, int); /* linkage=_ZNK13CThreadRWLock15TryLockForWriteEPKci */
	void LockForWrite(const class CThreadRWLock  *, const char  *, int); /* linkage=_ZNK13CThreadRWLock12LockForWriteEPKci */
	void UnlockWrite(const class CThreadRWLock  *, const char  *, int); /* linkage=_ZNK13CThreadRWLock11UnlockWriteEPKci */
	enum RWLockTranstionResult_t UnlockRead_LockForWrite(const class CThreadRWLock  *, const char  *, int); /* linkage=_ZNK13CThreadRWLock23UnlockRead_LockForWriteEPKci */
	enum RWLockTranstionResult_t UnlockWrite_LockForRead(const class CThreadRWLock  *, const char  *, int); /* linkage=_ZNK13CThreadRWLock23UnlockWrite_LockForReadEPKci */
	bool TryLock(class CThreadRWLock *, const char  *, int); /* linkage=_ZN13CThreadRWLock7TryLockEPKci */
	void Lock(class CThreadRWLock *, const char  *, int); /* linkage=_ZN13CThreadRWLock4LockEPKci */
	void Unlock(class CThreadRWLock *, const char  *, int); /* linkage=_ZN13CThreadRWLock6UnlockEPKci */
	bool IsLockedForWrite(const class CThreadRWLock  *); /* linkage=_ZNK13CThreadRWLock16IsLockedForWriteEv */
	void CThreadRWLock(class CThreadRWLock *, const class CThreadRWLock  &); /* linkage=_ZN13CThreadRWLockC4ERKS_ */
	class CThreadRWLock & operator=(class CThreadRWLock *, const class CThreadRWLock  &); /* linkage=_ZN13CThreadRWLockaSERKS_ */
	void WaitForRead(class CThreadRWLock *); /* linkage=_ZN13CThreadRWLock11WaitForReadEv */
	void ~CThreadRWLock(class CThreadRWLock *); /* linkage=_ZN13CThreadRWLockD4Ev */
};

// <03075C0B> ../public/tier0/threadtools.h:2110
inline void CThreadRWLock::Lock(const char* pFileName, int nLineNumber)
{
} /* size: 0 */

// <03075BD8> ../public/tier0/threadtools.h:2110
inline void CThreadRWLock::Unlock(const char* pFileName, int nLineNumber)
{
} /* size: 0 */

// <0572CE8B> ../public/tier0/threadtools.h:2177
// function calls: 2
void CThreadRWLock_FastRead::~CThreadRWLock_FastRead()
{
	CThreadEvent::~CThreadEvent(); // 2177
	CThreadEvent::~CThreadEvent(); // 2177
} /* size: 72, inline expansions: 2 (45 bytes) */

// <0572CE6E> ../public/tier0/threadtools.h:2177
inline void CThreadRWLock_FastRead::~CThreadRWLock_FastRead()
{
} /* size: 0 */

// <00CE9841> ../public/tier0/threadtools.h:2177
void CThreadRWLock_FastRead::~CThreadRWLock_FastRead()
{
} /* size: 0 */

// <0006E909> ../public/tier0/threadtools.h:2177
// member functions: 49
// member variables: 7
// class size: 408
class CThreadRWLock_FastRead {
	/* ../public/tier0/threadtools.h:2183 */
	void CThreadRWLock_FastRead(CThreadRWLock_FastRead* , bool);
	/* ../public/tier0/threadtools.h:2185 */
	bool TryLockForRead(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2186 */
	void LockForRead(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2187 */
	void UnlockRead(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2189 */
	bool TryLockForWrite(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2190 */
	void LockForWrite(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2191 */
	void UnlockWrite(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2194 */
	RWLockTranstionResult_t UnlockRead_LockForWrite(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2195 */
	RWLockTranstionResult_t UnlockWrite_LockForRead(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2199 */
	bool IsLockedForWrite(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2200 */
	ThreadId_t GetWriteLockThreadID(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2201 */
	bool OwnedByCurrentThread(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2202 */
	bool AssertOwnedByCurrentThread(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2203 */
	int GetDepth(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2206 */
	uint32 GetActiveAndWaitingLocksForRead(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2208 */
	uint32 GetActiveAndWaitingLocksForWrite(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2211 */
	bool TryLock(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2211 */
	void Lock(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2211 */
	void Unlock(CThreadRWLock_FastRead* , const char* , int);
protected:
	/* ../public/tier0/threadtools.h:2214 */
	void HandleFirstWriteLockTransition(CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2215 */
	bool EncounteredComplexReadLockOperation(CThreadRWLock_FastRead* , uint32, bool, const char* , int);
	/* ../public/tier0/threadtools.h:2216 */
	void UnlockReadAccounting(CThreadRWLock_FastRead* , const char* , int, uint32);
	CInterlockedUInt m_Interlock __attribute__((__aligned__(4))); /* 0 4 */
	CInterlockedInt m_ReadlockAccounting __attribute__((__aligned__(4))); /* 4 4 */
	CThreadSemaphore m_WriteLockQueue; /* 8 0 */
	CThreadEvent m_WriteLockUnblocked; /* 136 128 */
	CThreadEvent m_ReadLockUnblocked; /* 264 128 */
	ThreadId_t m_WritingThreadID; /* 392 8 */
	int m_nWritingThreadLockCount; /* 400 4 */
private:
	/* ../public/tier0/threadtools.h:2262 */
	void CThreadRWLock_FastRead(CThreadRWLock_FastRead* , const CThreadRWLock_FastRead& );
	/* ../public/tier0/threadtools.h:2263 */
	CThreadRWLock_FastRead& operator=(CThreadRWLock_FastRead* , const CThreadRWLock_FastRead& );
	void CThreadRWLock_FastRead(class CThreadRWLock_FastRead *, bool); /* linkage=_ZN22CThreadRWLock_FastReadC4Eb */
	bool TryLockForRead(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead14TryLockForReadEPKci */
	void LockForRead(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead11LockForReadEPKci */
	void UnlockRead(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead10UnlockReadEPKci */
	bool TryLockForWrite(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead15TryLockForWriteEPKci */
	void LockForWrite(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead12LockForWriteEPKci */
	/* <4e5562> tier0/threadtools.cpp:5486 */
	void UnlockWrite(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead11UnlockWriteEPKci */
	enum RWLockTranstionResult_t UnlockRead_LockForWrite(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead23UnlockRead_LockForWriteEPKci */
	enum RWLockTranstionResult_t UnlockWrite_LockForRead(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead23UnlockWrite_LockForReadEPKci */
	bool IsLockedForWrite(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead16IsLockedForWriteEv */
	ThreadId_t GetWriteLockThreadID(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead20GetWriteLockThreadIDEv */
	bool OwnedByCurrentThread(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead20OwnedByCurrentThreadEv */
	bool AssertOwnedByCurrentThread(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead26AssertOwnedByCurrentThreadEv */
	int GetDepth(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead8GetDepthEv */
	uint32 GetActiveAndWaitingLocksForRead(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead31GetActiveAndWaitingLocksForReadEv */
	uint32 GetActiveAndWaitingLocksForWrite(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead32GetActiveAndWaitingLocksForWriteEv */
	bool TryLock(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead7TryLockEPKci */
	void Lock(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead4LockEPKci */
	void Unlock(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead6UnlockEPKci */
	void HandleFirstWriteLockTransition(class CThreadRWLock_FastRead *); /* linkage=_ZN22CThreadRWLock_FastRead30HandleFirstWriteLockTransitionEv */
	bool EncounteredComplexReadLockOperation(class CThreadRWLock_FastRead *, uint32, bool, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead35EncounteredComplexReadLockOperationEjbPKci */
	void UnlockReadAccounting(class CThreadRWLock_FastRead *, const char  *, int, uint32); /* linkage=_ZN22CThreadRWLock_FastRead20UnlockReadAccountingEPKcij */
	void CThreadRWLock_FastRead(class CThreadRWLock_FastRead *, const class CThreadRWLock_FastRead  &); /* linkage=_ZN22CThreadRWLock_FastReadC4ERKS_ */
	class CThreadRWLock_FastRead & operator=(class CThreadRWLock_FastRead *, const class CThreadRWLock_FastRead  &); /* linkage=_ZN22CThreadRWLock_FastReadaSERKS_ */
	void ~CThreadRWLock_FastRead(class CThreadRWLock_FastRead *); /* linkage=_ZN22CThreadRWLock_FastReadD4Ev */
} __attribute__((__aligned__(8)));

// <0571E45E> ../public/tier0/threadtools.h:2177
// member functions: 50
// member variables: 7
// class size: 408
class CThreadRWLock_FastRead {
	/* ../public/tier0/threadtools.h:2232 */
	enum InterlockBits_t {
		READ_LOCK_OFFSET = 0,
		READ_LOCK_INCREMENT = 1,
		READ_LOCK_MASK = 1023,
		WAITING_READ_LOCK_OFFSET = 10,
		WAITING_READ_LOCK_INCREMENT = 1024,
		WAITING_READ_LOCK_MASK = 1047552,
		WRITE_LOCK_OFFSET = 20,
		WRITE_LOCK_INCREMENT = 1048576,
		WRITE_LOCK_MASK = 2146435072,
		BLOCK_NEW_READS_BIT = 1073741824,
		READ_LOCK_ACCOUNTING_BIT = 2147483648,
	};
	/* ../public/tier0/threadtools.h:2252 */
	enum AccountingBitFlags_t {
		BUFFER_BITS_MASK = 1046528,
		WRITE_LOCKS_DO_NOT_IMMEDIATELY_BLOCK_READS = 1048576,
	};
	/* ../public/tier0/threadtools.h:2183 */
	void CThreadRWLock_FastRead(CThreadRWLock_FastRead* , bool);
	/* ../public/tier0/threadtools.h:2185 */
	bool TryLockForRead(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2186 */
	void LockForRead(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2187 */
	void UnlockRead(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2189 */
	bool TryLockForWrite(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2190 */
	void LockForWrite(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2191 */
	void UnlockWrite(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2194 */
	RWLockTranstionResult_t UnlockRead_LockForWrite(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2195 */
	RWLockTranstionResult_t UnlockWrite_LockForRead(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2199 */
	bool IsLockedForWrite(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2200 */
	ThreadId_t GetWriteLockThreadID(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2201 */
	bool OwnedByCurrentThread(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2202 */
	bool AssertOwnedByCurrentThread(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2203 */
	int GetDepth(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2206 */
	uint32 GetActiveAndWaitingLocksForRead(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2208 */
	uint32 GetActiveAndWaitingLocksForWrite(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2211 */
	bool TryLock(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2211 */
	void Lock(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2211 */
	void Unlock(CThreadRWLock_FastRead* , const char* , int);
protected:
	/* ../public/tier0/threadtools.h:2214 */
	void HandleFirstWriteLockTransition(CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2215 */
	bool EncounteredComplexReadLockOperation(CThreadRWLock_FastRead* , uint32, bool, const char* , int);
	/* ../public/tier0/threadtools.h:2216 */
	void UnlockReadAccounting(CThreadRWLock_FastRead* , const char* , int, uint32);
	CInterlockedUInt m_Interlock __attribute__((__aligned__(4))); /* 0 4 */
	CInterlockedInt m_ReadlockAccounting __attribute__((__aligned__(4))); /* 4 4 */
	CThreadSemaphore m_WriteLockQueue; /* 8 0 */
	CThreadEvent m_WriteLockUnblocked; /* 136 128 */
	CThreadEvent m_ReadLockUnblocked; /* 264 128 */
	ThreadId_t m_WritingThreadID; /* 392 8 */
	int m_nWritingThreadLockCount; /* 400 4 */
private:
	/* ../public/tier0/threadtools.h:2262 */
	void CThreadRWLock_FastRead(CThreadRWLock_FastRead* , const CThreadRWLock_FastRead& );
	/* ../public/tier0/threadtools.h:2263 */
	CThreadRWLock_FastRead& operator=(CThreadRWLock_FastRead* , const CThreadRWLock_FastRead& );
	void ~CThreadRWLock_FastRead(CThreadRWLock_FastRead* );
	void CThreadRWLock_FastRead(class CThreadRWLock_FastRead *, bool); /* linkage=_ZN22CThreadRWLock_FastReadC4Eb */
	bool TryLockForRead(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead14TryLockForReadEPKci */
	void LockForRead(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead11LockForReadEPKci */
	void UnlockRead(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead10UnlockReadEPKci */
	bool TryLockForWrite(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead15TryLockForWriteEPKci */
	void LockForWrite(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead12LockForWriteEPKci */
	/* <4e5562> tier0/threadtools.cpp:5486 */
	void UnlockWrite(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead11UnlockWriteEPKci */
	enum RWLockTranstionResult_t UnlockRead_LockForWrite(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead23UnlockRead_LockForWriteEPKci */
	enum RWLockTranstionResult_t UnlockWrite_LockForRead(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead23UnlockWrite_LockForReadEPKci */
	bool IsLockedForWrite(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead16IsLockedForWriteEv */
	ThreadId_t GetWriteLockThreadID(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead20GetWriteLockThreadIDEv */
	bool OwnedByCurrentThread(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead20OwnedByCurrentThreadEv */
	bool AssertOwnedByCurrentThread(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead26AssertOwnedByCurrentThreadEv */
	int GetDepth(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead8GetDepthEv */
	uint32 GetActiveAndWaitingLocksForRead(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead31GetActiveAndWaitingLocksForReadEv */
	uint32 GetActiveAndWaitingLocksForWrite(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead32GetActiveAndWaitingLocksForWriteEv */
	bool TryLock(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead7TryLockEPKci */
	void Lock(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead4LockEPKci */
	void Unlock(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead6UnlockEPKci */
	void HandleFirstWriteLockTransition(class CThreadRWLock_FastRead *); /* linkage=_ZN22CThreadRWLock_FastRead30HandleFirstWriteLockTransitionEv */
	bool EncounteredComplexReadLockOperation(class CThreadRWLock_FastRead *, uint32, bool, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead35EncounteredComplexReadLockOperationEjbPKci */
	void UnlockReadAccounting(class CThreadRWLock_FastRead *, const char  *, int, uint32); /* linkage=_ZN22CThreadRWLock_FastRead20UnlockReadAccountingEPKcij */
	void CThreadRWLock_FastRead(class CThreadRWLock_FastRead *, const class CThreadRWLock_FastRead  &); /* linkage=_ZN22CThreadRWLock_FastReadC4ERKS_ */
	class CThreadRWLock_FastRead & operator=(class CThreadRWLock_FastRead *, const class CThreadRWLock_FastRead  &); /* linkage=_ZN22CThreadRWLock_FastReadaSERKS_ */
	void ~CThreadRWLock_FastRead(class CThreadRWLock_FastRead *); /* linkage=_ZN22CThreadRWLock_FastReadD4Ev */
} __attribute__((__aligned__(8)));

// <000AC7C5> ../public/tier0/threadtools.h:2177
// member functions: 49
// member variables: 7
// class size: 408
class CThreadRWLock_FastRead {
	/* ../public/tier0/threadtools.h:2232 */
	enum InterlockBits_t {
		READ_LOCK_OFFSET = 0,
		READ_LOCK_INCREMENT = 1,
		READ_LOCK_MASK = 1023,
		WAITING_READ_LOCK_OFFSET = 10,
		WAITING_READ_LOCK_INCREMENT = 1024,
		WAITING_READ_LOCK_MASK = 1047552,
		WRITE_LOCK_OFFSET = 20,
		WRITE_LOCK_INCREMENT = 1048576,
		WRITE_LOCK_MASK = 2146435072,
		BLOCK_NEW_READS_BIT = 1073741824,
		READ_LOCK_ACCOUNTING_BIT = 2147483648,
	};
	/* ../public/tier0/threadtools.h:2183 */
	void CThreadRWLock_FastRead(CThreadRWLock_FastRead* , bool);
	/* ../public/tier0/threadtools.h:2185 */
	bool TryLockForRead(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2186 */
	void LockForRead(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2187 */
	void UnlockRead(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2189 */
	bool TryLockForWrite(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2190 */
	void LockForWrite(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2191 */
	void UnlockWrite(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2194 */
	RWLockTranstionResult_t UnlockRead_LockForWrite(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2195 */
	RWLockTranstionResult_t UnlockWrite_LockForRead(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2199 */
	bool IsLockedForWrite(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2200 */
	ThreadId_t GetWriteLockThreadID(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2201 */
	bool OwnedByCurrentThread(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2202 */
	bool AssertOwnedByCurrentThread(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2203 */
	int GetDepth(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2206 */
	uint32 GetActiveAndWaitingLocksForRead(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2208 */
	uint32 GetActiveAndWaitingLocksForWrite(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2211 */
	bool TryLock(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2211 */
	void Lock(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2211 */
	void Unlock(CThreadRWLock_FastRead* , const char* , int);
protected:
	/* ../public/tier0/threadtools.h:2214 */
	void HandleFirstWriteLockTransition(CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2215 */
	bool EncounteredComplexReadLockOperation(CThreadRWLock_FastRead* , uint32, bool, const char* , int);
	/* ../public/tier0/threadtools.h:2216 */
	void UnlockReadAccounting(CThreadRWLock_FastRead* , const char* , int, uint32);
	CInterlockedUInt m_Interlock __attribute__((__aligned__(4))); /* 0 4 */
	CInterlockedInt m_ReadlockAccounting __attribute__((__aligned__(4))); /* 4 4 */
	CThreadSemaphore m_WriteLockQueue; /* 8 0 */
	CThreadEvent m_WriteLockUnblocked; /* 136 128 */
	CThreadEvent m_ReadLockUnblocked; /* 264 128 */
	ThreadId_t m_WritingThreadID; /* 392 8 */
	int m_nWritingThreadLockCount; /* 400 4 */
private:
	/* ../public/tier0/threadtools.h:2262 */
	void CThreadRWLock_FastRead(CThreadRWLock_FastRead* , const CThreadRWLock_FastRead& );
	/* ../public/tier0/threadtools.h:2263 */
	CThreadRWLock_FastRead& operator=(CThreadRWLock_FastRead* , const CThreadRWLock_FastRead& );
	void CThreadRWLock_FastRead(class CThreadRWLock_FastRead *, bool); /* linkage=_ZN22CThreadRWLock_FastReadC4Eb */
	bool TryLockForRead(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead14TryLockForReadEPKci */
	void LockForRead(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead11LockForReadEPKci */
	void UnlockRead(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead10UnlockReadEPKci */
	bool TryLockForWrite(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead15TryLockForWriteEPKci */
	void LockForWrite(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead12LockForWriteEPKci */
	/* <4e5562> tier0/threadtools.cpp:5486 */
	void UnlockWrite(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead11UnlockWriteEPKci */
	enum RWLockTranstionResult_t UnlockRead_LockForWrite(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead23UnlockRead_LockForWriteEPKci */
	enum RWLockTranstionResult_t UnlockWrite_LockForRead(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead23UnlockWrite_LockForReadEPKci */
	bool IsLockedForWrite(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead16IsLockedForWriteEv */
	ThreadId_t GetWriteLockThreadID(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead20GetWriteLockThreadIDEv */
	bool OwnedByCurrentThread(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead20OwnedByCurrentThreadEv */
	bool AssertOwnedByCurrentThread(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead26AssertOwnedByCurrentThreadEv */
	int GetDepth(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead8GetDepthEv */
	uint32 GetActiveAndWaitingLocksForRead(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead31GetActiveAndWaitingLocksForReadEv */
	uint32 GetActiveAndWaitingLocksForWrite(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead32GetActiveAndWaitingLocksForWriteEv */
	bool TryLock(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead7TryLockEPKci */
	void Lock(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead4LockEPKci */
	void Unlock(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead6UnlockEPKci */
	void HandleFirstWriteLockTransition(class CThreadRWLock_FastRead *); /* linkage=_ZN22CThreadRWLock_FastRead30HandleFirstWriteLockTransitionEv */
	bool EncounteredComplexReadLockOperation(class CThreadRWLock_FastRead *, uint32, bool, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead35EncounteredComplexReadLockOperationEjbPKci */
	void UnlockReadAccounting(class CThreadRWLock_FastRead *, const char  *, int, uint32); /* linkage=_ZN22CThreadRWLock_FastRead20UnlockReadAccountingEPKcij */
	void CThreadRWLock_FastRead(class CThreadRWLock_FastRead *, const class CThreadRWLock_FastRead  &); /* linkage=_ZN22CThreadRWLock_FastReadC4ERKS_ */
	class CThreadRWLock_FastRead & operator=(class CThreadRWLock_FastRead *, const class CThreadRWLock_FastRead  &); /* linkage=_ZN22CThreadRWLock_FastReadaSERKS_ */
	void ~CThreadRWLock_FastRead(class CThreadRWLock_FastRead *); /* linkage=_ZN22CThreadRWLock_FastReadD4Ev */
} __attribute__((__aligned__(8)));

// <005E6A37> ../public/tier0/threadtools.h:2177
// member functions: 50
// member variables: 7
// class size: 408
class CThreadRWLock_FastRead {
	/* ../public/tier0/threadtools.h:2232 */
	enum InterlockBits_t {
		READ_LOCK_OFFSET = 0,
		READ_LOCK_INCREMENT = 1,
		READ_LOCK_MASK = 1023,
		WAITING_READ_LOCK_OFFSET = 10,
		WAITING_READ_LOCK_INCREMENT = 1024,
		WAITING_READ_LOCK_MASK = 1047552,
		WRITE_LOCK_OFFSET = 20,
		WRITE_LOCK_INCREMENT = 1048576,
		WRITE_LOCK_MASK = 2146435072,
		BLOCK_NEW_READS_BIT = 1073741824,
		READ_LOCK_ACCOUNTING_BIT = 2147483648,
	};
	/* ../public/tier0/threadtools.h:2183 */
	void CThreadRWLock_FastRead(CThreadRWLock_FastRead* , bool);
	/* ../public/tier0/threadtools.h:2185 */
	bool TryLockForRead(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2186 */
	void LockForRead(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2187 */
	void UnlockRead(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2189 */
	bool TryLockForWrite(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2190 */
	void LockForWrite(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2191 */
	void UnlockWrite(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2194 */
	RWLockTranstionResult_t UnlockRead_LockForWrite(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2195 */
	RWLockTranstionResult_t UnlockWrite_LockForRead(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2199 */
	bool IsLockedForWrite(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2200 */
	ThreadId_t GetWriteLockThreadID(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2201 */
	bool OwnedByCurrentThread(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2202 */
	bool AssertOwnedByCurrentThread(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2203 */
	int GetDepth(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2206 */
	uint32 GetActiveAndWaitingLocksForRead(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2208 */
	uint32 GetActiveAndWaitingLocksForWrite(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2211 */
	bool TryLock(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2211 */
	void Lock(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2211 */
	void Unlock(CThreadRWLock_FastRead* , const char* , int);
protected:
	/* ../public/tier0/threadtools.h:2214 */
	void HandleFirstWriteLockTransition(CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2215 */
	bool EncounteredComplexReadLockOperation(CThreadRWLock_FastRead* , uint32, bool, const char* , int);
	/* ../public/tier0/threadtools.h:2216 */
	void UnlockReadAccounting(CThreadRWLock_FastRead* , const char* , int, uint32);
	CInterlockedUInt m_Interlock __attribute__((__aligned__(4))); /* 0 4 */
	CInterlockedInt m_ReadlockAccounting __attribute__((__aligned__(4))); /* 4 4 */
	CThreadSemaphore m_WriteLockQueue; /* 8 0 */
	CThreadEvent m_WriteLockUnblocked; /* 136 128 */
	CThreadEvent m_ReadLockUnblocked; /* 264 128 */
	ThreadId_t m_WritingThreadID; /* 392 8 */
	int m_nWritingThreadLockCount; /* 400 4 */
private:
	/* ../public/tier0/threadtools.h:2262 */
	void CThreadRWLock_FastRead(CThreadRWLock_FastRead* , const CThreadRWLock_FastRead& );
	/* ../public/tier0/threadtools.h:2263 */
	CThreadRWLock_FastRead& operator=(CThreadRWLock_FastRead* , const CThreadRWLock_FastRead& );
	void ~CThreadRWLock_FastRead(CThreadRWLock_FastRead* );
	void CThreadRWLock_FastRead(class CThreadRWLock_FastRead *, bool); /* linkage=_ZN22CThreadRWLock_FastReadC4Eb */
	bool TryLockForRead(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead14TryLockForReadEPKci */
	void LockForRead(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead11LockForReadEPKci */
	void UnlockRead(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead10UnlockReadEPKci */
	bool TryLockForWrite(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead15TryLockForWriteEPKci */
	void LockForWrite(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead12LockForWriteEPKci */
	/* <4e5562> tier0/threadtools.cpp:5486 */
	void UnlockWrite(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead11UnlockWriteEPKci */
	enum RWLockTranstionResult_t UnlockRead_LockForWrite(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead23UnlockRead_LockForWriteEPKci */
	enum RWLockTranstionResult_t UnlockWrite_LockForRead(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead23UnlockWrite_LockForReadEPKci */
	bool IsLockedForWrite(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead16IsLockedForWriteEv */
	ThreadId_t GetWriteLockThreadID(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead20GetWriteLockThreadIDEv */
	bool OwnedByCurrentThread(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead20OwnedByCurrentThreadEv */
	bool AssertOwnedByCurrentThread(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead26AssertOwnedByCurrentThreadEv */
	int GetDepth(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead8GetDepthEv */
	uint32 GetActiveAndWaitingLocksForRead(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead31GetActiveAndWaitingLocksForReadEv */
	uint32 GetActiveAndWaitingLocksForWrite(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead32GetActiveAndWaitingLocksForWriteEv */
	bool TryLock(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead7TryLockEPKci */
	void Lock(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead4LockEPKci */
	void Unlock(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead6UnlockEPKci */
	void HandleFirstWriteLockTransition(class CThreadRWLock_FastRead *); /* linkage=_ZN22CThreadRWLock_FastRead30HandleFirstWriteLockTransitionEv */
	bool EncounteredComplexReadLockOperation(class CThreadRWLock_FastRead *, uint32, bool, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead35EncounteredComplexReadLockOperationEjbPKci */
	void UnlockReadAccounting(class CThreadRWLock_FastRead *, const char  *, int, uint32); /* linkage=_ZN22CThreadRWLock_FastRead20UnlockReadAccountingEPKcij */
	void CThreadRWLock_FastRead(class CThreadRWLock_FastRead *, const class CThreadRWLock_FastRead  &); /* linkage=_ZN22CThreadRWLock_FastReadC4ERKS_ */
	class CThreadRWLock_FastRead & operator=(class CThreadRWLock_FastRead *, const class CThreadRWLock_FastRead  &); /* linkage=_ZN22CThreadRWLock_FastReadaSERKS_ */
	void ~CThreadRWLock_FastRead(class CThreadRWLock_FastRead *); /* linkage=_ZN22CThreadRWLock_FastReadD4Ev */
} __attribute__((__aligned__(8)));

// <00BCD1DB> ../public/tier0/threadtools.h:2177
// member functions: 49
// member variables: 7
// class size: 408
class CThreadRWLock_FastRead {
	/* ../public/tier0/threadtools.h:2232 */
	enum InterlockBits_t {
		READ_LOCK_OFFSET = 0,
		READ_LOCK_INCREMENT = 1,
		READ_LOCK_MASK = 1023,
		WAITING_READ_LOCK_OFFSET = 10,
		WAITING_READ_LOCK_INCREMENT = 1024,
		WAITING_READ_LOCK_MASK = 1047552,
		WRITE_LOCK_OFFSET = 20,
		WRITE_LOCK_INCREMENT = 1048576,
		WRITE_LOCK_MASK = 2146435072,
		BLOCK_NEW_READS_BIT = 1073741824,
		READ_LOCK_ACCOUNTING_BIT = 2147483648,
	};
	/* ../public/tier0/threadtools.h:2252 */
	enum AccountingBitFlags_t {
		BUFFER_BITS_MASK = 1046528,
		WRITE_LOCKS_DO_NOT_IMMEDIATELY_BLOCK_READS = 1048576,
	};
	/* ../public/tier0/threadtools.h:2183 */
	void CThreadRWLock_FastRead(CThreadRWLock_FastRead* , bool);
	/* ../public/tier0/threadtools.h:2185 */
	bool TryLockForRead(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2186 */
	void LockForRead(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2187 */
	void UnlockRead(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2189 */
	bool TryLockForWrite(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2190 */
	void LockForWrite(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2191 */
	void UnlockWrite(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2194 */
	RWLockTranstionResult_t UnlockRead_LockForWrite(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2195 */
	RWLockTranstionResult_t UnlockWrite_LockForRead(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2199 */
	bool IsLockedForWrite(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2200 */
	ThreadId_t GetWriteLockThreadID(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2201 */
	bool OwnedByCurrentThread(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2202 */
	bool AssertOwnedByCurrentThread(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2203 */
	int GetDepth(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2206 */
	uint32 GetActiveAndWaitingLocksForRead(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2208 */
	uint32 GetActiveAndWaitingLocksForWrite(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2211 */
	bool TryLock(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2211 */
	void Lock(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2211 */
	void Unlock(CThreadRWLock_FastRead* , const char* , int);
protected:
	/* ../public/tier0/threadtools.h:2214 */
	void HandleFirstWriteLockTransition(CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2215 */
	bool EncounteredComplexReadLockOperation(CThreadRWLock_FastRead* , uint32, bool, const char* , int);
	/* ../public/tier0/threadtools.h:2216 */
	void UnlockReadAccounting(CThreadRWLock_FastRead* , const char* , int, uint32);
	CInterlockedUInt m_Interlock __attribute__((__aligned__(4))); /* 0 4 */
	CInterlockedInt m_ReadlockAccounting __attribute__((__aligned__(4))); /* 4 4 */
	CThreadSemaphore m_WriteLockQueue; /* 8 0 */
	CThreadEvent m_WriteLockUnblocked; /* 136 128 */
	CThreadEvent m_ReadLockUnblocked; /* 264 128 */
	ThreadId_t m_WritingThreadID; /* 392 8 */
	int m_nWritingThreadLockCount; /* 400 4 */
private:
	/* ../public/tier0/threadtools.h:2262 */
	void CThreadRWLock_FastRead(CThreadRWLock_FastRead* , const CThreadRWLock_FastRead& );
	/* ../public/tier0/threadtools.h:2263 */
	CThreadRWLock_FastRead& operator=(CThreadRWLock_FastRead* , const CThreadRWLock_FastRead& );
	void CThreadRWLock_FastRead(class CThreadRWLock_FastRead *, bool); /* linkage=_ZN22CThreadRWLock_FastReadC4Eb */
	bool TryLockForRead(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead14TryLockForReadEPKci */
	void LockForRead(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead11LockForReadEPKci */
	void UnlockRead(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead10UnlockReadEPKci */
	bool TryLockForWrite(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead15TryLockForWriteEPKci */
	void LockForWrite(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead12LockForWriteEPKci */
	/* <4e5562> tier0/threadtools.cpp:5486 */
	void UnlockWrite(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead11UnlockWriteEPKci */
	enum RWLockTranstionResult_t UnlockRead_LockForWrite(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead23UnlockRead_LockForWriteEPKci */
	enum RWLockTranstionResult_t UnlockWrite_LockForRead(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead23UnlockWrite_LockForReadEPKci */
	bool IsLockedForWrite(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead16IsLockedForWriteEv */
	ThreadId_t GetWriteLockThreadID(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead20GetWriteLockThreadIDEv */
	bool OwnedByCurrentThread(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead20OwnedByCurrentThreadEv */
	bool AssertOwnedByCurrentThread(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead26AssertOwnedByCurrentThreadEv */
	int GetDepth(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead8GetDepthEv */
	uint32 GetActiveAndWaitingLocksForRead(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead31GetActiveAndWaitingLocksForReadEv */
	uint32 GetActiveAndWaitingLocksForWrite(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead32GetActiveAndWaitingLocksForWriteEv */
	bool TryLock(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead7TryLockEPKci */
	void Lock(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead4LockEPKci */
	void Unlock(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead6UnlockEPKci */
	void HandleFirstWriteLockTransition(class CThreadRWLock_FastRead *); /* linkage=_ZN22CThreadRWLock_FastRead30HandleFirstWriteLockTransitionEv */
	bool EncounteredComplexReadLockOperation(class CThreadRWLock_FastRead *, uint32, bool, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead35EncounteredComplexReadLockOperationEjbPKci */
	void UnlockReadAccounting(class CThreadRWLock_FastRead *, const char  *, int, uint32); /* linkage=_ZN22CThreadRWLock_FastRead20UnlockReadAccountingEPKcij */
	void CThreadRWLock_FastRead(class CThreadRWLock_FastRead *, const class CThreadRWLock_FastRead  &); /* linkage=_ZN22CThreadRWLock_FastReadC4ERKS_ */
	class CThreadRWLock_FastRead & operator=(class CThreadRWLock_FastRead *, const class CThreadRWLock_FastRead  &); /* linkage=_ZN22CThreadRWLock_FastReadaSERKS_ */
	void ~CThreadRWLock_FastRead(class CThreadRWLock_FastRead *); /* linkage=_ZN22CThreadRWLock_FastReadD4Ev */
} __attribute__((__aligned__(8)));

// <004C2B30> ../public/tier0/threadtools.h:2177
// member functions: 49
// member variables: 7
// class size: 408
class CThreadRWLock_FastRead {
	/* ../public/tier0/threadtools.h:2232 */
	enum InterlockBits_t {
		READ_LOCK_OFFSET = 0,
		READ_LOCK_INCREMENT = 1,
		READ_LOCK_MASK = 1023,
		WAITING_READ_LOCK_OFFSET = 10,
		WAITING_READ_LOCK_INCREMENT = 1024,
		WAITING_READ_LOCK_MASK = 1047552,
		WRITE_LOCK_OFFSET = 20,
		WRITE_LOCK_INCREMENT = 1048576,
		WRITE_LOCK_MASK = 2146435072,
		BLOCK_NEW_READS_BIT = 1073741824,
		READ_LOCK_ACCOUNTING_BIT = 2147483648,
	};
	/* ../public/tier0/threadtools.h:2252 */
	enum AccountingBitFlags_t {
		BUFFER_BITS_MASK = 1046528,
		WRITE_LOCKS_DO_NOT_IMMEDIATELY_BLOCK_READS = 1048576,
	};
	/* ../public/tier0/threadtools.h:2183 */
	void CThreadRWLock_FastRead(CThreadRWLock_FastRead* , bool);
	/* ../public/tier0/threadtools.h:2185 */
	bool TryLockForRead(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2186 */
	void LockForRead(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2187 */
	void UnlockRead(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2189 */
	bool TryLockForWrite(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2190 */
	void LockForWrite(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2191 */
	void UnlockWrite(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2194 */
	RWLockTranstionResult_t UnlockRead_LockForWrite(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2195 */
	RWLockTranstionResult_t UnlockWrite_LockForRead(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2199 */
	bool IsLockedForWrite(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2200 */
	ThreadId_t GetWriteLockThreadID(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2201 */
	bool OwnedByCurrentThread(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2202 */
	bool AssertOwnedByCurrentThread(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2203 */
	int GetDepth(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2206 */
	uint32 GetActiveAndWaitingLocksForRead(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2208 */
	uint32 GetActiveAndWaitingLocksForWrite(const CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2211 */
	bool TryLock(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2211 */
	void Lock(CThreadRWLock_FastRead* , const char* , int);
	/* ../public/tier0/threadtools.h:2211 */
	void Unlock(CThreadRWLock_FastRead* , const char* , int);
protected:
	/* ../public/tier0/threadtools.h:2214 */
	void HandleFirstWriteLockTransition(CThreadRWLock_FastRead* );
	/* ../public/tier0/threadtools.h:2215 */
	bool EncounteredComplexReadLockOperation(CThreadRWLock_FastRead* , uint32, bool, const char* , int);
	/* ../public/tier0/threadtools.h:2216 */
	void UnlockReadAccounting(CThreadRWLock_FastRead* , const char* , int, uint32);
	CInterlockedUInt m_Interlock __attribute__((__aligned__(4))); /* 0 4 */
	CInterlockedInt m_ReadlockAccounting __attribute__((__aligned__(4))); /* 4 4 */
	CThreadSemaphore m_WriteLockQueue; /* 8 128 */
	CThreadEvent m_WriteLockUnblocked; /* 136 128 */
	CThreadEvent m_ReadLockUnblocked; /* 264 128 */
	ThreadId_t m_WritingThreadID; /* 392 8 */
	int m_nWritingThreadLockCount; /* 400 4 */
private:
	/* ../public/tier0/threadtools.h:2262 */
	void CThreadRWLock_FastRead(CThreadRWLock_FastRead* , const CThreadRWLock_FastRead& );
	/* ../public/tier0/threadtools.h:2263 */
	CThreadRWLock_FastRead& operator=(CThreadRWLock_FastRead* , const CThreadRWLock_FastRead& );
	void CThreadRWLock_FastRead(class CThreadRWLock_FastRead *, bool); /* linkage=_ZN22CThreadRWLock_FastReadC4Eb */
	bool TryLockForRead(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead14TryLockForReadEPKci */
	void LockForRead(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead11LockForReadEPKci */
	void UnlockRead(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead10UnlockReadEPKci */
	bool TryLockForWrite(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead15TryLockForWriteEPKci */
	void LockForWrite(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead12LockForWriteEPKci */
	/* <4e5562> tier0/threadtools.cpp:5486 */
	void UnlockWrite(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead11UnlockWriteEPKci */
	enum RWLockTranstionResult_t UnlockRead_LockForWrite(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead23UnlockRead_LockForWriteEPKci */
	enum RWLockTranstionResult_t UnlockWrite_LockForRead(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead23UnlockWrite_LockForReadEPKci */
	bool IsLockedForWrite(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead16IsLockedForWriteEv */
	ThreadId_t GetWriteLockThreadID(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead20GetWriteLockThreadIDEv */
	bool OwnedByCurrentThread(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead20OwnedByCurrentThreadEv */
	bool AssertOwnedByCurrentThread(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead26AssertOwnedByCurrentThreadEv */
	int GetDepth(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead8GetDepthEv */
	uint32 GetActiveAndWaitingLocksForRead(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead31GetActiveAndWaitingLocksForReadEv */
	uint32 GetActiveAndWaitingLocksForWrite(const class CThreadRWLock_FastRead  *); /* linkage=_ZNK22CThreadRWLock_FastRead32GetActiveAndWaitingLocksForWriteEv */
	bool TryLock(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead7TryLockEPKci */
	void Lock(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead4LockEPKci */
	void Unlock(class CThreadRWLock_FastRead *, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead6UnlockEPKci */
	void HandleFirstWriteLockTransition(class CThreadRWLock_FastRead *); /* linkage=_ZN22CThreadRWLock_FastRead30HandleFirstWriteLockTransitionEv */
	bool EncounteredComplexReadLockOperation(class CThreadRWLock_FastRead *, uint32, bool, const char  *, int); /* linkage=_ZN22CThreadRWLock_FastRead35EncounteredComplexReadLockOperationEjbPKci */
	void UnlockReadAccounting(class CThreadRWLock_FastRead *, const char  *, int, uint32); /* linkage=_ZN22CThreadRWLock_FastRead20UnlockReadAccountingEPKcij */
	void CThreadRWLock_FastRead(class CThreadRWLock_FastRead *, const class CThreadRWLock_FastRead  &); /* linkage=_ZN22CThreadRWLock_FastReadC4ERKS_ */
	class CThreadRWLock_FastRead & operator=(class CThreadRWLock_FastRead *, const class CThreadRWLock_FastRead  &); /* linkage=_ZN22CThreadRWLock_FastReadaSERKS_ */
	void ~CThreadRWLock_FastRead(class CThreadRWLock_FastRead *); /* linkage=_ZN22CThreadRWLock_FastReadD4Ev */
} __attribute__((__aligned__(8)));

// <0572C683> ../public/tier0/threadtools.h:2183
void CThreadRWLock_FastRead::CThreadRWLock_FastRead(bool bWriteLocksHaltReadsImmediately)
{
} /* size: 0 */

// <021DF6B7> ../public/tier0/threadtools.h:2278
// member functions: 56
// member variables: 3
// class size: 32
class CThreadSpinRWLock {
	/* ../public/tier0/threadtools.h:2331 */
	union LockInfo_t {
		struct {
			ThreadId_t m_writerId; /* 0 8 */
			int64 m_nReaders; /* 8 8 */
		}; /* 0 16 */
		int128 m_i128; /* 0 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/threadtools.h:2281 */
	void CThreadSpinRWLock(CThreadSpinRWLock* , const char* );
	/* ../public/tier0/threadtools.h:2294 */
	bool TryLockForWrite(CThreadSpinRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2295 */
	bool TryLockForRead(CThreadSpinRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2297 */
	void LockForRead(CThreadSpinRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2298 */
	void UnlockRead(CThreadSpinRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2299 */
	void LockForWrite(CThreadSpinRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2300 */
	void UnlockWrite(CThreadSpinRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2303 */
	RWLockTranstionResult_t UnlockRead_LockForWrite(CThreadSpinRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2304 */
	RWLockTranstionResult_t UnlockWrite_LockForRead(CThreadSpinRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2306 */
	bool TryLockForWrite(const CThreadSpinRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2307 */
	bool TryLockForRead(const CThreadSpinRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2308 */
	void LockForRead(const CThreadSpinRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2309 */
	void UnlockRead(const CThreadSpinRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2310 */
	void LockForWrite(const CThreadSpinRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2311 */
	void UnlockWrite(const CThreadSpinRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2312 */
	RWLockTranstionResult_t UnlockRead_LockForWrite(const CThreadSpinRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2313 */
	RWLockTranstionResult_t UnlockWrite_LockForRead(const CThreadSpinRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2316 */
	bool TryLock(CThreadSpinRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2316 */
	void Lock(CThreadSpinRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2316 */
	void Unlock(CThreadSpinRWLock* , const char* , int);
	/* ../public/tier0/threadtools.h:2318 */
	bool IsLockedForWrite(const CThreadSpinRWLock* );
	/* ../public/tier0/threadtools.h:2320 */
	ThreadId_t GetWriteLockThreadID(const CThreadSpinRWLock* );
	/* ../public/tier0/threadtools.h:2321 */
	bool OwnedByCurrentThread(const CThreadSpinRWLock* );
private:
	/* ../public/tier0/threadtools.h:2325 */
	void CThreadSpinRWLock(CThreadSpinRWLock* , const CThreadSpinRWLock& );
	/* ../public/tier0/threadtools.h:2326 */
	CThreadSpinRWLock& operator=(CThreadSpinRWLock* , const CThreadSpinRWLock& );
	/* ../public/tier0/threadtools.h:2353 */
	bool AssignIf(CThreadSpinRWLock* , const union LockInfo_t& , const union LockInfo_t& );
	/* ../public/tier0/threadtools.h:2354 */
	bool TryLockForWrite(CThreadSpinRWLock* , const char* , int, ThreadId_t);
	/* ../public/tier0/threadtools.h:2355 */
	void SpinLockForWrite(CThreadSpinRWLock* , const char* , int, ThreadId_t);
	union LockInfo_t m_lockInfo; /* 0 16 */
	CInterlockedInt m_nWriters __attribute__((__aligned__(4))); /* 16 4 */
	const char * m_pLockName; /* 24 8 */
	void CThreadSpinRWLock(class CThreadSpinRWLock *, const char  *); /* linkage=_ZN17CThreadSpinRWLockC4EPKc */
	bool TryLockForWrite(class CThreadSpinRWLock *, const char  *, int); /* linkage=_ZN17CThreadSpinRWLock15TryLockForWriteEPKci */
	bool TryLockForRead(class CThreadSpinRWLock *, const char  *, int); /* linkage=_ZN17CThreadSpinRWLock14TryLockForReadEPKci */
	/* <4e5e29> tier0/threadtools.cpp:5948 */
	void LockForRead(class CThreadSpinRWLock *, const char  *, int); /* linkage=_ZN17CThreadSpinRWLock11LockForReadEPKci */
	void UnlockRead(class CThreadSpinRWLock *, const char  *, int); /* linkage=_ZN17CThreadSpinRWLock10UnlockReadEPKci */
	void LockForWrite(class CThreadSpinRWLock *, const char  *, int); /* linkage=_ZN17CThreadSpinRWLock12LockForWriteEPKci */
	void UnlockWrite(class CThreadSpinRWLock *, const char  *, int); /* linkage=_ZN17CThreadSpinRWLock11UnlockWriteEPKci */
	enum RWLockTranstionResult_t UnlockRead_LockForWrite(class CThreadSpinRWLock *, const char  *, int); /* linkage=_ZN17CThreadSpinRWLock23UnlockRead_LockForWriteEPKci */
	enum RWLockTranstionResult_t UnlockWrite_LockForRead(class CThreadSpinRWLock *, const char  *, int); /* linkage=_ZN17CThreadSpinRWLock23UnlockWrite_LockForReadEPKci */
	bool TryLockForWrite(const class CThreadSpinRWLock  *, const char  *, int); /* linkage=_ZNK17CThreadSpinRWLock15TryLockForWriteEPKci */
	bool TryLockForRead(const class CThreadSpinRWLock  *, const char  *, int); /* linkage=_ZNK17CThreadSpinRWLock14TryLockForReadEPKci */
	void LockForRead(const class CThreadSpinRWLock  *, const char  *, int); /* linkage=_ZNK17CThreadSpinRWLock11LockForReadEPKci */
	void UnlockRead(const class CThreadSpinRWLock  *, const char  *, int); /* linkage=_ZNK17CThreadSpinRWLock10UnlockReadEPKci */
	void LockForWrite(const class CThreadSpinRWLock  *, const char  *, int); /* linkage=_ZNK17CThreadSpinRWLock12LockForWriteEPKci */
	void UnlockWrite(const class CThreadSpinRWLock  *, const char  *, int); /* linkage=_ZNK17CThreadSpinRWLock11UnlockWriteEPKci */
	enum RWLockTranstionResult_t UnlockRead_LockForWrite(const class CThreadSpinRWLock  *, const char  *, int); /* linkage=_ZNK17CThreadSpinRWLock23UnlockRead_LockForWriteEPKci */
	enum RWLockTranstionResult_t UnlockWrite_LockForRead(const class CThreadSpinRWLock  *, const char  *, int); /* linkage=_ZNK17CThreadSpinRWLock23UnlockWrite_LockForReadEPKci */
	bool TryLock(class CThreadSpinRWLock *, const char  *, int); /* linkage=_ZN17CThreadSpinRWLock7TryLockEPKci */
	void Lock(class CThreadSpinRWLock *, const char  *, int); /* linkage=_ZN17CThreadSpinRWLock4LockEPKci */
	void Unlock(class CThreadSpinRWLock *, const char  *, int); /* linkage=_ZN17CThreadSpinRWLock6UnlockEPKci */
	bool IsLockedForWrite(const class CThreadSpinRWLock  *); /* linkage=_ZNK17CThreadSpinRWLock16IsLockedForWriteEv */
	ThreadId_t GetWriteLockThreadID(const class CThreadSpinRWLock  *); /* linkage=_ZNK17CThreadSpinRWLock20GetWriteLockThreadIDEv */
	bool OwnedByCurrentThread(const class CThreadSpinRWLock  *); /* linkage=_ZNK17CThreadSpinRWLock20OwnedByCurrentThreadEv */
	void CThreadSpinRWLock(class CThreadSpinRWLock *, const class CThreadSpinRWLock  &); /* linkage=_ZN17CThreadSpinRWLockC4ERKS_ */
	class CThreadSpinRWLock & operator=(class CThreadSpinRWLock *, const class CThreadSpinRWLock  &); /* linkage=_ZN17CThreadSpinRWLockaSERKS_ */
	bool AssignIf(class CThreadSpinRWLock *, const union LockInfo_t  &, const union LockInfo_t  &); /* linkage=_ZN17CThreadSpinRWLock8AssignIfERKNS_10LockInfo_tES2_ */
	bool TryLockForWrite(class CThreadSpinRWLock *, const char  *, int, ThreadId_t); /* linkage=_ZN17CThreadSpinRWLock15TryLockForWriteEPKciy */
	/* <4e5852> tier0/threadtools.cpp:5894 */
	void SpinLockForWrite(class CThreadSpinRWLock *, const char  *, int, ThreadId_t); /* linkage=_ZN17CThreadSpinRWLock16SpinLockForWriteEPKciy */
} __attribute__((__aligned__(16)));

// <023844CD> ../public/tier0/threadtools.h:2281
void CThreadSpinRWLock::CThreadSpinRWLock(const char* pLockName)
{
	{
		{
		}
	}
} /* size: 0 */

// <0238447E> ../public/tier0/threadtools.h:2281
// variables: 2
inline void CThreadSpinRWLock::CThreadSpinRWLock(const char* pLockName)
{
	const char   __FUNCTION__; // 58640
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2286
	}
} /* size: 0, variables: 1 */

// <00A5D92E> ../public/tier0/threadtools.h:2281
// variables: 2
inline void CThreadSpinRWLock::CThreadSpinRWLock(const char* pLockName)
{
	const char   __FUNCTION__; // 28813
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2286
	}
} /* size: 0, variables: 1 */

// <00546C05> ../public/tier0/threadtools.h:2281
// variables: 2
inline void CThreadSpinRWLock::CThreadSpinRWLock(const char* pLockName)
{
	const char   __FUNCTION__; // 48347
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2286
	}
} /* size: 0, variables: 1 */

// <001ADD5A> ../public/tier0/threadtools.h:2281
// variables: 2
inline void CThreadSpinRWLock::CThreadSpinRWLock(const char* pLockName)
{
	const char   __FUNCTION__; // 2685
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2286
	}
} /* size: 0, variables: 1 */

// <005A7EF7> ../public/tier0/threadtools.h:2281
// variables: 2
inline void CThreadSpinRWLock::CThreadSpinRWLock(const char* pLockName)
{
	const char   __FUNCTION__; // 52254
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2286
	}
} /* size: 0, variables: 1 */

// <00131FAB> ../public/tier0/threadtools.h:2281
// variables: 2
inline void CThreadSpinRWLock::CThreadSpinRWLock(const char* pLockName)
{
	const char   __FUNCTION__; // 24190
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2286
	}
} /* size: 0, variables: 1 */

// <0028C256> ../public/tier0/threadtools.h:2281
// variables: 2
inline void CThreadSpinRWLock::CThreadSpinRWLock(const char* pLockName)
{
	const char   __FUNCTION__; // 30089
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2286
	}
} /* size: 0, variables: 1 */

// <001A9099> ../public/tier0/threadtools.h:2281
// variables: 2
inline void CThreadSpinRWLock::CThreadSpinRWLock(const char* pLockName)
{
	const char   __FUNCTION__; // 32060
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2286
	}
} /* size: 0, variables: 1 */

// <00107697> ../public/tier0/threadtools.h:2281
// variables: 2
inline void CThreadSpinRWLock::CThreadSpinRWLock(const char* pLockName)
{
	const char   __FUNCTION__; // 26407
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2286
	}
} /* size: 0, variables: 1 */

// <0238444B> ../public/tier0/threadtools.h:2308
inline void CThreadSpinRWLock::LockForRead(const char* pFileName, int nLineNumber)
{
} /* size: 0 */

// <02384418> ../public/tier0/threadtools.h:2309
inline void CThreadSpinRWLock::UnlockRead(const char* pFileName, int nLineNumber)
{
} /* size: 0 */

// <003EE79B> ../public/tier0/threadtools.h:2394
// member functions: 12
// member variable: 1
// class size: 24
class CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1> : public CThreadFastMutex {
public:
	/* class CThreadFastMutex <ancestor>; */ /* 0 24 */
	/* ../public/tier0/threadtools.h:2397 */
	void CCopyableLock(CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>* );
	/* ../public/tier0/threadtools.h:2402 */
	void CCopyableLock(CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>* , const CThreadFastMutex& );
	/* ../public/tier0/threadtools.h:2407 */
	void CCopyableLock(CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>* , const CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>& );
	/* ../public/tier0/threadtools.h:2412 */
	CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>& operator=(CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>* , const CThreadFastMutex& );
	/* ../public/tier0/threadtools.h:2418 */
	CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>& operator=(CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>* , const CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>& );
private:
	/* ../public/tier0/threadtools.h:2425 */
	void Copy(CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>* , const CThreadFastMutex& );
	void CCopyableLock(class CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1> *); /* linkage=_ZN13CCopyableLockI16CThreadFastMutexL17CopiedLockState_t1EEC4Ev */
	void CCopyableLock(class CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1> *, const class CThreadFastMutex  &); /* linkage=_ZN13CCopyableLockI16CThreadFastMutexL17CopiedLockState_t1EEC4ERKS0_ */
	void CCopyableLock(class CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1> *, const class CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>  &); /* linkage=_ZN13CCopyableLockI16CThreadFastMutexL17CopiedLockState_t1EEC4ERKS2_ */
	class CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1> & operator=(class CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1> *, const class CThreadFastMutex  &); /* linkage=_ZN13CCopyableLockI16CThreadFastMutexL17CopiedLockState_t1EEaSERKS0_ */
	class CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1> & operator=(class CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1> *, const class CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>  &); /* linkage=_ZN13CCopyableLockI16CThreadFastMutexL17CopiedLockState_t1EEaSERKS2_ */
	void Copy(class CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1> *, const class CThreadFastMutex  &); /* linkage=_ZN13CCopyableLockI16CThreadFastMutexL17CopiedLockState_t1EE4CopyERKS0_ */
};

// <003F0023> ../public/tier0/threadtools.h:2397
void CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>::CCopyableLock()1>* this)
{
} /* size: 0 */

// <003F000A> ../public/tier0/threadtools.h:2397
inline void CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1>::CCopyableLock()1>* this)
{
} /* size: 0 */

// <004C3586> ../public/tier0/threadtools.h:2453
// member functions: 54
// member variables: 10
// vtable entries: 6
// class size: 400
class CThread {
	/* ../public/tier0/threadtools.h:2589 */
	struct ThreadInit_t {
		CThread * pThread; /* 0 8 */
		ThreadPriorityEnum_t priority; /* 8 4 */
		CThreadEvent * pInitCompleteEvent; /* 16 8 */
		bool * pfInitSuccess; /* 24 8 */
		void * ParentStackTrace[32]; /* 32 256 */
	};
	int ()(void) * * _vptr.CThread; /* 0 8 */
	/* tier0/threadtools.cpp:6372 */
	void CThread(CThread* );
	/* tier0/threadtools.cpp:6390 */
	virtual void ~CThread(CThread* );
	/* tier0/threadtools.cpp:6411 */
	const char* GetName(CThread* );
	/* tier0/threadtools.cpp:6428 */
	void SetName(CThread* , const char* );
	/* ../public/tier0/threadtools.h:2464 */
	size_t CalcStackDepth(CThread* , void* );
	/* tier0/threadtools.cpp:6443 */
	virtual bool Start(CThread* , unsigned int, ThreadPriorityEnum_t);
	/* tier0/threadtools.cpp:6525 */
	bool IsAlive(CThread* );
	/* tier0/threadtools.cpp:6535 */
	bool Join(CThread* , unsigned int);
	/* tier0/threadtools.cpp:6565 */
	ThreadHandle_t GetThreadHandle(CThread* );
	/* ../public/tier0/threadtools.h:2492 */
	ThreadId_t GetThreadID(const CThread* );
	/* tier0/threadtools.cpp:6577 */
	int GetResult(CThread* );
	/* tier0/threadtools.cpp:6589 */
	void Stop(CThread* , int);
	/* tier0/threadtools.cpp:6653 */
	unsigned int Suspend(CThread* );
	/* tier0/threadtools.cpp:6671 */
	unsigned int Resume(CThread* );
	/* ../public/tier0/threadtools.h:2519 */
	bool IsSuspended(CThread* );
	/* tier0/threadtools.cpp:6684 */
	bool Terminate(CThread* , int);
	/* tier0/threadtools.cpp:6713 */
	CThread* GetCurrentCThread(void);
	/* ../public/tier0/threadtools.h:2540 */
	void Yield(void);
	/* tier0/threadtools.cpp:6724 */
	void Sleep(unsigned int);
protected:
	/* tier0/threadtools.cpp:6735 */
	virtual bool Init(CThread* );
	/* ../public/tier0/threadtools.h:2558 */
	virtual int Run(CThread* );
	/* tier0/threadtools.cpp:6743 */
	virtual void OnExit(CThread* );
	/* tier0/threadtools.cpp:6746 */
	virtual bool WaitForCreateComplete(CThread* , CThreadEvent* );
	/* tier0/threadtools.cpp:6762 */
	uintp ThreadProc(LPVOID);
	/* tier0/threadtools.cpp:6757 */
	virtual bool IsThreadRunning(CThread* );
	CThreadMutex m_Lock; /* 8 72 */
	CThreadEvent m_ExitEvent; /* 80 128 */
private:
	/* ../public/tier0/threadtools.h:2601 */
	void CThread(CThread* , const CThread& );
	/* ../public/tier0/threadtools.h:2602 */
	CThread& operator=(CThread* , const CThread& );
	pthread_t m_threadId; /* 208 8 */
	int m_result; /* 216 4 */
	CThreadSyncValue<bool> m_bAlive; /* 220 1 */
	char m_szName[32]; /* 221 32 */
	void * m_pStackBase; /* 256 8 */
	unsigned int m_flags; /* 264 4 */
	CThreadManualEvent m_NotSuspendedEvent; /* 272 128 */
	bool Join(class CThread *, unsigned int); /* linkage=_ZN7CThread4JoinEj */
	virtual void ~CThread(class CThread *); /* linkage=_ZN7CThreadD4Ev */
	unsigned int Suspend(class CThread *); /* linkage=_ZN7CThread7SuspendEv */
	virtual bool IsThreadRunning(class CThread *); /* linkage=_ZN7CThread15IsThreadRunningEv */
	/* <4e4c90> tier0/threadtools.cpp:6746 */
	virtual bool WaitForCreateComplete(class CThread *, class CThreadEvent *); /* linkage=_ZN7CThread21WaitForCreateCompleteEP12CThreadEvent */
	/* <4e436b> tier0/threadtools.cpp:6743 */
	virtual void OnExit(class CThread *); /* linkage=_ZN7CThread6OnExitEv */
	/* <4e4340> tier0/threadtools.cpp:6735 */
	virtual bool Init(class CThread *); /* linkage=_ZN7CThread4InitEv */
	void CThread(class CThread *); /* linkage=_ZN7CThreadC4Ev */
	ThreadHandle_t GetThreadHandle(class CThread *); /* linkage=_ZN7CThread15GetThreadHandleEv */
	void SetName(class CThread *, const char  *); /* linkage=_ZN7CThread7SetNameEPKc */
	virtual bool Start(class CThread *, unsigned int, enum ThreadPriorityEnum_t); /* linkage=_ZN7CThread5StartEj20ThreadPriorityEnum_t */
	unsigned int Resume(class CThread *); /* linkage=_ZN7CThread6ResumeEv */
	bool IsSuspended(class CThread *); /* linkage=_ZN7CThread11IsSuspendedEv */
	ThreadId_t GetThreadID(const class CThread  *); /* linkage=_ZNK7CThread11GetThreadIDEv */
	const char  * GetName(class CThread *); /* linkage=_ZN7CThread7GetNameEv */
	size_t CalcStackDepth(class CThread *, void *); /* linkage=_ZN7CThread14CalcStackDepthEPv */
	bool IsAlive(class CThread *); /* linkage=_ZN7CThread7IsAliveEv */
	int GetResult(class CThread *); /* linkage=_ZN7CThread9GetResultEv */
	void Stop(class CThread *, int); /* linkage=_ZN7CThread4StopEi */
	bool Terminate(class CThread *, int); /* linkage=_ZN7CThread9TerminateEi */
	class CThread * GetCurrentCThread(void); /* linkage=_ZN7CThread17GetCurrentCThreadEv */
	void Yield(void); /* linkage=_ZN7CThread5YieldEv */
	void Sleep(unsigned int); /* linkage=_ZN7CThread5SleepEj */
	virtual int Run(class CThread *); /* linkage=_ZN7CThread3RunEv */
	uintp ThreadProc(LPVOID); /* linkage=_ZN7CThread10ThreadProcEPv */
	void CThread(class CThread *, const class CThread  &); /* linkage=_ZN7CThreadC4ERKS_ */
	class CThread & operator=(class CThread *, const class CThread  &); /* linkage=_ZN7CThreadaSERKS_ */
};

// <0215BBEE> ../public/tier0/threadtools.h:2456
void CThread::CThread()
{
} /* size: 0 */

// <0215BB6D> ../public/tier0/threadtools.h:2457
void CThread::~CThread()
{
} /* size: 0 */

// <001DF001> ../public/tier0/threadtools.h:2492
inline void CThread::GetThreadID()
{
} /* size: 0 */

// <001DEFDD> ../public/tier0/threadtools.h:2519
inline void CThread::IsSuspended()
{
} /* size: 0 */

// <004CADB4> ../public/tier0/threadtools.h:2666
// member functions: 31
// member variables: 5
// class size: 664
class CWorkerThread : public CThread {
public:
	/* class CThread <ancestor>; */ /* 0 400 */
	/* tier0/threadtools.cpp:6141 */
	void CWorkerThread(CWorkerThread* );
	/* tier0/threadtools.cpp:6151 */
	int CallWorker(CWorkerThread* , unsigned int, unsigned int, bool);
	/* tier0/threadtools.cpp:6158 */
	int CallMaster(CWorkerThread* , unsigned int, unsigned int);
	/* tier0/threadtools.cpp:6317 */
	bool WaitForCall(CWorkerThread* , unsigned int, unsigned int* );
	/* tier0/threadtools.cpp:6310 */
	bool WaitForCall(CWorkerThread* , unsigned int* );
	/* tier0/threadtools.cpp:6330 */
	bool PeekCall(CWorkerThread* , unsigned int* );
	/* tier0/threadtools.cpp:6351 */
	void Reply(CWorkerThread* , unsigned int);
	/* tier0/threadtools.cpp:6239 */
	int WaitForReply(CWorkerThread* , unsigned int);
	/* tier0/threadtools.cpp:6165 */
	CThreadEvent& GetCallHandle(CWorkerThread* );
	/* tier0/threadtools.cpp:6172 */
	unsigned int GetCallParam(const CWorkerThread* );
protected:
	/* tier0/threadtools.cpp:6201 */
	int Call(CWorkerThread* , unsigned int, unsigned int, bool, WaitFunc_t);
	/* ../public/tier0/threadtools.h:2713 */
	typedef uint32 (*WaitFunc_t)(uint32, CThreadEvent** , int, uint32);
	/* tier0/threadtools.cpp:6244 */
	int WaitForReply(CWorkerThread* , unsigned int, WaitFunc_t);
private:
	/* ../public/tier0/threadtools.h:2718 */
	void CWorkerThread(CWorkerThread* , const CWorkerThread& );
	/* ../public/tier0/threadtools.h:2719 */
	CWorkerThread& operator=(CWorkerThread* , const CWorkerThread& );
	CThreadEvent m_EventSend; /* 400 128 */
	CThreadEvent m_EventComplete; /* 528 128 */
	unsigned int m_Param; /* 656 4 */
	int m_ReturnVal; /* 660 4 */
	virtual void ~CWorkerThread(CWorkerThread* );
	void CWorkerThread(class CWorkerThread *); /* linkage=_ZN13CWorkerThreadC4Ev */
	int CallWorker(class CWorkerThread *, unsigned int, unsigned int, bool); /* linkage=_ZN13CWorkerThread10CallWorkerEjjb */
	int CallMaster(class CWorkerThread *, unsigned int, unsigned int); /* linkage=_ZN13CWorkerThread10CallMasterEjj */
	bool WaitForCall(class CWorkerThread *, unsigned int, unsigned int *); /* linkage=_ZN13CWorkerThread11WaitForCallEjPj */
	bool WaitForCall(class CWorkerThread *, unsigned int *); /* linkage=_ZN13CWorkerThread11WaitForCallEPj */
	bool PeekCall(class CWorkerThread *, unsigned int *); /* linkage=_ZN13CWorkerThread8PeekCallEPj */
	void Reply(class CWorkerThread *, unsigned int); /* linkage=_ZN13CWorkerThread5ReplyEj */
	int WaitForReply(class CWorkerThread *, unsigned int); /* linkage=_ZN13CWorkerThread12WaitForReplyEj */
	class CThreadEvent & GetCallHandle(class CWorkerThread *); /* linkage=_ZN13CWorkerThread13GetCallHandleEv */
	unsigned int GetCallParam(const class CWorkerThread  *); /* linkage=_ZNK13CWorkerThread12GetCallParamEv */
	int Call(class CWorkerThread *, unsigned int, unsigned int, bool, WaitFunc_t); /* linkage=_ZN13CWorkerThread4CallEjjbPFjjPP12CThreadEventijE */
	int WaitForReply(class CWorkerThread *, unsigned int, WaitFunc_t); /* linkage=_ZN13CWorkerThread12WaitForReplyEjPFjjPP12CThreadEventijE */
	void CWorkerThread(class CWorkerThread *, const class CWorkerThread  &); /* linkage=_ZN13CWorkerThreadC4ERKS_ */
	class CWorkerThread & operator=(class CWorkerThread *, const class CWorkerThread  &); /* linkage=_ZN13CWorkerThreadaSERKS_ */
	virtual void ~CWorkerThread(class CWorkerThread *); /* linkage=_ZN13CWorkerThreadD4Ev */
};

// <06860A39> ../public/tier0/threadtools.h:2921
void CThreadMutex::CThreadMutex(const char* pName)
{
} /* size: 0 */

// <06860A10> ../public/tier0/threadtools.h:2921
inline void CThreadMutex::CThreadMutex(const char* pName)
{
} /* size: 0 */

// <068609F9> ../public/tier0/threadtools.h:2934
void CThreadMutex::~CThreadMutex()
{
} /* size: 0 */

// <068609DD> ../public/tier0/threadtools.h:2934
inline void CThreadMutex::~CThreadMutex()
{
} /* size: 0 */

// <068609A7> ../public/tier0/threadtools.h:2941
inline void CThreadMutex::Lock(const char* pFileName, int nLineNumber)
{
} /* size: 0 */

// <06860971> ../public/tier0/threadtools.h:2953
inline void CThreadMutex::Unlock(const char* pFileName, int nLineNumber)
{
} /* size: 0 */

// <0451E5D1> ../public/tier0/threadtools.h:3019
void CThreadRWLock::CThreadRWLock(const char* pLockName)
{
} /* size: 0 */

// <0451E5A8> ../public/tier0/threadtools.h:3019
inline void CThreadRWLock::CThreadRWLock(const char* pLockName)
{
} /* size: 0 */

// <0451E572> ../public/tier0/threadtools.h:3045
inline void CThreadRWLock::LockForRead(const char* pFileName, int nLineNumber)
{
} /* size: 0 */

// <0451E53C> ../public/tier0/threadtools.h:3056
inline void CThreadRWLock::UnlockRead(const char* pFileName, int nLineNumber)
{
} /* size: 0 */

// <05732117> ../public/tier0/threadtools.h:3091
// variable: 1
inline void CThreadRWLock_FastRead::LockForRead(const char* pFileName, int nLineNumber)
{
	uint32 nInterlockVal; // 3093
} /* size: 0, variables: 1 */

// <057320D4> ../public/tier0/threadtools.h:3103
// variable: 1
inline void CThreadRWLock_FastRead::UnlockRead(const char* pFileName, int nLineNumber)
{
	uint32 nDecrement; // 3106
} /* size: 0, variables: 1 */

// <00107453> ../public/tier0/threadtools.h:3113
// variable: 1
inline void CThreadRWLock_FastRead::GetActiveAndWaitingLocksForRead()
{
	uint32 nInterlock; // 3115
} /* size: 0, variables: 1 */

// <05732077> ../public/tier0/threadtools.h:3169
// variables: 3
inline void CThreadRWLock_FastRead::LockForWrite(const char* pFileName, int nLineNumber)
{
	ThreadId_t threadID; // 3171
	uint32 nNoWaitingWritesTestValue; // 3179
	uint32 nPrelockValue; // 3189
} /* size: 0, variables: 3 */

// <023843E2> ../public/tier0/threadtools.h:3219
inline void CThreadSpinRWLock::AssignIf(const union LockInfo_t& newValue, const union LockInfo_t& comparand)
{
} /* size: 0 */

// <0238437F> ../public/tier0/threadtools.h:3246
// variables: 2
inline void CThreadSpinRWLock::TryLockForWrite(const char* pFileName, int nLineNumber, const ThreadId_t threadId)
{
	const union LockInfo_t  oldValue; // 3255
	union LockInfo_t newValue; // 3256
} /* size: 0, variables: 2 */

// <004E376F> ../public/tier0/threadtools.h:3276
// variables: 2
inline void CThreadSpinRWLock::TryLockForRead(const char* pFileName, int nLineNumber)
{
	union LockInfo_t oldValue; // 3283
	union LockInfo_t newValue; // 3284
} /* size: 0, variables: 2 */

// <0238433C> ../public/tier0/threadtools.h:3301
// variable: 1
inline void CThreadSpinRWLock::LockForWrite(const char* pFileName, int nLineNumber)
{
	const ThreadId_t  threadId; // 3303
} /* size: 0, variables: 1 */

// <03E8B070> ../public/tier0/threadtools.h:3315
// variable: 1
inline long long unsigned int ReadVolatileMemory<long long unsigned int>(const long long unsigned int* pPtr)
{
	volatile const long long unsigned int* pVolatilePtr; // 3317
} /* size: 0, variables: 1 */

// <03E79EFE> ../public/tier0/threadtools.h:3315
// variable: 1
inline CMorphCompositeSet* ReadVolatileMemory<CMorphCompositeSet*>(CMorphCompositeSet* const* pPtr)
{
	volatile const CMorphCompositeSet** pVolatilePtr; // 3317
} /* size: 0, variables: 1 */

// <03E79EB9> ../public/tier0/threadtools.h:3315
// variable: 1
inline CMorphSet* ReadVolatileMemory<CMorphSet*>(CMorphSet* const* pPtr)
{
	volatile const CMorphSet** pVolatilePtr; // 3317
} /* size: 0, variables: 1 */

// <03E79E74> ../public/tier0/threadtools.h:3315
// variable: 1
inline MorphCompositeDesc_t* ReadVolatileMemory<MorphCompositeDesc_t*>(MorphCompositeDesc_t* const* pPtr)
{
	volatile const MorphCompositeDesc_t** pVolatilePtr; // 3317
} /* size: 0, variables: 1 */

// <03E7709E> ../public/tier0/threadtools.h:3315
// variable: 1
inline FlexDescSetupInfo_t* ReadVolatileMemory<FlexDescSetupInfo_t*>(FlexDescSetupInfo_t* const* pPtr)
{
	volatile const FlexDescSetupInfo_t** pVolatilePtr; // 3317
} /* size: 0, variables: 1 */

// <03E77059> ../public/tier0/threadtools.h:3315
// variable: 1
inline BoneSetupInfo_t* ReadVolatileMemory<BoneSetupInfo_t*>(BoneSetupInfo_t* const* pPtr)
{
	volatile const BoneSetupInfo_t** pVolatilePtr; // 3317
} /* size: 0, variables: 1 */

// <02EB090B> ../public/tier0/threadtools.h:3315
// variable: 1
inline unsigned int ReadVolatileMemory<unsigned int>(const unsigned int* pPtr)
{
	volatile const unsigned int* pVolatilePtr; // 3317
} /* size: 0, variables: 1 */

// <02E8AE0B> ../public/tier0/threadtools.h:3315
// variable: 1
inline CDisplayList* ReadVolatileMemory<CDisplayList*>(CDisplayList* const* pPtr)
{
	volatile const CDisplayList** pVolatilePtr; // 3317
} /* size: 0, variables: 1 */

// <02E8984F> ../public/tier0/threadtools.h:3315
// variable: 1
inline CSceneDrawList* ReadVolatileMemory<CSceneDrawList*>(CSceneDrawList* const* pPtr)
{
	volatile const CSceneDrawList** pVolatilePtr; // 3317
} /* size: 0, variables: 1 */

// <02E23AD4> ../public/tier0/threadtools.h:3315
// variable: 1
inline QueuedSceneObjectUpdateJob_t* ReadVolatileMemory<QueuedSceneObjectUpdateJob_t*>(QueuedSceneObjectUpdateJob_t* const* pPtr)
{
	volatile const QueuedSceneObjectUpdateJob_t** pVolatilePtr; // 3317
} /* size: 0, variables: 1 */

// <00409E05> ../public/tier0/threadtools.h:3315
// variable: 1
inline int ReadVolatileMemory<int>(const int* pPtr)
{
	volatile const int* pVolatilePtr; // 3317
} /* size: 0, variables: 1 */

// <00179487> ../public/tier0/threadtools.h:3315
// variable: 1
inline unsigned char* ReadVolatileMemory<unsigned char*>(unsigned char* const* pPtr)
{
	volatile const unsigned char** pVolatilePtr; // 3317
} /* size: 0, variables: 1 */

// <0014C05F> ../public/tier0/threadtools.h:3329
// member functions: 21
// member variables: 5
// class size: 56
class CThreadLocalScope {
	/* ../public/tier0/threadtools.h:3335 */
	class CScopeCreatedOrDestroyedHandler {
		/* ../public/tier0/threadtools.h:3339 */
		void CScopeCreatedOrDestroyedHandler(CScopeCreatedOrDestroyedHandler* , FN_OnScopeChange);
		/* ../public/tier0/threadtools.h:3338 */
		typedef void (*FN_OnScopeChange)(CThreadLocalScope* , bool);
		/* ../public/tier0/threadtools.h:3340 */
		void ~CScopeCreatedOrDestroyedHandler(CScopeCreatedOrDestroyedHandler* );
	private:
		FN_OnScopeChange m_pHandler; /* 0 8 */
		CScopeCreatedOrDestroyedHandler * m_pNext; /* 8 8 */
	};
	/* ../public/tier0/threadtools.h:3348 */
	void CThreadLocalScope(CThreadLocalScope* , ThreadHandle_t, bool);
	/* ../public/tier0/threadtools.h:3349 */
	void ~CThreadLocalScope(CThreadLocalScope* );
	/* ../public/tier0/threadtools.h:3351 */
	bool IsLocalThreadScope(const CThreadLocalScope* );
	/* ../public/tier0/threadtools.h:3357 */
	CThreadFastMutex& GetScopeListMutex(void);
	/* ../public/tier0/threadtools.h:3358 */
	CThreadLocalScope* FindScopeForThreadHandle(ThreadHandle_t);
	/* ../public/tier0/threadtools.h:3359 */
	CThreadLocalScope* FindScopeForThreadId(ThreadId_t);
	/* ../public/tier0/threadtools.h:3361 */
	const char* GetThreadName(const CThreadLocalScope* );
	/* ../public/tier0/threadtools.h:3362 */
	void SetThreadName(CThreadLocalScope* , const char* );
	/* ../public/tier0/threadtools.h:3364 */
	int GetTier0ThreadID(const CThreadLocalScope* );
protected:
	CThreadLocalScope * m_pAllScopesListNext; /* 0 8 */
	ThreadHandle_t m_hOwningThread; /* 8 8 */
	int m_nTier0ThreadID; /* 16 4 */
	char m_szThreadName[32]; /* 20 32 */
	int m_nInternalFlags; /* 52 4 */
	void CThreadLocalScope(class CThreadLocalScope *, ThreadHandle_t, bool); /* linkage=_ZN17CThreadLocalScopeC4EP16ThreadHandle_t__b */
	void ~CThreadLocalScope(class CThreadLocalScope *); /* linkage=_ZN17CThreadLocalScopeD4Ev */
	bool IsLocalThreadScope(const class CThreadLocalScope  *); /* linkage=_ZNK17CThreadLocalScope18IsLocalThreadScopeEv */
	class CThreadFastMutex & GetScopeListMutex(void); /* linkage=_ZN17CThreadLocalScope17GetScopeListMutexEv */
	/* <4e678d> tier0/threadtools.cpp:7406 */
	class CThreadLocalScope * FindScopeForThreadHandle(ThreadHandle_t); /* linkage=_ZN17CThreadLocalScope24FindScopeForThreadHandleEP16ThreadHandle_t__ */
	class CThreadLocalScope * FindScopeForThreadId(ThreadId_t); /* linkage=_ZN17CThreadLocalScope20FindScopeForThreadIdEy */
	const char  * GetThreadName(const class CThreadLocalScope  *); /* linkage=_ZNK17CThreadLocalScope13GetThreadNameEv */
	void SetThreadName(class CThreadLocalScope *, const char  *); /* linkage=_ZN17CThreadLocalScope13SetThreadNameEPKc */
	int GetTier0ThreadID(const class CThreadLocalScope  *); /* linkage=_ZNK17CThreadLocalScope16GetTier0ThreadIDEv */
};

// <004C3B86> ../public/tier0/threadtools.h:3329
// member functions: 21
// member variables: 5
// class size: 56
class CThreadLocalScope {
	/* ../public/tier0/threadtools.h:3335 */
	class CScopeCreatedOrDestroyedHandler {
		/* ../public/tier0/threadtools.h:3339 */
		void CScopeCreatedOrDestroyedHandler(CScopeCreatedOrDestroyedHandler* , FN_OnScopeChange);
		/* ../public/tier0/threadtools.h:3338 */
		typedef void (*FN_OnScopeChange)(CThreadLocalScope* , bool);
		/* ../public/tier0/threadtools.h:3340 */
		void ~CScopeCreatedOrDestroyedHandler(CScopeCreatedOrDestroyedHandler* );
	private:
		FN_OnScopeChange m_pHandler; /* 0 8 */
		CScopeCreatedOrDestroyedHandler * m_pNext; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/threadtools.h:3348 */
	void CThreadLocalScope(CThreadLocalScope* , ThreadHandle_t, bool);
	/* ../public/tier0/threadtools.h:3349 */
	void ~CThreadLocalScope(CThreadLocalScope* );
	/* ../public/tier0/threadtools.h:3351 */
	bool IsLocalThreadScope(const CThreadLocalScope* );
	/* ../public/tier0/threadtools.h:3357 */
	CThreadFastMutex& GetScopeListMutex(void);
	/* ../public/tier0/threadtools.h:3358 */
	CThreadLocalScope* FindScopeForThreadHandle(ThreadHandle_t);
	/* ../public/tier0/threadtools.h:3359 */
	CThreadLocalScope* FindScopeForThreadId(ThreadId_t);
	/* ../public/tier0/threadtools.h:3361 */
	const char* GetThreadName(const CThreadLocalScope* );
	/* ../public/tier0/threadtools.h:3362 */
	void SetThreadName(CThreadLocalScope* , const char* );
	/* ../public/tier0/threadtools.h:3364 */
	int GetTier0ThreadID(const CThreadLocalScope* );
protected:
	CThreadLocalScope * m_pAllScopesListNext; /* 0 8 */
	ThreadHandle_t m_hOwningThread; /* 8 8 */
	int m_nTier0ThreadID; /* 16 4 */
	char m_szThreadName[32]; /* 20 32 */
	int m_nInternalFlags; /* 52 4 */
	void CThreadLocalScope(class CThreadLocalScope *, ThreadHandle_t, bool); /* linkage=_ZN17CThreadLocalScopeC4EP16ThreadHandle_t__b */
	void ~CThreadLocalScope(class CThreadLocalScope *); /* linkage=_ZN17CThreadLocalScopeD4Ev */
	bool IsLocalThreadScope(const class CThreadLocalScope  *); /* linkage=_ZNK17CThreadLocalScope18IsLocalThreadScopeEv */
	class CThreadFastMutex & GetScopeListMutex(void); /* linkage=_ZN17CThreadLocalScope17GetScopeListMutexEv */
	/* <4e678d> tier0/threadtools.cpp:7406 */
	class CThreadLocalScope * FindScopeForThreadHandle(ThreadHandle_t); /* linkage=_ZN17CThreadLocalScope24FindScopeForThreadHandleEP16ThreadHandle_t__ */
	class CThreadLocalScope * FindScopeForThreadId(ThreadId_t); /* linkage=_ZN17CThreadLocalScope20FindScopeForThreadIdEy */
	const char  * GetThreadName(const class CThreadLocalScope  *); /* linkage=_ZNK17CThreadLocalScope13GetThreadNameEv */
	void SetThreadName(class CThreadLocalScope *, const char  *); /* linkage=_ZN17CThreadLocalScope13SetThreadNameEPKc */
	int GetTier0ThreadID(const class CThreadLocalScope  *); /* linkage=_ZNK17CThreadLocalScope16GetTier0ThreadIDEv */
};

// <00468A8C> ../public/tier0/threadtools.h:3339
void CScopeCreatedOrDestroyedHandler::CScopeCreatedOrDestroyedHandler(FN_OnScopeChange pHandler)
{
} /* size: 0 */

// <00468A70> ../public/tier0/threadtools.h:3340
void CScopeCreatedOrDestroyedHandler::~CScopeCreatedOrDestroyedHandler()
{
} /* size: 0 */

