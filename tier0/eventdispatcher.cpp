
//
// tier0/eventdispatcher.cpp
//
//	referenced by: libtier0.so
//
//	functions: 9
//

// <0010FF81> tier0/eventdispatcher.cpp:13
// function call: 1
void CEventDispatcher_Base::CEventDispatcher_Base()
{
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 14
} /* size: 28, inline expansions: 1 (15 bytes) */

// <0010FF65> tier0/eventdispatcher.cpp:13
void CEventDispatcher_Base::CEventDispatcher_Base()
{
} /* size: 0 */

// <0010FEAE> tier0/eventdispatcher.cpp:19
// function calls: 2
void CEventDispatcher_Base::IterateListeners_Start(DelegateIterator_Base_t& iterationStruct, bool bForward)
{
	IsValidIndex(const CUtlVectorBase<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInf this,
			int i);  // 37
	Count(const CUtlVectorBase<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInf this); // 34
} /* size: 64, inline expansions: 2 (13 bytes) */

// <0010FCAC> tier0/eventdispatcher.cpp:46
// variables: 2
// function calls: 8
void CEventDispatcher_Base::IterateListener(DelegateIterator_Base_t& iterationStruct)
{
	const EventListenerInfo_t* pRetVal; // 53
	IsValidIndex(const CUtlVectorBase<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInf this,
			int i);  // 48
	CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int>::operator[](
			int i);  // 609
	Element(const CUtlVectorBase<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInf this,
		int i);  // 53
	{
		int i; // 1531
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::Count(); // 1531
		CUtlMemory<int, int>::operator[](
				int i);  // 609
		CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::Element(
			int i);  // 1533
	}
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::Find(
		const int& src);  // 66
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::IsValidIndex(
			int i);  // 66
} /* size: 124, variables: 1, inline expansions: 5 (81 bytes) */

// <0010FC1D> tier0/eventdispatcher.cpp:71
// variables: 2
void CEventDispatcher_Base::IterateListeners_End(DelegateIterator_Base_t& iterationStruct)
{
	const char   __FUNCTION__; // 40414
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 73
	}
} /* size: 0, variables: 1 */

// <0010FAE8> tier0/eventdispatcher.cpp:77
// variables: 3
// function calls: 3
void CEventDispatcher_Base::FindInsertionPoint(const CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> listeners, int nPriority)
{
	int start; // 80
	int end; // 80
	{
		int mid; // 83
		CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInf this,
				int i);  // 84
	}
	Count(const CUtlVectorBase<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInf this); // 80
} /* size: 77, variables: 2, inline expansions: 1 (0 bytes) */

// <0010F087> tier0/eventdispatcher.cpp:96
// variables: 7
// function calls: 40
void CEventDispatcher_Base::RegisterEventListener_Base(const CUtlAbstractDelegate& delegate, unsigned int nDelegateParamCount, bool bDelegateReturnsVoid, CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> >& listeners, int nPriority, const char* pszName)
{
	const char   __FUNCTION__; // 40435
	int nInsertionIndex; // 110
	int j; // 111
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 99
	}
	{
		DelegateIterator_Base_t* pActiveIterator; // 119
		{
			int nSkipListIter; // 130
			{
				int& skipVal; // 133
				CUtlMemory<int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::operator[](
						int i);  // 133
			}
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::Count(); // 130
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::InsertAfter(
					int elem,
					const int& src);  // 143
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::AddToHead(
					const int& src);  // 147
		}
	}
	CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int>::NumAllocated(); // 782
	CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, i this); // 368
	ResetDbgInfo(const CUtlVectorBase<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, i this); // 824
	CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int>::IsGrowable(); // 823
	CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int>::Grow(
		int num);  // 806
	GrowMemory(const CUtlVectorBase<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, i this,
			int num);  // 784
	GrowVector(const CUtlVectorBase<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, i this,
			int num);  // 1171
	CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, i this,
		int i);  // 1097
	CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, i this,
		int i);  // 1097
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1097
	ShiftElementsRight(const CUtlVectorBase<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, i this,
				int elem,
				int num);  // 1172
	CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, i this,
		int i);  // 1173
	CUtlAbstractDelegate::CUtlAbstractDelegate(); // 57
	EventListenerInfo_t::EventListenerInfo_t(); // 1479
	Construct<CEventDispatcher_Base::EventListenerInfo_t>(EventListenerInfo_t* pMemory); // 1173
	InsertBefore(const CUtlVectorBase<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, i this,
			int elem);  // 111
	CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, i this,
			int i);  // 112
	CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, i this,
			int i);  // 113
	CUtlAbstractDelegate::SetMementoFrom(
			const CUtlAbstractDelegate& right);  // 668
	CUtlAbstractDelegate::operator=(
			const CUtlAbstractDelegate& right);  // 113
	CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, i this,
			int i);  // 114
	CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, i this,
			int i);  // 115
	CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, i this,
			int i);  // 116
} /* size: 0, variables: 3, inline expansions: 35 (1315 bytes) */

// <0010EB4E> tier0/eventdispatcher.cpp:157
// variables: 5
// function calls: 20
void CEventDispatcher_Base::UnregisterEventListener_Base(const CUtlAbstractDelegate& delegate, CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> >& listeners)
{
	int nCount; // 159
	{
		int i; // 160
		{
			DelegateIterator_Base_t* pActiveIterator; // 167
			{
				int nSkipListIter; // 179
				{
					int& skipVal; // 181
					CUtlMemory<int, int>::operator[](
							int i);  // 588
					CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::operator[](
							int i);  // 181
					CUtlMemory<int, int>::operator[](
							int i);  // 602
					CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::Element(
						int i);  // 1114
					memmove(void* __dest,
						const void* __src,
						size_t __len);  // 115
					V_memmove(void* dest,
							const void* src,
							size_t count);  // 1114
					CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::ShiftElementsLeft(
								int elem,
								int num);  // 1608
					CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::Remove(
						int elem);  // 187
				}
				CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 4, int> >::Count(); // 179
			}
		}
		CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, i this,
				int i);  // 162
		CUtlAbstractDelegate::IsEqual(
			const CUtlAbstractDelegate& x);  // 628
		CUtlAbstractDelegate::IsEqual(
			const CUtlAbstractDelegate& x);  // 162
		CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, i this,
			int i);  // 1114
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 115
		V_memmove(void* dest,
				const void* src,
				size_t count);  // 1114
		ShiftElementsLeft(const CUtlVectorBase<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, i this,
					int elem,
					int num);  // 1608
		Remove(const CUtlVectorBase<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, i this,
			int elem);  // 164
	}
	Count(const CUtlVectorBase<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInf this); // 159
} /* size: 432, variables: 1, inline expansions: 1 (3 bytes) */

// <0010E63D> tier0/eventdispatcher.cpp:207
// variables: 2
// function calls: 20
void CEventDispatcher_Base::GetListenerNames_Base(const CUtlVector<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int> listeners, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* pResult)
{
	int nCount; // 209
	{
		int i; // 210
		CUtlMemory<CUtlString, int>::Base(); // 112
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
		CUtlMemory<CUtlString, int>::IsGrowable(); // 823
		CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 861
		CUtlMemory<CUtlString, int>::Grow(
			int num);  // 806
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
				int num);  // 1249
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 1514
		Construct<CUtlString, CUtlString>(CUtlString* pMemory); // 1252
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1252
		CUtlMemory<CUtlString, int>::NumAllocated(); // 1247
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
				CUtlString& src);  // 212
		CUtlString::~CUtlString(); // 212
		CUtlMemory<CEventDispatcher_Base::EventListenerInfo_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInf this,
				int i);  // 212
		CUtlString::CUtlString(
				const char* pString);  // 212
	}
	Count(const CUtlVectorBase<CEventDispatcher_Base::EventListenerInfo_t, CUtlMemory<CEventDispatcher_Base::EventListenerInf this); // 209
} /* size: 451, variables: 1, inline expansions: 1 (17 bytes) */

