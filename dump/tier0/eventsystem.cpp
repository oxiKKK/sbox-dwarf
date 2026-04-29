
//
// tier0/eventsystem.cpp
//
//	referenced by: libtier0.so
//
//	functions: 32
//	classes: 3
//

// <0012172F> tier0/eventsystem.cpp:34
// member functions: 18
// member variables: 5
// class size: 144
class CEventQueue {
	/* tier0/eventsystem.cpp:55 */
	struct QueuedEvent_t {
		void * m_pTarget; /* 0 8 */
		CFunctorData * m_pData; /* 8 8 */
		CFunctorCallback * m_pCallback; /* 16 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tier0/eventsystem.cpp:37 */
	void CEventQueue(CEventQueue* );
	/* tier0/eventsystem.cpp:38 */
	void ~CEventQueue(CEventQueue* );
	/* tier0/eventsystem.cpp:41 */
	void PostEvent(CEventQueue* , CFunctorCallback* , CFunctorData* );
	/* tier0/eventsystem.cpp:44 */
	void ProcessEvents(CEventQueue* );
	/* tier0/eventsystem.cpp:47 */
	void DiscardEvents(CEventQueue* , CFunctorCallback* );
	/* tier0/eventsystem.cpp:50 */
	int AddRef(CEventQueue* );
	/* tier0/eventsystem.cpp:51 */
	int Release(CEventQueue* );
	/* tier0/eventsystem.cpp:52 */
	int RefCount(CEventQueue* );
private:
	/* tier0/eventsystem.cpp:62 */
	void Cleanup(CEventQueue* );
	CTSQueue<CFunctorCallback*, false> m_QueuedEventDiscards __attribute__((__aligned__(16))); /* 0 64 */
	CTSQueue<CEventQueue::QueuedEvent_t, false> m_Queue __attribute__((__aligned__(16))); /* 64 64 */
	CInterlockedInt m_nRefCount __attribute__((__aligned__(4))); /* 128 4 */
	bool m_bIsProcessingEvents; /* 132 1 */
	bool m_bIsDiscardingEvents; /* 133 1 */
	void CEventQueue(class CEventQueue *); /* linkage=_ZN11CEventQueueC4Ev */
	void ~CEventQueue(class CEventQueue *); /* linkage=_ZN11CEventQueueD4Ev */
	void PostEvent(class CEventQueue *, class CFunctorCallback *, class CFunctorData *); /* linkage=_ZN11CEventQueue9PostEventEP16CFunctorCallbackP12CFunctorData */
	void ProcessEvents(class CEventQueue *); /* linkage=_ZN11CEventQueue13ProcessEventsEv */
	void DiscardEvents(class CEventQueue *, class CFunctorCallback *); /* linkage=_ZN11CEventQueue13DiscardEventsEP16CFunctorCallback */
	int AddRef(class CEventQueue *); /* linkage=_ZN11CEventQueue6AddRefEv */
	int Release(class CEventQueue *); /* linkage=_ZN11CEventQueue7ReleaseEv */
	int RefCount(class CEventQueue *); /* linkage=_ZN11CEventQueue8RefCountEv */
	void Cleanup(class CEventQueue *); /* linkage=_ZN11CEventQueue7CleanupEv */
} __attribute__((__aligned__(16)));

// <00131E34> tier0/eventsystem.cpp:50
inline void CEventQueue::AddRef()
{
} /* size: 0 */

// <00131E1B> tier0/eventsystem.cpp:51
inline void CEventQueue::Release()
{
} /* size: 0 */

// <00131E02> tier0/eventsystem.cpp:52
inline void CEventQueue::RefCount()
{
} /* size: 0 */

// <00131A9A> tier0/eventsystem.cpp:78
// function calls: 15
void CEventQueue::CEventQueue()
{
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
	CTSListBase::CTSListBase(); // 846
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 862
	Node_t::Node_t(); // 864
	CTSQueue<CFunctorCallback::End(); // 865
	CTSQueue<CFunctorCallback::CTSQueue(); // 78
	CTSListBase::CTSListBase(); // 846
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 862
	Node_t::Node_t(); // 864
	CTSQueue<CEventQueue::QueuedEvent_t, false>::End(); // 865
	CTSQueue<CEventQueue::QueuedEvent_t, false>::CTSQueue(); // 78
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 78
} /* size: 237, inline expansions: 15 (298 bytes) */

// <00131A7E> tier0/eventsystem.cpp:78
void CEventQueue::CEventQueue()
{
} /* size: 0 */

// <00131025> tier0/eventsystem.cpp:86
// function calls: 28
void CEventQueue::~CEventQueue()
{
	{
		{
		}
		{
		}
	}
	{
		{
		}
		{
		}
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 203
		ThreadPause(void); // 208
		CTSListBase::Pop(); // 890
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 895
		{
		}
		{
		}
		{
		}
		CTSQueue<CEventQueue::QueuedEvent_t, false>::Purge(); // 870
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 871
		{
		}
		{
		}
		CTSQueue<CEventQueue::QueuedEvent_t, false>::End(); // 873
		{
		}
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 244
		ThreadPause(void); // 230
		CTSListBase::Detach(); // 135
		CTSListBase::~CTSListBase(); // 876
		CTSQueue<CEventQueue::QueuedEvent_t, false>::~CTSQueue(); // 91
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 203
		ThreadPause(void); // 208
		CTSListBase::Pop(); // 890
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 895
		{
		}
		{
		}
		{
		}
		CTSQueue<CFunctorCallback::Purge(); // 870
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 871
		{
		}
		{
		}
		CTSQueue<CFunctorCallback::End(); // 873
		{
		}
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 244
		ThreadPause(void); // 230
		CTSListBase::Detach(); // 135
		CTSListBase::~CTSListBase(); // 876
		CTSQueue<CFunctorCallback::~CTSQueue(); // 91
	}
} /* size: 0 */

// <00130FB5> tier0/eventsystem.cpp:86
// variables: 3
void CEventQueue::~CEventQueue()
{
	const char   __FUNCTION__; // 20116
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 88
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
} /* size: 0, variables: 1 */

// <00130C0D> tier0/eventsystem.cpp:97
// variable: 1
// function calls: 16
void CEventQueue::Cleanup()
{
	QueuedEvent_t event; // 99
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 1080
	CTSQueue<CEventQueue::QueuedEvent_t, false>::FreeNode(
		Node_t* pNode);  // 1103
	CTSQueue<CEventQueue::QueuedEvent_t, false>::PopItem(
		QueuedEvent_t* pResult);  // 100
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 357
	CRefCounted1<CFunctorCallback, CRefCountServiceBase<true, CRefMT> >::Release(); // 102
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 357
	CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> >::Release(); // 103
} /* size: 395, variables: 1, inline expansions: 16 (684 bytes) */

// <001302FE> tier0/eventsystem.cpp:111
// variables: 2
// function calls: 30
void CEventQueue::PostEvent(CFunctorCallback* pCallback, CFunctorData* pData)
{
	QueuedEvent_t event; // 113
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 199
	CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 356
	CRefCounted1<CFunctorCallback, CRefCountServiceBase<true, CRefMT> >::AddRef(); // 116
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 199
	CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 356
	CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> >::AddRef(); // 117
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 1085
	CopyConstruct<CEventQueue::QueuedEvent_t>(QueuedEvent_t* pMemory,
							const QueuedEvent_t& src);  // 1090
	{
	}
	{
	}
	{
		Node_t* pCurEnd; // 977
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<CEventQueue::QueuedEvent_t, false>::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<CEventQueue::QueuedEvent_t, false>::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 985
		{
		}
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 416
		ThreadInterlockedCompareExchangePointer(volatile void** p,
							void* value,
							void* comparand);  // 1142
		CTSQueue<CEventQueue::QueuedEvent_t, false>::InterlockedCompareExchangeNode(
						volatile Node_t** ppNode,
						Node_t* value,
						Node_t* comperand);  // 977
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<CEventQueue::QueuedEvent_t, false>::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1135
	CTSQueue<CEventQueue::QueuedEvent_t, false>::FinishPush(
			Node_t* pNode,
			const union NodeLink_t& oldTail);  // 991
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 993
	CTSQueue<CEventQueue::QueuedEvent_t, false>::Push(
		Node_t* pNode);  // 1091
	Node_t::Node_t(); // 1088
	CTSQueue<CEventQueue::QueuedEvent_t, false>::PushItem(
		const QueuedEvent_t& init);  // 118
} /* size: 0, variables: 1, inline expansions: 23 (1020 bytes) */

// <0012FBCC> tier0/eventsystem.cpp:125
// variables: 3
// function calls: 22
void CEventQueue::DiscardEvents(CFunctorCallback* pCallback)
{
	const char   __FUNCTION__; // 52410
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 127
	}
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 1085
	CopyConstruct<CFunctorCallback*>(CFunctorCallback** pMemory,
					CFunctorCallback* const& src);  // 1090
	{
	}
	{
	}
	{
		Node_t* pCurEnd; // 977
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 1147
		CTSQueue<CFunctorCallback::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<CFunctorCallback::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 985
		{
		}
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 416
		ThreadInterlockedCompareExchangePointer(volatile void** p,
							void* value,
							void* comparand);  // 1142
		CTSQueue<CFunctorCallback::InterlockedCompareExchangeNode(
						volatile Node_t** ppNode,
						Node_t* value,
						Node_t* comperand);  // 977
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<CFunctorCallback::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1135
	CTSQueue<CFunctorCallback::FinishPush(
			Node_t* pNode,
			const union NodeLink_t& oldTail);  // 991
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 993
	CTSQueue<CFunctorCallback::Push(
		Node_t* pNode);  // 1091
	Node_t::Node_t(); // 1088
	CTSQueue<CFunctorCallback::PushItem(
		CFunctorCallback* const& init);  // 133
} /* size: 0, variables: 1, inline expansions: 15 (918 bytes) */

// <0012EACC> tier0/eventsystem.cpp:144
// variables: 10
// function calls: 63
void CEventQueue::ProcessEvents()
{
	const char   __FUNCTION__; // 52410
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 146
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 147
	}
	{
		QueuedEvent_t event; // 156
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<CEventQueue::QueuedEvent_t, false>::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<CEventQueue::QueuedEvent_t, false>::PopItem(
			QueuedEvent_t* pResult);  // 157
		CFunctorCallback0::operator(
				CFunctorData* pFunctorDataBase);  // 159
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 357
		CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> >::Release(); // 160
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 357
		CRefCounted1<CFunctorCallback, CRefCountServiceBase<true, CRefMT> >::Release(); // 161
	}
	{
		CUtlVector<CFunctorCallback*, CUtlMemory<CFunctorCallback*, int> > callbacks; // 167
		CFunctorCallback* pCallback; // 169
		int nCount; // 176
		QueuedEvent_t event; // 177
		{
			bool bFound; // 180
			{
				int i; // 181
			}
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 204
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 357
			CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> >::Release(); // 192
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 204
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 357
			CRefCounted1<CFunctorCallback, CRefCountServiceBase<true, CRefMT> >::Release(); // 193
			CFunctorCallback0::operator(
					CFunctorData* pFunctorDataBase);  // 190
		}
		CUtlMemory<CFunctorCallback::Purge(); // 903
		CUtlMemory<CFunctorCallback::Purge(); // 1799
		CUtlVectorBase<CFunctorCallback::Purge(); // 560
		ValidateAlignment<CFunctorCallback*>(void); // 508
		CUtlMemory<CFunctorCallback::Purge(); // 510
		CUtlMemory<CFunctorCallback::~CUtlMemory(); // 562
		CUtlVectorBase<CFunctorCallback::~CUtlVectorBase(); // 410
		CUtlVector<CFunctorCallback::~CUtlVector(); // 195
		CInterlockedIntT<int, 4>::operator int(); // 1109
		CTSQueue<CFunctorCallback::Count(); // 167
		CUtlMemory<CFunctorCallback::ValidateGrowSize(); // 475
		CUtlMemory<CFunctorCallback::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 472
		CUtlMemory<CFunctorCallback::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CFunctorCallback::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 419
		CUtlVector<CFunctorCallback::CUtlVector(
				int growSize,
				int initCapacity);  // 167
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<CFunctorCallback::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<CFunctorCallback::PopItem(
			CFunctorCallback** pResult);  // 170
		CUtlMemory<CFunctorCallback::operator[](
				int i);  // 602
		CUtlVectorBase<CFunctorCallback::Element(
			int i);  // 1201
		CopyConstruct<CFunctorCallback*>(CFunctorCallback** pMemory,
						CFunctorCallback* const& src);  // 1201
		CUtlMemory<CFunctorCallback::Grow(
			int num);  // 806
		CUtlVectorBase<CFunctorCallback::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<CFunctorCallback::AddToTail(
				CFunctorCallback* const& src);  // 172
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<CEventQueue::QueuedEvent_t, false>::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<CEventQueue::QueuedEvent_t, false>::PopItem(
			QueuedEvent_t* pResult);  // 178
	}
	CInterlockedIntT<int, 4>::operator int(); // 1109
	CTSQueue<CFunctorCallback::Count(); // 153
} /* size: 0, variables: 1, inline expansions: 2 (24 bytes) */

// <001278DB> tier0/eventsystem.cpp:206
void CEventId::~CEventId()
{
} /* size: 0 */

// <001278BF> tier0/eventsystem.cpp:206
inline void CEventId::~CEventId()
{
} /* size: 0 */

// <00126938> tier0/eventsystem.cpp:206
void CEventId::CEventId()
{
} /* size: 0 */

// <0012691C> tier0/eventsystem.cpp:206
inline void CEventId::CEventId()
{
} /* size: 0 */

// <00123973> tier0/eventsystem.cpp:206
// member functions: 12
// member variables: 2
// class size: 112
class CEventId {
	/* tier0/eventsystem.cpp:220 */
	struct SubscribedQueue_t {
		CEventQueue * m_pEventQueue; /* 0 8 */
		CFunctorCallback * m_pCallback; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tier0/eventsystem.cpp:210 */
	void RegisterListener(CEventId* , CEventQueue* , CFunctorCallback* );
	/* tier0/eventsystem.cpp:211 */
	void UnregisterListener(CEventId* , CEventQueue* , CFunctorCallback* );
	/* tier0/eventsystem.cpp:214 */
	void UnregisterAllListeners(CEventId* , CEventQueue* );
	/* tier0/eventsystem.cpp:217 */
	void PostEvent(CEventId* , CEventQueue* , const void* , CFunctorData* );
private:
	CUtlFixedLinkedList<CEventId::SubscribedQueue_t> m_SubscribedQueueList; /* 0 80 */
	CThreadSpinRWLock m_ListenerLock __attribute__((__aligned__(16))); /* 80 32 */
	void CEventId(CEventId* );
	void ~CEventId(CEventId* );
	void RegisterListener(class CEventId *, class CEventQueue *, class CFunctorCallback *); /* linkage=_ZN8CEventId16RegisterListenerEP11CEventQueueP16CFunctorCallback */
	void UnregisterListener(class CEventId *, class CEventQueue *, class CFunctorCallback *); /* linkage=_ZN8CEventId18UnregisterListenerEP11CEventQueueP16CFunctorCallback */
	void UnregisterAllListeners(class CEventId *, class CEventQueue *); /* linkage=_ZN8CEventId22UnregisterAllListenersEP11CEventQueue */
	void PostEvent(class CEventId *, class CEventQueue *, const void  *, class CFunctorData *); /* linkage=_ZN8CEventId9PostEventEP11CEventQueuePKvP12CFunctorData */
	void CEventId(class CEventId *); /* linkage=_ZN8CEventIdC4Ev */
	void ~CEventId(class CEventId *); /* linkage=_ZN8CEventIdD4Ev */
} __attribute__((__aligned__(16)));

// <0012E071> tier0/eventsystem.cpp:233
// variables: 3
// function calls: 35
void CEventId::RegisterListener(CEventQueue* pEventQueue, CFunctorCallback* pCallback)
{
	intp i; // 239
	{
		SubscribedQueue_t queue; // 251
		ThreadInterlockedIncrement(volatile int32* p); // 158
		Increment(int* p); // 199
		CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 356
		CRefCounted1<CFunctorCallback, CRefCountServiceBase<true, CRefMT> >::AddRef(); // 254
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 50
		CEventQueue::AddRef(); // 255
		CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >::IsValidIterator(
				const Iterator_t& it);  // 81
		CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >::IsValidIterator(
				const Iterator_t& it);  // 82
		CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >::HeaderToBlock(
				const BlockHeader_t* pHeader);  // 131
		CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >::IsInBlock(
				intp i,
				BlockHeader_t* pBlockHeader);  // 85
		CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >::GetIndex(
			const Iterator_t& it);  // 86
		{
			BlockHeader_t* pbh; // 88
			CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >::HeaderToBlock(
					const BlockHeader_t* pHeader);  // 131
			CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >::IsInBlock(
					intp i,
					BlockHeader_t* pBlockHeader);  // 90
		}
		{
		}
		CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >::IsIdxAfter(
				intp i,
				const Iterator_t& it);  // 591
		IsValidIndex(const CUtlLinkedList<CEventId::SubscribedQueue_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedList this,
				long long int i);  // 977
		CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >::operator[](
				intp i);  // 367
		InternalElement(const CUtlLinkedList<CEventId::SubscribedQueue_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t this,
				long long int i);  // 1011
		{
		}
		LinkBefore(const CUtlLinkedList<CEventId::SubscribedQueue_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t this,
				long long int before,
				long long int elem);  // 822
		CopyConstruct<CEventId::SubscribedQueue_t>(SubscribedQueue_t* pMemory,
								const SubscribedQueue_t& src);  // 825
		InsertBefore(const CUtlLinkedList<CEventId::SubscribedQueue_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t this,
				long long int before,
				const SubscribedQueue_t& src);  // 856
		AddToTail(const CUtlLinkedList<CEventId::SubscribedQueue_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t this,
				const SubscribedQueue_t& src);  // 257
	}
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
			int nLineNumber);  // 237
	Head(const CUtlLinkedList<CEventId::SubscribedQueue_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedList this); // 240
	Next(const CUtlLinkedList<CEventId::SubscribedQueue_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedList this,
		long long int i);  // 240
	CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >::operator[](
			intp i);  // 494
	operator[](const CUtlLinkedList<CEventId::SubscribedQueue_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t this,
			long long int i);  // 242
	CFunctorCallback0::IsEqual(
		CFunctorCallback* pSrc);  // 242
} /* size: 0, variables: 1, inline expansions: 13 (404 bytes) */

// <0012D98E> tier0/eventsystem.cpp:267
// variables: 2
// function calls: 24
void CEventId::UnregisterListener(CEventQueue* pEventQueue, CFunctorCallback* pCallback)
{
	intp i; // 273
	{
		CFunctorCallback* pCachedCallback; // 282
		CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >::operator[](
				intp i);  // 494
		operator[](const CUtlLinkedList<CEventId::SubscribedQueue_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t this,
				long long int i);  // 282
		Remove(const CUtlLinkedList<CEventId::SubscribedQueue_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t this,
			long long int elem);  // 284
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 357
		CRefCounted1<CFunctorCallback, CRefCountServiceBase<true, CRefMT> >::Release(); // 288
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 51
		CEventQueue::Release(); // 292
	}
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
			int nLineNumber);  // 271
	Head(const CUtlLinkedList<CEventId::SubscribedQueue_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedList this); // 274
	Next(const CUtlLinkedList<CEventId::SubscribedQueue_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedList this,
		long long int i);  // 274
	CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >::operator[](
			intp i);  // 494
	operator[](const CUtlLinkedList<CEventId::SubscribedQueue_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t this,
			long long int i);  // 276
	CFunctorCallback0::IsEqual(
		CFunctorCallback* pSrc);  // 276
} /* size: 577, variables: 1, inline expansions: 13 (373 bytes) */

// <0012D405> tier0/eventsystem.cpp:302
// variables: 2
// function calls: 21
void CEventId::UnregisterAllListeners(CEventQueue* pEventQueue)
{
	intp j; // 308
	intp next; // 308
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
			int nLineNumber);  // 306
	Head(const CUtlLinkedList<CEventId::SubscribedQueue_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedList this); // 309
	CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >::operator[](
			intp i);  // 368
	InternalElement(const CUtlLinkedList<CEventId::SubscribedQueue_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedList this,
			long long int i);  // 550
	Next(const CUtlLinkedList<CEventId::SubscribedQueue_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedList this,
		long long int i);  // 311
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 357
	CRefCounted1<CFunctorCallback, CRefCountServiceBase<true, CRefMT> >::Release(); // 315
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 51
	CEventQueue::Release(); // 316
	Remove(const CUtlLinkedList<CEventId::SubscribedQueue_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t this,
		long long int elem);  // 318
} /* size: 380, variables: 2, inline expansions: 21 (514 bytes) */

// <0012D1E0> tier0/eventsystem.cpp:328
// variables: 2
// function calls: 5
void CEventId::PostEvent(CEventQueue* pEventQueue, const void* pListener, CFunctorData* pData)
{
	{
		intp i; // 332
		{
			SubscribedQueue_t& queue; // 334
			CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >::operator[](
					intp i);  // 494
			operator[](const CUtlLinkedList<CEventId::SubscribedQueue_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t this,
					long long int i);  // 334
			CFunctorCallback0::GetTarget(); // 338
		}
		Head(const CUtlLinkedList<CEventId::SubscribedQueue_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedList this); // 332
		Next(const CUtlLinkedList<CEventId::SubscribedQueue_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedList this,
			long long int i);  // 332
	}
} /* size: 247 */

// <00125236> tier0/eventsystem.cpp:352
// member functions: 20
// member variables: 2
// vtable entries: 7
// class size: 12,384
class CEventSystem : public CTier0AppSystem<IEventSystem, 0> {
public:
	/* class CTier0AppSystem<IEventSystem, 0> <ancestor>; */ /* 0 8 */
	void CEventSystem(CEventSystem* , const CEventSystem& );
	/* tier0/eventsystem.cpp:402 */
	virtual EventQueue_t CreateEventQueue(CEventSystem* );
	/* tier0/eventsystem.cpp:408 */
	virtual void DestroyEventQueue(CEventSystem* , EventQueue_t);
	/* tier0/eventsystem.cpp:495 */
	virtual void ProcessEvents(CEventSystem* , EventQueue_t);
	/* tier0/eventsystem.cpp:436 */
	virtual EventId_t RegisterEvent(CEventSystem* , const char* );
	/* tier0/eventsystem.cpp:480 */
	virtual void PostEventInternal(CEventSystem* , EventId_t, EventQueue_t, const void* , CFunctorData* );
	/* tier0/eventsystem.cpp:448 */
	virtual void RegisterListener(CEventSystem* , EventId_t, EventQueue_t, CFunctorCallback* );
	/* tier0/eventsystem.cpp:462 */
	virtual void UnregisterListener(CEventSystem* , EventId_t, EventQueue_t, CFunctorCallback* );
	/* tier0/eventsystem.cpp:390 */
	void CEventSystem(CEventSystem* );
	/* tier0/eventsystem.cpp:394 */
	virtual void ~CEventSystem(CEventSystem* );
private:
	CUtlTSHash<CEventId, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int> > m_EventIds __attribute__((__aligned__(16))); /* 16 12368 */
	void CEventSystem(class CEventSystem *, const class CEventSystem  &); /* linkage=_ZN12CEventSystemC4ERKS_ */
	virtual EventQueue_t CreateEventQueue(class CEventSystem *); /* linkage=_ZN12CEventSystem16CreateEventQueueEv */
	virtual void DestroyEventQueue(class CEventSystem *, EventQueue_t); /* linkage=_ZN12CEventSystem17DestroyEventQueueEP14EventQueue_t__ */
	virtual void ProcessEvents(class CEventSystem *, EventQueue_t); /* linkage=_ZN12CEventSystem13ProcessEventsEP14EventQueue_t__ */
	virtual EventId_t RegisterEvent(class CEventSystem *, const char  *); /* linkage=_ZN12CEventSystem13RegisterEventEPKc */
	virtual void PostEventInternal(class CEventSystem *, EventId_t, EventQueue_t, const void  *, class CFunctorData *); /* linkage=_ZN12CEventSystem17PostEventInternalEP11EventId_t__P14EventQueue_t__PKvP12CFunctorData */
	virtual void RegisterListener(class CEventSystem *, EventId_t, EventQueue_t, class CFunctorCallback *); /* linkage=_ZN12CEventSystem16RegisterListenerEP11EventId_t__P14EventQueue_t__P16CFunctorCallback */
	virtual void UnregisterListener(class CEventSystem *, EventId_t, EventQueue_t, class CFunctorCallback *); /* linkage=_ZN12CEventSystem18UnregisterListenerEP11EventId_t__P14EventQueue_t__P16CFunctorCallback */
	void CEventSystem(class CEventSystem *); /* linkage=_ZN12CEventSystemC4Ev */
	virtual void ~CEventSystem(class CEventSystem *); /* linkage=_ZN12CEventSystemD4Ev */
} __attribute__((__aligned__(16)));

// <0012D1BE> tier0/eventsystem.cpp:383
void* __CreateCEventSystemIEventSystem_interface(void)
{
} /* size: 12 */

// <0012CF81> tier0/eventsystem.cpp:390
// function calls: 5
void CEventSystem::CEventSystem()
{
	IAppSystem::IAppSystem(); // 72
	IEventSystem::IEventSystem(); // 120
	CBaseAppSystem<IEventSystem>::CBaseAppSystem(); // 171
	CTier0AppSystem<IEventSystem, 0>::CTier0AppSystem(); // 390
	CUtlTSHash<CEventId, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int> >::CUtlTSHash(
			int nAllocationCount);  // 390
} /* size: 0, inline expansions: 5 (0 bytes) */

// <0012CF68> tier0/eventsystem.cpp:390
void CEventSystem::CEventSystem()
{
} /* size: 0 */

// <0012CEFF> tier0/eventsystem.cpp:394
// function call: 1
void CEventSystem::~CEventSystem()
{
	CUtlTSHash<CEventId, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int> >::~CUtlTSHash(); // 396
} /* size: 24, inline expansions: 1 (9 bytes) */

// <0012CE53> tier0/eventsystem.cpp:394
// function calls: 2
void CEventSystem::~CEventSystem()
{
	CUtlTSHash<CEventId, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int> >::~CUtlTSHash(); // 396
	CEventSystem::~CEventSystem(); // 396
} /* size: 54, inline expansions: 2 (29 bytes) */

// <0012CE3A> tier0/eventsystem.cpp:394
void CEventSystem::~CEventSystem()
{
} /* size: 0 */

// <0012CDC7> tier0/eventsystem.cpp:402
// variable: 1
void CEventSystem::CreateEventQueue()
{
	CEventQueue* pEventQueue; // 404
} /* size: 40, variables: 1 */

// <0012C997> tier0/eventsystem.cpp:408
// variables: 7
// function calls: 10
void CEventSystem::DestroyEventQueue(EventQueue_t hQueue)
{
	CEventQueue* pEventQueue; // 410
	{
		int nCount; // 419
		UtlTSHashHandle_t* pHandles; // 420
		{
			int i; // 423
			CUtlTSHashBase<CEventId, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLock>::operator[](
					UtlTSHashHandle_t hHash);  // 425
		}
		CInterlockedIntT<int, 4>::operator int(); // 68
		CUtlMemoryPoolBase::Count(); // 365
		CUtlTSHashBase<CEventId, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLock>::Count(); // 419
		{
			int i; // 379
			{
				const HashBucket_t& bucket; // 381
				CThreadSpinRWLock::LockForRead(
						const char* pFileName,
						int nLineNumber);  // 382
				{
					HashFixedData_t* pElement; // 383
					CThreadSpinRWLock::UnlockRead(
							const char* pFileName,
							int nLineNumber);  // 391
				}
				CThreadSpinRWLock::UnlockRead(
						const char* pFileName,
						int nLineNumber);  // 395
			}
		}
		CUtlTSHashBase<CEventId, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLock>::GetElements(
				int nFirstElement,
				int nCount,
				UtlTSHashHandle_t* pHandles);  // 421
	}
	CInterlockedIntT<int, 4>::operator int(); // 52
	CEventQueue::RefCount(); // 414
} /* size: 480, variables: 1, inline expansions: 2 (18 bytes) */

// <0012BD33> tier0/eventsystem.cpp:436
// variables: 6
// function calls: 40
void CEventSystem::RegisterEvent(const char* pEventName)
{
	EventNameHash_t hId; // 438
	CDefaultTSHashConstructor<CEventId> constructor; // 439
	UtlTSHashHandle_t hList; // 440
	V_strlen(const char* str); // 438
	HashIntConventional(const int n); // 63
	Hash(const unsigned int& key,
		int nBucketMask);  // 734
	{
		HashFixedData_t* pElement; // 719
		Compare(const unsigned int& lhs,
			const unsigned int& rhs);  // 721
	}
	CUtlTSHashBase<CEventId, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLock>::Find(
		unsigned int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 736
	CThreadSpinRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 743
	{
		HashFixedData_t* pElement; // 719
		Compare(const unsigned int& lhs,
			const unsigned int& rhs);  // 721
	}
	CUtlTSHashBase<CEventId, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLock>::Find(
		unsigned int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 744
	CThreadSpinRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 745
	CUtlTSHashBase<CEventId, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLock>::Find(
		unsigned int uiKey);  // 507
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
			int nLineNumber);  // 514
	{
		HashFixedData_t* pElement; // 719
		Compare(const unsigned int& lhs,
			const unsigned int& rhs);  // 721
	}
	CUtlTSHashBase<CEventId, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLock>::Find(
		unsigned int uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 516
	Alloc(const CUtlMemoryPool<CUtlTSHashBase<CEventId, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRW this); // 438
	CUtlTSHashBase<CEventId, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLock>::InsertUncommitted(
				unsigned int uiKey,
				HashBucket_t& bucket);  // 521
	ConstructList(const CUtlLinkedList<CEventId::SubscribedQueue_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t this); // 454
	CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >::Grow(
		int num);  // 193
	CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >::Init(
		int nGrowSize,
		int nInitSize);  // 161
	CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >::CUtlFixedMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 448
	Iterator_t::Iterator_t(
			BlockHeader_t* p,
			intp i);  // 96
	CUtlFixedMemory<UtlLinkedListElem_t<CEventId::SubscribedQueue_t, long long int> >::InvalidIterator(); // 448
	ResetDbgInfo(const CUtlLinkedList<CEventId::SubscribedQueue_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t this); // 455
	CUtlLinkedList(const CUtlLinkedList<CEventId::SubscribedQueue_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t this,
			int growSize,
			int initSize);  // 404
	CUtlFixedLinkedList<CEventId::SubscribedQueue_t>::CUtlFixedLinkedList(
				int growSize,
				int initSize);  // 206
	{
		{
		}
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 2282
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 2291
	}
	CThreadSpinRWLock::CThreadSpinRWLock(
				const char* pLockName);  // 206
	CEventId::CEventId(); // 1479
	Construct<CEventId>(CEventId* pMemory); // 53
	CDefaultTSHashConstructor<CEventId>::Construct(
			CEventId* pElement);  // 522
	CUtlTSHashBase<CEventId, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLock>::Insert(
		unsigned int uiKey,
		ITSHashConstructor<CEventId>* pConstructor,
		bool* pDidInsert);  // 440
	CUtlTSHashBase<CEventId, 256, unsigned int, CUtlTSHashGenericHashMethod<unsigned int>, CThreadSpinRWLock>::operator[](
			UtlTSHashHandle_t hHash);  // 441
} /* size: 0, variables: 3, inline expansions: 34 (2217 bytes) */

// <0012BB7F> tier0/eventsystem.cpp:448
// variables: 2
// function calls: 5
void CEventSystem::RegisterListener(EventId_t nEventId, EventQueue_t hQueue, CFunctorCallback* pCallback)
{
	CEventQueue* pEventQueue; // 450
	{
		CEventId* pEventId; // 453
	}
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 357
	CRefCounted1<CFunctorCallback, CRefCountServiceBase<true, CRefMT> >::Release(); // 459
} /* size: 150, variables: 1, inline expansions: 5 (161 bytes) */

// <0012B9CB> tier0/eventsystem.cpp:462
// variables: 2
// function calls: 5
void CEventSystem::UnregisterListener(EventId_t nEventId, EventQueue_t hQueue, CFunctorCallback* pCallback)
{
	CEventQueue* pEventQueue; // 464
	{
		CEventId* pEventId; // 467
	}
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 357
	CRefCounted1<CFunctorCallback, CRefCountServiceBase<true, CRefMT> >::Release(); // 473
} /* size: 150, variables: 1, inline expansions: 5 (161 bytes) */

// <0012B7E3> tier0/eventsystem.cpp:480
// variables: 2
// function calls: 5
void CEventSystem::PostEventInternal(EventId_t nEventId, EventQueue_t hQueue, const void* pListener, CFunctorData* pData)
{
	CEventQueue* pEventQueue; // 482
	CEventId* pEventId; // 483
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 357
	CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> >::Release(); // 488
} /* size: 150, variables: 2, inline expansions: 5 (147 bytes) */

// <0012B76F> tier0/eventsystem.cpp:495
// variable: 1
void CEventSystem::ProcessEvents(EventQueue_t hQueue)
{
	CEventQueue* pEventQueue; // 497
} /* size: 25, variables: 1 */

