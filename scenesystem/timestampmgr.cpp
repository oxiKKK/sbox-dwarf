
//
// scenesystem/timestampmgr.cpp
//
//	referenced by: libengine2.so
//
//	functions: 16
//

// <038820C3> ../scenesystem/timestampmgr.cpp:36
// function calls: 16
void CTimestampManager::CTimestampManager()
{
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 38
	CUtlMemory<SceneViewTimestampQuery_t::ValidateGrowSize(); // 475
	CUtlMemory<SceneViewTimestampQuery_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<SceneViewTimestampQuery_t::ResetDbgInfo(); // 530
	CUtlVectorBase<SceneViewTimestampQuery_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<SceneViewTimestampQuery_t::CUtlVector(); // 38
	CThreadMutex::CThreadMutex(
			const char* pName);  // 3024
	CThreadRWLock::CThreadRWLock(
			const char* pLockName);  // 130
	CUtlMemory<CTimestampManager::TimestampSceneViewData_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CTimestampManager::TimestampSceneViewData_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CTimestampManager::TimestampSceneViewData_t, CUtlMemory<CTimestampManager::TimestampSceneViewData_t, this); // 530
	CUtlVectorBase(const CUtlVectorBase<CTimestampManager::TimestampSceneViewData_t, CUtlMemory<CTimestampManager::TimestampSceneViewData_t, this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CTimestampManager::TimestampSceneViewData_t, CUtlMemory<CTimestampManager::TimestampSceneViewData_t, int this); // 130
	TimestampFrameData_t::TimestampFrameData_t(); // 38
	CTSListBase::CTSListBase(); // 337
	CTSPool<SceneViewTimestampQuery_t>::CTSPool(); // 38
} /* size: 301, inline expansions: 16 (542 bytes) */

// <038820AA> ../scenesystem/timestampmgr.cpp:36
void CTimestampManager::CTimestampManager()
{
} /* size: 0 */

// <03881348> ../scenesystem/timestampmgr.cpp:43
// variable: 1
// function calls: 64
void CTimestampManager::~CTimestampManager()
{
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	ThreadPause(void); // 208
	CTSListBase::Pop(); // 358
	CUtlString::~CUtlString(); // 57
	SceneViewTimestampQuery_t::~SceneViewTimestampQuery_t(); // 341
	simpleTSPoolStruct_t::~simpleTSPoolStruct_t(); // 361
	CTSPool<SceneViewTimestampQuery_t>::Purge(); // 45
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	ThreadPause(void); // 208
	CTSListBase::Pop(); // 358
	CUtlString::~CUtlString(); // 57
	SceneViewTimestampQuery_t::~SceneViewTimestampQuery_t(); // 341
	simpleTSPoolStruct_t::~simpleTSPoolStruct_t(); // 361
	CTSPool<SceneViewTimestampQuery_t>::Purge(); // 350
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 135
	CTSListBase::~CTSListBase(); // 351
	CTSPool<SceneViewTimestampQuery_t>::~CTSPool(); // 46
	{
		int i; // 1721
		CUtlMemory<CTimestampManager::TimestampSceneViewData_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CTimestampManager::TimestampSceneViewData_t, CUtlMemory<CTimestampManager::TimestampSceneViewData_t, this,
			int i);  // 1723
		CUtlVectorBase<SceneViewTimestampQuery_t::RemoveAll(); // 1798
		CUtlMemory<SceneViewTimestampQuery_t::IsExternallyAllocated(); // 905
		CUtlMemory<SceneViewTimestampQuery_t::Purge(); // 903
		CUtlMemory<SceneViewTimestampQuery_t::Purge(); // 1799
		CUtlVectorBase<SceneViewTimestampQuery_t::Purge(); // 560
		ValidateAlignment<SceneViewTimestampQuery_t*>(void); // 508
		CUtlMemory<SceneViewTimestampQuery_t::Purge(); // 510
		CUtlMemory<SceneViewTimestampQuery_t::~CUtlMemory(); // 562
		CUtlVectorBase<SceneViewTimestampQuery_t::~CUtlVectorBase(); // 410
		CUtlVector<SceneViewTimestampQuery_t::~CUtlVector(); // 122
		CUtlString::~CUtlString(); // 122
		TimestampSceneViewData_t::~TimestampSceneViewData_t(); // 1526
		Destruct<CTimestampManager::TimestampSceneViewData_t>(TimestampSceneViewData_t* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CTimestampManager::TimestampSceneViewData_t, CUtlMemory<CTimestampManager::TimestampSceneViewData_t, this); // 1798
	CUtlMemory<CTimestampManager::TimestampSceneViewData_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CTimestampManager::TimestampSceneViewData_t, int>::Purge(); // 903
	CUtlMemory<CTimestampManager::TimestampSceneViewData_t, int>::Purge(); // 1799
	CUtlMemory<CTimestampManager::TimestampSceneViewData_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CTimestampManager::TimestampSceneViewData_t, CUtlMemory<CTimestampManager::TimestampSceneViewData_t, this); // 368
	ResetDbgInfo(const CUtlVectorBase<CTimestampManager::TimestampSceneViewData_t, CUtlMemory<CTimestampManager::TimestampSceneViewData_t, this); // 1800
	Purge(const CUtlVectorBase<CTimestampManager::TimestampSceneViewData_t, CUtlMemory<CTimestampManager::TimestampSceneViewData_t, this); // 560
	CUtlMemory<CTimestampManager::TimestampSceneViewData_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CTimestampManager::TimestampSceneViewData_t, int>::Purge(); // 903
	CUtlMemory<CTimestampManager::TimestampSceneViewData_t, int>::Purge(); // 510
	ValidateAlignment<CTimestampManager::TimestampSceneViewData_t>(void); // 508
	CUtlMemory<CTimestampManager::TimestampSceneViewData_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CTimestampManager::TimestampSceneViewData_t, CUtlMemory<CTimestampManager::TimestampSceneViewData_t, this); // 410
	~CUtlVector(const CUtlVector<CTimestampManager::TimestampSceneViewData_t, CUtlMemory<CTimestampManager::TimestampSceneViewData_t, int this); // 130
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadMutex::~CThreadMutex(); // 2084
	CThreadRWLock::~CThreadRWLock(); // 130
	TimestampFrameData_t::~TimestampFrameData_t(); // 43
	CUtlVectorBase<SceneViewTimestampQuery_t::RemoveAll(); // 1798
	CUtlMemory<SceneViewTimestampQuery_t::IsExternallyAllocated(); // 905
	CUtlMemory<SceneViewTimestampQuery_t::Purge(); // 903
	CUtlMemory<SceneViewTimestampQuery_t::Purge(); // 1799
	CUtlVectorBase<SceneViewTimestampQuery_t::Purge(); // 560
	CUtlVectorBase<SceneViewTimestampQuery_t::~CUtlVectorBase(); // 410
	CUtlVector<SceneViewTimestampQuery_t::~CUtlVector(); // 46
} /* size: 966, inline expansions: 49 (3300 bytes) */

// <038812DF> ../scenesystem/timestampmgr.cpp:43
void CTimestampManager::~CTimestampManager()
{
} /* size: 36 */

// <03880D77> ../scenesystem/timestampmgr.cpp:49
// variable: 1
// function calls: 19
void CTimestampManager::AllocateTimestampQuery(const char* pPerMarkerName)
{
	SceneViewTimestampQuery_t* pQuery; // 51
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 376
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 44
	CUtlString::CUtlString(); // 42
	CUtlStringToken::CUtlStringToken(); // 42
	SceneViewTimestampQuery_t::SceneViewTimestampQuery_t(); // 341
	simpleTSPoolStruct_t::simpleTSPoolStruct_t(); // 382
	CTSPool<SceneViewTimestampQuery_t>::GetObject(); // 51
	CUtlString::operator=(
			const char* src);  // 57
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 58
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 58
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 63
} /* size: 0, variables: 1, inline expansions: 19 (765 bytes) */

// <038896F2> ../scenesystem/timestampmgr.cpp:76
// function calls: 5
void CTimestampManager::RecycleTimestampQuery(SceneViewTimestampQuery_t* pQuery)
{
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 371
	CTSPool<SceneViewTimestampQuery_t>::PutObject(
			SceneViewTimestampQuery_t* pInfo);  // 83
} /* size: 110, inline expansions: 5 (194 bytes) */

// <03880D52> ../scenesystem/timestampmgr.cpp:76
void CTimestampManager::RecycleTimestampQuery(SceneViewTimestampQuery_t* pQuery)
{
} /* size: 0 */

// <03880872> ../scenesystem/timestampmgr.cpp:87
// variable: 1
// function calls: 19
void CTimestampManager::AddManagedTimestampQuery(SceneViewTimestampQuery_t* pQuery)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_89; // 89
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
			int nLineNumber);  // 89
	CUtlMemory<SceneViewTimestampQuery_t::NumAllocated(); // 1196
	CUtlMemory<SceneViewTimestampQuery_t::Base(); // 112
	CUtlVectorBase<SceneViewTimestampQuery_t::Base(); // 368
	CUtlVectorBase<SceneViewTimestampQuery_t::ResetDbgInfo(); // 824
	CUtlVectorBase<SceneViewTimestampQuery_t::GrowMemory(
			int num);  // 1198
	CUtlMemory<SceneViewTimestampQuery_t::operator[](
			int i);  // 602
	CUtlVectorBase<SceneViewTimestampQuery_t::Element(
		int i);  // 1201
	CopyConstruct<SceneViewTimestampQuery_t*>(SceneViewTimestampQuery_t** pMemory,
							SceneViewTimestampQuery_t* const& src);  // 1201
	CUtlVectorBase<SceneViewTimestampQuery_t::AddToTail(
			SceneViewTimestampQuery_t* const& src);  // 90
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 91
} /* size: 203, variables: 1, inline expansions: 19 (460 bytes) */

// <03880784> ../scenesystem/timestampmgr.cpp:95
// variables: 3
void CTimestampManager::IssueTimestampQuery(IRenderContext* pRenderContext, SceneViewTimestampQuery_t* pQuery)
{
	const char   __FUNCTION__; // 6541
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 97
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 98
	}
} /* size: 0, variables: 1 */

// <03880697> ../scenesystem/timestampmgr.cpp:105
// variables: 3
void CTimestampManager::BeginPipelineStatsQuery(IRenderContext* pRenderContext, SceneViewTimestampQuery_t* pQuery)
{
	const char   __FUNCTION__; // 6639
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 107
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 108
	}
} /* size: 0, variables: 1 */

// <038805A9> ../scenesystem/timestampmgr.cpp:116
// variables: 3
void CTimestampManager::EndPipelineStatsQuery(IRenderContext* pRenderContext, SceneViewTimestampQuery_t* pQuery)
{
	const char   __FUNCTION__; // 6590
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 118
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 119
	}
} /* size: 0, variables: 1 */

// <0387F863> ../scenesystem/timestampmgr.cpp:128
// variables: 6
// function calls: 53
void CTimestampManager::ManageGlobalTimestamps()
{
	TimestampFrameData_t* pTimestampFrameData; // 130
	{
		CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForWriteTrait<CThreadRWLock> > generated_id_133; // 133
		TimestampSceneViewData_t* pTimestampSceneViewData; // 134
		{
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_158; // 158
			{
				int i; // 159
				{
					SceneViewTimestampQuery_t* pQuery; // 161
					ThreadPause(void); // 173
					ThreadInterlockedAssignIf128(volatile int128* pDest,
									const int128& value,
									const int128& comparand);  // 478
					ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
										const InterlockedPointerX2SizedInt_t& value,
										const InterlockedPointerX2SizedInt_t& comperand);  // 168
					CTSListBase::Push(
						TSLNodeBase_t* pNode);  // 371
					CTSPool<SceneViewTimestampQuery_t>::PutObject(
							SceneViewTimestampQuery_t* pInfo);  // 83
					CTimestampManager::RecycleTimestampQuery(
								SceneViewTimestampQuery_t* pQuery);  // 168
					CUtlMemory<SceneViewTimestampQuery_t::NumAllocated(); // 1196
					CUtlMemory<SceneViewTimestampQuery_t::operator[](
							int i);  // 602
					CUtlVectorBase<SceneViewTimestampQuery_t::Element(
						int i);  // 1201
					CopyConstruct<SceneViewTimestampQuery_t*>(SceneViewTimestampQuery_t** pMemory,
											SceneViewTimestampQuery_t* const& src);  // 1201
					CUtlMemory<SceneViewTimestampQuery_t::Base(); // 112
					CUtlVectorBase<SceneViewTimestampQuery_t::Base(); // 368
					CUtlVectorBase<SceneViewTimestampQuery_t::ResetDbgInfo(); // 824
					CUtlVectorBase<SceneViewTimestampQuery_t::GrowMemory(
							int num);  // 1198
					CUtlVectorBase<SceneViewTimestampQuery_t::AddToTail(
							SceneViewTimestampQuery_t* const& src);  // 164
					CUtlMemory<SceneViewTimestampQuery_t::operator[](
							int i);  // 588
					CUtlVectorBase<SceneViewTimestampQuery_t::operator[](
							int i);  // 161
				}
				CUtlVectorBase<SceneViewTimestampQuery_t::Count(); // 159
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
					int nLineNumber);  // 158
			CUtlVectorBase<SceneViewTimestampQuery_t::RemoveAll(); // 171
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 172
		}
		Lock(CThreadRWLock& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForWriteTrait<CThreadRWLock> >::CAutoLockT(
				const CThreadRWLock& lock,
				const char* pFilename,
				int nLineNumber);  // 133
		CUtlMemory<CTimestampManager::TimestampSceneViewData_t, int>::NumAllocated(); // 1143
		CUtlMemory<CTimestampManager::TimestampSceneViewData_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CTimestampManager::TimestampSceneViewData_t, CUtlMemory<CTimestampManager::TimestampSceneViewData_t, this,
			int i);  // 1148
		CUtlString::CUtlString(); // 122
		CUtlMemory<SceneViewTimestampQuery_t::ValidateGrowSize(); // 475
		CUtlMemory<SceneViewTimestampQuery_t::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<SceneViewTimestampQuery_t::ResetDbgInfo(); // 530
		CUtlVectorBase<SceneViewTimestampQuery_t::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<SceneViewTimestampQuery_t::CUtlVector(); // 122
		TimestampSceneViewData_t::TimestampSceneViewData_t(); // 1479
		Construct<CTimestampManager::TimestampSceneViewData_t>(TimestampSceneViewData_t* pMemory); // 1148
		CUtlMemory<CTimestampManager::TimestampSceneViewData_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CTimestampManager::TimestampSceneViewData_t, CUtlMemory<CTimestampManager::TimestampSceneViewData_t, this); // 368
		ResetDbgInfo(const CUtlVectorBase<CTimestampManager::TimestampSceneViewData_t, CUtlMemory<CTimestampManager::TimestampSceneViewData_t, this); // 824
		GrowMemory(const CUtlVectorBase<CTimestampManager::TimestampSceneViewData_t, CUtlMemory<CTimestampManager::TimestampSceneViewData_t, this,
				int num);  // 1145
		AddToTail(const CUtlVectorBase<CTimestampManager::TimestampSceneViewData_t, CUtlMemory<CTimestampManager::TimestampSceneViewData_t, this); // 1156
		CUtlMemory<CTimestampManager::TimestampSceneViewData_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CTimestampManager::TimestampSceneViewData_t, CUtlMemory<CTimestampManager::TimestampSceneViewData_t, this,
			int i);  // 1156
		AddToTailGetPtr(const CUtlVectorBase<CTimestampManager::TimestampSceneViewData_t, CUtlMemory<CTimestampManager::TimestampSceneViewData_t, this); // 134
		CUtlString::operator=(
				const char* src);  // 135
		Unlock(CThreadRWLock& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForWriteTrait<CThreadRWLock> >::~CAutoLockT(); // 173
	}
} /* size: 690, variables: 1 */

// <0387E3B9> ../scenesystem/timestampmgr.cpp:177
// variables: 9
// function calls: 89
void CTimestampManager::ManageSceneViewTimestamps(CSceneView* pView)
{
	TimestampFrameData_t* pTimestampFrameData; // 179
	const char   __FUNCTION__; // 6688
	{
		CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForWriteTrait<CThreadRWLock> > generated_id_182; // 182
		TimestampSceneViewData_t* pTimestampSceneViewData; // 183
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 190
		}
		{
			CSceneLayer* pLayer; // 203
			CUtlLinkedList<CSceneLayer*, short unsigned int, false, int, CUtlMemory<UtlLinkedListElem_t<CSceneLayer*, short unsigned int>, int> >& __for_range; // 36985
			iterator __for_begin; // 58758
			iterator __for_end; // 58758
			CUtlLinkedList<CSceneLayer::Head(); // 334
			_CUtlLinkedList_constiterator_t<CUtlLinkedList<CSceneLayer::_CUtlLinkedList_constiterator_t(
							const CUtlLinkedList<CSceneLayer*, short unsigned int, false, int, CUtlMemory<UtlLinkedListElem_t<CSceneLayer*, short uns list,
							IndexType_t index);  // 264
			_CUtlLinkedList_iterator_t<CUtlLinkedList<CSceneLayer::_CUtlLinkedList_iterator_t(
							const CUtlLinkedList<CSceneLayer*, short unsigned int, false, int, CUtlMemory<UtlLinkedListElem_t<CSceneLayer*, short uns list,
							IndexType_t index);  // 334
			CUtlLinkedList<CSceneLayer::begin(); // 203
			_CUtlLinkedList_constiterator_t<CUtlLinkedList<CSceneLayer::_CUtlLinkedList_constiterator_t(
							const CUtlLinkedList<CSceneLayer*, short unsigned int, false, int, CUtlMemory<UtlLinkedListElem_t<CSceneLayer*, short uns list,
							IndexType_t index);  // 264
			_CUtlLinkedList_iterator_t<CUtlLinkedList<CSceneLayer::_CUtlLinkedList_iterator_t(
							const CUtlLinkedList<CSceneLayer*, short unsigned int, false, int, CUtlMemory<UtlLinkedListElem_t<CSceneLayer*, short uns list,
							IndexType_t index);  // 343
			CUtlLinkedList<CSceneLayer::end(); // 203
			ThreadPause(void); // 173
			ThreadInterlockedAssignIf128(volatile int128* pDest,
							const int128& value,
							const int128& comparand);  // 478
			ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
								const InterlockedPointerX2SizedInt_t& value,
								const InterlockedPointerX2SizedInt_t& comperand);  // 168
			CTSListBase::Push(
				TSLNodeBase_t* pNode);  // 371
			CTSPool<SceneViewTimestampQuery_t>::PutObject(
					SceneViewTimestampQuery_t* pInfo);  // 83
			CTimestampManager::RecycleTimestampQuery(
						SceneViewTimestampQuery_t* pQuery);  // 215
			CUtlMemory<SceneViewTimestampQuery_t::NumAllocated(); // 1196
			CUtlMemory<SceneViewTimestampQuery_t::operator[](
					int i);  // 602
			CUtlVectorBase<SceneViewTimestampQuery_t::Element(
				int i);  // 1201
			CopyConstruct<SceneViewTimestampQuery_t*>(SceneViewTimestampQuery_t** pMemory,
									SceneViewTimestampQuery_t* const& src);  // 1201
			CUtlMemory<SceneViewTimestampQuery_t::Base(); // 112
			CUtlVectorBase<SceneViewTimestampQuery_t::Base(); // 368
			CUtlVectorBase<SceneViewTimestampQuery_t::ResetDbgInfo(); // 824
			CUtlVectorBase<SceneViewTimestampQuery_t::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<SceneViewTimestampQuery_t::AddToTail(
					SceneViewTimestampQuery_t* const& src);  // 210
			CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
					int i);  // 368
			CUtlLinkedList<CSceneLayer::InternalElement(
					int i);  // 550
			CUtlLinkedList<CSceneLayer::Next(
				int i);  // 272
			_CUtlLinkedList_iterator_t<CUtlLinkedList<CSceneLayer::operator++(); // 203
			CUtlMemory<UtlLinkedListElem_t<CSceneLayer::operator[](
					int i);  // 482
			CUtlLinkedList<CSceneLayer::Element(
				int i);  // 317
			_CUtlLinkedList_iterator_t<CUtlLinkedList<CSceneLayer::operator*(); // 203
		}
		Lock(CThreadRWLock& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForWriteTrait<CThreadRWLock> >::CAutoLockT(
				const CThreadRWLock& lock,
				const char* pFilename,
				int nLineNumber);  // 182
		CUtlMemory<CTimestampManager::TimestampSceneViewData_t, int>::NumAllocated(); // 1143
		CUtlMemory<CTimestampManager::TimestampSceneViewData_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CTimestampManager::TimestampSceneViewData_t, CUtlMemory<CTimestampManager::TimestampSceneViewData_t, this,
			int i);  // 1148
		CUtlString::CUtlString(); // 122
		CUtlMemory<SceneViewTimestampQuery_t::ValidateGrowSize(); // 475
		CUtlMemory<SceneViewTimestampQuery_t::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<SceneViewTimestampQuery_t::ResetDbgInfo(); // 530
		CUtlVectorBase<SceneViewTimestampQuery_t::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<SceneViewTimestampQuery_t::CUtlVector(); // 122
		TimestampSceneViewData_t::TimestampSceneViewData_t(); // 1479
		Construct<CTimestampManager::TimestampSceneViewData_t>(TimestampSceneViewData_t* pMemory); // 1148
		CUtlMemory<CTimestampManager::TimestampSceneViewData_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CTimestampManager::TimestampSceneViewData_t, CUtlMemory<CTimestampManager::TimestampSceneViewData_t, this); // 368
		ResetDbgInfo(const CUtlVectorBase<CTimestampManager::TimestampSceneViewData_t, CUtlMemory<CTimestampManager::TimestampSceneViewData_t, this); // 824
		GrowMemory(const CUtlVectorBase<CTimestampManager::TimestampSceneViewData_t, CUtlMemory<CTimestampManager::TimestampSceneViewData_t, this,
				int num);  // 1145
		AddToTail(const CUtlVectorBase<CTimestampManager::TimestampSceneViewData_t, CUtlMemory<CTimestampManager::TimestampSceneViewData_t, this); // 1156
		CUtlMemory<CTimestampManager::TimestampSceneViewData_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CTimestampManager::TimestampSceneViewData_t, CUtlMemory<CTimestampManager::TimestampSceneViewData_t, this,
			int i);  // 1156
		AddToTailGetPtr(const CUtlVectorBase<CTimestampManager::TimestampSceneViewData_t, CUtlMemory<CTimestampManager::TimestampSceneViewData_t, this); // 183
		CSceneView::GetDebugName(); // 184
		CUtlString::operator=(
				const char* src);  // 184
		CSceneView::GetLightBinnerTimestampBeginQuery(); // 188
		CSceneView::GetLightBinnerTimestampEndQuery(); // 190
		CSceneView::GetLightBinnerTimestampBeginQuery(); // 191
		CUtlMemory<SceneViewTimestampQuery_t::NumAllocated(); // 1247
		CUtlMemory<SceneViewTimestampQuery_t::operator[](
				int i);  // 602
		CUtlVectorBase<SceneViewTimestampQuery_t::Element(
			int i);  // 1252
		Construct<SceneViewTimestampQuery_t*, SceneViewTimestampQuery_t*>(SceneViewTimestampQuery_t** pMemory); // 1252
		CUtlMemory<SceneViewTimestampQuery_t::Base(); // 112
		CUtlVectorBase<SceneViewTimestampQuery_t::Base(); // 368
		CUtlVectorBase<SceneViewTimestampQuery_t::ResetDbgInfo(); // 824
		CUtlVectorBase<SceneViewTimestampQuery_t::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<SceneViewTimestampQuery_t::AddToTail(
				SceneViewTimestampQuery_t *& src);  // 193
		CSceneView::GetLightBinnerTimestampEndQuery(); // 194
		CUtlMemory<SceneViewTimestampQuery_t::NumAllocated(); // 1247
		CUtlMemory<SceneViewTimestampQuery_t::operator[](
				int i);  // 602
		CUtlVectorBase<SceneViewTimestampQuery_t::Element(
			int i);  // 1252
		Construct<SceneViewTimestampQuery_t*, SceneViewTimestampQuery_t*>(SceneViewTimestampQuery_t** pMemory); // 1252
		CUtlMemory<SceneViewTimestampQuery_t::Base(); // 112
		CUtlVectorBase<SceneViewTimestampQuery_t::Base(); // 368
		CUtlVectorBase<SceneViewTimestampQuery_t::ResetDbgInfo(); // 824
		CUtlVectorBase<SceneViewTimestampQuery_t::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<SceneViewTimestampQuery_t::AddToTail(
				SceneViewTimestampQuery_t *& src);  // 194
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 371
		CTSPool<SceneViewTimestampQuery_t>::PutObject(
				SceneViewTimestampQuery_t* pInfo);  // 83
		CTimestampManager::RecycleTimestampQuery(
					SceneViewTimestampQuery_t* pQuery);  // 198
		CSceneView::GetLightBinnerTimestampEndQuery(); // 199
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 371
		CTSPool<SceneViewTimestampQuery_t>::PutObject(
				SceneViewTimestampQuery_t* pInfo);  // 83
		CTimestampManager::RecycleTimestampQuery(
					SceneViewTimestampQuery_t* pQuery);  // 199
		Unlock(CThreadRWLock& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForWriteTrait<CThreadRWLock> >::~CAutoLockT(); // 219
	}
} /* size: 0, variables: 2 */

// <0387E34A> ../scenesystem/timestampmgr.cpp:223
// variables: 2
void CTimestampManager::StartNewFrame()
{
	const char   __FUNCTION__; // 6389
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 227
	}
} /* size: 0, variables: 1 */

// <0387D7E3> ../scenesystem/timestampmgr.cpp:234
// variables: 20
// function calls: 39
void CTimestampManager::CollectTimestamps()
{
	const char   __FUNCTION__; // 6492
	{
		uint32 nIndex; // 238
		TimestampFrameData_t* pTimestampFrameData; // 241
		uint32 nPrevIndex; // 289
		TimestampFrameData_t* pPrevTimestampFrameData; // 300
		{
			CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> > generated_id_243; // 243
			{
				int32 nView; // 245
				{
					TimestampSceneViewData_t* pTimestampSceneViewData; // 247
					{
						int32 nQuery; // 248
						{
							SceneViewTimestampQuery_t* pTimestampQuery; // 250
							uint64 nQueryData; // 259
							bool bTimeStampQueryDone; // 260
							bool bPipelineStatsQueryDone; // 261
							RenderQueryPipelineStatistics_t pipelineStats; // 262
							{
								const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 251
							}
							CUtlMemory<SceneViewTimestampQuery_t::operator[](
									int i);  // 588
							CUtlVectorBase<SceneViewTimestampQuery_t::operator[](
									int i);  // 250
						}
						CUtlVectorBase<SceneViewTimestampQuery_t::Count(); // 248
					}
					CUtlMemory<CTimestampManager::TimestampSceneViewData_t, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CTimestampManager::TimestampSceneViewData_t, CUtlMemory<CTimestampManager::TimestampSceneViewData_t, this,
							int i);  // 247
				}
				Count(const CUtlVectorBase<CTimestampManager::TimestampSceneViewData_t, CUtlMemory<CTimestampManager::TimestampSceneViewD this); // 245
			}
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 3047
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 3053
			CThreadRWLock::LockForRead(
					const char* pFileName,
					int nLineNumber);  // 951
			Lock(CThreadRWLock& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> >::CAutoLockT(
					const CThreadRWLock& lock,
					const char* pFilename,
					int nLineNumber);  // 243
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 3058
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 3064
			CThreadRWLock::UnlockRead(
					const char* pFileName,
					int nLineNumber);  // 952
			Unlock(CThreadRWLock& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> >::~CAutoLockT(); // 279
		}
		{
			CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForWriteTrait<CThreadRWLock> > generated_id_303; // 303
			{
				int32 nView; // 304
				{
					TimestampSceneViewData_t* pTimestampSceneViewData; // 306
					{
						int32 nQuery; // 307
						{
							SceneViewTimestampQuery_t* pTimestampQuery; // 309
							ThreadPause(void); // 173
							ThreadInterlockedAssignIf128(volatile int128* pDest,
											const int128& value,
											const int128& comparand);  // 478
							ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
												const InterlockedPointerX2SizedInt_t& value,
												const InterlockedPointerX2SizedInt_t& comperand);  // 168
							CTSListBase::Push(
								TSLNodeBase_t* pNode);  // 371
							CTSPool<SceneViewTimestampQuery_t>::PutObject(
									SceneViewTimestampQuery_t* pInfo);  // 83
							CTimestampManager::RecycleTimestampQuery(
										SceneViewTimestampQuery_t* pQuery);  // 391
							CUtlMemory<SceneViewTimestampQuery_t::operator[](
									int i);  // 588
							CUtlVectorBase<SceneViewTimestampQuery_t::operator[](
									int i);  // 309
						}
						CUtlVectorBase<SceneViewTimestampQuery_t::Count(); // 307
					}
					CUtlMemory<CTimestampManager::TimestampSceneViewData_t, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CTimestampManager::TimestampSceneViewData_t, CUtlMemory<CTimestampManager::TimestampSceneViewData_t, this,
							int i);  // 306
				}
				Count(const CUtlVectorBase<CTimestampManager::TimestampSceneViewData_t, CUtlMemory<CTimestampManager::TimestampSceneViewD this); // 304
			}
			Lock(CThreadRWLock& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForWriteTrait<CThreadRWLock> >::CAutoLockT(
					const CThreadRWLock& lock,
					const char* pFilename,
					int nLineNumber);  // 303
			CUtlMemory<CTimestampManager::TimestampSceneViewData_t, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CTimestampManager::TimestampSceneViewData_t, int>::Purge(); // 903
			CUtlMemory<CTimestampManager::TimestampSceneViewData_t, int>::Purge(); // 1799
			CUtlMemory<CTimestampManager::TimestampSceneViewData_t, int>::Base(); // 112
			Base(const CUtlVectorBase<CTimestampManager::TimestampSceneViewData_t, CUtlMemory<CTimestampManager::TimestampSceneViewData_t, this); // 368
			ResetDbgInfo(const CUtlVectorBase<CTimestampManager::TimestampSceneViewData_t, CUtlMemory<CTimestampManager::TimestampSceneViewData_t, this); // 1800
			Purge(const CUtlVectorBase<CTimestampManager::TimestampSceneViewData_t, CUtlMemory<CTimestampManager::TimestampSceneViewData_t, this); // 394
			Unlock(CThreadRWLock& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForWriteTrait<CThreadRWLock> >::~CAutoLockT(); // 395
		}
	}
} /* size: 0, variables: 1 */

// <0387C895> ../scenesystem/timestampmgr.cpp:405
// variables: 13
// function calls: 57
void CTimestampManager::GetMostRecentFrameSummary(SwapChainHandle_t hSwapChain, CUtlVector<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >& timestampFrameSummaryOut)
{
	uint32 nTimestampReadIndex; // 407
	{
		TimestampFrameData_t* pTimestampFrameData; // 410
		{
			CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> > generated_id_413; // 413
			{
				int32 nView; // 414
				{
					TimestampSceneViewData_t* pTimestampSceneViewData; // 416
					{
						int32 nQuery; // 428
						{
							SceneViewTimestampQuery_t* pThisTimestampQuery; // 430
							SceneViewTimestampQuery_t* pNextTimestampQuery; // 431
							double flStartTimeSeconds; // 433
							double flEndTimeSeconds; // 434
							double flDurationInMilliseconds; // 435
							int32 nGroup; // 444
							{
								SceneSystemTimestampFrameData_t* pNewGroup; // 460
								CUtlMemory<SceneSystemTimestampFrameData_t, int>::NumAllocated(); // 1143
								CUtlMemory<SceneSystemTimestampFrameData_t, int>::operator[](
										int i);  // 602
								CUtlVectorBase<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >::Element(
									int i);  // 1148
								CUtlString::CUtlString(); // 239
								CUtlStringToken::CUtlStringToken(); // 239
								SceneSystemTimestampFrameData_t::SceneSystemTimestampFrameData_t(); // 1479
								Construct<SceneSystemTimestampFrameData_t>(SceneSystemTimestampFrameData_t* pMemory); // 1148
								CUtlMemory<SceneSystemTimestampFrameData_t, int>::IsGrowable(); // 823
								CUtlMemory<SceneSystemTimestampFrameData_t, int>::IsExternallyAllocated(); // 859
								CUtlMemory<SceneSystemTimestampFrameData_t, int>::IsExternallyAllocated(); // 861
								CUtlMemory<SceneSystemTimestampFrameData_t, int>::Grow(
									int num);  // 806
								CUtlVectorBase<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >::ResetDbgInfo(); // 824
								CUtlVectorBase<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >::GrowMemory(
										int num);  // 1145
								CUtlVectorBase<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >::AddToTail(); // 1156
								CUtlMemory<SceneSystemTimestampFrameData_t, int>::operator[](
										int i);  // 602
								CUtlVectorBase<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >::Element(
									int i);  // 1156
								CUtlVectorBase<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >::AddToTailGetPtr(); // 460
								V_strlen(const char* str); // 393
								CUtlString::Length(); // 161
								CUtlString::Get(); // 161
								CUtlString::operator=(
										const CUtlString& src);  // 463
								CUtlString::Get(); // 441
								CUtlString::operator char const*(); // 464
								CUtlStringToken::CUtlStringToken(); // 121
								{
								}
								MakeStringToken(const char* pString,
										bool bWriteToDatabase);  // 119
								MakeStringToken(const char* pString,
										bool bWriteToDatabase);  // 464
							}
							CUtlMemory<SceneViewTimestampQuery_t::operator[](
									int i);  // 588
							CUtlVectorBase<SceneViewTimestampQuery_t::operator[](
									int i);  // 430
							CUtlMemory<SceneViewTimestampQuery_t::operator[](
									int i);  // 588
							CUtlVectorBase<SceneViewTimestampQuery_t::operator[](
									int i);  // 431
							{
							}
							CUtlStringToken::CUtlStringToken(); // 121
							MakeStringToken(const char* pString,
									bool bWriteToDatabase);  // 119
							MakeStringToken(const char* pString,
									bool bWriteToDatabase);  // 437
							CUtlStringToken::operator==(
									const CUtlStringToken& other);  // 437
							CUtlVectorBase<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >::Count(); // 445
							CUtlMemory<SceneSystemTimestampFrameData_t, int>::operator[](
									int i);  // 588
							CUtlVectorBase<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >::operator[](
									int i);  // 447
							CUtlStringToken::operator==(
									const CUtlStringToken& other);  // 447
							CUtlMemory<SceneSystemTimestampFrameData_t, int>::operator[](
									int i);  // 588
							CUtlVectorBase<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >::operator[](
									int i);  // 455
							CUtlMemory<SceneSystemTimestampFrameData_t, int>::operator[](
									int i);  // 588
							CUtlVectorBase<SceneSystemTimestampFrameData_t, CUtlMemory<SceneSystemTimestampFrameData_t, int> >::operator[](
									int i);  // 456
							RenderQueryPipelineStatistics_t::operator+=(
									const RenderQueryPipelineStatistics_t& other);  // 456
						}
						CUtlVectorBase<SceneViewTimestampQuery_t::Count(); // 428
					}
					CUtlMemory<CTimestampManager::TimestampSceneViewData_t, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CTimestampManager::TimestampSceneViewData_t, CUtlMemory<CTimestampManager::TimestampSceneViewData_t, this,
							int i);  // 416
				}
				Count(const CUtlVectorBase<CTimestampManager::TimestampSceneViewData_t, CUtlMemory<CTimestampManager::TimestampSceneViewD this); // 414
			}
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 3047
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 3053
			CThreadRWLock::LockForRead(
					const char* pFileName,
					int nLineNumber);  // 951
			Lock(CThreadRWLock& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> >::CAutoLockT(
					const CThreadRWLock& lock,
					const char* pFilename,
					int nLineNumber);  // 413
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 3058
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 3064
			CThreadRWLock::UnlockRead(
					const char* pFileName,
					int nLineNumber);  // 952
			Unlock(CThreadRWLock& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadRWLock, CAutoLockRWLockLockForReadTrait<CThreadRWLock> >::~CAutoLockT(); // 468
		}
	}
} /* size: 0, variables: 1 */

