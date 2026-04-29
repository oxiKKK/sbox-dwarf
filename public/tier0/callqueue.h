
//
// public/tier0/callqueue.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libtier0.so
//
//	functions: 12
//	class: 1
//

// <0447C442> ../public/tier0/callqueue.h:10
// member functions: 32
// member variables: 5
// class size: 80
class CCallQueue {
	/* ../public/tier0/callqueue.h:13 */
	void CCallQueue(CCallQueue* );
	/* ../public/tier0/callqueue.h:15 */
	void ~CCallQueue(CCallQueue* );
	/* ../public/tier0/callqueue.h:20 */
	void DisableQueue(CCallQueue* , bool);
	/* ../public/tier0/callqueue.h:33 */
	bool IsDisabled(const CCallQueue* );
	/* ../public/tier0/callqueue.h:38 */
	int Count(CCallQueue* );
	/* ../public/tier0/callqueue.h:43 */
	void AbortProcessing(CCallQueue* );
	/* ../public/tier0/callqueue.h:50 */
	void ResumeProcessing(CCallQueue* );
	/* ../public/tier0/callqueue.h:55 */
	bool IsProcessing(const CCallQueue* );
	/* ../public/tier0/callqueue.h:60 */
	void CallQueued(CCallQueue* );
	/* ../public/tier0/callqueue.h:68 */
	void ParallelCallQueued(CCallQueue* , const char* , IThreadPool* );
	/* ../public/tier0/callqueue.h:70 */
	void Flush(CCallQueue* );
	/* ../public/tier0/callqueue.h:83 */
	void AddRef(CCallQueue* );
	/* ../public/tier0/callqueue.h:88 */
	void Release(CCallQueue* );
	/* ../public/tier0/callqueue.h:96 */
	void QueueCall(CCallQueue* , function<void()>& );
private:
	/* ../public/tier0/callqueue.h:120 */
	void ExecuteWrapper(CCallQueue* , int& );
	/* ../public/tier0/callqueue.h:125 */
	void CallQueuedInternal(CCallQueue* );
	CTSQueue<std::function<void()>*, false> m_queue __attribute__((__aligned__(16))); /* 0 64 */
	int16 m_nRefCount; /* 64 2 */
	bool m_bNoQueue; /* 66 1 */
	bool m_bAbortProcessing; /* 67 1 */
	bool m_bProcessing; /* 68 1 */
	void CCallQueue(class CCallQueue *); /* linkage=_ZN10CCallQueueC4Ev */
	void ~CCallQueue(class CCallQueue *); /* linkage=_ZN10CCallQueueD4Ev */
	void DisableQueue(class CCallQueue *, bool); /* linkage=_ZN10CCallQueue12DisableQueueEb */
	bool IsDisabled(const class CCallQueue  *); /* linkage=_ZNK10CCallQueue10IsDisabledEv */
	int Count(class CCallQueue *); /* linkage=_ZN10CCallQueue5CountEv */
	void AbortProcessing(class CCallQueue *); /* linkage=_ZN10CCallQueue15AbortProcessingEv */
	void ResumeProcessing(class CCallQueue *); /* linkage=_ZN10CCallQueue16ResumeProcessingEv */
	bool IsProcessing(const class CCallQueue  *); /* linkage=_ZNK10CCallQueue12IsProcessingEv */
	void CallQueued(class CCallQueue *); /* linkage=_ZN10CCallQueue10CallQueuedEv */
	void ParallelCallQueued(class CCallQueue *, const char  *, class IThreadPool *); /* linkage=_ZN10CCallQueue18ParallelCallQueuedEPKcP11IThreadPool */
	void Flush(class CCallQueue *); /* linkage=_ZN10CCallQueue5FlushEv */
	void AddRef(class CCallQueue *); /* linkage=_ZN10CCallQueue6AddRefEv */
	void Release(class CCallQueue *); /* linkage=_ZN10CCallQueue7ReleaseEv */
	void QueueCall(class CCallQueue *, class function<void()> &); /* linkage=_ZN10CCallQueue9QueueCallEOSt8functionIFvvEE */
	void ExecuteWrapper(class CCallQueue *, int &); /* linkage=_ZN10CCallQueue14ExecuteWrapperERi */
	void CallQueuedInternal(class CCallQueue *); /* linkage=_ZN10CCallQueue18CallQueuedInternalEv */
} __attribute__((__aligned__(16)));

// <063403AE> ../public/tier0/callqueue.h:13
void CCallQueue::CCallQueue()
{
} /* size: 0 */

// <06340395> ../public/tier0/callqueue.h:13
inline void CCallQueue::CCallQueue()
{
} /* size: 0 */

// <06350480> ../public/tier0/callqueue.h:15
void CCallQueue::~CCallQueue()
{
} /* size: 0 */

// <06350467> ../public/tier0/callqueue.h:15
inline void CCallQueue::~CCallQueue()
{
} /* size: 0 */

// <0005B5B0> ../public/tier0/callqueue.h:38
inline void CCallQueue::Count()
{
} /* size: 0 */

// <0635044E> ../public/tier0/callqueue.h:50
inline void CCallQueue::ResumeProcessing()
{
} /* size: 0 */

// <044FF12B> ../public/tier0/callqueue.h:60
inline void CCallQueue::CallQueued()
{
} /* size: 0 */

// <063503F5> ../public/tier0/callqueue.h:70
// function call: 1
inline void CCallQueue::Flush()
{
	function<void()>* pFunction; // 74
} /* size: 0, variables: 1 */

// <063503D0> ../public/tier0/callqueue.h:96
inline void CCallQueue::QueueCall(function<void()>& fnCall)
{
} /* size: 0 */

// <0005B47E> ../public/tier0/callqueue.h:120
// function calls: 3
void CCallQueue::ExecuteWrapper(int& nDummy)
{
	CInterlockedIntT<int, 4>::operator int(); // 1109
	CTSQueue<std::function<void()>::Count()>*, false>* this); // 127
	CCallQueue::CallQueuedInternal(); // 122
} /* size: 21, inline expansions: 3 (18 bytes) */

// <044FF0BC> ../public/tier0/callqueue.h:125
// function call: 1
inline void CCallQueue::CallQueuedInternal()
{
	function<void()>* pFunction; // 132
} /* size: 0, variables: 1 */

// <0005B972> ../public/tier0/callqueue.h:125
// variables: 8
// function calls: 36
void CCallQueue::CallQueuedInternal()
{
	function<void()>* pFunction; // 132
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 1085
	CopyConstruct<std::function<void()>*>(function<void()>** pMemory,
						function<void()>* const& src); // 1090
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
		CTSQueue<std::function<void()>::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand); // 1135
		CTSQueue<std::function<void()>::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail); // 985
		{
		}
		ThreadInterlockedCompareExchange64(volatile int64* p,
							int64 value,
							int64 comparand);  // 416
		ThreadInterlockedCompareExchangePointer(volatile void** p,
							void* value,
							void* comparand);  // 1142
		CTSQueue<std::function<void()>::InterlockedCompareExchangeNode(
						volatile Node_t** ppNode,
						Node_t* value,
						Node_t* comperand); // 977
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 1147
	CTSQueue<std::function<void()>::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand); // 1135
	CTSQueue<std::function<void()>::FinishPush(
			Node_t* pNode,
			const union NodeLink_t& oldTail); // 991
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 993
	CTSQueue<std::function<void()>::Push(
		Node_t* pNode); // 1091
	Node_t::Node_t(); // 1088
	CTSQueue<std::function<void()>::PushItem(
		function<void()>* const& init); // 130
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 1080
	CTSQueue<std::function<void()>::FreeNode(
		Node_t* pNode); // 1103
	CTSQueue<std::function<void()>::PopItem(
		function<void()>** pResult); // 133
	_Function_base::~_Function_base(); // 336
	function<void()>::~function()>* this); // 139
	_Function_base::_M_empty(); // 591
	function<void()>::operator()(const function<void()>* this); // 137
} /* size: 0, variables: 1, inline expansions: 25 (1274 bytes) */

