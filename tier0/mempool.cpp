
//
// tier0/mempool.cpp
//
//	referenced by: libtier0.so
//
//	functions: 44
//	class: 1
//

// <002A34EE> tier0/mempool.cpp:40
// member functions: 3
// member variable: 1
// class size: 56
class CUtlMemoryPoolBase_Extended : public CUtlMemoryPoolBase {
	/* tier0/mempool.cpp:43 */
	class CBlob_Disabled : public CBlob {
	public:
		/* class CBlob <ancestor>; */ /* 0 16 */
		CUtlRBTree<void*, int, bool (*)(void* const&, void* const&), CUtlMemory<UtlRBTreeNode_t<void*, int>, int> > m_DisabledModeAllocations; /* 16 48* /
		CThreadFastMutex m_DisabledModeAllocationsMutex; /* 64 24 */
		void ~CBlob_Disabled(CBlob_Disabled* );
		void CBlob_Disabled(CBlob_Disabled* );
	};
public:
	/* class CUtlMemoryPoolBase <ancestor>; */ /* 0 56 */
} __attribute__((__aligned__(8)));

// <002B1379> tier0/mempool.cpp:43
void CBlob_Disabled::CBlob_Disabled()
{
} /* size: 0 */

// <002B135D> tier0/mempool.cpp:43
inline void CBlob_Disabled::CBlob_Disabled()
{
} /* size: 0 */

// <002B0AB8> tier0/mempool.cpp:43
void CBlob_Disabled::~CBlob_Disabled()
{
} /* size: 0 */

// <002B0A9C> tier0/mempool.cpp:43
inline void CBlob_Disabled::~CBlob_Disabled()
{
} /* size: 0 */

// <002B1390> tier0/mempool.cpp:102
void SetErrorReportFunc(MemoryPoolReportFunc_t func)
{
} /* size: 12 */

// <002B0B9A> tier0/mempool.cpp:110
// variables: 4
// function calls: 29
void CUtlMemoryPoolBase::CUtlMemoryPoolBase(int blockSize, int numElements, int nAlignment, MemoryPoolGrowType_t growMode, const char *)
{
	{
		{
		}
		{
		}
		{
			CBlob_Disabled* pDisabledBlob; // 134
		}
		{
			int* _pCrash; // 143
		}
	}
	{
		GetLoopbackAddress(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::Fre this); // 149
		CTSFastPushQueue_Base(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_ this); // 110
		{
		}
		Max<short unsigned int>(const short unsigned int& val1,
					const short unsigned int& val2);  // 123
		IsPowerOfTwo(int value); // 124
		{
		}
		AlignValue<int>(int val,
				uintp alignment);  // 126
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 128
		{
			CBlob_Disabled* pDisabledBlob; // 134
			CUtlMemory<UtlRBTreeNode_t<void::ValidateGrowSize(); // 475
			CUtlMemory<UtlRBTreeNode_t<void::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 484
			InvalidIndex(void); // 486
			InvalidIndex(void); // 488
			Iterator_t::Iterator_t(
					int i);  // 86
			CUtlMemory<UtlRBTreeNode_t<void::InvalidIterator(); // 489
			CUtlRBTree<void::ResetDbgInfo()(void* const&, void* const&), CUtlMemory<UtlRBTreeNode_t<void*, int>, int> >* this); // 491
			CUtlRBTree<void::CUtlRBTree(
					int growSize,
					int initSize,
					const LessFunc_t& lessfunc);  // 43
			CThreadFastMutex::CThreadFastMutex(
					const char* pLockName);  // 43
			CBlob_Disabled::CBlob_Disabled(); // 134
			{
			}
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 415
			ThreadInterlockedExchangePointer(volatile void** p,
							void* value);  // 198
			Push(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this,
				CBlob* pPushNode);  // 137
			CUtlRBTree<void::Count()(void* const&, void* const&), CUtlMemory<UtlRBTreeNode_t<void*, int>, int> > this); // 1636
			{
			}
			CUtlRBTree<void::SetLessFunc(
					const LessFunc_t& func);  // 1634
			CUtlRBTree<void::SetLessFunc(
					const LessFunc_t& func);  // 159
			SetDefLessFunc<CUtlRBTree<void*, int> >(CUtlRBTree<void*, int, bool (*)(void* const&, void* const&), CUtlMemory<UtlRBTreeNode_t<void*, int>, int> >& RBTree); // 138
		}
		{
			int* _pCrash; // 143
		}
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 143
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 110
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 110
		GetLoopbackAddress(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlM this); // 149
		CTSFastPushQueue_Base(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this); // 110
	}
} /* size: 0 */

// <002B0ACF> tier0/mempool.cpp:110
// variables: 5
void CUtlMemoryPoolBase::CUtlMemoryPoolBase(int blockSize, int numElements, int nAlignment, MemoryPoolGrowType_t growMode, const char *)
{
	const char   __FUNCTION__; // 18953
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 122
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 124
	}
	{
		CBlob_Disabled* pDisabledBlob; // 134
	}
	{
		int* _pCrash; // 143
	}
} /* size: 0, variables: 1 */

// <002B060C> tier0/mempool.cpp:154
// variables: 4
// function calls: 21
void CUtlMemoryPoolBase::~CUtlMemoryPoolBase()
{
	{
		CBlob_Disabled* pDisabledBlob; // 209
	}
	{
		CBlob_Disabled* pDisabledBlob; // 209
		{
			volatile CBlob* pPop; // 237
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 415
			ThreadInterlockedExchangePointer(volatile void** p,
							void* value);  // 237
		}
		BeginPeek(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this,
				bool bWaitIfAlreadyPeeked);  // 414
		{
			volatile CBlob* pNext; // 277
			ThreadInterlockedCompareExchange64(volatile int64* p,
								int64 value,
								int64 comparand);  // 417
			ThreadInterlockedAssignPointerIf(volatile void** p,
							void* value,
							void* comparand);  // 270
			InternalGetNextPopItemFromActiveList(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this,
								volatile CBlob* pCurItem);  // 277
		}
		EndPeek_Pop(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this,
				CBlob* pPeeked);  // 260
		EndPeek_Pop(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this,
				CBlob* pPeeked);  // 415
		Pop(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this,
			bool bWaitIfAlreadyPeeked);  // 209
		CUtlMemory<UtlRBTreeNode_t<void::IsExternallyAllocated(); // 905
		CUtlMemory<UtlRBTreeNode_t<void::Purge(); // 903
		CUtlMemory<UtlRBTreeNode_t<void::Purge(); // 1287
		Iterator_t::Iterator_t(
				int i);  // 86
		CUtlMemory<UtlRBTreeNode_t<void::InvalidIterator(); // 1288
		CUtlRBTree<void::Purge()(void* const&, void* const&), CUtlMemory<UtlRBTreeNode_t<void*, int>, int> >* this); // 509
		ValidateAlignment<UtlRBTreeNode_t<void*, int> >(void); // 508
		CUtlMemory<UtlRBTreeNode_t<void::Purge(); // 510
		CUtlMemory<UtlRBTreeNode_t<void::~CUtlMemory(); // 510
		CUtlRBTree<void::~CUtlRBTree()(void* const&, void* const&), CUtlMemory<UtlRBTreeNode_t<void*, int>, int> >* this); // 43
		CBlob_Disabled::~CBlob_Disabled(); // 210
	}
	CUtlMemoryPoolBase::~CUtlMemoryPoolBase(); // 154
} /* size: 187, inline expansions: 1 (134 bytes) */

// <002B05E2> tier0/mempool.cpp:154
// variable: 1
void CUtlMemoryPoolBase::~CUtlMemoryPoolBase()
{
	{
		CBlob_Disabled* pDisabledBlob; // 209
	}
} /* size: 0 */

// <002B053C> tier0/mempool.cpp:217
// function calls: 2
void CUtlMemoryPoolBase::ResetAllocationCounts()
{
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 220
} /* size: 22, inline expansions: 2 (15 bytes) */

// <002B2440> tier0/mempool.cpp:227
// variables: 10
// function calls: 27
void CUtlMemoryPoolBase::Clear()
{
	FreeList_t* pFreeList; // 238
	CBlob* pBlobs; // 239
	{
		CBlob_Disabled* pDisabledBlob; // 231
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_233; // 233
		Unsafe_ReadPop(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlM this); // 231
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
				int nLineNumber);  // 233
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 236
	}
	{
		volatile CBlob* pPop; // 237
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 415
		ThreadInterlockedExchangePointer(volatile void** p,
						void* value);  // 237
	}
	BeginPeek(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this,
			bool bWaitIfAlreadyPeeked);  // 239
	{
		volatile FreeList_t* pPop; // 237
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 415
		ThreadInterlockedExchangePointer(volatile void** p,
						void* value);  // 237
	}
	BeginPeek(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_ this,
			bool bWaitIfAlreadyPeeked);  // 443
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 313
	{
		volatile FreeList_t* pNext; // 320
		{
			volatile FreeList_t* pListIter; // 321
		}
	}
	EndPeek_Detach(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_ this,
			FreeList_t* pPeeked);  // 305
	EndPeek_Detach(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_ this,
			FreeList_t* pPeeked);  // 444
	Detach(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_ this); // 242
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 313
	{
		volatile CBlob* pNext; // 320
		{
			volatile CBlob* pListIter; // 321
		}
	}
	EndPeek_Detach(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this,
			CBlob* pPeeked);  // 305
	EndPeek_Detach(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this,
			CBlob* pPeeked);  // 246
	CUtlMemoryPoolBase::Clear(); // 227
} /* size: 429, variables: 2, inline expansions: 12 (606 bytes) */

// <002B04B6> tier0/mempool.cpp:227
// variables: 4
void CUtlMemoryPoolBase::Clear()
{
	FreeList_t* pFreeList; // 238
	CBlob* pBlobs; // 239
	{
		CBlob_Disabled* pDisabledBlob; // 231
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_233; // 233
	}
} /* size: 0, variables: 2 */

// <002AF323> tier0/mempool.cpp:252
// variables: 25
// function calls: 61
void CUtlMemoryPoolBase::ClearDestruct(void (*pDestructFunc)(void *))
{
	FreeList_t* pFreeList; // 267
	CBlob* pBlobs; // 268
	{
		CBlob_Disabled* pDisabledBlob; // 256
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_258; // 258
		{
			int iter; // 259
			CUtlMemory<UtlRBTreeNode_t<void::operator[](
					int i);  // 611
			CUtlRBTree<void::LeftChild(
					int i);  // 1329
			CUtlRBTree<void::FirstInorder()(void* const&, void* const&), CUtlMemory<UtlRBTreeNode_t<void*, int>, int> > this); // 259
			CUtlMemory<UtlRBTreeNode_t<void::operator[](
					int i);  // 539
			CUtlRBTree<void::Element(
				int i);  // 261
		}
		Unsafe_ReadPop(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlM this); // 256
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
				int nLineNumber);  // 258
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 265
	}
	{
		CUtlRBTree<void*, int, bool (*)(void* const&, void* const&), CUtlMemory<UtlRBTreeNode_t<void*, int>, int> > freeBlocks; // 279
		CUtlMemory<UtlRBTreeNode_t<void::ValidateGrowSize(); // 475
		CUtlMemory<UtlRBTreeNode_t<void::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 484
		InvalidIndex(void); // 486
		InvalidIndex(void); // 488
		Iterator_t::Iterator_t(
				int i);  // 86
		CUtlMemory<UtlRBTreeNode_t<void::InvalidIterator(); // 489
		CUtlRBTree<void::ResetDbgInfo()(void* const&, void* const&), CUtlMemory<UtlRBTreeNode_t<void*, int>, int> >* this); // 491
		CUtlRBTree<void::CUtlRBTree(
				int growSize,
				int initSize,
				const LessFunc_t& lessfunc);  // 279
		CUtlRBTree<void::SetLessFunc(
				const LessFunc_t& func);  // 159
		SetDefLessFunc<CUtlRBTree<void*, int> >(CUtlRBTree<void*, int, bool (*)(void* const&, void* const&), CUtlMemory<UtlRBTreeNode_t<void*, int>, int> >& RBTree); // 280
		{
			FreeList_t* pNext; // 515
			IterResult_t iterateResult; // 522
			operator()(const class* __closure,
					FreeList_t* pCur); // 69
			CallFunctor<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::ClearDestruct(void (*)(void*))::<lambda(CUtlMemoryPoolBase::FreeList_t*)>&>(FreeList_t* pList,
																class& functor); // 522
		}
		IterateDetachedList<CUtlMemoryPoolBase::ClearDestruct(void (*)(void*))::<lambda(CUtlMemoryPoolBase::FreeList_t*)>&, CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, &CUtlMemoryPoolBase::FreeList_t::pNext>::IterateDetachedList<CUtlMemoryPoolBase::ClearDestruct(void (*)(void*))::<lambda(CUtlMemoryPoolBase::FreeList_t*)> >(CUtlMemoryPoolBase::FreeList_t*, CUtlMemoryPoolBase::ClearDestruct(void (*)(void*))::<lambda(CUtlMemoryPoolBase::FreeList_t*)>&&)::<lambda(CUtlMemoryPoolBase::FreeList_t*)> >(FreeList_t* pList,
																class& functor,
																class& removedItemFunctor); // 547
		IterateDetachedList<CUtlMemoryPoolBase::ClearDestruct(void (*)(void*))::<lambda(CUtlMemoryPoolBase::FreeList_t*)> >(FreeList_t* pList,
																class& functor); // 282
		{
			CBlob* pNext; // 515
			IterResult_t iterateResult; // 522
			{
				uint8* p; // 289
				uint8* pLimit; // 290
				AlignValue<char*>(char* val,
							uintp alignment);  // 289
			}
			operator()(const class* __closure,
					CBlob* pCur); // 69
			CallFunctor<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::ClearDestruct(void (*)(void*))::<lambda(CUtlMemoryPoolBase::CBlob*)>&>(CBlob* pList,
																class& functor); // 522
		}
		IterateDetachedList<CUtlMemoryPoolBase::ClearDestruct(void (*)(void*))::<lambda(CUtlMemoryPoolBase::CBlob*)>&, CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryPoolBase::CBlob::m_pNext>::IterateDetachedList<CUtlMemoryPoolBase::ClearDestruct(void (*)(void*))::<lambda(CUtlMemoryPoolBase::CBlob*)> >(CUtlMemoryPoolBase::CBlob*, CUtlMemoryPoolBase::ClearDestruct(void (*)(void*))::<lambda(CUtlMemoryPoolBase::CBlob*)>&&)::<lambda(CUtlMemoryPoolBase::CBlob*)> >(CBlob* pList,
																class& functor,
																class& removedItemFunctor); // 547
		IterateDetachedList<CUtlMemoryPoolBase::ClearDestruct(void (*)(void*))::<lambda(CUtlMemoryPoolBase::CBlob*)> >(CBlob* pList,
																class& functor); // 287
		CUtlMemory<UtlRBTreeNode_t<void::IsExternallyAllocated(); // 905
		CUtlMemory<UtlRBTreeNode_t<void::Purge(); // 903
		CUtlMemory<UtlRBTreeNode_t<void::Purge(); // 1287
		Iterator_t::Iterator_t(
				int i);  // 86
		CUtlMemory<UtlRBTreeNode_t<void::InvalidIterator(); // 1288
		CUtlRBTree<void::Purge()(void* const&, void* const&), CUtlMemory<UtlRBTreeNode_t<void*, int>, int> >* this); // 509
		ValidateAlignment<UtlRBTreeNode_t<void*, int> >(void); // 508
		CUtlMemory<UtlRBTreeNode_t<void::Purge(); // 510
		CUtlMemory<UtlRBTreeNode_t<void::~CUtlMemory(); // 510
		CUtlRBTree<void::~CUtlRBTree()(void* const&, void* const&), CUtlMemory<UtlRBTreeNode_t<void*, int>, int> >* this); // 300
	}
	{
		volatile CBlob* pPop; // 237
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 415
		ThreadInterlockedExchangePointer(volatile void** p,
						void* value);  // 237
	}
	BeginPeek(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this,
			bool bWaitIfAlreadyPeeked);  // 268
	{
		volatile FreeList_t* pPop; // 237
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 415
		ThreadInterlockedExchangePointer(volatile void** p,
						void* value);  // 237
	}
	BeginPeek(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_ this,
			bool bWaitIfAlreadyPeeked);  // 443
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 313
	{
		volatile FreeList_t* pNext; // 320
		{
			volatile FreeList_t* pListIter; // 321
		}
	}
	EndPeek_Detach(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_ this,
			FreeList_t* pPeeked);  // 305
	EndPeek_Detach(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_ this,
			FreeList_t* pPeeked);  // 444
	Detach(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_ this); // 271
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 313
	{
		volatile CBlob* pNext; // 320
		{
			volatile CBlob* pListIter; // 321
		}
	}
	EndPeek_Detach(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this,
			CBlob* pPeeked);  // 305
	EndPeek_Detach(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this,
			CBlob* pPeeked);  // 272
} /* size: 930, variables: 2, inline expansions: 11 (345 bytes) */

// <002B1DD9> tier0/mempool.cpp:305
// variables: 9
// function calls: 21
void CUtlMemoryPoolBase::InternalClear(CBlob* pDetachedBlobList, FreeList_t* pDetachedFreeList)
{
	{
		CBlob* pNext; // 515
		IterResult_t iterateResult; // 522
		operator()(const class* __closure,
				CBlob* pCur); // 55
		_CTSFastPushQueueIterateResult<bool>::_CTSFastPushQueueIterateResult(
						bool bContinue);  // 55
		CallFunctor<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::InternalClear(CBlob*, FreeList_t*)::<lambda(CUtlMemoryPoolBase::CBlob*)>&>(CBlob* pList,
																class& functor); // 522
	}
	IterateDetachedList<CUtlMemoryPoolBase::InternalClear(CBlob*, FreeList_t*)::<lambda(CUtlMemoryPoolBase::CBlob*)>&, CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryPoolBase::CBlob::m_pNext>::IterateDetachedList<CUtlMemoryPoolBase::InternalClear(CBlob*, FreeList_t*)::<lambda(CUtlMemoryPoolBase::CBlob*)> >(CUtlMemoryPoolBase::CBlob*, CUtlMemoryPoolBase::InternalClear(CBlob*, FreeList_t*)::<lambda(CUtlMemoryPoolBase::CBlob*)>&&)::<lambda(CUtlMemoryPoolBase::CBlob*)> >(CBlob* pList,
																class& functor,
																class& removedItemFunctor); // 547
	IterateDetachedList<CUtlMemoryPoolBase::InternalClear(CBlob*, FreeList_t*)::<lambda(CUtlMemoryPoolBase::CBlob*)> >(CBlob* pList,
																class& functor); // 343
	{
		CBlob_Disabled* pDisabledBlob; // 309
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_311; // 311
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
				int nLineNumber);  // 311
		{
			int iter; // 312
			CUtlMemory<UtlRBTreeNode_t<void::operator[](
					int i);  // 611
			CUtlRBTree<void::LeftChild(
					int i);  // 1329
			CUtlRBTree<void::FirstInorder()(void* const&, void* const&), CUtlMemory<UtlRBTreeNode_t<void*, int>, int> > this); // 312
			CUtlMemory<UtlRBTreeNode_t<void::operator[](
					int i);  // 539
			CUtlRBTree<void::Element(
				int i);  // 314
		}
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 318
	}
	CUtlMemoryPoolBase::InternalClear(
			CBlob* pDetachedBlobList,
			FreeList_t* pDetachedFreeList);  // 305
} /* size: 310, inline expansions: 3 (257 bytes) */

// <002AF26E> tier0/mempool.cpp:305
// variables: 3
void CUtlMemoryPoolBase::InternalClear(CBlob* pDetachedBlobList, FreeList_t* pDetachedFreeList)
{
	{
		CBlob_Disabled* pDisabledBlob; // 309
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_311; // 311
		{
			int iter; // 312
		}
	}
} /* size: 0 */

// <002AEAA6> tier0/mempool.cpp:382
// variables: 14
// function calls: 22
void CUtlMemoryPoolBase::IsAllocationWithinPool(void* pMem)
{
	bool bResult; // 384
	{
		CBlob_Disabled* pDisabledBlob; // 408
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_410; // 410
		Unsafe_ReadPop(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlM this); // 408
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
				int nLineNumber);  // 410
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 412
	}
	{
		volatile CBlob* pPop; // 237
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 415
		ThreadInterlockedExchangePointer(volatile void** p,
						void* value);  // 237
	}
	BeginPeek(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this,
			bool bWaitIfAlreadyPeeked);  // 677
	{
		IterResult_t iterateResult; // 577
		bool bEndOfList; // 582
		bool bContinue; // 584
		{
			intp pFirstAllocation; // 394
			intp nOffset; // 396
			AlignValue<long long int>(long long int val,
							uintp alignment);  // 394
		}
		operator()(const class* __closure,
				CBlob* pCur); // 55
		_CTSFastPushQueueIterateResult<bool>::_CTSFastPushQueueIterateResult(
						bool bContinue);  // 55
		CallFunctor<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::IsAllocationWithinPool(void*) const::<lambda(CUtlMemoryPoolBase::CBlob*)>&>(CBlob* pList,
																class& functor); // 577
		InternalGetNextPopItemFromActiveList(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this,
							volatile CBlob* pCurItem);  // 581
	}
	IteratePeekedList<CUtlMemoryPoolBase::IsAllocationWithinPool(void*) const::<lambda(CUtlMemoryPoolBase::CBlob*)>&, CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryPoolBase::CBlob::m_pNext>::IterateInPlace<CUtlMemoryPoolBase::IsAllocationWithinPool(void*) const::<lambda(CUtlMemoryPoolBase::CBlob*)> >(bool, CUtlMemoryPoolBase::IsAllocationWithinPool(void*) const::<lambda(CUtlMemoryPoolBase::CBlob*)>&&)::<lambda(CUtlMemoryPoolBase::CBlob*)>&>(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this,
																bool bEndPeekDuringIteration,
																CBlob* pPeeked,
																class& iterationFunctor,
																class& removedItemFunctor); // 677
	IterateInPlace<CUtlMemoryPoolBase::IsAllocationWithinPool(void*) const::<lambda(CUtlMemoryPoolBase::CBlob*)>&, CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryPoolBase::CBlob::m_pNext>::IterateInPlace<CUtlMemoryPoolBase::IsAllocationWithinPool(void*) const::<lambda(CUtlMemoryPoolBase::CBlob*)> >(bool, CUtlMemoryPoolBase::IsAllocationWithinPool(void*) const::<lambda(CUtlMemoryPoolBase::CBlob*)>&&)::<lambda(CUtlMemoryPoolBase::CBlob*)> >(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this,
																bool bEndPeekDuringIteration,
																class& iterationFunctor,
																class& removedItemFunctor); // 684
	IterateInPlace<CUtlMemoryPoolBase::IsAllocationWithinPool(void*) const::<lambda(CUtlMemoryPoolBase::CBlob*)> >(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this,
															bool bEndPeekDuringIteration,
															class& iterationFunctor); // 386
} /* size: 374, variables: 1, inline expansions: 4 (426 bytes) */

// <002AE682> tier0/mempool.cpp:421
// variables: 11
// function calls: 9
void CUtlMemoryPoolBase::AddNewBlob()
{
	const char   __FUNCTION__; // 6052
	int sizeMultiplier; // 425
	int nElements; // 453
	int blobSize; // 454
	CBlob* pBlob; // 458
	FreeList_t* pFirst; // 469
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 423
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 438
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 461
	}
	{
		FreeList_t* newBlob; // 487
		{
			int j; // 488
			{
			}
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 415
			ThreadInterlockedExchangePointer(volatile void** p,
							void* value);  // 198
			Push(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_ this,
				FreeList_t* pPushNode);  // 492
		}
	}
	GetLoopbackAddress(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlM this); // 177
	IsPeeked(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlM this); // 423
	{
	}
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 198
	Push(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this,
		CBlob* pPushNode);  // 466
	AlignValue<char*>(char* val,
				uintp alignment);  // 469
} /* size: 0, variables: 6, inline expansions: 6 (120 bytes) */

// <002ADA3C> tier0/mempool.cpp:505
// variables: 17
// function calls: 48
void* CUtlMemoryPoolBase::Alloc()
{
	FreeList_t* returnBlock; // 507
	const char   __FUNCTION__; // 9457
	{
		CBlob_Disabled* pDisabledBlob; // 540
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_542; // 542
		Unsafe_ReadPop(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlM this); // 540
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
				int nLineNumber);  // 542
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 549
	}
	{
		CBlob* pTempLockMem; // 554
		CBlob* pPeeked; // 555
		{
			CBlob* pPeeked; // 372
			ThreadInterlockedCompareExchange64(volatile int64* p,
								int64 value,
								int64 comparand);  // 417
			ThreadInterlockedAssignPointerIf(volatile void** p,
							void* value,
							void* comparand);  // 377
			{
				volatile CBlob* pPop; // 237
				ThreadInterlockedExchange64(volatile int64* p,
								int64 value);  // 415
				ThreadInterlockedExchangePointer(volatile void** p,
								void* value);  // 237
			}
			BeginPeek(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this,
					bool bWaitIfAlreadyPeeked);  // 372
		}
		BeginPeek_Lock(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this,
				volatile CBlob** pTempMemory);  // 555
		{
			volatile FreeList_t* pPop; // 237
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 415
			ThreadInterlockedExchangePointer(volatile void** p,
							void* value);  // 237
		}
		BeginPeek(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_ this,
				bool bWaitIfAlreadyPeeked);  // 414
		{
			volatile FreeList_t* pNext; // 277
			ThreadInterlockedCompareExchange64(volatile int64* p,
								int64 value,
								int64 comparand);  // 417
			ThreadInterlockedAssignPointerIf(volatile void** p,
							void* value,
							void* comparand);  // 270
			InternalGetNextPopItemFromActiveList(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_ this,
								volatile FreeList_t* pCurItem);  // 277
		}
		EndPeek_Pop(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_ this,
				FreeList_t* pPeeked);  // 260
		EndPeek_Pop(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_ this,
				FreeList_t* pPeeked);  // 415
		Pop(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_ this,
			bool bWaitIfAlreadyPeeked);  // 556
		EndPeek_Replace(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this,
				CBlob* pPeeked);  // 396
		{
			CBlob* pTempNode; // 403
			{
				volatile CBlob* pNext; // 277
				ThreadInterlockedCompareExchange64(volatile int64* p,
									int64 value,
									int64 comparand);  // 417
				ThreadInterlockedAssignPointerIf(volatile void** p,
								void* value,
								void* comparand);  // 270
				InternalGetNextPopItemFromActiveList(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this,
									volatile CBlob* pCurItem);  // 277
			}
			EndPeek_Pop(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this,
					CBlob* pPeeked);  // 260
			EndPeek_Pop(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this,
					CBlob* pPeeked);  // 405
		}
		EndPeek_Unlock(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this,
				CBlob* pPeeked,
				volatile CBlob** pTempMemory,
				void ()(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemor pEndPeekFunc);  // 389
		EndPeek_Unlock(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this,
				CBlob* pPeeked,
				volatile CBlob** pTempMemory,
				void ()(CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemor pEndPeekFunc);  // 560
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 567
	}
	{
		int nBlocksAllocated; // 580
		int nPeakAllocated; // 581
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 580
		CInterlockedIntT<int, 4>::GetRaw(); // 582
		ThreadInterlockedAssignIf(volatile int32* p,
						int32 value,
						int32 comparand);  // 597
		CInterlockedIntT<int, 4>::AssignIf(
			int conditionValue,
			int newValue);  // 584
	}
	{
		volatile FreeList_t* pPop; // 237
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 415
		ThreadInterlockedExchangePointer(volatile void** p,
						void* value);  // 237
	}
	BeginPeek(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_ this,
			bool bWaitIfAlreadyPeeked);  // 414
	{
		volatile FreeList_t* pNext; // 277
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 417
		ThreadInterlockedAssignPointerIf(volatile void** p,
						void* value,
						void* comparand);  // 270
		InternalGetNextPopItemFromActiveList(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_ this,
							volatile FreeList_t* pCurItem);  // 277
	}
	EndPeek_Pop(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_ this,
			FreeList_t* pPeeked);  // 260
	EndPeek_Pop(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_ this,
			FreeList_t* pPeeked);  // 415
	Pop(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_ this,
		bool bWaitIfAlreadyPeeked);  // 523
} /* size: 0, variables: 2, inline expansions: 4 (200 bytes) */

// <002AD935> tier0/mempool.cpp:602
// variable: 1
// function calls: 2
void* CUtlMemoryPoolBase::AllocZero()
{
	void* mem; // 604
	memset(void* __dest,
		int __ch,
		size_t __len);  // 51
	V_memset(void* dest,
		int fill,
		int count);  // 607
} /* size: 67, variables: 1, inline expansions: 2 (33 bytes) */

// <002AD2E2> tier0/mempool.cpp:616
// variables: 3
// function calls: 19
void CUtlMemoryPoolBase::Free(void* memBlock)
{
	{
		CBlob_Disabled* pDisabledBlob; // 623
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_625; // 625
		int nIndex; // 627
		{
			ThreadInterlockedDecrement(volatile int32* p); // 586
			CInterlockedIntT<int, 4>::operator--(); // 630
			_DebuggerBreakInlineExpressionWrapper(void); // 628
		}
		Unsafe_ReadPop(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlM this); // 623
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
				int nLineNumber);  // 625
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 639
	}
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 663
	{
	}
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 198
	Push(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_t, CUtlMemoryPoolBase::FreeList_ this,
		FreeList_t* pPushNode);  // 667
} /* size: 0, inline expansions: 5 (77 bytes) */

// <002ACFA2> tier0/mempool.cpp:677
// variables: 10
// function calls: 9
void CUtlMemoryPoolBase::Size()
{
	uint32 size; // 679
	{
		volatile CBlob* pPop; // 237
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 415
		ThreadInterlockedExchangePointer(volatile void** p,
						void* value);  // 237
	}
	BeginPeek(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this,
			bool bWaitIfAlreadyPeeked);  // 677
	{
		IterResult_t iterateResult; // 577
		bool bEndOfList; // 582
		bool bContinue; // 584
		operator()(const class* __closure,
				CBlob* pCur); // 69
		CallFunctor<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::Size() const::<lambda(CUtlMemoryPoolBase::CBlob*)>&>(CBlob* pList,
																class& functor); // 577
		InternalGetNextPopItemFromActiveList(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this,
							volatile CBlob* pCurItem);  // 581
	}
	IteratePeekedList<CUtlMemoryPoolBase::Size() const::<lambda(CUtlMemoryPoolBase::CBlob*)>&, CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryPoolBase::CBlob::m_pNext>::IterateInPlace<CUtlMemoryPoolBase::Size() const::<lambda(CUtlMemoryPoolBase::CBlob*)> >(bool, CUtlMemoryPoolBase::Size() const::<lambda(CUtlMemoryPoolBase::CBlob*)>&&)::<lambda(CUtlMemoryPoolBase::CBlob*)>&>(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this,
																bool bEndPeekDuringIteration,
																CBlob* pPeeked,
																class& iterationFunctor,
																class& removedItemFunctor); // 677
	IterateInPlace<CUtlMemoryPoolBase::Size() const::<lambda(CUtlMemoryPoolBase::CBlob*)>&, CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryPoolBase::CBlob::m_pNext>::IterateInPlace<CUtlMemoryPoolBase::Size() const::<lambda(CUtlMemoryPoolBase::CBlob*)> >(bool, CUtlMemoryPoolBase::Size() const::<lambda(CUtlMemoryPoolBase::CBlob*)>&&)::<lambda(CUtlMemoryPoolBase::CBlob*)> >(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this,
																bool bEndPeekDuringIteration,
																class& iterationFunctor,
																class& removedItemFunctor); // 684
	IterateInPlace<CUtlMemoryPoolBase::Size() const::<lambda(CUtlMemoryPoolBase::CBlob*)> >(const CTSFastPushQueue_Base<CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, CUtlMemoryPoolBase::CBlob, &CUtlMemoryP this,
												bool bEndPeekDuringIteration,
												class& iterationFunctor); // 681
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <002ACF74> tier0/mempool.cpp:695
void CUtlScratchMemoryPool::CUtlScratchMemoryPool()
{
} /* size: 23 */

// <002ACEBB> tier0/mempool.cpp:707
void CUtlScratchMemoryPool::CUtlScratchMemoryPool(uint nBlockSize, uint nExternalMemBlockSize, void* pExternalMem, bool bSearchAllBlocks)
{
} /* size: 31 */

// <002ACE21> tier0/mempool.cpp:716
void CUtlScratchMemoryPool::~CUtlScratchMemoryPool()
{
} /* size: 9 */

// <002ACA8F> tier0/mempool.cpp:721
// variables: 9
// function calls: 2
void CUtlScratchMemoryPool::Init(uint nBlockSize, uint nExternalMemBlockSize, void* pExternalMem, bool bSearchAllBlocks)
{
	const char   __FUNCTION__; // 56097
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 723
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 726
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 727
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 728
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 731
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 744
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 751
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 755
	}
	CUtlScratchMemoryPool::IsInitialized(); // 723
	AlignValue<unsigned int>(unsigned int val,
				uintp alignment);  // 751
} /* size: 0, variables: 1, inline expansions: 2 (6 bytes) */

// <002AC92D> tier0/mempool.cpp:759
// variables: 5
// function calls: 2
void* CUtlScratchMemoryPool::AllocAligned(int nSizeInBytes, int nAlignment)
{
	MemoryBlock_t* pBlock; // 772
	void* pMemory; // 813
	{
		int nBytesFreeAligned; // 778
		{
			int nOffset; // 788
			uint8* pMemory; // 790
			CUtlScratchMemoryPool::GetBlockUsableBytes(
						MemoryBlock_t* pBlock);  // 788
			MemoryBlock_t::GetAllocPtr(
					int nOffset);  // 790
		}
	}
} /* size: 83, variables: 2 */

// <002B1C2B> tier0/mempool.cpp:818
// variables: 4
// function calls: 5
void* CUtlScratchMemoryPool::AddNewBlock(int nSizeInBytes)
{
	bool bUseStandaloneBlock; // 822
	{
		MemoryBlock_t* pNewBlock; // 827
		CUtlScratchMemoryPool::GetBlockUsableBytes(
					MemoryBlock_t* pBlock);  // 832
		MemoryBlock_t::GetAllocPtr(
				int nOffset);  // 835
	}
	{
		size_t nAllocBytes; // 841
		MemoryBlock_t* pNewBlock; // 842
		AlignValue<long unsigned int>(long unsigned int val,
						uintp alignment);  // 841
		MemoryBlock_t::GetAllocPtr(
				int nOffset);  // 860
	}
	CUtlScratchMemoryPool::AddNewBlock(
			int nSizeInBytes);  // 818
} /* size: 172, variables: 1, inline expansions: 1 (76 bytes) */

// <002AC8B5> tier0/mempool.cpp:818
// variables: 4
void* CUtlScratchMemoryPool::AddNewBlock(int nSizeInBytes)
{
	bool bUseStandaloneBlock; // 822
	{
		MemoryBlock_t* pNewBlock; // 827
	}
	{
		size_t nAllocBytes; // 841
		MemoryBlock_t* pNewBlock; // 842
	}
} /* size: 0, variables: 1 */

// <002AC7E6> tier0/mempool.cpp:865
// variables: 3
// function call: 1
void CUtlScratchMemoryPool::GetCurrentAllocPoint()
{
	const char   __FUNCTION__; // 1828
	UtlScratchMemoryPoolMark_t mark; // 869
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 867
	}
	CUtlScratchMemoryPool::GetFirstBytesFree(); // 871
} /* size: 0, variables: 2, inline expansions: 1 (20 bytes) */

// <002AC684> tier0/mempool.cpp:880
// variables: 5
void CUtlScratchMemoryPool::FreeToAllocPoint(UtlScratchMemoryPoolMark_t mark)
{
	const char   __FUNCTION__; // 1621
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 882
	}
	{
		MemoryBlock_t* pNext; // 891
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 890
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 892
		}
	}
} /* size: 0, variables: 1 */

// <002AC570> tier0/mempool.cpp:909
// variables: 5
// function call: 1
void CUtlScratchMemoryPool::FreeAll()
{
	MemoryBlock_t* pExternalAllocation; // 911
	MemoryBlock_t* pNext; // 912
	const char   __FUNCTION__; // 48079
	{
		MemoryBlock_t* pBlock; // 913
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 922
		}
	}
	CUtlScratchMemoryPool::GetBlockUsableBytes(
				MemoryBlock_t* pBlock);  // 930
} /* size: 0, variables: 3, inline expansions: 1 (8 bytes) */

// <002AC50E> tier0/mempool.cpp:939
// variables: 2
void CUtlScratchMemoryPool::AllocSize()
{
	size_t nSize; // 941
	{
		MemoryBlock_t* pBlock; // 942
	}
} /* size: 34, variables: 1 */

// <002AC4AC> tier0/mempool.cpp:951
// variables: 2
void CUtlScratchMemoryPool::AllocationCount()
{
	size_t nSize; // 953
	{
		MemoryBlock_t* pBlock; // 954
	}
} /* size: 36, variables: 1 */

// <002AC44A> tier0/mempool.cpp:964
// variables: 2
void CUtlScratchMemoryPool::TotalMemFree()
{
	size_t nSize; // 966
	{
		MemoryBlock_t* pBlock; // 967
	}
} /* size: 34, variables: 1 */

// <002AC1E3> tier0/mempool.cpp:1027
// function calls: 9
void CUtlMemoryBlockAllocator::CUtlMemoryBlockAllocator(int nPoolReserve, uint nMinPageSize)
{
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::CUtlVector(); // 1027
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::EnsureCapacity(
			int num);  // 1029
} /* size: 171, inline expansions: 9 (216 bytes) */

// <002AC1AC> tier0/mempool.cpp:1027
void CUtlMemoryBlockAllocator::CUtlMemoryBlockAllocator(int nPoolReserve, uint nMinPageSize)
{
} /* size: 0 */

// <002AC039> tier0/mempool.cpp:1033
// function calls: 7
void CUtlMemoryBlockAllocator::~CUtlMemoryBlockAllocator()
{
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::Purge(); // 903
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::Purge(); // 1799
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::Purge(); // 560
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::~CUtlVector(); // 1036
} /* size: 70, inline expansions: 7 (174 bytes) */

// <002AC01C> tier0/mempool.cpp:1033
void CUtlMemoryBlockAllocator::~CUtlMemoryBlockAllocator()
{
} /* size: 0 */

// <002ABDDC> tier0/mempool.cpp:1038
// variable: 1
// function calls: 9
void CUtlMemoryBlockAllocator::Purge()
{
	{
		int i; // 1040
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::Count(); // 1040
		CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
				int i);  // 1042
	}
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::Purge(); // 903
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::Purge(); // 1799
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::Purge(); // 1044
} /* size: 129, inline expansions: 6 (155 bytes) */

// <002AB886> tier0/mempool.cpp:1047
// variables: 6
// function calls: 20
void CUtlMemoryBlockAllocator::Alloc(uint nSize)
{
	int nPage; // 1049
	MemPage_t& page; // 1073
	uint nOffset; // 1075
	{
		uint nMaxPages; // 1052
		uint nMinPageSize; // 1061
		uint nPageAllocSize; // 1067
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::Count(); // 1053
		CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::NumAllocated(); // 1143
		CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::IsGrowable(); // 823
		CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::IsExternallyAllocated(); // 861
		CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::Grow(
			int num);  // 806
		CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::Base(); // 112
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::Base(); // 368
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::GrowMemory(
				int num);  // 1145
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::AddToTail(); // 1058
		CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
				int i);  // 1068
		CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
				int i);  // 1069
		CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
				int i);  // 1070
	}
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 1073
	CUtlMemoryBlockAllocator::MakeBlock(
			uint nPage,
			uint nOffset);  // 1078
} /* size: 507, variables: 3, inline expansions: 3 (45 bytes) */

// <002AB5B8> tier0/mempool.cpp:1082
// variables: 2
// function calls: 8
void CUtlMemoryBlockAllocator::AllocCopy(const char* pSrcData, uint nDataBytes)
{
	blockpooloffset_t nOffset; // 1084
	char* pDest; // 1085
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 1085
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 79
	V_memcpy(void* dest,
		const void* src,
		uint count);  // 1086
} /* size: 92, variables: 2, inline expansions: 8 (71 bytes) */

// <002AB465> tier0/mempool.cpp:1090
// variables: 2
// function calls: 5
void CUtlMemoryBlockAllocator::MemUsage()
{
	size_t nSize; // 1092
	{
		int i; // 1093
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::Count(); // 1093
		CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
				int i);  // 1095
	}
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::AllocSize(); // 1867
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::AllocSize(); // 1092
} /* size: 47, variables: 1, inline expansions: 2 (16 bytes) */

// <002AB383> tier0/mempool.cpp:1100
// variable: 1
// function call: 1
void CUtlMemoryBlockAllocator::SetPageSize(uint nPageSize)
{
	uint nMaxPage; // 1102
	clamp<unsigned int, unsigned int>(const unsigned int& val,
						const unsigned int& minVal,
						const unsigned int& maxVal);  // 1103
} /* size: 37, variables: 1, inline expansions: 1 (18 bytes) */

// <002AB196> tier0/mempool.cpp:1107
// variables: 2
// function calls: 7
void CUtlMemoryBlockAllocator::FindPageWithSpace(uint len)
{
	{
		int nLast; // 1111
		CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
				int i);  // 1112
		MemPage_t::AvailableSpace(); // 1112
	}
	{
		int i; // 1115
		CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
				int i);  // 1117
		MemPage_t::AvailableSpace(); // 1117
	}
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::Count(); // 1109
} /* size: 120, inline expansions: 1 (3 bytes) */

