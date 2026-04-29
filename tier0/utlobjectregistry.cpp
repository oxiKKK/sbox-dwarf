
//
// tier0/utlobjectregistry.cpp
//
//	referenced by: libtier0.so
//
//	functions: 5
//

// <00567EF2> tier0/utlobjectregistry.cpp:19
// variables: 3
// function calls: 30
void* FindRegisteredGlobalObjectInternal(const char* pObjectName)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_21; // 21
	UtlHashHandle_t nHandle; // 22
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 21
	HashStringFastCaseless(const char* pszKey); // 96
	CHash<true>::operator(
			const Entry_t& entry);  // 239
	{
		int bucketCount; // 249
		CUtlVectorBase<CUtlVector<CUtlHashDict<void::Count(); // 249
	}
	CUtlMemory<CUtlVector<CUtlHashDict<void::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlVector<CUtlHashDict<void::operator[](
			int i);  // 254
	CUtlVectorBase<CUtlHashDict<void::Count(); // 255
	CUtlMemory<CUtlHashDict<void::operator[](
			int i);  // 609
	CUtlVectorBase<CUtlHashDict<void::Element(
		int i);  // 258
	CCompare<true>::operator(
			const Entry_t& entry1,
			const Entry_t& entry2);  // 258
	CUtlHash<CUtlHashDict<void::DoFind(
		const Entry_t& src,
		unsigned int* pBucket,
		int* pIndex);  // 278
	{
	}
	{
	}
	CUtlHash<CUtlHashDict<void::BuildHandle(
			int ndxBucket,
			int ndxKeyData);  // 280
	CUtlHash<CUtlHashDict<void::Find(
		const Entry_t& src);  // 330
	CUtlHashDict<void::Find(
		const char* pName);  // 22
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 31
	CUtlHash<CUtlHashDict<void::GetBucketIndex(
			UtlHashHandle_t handle);  // 403
	CUtlMemory<CUtlVector<CUtlHashDict<void::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlVector<CUtlHashDict<void::operator[](
			int i);  // 406
	CUtlMemory<CUtlHashDict<void::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlHashDict<void::Element(
		int i);  // 406
	CUtlHash<CUtlHashDict<void::operator[](
			UtlHashHandle_t handle);  // 127
	CUtlHashDict<void::Element(
		UtlHashHandle_t handle);  // 29
} /* size: 0, variables: 2, inline expansions: 29 (1571 bytes) */

// <00567500> tier0/utlobjectregistry.cpp:34
// variables: 2
// function calls: 35
void RegisterGlobalObject(const char* pObjectName, void* pObject)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_36; // 36
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 36
	HashStringFastCaseless(const char* pszKey); // 96
	CHash<true>::operator(
			const Entry_t& entry);  // 239
	{
		int bucketCount; // 249
		CUtlVectorBase<CUtlVector<CUtlHashDict<void::Count(); // 249
	}
	CUtlMemory<CUtlVector<CUtlHashDict<void::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlVector<CUtlHashDict<void::operator[](
			int i);  // 254
	CUtlVectorBase<CUtlHashDict<void::Count(); // 255
	CUtlMemory<CUtlHashDict<void::operator[](
			int i);  // 609
	CUtlVectorBase<CUtlHashDict<void::Element(
		int i);  // 258
	CCompare<true>::operator(
			const Entry_t& entry1,
			const Entry_t& entry2);  // 258
	CUtlHash<CUtlHashDict<void::DoFind(
		const Entry_t& src,
		unsigned int* pBucket,
		int* pIndex);  // 312
	{
	}
	{
	}
	CUtlHash<CUtlHashDict<void::BuildHandle(
			int ndxBucket,
			int ndxKeyData);  // 315
	CUtlMemory<CUtlVector<CUtlHashDict<void::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlVector<CUtlHashDict<void::operator[](
			int i);  // 319
	CUtlMemory<CUtlHashDict<void::NumAllocated(); // 1196
	CUtlMemory<CUtlHashDict<void::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlHashDict<void::Element(
		int i);  // 1201
	CopyConstruct<CUtlHashDict<void*>::Entry_t>(Entry_t* pMemory,
							const Entry_t& src);  // 1201
	CUtlMemory<CUtlHashDict<void::Base(); // 112
	CUtlVectorBase<CUtlHashDict<void::Base(); // 368
	CUtlVectorBase<CUtlHashDict<void::ResetDbgInfo(); // 824
	CUtlVectorBase<CUtlHashDict<void::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CUtlHashDict<void::AddToTail(
			const Entry_t& src);  // 319
	{
	}
	{
	}
	CUtlHash<CUtlHashDict<void::BuildHandle(
			int ndxBucket,
			int ndxKeyData);  // 321
	CUtlHash<CUtlHashDict<void::Insert(
		const Entry_t& src,
		bool* pDidInsert);  // 286
	CUtlHashDict<void::Insert(
		const char* pName,
		void* const& element);  // 37
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 38
} /* size: 0, variables: 1, inline expansions: 34 (2107 bytes) */

// <00566D6C> tier0/utlobjectregistry.cpp:41
// variables: 2
// function calls: 24
void UnRegisterGlobalObject(const char* pObjectName)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_43; // 43
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 943
	Lock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
			const CThreadFastMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 43
	HashStringFastCaseless(const char* pszKey); // 96
	CHash<true>::operator(
			const Entry_t& entry);  // 239
	{
		int bucketCount; // 249
		CUtlVectorBase<CUtlVector<CUtlHashDict<void::Count(); // 249
	}
	CUtlMemory<CUtlVector<CUtlHashDict<void::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlVector<CUtlHashDict<void::operator[](
			int i);  // 254
	CUtlVectorBase<CUtlHashDict<void::Count(); // 255
	CUtlMemory<CUtlHashDict<void::operator[](
			int i);  // 609
	CUtlVectorBase<CUtlHashDict<void::Element(
		int i);  // 258
	CCompare<true>::operator(
			const Entry_t& entry1,
			const Entry_t& entry2);  // 258
	CUtlHash<CUtlHashDict<void::DoFind(
		const Entry_t& src,
		unsigned int* pBucket,
		int* pIndex);  // 278
	{
	}
	{
	}
	CUtlHash<CUtlHashDict<void::BuildHandle(
			int ndxBucket,
			int ndxKeyData);  // 280
	CUtlHash<CUtlHashDict<void::Find(
		const Entry_t& src);  // 330
	CUtlHashDict<void::Find(
		const char* pName);  // 208
	CUtlHashDict<void::Remove(
		const char* search);  // 44
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 45
} /* size: 0, variables: 1, inline expansions: 23 (1866 bytes) */

// <00566BFA> tier0/utlobjectregistry.cpp:47
// function calls: 4
void LockGlobalObjectRegistry(void)
{
	ThreadInterlockedAssignIf64(volatile int64* pDest,
					int64 value,
					int64 comparand);  // 800
	CThreadFastMutex::TryLockInline(
			const char* pFileName,
			int nLineNumber,
			const ThreadId_t  threadId);  // 837
	ThreadPause(void); // 839
	CThreadFastMutex::Lock(
		const char* pFileName,
		int nLineNumber,
		unsigned int nSpinSleepTime);  // 49
} /* size: 108, inline expansions: 4 (158 bytes) */

// <00566B4C> tier0/utlobjectregistry.cpp:52
// function calls: 2
void UnlockGlobalObjectRegistry(void)
{
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 54
} /* size: 42, inline expansions: 2 (49 bytes) */

