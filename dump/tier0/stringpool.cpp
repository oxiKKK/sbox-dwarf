
//
// tier0/stringpool.cpp
//
//	referenced by: libtier0.so
//
//	functions: 27
//

// <004A955F> tier0/stringpool.cpp:20
bool FastStrLessInsensitive(const char* const& pszLeft, const char* const& pszRight)
{
} /* size: 24 */

// <004A94CE> tier0/stringpool.cpp:25
// function call: 1
bool StrLessSensitive(const char* const& pszLeft, const char* const& pszRight)
{
	V_strcmp(const char* s1,
		const char* s2);  // 27
} /* size: 24, inline expansions: 1 (11 bytes) */

// <004A9272> tier0/stringpool.cpp:33
// function calls: 10
void CStringPool::CStringPool(StringPoolCase_t caseSensitivity)
{
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 34
	CUtlMemory<UtlRBTreeNode_t<char const::ValidateGrowSize(); // 475
	CUtlMemory<UtlRBTreeNode_t<char const::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<UtlRBTreeNode_t<char const::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<char const::InvalidIterator(); // 489
	CUtlRBTree<char const::ResetDbgInfo()(char const* const&, char const* const&), CUtlMemory<UtlRBTreeN this); // 491
	CUtlRBTree<char const::CUtlRBTree(
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 34
} /* size: 119, inline expansions: 10 (131 bytes) */

// <004A9249> tier0/stringpool.cpp:33
void CStringPool::CStringPool(StringPoolCase_t caseSensitivity)
{
} /* size: 0 */

// <004A9114> tier0/stringpool.cpp:41
// function calls: 5
void CStringPool::~CStringPool()
{
	CUtlMemory<UtlRBTreeNode_t<char const::IsExternallyAllocated(); // 905
	CUtlMemory<UtlRBTreeNode_t<char const::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<char const::Purge(); // 1287
	CUtlRBTree<char const::Purge()(char const* const&, char const* const&), CUtlMemory<UtlRBTreeN this); // 509
	CUtlRBTree<char const::~CUtlRBTree()(char const* const&, char const* const&), CUtlMemory<UtlRBTreeN this); // 44
} /* size: 78, inline expansions: 5 (131 bytes) */

// <004A90F7> tier0/stringpool.cpp:41
void CStringPool::~CStringPool()
{
} /* size: 0 */

// <004A9096> tier0/stringpool.cpp:49
// function call: 1
void CStringPool::Count()
{
	CUtlRBTree<char const::Count()(char const* const&, char const* const&), CUtlMemory<UtlR this); // 51
} /* size: 9, inline expansions: 1 (0 bytes) */

// <004A8BCD> tier0/stringpool.cpp:56
// variables: 2
// function calls: 16
void CStringPool::Find(const char* pszValue)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_58; // 58
	short unsigned int i; // 60
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
			int nLineNumber);  // 58
	CUtlMemory<UtlRBTreeNode_t<char const::IsIdxValid(
			short unsigned int i);  // 661
	CUtlMemory<UtlRBTreeNode_t<char const::IsIdxAfter(
			short unsigned int i,
			const Iterator_t& it);  // 664
	CUtlMemory<UtlRBTreeNode_t<char const::operator[](
			short unsigned int i);  // 611
	CUtlRBTree<char const::LeftChild(
			short unsigned int i);  // 667
	CUtlRBTree<char const::IsValidIndex(
			short unsigned int i);  // 659
	CUtlRBTree<char const::IsValidIndex(
			short unsigned int i);  // 61
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 65
} /* size: 196, variables: 2, inline expansions: 16 (427 bytes) */

// <004A8493> tier0/stringpool.cpp:67
// variables: 6
// function calls: 22
void CStringPool::Allocate(const char* pszValue)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_69; // 69
	char* pszNew; // 71
	short unsigned int i; // 73
	bool bNew; // 74
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
			int nLineNumber);  // 69
	CUtlMemory<UtlRBTreeNode_t<char const::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<char const::Element(
		short unsigned int i);  // 551
	CUtlRBTree<char const::operator[](
			short unsigned int i);  // 77
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 83
	CUtlMemory<UtlRBTreeNode_t<char const::operator[](
			short unsigned int i);  // 611
	CUtlRBTree<char const::LeftChild(
			short unsigned int i);  // 1667
	CUtlMemory<UtlRBTreeNode_t<char const::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<char const::Element(
		short unsigned int i);  // 1665
	CUtlRBTree<char const::Element(
		short unsigned int i);  // 1669
	CUtlMemory<UtlRBTreeNode_t<char const::operator[](
			short unsigned int i);  // 617
	CUtlRBTree<char const::RightChild(
			short unsigned int i);  // 1677
	CUtlRBTree<char const::FindInsertionPosition(
				const char* const& insert,
				bool bCheckForDuplicates,
				short unsigned int& parent,
				bool& leftchild,
				bool& isDuplicate);  // 1693
	{
		short unsigned int newNode; // 1709
		{
		}
	}
	{
		short unsigned int newNode; // 1696
	}
	CUtlRBTree<char const::Insert(
		const char* const& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 80
} /* size: 0, variables: 4, inline expansions: 22 (665 bytes) */

// <004A7EDC> tier0/stringpool.cpp:88
// variables: 2
// function calls: 21
void CStringPool::FreeAll()
{
	short unsigned int i; // 90
	CUtlMemory<UtlRBTreeNode_t<char const::operator[](
			short unsigned int i);  // 611
	CUtlRBTree<char const::LeftChild(
			short unsigned int i);  // 1329
	CUtlRBTree<char const::FirstInorder()(char const* const&, char const* const&), CUtlMemory<UtlR this); // 90
	CUtlMemory<UtlRBTreeNode_t<char const::operator[](
			short unsigned int i);  // 539
	CUtlRBTree<char const::Element(
		short unsigned int i);  // 551
	CUtlRBTree<char const::operator[](
			short unsigned int i);  // 93
	CUtlMemory<UtlRBTreeNode_t<char const::IsIdxValid(
			short unsigned int i);  // 661
	CUtlMemory<UtlRBTreeNode_t<char const::IsIdxAfter(
			short unsigned int i,
			const Iterator_t& it);  // 664
	CUtlMemory<UtlRBTreeNode_t<char const::operator[](
			short unsigned int i);  // 611
	CUtlRBTree<char const::LeftChild(
			short unsigned int i);  // 667
	CUtlRBTree<char const::IsValidIndex(
			short unsigned int i);  // 659
	CUtlRBTree<char const::IsValidIndex(
			short unsigned int i);  // 1339
	CUtlRBTree<char const::RightChild(
			short unsigned int i);  // 1343
	{
		short unsigned int left; // 1346
		CUtlMemory<UtlRBTreeNode_t<char const::operator[](
				short unsigned int i);  // 611
		CUtlRBTree<char const::LeftChild(
				short unsigned int i);  // 1347
	}
	CUtlRBTree<char const::Parent(
		short unsigned int i);  // 1352
	CUtlMemory<UtlRBTreeNode_t<char const::operator[](
			short unsigned int i);  // 617
	CUtlRBTree<char const::RightChild(
			short unsigned int i);  // 633
	CUtlRBTree<char const::IsRightChild(
			short unsigned int i);  // 1353
	CUtlRBTree<char const::Parent(
		short unsigned int i);  // 1357
	CUtlRBTree<char const::NextInorder(
			short unsigned int i);  // 94
} /* size: 281, variables: 1, inline expansions: 19 (417 bytes) */

// <004A77BA> tier0/stringpool.cpp:103
// variables: 2
// function calls: 30
void CCountedStringPool::CCountedStringPool(StringPoolCase_t caseSensitivity)
{
	{
		int i; // 107
	}
	CUtlMemory<short unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<short unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::CUtlVector(); // 103
	CUtlMemory<short unsigned int, int>::Base(); // 112
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Base(); // 368
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::AddMultipleToTail(
				int num);  // 1071
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::EnsureCount(
			int num);  // 105
	{
		int i; // 107
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 107
	}
	CUtlMemory<CCountedStringPool::hash_item_t, int>::NumAllocated(); // 1143
	CUtlMemory<CCountedStringPool::hash_item_t, int>::Base(); // 112
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::Base(); // 368
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::AddToTail(); // 113
	CUtlMemory<CCountedStringPool::hash_item_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::operator[](
			int i);  // 114
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::operator[](
			int i);  // 115
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::operator[](
			int i);  // 116
	CUtlMemory<CCountedStringPool::hash_item_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CCountedStringPool::hash_item_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::CUtlVector(); // 103
} /* size: 251, inline expansions: 29 (429 bytes) */

// <004A7789> tier0/stringpool.cpp:103
// variable: 1
void CCountedStringPool::CCountedStringPool(StringPoolCase_t caseSensitivity)
{
	{
		int i; // 107
	}
} /* size: 0 */

// <004A744A> tier0/stringpool.cpp:121
// function calls: 17
void CCountedStringPool::~CCountedStringPool()
{
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CCountedStringPool::hash_item_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CCountedStringPool::hash_item_t, int>::Purge(); // 903
	CUtlMemory<CCountedStringPool::hash_item_t, int>::Purge(); // 1799
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::Purge(); // 560
	ValidateAlignment<CCountedStringPool::hash_item_t>(void); // 508
	CUtlMemory<CCountedStringPool::hash_item_t, int>::Purge(); // 510
	CUtlMemory<CCountedStringPool::hash_item_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::~CUtlVector(); // 124
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<short unsigned int, int>::Purge(); // 903
	CUtlMemory<short unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Purge(); // 560
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVector(); // 124
} /* size: 102, inline expansions: 17 (268 bytes) */

// <004A73E4> tier0/stringpool.cpp:121
void CCountedStringPool::~CCountedStringPool()
{
} /* size: 36 */

// <004A6DF9> tier0/stringpool.cpp:126
// variable: 1
// function calls: 25
void CCountedStringPool::FreeAll()
{
	int i; // 128
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 131
	CUtlMemory<short unsigned int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
			int i);  // 133
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::Count(); // 139
	CUtlMemory<CCountedStringPool::hash_item_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::operator[](
			int i);  // 141
	CUtlMemory<CCountedStringPool::hash_item_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::operator[](
			int i);  // 144
	CUtlMemory<CCountedStringPool::hash_item_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::operator[](
			int i);  // 145
	CUtlMemory<CCountedStringPool::hash_item_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::operator[](
			int i);  // 146
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::RemoveAll(); // 151
	CUtlMemory<CCountedStringPool::hash_item_t, int>::NumAllocated(); // 1143
	CUtlMemory<CCountedStringPool::hash_item_t, int>::Base(); // 112
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::Base(); // 368
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::AddToTail(); // 152
	CUtlMemory<CCountedStringPool::hash_item_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::operator[](
			int i);  // 153
	CUtlMemory<CCountedStringPool::hash_item_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::operator[](
			int i);  // 154
	CUtlMemory<CCountedStringPool::hash_item_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::operator[](
			int i);  // 155
} /* size: 246, variables: 1, inline expansions: 25 (121 bytes) */

// <004AA7A4> tier0/stringpool.cpp:158
// function calls: 2
void CCountedStringPool::Hash(const char* pszKey)
{
	HashStringFastCaseless(const char* pszKey); // 162
	CCountedStringPool::Hash(
		const char* pszKey);  // 158
} /* size: 37, inline expansions: 2 (42 bytes) */

// <004A6DD4> tier0/stringpool.cpp:158
void CCountedStringPool::Hash(const char* pszKey)
{
} /* size: 0 */

// <004A6BFA> tier0/stringpool.cpp:167
// variables: 2
// function calls: 6
void CCountedStringPool::FindStringHandle(const char* pIntrinsic)
{
	short unsigned int nHashBucketIndex; // 172
	short unsigned int nCurrentBucket; // 173
	CUtlMemory<short unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
			int i);  // 173
	CUtlMemory<CCountedStringPool::hash_item_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::operator[](
			int i);  // 180
	CUtlMemory<CCountedStringPool::hash_item_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::operator[](
			int i);  // 178
} /* size: 119, variables: 2, inline expansions: 6 (60 bytes) */

// <004A6B19> tier0/stringpool.cpp:191
// function calls: 2
void CCountedStringPool::FindString(const char* pIntrinsic)
{
	CUtlMemory<CCountedStringPool::hash_item_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::operator[](
			int i);  // 197
} /* size: 51, inline expansions: 2 (6 bytes) */

// <004AB0A9> tier0/stringpool.cpp:200
// variables: 3
// function calls: 29
void CCountedStringPool::ReferenceStringHandle(const char* pIntrinsic)
{
	short unsigned int nHashBucketIndex; // 205
	short unsigned int nCurrentBucket; // 206
	char* pCopyString; // 242
	CUtlMemory<short unsigned int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
			int i);  // 206
	CUtlMemory<CCountedStringPool::hash_item_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::operator[](
			int i);  // 213
	CUtlMemory<CCountedStringPool::hash_item_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::operator[](
			int i);  // 216
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::Count(); // 232
	{
	}
	CUtlMemory<CCountedStringPool::hash_item_t, int>::NumAllocated(); // 1143
	CUtlMemory<CCountedStringPool::hash_item_t, int>::Base(); // 112
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::Base(); // 368
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::AddToTail(); // 233
	CUtlMemory<CCountedStringPool::hash_item_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::operator[](
			int i);  // 228
	CUtlMemory<CCountedStringPool::hash_item_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::operator[](
			int i);  // 236
	CUtlMemory<short unsigned int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
			int i);  // 239
	V_strlen(const char* str); // 242
	CUtlMemory<CCountedStringPool::hash_item_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::operator[](
			int i);  // 239
	CUtlMemory<short unsigned int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
			int i);  // 240
	strcpy(char* __dest,
		const char* __src);  // 124
	V_strcpy(char* dest,
		const char* src);  // 243
	CUtlMemory<CCountedStringPool::hash_item_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::operator[](
			int i);  // 244
	CCountedStringPool::ReferenceStringHandle(
				const char* pIntrinsic);  // 200
} /* size: 0, variables: 3, inline expansions: 29 (656 bytes) */

// <004A6A97> tier0/stringpool.cpp:200
// variables: 5
void CCountedStringPool::ReferenceStringHandle(const char* pIntrinsic)
{
	short unsigned int nHashBucketIndex; // 205
	short unsigned int nCurrentBucket; // 206
	const char   __FUNCTION__; // 43400
	char* pCopyString; // 242
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 232
	}
} /* size: 0, variables: 4 */

// <004A69B6> tier0/stringpool.cpp:250
// function calls: 2
void CCountedStringPool::ReferenceString(const char* pIntrinsic)
{
	CUtlMemory<CCountedStringPool::hash_item_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::operator[](
			int i);  // 255
} /* size: 51, inline expansions: 2 (6 bytes) */

// <004A6444> tier0/stringpool.cpp:258
// variables: 3
// function calls: 21
void CCountedStringPool::DereferenceString(const char* pIntrinsic)
{
	short unsigned int nHashBucketIndex; // 264
	short unsigned int nCurrentBucket; // 265
	{
		short unsigned int previous; // 271
		CUtlMemory<CCountedStringPool::hash_item_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::operator[](
				int i);  // 273
		CUtlMemory<CCountedStringPool::hash_item_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::operator[](
				int i);  // 276
		CUtlMemory<CCountedStringPool::hash_item_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::operator[](
				int i);  // 281
		CUtlMemory<short unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
				int i);  // 285
		CUtlMemory<CCountedStringPool::hash_item_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::operator[](
				int i);  // 292
		CUtlMemory<CCountedStringPool::hash_item_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::operator[](
				int i);  // 293
		CUtlMemory<CCountedStringPool::hash_item_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::operator[](
				int i);  // 294
		CUtlMemory<CCountedStringPool::hash_item_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::operator[](
				int i);  // 296
		CUtlMemory<CCountedStringPool::hash_item_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::operator[](
				int i);  // 289
	}
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 264
	CUtlMemory<short unsigned int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
			int i);  // 265
} /* size: 324, variables: 2, inline expansions: 3 (14 bytes) */

// <004A6387> tier0/stringpool.cpp:307
// function calls: 2
void CCountedStringPool::HandleToString(short unsigned int handle)
{
	CUtlMemory<CCountedStringPool::hash_item_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::operator[](
			int i);  // 309
} /* size: 19, inline expansions: 2 (6 bytes) */

// <004A625B> tier0/stringpool.cpp:312
// variables: 2
// function calls: 3
void CCountedStringPool::SpewStrings()
{
	int i; // 314
	{
		const char* string; // 317
		CUtlMemory<CCountedStringPool::hash_item_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::operator[](
				int i);  // 317
	}
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::Count(); // 315
} /* size: 119, variables: 1, inline expansions: 1 (8 bytes) */

// <004A5AB3> tier0/stringpool.cpp:356
// variables: 3
// function calls: 28
void CCountedStringPool::SaveToBuffer(CUtlBuffer& buffer)
{
	{
		int i; // 371
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 371
		CUtlMemory<short unsigned int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
				int i);  // 373
		CUtlBuffer::PutUnsignedShort(
				short unsigned int s);  // 373
	}
	{
		int i; // 377
		{
			const char* pString; // 382
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<unsigned char>(
							unsigned char src);  // 1204
			CUtlBuffer::PutTypeBin<unsigned char>(
							unsigned char src);  // 1315
			CUtlBuffer::IsText(); // 1313
			CUtlBuffer::PutUnsignedShort(
					short unsigned int s);  // 1319
			CUtlBuffer::PutUnsignedChar(
					unsigned char c);  // 380
			CUtlMemory<CCountedStringPool::hash_item_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::operator[](
					int i);  // 382
			V_strlen(const char* str); // 383
			CUtlMemory<CCountedStringPool::hash_item_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::operator[](
					int i);  // 379
			CUtlBuffer::PutUnsignedShort(
					short unsigned int s);  // 379
			CUtlMemory<CCountedStringPool::hash_item_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::operator[](
					int i);  // 380
		}
		CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::Count(); // 377
	}
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::Count(); // 358
	CUtlBuffer::PutInt(
		int i);  // 366
	CUtlBuffer::PutUnsignedShort(
			short unsigned int s);  // 368
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 370
	CUtlBuffer::PutInt(
		int i);  // 370
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::Count(); // 376
	CUtlBuffer::PutInt(
		int i);  // 376
	CUtlBuffer::IsValid(); // 390
} /* size: 401, inline expansions: 8 (56 bytes) */

// <004A4BF4> tier0/stringpool.cpp:393
// variables: 6
// function calls: 53
void CCountedStringPool::RestoreFromBuffer(CUtlBuffer& buffer)
{
	int signature; // 395
	int hashCount; // 406
	int tableCount; // 414
	char tempString; // 420
	{
		int i; // 409
		CUtlBuffer::BGetUnsignedShort(
					short unsigned int* pOutUShort);  // 958
		CUtlBuffer::GetUnsignedShort(); // 411
		CUtlMemory<short unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
				int i);  // 411
	}
	{
		int i; // 421
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<short unsigned int>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
		CUtlBuffer::BGetTypeText<short unsigned int>(
						short unsigned int& value,
						int nRadix);  // 1053
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 1043
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 690
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 672
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 1049
		CUtlBuffer::IsText(); // 1047
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 944
		CUtlBuffer::GetUnsignedChar(); // 424
		CUtlMemory<CCountedStringPool::hash_item_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::operator[](
				int i);  // 424
		CUtlMemory<CCountedStringPool::hash_item_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::operator[](
				int i);  // 426
		CUtlBuffer::BGetUnsignedShort(
					short unsigned int* pOutUShort);  // 958
		CUtlBuffer::GetUnsignedShort(); // 423
		CUtlMemory<CCountedStringPool::hash_item_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::operator[](
				int i);  // 423
	}
	CUtlBuffer::BGetInt(
		int* pOutInt);  // 965
	CUtlBuffer::GetInt(); // 395
	CUtlBuffer::BGetUnsignedShort(
				short unsigned int* pOutUShort);  // 958
	CUtlBuffer::GetUnsignedShort(); // 404
	CUtlBuffer::BGetInt(
		int* pOutInt);  // 965
	CUtlBuffer::GetInt(); // 406
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<short unsigned int, int>::NumAllocated(); // 782
	CUtlMemory<short unsigned int, int>::Base(); // 112
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Base(); // 368
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::SetCount(
		int count);  // 407
	CUtlBuffer::BGetInt(
		int* pOutInt);  // 965
	CUtlBuffer::GetInt(); // 414
	CUtlBuffer::IsValid(); // 429
	CUtlMemory<CCountedStringPool::hash_item_t, int>::NumAllocated(); // 782
	CUtlMemory<CCountedStringPool::hash_item_t, int>::Base(); // 112
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::Base(); // 368
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CCountedStringPool::hash_item_t, CUtlMemory<CCountedStringPool::hash_item_t, int> >::AddMultipleToTail(
				int num);  // 417
} /* size: 768, variables: 4, inline expansions: 29 (997 bytes) */

