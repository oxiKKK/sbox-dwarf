
//
// scenesystem/viewid.cpp
//
//	referenced by: libengine2.so
//
//	functions: 13
//

// <0389B6A1> ../scenesystem/viewid.cpp:84
// function call: 1
void CViewIdInternal::CViewIdInternal()
{
	CRC64_Init(CRC64_t* pCRC); // 86
} /* size: 12, inline expansions: 1 (7 bytes) */

// <0389B685> ../scenesystem/viewid.cpp:84
void CViewIdInternal::CViewIdInternal()
{
} /* size: 0 */

// <0389B650> ../scenesystem/viewid.cpp:89
void CViewIdInternal::CViewIdInternal(const CViewIdInternal& other)
{
} /* size: 11 */

// <0389B59C> ../scenesystem/viewid.cpp:94
// variables: 2
// function call: 1
void CViewIdInternal::CViewIdInternal(const CViewId& viewId)
{
	{
		CRC64_t nFinalCRC; // 96
	}
	{
		CRC64_t nFinalCRC; // 96
		CRC64_Final(CRC64_t* pCRC); // 97
	}
} /* size: 14 */

// <0389B566> ../scenesystem/viewid.cpp:94
// variable: 1
void CViewIdInternal::CViewIdInternal(const CViewId& viewId)
{
	{
		CRC64_t nFinalCRC; // 96
	}
} /* size: 0 */

// <0389BA5D> ../scenesystem/viewid.cpp:101
// variable: 1
// function calls: 2
void CViewIdInternal::AppendViewProducer(uint nProducerID)
{
	CViewIdInternal newViewID; // 103
	CViewIdInternal::CViewIdInternal(
			const CViewIdInternal& other);  // 103
	CViewIdInternal::AppendInt(
			uint nValue);  // 104
} /* size: 81, variables: 1, inline expansions: 2 (23 bytes) */

// <0389B532> ../scenesystem/viewid.cpp:101
// variable: 1
void CViewIdInternal::AppendViewProducer(uint nProducerID)
{
	CViewIdInternal newViewID; // 103
} /* size: 0, variables: 1 */

// <0389BB3D> ../scenesystem/viewid.cpp:108
// variable: 1
// function call: 1
void CViewIdInternal::GetViewIdHash()
{
	CRC64_t nFinalCRC; // 110
	CRC64_Final(CRC64_t* pCRC); // 111
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <0389B50A> ../scenesystem/viewid.cpp:108
// variable: 1
void CViewIdInternal::GetViewIdHash()
{
	CRC64_t nFinalCRC; // 110
} /* size: 0, variables: 1 */

// <0389B46B> ../scenesystem/viewid.cpp:115
// variable: 1
// function calls: 2
void CViewIdInternal::GetViewIdStruct()
{
	CViewId ret; // 117
	CViewId::CViewId(); // 117
	CRC64_Final(CRC64_t* pCRC); // 119
} /* size: 11, variables: 1, inline expansions: 2 (6 bytes) */

// <0389BB98> ../scenesystem/viewid.cpp:123
void CViewIdInternal::AppendInt(uint nValue)
{
} /* size: 0 */

// <0389B401> ../scenesystem/viewid.cpp:131
// variable: 1
bool CheckUnique(CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash>& hash, CViewIdInternal& viewId)
{
	UtlHashFastHandle_t nIndex; // 133
} /* size: 0, variables: 1 */

// <03899437> ../scenesystem/viewid.cpp:150
// variables: 31
// function calls: 129
bool ViewIdUnitTest(void)
{
	int nLevelsOfRecursion; // 153
	int nPortalHops; // 156
	CViewIdInternal pPrimaryPlayerViewIds; // 164
	int nViewProducerIndex; // 167
	int pPortalProducerIndices; // 168
	int pOtherProducerIndices; // 175
	{
		int p; // 169
	}
	{
		int p; // 176
	}
	{
		int h; // 182
		{
			CUtlVector<CViewIdInternal, CUtlMemory<CViewIdInternal, int> > viewIdList0; // 186
			CUtlVector<CViewIdInternal, CUtlMemory<CViewIdInternal, int> > viewIdList1; // 187
			CUtlVector<CViewIdInternal, CUtlMemory<CViewIdInternal, int> >* pCurrentViewIdList; // 188
			CUtlVector<CViewIdInternal, CUtlMemory<CViewIdInternal, int> >* pNextViewIdList; // 189
			CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash> viewIDHash; // 192
			{
				int p; // 196
				CUtlMemory<CViewIdInternal, int>::NumAllocated(); // 1196
				CUtlMemory<CViewIdInternal, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CViewIdInternal, CUtlMemory<CViewIdInternal, int> >::Element(
					int i);  // 1201
				CViewIdInternal::CViewIdInternal(
						const CViewIdInternal& other);  // 1520
				CopyConstruct<CViewIdInternal>(CViewIdInternal* pMemory,
								const CViewIdInternal& src);  // 1201
				CUtlMemory<CViewIdInternal, int>::Base(); // 112
				CUtlVectorBase<CViewIdInternal, CUtlMemory<CViewIdInternal, int> >::Base(); // 368
				CUtlVectorBase<CViewIdInternal, CUtlMemory<CViewIdInternal, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<CViewIdInternal, CUtlMemory<CViewIdInternal, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<CViewIdInternal, CUtlMemory<CViewIdInternal, int> >::AddToTail(
						const CViewIdInternal& src);  // 198
			}
			{
				int r; // 205
				{
					int nCurrent; // 207
					CUtlVector<CViewIdInternal, CUtlMemory<CViewIdInternal, int> >* pTemp; // 237
					{
						int c; // 209
						{
							CViewIdInternal currentViewId; // 211
							{
								int p; // 214
								{
									CViewIdInternal newId; // 216
									CViewIdInternal::CViewIdInternal(
											const CViewIdInternal& other);  // 103
									CViewIdInternal::AppendInt(
											uint nValue);  // 104
									CViewIdInternal::AppendViewProducer(
												uint nProducerID);  // 216
									CUtlMemory<CViewIdInternal, int>::NumAllocated(); // 1196
									CUtlMemory<CViewIdInternal, int>::operator[](
											int i);  // 602
									CUtlVectorBase<CViewIdInternal, CUtlMemory<CViewIdInternal, int> >::Element(
										int i);  // 1201
									CViewIdInternal::CViewIdInternal(
											const CViewIdInternal& other);  // 1520
									CopyConstruct<CViewIdInternal>(CViewIdInternal* pMemory,
													const CViewIdInternal& src);  // 1201
									CUtlMemory<CViewIdInternal, int>::Base(); // 112
									CUtlVectorBase<CViewIdInternal, CUtlMemory<CViewIdInternal, int> >::Base(); // 368
									CUtlVectorBase<CViewIdInternal, CUtlMemory<CViewIdInternal, int> >::ResetDbgInfo(); // 824
									CUtlVectorBase<CViewIdInternal, CUtlMemory<CViewIdInternal, int> >::GrowMemory(
											int num);  // 1198
									CUtlVectorBase<CViewIdInternal, CUtlMemory<CViewIdInternal, int> >::AddToTail(
											const CViewIdInternal& src);  // 217
								}
							}
							{
								int p; // 225
								{
									CViewIdInternal newId; // 227
									CUtlMemory<CViewIdInternal, int>::Base(); // 112
									CUtlVectorBase<CViewIdInternal, CUtlMemory<CViewIdInternal, int> >::Base(); // 368
									CUtlVectorBase<CViewIdInternal, CUtlMemory<CViewIdInternal, int> >::ResetDbgInfo(); // 824
									CUtlVectorBase<CViewIdInternal, CUtlMemory<CViewIdInternal, int> >::GrowMemory(
											int num);  // 1198
									CUtlMemory<CViewIdInternal, int>::operator[](
											int i);  // 602
									CUtlVectorBase<CViewIdInternal, CUtlMemory<CViewIdInternal, int> >::Element(
										int i);  // 1201
									CViewIdInternal::CViewIdInternal(
											const CViewIdInternal& other);  // 1520
									CopyConstruct<CViewIdInternal>(CViewIdInternal* pMemory,
													const CViewIdInternal& src);  // 1201
									CUtlMemory<CViewIdInternal, int>::NumAllocated(); // 1196
									CUtlVectorBase<CViewIdInternal, CUtlMemory<CViewIdInternal, int> >::AddToTail(
											const CViewIdInternal& src);  // 228
									CViewIdInternal::CViewIdInternal(
											const CViewIdInternal& other);  // 103
									CViewIdInternal::AppendInt(
											uint nValue);  // 104
									CViewIdInternal::AppendViewProducer(
												uint nProducerID);  // 227
								}
							}
							CUtlMemory<CViewIdInternal, int>::operator[](
									int i);  // 602
							CUtlVectorBase<CViewIdInternal, CUtlMemory<CViewIdInternal, int> >::Element(
								int i);  // 211
							CViewIdInternal::CViewIdInternal(
									const CViewIdInternal& other);  // 211
						}
					}
					CUtlVectorBase<CViewIdInternal, CUtlMemory<CViewIdInternal, int> >::Count(); // 207
					CUtlVectorBase<CViewIdInternal, CUtlMemory<CViewIdInternal, int> >::RemoveAll(); // 240
				}
			}
			{
				int p; // 244
				{
					int nPortalToHop; // 246
					CViewIdInternal::CViewIdInternal(
							const CViewIdInternal& other);  // 103
					CViewIdInternal::AppendInt(
							uint nValue);  // 104
					CViewIdInternal::AppendViewProducer(
								uint nProducerID);  // 247
				}
			}
			ConstructList(const CUtlLinkedList<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int, true, long long int, this); // 454
			Grow(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int> this,
				int num);  // 193
			Init(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int> this,
				int nGrowSize,
				int nInitSize);  // 161
			CUtlFixedMemory(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int> this,
					int nGrowSize,
					int nInitAllocationCount);  // 448
			Iterator_t::Iterator_t(
					BlockHeader_t* p,
					intp i);  // 96
			InvalidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long lon this); // 448
			ResetDbgInfo(const CUtlLinkedList<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int, true, long long int, this); // 455
			CUtlLinkedList(const CUtlLinkedList<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int, true, long long int, this,
					int growSize,
					int initSize);  // 404
			CUtlFixedLinkedList<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal> >::CUtlFixedLinkedList(
						int growSize,
						int initSize);  // 614
			{
				BlockHeader_t* pbh; // 338
				{
					BlockHeader_t* pFree; // 340
				}
			}
			Purge(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int> this); // 643
			Iterator_t::Iterator_t(
					BlockHeader_t* p,
					intp i);  // 96
			InvalidIterator(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long lon this); // 648
			ResetDbgInfo(const CUtlLinkedList<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int, true, long long int, this); // 650
			Purge(const CUtlLinkedList<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int, true, long long int, this); // 633
			CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash>::Purge(); // 616
			CUtlMemory<long long int, int>::ValidateGrowSize(); // 475
			CUtlMemory<long long int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<long long int, CUtlMemory<long long int, int> >::CUtlVector(); // 614
			CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash>::CUtlHashFast(); // 192
			CUtlMemory<CViewIdInternal, int>::ValidateGrowSize(); // 475
			CUtlMemory<CViewIdInternal, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<CViewIdInternal, CUtlMemory<CViewIdInternal, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<CViewIdInternal, CUtlMemory<CViewIdInternal, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<CViewIdInternal, CUtlMemory<CViewIdInternal, int> >::CUtlVector(); // 186
			CUtlMemory<CViewIdInternal, int>::ValidateGrowSize(); // 475
			CUtlMemory<CViewIdInternal, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<CViewIdInternal, CUtlMemory<CViewIdInternal, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<CViewIdInternal, CUtlMemory<CViewIdInternal, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<CViewIdInternal, CUtlMemory<CViewIdInternal, int> >::CUtlVector(); // 187
			CUtlMemory<long long int, int>::IsGrowable(); // 823
			CUtlMemory<long long int, int>::Grow(
				int num);  // 806
			CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::GrowMemory(
					int num);  // 784
			CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::GrowVector(
					int num);  // 1445
			CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::ShiftElementsRight(
						int elem,
						int num);  // 1446
			CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1437
			CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1294
			CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::AddMultipleToTail(
						int num);  // 1319
			CUtlVectorBase<long long int, CUtlMemory<long long int, int> >::SetCount(
				int count);  // 646
			{
				int iBucket; // 647
			}
			{
				BlockHeader_t* pbh; // 338
				{
					BlockHeader_t* pFree; // 340
				}
			}
			Purge(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int> this); // 189
			Grow(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int> this,
				int num);  // 193
			Init(const CUtlFixedMemory<UtlLinkedListElem_t<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int> this,
				int nGrowSize,
				int nInitSize);  // 629
			ResetDbgInfo(const CUtlLinkedList<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int, true, long long int, this); // 630
			SetGrowSize(const CUtlLinkedList<CUtlHashFast<CViewIdInternal>::HashFastData_t_<CViewIdInternal>, long long int, true, long long int, this,
					int growSize);  // 657
			CUtlHashFast<CViewIdInternal, CUtlHashFastNoHash>::Init(
				int nBucketCount);  // 193
			CUtlMemory<CViewIdInternal, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CViewIdInternal, int>::Purge(); // 903
			CUtlMemory<CViewIdInternal, int>::Purge(); // 1799
			CUtlVectorBase<CViewIdInternal, CUtlMemory<CViewIdInternal, int> >::Purge(); // 560
			ValidateAlignment<CViewIdInternal>(void); // 508
			CUtlMemory<CViewIdInternal, int>::Purge(); // 510
			CUtlMemory<CViewIdInternal, int>::~CUtlMemory(); // 562
			CUtlVectorBase<CViewIdInternal, CUtlMemory<CViewIdInternal, int> >::~CUtlVectorBase(); // 410
			CUtlVector<CViewIdInternal, CUtlMemory<CViewIdInternal, int> >::~CUtlVector(); // 249
			CUtlMemory<CViewIdInternal, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CViewIdInternal, int>::Purge(); // 903
			CUtlMemory<CViewIdInternal, int>::Purge(); // 1799
			CUtlVectorBase<CViewIdInternal, CUtlMemory<CViewIdInternal, int> >::Purge(); // 560
			ValidateAlignment<CViewIdInternal>(void); // 508
			CUtlMemory<CViewIdInternal, int>::Purge(); // 510
			CUtlMemory<CViewIdInternal, int>::~CUtlMemory(); // 562
			CUtlVectorBase<CViewIdInternal, CUtlMemory<CViewIdInternal, int> >::~CUtlVectorBase(); // 410
			CUtlVector<CViewIdInternal, CUtlMemory<CViewIdInternal, int> >::~CUtlVector(); // 249
			CUtlMemory<CViewIdInternal, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CViewIdInternal, int>::Purge(); // 903
			CUtlMemory<CViewIdInternal, int>::Purge(); // 1799
			CUtlVectorBase<CViewIdInternal, CUtlMemory<CViewIdInternal, int> >::Purge(); // 560
			ValidateAlignment<CViewIdInternal>(void); // 508
			CUtlMemory<CViewIdInternal, int>::Purge(); // 510
			CUtlMemory<CViewIdInternal, int>::~CUtlMemory(); // 562
			CUtlVectorBase<CViewIdInternal, CUtlMemory<CViewIdInternal, int> >::~CUtlVectorBase(); // 410
			CUtlVector<CViewIdInternal, CUtlMemory<CViewIdInternal, int> >::~CUtlVector(); // 249
			CUtlMemory<CViewIdInternal, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CViewIdInternal, int>::Purge(); // 903
			CUtlMemory<CViewIdInternal, int>::Purge(); // 1799
			CUtlVectorBase<CViewIdInternal, CUtlMemory<CViewIdInternal, int> >::Purge(); // 560
			ValidateAlignment<CViewIdInternal>(void); // 508
			CUtlMemory<CViewIdInternal, int>::Purge(); // 510
			CUtlMemory<CViewIdInternal, int>::~CUtlMemory(); // 562
			CUtlVectorBase<CViewIdInternal, CUtlMemory<CViewIdInternal, int> >::~CUtlVectorBase(); // 410
			CUtlVector<CViewIdInternal, CUtlMemory<CViewIdInternal, int> >::~CUtlVector(); // 249
		}
	}
	CRC64_Init(CRC64_t* pCRC); // 86
	CViewIdInternal::CViewIdInternal(); // 164
} /* size: 0, variables: 6, inline expansions: 2 (0 bytes) */

