
//
// rendersystem/occlusionquerymgr.cpp
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 19
//

// <0007BE34> rendersystem/occlusionquerymgr.cpp:22
// function calls: 10
void COcclusionQueryMgr::COcclusionQueryMgr()
{
	CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::Grow(
		int num);  // 193
	CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::Init(
		int nGrowSize,
		int nInitSize);  // 161
	CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::CUtlFixedMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 448
	Iterator_t::Iterator_t(
			BlockHeader_t* p,
			intp i);  // 96
	CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::InvalidIterator(); // 448
	ConstructList(const CUtlLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t, long long int, true, long long int, CUtlFixedMemory<UtlL this); // 454
	ResetDbgInfo(const CUtlLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t, long long int, true, long long int, CUtlFixedMemory<UtlL this); // 455
	CUtlLinkedList(const CUtlLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t, long long int, true, long long int, CUtlFixedMemory<UtlL this,
			int growSize,
			int initSize);  // 404
	CUtlFixedLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t>::CUtlFixedLinkedList(
				int growSize,
				int initSize);  // 22
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 22
} /* size: 95, inline expansions: 10 (177 bytes) */

// <0007BE17> rendersystem/occlusionquerymgr.cpp:22
void COcclusionQueryMgr::COcclusionQueryMgr()
{
} /* size: 0 */

// <0007B768> rendersystem/occlusionquerymgr.cpp:31
// variables: 3
// function calls: 22
void COcclusionQueryMgr::CreateOcclusionQueryObject()
{
	intp h; // 34
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
		unsigned int nSpinSleepTime);  // 33
	CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::IsValidIterator(
			const Iterator_t& it);  // 81
	CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::IsValidIterator(
			const Iterator_t& it);  // 82
	CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::HeaderToBlock(
			const BlockHeader_t* pHeader);  // 131
	CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::IsInBlock(
			intp i,
			BlockHeader_t* pBlockHeader);  // 85
	CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::GetIndex(
		const Iterator_t& it);  // 86
	{
		BlockHeader_t* pbh; // 88
		CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::HeaderToBlock(
				const BlockHeader_t* pHeader);  // 131
		CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::IsInBlock(
				intp i,
				BlockHeader_t* pBlockHeader);  // 90
	}
	{
	}
	CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::IsIdxAfter(
			intp i,
			const Iterator_t& it);  // 591
	IsValidIndex(const CUtlLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t, long long int, true, long long int, CUtlFixedMemor this,
			long long int i);  // 977
	CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::operator[](
			intp i);  // 367
	InternalElement(const CUtlLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t, long long int, true, long long int, CUtlFixedMemory<UtlL this,
			long long int i);  // 1011
	{
	}
	LinkBefore(const CUtlLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t, long long int, true, long long int, CUtlFixedMemory<UtlL this,
			long long int before,
			long long int elem);  // 771
	{
		int i; // 77
	}
	OcclusionQueryObject_t::OcclusionQueryObject_t(); // 1479
	Construct<COcclusionQueryMgr::OcclusionQueryObject_t>(OcclusionQueryObject_t* pMemory); // 774
	InsertBefore(const CUtlLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t, long long int, true, long long int, CUtlFixedMemory<UtlL this,
			long long int before);  // 805
	AddToTail(const CUtlLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t, long long int, true, long long int, CUtlFixedMemory<UtlL this); // 34
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 35
} /* size: 0, variables: 1, inline expansions: 20 (1765 bytes) */

// <0007B66B> rendersystem/occlusionquerymgr.cpp:39
// variable: 1
// function calls: 2
void COcclusionQueryMgr::OnCreateOcclusionQueryObject(OcclusionQueryObjectHandle_t h)
{
	{
		int i; // 41
		{
		}
		CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::operator[](
				intp i);  // 494
		operator[](const CUtlLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t, long long int, true, long long int, CUtlFixedMemory<UtlL this,
				long long int i);  // 43
	}
} /* size: 0 */

// <0007C4AB> rendersystem/occlusionquerymgr.cpp:48
void COcclusionQueryMgr::FlushQuery(OcclusionQueryObjectHandle_t hOcclusionQuery, int nIndex)
{
} /* size: 0 */

// <0007AF7C> rendersystem/occlusionquerymgr.cpp:65
// variables: 5
// function calls: 20
void COcclusionQueryMgr::DestroyOcclusionQueryObject(OcclusionQueryObjectHandle_t hOcclusionQuery)
{
	intp h; // 67
	const char   __FUNCTION__; // 37746
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 68
	}
	{
		int i; // 71
	}
	CUtlFixedLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t>::IsValidIndex(
			intp i);  // 68
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
		unsigned int nSpinSleepTime);  // 82
	CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::IsValidIterator(
			const Iterator_t& it);  // 81
	CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::IsValidIterator(
			const Iterator_t& it);  // 82
	CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::HeaderToBlock(
			const BlockHeader_t* pHeader);  // 131
	CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::IsInBlock(
			intp i,
			BlockHeader_t* pBlockHeader);  // 85
	{
		BlockHeader_t* pbh; // 88
		CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::HeaderToBlock(
				const BlockHeader_t* pHeader);  // 131
		CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::IsInBlock(
				intp i,
				BlockHeader_t* pBlockHeader);  // 90
	}
	CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::GetIndex(
		const Iterator_t& it);  // 86
	{
	}
	CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::IsIdxAfter(
			intp i,
			const Iterator_t& it);  // 591
	IsValidIndex(const CUtlLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t, long long int, true, long long int, CUtlFixedMemor this,
			long long int i);  // 749
	Destruct<COcclusionQueryMgr::OcclusionQueryObject_t>(OcclusionQueryObject_t* pMemory); // 753
	{
	}
	Free(const CUtlLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t, long long int, true, long long int, CUtlFixedMemory<UtlL this,
		long long int elem);  // 907
	Remove(const CUtlLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t, long long int, true, long long int, CUtlFixedMemory<UtlL this,
		long long int elem);  // 83
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 84
	CUtlFixedLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t>::IsValidIndex(
			intp i);  // 69
} /* size: 0, variables: 2, inline expansions: 18 (1298 bytes) */

// <0007AF7C> rendersystem/occlusionquerymgr.cpp:65
// variables: 5
// function calls: 20
void COcclusionQueryMgr::DestroyOcclusionQueryObject(OcclusionQueryObjectHandle_t hOcclusionQuery)
{
	intp h; // 67
	const char   __FUNCTION__; // 7839
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 68
	}
	{
		int i; // 71
	}
	CUtlFixedLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t>::IsValidIndex(
			intp i);  // 68
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
		unsigned int nSpinSleepTime);  // 82
	CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::IsValidIterator(
			const Iterator_t& it);  // 81
	CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::IsValidIterator(
			const Iterator_t& it);  // 82
	CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::HeaderToBlock(
			const BlockHeader_t* pHeader);  // 131
	CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::IsInBlock(
			intp i,
			BlockHeader_t* pBlockHeader);  // 85
	{
		BlockHeader_t* pbh; // 88
		CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::HeaderToBlock(
				const BlockHeader_t* pHeader);  // 131
		CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::IsInBlock(
				intp i,
				BlockHeader_t* pBlockHeader);  // 90
	}
	CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::GetIndex(
		const Iterator_t& it);  // 86
	{
	}
	CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::IsIdxAfter(
			intp i,
			const Iterator_t& it);  // 591
	IsValidIndex(const CUtlLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t, long long int, true, long long int, CUtlFixedMemor this,
			long long int i);  // 749
	Destruct<COcclusionQueryMgr::OcclusionQueryObject_t>(OcclusionQueryObject_t* pMemory); // 753
	{
	}
	Free(const CUtlLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t, long long int, true, long long int, CUtlFixedMemory<UtlL this,
		long long int elem);  // 907
	Remove(const CUtlLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t, long long int, true, long long int, CUtlFixedMemory<UtlL this,
		long long int elem);  // 83
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 84
	CUtlFixedLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t>::IsValidIndex(
			intp i);  // 69
} /* size: 0, variables: 2, inline expansions: 18 (1298 bytes) */

// <0007AF49> rendersystem/occlusionquerymgr.cpp:92
void COcclusionQueryMgr::AdvanceFrame()
{
} /* size: 9 */

// <0007AE0E> rendersystem/occlusionquerymgr.cpp:102
// variables: 2
// function calls: 4
void COcclusionQueryMgr::AllocOcclusionQueryObjects()
{
	{
		long long int iterator; // 104
		{
			int i; // 106
			CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::operator[](
					intp i);  // 494
			operator[](const CUtlLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t, long long int, true, long long int, CUtlFixedMemory<UtlL this,
					long long int i);  // 108
		}
		Head(const CUtlLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t, long long int, true, long long int, CUtlFixedMemor this); // 104
		Next(const CUtlLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t, long long int, true, long long int, CUtlFixedMemor this,
			long long int i);  // 104
	}
} /* size: 0 */

// <0007ACE7> rendersystem/occlusionquerymgr.cpp:114
// variables: 2
// function calls: 4
void COcclusionQueryMgr::FreeOcclusionQueryObjects()
{
	{
		long long int iterator; // 116
		{
			int i; // 118
			CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::operator[](
					intp i);  // 494
			operator[](const CUtlLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t, long long int, true, long long int, CUtlFixedMemory<UtlL this,
					long long int i);  // 120
		}
		Head(const CUtlLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t, long long int, true, long long int, CUtlFixedMemor this); // 116
		Next(const CUtlLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t, long long int, true, long long int, CUtlFixedMemor this,
			long long int i);  // 116
	}
} /* size: 0 */

// <0007AB97> rendersystem/occlusionquerymgr.cpp:139
// variables: 4
// function calls: 2
void COcclusionQueryMgr::ResetOcclusionQueryObject(OcclusionQueryObjectHandle_t hOcclusionQuery)
{
	intp h; // 141
	const char   __FUNCTION__; // 37692
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 142
	}
	{
		int i; // 146
	}
	CUtlFixedLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t>::IsValidIndex(
			intp i);  // 142
	CUtlFixedLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t>::IsValidIndex(
			intp i);  // 143
} /* size: 0, variables: 2, inline expansions: 2 (61 bytes) */

// <0007AB97> rendersystem/occlusionquerymgr.cpp:139
// variables: 4
// function calls: 2
void COcclusionQueryMgr::ResetOcclusionQueryObject(OcclusionQueryObjectHandle_t hOcclusionQuery)
{
	intp h; // 141
	const char   __FUNCTION__; // 7785
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 142
	}
	{
		int i; // 146
	}
	CUtlFixedLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t>::IsValidIndex(
			intp i);  // 142
	CUtlFixedLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t>::IsValidIndex(
			intp i);  // 143
} /* size: 0, variables: 2, inline expansions: 2 (61 bytes) */

// <0007A963> rendersystem/occlusionquerymgr.cpp:160
// variables: 8
// function calls: 3
void COcclusionQueryMgr::BeginOcclusionQueryDrawing(OcclusionQueryObjectHandle_t hOcclusionQuery, IRenderContext* pContext)
{
	intp h; // 162
	const char   __FUNCTION__; // 37719
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 163
	}
	{
		int nCurrent; // 166
		RenderQueryHandle_t hQuery; // 167
		{
			uint64 nPixels; // 174
			RenderQueryState_t nState; // 175
			{
				int s_nWarnCount; // 180
				Plat_IsInDebugSession(void); // 186
			}
		}
	}
	CUtlFixedLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t>::IsValidIndex(
			intp i);  // 163
	CUtlFixedLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t>::IsValidIndex(
			intp i);  // 164
} /* size: 0, variables: 2, inline expansions: 2 (73 bytes) */

// <0007A963> rendersystem/occlusionquerymgr.cpp:160
// variables: 8
// function calls: 3
void COcclusionQueryMgr::BeginOcclusionQueryDrawing(OcclusionQueryObjectHandle_t hOcclusionQuery, IRenderContext* pContext)
{
	intp h; // 162
	const char   __FUNCTION__; // 7812
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 163
	}
	{
		int nCurrent; // 166
		RenderQueryHandle_t hQuery; // 167
		{
			uint64 nPixels; // 174
			RenderQueryState_t nState; // 175
			{
				int s_nWarnCount; // 180
				Plat_IsInDebugSession(void); // 186
			}
		}
	}
	CUtlFixedLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t>::IsValidIndex(
			intp i);  // 163
	CUtlFixedLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t>::IsValidIndex(
			intp i);  // 164
} /* size: 0, variables: 2, inline expansions: 2 (73 bytes) */

// <0007A7E9> rendersystem/occlusionquerymgr.cpp:214
// variables: 5
// function calls: 2
void COcclusionQueryMgr::EndOcclusionQueryDrawing(OcclusionQueryObjectHandle_t hOcclusionQuery, IRenderContext* pContext)
{
	intp h; // 216
	const char   __FUNCTION__; // 37665
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 217
	}
	{
		int nCurrent; // 220
		RenderQueryHandle_t hQuery; // 221
	}
	CUtlFixedLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t>::IsValidIndex(
			intp i);  // 217
	CUtlFixedLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t>::IsValidIndex(
			intp i);  // 218
} /* size: 0, variables: 2, inline expansions: 2 (69 bytes) */

// <0007A7E9> rendersystem/occlusionquerymgr.cpp:214
// variables: 5
// function calls: 2
void COcclusionQueryMgr::EndOcclusionQueryDrawing(OcclusionQueryObjectHandle_t hOcclusionQuery, IRenderContext* pContext)
{
	intp h; // 216
	const char   __FUNCTION__; // 7758
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 217
	}
	{
		int nCurrent; // 220
		RenderQueryHandle_t hQuery; // 221
	}
	CUtlFixedLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t>::IsValidIndex(
			intp i);  // 217
	CUtlFixedLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t>::IsValidIndex(
			intp i);  // 218
} /* size: 0, variables: 2, inline expansions: 2 (69 bytes) */

// <0007A62C> rendersystem/occlusionquerymgr.cpp:239
// variables: 8
// function calls: 2
void COcclusionQueryMgr::OcclusionQuery_IssueNumPixelsRenderedQuery(OcclusionQueryObjectHandle_t hOcclusionQuery)
{
	intp h; // 241
	const char   __FUNCTION__; // 38081
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 242
	}
	{
		int i; // 245
		{
			int nIndex; // 247
			RenderQueryHandle_t hQuery; // 248
			{
				uint64 nPixels; // 252
				RenderQueryState_t nState; // 253
			}
		}
	}
	CUtlFixedLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t>::IsValidIndex(
			intp i);  // 242
	CUtlFixedLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t>::IsValidIndex(
			intp i);  // 243
} /* size: 0, variables: 2, inline expansions: 2 (68 bytes) */

// <0007A62C> rendersystem/occlusionquerymgr.cpp:239
// variables: 8
// function calls: 2
void COcclusionQueryMgr::OcclusionQuery_IssueNumPixelsRenderedQuery(OcclusionQueryObjectHandle_t hOcclusionQuery)
{
	intp h; // 241
	const char   __FUNCTION__; // 8174
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 242
	}
	{
		int i; // 245
		{
			int nIndex; // 247
			RenderQueryHandle_t hQuery; // 248
			{
				uint64 nPixels; // 252
				RenderQueryState_t nState; // 253
			}
		}
	}
	CUtlFixedLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t>::IsValidIndex(
			intp i);  // 242
	CUtlFixedLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t>::IsValidIndex(
			intp i);  // 243
} /* size: 0, variables: 2, inline expansions: 2 (68 bytes) */

// <0007A513> rendersystem/occlusionquerymgr.cpp:264
// variable: 1
// function calls: 2
void COcclusionQueryMgr::OcclusionQuery_GetNumPixelsRendered(OcclusionQueryObjectHandle_t h, bool bDoQuery)
{
	int nPixels; // 271
	{
	}
	CUtlFixedMemory<UtlLinkedListElem_t<COcclusionQueryMgr::OcclusionQueryObject_t, long long int> >::operator[](
			intp i);  // 494
	operator[](const CUtlLinkedList<COcclusionQueryMgr::OcclusionQueryObject_t, long long int, true, long long int, CUtlFixedMemory<UtlL this,
			long long int i);  // 271
} /* size: 0, variables: 1, inline expansions: 2 (86 bytes) */

