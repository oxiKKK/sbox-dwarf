
//
// rendersystem/renderthreadbase.cpp
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 19
//

// <0022CAAB> rendersystem/renderthreadbase.cpp:109
void RT_ExecuteCommandList(CRenderDeviceBase *, CCommandStream *)
{
} /* size: 0 */

// <00231634> rendersystem/renderthreadbase.cpp:115
// variables: 2
void CFrameSyncBase::CFrameSyncBase()
{
	{
		int i; // 117
	}
	{
		int i; // 117
	}
} /* size: 0 */

// <0023160E> rendersystem/renderthreadbase.cpp:115
// variable: 1
void CFrameSyncBase::CFrameSyncBase()
{
	{
		int i; // 117
	}
} /* size: 0 */

// <00231595> rendersystem/renderthreadbase.cpp:126
// variable: 1
void CFrameSyncBase::Init(CRenderDeviceBase* pDevice)
{
	{
		int i; // 128
	}
} /* size: 0 */

// <00231501> rendersystem/renderthreadbase.cpp:136
// variable: 1
void CFrameSyncBase::Shutdown(CRenderThreadBase* pRenderThread)
{
	{
		int i; // 138
	}
} /* size: 0 */

// <00231407> rendersystem/renderthreadbase.cpp:153
// variables: 2
void CFrameSyncBase::UpdateFrameSyncQuery(CRenderThreadBase* pRenderThread, int nQueryIndex, bool bIssue, float flTimeout)
{
	const char   __FUNCTION__; // 49605
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 155
	}
} /* size: 0, variables: 1 */

// <002312E9> rendersystem/renderthreadbase.cpp:170
// variable: 1
// function calls: 2
void CFrameSyncBase::ForceHardwareSync(CRenderThreadBase* pRenderThread)
{
	{
		int waitIndex; // 191
		ConVar::GetInt(); // 351
		ConVar::GetBool(); // 193
	}
} /* size: 0 */

// <00230D12> rendersystem/renderthreadbase.cpp:204
// function calls: 24
void CRenderThreadBase::CRenderThreadBase(CRenderDeviceBase* pDevice, RenderThreadMode_t mode)
{
	CTSListBase::CTSListBase(); // 846
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 862
	Node_t::Node_t(); // 864
	CTSQueue<CCommandStream::End(); // 865
	CTSQueue<CCommandStream::CTSQueue(); // 207
	{
	}
	AlignedByteArrayExplicit_t<100, CDependencyDescriptor::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<100, CDependencyDescriptor::AlignedByteArray_t(); // 228
	CUtlMemory<CDependencyDescriptor::CUtlMemory(
			CDependencyDescriptor** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CDependencyDescriptor::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CDependencyDescriptor::CUtlMemoryFixedGrowable_Base(
					CDependencyDescriptor** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<100, CDependencyDescriptor::Base(); // 231
	CUtlMemoryFixedGrowable<CDependencyDescriptor::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CDependencyDescriptor::ResetDbgInfo(); // 530
	CUtlVectorBase<CDependencyDescriptor::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CDependencyDescriptor::CUtlVectorFixedGrowable(
				int growSize);  // 207
	CUtlIntrusiveList<CCommandStream>::CUtlIntrusiveList(); // 1180
	CUtlIntrusiveDList<CCommandStream>::CUtlIntrusiveDList(); // 1241
	CThreadNullMutex::CThreadNullMutex(
			const char* pName);  // 1241
	CUtlIntrusiveDListWithTailPtr<CCommandStream, CThreadNullMutex>::CUtlIntrusiveDListWithTailPtr(); // 207
	__atomic_base<int>::__atomic_base(
			__int_type __i);  // 843
	atomic<int>::atomic(
		__integral_type __i);  // 1484
	CThreadFastSemaphore::CThreadFastSemaphore(); // 205
} /* size: 283, inline expansions: 24 (482 bytes) */

// <00230CE1> rendersystem/renderthreadbase.cpp:204
void CRenderThreadBase::CRenderThreadBase(CRenderDeviceBase* pDevice, RenderThreadMode_t mode)
{
} /* size: 0 */

// <00232763> rendersystem/renderthreadbase.cpp:214
void CRenderThreadBase::GetThreadMode()
{
} /* size: 8 */

// <0023278C> rendersystem/renderthreadbase.cpp:219
// variables: 2
// function calls: 4
void CRenderThreadBase::Wakeup()
{
	CRenderThreadBase::GetThreadMode(); // 221
	__atomic_base<int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1488
	{
		int32 nWaiters; // 1491
		int32 nWake; // 1492
	}
	CThreadFastSemaphore::Release(
		int32 releaseCount);  // 226
	CRenderThreadBase::Wakeup(); // 219
} /* size: 0, inline expansions: 4 (0 bytes) */

// <00230CAF> rendersystem/renderthreadbase.cpp:219
void CRenderThreadBase::Wakeup()
{
} /* size: 0 */

// <00230A54> rendersystem/renderthreadbase.cpp:229
// variables: 3
// function calls: 7
void CRenderThreadBase::StopThread()
{
	{
		int i; // 237
		CRenderDeviceBase::GetRenderThreadHandle(); // 240
		CRenderThreadBase::GetThreadMode(); // 221
		__atomic_base<int>::fetch_add(
				__int_type __i,
				memory_order __m);  // 1488
		{
			int32 nWaiters; // 1491
			int32 nWake; // 1492
		}
		CThreadFastSemaphore::Release(
			int32 releaseCount);  // 226
		CRenderThreadBase::Wakeup(); // 219
		CRenderThreadBase::Wakeup(); // 239
	}
	CRenderThreadBase::GetThreadMode(); // 232
} /* size: 214, inline expansions: 1 (3 bytes) */

// <0023019C> rendersystem/renderthreadbase.cpp:246
// variables: 3
// function calls: 27
void CRenderThreadBase::Enqueue(CCommandStream* pCmdList)
{
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 1085
	Node_t::Node_t(); // 1088
	CopyConstruct<CCommandStream*>(CCommandStream** pMemory,
					CCommandStream* const& src);  // 1090
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
		CTSQueue<CCommandStream::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<CCommandStream::FinishPush(
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
		CTSQueue<CCommandStream::InterlockedCompareExchangeNode(
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
	CTSQueue<CCommandStream::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1135
	CTSQueue<CCommandStream::FinishPush(
			Node_t* pNode,
			const union NodeLink_t& oldTail);  // 991
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 993
	CTSQueue<CCommandStream::Push(
		Node_t* pNode);  // 1091
	CTSQueue<CCommandStream::PushItem(
		CCommandStream* const& init);  // 254
	CRenderThreadBase::GetThreadMode(); // 221
	__atomic_base<int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1488
	{
		int32 nWaiters; // 1491
		int32 nWake; // 1492
	}
	CThreadFastSemaphore::Release(
		int32 releaseCount);  // 226
	CRenderThreadBase::Wakeup(); // 219
	CRenderThreadBase::Wakeup(); // 255
} /* size: 0, inline expansions: 20 (1056 bytes) */

// <0022FDC2> rendersystem/renderthreadbase.cpp:263
// variables: 5
// function calls: 12
void CRenderThreadBase::CleanupOnPresent()
{
	const char   __FUNCTION__; // 49584
	{
		int i; // 266
		{
			CDependencyDescriptor* pDep; // 268
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 269
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 273
			}
			CUtlMemory<CDependencyDescriptor::operator[](
					int i);  // 588
			CUtlVectorBase<CDependencyDescriptor::operator[](
					int i);  // 268
		}
		CUtlVectorBase<CDependencyDescriptor::Count(); // 266
	}
	CUtlVectorBase<CDependencyDescriptor::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<100, CDependencyDescriptor::Base(); // 237
	CUtlMemoryFixedGrowable_Base<CDependencyDescriptor::Purge_FixedGrowable(
				CDependencyDescriptor** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CDependencyDescriptor::Purge_FixedGrowable(
				CDependencyDescriptor** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CDependencyDescriptor::Purge(
		int numElements);  // 1799
	CUtlMemory<CDependencyDescriptor::Base(); // 112
	CUtlVectorBase<CDependencyDescriptor::Base(); // 368
	CUtlVectorBase<CDependencyDescriptor::ResetDbgInfo(); // 1800
	CUtlVectorBase<CDependencyDescriptor::Purge(); // 277
} /* size: 0, variables: 1, inline expansions: 9 (202 bytes) */

// <0022F120> rendersystem/renderthreadbase.cpp:280
// variables: 12
// function calls: 48
void CRenderThreadBase::Dispatch(CCommandStream* pCmd)
{
	CUtlIntrusiveListWithTailPtr<CCommandStream> executableCommands; // 300
	{
		int i; // 283
		{
			CDependencyDescriptor* pDep; // 285
			CUtlMemory<CDependencyDescriptor::operator[](
					int i);  // 588
			CUtlVectorBase<CDependencyDescriptor::operator[](
					int i);  // 285
			CDependencyDescriptor::IsSatisfied(); // 286
			AddToHead<CCommandStream, CCommandStream>(CCommandStream *& head,
									CCommandStream* node);  // 960
			CUtlIntrusiveList<CCommandStream>::AddToHead(
					CCommandStream* node);  // 289
			CUtlVectorBase<CDependencyDescriptor::Count(); // 292
			CUtlMemory<CDependencyDescriptor::NumAllocated(); // 1196
			CUtlMemory<CDependencyDescriptor::operator[](
					int i);  // 602
			CUtlVectorBase<CDependencyDescriptor::Element(
				int i);  // 1201
			CopyConstruct<CDependencyDescriptor*>(CDependencyDescriptor** pMemory,
								CDependencyDescriptor* const& src);  // 1201
			CUtlMemory<CDependencyDescriptor::Base(); // 112
			CUtlVectorBase<CDependencyDescriptor::Base(); // 368
			CUtlVectorBase<CDependencyDescriptor::ResetDbgInfo(); // 824
			CUtlVectorBase<CDependencyDescriptor::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<CDependencyDescriptor::AddToTail(
					CDependencyDescriptor* const& src);  // 293
		}
		CUtlVectorBase<CDependencyDescriptor::Count(); // 283
	}
	{
		int i; // 308
		{
			CDependencyDescriptor* pSat; // 310
			{
				CCommandStream* pDep; // 325
				{
					CCommandStream* pNext; // 327
					bool bCanSubmit; // 328
					{
						int j; // 329
						{
							CDependencyDescriptor* pDesc; // 331
							CUtlMemory<CDependencyDescriptor::operator[](
									int i);  // 588
							CUtlVectorBase<CDependencyDescriptor::operator[](
									int i);  // 331
							CDependencyDescriptor::IsSatisfied(); // 332
							AddToHead<CCommandStream, CCommandStream>(CCommandStream *& head,
													CCommandStream* node);  // 960
							CUtlIntrusiveList<CCommandStream>::AddToHead(
									CCommandStream* node);  // 335
						}
						CUtlVectorBase<CDependencyDescriptor::Count(); // 329
					}
					{
					}
					AddToEndWithTail<CCommandStream, CCommandStream>(CCommandStream *& head,
											CCommandStream* node,
											CCommandStream *& tail);  // 1379
					CUtlIntrusiveListWithTailPtr<CCommandStream>::AddToTail(
							CCommandStream* node);  // 342
				}
			}
			CUtlMemory<CDependencyDescriptor::operator[](
					int i);  // 588
			CUtlVectorBase<CDependencyDescriptor::operator[](
					int i);  // 310
			{
			}
			CDependencyDescriptor::Satisfy(); // 311
			CUtlMemory<CDependencyDescriptor::operator[](
					int i);  // 588
			CUtlVectorBase<CDependencyDescriptor::operator[](
					int i);  // 346
			CUtlVectorBase<CDependencyDescriptor::Count(); // 318
			CUtlMemory<CDependencyDescriptor::NumAllocated(); // 1196
			CUtlMemory<CDependencyDescriptor::operator[](
					int i);  // 602
			CUtlVectorBase<CDependencyDescriptor::Element(
				int i);  // 1201
			CopyConstruct<CDependencyDescriptor*>(CDependencyDescriptor** pMemory,
								CDependencyDescriptor* const& src);  // 1201
			CUtlMemory<CDependencyDescriptor::Base(); // 112
			CUtlVectorBase<CDependencyDescriptor::Base(); // 368
			CUtlVectorBase<CDependencyDescriptor::ResetDbgInfo(); // 824
			CUtlVectorBase<CDependencyDescriptor::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<CDependencyDescriptor::AddToTail(
					CDependencyDescriptor* const& src);  // 319
		}
		CUtlVectorBase<CDependencyDescriptor::Count(); // 308
	}
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 371
	CTSPool<CCommandStream>::PutObject(
			CCommandStream* pInfo);  // 664
	ReleaseStream(CCommandStream* pCmd); // 352
	{
		CCommandStream* pRet; // 1398
		{
			CCommandStream* pRet; // 1090
		}
		CUtlIntrusiveList<CCommandStream>::RemoveHead(); // 1398
	}
	CUtlIntrusiveListWithTailPtr<CCommandStream>::RemoveHead(); // 354
} /* size: 0, variables: 1, inline expansions: 7 (375 bytes) */

// <0023273A> rendersystem/renderthreadbase.cpp:358
void CRenderThreadBase::SetBestAffinity()
{
} /* size: 5 */

// <0022EE2A> rendersystem/renderthreadbase.cpp:376
// variables: 2
// function calls: 6
void CRenderThreadBase::Run()
{
	const uint  nSpinCount; // 388
	{
		CCommandStream* pItem; // 393
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<CCommandStream::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<CCommandStream::PopItem(
			CCommandStream** pResult);  // 394
	}
} /* size: 402, variables: 1 */

// <0022E9FA> rendersystem/renderthreadbase.cpp:417
// variables: 2
// function calls: 17
void CRenderThreadBase::SemaphoreWait(int nSpinCount, bool bBlock)
{
	{
		int i; // 419
		Max<int>(const int& val1,
			const int& val2);  // 419
		__atomic_base<int>::load(
			memory_order __m);  // 1500
		__atomic_base<int>::compare_exchange_weak(
					__int_type& __i1,
					__int_type __i2,
					memory_order __m1,
					memory_order __m2);  // 555
		__atomic_base<int>::compare_exchange_weak(
					__int_type& __i1,
					__int_type __i2,
					memory_order __m);  // 1503
		ThreadPause(void); // 1509
		CThreadFastSemaphore::TryWait(); // 421
		ThreadPause(void); // 426
	}
	{
		uint i; // 1518
		__atomic_base<int>::load(
			memory_order __m);  // 1500
		__atomic_base<int>::compare_exchange_weak(
					__int_type& __i1,
					__int_type __i2,
					memory_order __m1,
					memory_order __m2);  // 555
		__atomic_base<int>::compare_exchange_weak(
					__int_type& __i1,
					__int_type __i2,
					memory_order __m);  // 1503
		ThreadPause(void); // 1509
		CThreadFastSemaphore::TryWait(); // 1520
		ThreadPause(void); // 1526
		ThreadPause(void); // 1527
	}
	__atomic_base<int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1530
	CThreadFastSemaphore::Wait(); // 1515
	CThreadFastSemaphore::Wait(); // 434
} /* size: 188, inline expansions: 3 (86 bytes) */

