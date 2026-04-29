
//
// tier0_perproject/stacktools_tier1.cpp
//
//	referenced by: libengine2.so
//
//	functions: 35
//	class: 1
//

// <0445B8E0> tier0_perproject/stacktools_tier1.cpp:15
void* _____Asynchronous_Handoff_Marker_____(void)
{
} /* size: 12 */

// <0445B12A> tier0_perproject/stacktools_tier1.cpp:23
// function calls: 6
void CAsyncCallStackTracker::CAsyncCallStackTracker()
{
	CDeferredCallStackMarkerProxyTarget::CDeferredCallStackMarkerProxyTarget(); // 25
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 25
} /* size: 120, inline expansions: 6 (121 bytes) */

// <0445B10E> tier0_perproject/stacktools_tier1.cpp:23
void CAsyncCallStackTracker::CAsyncCallStackTracker()
{
} /* size: 0 */

// <0445ACEA> tier0_perproject/stacktools_tier1.cpp:37
// variables: 2
// function calls: 18
void CAsyncCallStackTracker::~CAsyncCallStackTracker()
{
	{
		CStackTop_AsyncManipulator* pTopIter; // 40
	}
	{
		CStackTop_AsyncManipulator* pTopIter; // 40
		CStackTop_AsyncManipulator::TestRecursiveMatch(
					CAsyncCallStackTracker* pTracker);  // 366
		CAsyncCallStackTracker::GetRecursiveTop(
				bool bRequireActive);  // 40
		CStackTop_AsyncManipulator::Unhook(); // 43
		CStackTop_AsyncManipulator::TestRecursiveMatch(
					CAsyncCallStackTracker* pTracker);  // 164
		CStackTop_AsyncManipulator::FindNextRecursiveTop(
					CAsyncCallStackTracker* pTracker,
					bool bRequireActive);  // 44
	}
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 46
	{
	}
	CDeferredCallStackMarkerProxy::Detach(); // 400
	CDeferredCallStackMarkerProxyTarget::Detach(); // 335
	CDeferredCallStackMarkerProxyTarget::~CDeferredCallStackMarkerProxyTarget(); // 46
} /* size: 0, inline expansions: 13 (536 bytes) */

// <0445ACC0> tier0_perproject/stacktools_tier1.cpp:37
// variable: 1
void CAsyncCallStackTracker::~CAsyncCallStackTracker()
{
	{
		CStackTop_AsyncManipulator* pTopIter; // 40
	}
} /* size: 0 */

// <0445AB44> tier0_perproject/stacktools_tier1.cpp:48
// function calls: 3
void CAsyncCallStackTracker::Initialize(bool bCaptureSectionAnnotations, FN_GetCallStack GetStackFunction, uint32 nSkipCalls, uint32 nMaxCapture)
{
	{
	}
	CDeferredCallStackMarkerProxy::Detach(); // 400
	CDeferredCallStackMarkerProxyTarget::Detach(); // 65
	_____Asynchronous_Handoff_Marker_____(void); // 56
} /* size: 0, inline expansions: 3 (244 bytes) */

// <0445A9A5> tier0_perproject/stacktools_tier1.cpp:76
// function calls: 5
void CAsyncCallStackTracker::Initialize(const CCallStackCapture& fromCapture, bool bCaptureSectionAnnotations)
{
	{
	}
	CDeferredCallStackMarkerProxy::Detach(); // 400
	CDeferredCallStackMarkerProxyTarget::Detach(); // 90
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 82
	_____Asynchronous_Handoff_Marker_____(void); // 83
} /* size: 0, inline expansions: 5 (0 bytes) */

// <0445A805> tier0_perproject/stacktools_tier1.cpp:101
// variables: 2
// function calls: 3
void CAsyncCallStackTracker::SynchronousSectionStart(CCallStackMarkerBase& marker)
{
	const char   __FUNCTION__; // 16412
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 112
	}
	{
	}
	CDeferredCallStackMarkerProxy::Detach(); // 400
	CDeferredCallStackMarkerProxyTarget::Detach(); // 110
	{
	}
	CDeferredCallStackMarkerProxy::Attach(
		CDeferredCallStackMarkerProxyTarget& destMarker);  // 106
} /* size: 0, variables: 1, inline expansions: 3 (406 bytes) */

// <0445A674> tier0_perproject/stacktools_tier1.cpp:119
// variables: 3
// function calls: 2
void CAsyncCallStackTracker::SynchronousSectionStart(const CCallStackMarkerBase& marker)
{
	const char   __FUNCTION__; // 16412
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 122
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 125
	}
	{
	}
	CDeferredCallStackMarkerProxy::Detach(); // 400
	CDeferredCallStackMarkerProxyTarget::Detach(); // 123
} /* size: 0, variables: 1, inline expansions: 2 (294 bytes) */

// <0445A275> tier0_perproject/stacktools_tier1.cpp:131
// variables: 7
// function calls: 8
void CAsyncCallStackTracker::SynchronousSectionEnd(bool bCaptureSectionAnnotations, FN_GetCallStack GetStackFunction, uint32 nSkipCalls)
{
	const char   __FUNCTION__; // 16011
	CStackTop_AsyncManipulator* pRecursiveTop; // 135
	int nRecursiveTopBackup; // 136
	void* CaptureForThisSection; // 142
	int nThisCapture; // 143
	int nShift; // 150
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 134
	}
	CStackTop_AsyncManipulator::TestRecursiveMatch(
				CAsyncCallStackTracker* pTracker);  // 366
	CAsyncCallStackTracker::GetRecursiveTop(
			bool bRequireActive);  // 135
	CStackTop_AsyncManipulator::BackupAndDisable(
			int& nBackupStorage);  // 139
	_____Asynchronous_Handoff_Marker_____(void); // 146
	CStackTop_AsyncManipulator::Restore(
		const int& nBackupStorage);  // 153
	CStackTop_AsyncManipulator::Shift(
		int nShift,
		CAsyncCallStackTracker* pTracker);  // 154
	{
	}
	CDeferredCallStackMarkerProxy::Detach(); // 400
	CDeferredCallStackMarkerProxyTarget::Detach(); // 158
} /* size: 0, variables: 6, inline expansions: 8 (438 bytes) */

// <0445A1D7> tier0_perproject/stacktools_tier1.cpp:165
// function call: 1
void CAsyncCallStackTracker::SynchronousSectionSingleStep(const CCallStackMarker_SmallerScope& marker)
{
	CAsyncCallStackTracker::SynchronousSectionSingleStep(
					void* pOwningFunctionPointer);  // 168
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0445BB03> tier0_perproject/stacktools_tier1.cpp:172
void CAsyncCallStackTracker::SynchronousSectionSingleStep(void* pOwningFunctionPointer)
{
} /* size: 0 */

// <0445B8FA> tier0_perproject/stacktools_tier1.cpp:172
// variables: 3
// function calls: 6
void CAsyncCallStackTracker::SynchronousSectionSingleStep(void* pOwningFunctionPointer)
{
	{
		const int  knInsertCount; // 177
		int nShift; // 178
		CStackTop_AsyncManipulator* pRecursiveTop; // 190
		_____Asynchronous_Handoff_Marker_____(void); // 182
		{
		}
		CDeferredCallStackMarkerProxy::Detach(); // 400
		CDeferredCallStackMarkerProxyTarget::Detach(); // 185
		CStackTop_AsyncManipulator::TestRecursiveMatch(
					CAsyncCallStackTracker* pTracker);  // 366
		CAsyncCallStackTracker::GetRecursiveTop(
				bool bRequireActive);  // 190
		CStackTop_AsyncManipulator::Shift(
			int nShift,
			CAsyncCallStackTracker* pTracker);  // 193
	}
} /* size: 0 */

// <0445A189> tier0_perproject/stacktools_tier1.cpp:172
// variables: 3
void CAsyncCallStackTracker::SynchronousSectionSingleStep(void* pOwningFunctionPointer)
{
	{
		const int  knInsertCount; // 177
		int nShift; // 178
		CStackTop_AsyncManipulator* pRecursiveTop; // 190
	}
} /* size: 0 */

// <04459ED9> tier0_perproject/stacktools_tier1.cpp:199
// variables: 5
// function calls: 5
void CAsyncCallStackTracker::Resolve(bool bCaptureSectionAnnotations, FN_GetCallStack GetStackFunction, uint32 nSkipCalls)
{
	{
		CStackTop_AsyncManipulator* pRecursiveTop; // 204
		int nRecursiveTopBackup; // 205
		void* CaptureForThisSection; // 211
		int nThisCapture; // 212
		int nShift; // 214
		CStackTop_AsyncManipulator::TestRecursiveMatch(
					CAsyncCallStackTracker* pTracker);  // 366
		CAsyncCallStackTracker::GetRecursiveTop(
				bool bRequireActive);  // 204
		CStackTop_AsyncManipulator::BackupAndDisable(
				int& nBackupStorage);  // 208
		CStackTop_AsyncManipulator::Shift(
			int nShift,
			CAsyncCallStackTracker* pTracker);  // 219
		CStackTop_AsyncManipulator::Restore(
			const int& nBackupStorage);  // 218
	}
} /* size: 367 */

// <04459390> tier0_perproject/stacktools_tier1.cpp:227
void CAsyncAnnotationCapture::CAsyncAnnotationCapture()
{
} /* size: 0 */

// <04459374> tier0_perproject/stacktools_tier1.cpp:227
inline void CAsyncAnnotationCapture::CAsyncAnnotationCapture()
{
} /* size: 0 */

// <0445935D> tier0_perproject/stacktools_tier1.cpp:227
void CAsyncAnnotationCapture::~CAsyncAnnotationCapture()
{
} /* size: 0 */

// <04459341> tier0_perproject/stacktools_tier1.cpp:227
inline void CAsyncAnnotationCapture::~CAsyncAnnotationCapture()
{
} /* size: 0 */

// <04455E69> tier0_perproject/stacktools_tier1.cpp:227
// member functions: 6
// member variables: 2
// class size: 2,240
class CAsyncAnnotationCapture {
	/* tier0_perproject/stacktools_tier1.cpp:231 */
	bool IterateStackAnnotationCallback(const void* , int, const char* , void* );
	CUtlVectorFixedGrowable<unsigned char, 2048> m_Memory __attribute__((__aligned__(8))); /* 0 2080 */
	CUtlVectorFixedGrowable<int, 32> m_Indices __attribute__((__aligned__(8))); /* 2080 160 */
	void ~CAsyncAnnotationCapture(CAsyncAnnotationCapture* );
	void CAsyncAnnotationCapture(CAsyncAnnotationCapture* );
	bool IterateStackAnnotationCallback(const void  *, int, const char  *, void *); /* linkage=_ZN23CAsyncAnnotationCapture30IterateStackAnnotationCallbackEPKviPKcPv */
	void ~CAsyncAnnotationCapture(class CAsyncAnnotationCapture *); /* linkage=_ZN23CAsyncAnnotationCaptureD4Ev */
	void CAsyncAnnotationCapture(class CAsyncAnnotationCapture *); /* linkage=_ZN23CAsyncAnnotationCaptureC4Ev */
} __attribute__((__aligned__(8)));

// <044597F1> tier0_perproject/stacktools_tier1.cpp:231
// variables: 6
// function calls: 28
void IterateStackAnnotationCallback(const void* pStackAddress, int nIndex, const char* szValue, void* pContext)
{
	const char   __FUNCTION__; // 14064
	CAsyncAnnotationCapture* pThis; // 235
	size_t nStringLength; // 237
	int nMemoryIndex; // 238
	uint8* pWrite; // 240
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 233
	}
	V_strlen(const char* str); // 237
	CUtlMemory<unsigned char, int>::NumAllocated(); // 782
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::Base(); // 368
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::ShiftElementsRight(
				int elem,
				int num);  // 1446
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::AddMultipleToTail(
				int num);  // 238
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::Element(
		int i);  // 240
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 242
	CUtlMemory<int, int>::NumAllocated(); // 1196
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Base(); // 368
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::ResetDbgInfo(); // 824
	CUtlMemory<int, int>::IsGrowable(); // 823
	CUtlMemory<int, int>::IsExternallyAllocated(); // 859
	CUtlMemory<int, int>::IsExternallyAllocated(); // 861
	CUtlMemory<int, int>::Grow(
		int num);  // 806
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::GrowMemory(
			int num);  // 1198
	CUtlMemory<int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Element(
		int i);  // 1201
	CopyConstruct<int>(int* pMemory,
				const int& src);  // 1201
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::AddToTail(
			const int& src);  // 244
} /* size: 513, variables: 5, inline expansions: 28 (1256 bytes) */

// <0445962B> tier0_perproject/stacktools_tier1.cpp:253
// variables: 2
// function calls: 2
void CAsyncCallStackTracker::AppendCurrentCapture(void* const* pCapture, int nCaptureLength, bool bCaptureSectionAnnotations)
{
	{
		int i; // 256
		{
			int nShift; // 264
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 267
		}
	}
} /* size: 179 */

// <0445940F> tier0_perproject/stacktools_tier1.cpp:284
// variables: 8
// function calls: 4
void CAsyncCallStackTracker::ShiftCapture(int nShift, int nDropIndex)
{
	const char   __FUNCTION__; // 11842
	{
		int i; // 293
	}
	{
		int i; // 301
	}
	{
		uint8* pParse; // 310
		uint8* pEnd; // 311
		{
			int nIndex; // 315
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 323
			}
			{
				int i; // 1696
			}
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveMultipleFromTail(
						int num);  // 319
		}
		CUtlMemory<unsigned char, int>::Base(); // 112
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 310
	}
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 308
} /* size: 0, variables: 1, inline expansions: 1 (7 bytes) */

// <044580E0> tier0_perproject/stacktools_tier1.cpp:336
// variables: 7
// function calls: 81
void CAsyncCallStackTracker::CaptureAnnotations(int nUpToIndex)
{
	CAsyncAnnotationCapture captureCallback; // 339
	int nCaptureMemory; // 342
	{
		uint8* pWrite; // 345
		uint8* pReadStop; // 348
		{
			int j; // 349
			{
				uint8* pRead; // 351
				size_t nSize; // 352
				CUtlMemory<unsigned char, int>::operator[](
						int i);  // 588
				CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::operator[](
						int i);  // 351
				CUtlMemory<int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::operator[](
						int i);  // 351
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 355
			}
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Count(); // 349
		}
		CUtlMemory<unsigned char, int>::NumAllocated(); // 782
		CUtlMemory<unsigned char, int>::Base(); // 112
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 368
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::GrowVector(
				int num);  // 1445
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::AddMultipleToTail(
					int num);  // 345
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 588
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator[](
				int i);  // 345
		CUtlMemory<unsigned char, int>::Base(); // 112
		CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::Base(); // 348
	}
	CUtlMemory<unsigned char, int>::CUtlMemory(
			unsigned char* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<unsigned char, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<unsigned char, int>::CUtlMemoryFixedGrowable_Base(
					unsigned char* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<2048, unsigned char, 1>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<2048, unsigned char>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<2048, unsigned char, 1>::Base(); // 231
	CUtlMemoryFixedGrowable<unsigned char, 2048, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<unsigned char, 2048>::CUtlVectorFixedGrowable(
				int growSize);  // 227
	CUtlMemory<int, int>::CUtlMemory(
			int* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<int, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<int, int>::CUtlMemoryFixedGrowable_Base(
					int* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<32, int, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<32, int>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<32, int, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<int, 32, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<int, 32>::CUtlVectorFixedGrowable(
				int growSize);  // 227
	CAsyncAnnotationCapture::CAsyncAnnotationCapture(); // 339
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::Count(); // 342
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<32, int, 4>::Base(); // 237
	CUtlMemory<int, int>::IsExternallyAllocated(); // 577
	CUtlMemory<int, int>::ConvertToExternalMemory(
				int* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<int, int>::Purge_FixedGrowable(
				int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<int, int>::Purge_FixedGrowable(
				int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<int, 32, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Base(); // 368
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<int, 32, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<int, 32>::~CUtlVectorFixedGrowable(); // 227
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<2048, unsigned char, 1>::Base(); // 237
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 577
	CUtlMemory<unsigned char, int>::ConvertToExternalMemory(
				unsigned char* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<unsigned char, int>::Purge_FixedGrowable(
				unsigned char* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<unsigned char, int>::Purge_FixedGrowable(
				unsigned char* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<unsigned char, 2048, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<unsigned char, int>::Base(); // 112
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::Base(); // 368
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::Purge(); // 560
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<unsigned char, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<unsigned char, 2048, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 2048, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<unsigned char, 2048>::~CUtlVectorFixedGrowable(); // 227
	CAsyncAnnotationCapture::~CAsyncAnnotationCapture(); // 360
} /* size: 660, variables: 2, inline expansions: 61 (1887 bytes) */

// <0445BB5D> tier0_perproject/stacktools_tier1.cpp:362
// variable: 1
// function call: 1
void CAsyncCallStackTracker::GetRecursiveTop(bool bRequireActive)
{
	CStackTop_AsyncManipulator* pTop; // 365
	CStackTop_AsyncManipulator::TestRecursiveMatch(
				CAsyncCallStackTracker* pTracker);  // 366
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <044580A9> tier0_perproject/stacktools_tier1.cpp:362
// variable: 1
void CAsyncCallStackTracker::GetRecursiveTop(bool bRequireActive)
{
	CStackTop_AsyncManipulator* pTop; // 365
} /* size: 0, variables: 1 */

// <04457FD4> tier0_perproject/stacktools_tier1.cpp:375
void CAsyncStackTop::CAsyncStackTop(CAsyncCallStackTracker* pAsyncTracker, AsyncStackTopResolveFlag_t resolveNow, const CCallStackMarkerBase& marker)
{
} /* size: 258 */

// <04457F2D> tier0_perproject/stacktools_tier1.cpp:427
void CAsyncStackTop::~CAsyncStackTop()
{
} /* size: 31 */

// <04457DD1> tier0_perproject/stacktools_tier1.cpp:434
// variables: 2
void CAsyncStackTop::ChangeTrackedStack(CAsyncCallStackTracker* pAsyncTracker, AsyncStackTopResolveFlag_t resolveNow)
{
	const char   __FUNCTION__; // 5927
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 444
	}
} /* size: 0, variables: 1 */

// <04457ACE> tier0_perproject/stacktools_tier1.cpp:481
// variables: 8
// function calls: 6
void CAsyncStackTop::ExposeAnnotations(CAsyncCallStackTracker* pAsyncTracker)
{
	const char   __FUNCTION__; // 5602
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 484
	}
	{
		const uint8* pReadStart; // 488
		const uint8* pReadStop; // 489
		{
			const uint8* pRead; // 494
		}
		{
			const uint8* pRead; // 516
			uint nValid; // 517
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 532
			}
			CCallStackMarker_Manual::CCallStackMarker_Manual(
						void* pMarkedAddress,
						uintp nRecursionDepth);  // 523
			CStackAnnotation_SimpleString::CStackAnnotation_SimpleString(
							const char* szString,
							const CCallStackMarkerBase& marker);  // 1514
			Construct<CStackAnnotation_SimpleString, char const*, CCallStackMarker_Manual>(CStackAnnotation_SimpleString* pMemory); // 523
		}
		CUtlMemory<unsigned char, int>::Base(); // 112
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 488
	}
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 486
} /* size: 0, variables: 1, inline expansions: 1 (7 bytes) */

// <0445BC01> tier0_perproject/stacktools_tier1.cpp:539
// variable: 1
// function calls: 2
void CAsyncStackTop::ClearExposedAnnotations()
{
	{
		int i; // 544
		Destruct<CStackAnnotation_SimpleString>(CStackAnnotation_SimpleString* pMemory); // 546
	}
	CAsyncStackTop::ClearExposedAnnotations(); // 539
} /* size: 143, inline expansions: 1 (35 bytes) */

// <04457AA4> tier0_perproject/stacktools_tier1.cpp:539
// variable: 1
void CAsyncStackTop::ClearExposedAnnotations()
{
	{
		int i; // 544
	}
} /* size: 0 */

// <0445795E> tier0_perproject/stacktools_tier1.cpp:556
// function calls: 2
void CAsyncStackResume::CAsyncStackResume(CAsyncCallStackTracker* pAsyncTracker, const CCallStackMarkerBase& marker)
{
	CAsyncStackTop::CAsyncStackTop(
			CAsyncCallStackTracker* pAsyncTracker,
			AsyncStackTopResolveFlag_t resolveNow,
			const CCallStackMarkerBase& marker);  // 557
	CDeferredCallStackMarkerProxy::CDeferredCallStackMarkerProxy(); // 557
} /* size: 461, inline expansions: 2 (309 bytes) */

// <04457927> tier0_perproject/stacktools_tier1.cpp:556
void CAsyncStackResume::CAsyncStackResume(CAsyncCallStackTracker* pAsyncTracker, const CCallStackMarkerBase& marker)
{
} /* size: 0 */

// <044577E9> tier0_perproject/stacktools_tier1.cpp:575
// function calls: 3
void CAsyncStackResume::CAsyncStackResume(CAsyncCallStackTracker* pAsyncTracker, CCallStackMarkerBase& marker)
{
	CAsyncStackTop::CAsyncStackTop(
			CAsyncCallStackTracker* pAsyncTracker,
			AsyncStackTopResolveFlag_t resolveNow,
			const CCallStackMarkerBase& marker);  // 576
	CDeferredCallStackMarkerProxy::CDeferredCallStackMarkerProxy(); // 576
	CDeferredCallStackMarker::CDeferredCallStackMarker(); // 576
} /* size: 0, inline expansions: 3 (0 bytes) */

// <044577B2> tier0_perproject/stacktools_tier1.cpp:575
void CAsyncStackResume::CAsyncStackResume(CAsyncCallStackTracker* pAsyncTracker, CCallStackMarkerBase& marker)
{
} /* size: 0 */

