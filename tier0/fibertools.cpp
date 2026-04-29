
//
// tier0/fibertools.cpp
//
//	referenced by: libtier0.so
//
//	functions: 64
//	classes: 3
//	structs: 2
//

// <0014F3F4> tier0/fibertools.cpp:32
// member function: 1
// member variable: 1
// class size: 304
class CAccessProtectedFiberData : public CFiber {
public:
	/* class CFiber <ancestor>; */ /* 0 304 */
	/* tier0/fibertools.cpp:36 */
	void ConstructThreadFiber(CAccessProtectedFiberData* , size_t);
} __attribute__((__aligned__(8)));

// <00163491> tier0/fibertools.cpp:36
inline void CAccessProtectedFiberData::ConstructThreadFiber(size_t nCreatedThreadSize)
{
} /* size: 0 */

// <00164CC4> tier0/fibertools.cpp:42
// variable: 1
// function calls: 8
void CreateThreadFiberOnThreadLocalScopeChange(CThreadLocalScope* pScope, bool bCreated)
{
	CFiber* pFiber; // 44
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 142
	CFiber::AddRef(); // 54
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 146
	CFiber::Release(); // 59
	CAccessProtectedFiberData::ConstructThreadFiber(
				size_t nCreatedThreadSize);  // 50
	CreateThreadFiberOnThreadLocalScopeChange(CThreadLocalScope* pScope,
							bool bCreated);  // 42
} /* size: 118, variables: 1, inline expansions: 8 (89 bytes) */

// <0016345E> tier0/fibertools.cpp:42
// variable: 1
void CreateThreadFiberOnThreadLocalScopeChange(CThreadLocalScope* pScope, bool bCreated)
{
	CFiber* pFiber; // 44
} /* size: 0, variables: 1 */

// <0016343F> tier0/fibertools.cpp:65
// variable: 1
size_t GetMainThreadStackSize(void)
{
	BinaryProperties_Value_t stackSizeProbe; // 72
} /* size: 0, variables: 1 */

// <00153F43> tier0/fibertools.cpp:82
void CMainThreadFiber::~CMainThreadFiber()
{
} /* size: 0 */

// <00153F27> tier0/fibertools.cpp:82
inline void CMainThreadFiber::~CMainThreadFiber()
{
} /* size: 0 */

// <0014F44F> tier0/fibertools.cpp:82
// member functions: 4
// member variable: 1
// class size: 304
class CMainThreadFiber : public CFiber {
public:
	/* class CFiber <ancestor>; */ /* 0 304 */
	/* tier0/fibertools.cpp:85 */
	void CMainThreadFiber(CMainThreadFiber* );
	void ~CMainThreadFiber(CMainThreadFiber* );
	void CMainThreadFiber(class CMainThreadFiber *); /* linkage=_ZN16CMainThreadFiberC4Ev */
	void ~CMainThreadFiber(class CMainThreadFiber *); /* linkage=_ZN16CMainThreadFiberD4Ev */
} __attribute__((__aligned__(8)));

// <00163428> tier0/fibertools.cpp:85
void CMainThreadFiber::CMainThreadFiber()
{
} /* size: 0 */

// <0016340F> tier0/fibertools.cpp:85
inline void CMainThreadFiber::CMainThreadFiber()
{
} /* size: 0 */

// <00153F10> tier0/fibertools.cpp:99
void FiberToolsOrderedConstructionGlobals_t::FiberToolsOrderedConstructionGlobals_t()
{
} /* size: 0 */

// <00153EF4> tier0/fibertools.cpp:99
inline void FiberToolsOrderedConstructionGlobals_t::FiberToolsOrderedConstructionGlobals_t()
{
} /* size: 0 */

// <00153EB1> tier0/fibertools.cpp:99
void FiberToolsOrderedConstructionGlobals_t::~FiberToolsOrderedConstructionGlobals_t()
{
} /* size: 0 */

// <00153E95> tier0/fibertools.cpp:99
inline void FiberToolsOrderedConstructionGlobals_t::~FiberToolsOrderedConstructionGlobals_t()
{
} /* size: 0 */

// <0014FBB0> tier0/fibertools.cpp:99
// member functions: 2
// member variables: 3
// struct size: 344
struct FiberToolsOrderedConstructionGlobals_t {
	CMainThreadFiber s_MainThreadFiber __attribute__((__aligned__(8))); /* 0 304 */
	CThreadFastMutex s_FiberPoolAddMutex; /* 304 24 */
	CTSFastPushQueue s_FiberPool __attribute__((__aligned__(8))); /* 328 16 */
	void ~FiberToolsOrderedConstructionGlobals_t(FiberToolsOrderedConstructionGlobals_t* );
	void FiberToolsOrderedConstructionGlobals_t(FiberToolsOrderedConstructionGlobals_t* );
} __attribute__((__aligned__(8)));

// <0016470F> tier0/fibertools.cpp:114
// variables: 6
// function calls: 16
void AllocTempNode(void)
{
	CEventListNode* pPopped; // 116
	const size_t  k_nAllocCount; // 121
	CEventListNode* pAllocSet; // 123
	CEventListNode* pLastAlloc; // 124
	{
		volatile CEventListNode* pPop; // 237
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 415
		ThreadInterlockedExchangePointer(volatile void** p,
						void* value);  // 237
	}
	CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::BeginPeek(
			bool bWaitIfAlreadyPeeked);  // 414
	{
		volatile CEventListNode* pNext; // 277
		CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::GetLoopbackAddress(); // 270
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 417
		ThreadInterlockedAssignPointerIf(volatile void** p,
						void* value,
						void* comparand);  // 270
		CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::InternalGetNextPopItemFromActiveList(
							volatile CEventListNode* pCurItem);  // 277
	}
	CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::EndPeek_Pop(
			CEventListNode* pPeeked);  // 260
	CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::EndPeek_Pop(
			CEventListNode* pPeeked);  // 415
	CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::Pop(
		bool bWaitIfAlreadyPeeked);  // 116
	CThreadManualEvent::CThreadManualEvent(); // 30
	CEventListNode::CEventListNode(); // 123
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 226
	CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::PushMultiple(
			CEventListNode* pPushNode,
			CEventListNode* pTailIfKnown);  // 133
	AllocTempNode(void); // 114
} /* size: 366, variables: 4, inline expansions: 10 (526 bytes) */

// <001633D0> tier0/fibertools.cpp:114
// variables: 4
void AllocTempNode(void)
{
	CEventListNode* pPopped; // 116
	const size_t  k_nAllocCount; // 121
	CEventListNode* pAllocSet; // 123
	CEventListNode* pLastAlloc; // 124
} /* size: 0, variables: 4 */

// <00164B34> tier0/fibertools.cpp:137
// function calls: 5
void FreeTempNode(CEventListNode* pFree)
{
	CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::PushMultiple(
			CEventListNode* pPushNode,
			CEventListNode* pTailIfKnown);  // 139
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 226
	CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::PushMultiple(
			CEventListNode* pPushNode,
			CEventListNode* pTailIfKnown);  // 139
	FreeTempNode(CEventListNode* pFree); // 137
} /* size: 57, inline expansions: 5 (119 bytes) */

// <001633B5> tier0/fibertools.cpp:137
void FreeTempNode(CEventListNode* pFree)
{
} /* size: 0 */

// <00153DF1> tier0/fibertools.cpp:152
void CFiberJobPool::CFiberJobPool()
{
} /* size: 0 */

// <00153DD5> tier0/fibertools.cpp:152
inline void CFiberJobPool::CFiberJobPool()
{
} /* size: 0 */

// <00150565> tier0/fibertools.cpp:152
// member functions: 18
// member variables: 6
// vtable entries: 5
// class size: 96
class CFiberJobPool : public IFiberJobPool {
public:
	/* class IFiberJobPool <ancestor>; */ /* 0 8 */
	void ~CFiberJobPool(CFiberJobPool* );
	void CFiberJobPool(CFiberJobPool* , CFiberJobPool& );
	void CFiberJobPool(CFiberJobPool* , const CFiberJobPool& );
	void CFiberJobPool(CFiberJobPool* );
	/* tier0/fibertools.cpp:155 */
	virtual void AddFiberToJobPool(CFiberJobPool* , CFiber* , bool);
	/* tier0/fibertools.cpp:178 */
	virtual CFiber* GetWaitingFiberJob(CFiberJobPool* , bool* );
	/* tier0/fibertools.cpp:237 */
	virtual bool RemoveFiberJob(CFiberJobPool* , volatile CFiber* );
	/* tier0/fibertools.cpp:257 */
	virtual void RegisterWorkerThreadPool(CFiberJobPool* , IFiberThreadWorkerPool* );
	/* tier0/fibertools.cpp:269 */
	virtual void UnregisterWorkerThreadPool(CFiberJobPool* , IFiberThreadWorkerPool* );
	CTSFastPushQueue m_PrimaryQueue __attribute__((__aligned__(8))); /* 8 16 */
	CTSFastPushQueue m_SecondaryQueue __attribute__((__aligned__(8))); /* 24 16 */
	IFiberThreadWorkerPool * m_WorkerPools[4]; /* 40 32 */
	int m_nWorkerPools; /* 72 4 */
	CEventLock m_WorkerPoolLock __attribute__((__aligned__(8))); /* 80 16 */
	void ~CFiberJobPool(class CFiberJobPool *); /* linkage=_ZN13CFiberJobPoolD4Ev */
	void CFiberJobPool(class CFiberJobPool *, class CFiberJobPool &); /* linkage=_ZN13CFiberJobPoolC4EOS_ */
	void CFiberJobPool(class CFiberJobPool *, const class CFiberJobPool  &); /* linkage=_ZN13CFiberJobPoolC4ERKS_ */
	void CFiberJobPool(class CFiberJobPool *); /* linkage=_ZN13CFiberJobPoolC4Ev */
	/* <16440d> tier0/fibertools.cpp:155 */
	virtual void AddFiberToJobPool(class CFiberJobPool *, class CFiber *, bool); /* linkage=_ZN13CFiberJobPool17AddFiberToJobPoolEP6CFiberb */
	virtual class CFiber * GetWaitingFiberJob(class CFiberJobPool *, bool *); /* linkage=_ZN13CFiberJobPool18GetWaitingFiberJobEPb */
	virtual bool RemoveFiberJob(class CFiberJobPool *, volatile class CFiber  *); /* linkage=_ZN13CFiberJobPool14RemoveFiberJobEPV6CFiber */
	virtual void RegisterWorkerThreadPool(class CFiberJobPool *, class IFiberThreadWorkerPool *); /* linkage=_ZN13CFiberJobPool24RegisterWorkerThreadPoolEP22IFiberThreadWorkerPool */
	virtual void UnregisterWorkerThreadPool(class CFiberJobPool *, class IFiberThreadWorkerPool *); /* linkage=_ZN13CFiberJobPool26UnregisterWorkerThreadPoolEP22IFiberThreadWorkerPool */
} __attribute__((__aligned__(8)));

// <0016440D> tier0/fibertools.cpp:155
// variable: 1
// function calls: 10
void CFiberJobPool::AddFiberToJobPool(CFiber* pFiber, bool bAssumeCallersReference)
{
	CInterlockedIntT<unsigned int, 4>::operator&(
			unsigned int operand);  // 161
	{
	}
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 198
	CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::Push(
		CFiber* pPushNode);  // 163
	{
		int i; // 170
	}
	{
	}
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 198
	CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::Push(
		CFiber* pPushNode);  // 167
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 142
	CFiber::AddRef(); // 159
} /* size: 191, inline expansions: 10 (163 bytes) */

// <00163377> tier0/fibertools.cpp:155
// variable: 1
inline void CFiberJobPool::AddFiberToJobPool(CFiber* pFiber, bool bAssumeCallersReference)
{
	{
		int i; // 170
	}
} /* size: 0 */

// <00161AFF> tier0/fibertools.cpp:178
// variables: 40
// function calls: 83
void CFiberJobPool::GetWaitingFiberJob(bool* pHasJobsThatArentReadyToResume)
{
	CFiber* pRetVal; // 180
	 setRetVal; // 182
	 setRetValAndFlag; // 188
	{
		 iterFunc; // 198
		{
			volatile CFiber* pPop; // 237
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 415
			ThreadInterlockedExchangePointer(volatile void** p,
							void* value);  // 237
		}
		CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::BeginPeek(
				bool bWaitIfAlreadyPeeked);  // 677
		{
			IterResult_t iterateResult; // 577
			bool bEndOfList; // 582
			bool bContinue; // 584
			operator()(const class* __closure,
					CFiber* pIter); // 38
			_CTSFastPushQueueIterateResult<TSFPQ_IterateResult>::_CTSFastPushQueueIterateResult(
							TSFPQ_IterateResult fullResult);  // 38
			CallFunctor<CFiber, CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&>(CFiber* pList,
														class& functor); // 577
			CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::InternalGetNextPopItemFromActiveList(
								volatile CFiber* pCurItem);  // 581
			operator()(const class* __closure,
					CFiber* pRemoved); // 613
		}
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 417
		ThreadInterlockedAssignPointerIf(volatile void** p,
						void* value,
						void* comparand);  // 639
		{
			volatile CFiber* pNext; // 277
			CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::InternalGetNextPopItemFromActiveList(
								volatile CFiber* pCurItem);  // 277
			ThreadInterlockedCompareExchange64(volatile int64* p,
								int64 value,
								int64 comparand);  // 417
			ThreadInterlockedAssignPointerIf(volatile void** p,
							void* value,
							void* comparand);  // 270
		}
		CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::EndPeek_Pop(
				CFiber* pPeeked);  // 260
		CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::EndPeek_Pop(
				CFiber* pPeeked);  // 627
		CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::IteratePeekedList<CFiberJobPool::GetWaitingFiberJob(
																bool bEndPeekDuringIteration,
																CFiber* pPeeked,
																class& iterationFunctor,
																class& removedItemFunctor);  // 677
		CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::IterateInPlace<CFiberJobPool::GetWaitingFiberJob(
																bool bEndPeekDuringIteration,
																class& iterationFunctor,
																class& removedItemFunctor);  // 211
		{
			volatile CFiber* pPop; // 237
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 415
			ThreadInterlockedExchangePointer(volatile void** p,
							void* value);  // 237
		}
		CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::BeginPeek(
				bool bWaitIfAlreadyPeeked);  // 677
		{
			IterResult_t iterateResult; // 577
			bool bEndOfList; // 582
			bool bContinue; // 584
			operator()(const class* __closure,
					CFiber* pIter); // 38
			_CTSFastPushQueueIterateResult<TSFPQ_IterateResult>::_CTSFastPushQueueIterateResult(
							TSFPQ_IterateResult fullResult);  // 38
			CallFunctor<CFiber, CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&>(CFiber* pList,
														class& functor); // 577
			CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::InternalGetNextPopItemFromActiveList(
								volatile CFiber* pCurItem);  // 581
			ThreadInterlockedOr(volatile int32* p,
						int32 value);  // 618
			CInterlockedIntT<unsigned int, 4>::InterlockedOr(
					unsigned int newValue);  // 625
			CInterlockedIntT<unsigned int, 4>::operator|=(
					unsigned int mask);  // 192
			operator()(const class* __closure,
					CFiber* pRemoved); // 613
		}
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 618
		CInterlockedIntT<unsigned int, 4>::InterlockedOr(
				unsigned int newValue);  // 625
		CInterlockedIntT<unsigned int, 4>::operator|=(
				unsigned int mask);  // 192
		operator()(const class* __closure,
				CFiber* pRemoved); // 659
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 417
		ThreadInterlockedAssignPointerIf(volatile void** p,
						void* value,
						void* comparand);  // 639
		{
			volatile CFiber* pNext; // 277
			CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::InternalGetNextPopItemFromActiveList(
								volatile CFiber* pCurItem);  // 277
			ThreadInterlockedCompareExchange64(volatile int64* p,
								int64 value,
								int64 comparand);  // 417
			ThreadInterlockedAssignPointerIf(volatile void** p,
							void* value,
							void* comparand);  // 270
		}
		CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::EndPeek_Pop(
				CFiber* pPeeked);  // 260
		CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::EndPeek_Pop(
				CFiber* pPeeked);  // 627
		CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::IteratePeekedList<CFiberJobPool::GetWaitingFiberJob(
																bool bEndPeekDuringIteration,
																CFiber* pPeeked,
																class& iterationFunctor,
																class& removedItemFunctor);  // 677
		CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::IterateInPlace<CFiberJobPool::GetWaitingFiberJob(
																bool bEndPeekDuringIteration,
																class& iterationFunctor,
																class& removedItemFunctor);  // 215
	}
	{
		 iterFunc; // 220
		{
			volatile CFiber* pPop; // 237
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 415
			ThreadInterlockedExchangePointer(volatile void** p,
							void* value);  // 237
		}
		CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::BeginPeek(
				bool bWaitIfAlreadyPeeked);  // 677
		operator()(const class* __closure,
				CFiber* pRemoved); // 659
		{
			IterResult_t iterateResult; // 577
			bool bEndOfList; // 582
			bool bContinue; // 584
			operator()(const class* __closure,
					CFiber* pIter); // 38
			_CTSFastPushQueueIterateResult<TSFPQ_IterateResult>::_CTSFastPushQueueIterateResult(
							TSFPQ_IterateResult fullResult);  // 38
			CallFunctor<CFiber, CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&>(CFiber* pList,
														class& functor); // 577
			CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::InternalGetNextPopItemFromActiveList(
								volatile CFiber* pCurItem);  // 581
			operator()(const class* __closure,
					CFiber* pRemoved); // 613
		}
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 417
		ThreadInterlockedAssignPointerIf(volatile void** p,
						void* value,
						void* comparand);  // 639
		{
			volatile CFiber* pNext; // 277
			ThreadInterlockedCompareExchange64(volatile int64* p,
								int64 value,
								int64 comparand);  // 417
			ThreadInterlockedAssignPointerIf(volatile void** p,
							void* value,
							void* comparand);  // 270
			CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::InternalGetNextPopItemFromActiveList(
								volatile CFiber* pCurItem);  // 277
		}
		CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::EndPeek_Pop(
				CFiber* pPeeked);  // 260
		CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::EndPeek_Pop(
				CFiber* pPeeked);  // 627
		CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::IteratePeekedList<CFiberJobPool::GetWaitingFiberJob(
																bool bEndPeekDuringIteration,
																CFiber* pPeeked,
																class& iterationFunctor,
																class& removedItemFunctor);  // 677
		CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::IterateInPlace<CFiberJobPool::GetWaitingFiberJob(
																bool bEndPeekDuringIteration,
																class& iterationFunctor,
																class& removedItemFunctor);  // 225
		{
			volatile CFiber* pPop; // 237
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 415
			ThreadInterlockedExchangePointer(volatile void** p,
							void* value);  // 237
		}
		CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::BeginPeek(
				bool bWaitIfAlreadyPeeked);  // 677
		{
			IterResult_t iterateResult; // 577
			bool bEndOfList; // 582
			bool bContinue; // 584
			operator()(const class* __closure,
					CFiber* pIter); // 38
			_CTSFastPushQueueIterateResult<TSFPQ_IterateResult>::_CTSFastPushQueueIterateResult(
							TSFPQ_IterateResult fullResult);  // 38
			CallFunctor<CFiber, CFiberJobPool::GetWaitingFiberJob(bool*)::<lambda(CFiber*)>&>(CFiber* pList,
														class& functor); // 577
			CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::InternalGetNextPopItemFromActiveList(
								volatile CFiber* pCurItem);  // 581
			ThreadInterlockedOr(volatile int32* p,
						int32 value);  // 618
			CInterlockedIntT<unsigned int, 4>::InterlockedOr(
					unsigned int newValue);  // 625
			CInterlockedIntT<unsigned int, 4>::operator|=(
					unsigned int mask);  // 192
			operator()(const class* __closure,
					CFiber* pRemoved); // 613
		}
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 618
		CInterlockedIntT<unsigned int, 4>::InterlockedOr(
				unsigned int newValue);  // 625
		CInterlockedIntT<unsigned int, 4>::operator|=(
				unsigned int mask);  // 192
		operator()(const class* __closure,
				CFiber* pRemoved); // 659
		{
			volatile CFiber* pNext; // 277
			CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::InternalGetNextPopItemFromActiveList(
								volatile CFiber* pCurItem);  // 277
			ThreadInterlockedCompareExchange64(volatile int64* p,
								int64 value,
								int64 comparand);  // 417
			ThreadInterlockedAssignPointerIf(volatile void** p,
							void* value,
							void* comparand);  // 270
		}
		CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::EndPeek_Pop(
				CFiber* pPeeked);  // 260
		CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::EndPeek_Pop(
				CFiber* pPeeked);  // 627
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 417
		ThreadInterlockedAssignPointerIf(volatile void** p,
						void* value,
						void* comparand);  // 639
		CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::IteratePeekedList<CFiberJobPool::GetWaitingFiberJob(
																bool bEndPeekDuringIteration,
																CFiber* pPeeked,
																class& iterationFunctor,
																class& removedItemFunctor);  // 677
		CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::IterateInPlace<CFiberJobPool::GetWaitingFiberJob(
																bool bEndPeekDuringIteration,
																class& iterationFunctor,
																class& removedItemFunctor);  // 229
	}
} /* size: 1320, variables: 3 */

// <00161153> tier0/fibertools.cpp:237
// variables: 14
// function calls: 40
void CFiberJobPool::RemoveFiberJob(volatile CFiber* pFiber)
{
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 239
	{
		volatile CFiber* pPop; // 237
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 415
		ThreadInterlockedExchangePointer(volatile void** p,
						void* value);  // 237
	}
	CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::BeginPeek(
			bool bWaitIfAlreadyPeeked);  // 677
	{
		IterResult_t iterateResult; // 577
		bool bEndOfList; // 582
		bool bContinue; // 584
		operator()(const class* __closure,
				CFiber* pIter); // 38
		_CTSFastPushQueueIterateResult<TSFPQ_IterateResult>::_CTSFastPushQueueIterateResult(
						TSFPQ_IterateResult fullResult);  // 38
		CallFunctor<CFiber, CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::Remove(CFiber*)::<lambda(CFiber*)>&>(CFiber* pList,
																class& functor); // 577
		CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::InternalGetNextPopItemFromActiveList(
							volatile CFiber* pCurItem);  // 581
	}
	{
		volatile CFiber* pNext; // 277
		CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::InternalGetNextPopItemFromActiveList(
							volatile CFiber* pCurItem);  // 277
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 417
		ThreadInterlockedAssignPointerIf(volatile void** p,
						void* value,
						void* comparand);  // 270
	}
	CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::EndPeek_Pop(
			CFiber* pPeeked);  // 260
	CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::EndPeek_Pop(
			CFiber* pPeeked);  // 627
	ThreadInterlockedCompareExchange64(volatile int64* p,
						int64 value,
						int64 comparand);  // 417
	ThreadInterlockedAssignPointerIf(volatile void** p,
					void* value,
					void* comparand);  // 639
	CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::IteratePeekedList<CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::Remove(
																bool bEndPeekDuringIteration,
																CFiber* pPeeked,
																class& iterationFunctor,
																class& removedItemFunctor);  // 677
	CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::IterateInPlace<CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::Remove(
																bool bEndPeekDuringIteration,
																class& iterationFunctor,
																class& removedItemFunctor);  // 684
	CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::IterateInPlace<CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::Remove(
																bool bEndPeekDuringIteration,
																class& iterationFunctor);  // 692
	CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::Remove(
		CFiber* pRemove);  // 241
	{
		volatile CFiber* pPop; // 237
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 415
		ThreadInterlockedExchangePointer(volatile void** p,
						void* value);  // 237
	}
	CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::BeginPeek(
			bool bWaitIfAlreadyPeeked);  // 677
	{
		IterResult_t iterateResult; // 577
		bool bEndOfList; // 582
		bool bContinue; // 584
		operator()(const class* __closure,
				CFiber* pIter); // 38
		_CTSFastPushQueueIterateResult<TSFPQ_IterateResult>::_CTSFastPushQueueIterateResult(
						TSFPQ_IterateResult fullResult);  // 38
		CallFunctor<CFiber, CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::Remove(CFiber*)::<lambda(CFiber*)>&>(CFiber* pList,
																class& functor); // 577
		CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::InternalGetNextPopItemFromActiveList(
							volatile CFiber* pCurItem);  // 581
	}
	{
		volatile CFiber* pNext; // 277
		CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::InternalGetNextPopItemFromActiveList(
							volatile CFiber* pCurItem);  // 277
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 417
		ThreadInterlockedAssignPointerIf(volatile void** p,
						void* value,
						void* comparand);  // 270
	}
	CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::EndPeek_Pop(
			CFiber* pPeeked);  // 260
	CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::EndPeek_Pop(
			CFiber* pPeeked);  // 627
	ThreadInterlockedCompareExchange64(volatile int64* p,
						int64 value,
						int64 comparand);  // 417
	ThreadInterlockedAssignPointerIf(volatile void** p,
					void* value,
					void* comparand);  // 639
	CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::IteratePeekedList<CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::Remove(
																bool bEndPeekDuringIteration,
																CFiber* pPeeked,
																class& iterationFunctor,
																class& removedItemFunctor);  // 677
	CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::IterateInPlace<CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::Remove(
																bool bEndPeekDuringIteration,
																class& iterationFunctor,
																class& removedItemFunctor);  // 684
	CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::IterateInPlace<CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::Remove(
																bool bEndPeekDuringIteration,
																class& iterationFunctor);  // 692
	CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::Remove(
		CFiber* pRemove);  // 248
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 146
	CFiber::Release(); // 243
} /* size: 643, inline expansions: 22 (2317 bytes) */

// <00160460> tier0/fibertools.cpp:257
// variables: 4
// function calls: 44
void CFiberJobPool::RegisterWorkerThreadPool(IFiberThreadWorkerPool* pThreadPool)
{
	ThreadInterlockedCompareExchange64(volatile int64* p,
						int64 value,
						int64 comparand);  // 417
	ThreadInterlockedAssignPointerIf(volatile void** p,
					void* value,
					void* comparand);  // 576
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 581
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 582
	ThreadInterlockedCompareExchange64(volatile int64* p,
						int64 value,
						int64 comparand);  // 416
	ThreadInterlockedCompareExchangePointer(volatile void** p,
						void* value,
						void* comparand);  // 606
	ThreadInterlockedCompareExchange64(volatile int64* p,
						int64 value,
						int64 comparand);  // 417
	ThreadInterlockedAssignPointerIf(volatile void** p,
					void* value,
					void* comparand);  // 619
	{
		CEventListNode* pNext; // 629
	}
	ThreadInterlockedCompareExchange64(volatile int64* p,
						int64 value,
						int64 comparand);  // 417
	ThreadInterlockedAssignPointerIf(volatile void** p,
					void* value,
					void* comparand);  // 624
	CLockList::InternalPop(); // 587
	CLockList::InternalPush(
			CEventListNode& pushNode);  // 665
	CEventLock::LockF<CEventLock::Lock(
										CEventListNode& waitEventNode,
										class& waitFunctor);  // 1051
	CEventLock::Lock(
		CEventListNode& waitEventNode);  // 1090
	{
		CEventListStackNode temp; // 1094
		CEventListStackNode::CEventListStackNode(); // 1094
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 417
		ThreadInterlockedAssignPointerIf(volatile void** p,
						void* value,
						void* comparand);  // 576
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 415
		ThreadInterlockedExchangePointer(volatile void** p,
						void* value);  // 581
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 415
		ThreadInterlockedExchangePointer(volatile void** p,
						void* value);  // 582
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 416
		ThreadInterlockedCompareExchangePointer(volatile void** p,
							void* value,
							void* comparand);  // 606
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 417
		ThreadInterlockedAssignPointerIf(volatile void** p,
						void* value,
						void* comparand);  // 619
		{
			CEventListNode* pNext; // 629
		}
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 417
		ThreadInterlockedAssignPointerIf(volatile void** p,
						void* value,
						void* comparand);  // 624
		CLockList::InternalPop(); // 587
		CLockList::InternalPush(
				CEventListNode& pushNode);  // 665
		CEventLock::LockF<CEventLock::Lock(
											CEventListNode& waitEventNode,
											class& waitFunctor);  // 1051
		CEventLock::Lock(
			CEventListNode& waitEventNode);  // 1095
		CEventListStackNode::~CEventListStackNode(); // 1096
	}
	CEventLock::Lock(); // 1085
	CEventLock::Lock(); // 259
	ThreadInterlockedCompareExchange64(volatile int64* p,
						int64 value,
						int64 comparand);  // 416
	ThreadInterlockedCompareExchangePointer(volatile void** p,
						void* value,
						void* comparand);  // 606
	ThreadInterlockedCompareExchange64(volatile int64* p,
						int64 value,
						int64 comparand);  // 417
	ThreadInterlockedAssignPointerIf(volatile void** p,
					void* value,
					void* comparand);  // 619
	{
		CEventListNode* pNext; // 629
	}
	ThreadInterlockedCompareExchange64(volatile int64* p,
						int64 value,
						int64 comparand);  // 417
	ThreadInterlockedAssignPointerIf(volatile void** p,
					void* value,
					void* comparand);  // 624
	CLockList::InternalPop(); // 680
	CEventLock::Unlock(); // 266
} /* size: 643, inline expansions: 26 (1316 bytes) */

// <0015F743> tier0/fibertools.cpp:269
// variables: 5
// function calls: 44
void CFiberJobPool::UnregisterWorkerThreadPool(IFiberThreadWorkerPool* pThreadPool)
{
	{
		int i; // 272
	}
	ThreadInterlockedCompareExchange64(volatile int64* p,
						int64 value,
						int64 comparand);  // 417
	ThreadInterlockedAssignPointerIf(volatile void** p,
					void* value,
					void* comparand);  // 576
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 581
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 582
	ThreadInterlockedCompareExchange64(volatile int64* p,
						int64 value,
						int64 comparand);  // 416
	ThreadInterlockedCompareExchangePointer(volatile void** p,
						void* value,
						void* comparand);  // 606
	ThreadInterlockedCompareExchange64(volatile int64* p,
						int64 value,
						int64 comparand);  // 417
	ThreadInterlockedAssignPointerIf(volatile void** p,
					void* value,
					void* comparand);  // 619
	{
		CEventListNode* pNext; // 629
	}
	ThreadInterlockedCompareExchange64(volatile int64* p,
						int64 value,
						int64 comparand);  // 417
	ThreadInterlockedAssignPointerIf(volatile void** p,
					void* value,
					void* comparand);  // 624
	CLockList::InternalPop(); // 587
	CLockList::InternalPush(
			CEventListNode& pushNode);  // 665
	CEventLock::LockF<CEventLock::Lock(
										CEventListNode& waitEventNode,
										class& waitFunctor);  // 1051
	CEventLock::Lock(
		CEventListNode& waitEventNode);  // 1090
	{
		CEventListStackNode temp; // 1094
		CEventListStackNode::CEventListStackNode(); // 1094
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 417
		ThreadInterlockedAssignPointerIf(volatile void** p,
						void* value,
						void* comparand);  // 576
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 415
		ThreadInterlockedExchangePointer(volatile void** p,
						void* value);  // 581
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 415
		ThreadInterlockedExchangePointer(volatile void** p,
						void* value);  // 582
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 416
		ThreadInterlockedCompareExchangePointer(volatile void** p,
							void* value,
							void* comparand);  // 606
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 417
		ThreadInterlockedAssignPointerIf(volatile void** p,
						void* value,
						void* comparand);  // 619
		{
			CEventListNode* pNext; // 629
		}
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 417
		ThreadInterlockedAssignPointerIf(volatile void** p,
						void* value,
						void* comparand);  // 624
		CLockList::InternalPop(); // 587
		CLockList::InternalPush(
				CEventListNode& pushNode);  // 665
		CEventLock::LockF<CEventLock::Lock(
											CEventListNode& waitEventNode,
											class& waitFunctor);  // 1051
		CEventLock::Lock(
			CEventListNode& waitEventNode);  // 1095
		CEventListStackNode::~CEventListStackNode(); // 1096
	}
	CEventLock::Lock(); // 1085
	CEventLock::Lock(); // 271
	ThreadInterlockedCompareExchange64(volatile int64* p,
						int64 value,
						int64 comparand);  // 416
	ThreadInterlockedCompareExchangePointer(volatile void** p,
						void* value,
						void* comparand);  // 606
	ThreadInterlockedCompareExchange64(volatile int64* p,
						int64 value,
						int64 comparand);  // 417
	ThreadInterlockedAssignPointerIf(volatile void** p,
					void* value,
					void* comparand);  // 619
	{
		CEventListNode* pNext; // 629
	}
	ThreadInterlockedCompareExchange64(volatile int64* p,
						int64 value,
						int64 comparand);  // 417
	ThreadInterlockedAssignPointerIf(volatile void** p,
					void* value,
					void* comparand);  // 624
	CLockList::InternalPop(); // 680
	CEventLock::Unlock(); // 282
} /* size: 664, inline expansions: 26 (1294 bytes) */

// <0015F721> tier0/fibertools.cpp:295
void s_FiberJobPool_ResolveFunc(COrderedConstructor_DependencyManagement<CFiberJobPool>& owner)
{
} /* size: 0 */

// <0015F555> tier0/fibertools.cpp:303
// function calls: 8
void CFiber::CFiber()
{
	CThreadManualEvent::CThreadManualEvent(); // 30
	CEventListNode::CEventListNode(); // 317
	CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::GetLoopbackAddress(); // 149
	CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::CTSFastPushQueue_Base(); // 72
	CEventList::CEventList(); // 317
	CInterlockedIntT<unsigned int, 4>::CInterlockedIntT(
			unsigned int value);  // 313
	CInterlockedIntT<unsigned int, 4>::CInterlockedIntT(
			unsigned int value);  // 314
	Tier0FiberLocals_t::Tier0FiberLocals_t(); // 317
} /* size: 244, inline expansions: 8 (154 bytes) */

// <0015F538> tier0/fibertools.cpp:303
void CFiber::CFiber()
{
} /* size: 0 */

// <0015F389> tier0/fibertools.cpp:322
// function calls: 7
void CFiber::~CFiber()
{
	CInterlockedIntT<unsigned int, 4>::operator unsigned int(); // 324
	CThreadEvent::~CThreadEvent(); // 1637
	CThreadManualEvent::~CThreadManualEvent(); // 26
	CEventListNode::~CEventListNode(); // 330
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 146
	CFiber::Release(); // 326
} /* size: 81, inline expansions: 7 (114 bytes) */

// <0015F36C> tier0/fibertools.cpp:322
void CFiber::~CFiber()
{
} /* size: 0 */

// <0015F321> tier0/fibertools.cpp:333
void CInspectRefCount::CInspectRefCount()
{
} /* size: 0 */

// <0015F304> tier0/fibertools.cpp:333
inline void CInspectRefCount::CInspectRefCount()
{
} /* size: 0 */

// <00152ED7> tier0/fibertools.cpp:333
// variable: 1
// function calls: 7
void CInspectRefCount::~CInspectRefCount()
{
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1074
	{
		uint32 nExistingRefCount; // 1086
		ThreadInterlockedAnd(volatile int32* p,
					int32 value);  // 430
		ThreadInterlockedAnd(volatile uint32* p,
					uint32 value);  // 1086
	}
	COrderedConstructor_DependencyManagement<CFiber>::PrematurelyReleaseWrapperInstanceRef(); // 1077
	COrderedConstructor_DependencyManagement<CFiber>::~COrderedConstructor_DependencyManagement(); // 470
	COrderedConstructor_Create<CFiber, COrderedResolve_NoResolve, false>::~COrderedConstructor_Create(); // 333
} /* size: 52, inline expansions: 5 (133 bytes) */

// <00152EBA> tier0/fibertools.cpp:333
inline void CInspectRefCount::~CInspectRefCount()
{
} /* size: 0 */

// <00151501> tier0/fibertools.cpp:333
// member functions: 3
// member variable: 1
// struct size: 320
class CInspectRefCount : public COrderedConstructor_Create<CFiber, COrderedResolve_NoResolve, false> {
public:
	/* class COrderedConstructor_Create<CFiber, COrderedResolve_NoResolve, false> <ancestor>; */ /* 0 320 */
	/* tier0/fibertools.cpp:336 */
	uint32 GetRefCount(const CInspectRefCount* );
	void ~CInspectRefCount(CInspectRefCount* );
	void CInspectRefCount(CInspectRefCount* );
} __attribute__((__aligned__(8)));

// <0015E188> tier0/fibertools.cpp:340
// variables: 22
// function calls: 53
void AllocPooledFiber(SizeBuckets_t nStackMemorySize, size_t nClearToFFEEFFEE_DWORD_Interval)
{
	FiberToolsOrderedConstructionGlobals_t& globals; // 342
	CFiber* pFiber; // 343
	const char   __FUNCTION__; // 6033
	size_t nDesiredMem; // 383
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_347; // 347
		{
			const size_t  nNumFibersInAPage; // 353
			{
				CFiber* pStop; // 355
				Construct<CFiber>(CFiber* pMemory); // 357
				ThreadInterlockedExchange(volatile int32* p,
								int32 value);  // 641
				CInterlockedIntT<unsigned int, 4>::operator=(
						unsigned int newValue);  // 358
				ThreadInterlockedOr(volatile int32* p,
							int32 value);  // 618
				CInterlockedIntT<unsigned int, 4>::InterlockedOr(
						unsigned int newValue);  // 625
				CInterlockedIntT<unsigned int, 4>::operator|=(
						unsigned int mask);  // 359
				{
				}
				ThreadInterlockedExchange64(volatile int64* p,
								int64 value);  // 415
				ThreadInterlockedExchangePointer(volatile void** p,
								void* value);  // 198
				CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::Push(
					CFiber* pPushNode);  // 360
			}
			Construct<CFiber>(CFiber* pMemory); // 362
			ThreadInterlockedExchange(volatile int32* p,
							int32 value);  // 641
			CInterlockedIntT<unsigned int, 4>::operator=(
					unsigned int newValue);  // 363
			ThreadInterlockedOr(volatile int32* p,
						int32 value);  // 618
			CInterlockedIntT<unsigned int, 4>::InterlockedOr(
					unsigned int newValue);  // 625
			CInterlockedIntT<unsigned int, 4>::operator|=(
					unsigned int mask);  // 364
		}
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
				int nLineNumber);  // 347
		{
			volatile CFiber* pPop; // 237
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 415
			ThreadInterlockedExchangePointer(volatile void** p,
							void* value);  // 237
		}
		CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::BeginPeek(
				bool bWaitIfAlreadyPeeked);  // 414
		{
			volatile CFiber* pNext; // 277
			CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::GetLoopbackAddress(); // 270
			ThreadInterlockedCompareExchange64(volatile int64* p,
								int64 value,
								int64 comparand);  // 417
			ThreadInterlockedAssignPointerIf(volatile void** p,
							void* value,
							void* comparand);  // 270
			CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::InternalGetNextPopItemFromActiveList(
								volatile CFiber* pCurItem);  // 277
		}
		CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::EndPeek_Pop(
				CFiber* pPeeked);  // 260
		CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::EndPeek_Pop(
				CFiber* pPeeked);  // 415
		CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::Pop(
			bool bWaitIfAlreadyPeeked);  // 350
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 366
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 372
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 373
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 374
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 375
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 376
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 377
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 378
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 379
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 380
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 418
	}
	{
		uint8* pMem; // 423
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 618
		CInterlockedIntT<unsigned int, 4>::InterlockedOr(
				unsigned int newValue);  // 625
		CInterlockedIntT<unsigned int, 4>::operator|=(
				unsigned int mask);  // 425
	}
	{
	}
	COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>::GetRaw(); // 501
	COrderedConstructor_Create<FiberToolsOrderedConstructionGlobals_t, COrderedResolve_NoResolve, false>::GetRaw<>(); // 523
	COrderedConstructor_Create<FiberToolsOrderedConstructionGlobals_t, COrderedResolve_NoResolve, false>::operator FiberToolsOrderedConstructionGlobals_t&<FiberToolsOrderedConstructionGlobals_t>(); // 342
	{
		volatile CFiber* pPop; // 237
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 415
		ThreadInterlockedExchangePointer(volatile void** p,
						void* value);  // 237
	}
	CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::BeginPeek(
			bool bWaitIfAlreadyPeeked);  // 414
	{
		volatile CFiber* pNext; // 277
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 417
		ThreadInterlockedAssignPointerIf(volatile void** p,
						void* value,
						void* comparand);  // 270
		CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::InternalGetNextPopItemFromActiveList(
							volatile CFiber* pCurItem);  // 277
	}
	CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::EndPeek_Pop(
			CFiber* pPeeked);  // 260
	CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::EndPeek_Pop(
			CFiber* pPeeked);  // 415
	CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::Pop(
		bool bWaitIfAlreadyPeeked);  // 343
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 368
	_DebuggerBreakInlineExpressionWrapper(void); // 368
} /* size: 0, variables: 4, inline expansions: 10 (516 bytes) */

// <0015D922> tier0/fibertools.cpp:431
// variables: 12
// function calls: 19
void CFiber::ReachedZeroReferences()
{
	const char   __FUNCTION__; // 8183
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 440
	}
	{
		FiberToolsOrderedConstructionGlobals_t& globals; // 473
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 463
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 464
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 465
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 466
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 467
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 468
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 469
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 470
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 471
		}
		CInterlockedIntT<unsigned int, 4>::operator&(
				unsigned int operand);  // 458
		{
		}
		COrderedConstructor_DependencyManagement<FiberToolsOrderedConstructionGlobals_t>::GetRaw(); // 501
		COrderedConstructor_Create<FiberToolsOrderedConstructionGlobals_t, COrderedResolve_NoResolve, false>::GetRaw<>(); // 523
		COrderedConstructor_Create<FiberToolsOrderedConstructionGlobals_t, COrderedResolve_NoResolve, false>::operator FiberToolsOrderedConstructionGlobals_t&<FiberToolsOrderedConstructionGlobals_t>(); // 473
		{
		}
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 415
		ThreadInterlockedExchangePointer(volatile void** p,
						void* value);  // 198
		CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::Push(
			CFiber* pPushNode);  // 474
		ThreadInterlockedAnd(volatile int32* p,
					int32 value);  // 629
		CInterlockedIntT<unsigned int, 4>::InterlockedAnd(
				unsigned int newValue);  // 636
		CInterlockedIntT<unsigned int, 4>::operator&=(
				unsigned int mask);  // 460
	}
	CInterlockedIntT<unsigned int, 4>::operator&(
			unsigned int operand);  // 433
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 629
	CInterlockedIntT<unsigned int, 4>::InterlockedAnd(
			unsigned int newValue);  // 636
	CInterlockedIntT<unsigned int, 4>::operator&=(
			unsigned int mask);  // 446
	CInterlockedIntT<unsigned int, 4>::operator&(
			unsigned int operand);  // 449
	CInterlockedIntT<unsigned int, 4>::operator&(
			unsigned int operand);  // 454
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 629
	CInterlockedIntT<unsigned int, 4>::InterlockedAnd(
			unsigned int newValue);  // 636
	CInterlockedIntT<unsigned int, 4>::operator&=(
			unsigned int mask);  // 452
} /* size: 0, variables: 1, inline expansions: 9 (74 bytes) */

// <0015D564> tier0/fibertools.cpp:478
// variables: 6
// function calls: 8
void CFiber::InitStackContext(void* pStackMemory, size_t nStackMemorySize, bool bDeleteMemoryOnZeroRefCount, size_t nClearToFFEEFFEE_Interval)
{
	const char   __FUNCTION__; // 6033
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 480
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 487
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 491
	}
	{
		uint32* pStop; // 500
		{
			uint32* pMemIter; // 501
		}
		Min<unsigned int*>(unsigned int* const& val1,
					unsigned int* const& val2);  // 500
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 618
		CInterlockedIntT<unsigned int, 4>::InterlockedOr(
				unsigned int newValue);  // 625
		CInterlockedIntT<unsigned int, 4>::operator|=(
				unsigned int mask);  // 506
	}
	CInterlockedIntT<unsigned int, 4>::operator&(
			unsigned int operand);  // 491
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 618
	CInterlockedIntT<unsigned int, 4>::InterlockedOr(
			unsigned int newValue);  // 625
	CInterlockedIntT<unsigned int, 4>::operator|=(
			unsigned int mask);  // 494
} /* size: 0, variables: 1, inline expansions: 4 (41 bytes) */

// <0015D3D0> tier0/fibertools.cpp:516
// variables: 2
// function calls: 3
void CFiber::ConstructThreadFiber(size_t nCreatedThreadSize)
{
	const char   __FUNCTION__; // 5075
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 518
	}
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 618
	CInterlockedIntT<unsigned int, 4>::InterlockedOr(
			unsigned int newValue);  // 625
	CInterlockedIntT<unsigned int, 4>::operator|=(
			unsigned int mask);  // 522
} /* size: 0, variables: 1, inline expansions: 3 (24 bytes) */

// <0015D364> tier0/fibertools.cpp:526
// variable: 1
void CFiber::SetThreadFiberMemoryRange(size_t nCreatedThreadSize)
{
	void* pJustNeedAStackVariable; // 533
} /* size: 86, variables: 1 */

// <0015D229> tier0/fibertools.cpp:550
// variables: 5
void CFiber::ClearUnusedSpaceToFFEEFFEE(void* pHigh)
{
	const char   __FUNCTION__; // 4563
	{
		size_t nNumDWORDs; // 561
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 558
		}
		{
			uint32* pStop; // 564
			{
				uint32* pMemIter; // 565
			}
		}
	}
} /* size: 302, variables: 1 */

// <0015CFF4> tier0/fibertools.cpp:573
// variables: 7
// function calls: 3
void* CFiber::DetachFromStackContext()
{
	const char   __FUNCTION__; // 4248
	void* pRetVal; // 589
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 575
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 576
	}
	{
		uint32* pStop; // 581
		{
			uint32* pMemIter; // 582
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 584
			}
		}
		Min<unsigned int*>(unsigned int* const& val1,
					unsigned int* const& val2);  // 581
	}
	CInterlockedIntT<unsigned int, 4>::operator&(
			unsigned int operand);  // 576
	CInterlockedIntT<unsigned int, 4>::operator&(
			unsigned int operand);  // 579
} /* size: 0, variables: 2, inline expansions: 2 (12 bytes) */

// <0015CF02> tier0/fibertools.cpp:598
// variables: 5
void CFiber::EstimateBytesUsed(size_t nTestDWORDInterval)
{
	size_t nIntervalDiv; // 614
	size_t nRoundedInterval; // 615
	uint32* pStop; // 622
	{
		uint8* pStackVar; // 605
	}
	{
		uint32* pMemIter; // 623
	}
} /* size: 211, variables: 3 */

// <0015CB9C> tier0/fibertools.cpp:633
// variables: 3
// function calls: 9
void* CFiber::InternalSetFiberJob(void (*pJob)(void *), void* pContext, size_t nCopyContextParamSize, bool bJobAcceptsInitialResume)
{
	const char   __FUNCTION__; // 3441
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 639
	}
	{
		void* pParamSpace; // 652
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 656
	}
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 618
	CInterlockedIntT<unsigned int, 4>::InterlockedOr(
			unsigned int newValue);  // 635
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 618
	CInterlockedIntT<unsigned int, 4>::InterlockedOr(
			unsigned int newValue);  // 642
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 629
	CInterlockedIntT<unsigned int, 4>::InterlockedAnd(
			unsigned int newValue);  // 667
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 629
	CInterlockedIntT<unsigned int, 4>::InterlockedAnd(
			unsigned int newValue);  // 646
} /* size: 0, variables: 1, inline expansions: 8 (92 bytes) */

// <0015C9E6> tier0/fibertools.cpp:671
// function calls: 6
void CFiber::IsReadyToResume()
{
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 618
	CInterlockedIntT<unsigned int, 4>::InterlockedOr(
			unsigned int newValue);  // 673
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 629
	CInterlockedIntT<unsigned int, 4>::InterlockedAnd(
			unsigned int newValue);  // 687
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 629
	CInterlockedIntT<unsigned int, 4>::InterlockedAnd(
			unsigned int newValue);  // 681
} /* size: 99, inline expansions: 6 (49 bytes) */

// <0015C066> tier0/fibertools.cpp:691
// variables: 20
// function calls: 26
void CFiber::ResumeJob(void* pYieldRetVal)
{
	intp nJmpResult; // 704
	MemoryRange_t* pMemoryRangeLeft; // 705
	const char   __FUNCTION__; // 42425
	{
		void* pJobContext; // 732
		MemoryRange_t stackRange; // 733
		_RunningInNewStack_t initialResume; // 737
		RunWithAlternateStack<long long int, CFiber::_RunningInNewStack_t*>(const MemoryRange_t& alternateStackRange,
											long long int (*pFnRun)(_RunningInNewStack_t *),
											_RunningInNewStack_t* pPassThroughArg,
											JmpBuf_AlternateStack_t** ppJmpBack);  // 738
	}
	{
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 760
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 761
		}
		{
			volatile CEventListNode* pPop; // 237
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 415
			ThreadInterlockedExchangePointer(volatile void** p,
							void* value);  // 237
		}
		CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::BeginPeek(
				bool bWaitIfAlreadyPeeked);  // 443
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 415
		ThreadInterlockedExchangePointer(volatile void** p,
						void* value);  // 313
		{
			volatile CEventListNode* pNext; // 320
			{
				volatile CEventListNode* pListIter; // 321
			}
		}
		CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::EndPeek_Detach(
				CEventListNode* pPeeked);  // 305
		CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::EndPeek_Detach(
				CEventListNode* pPeeked);  // 444
		CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::Detach(); // 766
		ThreadInterlockedAnd(volatile int32* p,
					int32 value);  // 629
		CInterlockedIntT<unsigned int, 4>::InterlockedAnd(
				unsigned int newValue);  // 636
		CInterlockedIntT<unsigned int, 4>::operator&=(
				unsigned int mask);  // 772
		{
			CEventListNode* pNext; // 515
			IterResult_t iterateResult; // 522
			operator()(const class* __closure,
					CEventListNode* pNotify); // 69
			CallFunctor<CEventListNode, CFiber::ResumeJob(void*)::<lambda(CEventListNode*)>&>(CEventListNode* pList,
														class& functor); // 522
		}
		IterateDetachedList<CFiber::ResumeJob(void*)::<lambda(CEventListNode*)>&, CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::IterateDetachedList<CFiber::ResumeJob(void*)::<lambda(CEventListNode*)> >(CEventListNode*, CFiber::ResumeJob(void*)::<lambda(CEventListNode*)>&&)::<lambda(CEventListNode*)> >(CEventListNode* pList,
																class& functor,
																class& removedItemFunctor); // 547
		IterateDetachedList<CFiber::ResumeJob(void*)::<lambda(CEventListNode*)> >(CEventListNode* pList,
												class& functor); // 766
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 779
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 780
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 784
	}
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 618
	CInterlockedIntT<unsigned int, 4>::InterlockedOr(
			unsigned int newValue);  // 693
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 242
	CFiber::IsThreadFiber(); // 714
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 242
	CFiber::IsThreadFiber(); // 745
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 629
	CInterlockedIntT<unsigned int, 4>::InterlockedAnd(
			unsigned int newValue);  // 787
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 629
	CInterlockedIntT<unsigned int, 4>::InterlockedAnd(
			unsigned int newValue);  // 700
} /* size: 0, variables: 3, inline expansions: 10 (74 bytes) */

// <00164ECC> tier0/fibertools.cpp:791
// variables: 4
// function calls: 15
void* CFiber::FiberYield(bool (*pFnResumeHint)(void *), void* pFnResumeHintContext)
{
	void* pYieldResult; // 793
	CInterlockedIntT<unsigned int, 4>::operator&(
			unsigned int operand);  // 795
	{
		uint32 nTestMemory; // 829
		CFiber::IsMemoryInFiberRange(
					const void* pMem);  // 832
	}
	{
		CFiber* pJobFiber; // 800
		{
		}
		COrderedConstructor_DependencyManagement<CFiberJobPool>::GetRaw(); // 501
		COrderedConstructor_Create<CFiberJobPool, CResolveOrderedFunc<CFiberJobPool, s_FiberJobPool_ResolveFunc>, false>::GetRaw<>(); // 810
		{
		}
		COrderedConstructor_DependencyManagement<CFiberJobPool>::GetRaw(); // 501
		COrderedConstructor_Create<CFiberJobPool, CResolveOrderedFunc<CFiberJobPool, s_FiberJobPool_ResolveFunc>, false>::GetRaw<>(); // 808
		CInterlockedIntT<unsigned int, 4>::operator&(
				unsigned int operand);  // 161
		{
		}
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 415
		ThreadInterlockedExchangePointer(volatile void** p,
						void* value);  // 198
		CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::Push(
			CFiber* pPushNode);  // 163
		{
			int i; // 170
		}
		{
		}
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 415
		ThreadInterlockedExchangePointer(volatile void** p,
						void* value);  // 198
		CTSFastPushQueue_Base<CFiber, CFiber, CFiber, &CFiber::m_pNext>::Push(
			CFiber* pPushNode);  // 167
		CFiberJobPool::AddFiberToJobPool(
					CFiber* pFiber,
					bool bAssumeCallersReference);  // 808
	}
	CFiber::FiberYield(
			bool (*pFnResumeHint)(void *),
			void* pFnResumeHintContext);  // 791
} /* size: 0, variables: 1, inline expansions: 2 (411 bytes) */

// <0015BFE5> tier0/fibertools.cpp:791
// variables: 3
void* CFiber::FiberYield(bool (*pFnResumeHint)(void *), void* pFnResumeHintContext)
{
	void* pYieldResult; // 793
	{
		CFiber* pJobFiber; // 800
	}
	{
		uint32 nTestMemory; // 829
	}
} /* size: 0, variables: 1 */

// <0015BFC6> tier0/fibertools.cpp:847
void GetCurrentFiber(void)
{
} /* size: 29 */

// <0015BF78> tier0/fibertools.cpp:852
// variable: 1
void SetCurrentFiber(CFiber* pNew)
{
	CFiber* pRet; // 854
} /* size: 51, variables: 1 */

// <0015BF01> tier0/fibertools.cpp:859
// variable: 1
// function call: 1
void IsRunningInThreadMemory(void)
{
	CFiber* pCurrentFiber; // 861
	CInterlockedIntT<unsigned int, 4>::operator&(
			unsigned int operand);  // 862
} /* size: 79, variables: 1, inline expansions: 1 (6 bytes) */

// <0015BE14> tier0/fibertools.cpp:865
// variables: 3
void RunInThreadMemory(intp (*pFnRun)(void *), void* pContext)
{
	MemoryRange_t* pThreadMemory; // 867
	{
		JmpBuf_AlternateStack_t* pEnsureBreakable; // 871
		intp nResult; // 872
	}
} /* size: 182, variables: 1 */

// <0015B89C> tier0/fibertools.cpp:882
// variables: 7
// function calls: 21
void CFiber::WaitForJobCompletion(CEventListNode& waitEventNode)
{
	{
	}
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 198
	CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::Push(
		CEventListNode* pPushNode);  // 891
	{
		volatile CEventListNode* pPop; // 237
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 415
		ThreadInterlockedExchangePointer(volatile void** p,
						void* value);  // 237
	}
	CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::BeginPeek(
			bool bWaitIfAlreadyPeeked);  // 677
	{
		IterResult_t iterateResult; // 577
		bool bEndOfList; // 582
		bool bContinue; // 584
		operator()(const class* __closure,
				CEventListNode* pIter); // 38
		_CTSFastPushQueueIterateResult<TSFPQ_IterateResult>::_CTSFastPushQueueIterateResult(
						TSFPQ_IterateResult fullResult);  // 38
		CallFunctor<CEventListNode, CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::Remove(CEventListNode*)::<lambda(CEventListNode*)>&>(CEventListNode* pList,
																class& functor); // 577
		CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::InternalGetNextPopItemFromActiveList(
							volatile CEventListNode* pCurItem);  // 581
	}
	{
		volatile CEventListNode* pNext; // 277
		CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::InternalGetNextPopItemFromActiveList(
							volatile CEventListNode* pCurItem);  // 277
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 417
		ThreadInterlockedAssignPointerIf(volatile void** p,
						void* value,
						void* comparand);  // 270
	}
	CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::EndPeek_Pop(
			CEventListNode* pPeeked);  // 260
	CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::EndPeek_Pop(
			CEventListNode* pPeeked);  // 627
	ThreadInterlockedCompareExchange64(volatile int64* p,
						int64 value,
						int64 comparand);  // 417
	ThreadInterlockedAssignPointerIf(volatile void** p,
					void* value,
					void* comparand);  // 639
	CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::IteratePeekedList<CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::Remove(
																bool bEndPeekDuringIteration,
																CEventListNode* pPeeked,
																class& iterationFunctor,
																class& removedItemFunctor);  // 677
	CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::IterateInPlace<CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::Remove(
																bool bEndPeekDuringIteration,
																class& iterationFunctor,
																class& removedItemFunctor);  // 684
	CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::IterateInPlace<CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::Remove(
																bool bEndPeekDuringIteration,
																class& iterationFunctor);  // 692
	CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::Remove(
		CEventListNode* pRemove);  // 898
} /* size: 0, inline expansions: 12 (1236 bytes) */

// <0015B7D9> tier0/fibertools.cpp:910
// variable: 1
// function calls: 3
void RunningInNewStack(_RunningInNewStack_t* pRunInNewStack)
{
	CFiber* pThisFiber; // 912
	{
		void ()(void *, void *)* pJob; // 916
	}
	{
		void ()(void *)* pJob; // 921
	}
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 914
} /* size: 97, variables: 1, inline expansions: 1 (6 bytes) */

// <0015B6C8> tier0/fibertools.cpp:927
// variables: 4
void* CFiber::YieldJmp()
{
	const char   __FUNCTION__; // 63048
	intp nRet; // 932
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 929
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 930
	}
} /* size: 0, variables: 2 */

// <0015B622> tier0/fibertools.cpp:939
// function call: 1
void CThreadFiber::CThreadFiber(size_t nCreatedThreadSize)
{
	CThreadFiber::CThreadFiber(
			size_t nCreatedThreadSize);  // 939
} /* size: 88, inline expansions: 1 (28 bytes) */

// <0015B5F8> tier0/fibertools.cpp:939
void CThreadFiber::CThreadFiber(size_t nCreatedThreadSize)
{
} /* size: 0 */

// <0015B4D1> tier0/fibertools.cpp:1062
// variable: 1
// function calls: 5
void CEventRWLock::DuplicateReadLock()
{
	uint32 nIncrement; // 1065
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 1065
	CInterlockedIntT<unsigned int, 4>::operator&(
			unsigned int operand);  // 1067
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 1077
} /* size: 46, variables: 1, inline expansions: 5 (27 bytes) */

// <0015A91E> tier0/fibertools.cpp:1081
// variables: 4
// function calls: 40
void CEventRWLock::UnlockRead_LockForWrite(CEventListNode& waitEventNode)
{
	uint32 nPrelockValue; // 1087
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<unsigned int, 4>::AtomicAdd(
			unsigned int add);  // 1087
	ThreadInterlockedCompareExchange64(volatile int64* p,
						int64 value,
						int64 comparand);  // 417
	ThreadInterlockedAssignPointerIf(volatile void** p,
					void* value,
					void* comparand);  // 576
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 581
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 582
	ThreadInterlockedCompareExchange64(volatile int64* p,
						int64 value,
						int64 comparand);  // 416
	ThreadInterlockedCompareExchangePointer(volatile void** p,
						void* value,
						void* comparand);  // 606
	ThreadInterlockedCompareExchange64(volatile int64* p,
						int64 value,
						int64 comparand);  // 417
	ThreadInterlockedAssignPointerIf(volatile void** p,
					void* value,
					void* comparand);  // 619
	{
		CEventListNode* pNext; // 629
	}
	ThreadInterlockedCompareExchange64(volatile int64* p,
						int64 value,
						int64 comparand);  // 417
	ThreadInterlockedAssignPointerIf(volatile void** p,
					void* value,
					void* comparand);  // 624
	CLockList::InternalPop(); // 587
	CLockList::InternalPush(
			CEventListNode& pushNode);  // 665
	CEventLock::LockF<CEventLock::Lock(
										CEventListNode& waitEventNode,
										class& waitFunctor);  // 1051
	CEventLock::Lock(
		CEventListNode& waitEventNode);  // 1090
	{
		CEventListStackNode temp; // 1094
		CEventListStackNode::CEventListStackNode(); // 1094
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 417
		ThreadInterlockedAssignPointerIf(volatile void** p,
						void* value,
						void* comparand);  // 576
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 415
		ThreadInterlockedExchangePointer(volatile void** p,
						void* value);  // 581
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 415
		ThreadInterlockedExchangePointer(volatile void** p,
						void* value);  // 582
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 416
		ThreadInterlockedCompareExchangePointer(volatile void** p,
							void* value,
							void* comparand);  // 606
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 417
		ThreadInterlockedAssignPointerIf(volatile void** p,
						void* value,
						void* comparand);  // 619
		{
			CEventListNode* pNext; // 629
		}
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 417
		ThreadInterlockedAssignPointerIf(volatile void** p,
						void* value,
						void* comparand);  // 624
		CLockList::InternalPop(); // 587
		CLockList::InternalPush(
				CEventListNode& pushNode);  // 665
		CEventLock::LockF<CEventLock::Lock(
											CEventListNode& waitEventNode,
											class& waitFunctor);  // 1051
		CEventLock::Lock(
			CEventListNode& waitEventNode);  // 1095
		CEventListStackNode::~CEventListStackNode(); // 1096
	}
	CEventLock::Lock(); // 1085
	CEventLock::Lock(); // 1115
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 1093
} /* size: 641, variables: 1, inline expansions: 22 (1068 bytes) */

// <0015A027> tier0/fibertools.cpp:1128
// variables: 12
// function calls: 29
void CEventRWLock::UnlockWrite_LockForRead(CEventListNode& waitEventNode)
{
	uint32 nPrelockValue; // 1144
	bool bLastWriteLock; // 1146
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 1133
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<unsigned int, 4>::operator++(); // 1233
		CEventRWLock::LockForRead(
				CEventListNode& waitEventNode);  // 1136
	}
	{
		{
			volatile CEventListNode* pPop; // 237
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 415
			ThreadInterlockedExchangePointer(volatile void** p,
							void* value);  // 237
		}
		CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::BeginPeek(
				bool bWaitIfAlreadyPeeked);  // 443
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 415
		ThreadInterlockedExchangePointer(volatile void** p,
						void* value);  // 313
		{
			volatile CEventListNode* pNext; // 320
			{
				volatile CEventListNode* pListIter; // 321
			}
		}
		CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::EndPeek_Detach(
				CEventListNode* pPeeked);  // 305
		CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::EndPeek_Detach(
				CEventListNode* pPeeked);  // 444
		CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::Detach(); // 1153
		{
			CEventListNode* pNext; // 515
			IterResult_t iterateResult; // 522
			operator()(const class* __closure,
					CEventListNode* pIter); // 38
			_CTSFastPushQueueIterateResult<TSFPQ_IterateResult>::_CTSFastPushQueueIterateResult(
							TSFPQ_IterateResult fullResult);  // 38
			CallFunctor<CEventListNode, CEventRWLock::UnlockWrite_LockForRead(CEventListNode&)::<lambda(CEventListNode*)>&>(CEventListNode* pList,
																class& functor); // 522
		}
		IterateDetachedList<CEventRWLock::UnlockWrite_LockForRead(CEventListNode&)::<lambda(CEventListNode*)>&, CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::IterateDetachedList<CEventRWLock::UnlockWrite_LockForRead(CEventListNode&)::<lambda(CEventListNode*)> >(CEventListNode*, CEventRWLock::UnlockWrite_LockForRead(CEventListNode&)::<lambda(CEventListNode*)>&&)::<lambda(CEventListNode*)> >(CEventListNode* pList,
																class& functor,
																class& removedItemFunctor); // 547
		IterateDetachedList<CEventRWLock::UnlockWrite_LockForRead(CEventListNode&)::<lambda(CEventListNode*)> >(CEventListNode* pList,
															class& functor); // 1153
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 629
	CInterlockedIntT<unsigned int, 4>::InterlockedAnd(
			unsigned int newValue);  // 1143
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<unsigned int, 4>::AtomicAdd(
			unsigned int add);  // 1144
	ThreadInterlockedCompareExchange64(volatile int64* p,
						int64 value,
						int64 comparand);  // 416
	ThreadInterlockedCompareExchangePointer(volatile void** p,
						void* value,
						void* comparand);  // 606
	ThreadInterlockedCompareExchange64(volatile int64* p,
						int64 value,
						int64 comparand);  // 417
	ThreadInterlockedAssignPointerIf(volatile void** p,
					void* value,
					void* comparand);  // 619
	{
		CEventListNode* pNext; // 629
	}
	ThreadInterlockedCompareExchange64(volatile int64* p,
						int64 value,
						int64 comparand);  // 417
	ThreadInterlockedAssignPointerIf(volatile void** p,
					void* value,
					void* comparand);  // 624
	CLockList::InternalPop(); // 680
	CEventLock::Unlock(); // 1165
} /* size: 0, variables: 2, inline expansions: 12 (288 bytes) */

// <00159B6D> tier0/fibertools.cpp:1182
// variables: 2
// function calls: 17
void CEventRWLock::HandleFirstWriteLockTransition(CEventListNode& waitEventNode)
{
	{
		uint32 nReaderSnapshot; // 1219
		ThreadInterlockedExchangeAdd(volatile int32* p,
						int32 value);  // 660
		CInterlockedIntT<unsigned int, 4>::AtomicAdd(
				unsigned int add);  // 1219
		ThreadInterlockedExchangeAdd(volatile int32* p,
						int32 value);  // 660
		CInterlockedIntT<int, 4>::AtomicAdd(
				int add);  // 1222
	}
	{
		uint32 nReaderSnapshot; // 1233
		ThreadInterlockedExchangeAdd(volatile int32* p,
						int32 value);  // 660
		CInterlockedIntT<unsigned int, 4>::AtomicAdd(
				unsigned int add);  // 1233
		ThreadInterlockedExchangeAdd(volatile int32* p,
						int32 value);  // 660
		CInterlockedIntT<int, 4>::AtomicAdd(
				int add);  // 1234
	}
	CInterlockedIntT<int, 4>::GetRaw(); // 1201
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 1204
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<unsigned int, 4>::AtomicAdd(
			unsigned int add);  // 1205
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 1206
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<unsigned int, 4>::AtomicAdd(
			unsigned int add);  // 1212
} /* size: 205, inline expansions: 9 (59 bytes) */

// <0016545A> tier0/fibertools.cpp:1241
// variables: 8
// function calls: 31
void CEventRWLock::WaitForReadLockTransition(CEventListNode& waitEventNode, uint32 nInterlockVal)
{
	{
		uint32 nUpdatedInterlock; // 1255
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<unsigned int, 4>::operator++(); // 1276
		{
		}
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 415
		ThreadInterlockedExchangePointer(volatile void** p,
						void* value);  // 198
		CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::Push(
			CEventListNode* pPushNode);  // 1253
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<unsigned int, 4>::operator--(); // 1255
		{
			volatile CEventListNode* pPop; // 237
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 415
			ThreadInterlockedExchangePointer(volatile void** p,
							void* value);  // 237
		}
		CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::BeginPeek(
				bool bWaitIfAlreadyPeeked);  // 677
		{
			IterResult_t iterateResult; // 577
			bool bEndOfList; // 582
			bool bContinue; // 584
			operator()(const class* __closure,
					CEventListNode* pIter); // 38
			_CTSFastPushQueueIterateResult<TSFPQ_IterateResult>::_CTSFastPushQueueIterateResult(
							TSFPQ_IterateResult fullResult);  // 38
			CallFunctor<CEventListNode, CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::Remove(CEventListNode*)::<lambda(CEventListNode*)>&>(CEventListNode* pList,
																class& functor); // 577
			CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::InternalGetNextPopItemFromActiveList(
								volatile CEventListNode* pCurItem);  // 581
		}
		{
			volatile CEventListNode* pNext; // 277
			CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::InternalGetNextPopItemFromActiveList(
								volatile CEventListNode* pCurItem);  // 277
			ThreadInterlockedCompareExchange64(volatile int64* p,
								int64 value,
								int64 comparand);  // 417
			ThreadInterlockedAssignPointerIf(volatile void** p,
							void* value,
							void* comparand);  // 270
		}
		CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::EndPeek_Pop(
				CEventListNode* pPeeked);  // 260
		CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::EndPeek_Pop(
				CEventListNode* pPeeked);  // 627
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 417
		ThreadInterlockedAssignPointerIf(volatile void** p,
						void* value,
						void* comparand);  // 639
		CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::IteratePeekedList<CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::Remove(
																bool bEndPeekDuringIteration,
																CEventListNode* pPeeked,
																class& iterationFunctor,
																class& removedItemFunctor);  // 677
		CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::IterateInPlace<CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::Remove(
																bool bEndPeekDuringIteration,
																class& iterationFunctor,
																class& removedItemFunctor);  // 684
		CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::IterateInPlace<CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::Remove(
																bool bEndPeekDuringIteration,
																class& iterationFunctor);  // 692
		CTSFastPushQueue_Base<CEventListNode, CEventListNode, CEventListNode, &CEventListNode::m_pNext>::Remove(
			CEventListNode* pRemove);  // 1269
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 1259
		CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1262
	}
	CEventRWLock::WaitForReadLockTransition(
					CEventListNode& waitEventNode,
					uint32 nInterlockVal);  // 1241
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 618
	CInterlockedIntT<unsigned int, 4>::InterlockedOr(
			unsigned int newValue);  // 1247
} /* size: 0, inline expansions: 3 (502 bytes) */

// <00159B27> tier0/fibertools.cpp:1241
// variable: 1
void CEventRWLock::WaitForReadLockTransition(CEventListNode& waitEventNode, uint32 nInterlockVal)
{
	{
		uint32 nUpdatedInterlock; // 1255
	}
} /* size: 0 */

// <001596B6> tier0/fibertools.cpp:1296
// variables: 12
// function calls: 12
void CEventRWLock_Debuggable<true>::DuplicateReadLock(CEventListNode& waitEventNode)
{
	bool bFound; // 1298
	const char   __FUNCTION__; // 55702
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1311
	}
	{
		volatile TrackedReadLock_t* pPop; // 237
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 415
		ThreadInterlockedExchangePointer(volatile void** p,
						void* value);  // 237
	}
	BeginPeek(const CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadL this,
			bool bWaitIfAlreadyPeeked);  // 677
	{
		IterResult_t iterateResult; // 577
		bool bEndOfList; // 582
		bool bContinue; // 584
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<unsigned int, 4>::operator++(); // 1305
		operator()(const class* __closure,
				TrackedReadLock_t* pIter); // 55
		_CTSFastPushQueueIterateResult<bool>::_CTSFastPushQueueIterateResult(
						bool bContinue);  // 55
		CallFunctor<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::DuplicateReadLock(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)>&>(TrackedReadLock_t* pList,
																class& functor); // 577
		InternalGetNextPopItemFromActiveList(const CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadL this,
							volatile TrackedReadLock_t* pCurItem);  // 581
	}
	IteratePeekedList<CEventRWLock_Debuggable<true>::DuplicateReadLock(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)>&, CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t, &CEventRWLock_Debuggable<true>::TrackedReadLock_t::pNext>::IterateInPlace<CEventRWLock_Debuggable<true>::DuplicateReadLock(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)> >(bool, CEventRWLock_Debuggable<true>::DuplicateReadLock(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)>&&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)>&>(const CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadL this,
																bool bEndPeekDuringIteration,
																TrackedReadLock_t* pPeeked,
																class& iterationFunctor,
																class& removedItemFunctor); // 677
	IterateInPlace<CEventRWLock_Debuggable<true>::DuplicateReadLock(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)>&, CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t, &CEventRWLock_Debuggable<true>::TrackedReadLock_t::pNext>::IterateInPlace<CEventRWLock_Debuggable<true>::DuplicateReadLock(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)> >(bool, CEventRWLock_Debuggable<true>::DuplicateReadLock(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)>&&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)> >(const CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadL this,
																bool bEndPeekDuringIteration,
																class& iterationFunctor,
																class& removedItemFunctor); // 684
	IterateInPlace<CEventRWLock_Debuggable<true>::DuplicateReadLock(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)> >(const CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadL this,
																bool bEndPeekDuringIteration,
																class& iterationFunctor); // 1299
} /* size: 0, variables: 2, inline expansions: 4 (384 bytes) */

// <00159312> tier0/fibertools.cpp:1314
// variables: 10
// function calls: 10
void CEventRWLock_Debuggable<true>::DoesHaveAnyReadLocks(CEventListNode& waitEventNode)
{
	bool bResult; // 1316
	{
		volatile TrackedReadLock_t* pPop; // 237
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 415
		ThreadInterlockedExchangePointer(volatile void** p,
						void* value);  // 237
	}
	BeginPeek(const CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadL this,
			bool bWaitIfAlreadyPeeked);  // 677
	{
		IterResult_t iterateResult; // 577
		bool bEndOfList; // 582
		bool bContinue; // 584
		operator()(const class* __closure,
				TrackedReadLock_t* pIter); // 55
		_CTSFastPushQueueIterateResult<bool>::_CTSFastPushQueueIterateResult(
						bool bContinue);  // 55
		CallFunctor<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::DoesHaveAnyReadLocks(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)>&>(TrackedReadLock_t* pList,
																class& functor); // 577
		InternalGetNextPopItemFromActiveList(const CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadL this,
							volatile TrackedReadLock_t* pCurItem);  // 581
	}
	IteratePeekedList<CEventRWLock_Debuggable<true>::DoesHaveAnyReadLocks(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)>&, CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t, &CEventRWLock_Debuggable<true>::TrackedReadLock_t::pNext>::IterateInPlace<CEventRWLock_Debuggable<true>::DoesHaveAnyReadLocks(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)> >(bool, CEventRWLock_Debuggable<true>::DoesHaveAnyReadLocks(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)>&&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)>&>(const CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadL this,
																bool bEndPeekDuringIteration,
																TrackedReadLock_t* pPeeked,
																class& iterationFunctor,
																class& removedItemFunctor); // 677
	IterateInPlace<CEventRWLock_Debuggable<true>::DoesHaveAnyReadLocks(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)>&, CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadLock_t, &CEventRWLock_Debuggable<true>::TrackedReadLock_t::pNext>::IterateInPlace<CEventRWLock_Debuggable<true>::DoesHaveAnyReadLocks(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)> >(bool, CEventRWLock_Debuggable<true>::DoesHaveAnyReadLocks(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)>&&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)> >(const CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadL this,
																bool bEndPeekDuringIteration,
																class& iterationFunctor,
																class& removedItemFunctor); // 684
	IterateInPlace<CEventRWLock_Debuggable<true>::DoesHaveAnyReadLocks(CEventListNode&)::<lambda(CEventRWLock_Debuggable<true>::TrackedReadLock_t*)> >(const CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadL this,
																bool bEndPeekDuringIteration,
																class& iterationFunctor); // 1318
} /* size: 128, variables: 1, inline expansions: 4 (321 bytes) */

// <00158EF2> tier0/fibertools.cpp:1334
// variables: 3
// function calls: 15
void CEventRWLock_Debuggable<true>::AllocOrFreeReadLockMem(TrackedReadLock_t* pFree)
{
	{
		TrackedReadLock_t* pRetVal; // 1343
		{
			volatile TrackedReadLock_t* pPop; // 237
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 415
			ThreadInterlockedExchangePointer(volatile void** p,
							void* value);  // 237
		}
		BeginPeek(const CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadL this,
				bool bWaitIfAlreadyPeeked);  // 414
		{
			volatile TrackedReadLock_t* pNext; // 277
			GetLoopbackAddress(const CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::Tracke this); // 270
			ThreadInterlockedCompareExchange64(volatile int64* p,
								int64 value,
								int64 comparand);  // 417
			ThreadInterlockedAssignPointerIf(volatile void** p,
							void* value,
							void* comparand);  // 270
			InternalGetNextPopItemFromActiveList(const CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadL this,
								volatile TrackedReadLock_t* pCurItem);  // 277
		}
		EndPeek_Pop(const CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadL this,
				TrackedReadLock_t* pPeeked);  // 260
		EndPeek_Pop(const CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadL this,
				TrackedReadLock_t* pPeeked);  // 415
		Pop(const CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadL this,
			bool bWaitIfAlreadyPeeked);  // 1343
		CInterlockedIntT<unsigned int, 4>::CInterlockedIntT(); // 982
		TrackedReadLock_t::TrackedReadLock_t(); // 1346
	}
	{
	}
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 198
	Push(const CTSFastPushQueue_Base<CEventRWLock_Debuggable<true>::TrackedReadLock_t, CEventRWLock_Debuggable<true>::TrackedReadL this,
		TrackedReadLock_t* pPushNode);  // 1338
} /* size: 0, inline expansions: 3 (88 bytes) */

