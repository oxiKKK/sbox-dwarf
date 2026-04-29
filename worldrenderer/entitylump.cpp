
//
// worldrenderer/entitylump.cpp
//
//	referenced by: libengine2.so
//
//	functions: 20
//

// <00E76DE1> worldrenderer/entitylump.cpp:15
// function call: 1
void CEntityLump::GetName()
{
	CUtlString::Get(); // 17
} /* size: 22, inline expansions: 1 (17 bytes) */

// <00E76D7F> worldrenderer/entitylump.cpp:21
// function call: 1
void CEntityLump::GetHammerUniqueId()
{
	CUtlString::Get(); // 23
} /* size: 23, inline expansions: 1 (18 bytes) */

// <00E76D4D> worldrenderer/entitylump.cpp:27
void CEntityLump::GetFlags()
{
} /* size: 0 */

// <00E76CEB> worldrenderer/entitylump.cpp:32
// function call: 1
void CEntityLump::GetManifestName()
{
	CUtlString::Get(); // 34
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00E76C89> worldrenderer/entitylump.cpp:37
// function call: 1
void CEntityLump::GetNumEntities()
{
	CUtlVectorBase<const CEntityKeyValues::Count(); // 39
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00E76BE5> worldrenderer/entitylump.cpp:42
// function calls: 2
void CEntityLump::GetEntityKeyValues(int nEntity)
{
	CUtlMemory<const CEntityKeyValues::operator[](
			int i);  // 595
	CUtlVectorBase<const CEntityKeyValues::operator[](
			int i);  // 44
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00E76BB3> worldrenderer/entitylump.cpp:47
void CEntityLump::GetEntityKeyValues()
{
} /* size: 9 */

// <00E76B51> worldrenderer/entitylump.cpp:52
// function call: 1
void CEntityLump::GetNumChildLumps()
{
	Count(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoFo this); // 54
} /* size: 8, inline expansions: 1 (0 bytes) */

// <00E769DA> worldrenderer/entitylump.cpp:57
// function calls: 6
void CEntityLump::GetChildLump(int i)
{
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoFo this,
			int i);  // 59
	CWeakHandle<InfoForResourceTypeCEntityLump>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCEntityLump>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCEntityLump>::operator CWeakHandle<InfoForResourceTypeCEntityLump>(); // 59
} /* size: 22, inline expansions: 6 (23 bytes) */

// <00E75465> worldrenderer/entitylump.cpp:62
// variables: 19
// function calls: 89
void CEntityLump::CEntityLump(const PermEntityLumpData_t* pPermEntityData)
{
	{
		int nChildLumps; // 72
		int nEntities; // 80
		{
			int c; // 74
		}
		{
			int e; // 87
			{
				const void* pBufferData; // 89
				int nBufferSize; // 90
				CUtlBuffer entityBuf; // 91
				CEntityKeyValues* pKeyValues; // 94
				CEntityKeyValuesModifyScope modify; // 96
			}
		}
	}
	CUtlString::CUtlString(); // 62
	CUtlString::CUtlString(); // 62
	CUtlString::CUtlString(); // 62
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this); // 530
	CUtlVectorBase(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResourceT this); // 62
	CUtlMemory<const CEntityKeyValues::ValidateGrowSize(); // 475
	CUtlMemory<const CEntityKeyValues::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<const CEntityKeyValues::ResetDbgInfo(); // 530
	CUtlVectorBase<const CEntityKeyValues::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<const CEntityKeyValues::CUtlVector(); // 62
	{
		int nChildLumps; // 72
		int nEntities; // 80
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 67
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 68
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 70
		Count(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoFo this); // 72
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::NumAllocated(); // 782
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::IsGrowable(); // 823
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::IsExternallyAllocated(); // 861
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::Grow(
			int num);  // 806
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::Base(); // 112
		Base(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this); // 368
		ResetDbgInfo(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this); // 824
		GrowMemory(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this,
				int num);  // 784
		GrowVector(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this,
				int num);  // 1445
		{
			int i; // 1451
			CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this,
				int i);  // 1453
			CStrongHandle<InfoForResourceTypeCEntityLump>::CStrongHandle(); // 217
			CStrongHandleCopyable<InfoForResourceTypeCEntityLump>::CStrongHandleCopyable(); // 1479
			Construct<CStrongHandleCopyable<InfoForResourceTypeCEntityLump> >(CStrongHandleCopyable<InfoForResourceTypeCEntityLump>* pMemory); // 1453
		}
		InsertMultipleBefore(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this,
					int elem,
					int num);  // 1437
		InsertMultipleBefore(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this,
					int elem,
					int num);  // 1294
		AddMultipleToTail(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this,
					int num);  // 73
		CUtlVectorBase<EntityKeyValueData_t, CUtlMemory<EntityKeyValueData_t, int> >::Count(); // 80
		CUtlMemory<const CEntityKeyValues::NumAllocated(); // 782
		CUtlMemory<const CEntityKeyValues::IsGrowable(); // 823
		CUtlMemory<const CEntityKeyValues::IsExternallyAllocated(); // 859
		CUtlMemory<const CEntityKeyValues::IsExternallyAllocated(); // 861
		CUtlMemory<const CEntityKeyValues::Grow(
			int num);  // 806
		CUtlMemory<const CEntityKeyValues::Base(); // 112
		CUtlVectorBase<const CEntityKeyValues::Base(); // 368
		CUtlVectorBase<const CEntityKeyValues::ResetDbgInfo(); // 824
		CUtlVectorBase<const CEntityKeyValues::GrowMemory(
				int num);  // 784
		CUtlVectorBase<const CEntityKeyValues::GrowVector(
				int num);  // 1445
		CUtlVectorBase<const CEntityKeyValues::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<const CEntityKeyValues::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<const CEntityKeyValues::AddMultipleToTail(
					int num);  // 81
		OverrideAllocator(CUtlScratchMemoryPool* pMemoryPool); // 84
		{
			int e; // 87
			{
				const void* pBufferData; // 89
				int nBufferSize; // 90
				CUtlBuffer entityBuf; // 91
				CEntityKeyValues* pKeyValues; // 94
				CEntityKeyValuesModifyScope modify; // 96
				CUtlMemory<EntityKeyValueData_t, int>::operator[](
						int i);  // 595
				CUtlVectorBase<EntityKeyValueData_t, CUtlMemory<EntityKeyValueData_t, int> >::operator[](
						int i);  // 89
				CUtlMemory<unsigned char, int>::Base(); // 102
				CUtlBinaryBlock::Get(); // 89
				CUtlBinaryBlock::Length(); // 90
				CUtlVectorBase<EntityKeyValueData_t, CUtlMemory<EntityKeyValueData_t, int> >::operator[](
						int i);  // 90
				CUtlMemory<const CEntityKeyValues::operator[](
						int i);  // 588
				CUtlVectorBase<const CEntityKeyValues::operator[](
						int i);  // 95
				CEntityKeyValuesModifyScope::CEntityKeyValuesModifyScope(
								CEntityKeyValues* pKeyValues);  // 96
				CEntityKeyValues::AddRef(); // 103
				CEntityKeyValuesModifyScope::~CEntityKeyValuesModifyScope(); // 104
				ValidateAlignment<unsigned char>(void); // 508
				CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
				CUtlMemory<unsigned char, int>::Purge(); // 903
				CUtlMemory<unsigned char, int>::Purge(); // 510
				CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
				CUtlBuffer::~CUtlBuffer(); // 104
			}
		}
		OverrideAllocator(CUtlScratchMemoryPool* pMemoryPool); // 106
		{
			int c; // 74
			CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoFo this,
					int i);  // 76
			CWeakHandle<InfoForResourceTypeCEntityLump>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
			CStrongHandle<InfoForResourceTypeCEntityLump>::GetHandle(); // 76
			CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this,
					int i);  // 76
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<int, 4>::operator++(); // 570
			CStrongHandle<InfoForResourceTypeCEntityLump>::Init(
				ResourceHandleTyped_t hResource);  // 673
			CStrongHandle<InfoForResourceTypeCEntityLump>::operator=(
					const CWeakHandle<InfoForResourceTypeCEntityLump>& src);  // 239
			CStrongHandleCopyable<InfoForResourceTypeCEntityLump>::operator=(
					const CWeakHandle<InfoForResourceTypeCEntityLump>& src);  // 76
		}
	}
} /* size: 1373, inline expansions: 13 (125 bytes) */

// <00E753C8> worldrenderer/entitylump.cpp:62
// variables: 9
void CEntityLump::CEntityLump(const PermEntityLumpData_t* pPermEntityData)
{
	{
		int nChildLumps; // 72
		int nEntities; // 80
		{
			int c; // 74
		}
		{
			int e; // 87
			{
				const void* pBufferData; // 89
				int nBufferSize; // 90
				CUtlBuffer entityBuf; // 91
				CEntityKeyValues* pKeyValues; // 94
				CEntityKeyValuesModifyScope modify; // 96
			}
		}
	}
} /* size: 0 */

// <00E74C90> worldrenderer/entitylump.cpp:113
// variables: 5
// function calls: 33
void CEntityLump::~CEntityLump()
{
	{
		int nEntities; // 115
		{
			int e; // 116
		}
	}
	{
		int nEntities; // 115
		CUtlVectorBase<const CEntityKeyValues::Count(); // 115
		{
			int e; // 116
			CUtlMemory<const CEntityKeyValues::operator[](
					int i);  // 588
			CUtlVectorBase<const CEntityKeyValues::operator[](
					int i);  // 118
			CEntityKeyValues::Release(); // 314
			CEntityKeyValues::Release(); // 118
		}
	}
	CUtlVectorBase<const CEntityKeyValues::RemoveAll(); // 1798
	CUtlMemory<const CEntityKeyValues::IsExternallyAllocated(); // 905
	CUtlMemory<const CEntityKeyValues::Purge(); // 903
	CUtlMemory<const CEntityKeyValues::Purge(); // 1799
	CUtlVectorBase<const CEntityKeyValues::Purge(); // 560
	ValidateAlignment<const CEntityKeyValues*>(void); // 508
	CUtlMemory<const CEntityKeyValues::Purge(); // 510
	CUtlMemory<const CEntityKeyValues::~CUtlMemory(); // 562
	CUtlVectorBase<const CEntityKeyValues::~CUtlVectorBase(); // 410
	CUtlVector<const CEntityKeyValues::~CUtlVector(); // 120
	{
		int i; // 1721
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCEntityLump>::~CStrongHandle(); // 211
		CStrongHandleCopyable<InfoForResourceTypeCEntityLump>::~CStrongHandleCopyable(); // 1526
		Destruct<CStrongHandleCopyable<InfoForResourceTypeCEntityLump> >(CStrongHandleCopyable<InfoForResourceTypeCEntityLump>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this); // 1798
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::Purge(); // 903
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this); // 560
	ValidateAlignment<CStrongHandleCopyable<InfoForResourceTypeCEntityLump> >(void); // 508
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::Purge(); // 510
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this); // 410
	~CUtlVector(const CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResourceT this); // 120
	CUtlString::~CUtlString(); // 120
	CUtlString::~CUtlString(); // 120
	CUtlString::~CUtlString(); // 120
} /* size: 345, inline expansions: 23 (607 bytes) */

// <00E74C5A> worldrenderer/entitylump.cpp:113
// variables: 2
void CEntityLump::~CEntityLump()
{
	{
		int nEntities; // 115
		{
			int e; // 116
		}
	}
} /* size: 0 */

// <00E7C427> worldrenderer/entitylump.cpp:122
// variables: 2
// function calls: 29
void CEntityMgr::AllocateTypesafe(PermEntityLumpData_t* pDataFromDisk, IKV3ResourceAllocatorUtils* pUtils)
{
	CEntityLump* pLump; // 124
	CUtlMemory<EntityKeyValueData_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<EntityKeyValueData_t, int>::Purge(); // 903
	CUtlMemory<EntityKeyValueData_t, int>::Purge(); // 1799
	CUtlVectorBase<EntityKeyValueData_t, CUtlMemory<EntityKeyValueData_t, int> >::Purge(); // 560
	ValidateAlignment<EntityKeyValueData_t>(void); // 508
	CUtlMemory<EntityKeyValueData_t, int>::Purge(); // 510
	CUtlMemory<EntityKeyValueData_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<EntityKeyValueData_t, CUtlMemory<EntityKeyValueData_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<EntityKeyValueData_t, CUtlMemory<EntityKeyValueData_t, int> >::~CUtlVector(); // 57
	{
		int i; // 1721
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCEntityLump>::~CStrongHandle(); // 211
		CStrongHandleCopyable<InfoForResourceTypeCEntityLump>::~CStrongHandleCopyable(); // 1526
		Destruct<CStrongHandleCopyable<InfoForResourceTypeCEntityLump> >(CStrongHandleCopyable<InfoForResourceTypeCEntityLump>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this); // 1798
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::Purge(); // 903
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this); // 560
	ValidateAlignment<CStrongHandleCopyable<InfoForResourceTypeCEntityLump> >(void); // 508
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::Purge(); // 510
	CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this); // 410
	~CUtlVector(const CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResourceT this); // 57
	CUtlString::~CUtlString(); // 57
	CUtlString::~CUtlString(); // 57
	CUtlString::~CUtlString(); // 57
	PermEntityLumpData_t::~PermEntityLumpData_t(); // 125
	CEntityMgr::AllocateTypesafe(
			PermEntityLumpData_t* pDataFromDisk,
			IKV3ResourceAllocatorUtils* pUtils);  // 122
} /* size: 261, variables: 1, inline expansions: 24 (970 bytes) */

// <00E74BB5> worldrenderer/entitylump.cpp:122
// variable: 1
void CEntityMgr::AllocateTypesafe(PermEntityLumpData_t* pDataFromDisk, IKV3ResourceAllocatorUtils* pUtils)
{
	CEntityLump* pLump; // 124
} /* size: 0, variables: 1 */

// <00E7BEA5> worldrenderer/entitylump.cpp:129
// variable: 1
// function call: 1
void CEntityMgr::DeallocateTypesafe(CEntityLump* pData, IKV3ResourceDeallocatorUtils* pUtils)
{
	CEntityLump* pLump; // 131
	CEntityMgr::DeallocateTypesafe(
				CEntityLump* pData,
				IKV3ResourceDeallocatorUtils* pUtils);  // 129
} /* size: 49, variables: 1, inline expansions: 1 (28 bytes) */

// <00E74B78> worldrenderer/entitylump.cpp:129
// variable: 1
void CEntityMgr::DeallocateTypesafe(CEntityLump* pData, IKV3ResourceDeallocatorUtils* pUtils)
{
	CEntityLump* pLump; // 131
} /* size: 0, variables: 1 */

// <00E74B4A> worldrenderer/entitylump.cpp:135
void CEntityMgr::WantsAsyncProcessData()
{
} /* size: 10 */

// <00E7474B> worldrenderer/entitylump.cpp:140
// variable: 1
// function calls: 14
void CEntityMgr::AsyncProcessData(ResourceHandle_t hResource, const ResourceFileHeader_t* pHeader)
{
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::get_deleter(); // 374
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::release(); // 497
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::release(); // 374
	default_delete<IAsyncProcessedDataResult>::default_delete<CKV3ResourceBlockHelper>(
						const default_delete<CKV3ResourceBlockHelper>  &);  // 104
	_Head_base<1, std::default_delete<IAsyncProcessedDataResult>, true>::_Head_base<std::default_delete<CKV3ResourceBlockHelper> >(
									default_delete<CKV3ResourceBlockHelper>& __h);  // 571
	_Tuple_impl<1, std::default_delete<IAsyncProcessedDataResult> >::_Tuple_impl<std::default_delete<CKV3ResourceBlockHelper> >(
									default_delete<CKV3ResourceBlockHelper>& __head);  // 315
	_Head_base<0, IAsyncProcessedDataResult::_Head_base<IAsyncProcessedDataResult*&>(
						IAsyncProcessedDataResult *& __h);  // 315
	_Tuple_impl<0, IAsyncProcessedDataResult::_Tuple_impl<IAsyncProcessedDataResult*&, std::default_delete<CKV3ResourceBlockHelper> >(
												IAsyncProcessedDataResult *& __head);  // 985
	tuple<IAsyncProcessedDataResult::tuple<IAsyncProcessedDataResult*&, std::default_delete<CKV3ResourceBlockHelper> >(); // 174
	__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::__uniq_ptr_impl<std::default_delete<CKV3ResourceBlockHelper> >(
									pointer __p,
									default_delete<CKV3ResourceBlockHelper>& __d);  // 234
	__uniq_ptr_data<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult>, true, true>::__uniq_ptr_data<std::default_delete<CKV3ResourceBlockHelper> >(
									pointer,
									default_delete<CKV3ResourceBlockHelper> &);  // 374
	unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >(
												unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >& __u);  // 148
	{
		CKV3ResourceBlockHelper *& __ptr; // 396
		__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 396
	}
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::~unique_ptr(); // 148
} /* size: 145, inline expansions: 13 (68 bytes) */

// <00E72FD0> worldrenderer/entitylump.cpp:156
// variables: 7
// function calls: 99
void CEntityMgr::AllocateResource(ResourceHandle_t hResource, ResourceId_t nId, const ResourceFileHeader_t* pHeader, IRD_RegisterResourceDataUtils* pUtils)
{
	{
		CKV3ResourceBlockHelper* pHelper; // 167
		PermEntityLumpData_t* pPermLump; // 177
		CEntityLump* pLump; // 185
		__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 472
		unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::get(); // 465
		unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::operator->(); // 55
		CKV3ResourceBlockHelper::GetKV3(); // 177
		IKV3TransferInterface_ResourceLoad::IKV3TransferInterface_ResourceLoad(); // 19
		ResourceId_t::ResourceId_t(); // 19
		CKV3Transfer_ResourceLoadInterface::CKV3Transfer_ResourceLoadInterface(
							IRD_RegisterResourceDataUtils* pDataUtils,
							ResourceHandle_t hOriginatingResource,
							ResourceId_t nOriginatingResourceId);  // 26
		CKV3TransferContextBase::AddInterface<CKV3Transfer_ResourceLoadInterface>(
								CKV3Transfer_ResourceLoadInterface* pInterface);  // 27
		IKV3TransferInterface_UtlSymbolLarge::IKV3TransferInterface_UtlSymbolLarge(); // 48
		CKV3Transfer_UtlSymbolLargeInterface<CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> >::CKV3Transfer_UtlSymbolLargeInterface(
							CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* pSymbolTable);  // 30
		{
			CResourceNameGetter name; // 41
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 184
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 180
			ResourceGetName(ResourceHandle_t hResource,
					CResourceName* pTarget);  // 196
			CResourceNameGetter::CResourceNameGetter(
						ResourceHandle_t hResource);  // 41
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 89
			CKV3TransferContextBase::GetErrorMessage(); // 42
			CResourceName::Get(); // 42
			CUtlMemory<EntityKeyValueData_t, int>::IsExternallyAllocated(); // 905
			CUtlMemory<EntityKeyValueData_t, int>::Purge(); // 903
			CUtlMemory<EntityKeyValueData_t, int>::Purge(); // 1799
			CUtlMemory<EntityKeyValueData_t, int>::Base(); // 112
			CUtlVectorBase<EntityKeyValueData_t, CUtlMemory<EntityKeyValueData_t, int> >::Base(); // 368
			CUtlVectorBase<EntityKeyValueData_t, CUtlMemory<EntityKeyValueData_t, int> >::ResetDbgInfo(); // 1800
			CUtlVectorBase<EntityKeyValueData_t, CUtlMemory<EntityKeyValueData_t, int> >::Purge(); // 560
			ValidateAlignment<EntityKeyValueData_t>(void); // 508
			CUtlMemory<EntityKeyValueData_t, int>::IsExternallyAllocated(); // 905
			CUtlMemory<EntityKeyValueData_t, int>::Purge(); // 510
			CUtlMemory<EntityKeyValueData_t, int>::~CUtlMemory(); // 562
			CUtlVectorBase<EntityKeyValueData_t, CUtlMemory<EntityKeyValueData_t, int> >::~CUtlVectorBase(); // 410
			CUtlVector<EntityKeyValueData_t, CUtlMemory<EntityKeyValueData_t, int> >::~CUtlVector(); // 57
			{
				int i; // 1721
				CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::operator[](
						int i);  // 602
				Element(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this,
					int i);  // 1723
				CStrongHandle<InfoForResourceTypeCEntityLump>::~CStrongHandle(); // 211
				CStrongHandleCopyable<InfoForResourceTypeCEntityLump>::~CStrongHandleCopyable(); // 1526
				Destruct<CStrongHandleCopyable<InfoForResourceTypeCEntityLump> >(CStrongHandleCopyable<InfoForResourceTypeCEntityLump>* pMemory); // 1723
			}
			RemoveAll(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this); // 1798
			CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::Purge(); // 903
			CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::Purge(); // 1799
			CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::Base(); // 112
			Base(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this); // 368
			ResetDbgInfo(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this); // 1800
			Purge(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this); // 560
			ValidateAlignment<CStrongHandleCopyable<InfoForResourceTypeCEntityLump> >(void); // 508
			CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::Purge(); // 510
			CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::~CUtlMemory(); // 562
			~CUtlVectorBase(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this); // 410
			~CUtlVector(const CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResourceT this); // 57
			CUtlString::~CUtlString(); // 57
			CUtlString::~CUtlString(); // 57
			CUtlString::~CUtlString(); // 57
			PermEntityLumpData_t::~PermEntityLumpData_t(); // 45
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 47
		}
		LoadKV3TransferResourceClass<PermEntityLumpData_t>(ResourceHandle_t hResource,
									ResourceId_t nId,
									const KeyValues3* pKV3,
									IRD_RegisterResourceDataUtils* pDataUtils,
									CUtlSymbolTableLarge* pOptionalSymbolTable);  // 177
		CUtlMemory<EntityKeyValueData_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<EntityKeyValueData_t, int>::Purge(); // 903
		CUtlMemory<EntityKeyValueData_t, int>::Purge(); // 1799
		CUtlVectorBase<EntityKeyValueData_t, CUtlMemory<EntityKeyValueData_t, int> >::Purge(); // 560
		ValidateAlignment<EntityKeyValueData_t>(void); // 508
		CUtlMemory<EntityKeyValueData_t, int>::Purge(); // 510
		CUtlMemory<EntityKeyValueData_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<EntityKeyValueData_t, CUtlMemory<EntityKeyValueData_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<EntityKeyValueData_t, CUtlMemory<EntityKeyValueData_t, int> >::~CUtlVector(); // 57
		{
			int i; // 1721
			CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this,
				int i);  // 1723
			CStrongHandle<InfoForResourceTypeCEntityLump>::~CStrongHandle(); // 211
			CStrongHandleCopyable<InfoForResourceTypeCEntityLump>::~CStrongHandleCopyable(); // 1526
			Destruct<CStrongHandleCopyable<InfoForResourceTypeCEntityLump> >(CStrongHandleCopyable<InfoForResourceTypeCEntityLump>* pMemory); // 1723
		}
		RemoveAll(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this); // 1798
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::Purge(); // 903
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::Purge(); // 1799
		Purge(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this); // 560
		ValidateAlignment<CStrongHandleCopyable<InfoForResourceTypeCEntityLump> >(void); // 508
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::Purge(); // 510
		CUtlMemory<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, int>::~CUtlMemory(); // 562
		~CUtlVectorBase(const CUtlVectorBase<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResou this); // 410
		~CUtlVector(const CUtlVector<CStrongHandleCopyable<InfoForResourceTypeCEntityLump>, CUtlMemory<CStrongHandleCopyable<InfoForResourceT this); // 57
		CUtlString::~CUtlString(); // 57
		CUtlString::~CUtlString(); // 57
		CUtlString::~CUtlString(); // 57
		PermEntityLumpData_t::~PermEntityLumpData_t(); // 186
	}
	{
		CResourceNameGetter resourceName; // 192
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 196
		CResourceNameGetter::CResourceNameGetter(
					ResourceHandle_t hResource);  // 192
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 197
		CResourceName::Get(); // 193
	}
} /* size: 1314 */

