
//
// scenesystem/scenelayer.cpp
//
//	referenced by: libengine2.so
//
//	functions: 41
//

// <034739DC> ../scenesystem/scenelayer.cpp:29
// variable: 1
// function calls: 107
void CSceneLayer::CSceneLayer()
{
	CUtlIntrusiveList<CSceneDrawList>::CUtlIntrusiveList(); // 29
	CUtlIntrusiveList<CSceneDrawList>::CUtlIntrusiveList(); // 29
	{
		int i; // 121
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 123
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 127
	RenderTargetDesc_t::Clear(); // 116
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 115
	RenderTargetDesc_t::RenderTargetDesc_t(); // 29
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 29
	CUtlIntrusiveList<CDisplayList>::CUtlIntrusiveList(); // 29
	{
	}
	AlignedByteArrayExplicit_t<2, CFrustum, 16>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<2, CFrustum>::AlignedByteArray_t(); // 256
	CUtlMemoryFixed<CFrustum, 2>::CUtlMemoryFixed(
			int nGrowSize,
			int nInitSize);  // 527
	CUtlVectorBase<CFrustum, CUtlMemoryFixed<CFrustum, 2> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CFrustum, CUtlMemoryFixed<CFrustum, 2> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 467
	CUtlVectorFixed<CFrustum, 2>::CUtlVectorFixed(
			int growSize,
			int initCapacity);  // 29
	memset(void* __dest,
		int __ch,
		size_t __len);  // 21
	CUtlSlotAllocator<8>::Reset(); // 23
	CUtlSlotAllocator<8>::CUtlSlotAllocator(); // 32
	CStencilBitAllocator::CStencilBitAllocator(); // 29
	{
	}
	AlignedByteArrayExplicit_t<8, CRenderBatchList::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<8, CRenderBatchList::AlignedByteArray_t(); // 228
	CUtlMemory<CRenderBatchList::CUtlMemory(
			CRenderBatchList** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CRenderBatchList::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CRenderBatchList::CUtlMemoryFixedGrowable_Base(
					CRenderBatchList** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<8, CRenderBatchList::Base(); // 231
	CUtlMemoryFixedGrowable<CRenderBatchList::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CRenderBatchList::ResetDbgInfo(); // 530
	CUtlVectorBase<CRenderBatchList::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CRenderBatchList::CUtlVectorFixedGrowable(
				int growSize);  // 29
	Vector2D::Vector2D(
		vec_t X,
		vec_t Y);  // 5
	VMatrix::VMatrix(); // 5
	VMatrix::VMatrix(); // 5
	VMatrix::VMatrix(); // 5
	VMatrix::VMatrix(); // 5
	Vector4D::Vector4D(); // 5
	Vector4D::Vector4D(); // 5
	Vector::Vector(); // 5
	Vector::Vector(); // 5
	Vector::Vector(); // 5
	Vector::Vector(); // 5
	Vector2D::Vector2D(); // 5
	Vector2D::Vector2D(); // 5
	Vector2D::Vector2D(); // 5
	Vector4D::Vector4D(); // 5
	Vector2D::Vector2D(); // 5
	Vector2D::Vector2D(); // 5
	Vector2D::Vector2D(); // 5
	Vector::Vector(); // 5
	Vector::Vector(); // 5
	Vector4D::Vector4D(); // 5
	Vector4D::Vector4D(); // 5
	Vector4D::Vector4D(); // 5
	Vector4D::Vector4D(); // 5
	Vector4D::Vector4D(); // 5
	Vector4D::Vector4D(); // 5
	Vector4D::Vector4D(); // 5
	VMatrix::VMatrix(); // 5
	VMatrix::VMatrix(); // 5
	VMatrix::VMatrix(); // 5
	VMatrix::VMatrix(); // 5
	PerViewConstantBuffer_t::PerViewConstantBuffer_t(); // 29
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 29
	RenderPassHandle_t::RenderPassHandle_t(); // 469
	RenderContextCreationInfo_t::RenderContextCreationInfo_t(); // 29
	Vector::Vector(); // 89
	VPlane::VPlane(); // 29
	CUtlMemory<ISceneWorld::CUtlMemory(
			ISceneWorld** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<ISceneWorld::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<ISceneWorld::CUtlMemoryFixedGrowable_Base(
					ISceneWorld** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	{
	}
	AlignedByteArrayExplicit_t<2, ISceneWorld::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<2, ISceneWorld::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<2, ISceneWorld::Base(); // 231
	CUtlMemoryFixedGrowable<ISceneWorld::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<ISceneWorld::ResetDbgInfo(); // 530
	CUtlVectorBase<ISceneWorld::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<ISceneWorld::CUtlVectorFixedGrowable(
				int growSize);  // 29
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(); // 29
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(); // 29
	CUtlIntrusiveList<ConstantBufferDataAttributeSettingRecord_t>::CUtlIntrusiveList(); // 1170
	CUtlIntrusiveListAutoPurge<ConstantBufferDataAttributeSettingRecord_t>::CUtlIntrusiveListAutoPurge(); // 29
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 29
	CUtlMemory<ISceneView::CUtlMemory(
			ISceneView** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<ISceneView::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<ISceneView::CUtlMemoryFixedGrowable_Base(
					ISceneView** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	{
	}
	AlignedByteArrayExplicit_t<4, ISceneView::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<4, ISceneView::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<4, ISceneView::Base(); // 231
	CUtlMemoryFixedGrowable<ISceneView::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<ISceneView::ResetDbgInfo(); // 530
	CUtlVectorBase<ISceneView::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<ISceneView::CUtlVectorFixedGrowable(
				int growSize);  // 29
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 29
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 36
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 29
	CUtlLinkedList<ISceneLayer::ConstructList(); // 454
	CUtlMemory<UtlLinkedListElem_t<ISceneLayer::ValidateGrowSize(); // 475
	CUtlMemory<UtlLinkedListElem_t<ISceneLayer::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 448
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlLinkedListElem_t<ISceneLayer::InvalidIterator(); // 448
	CUtlLinkedList<ISceneLayer::ResetDbgInfo(); // 455
	CUtlLinkedList<ISceneLayer::CUtlLinkedList(
			int growSize,
			int initSize);  // 29
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 39
} /* size: 1042, inline expansions: 105 (2014 bytes) */

// <034739C3> ../scenesystem/scenelayer.cpp:29
void CSceneLayer::CSceneLayer()
{
} /* size: 0 */

// <03472978> ../scenesystem/scenelayer.cpp:49
// variables: 5
// function calls: 78
void CSceneLayer::~CSceneLayer()
{
	{
		CSceneDrawList* i; // 55
	}
	{
		CSceneDrawList* i; // 55
		{
			CSceneDrawList* pRet; // 1090
		}
		CUtlIntrusiveList<CSceneDrawList>::RemoveHead(); // 55
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 371
		CTSPool<CSceneDrawList>::PutObject(
				CSceneDrawList* pInfo);  // 1281
		{
		}
		{
		}
		CSceneDrawList::Check(); // 716
		CSceneDrawList::Check(); // 1278
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 1282
		CSceneSystem::ReturnDrawListToPool(
					CSceneDrawList* pList);  // 58
	}
	ValidateAlignment<UtlLinkedListElem_t<ISceneLayer*, short unsigned int> >(void); // 508
	CUtlMemory<UtlLinkedListElem_t<ISceneLayer::IsExternallyAllocated(); // 905
	CUtlMemory<UtlLinkedListElem_t<ISceneLayer::Purge(); // 903
	CUtlMemory<UtlLinkedListElem_t<ISceneLayer::Purge(); // 510
	CUtlMemory<UtlLinkedListElem_t<ISceneLayer::~CUtlMemory(); // 462
	CUtlLinkedList<ISceneLayer::~CUtlLinkedList(); // 60
	CUtlVectorBase<ISceneView::RemoveAll(); // 1798
	CUtlMemory<ISceneView::IsExternallyAllocated(); // 577
	CUtlMemory<ISceneView::ConvertToExternalMemory(
				ISceneView** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<ISceneView::Purge_FixedGrowable(
				ISceneView** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<ISceneView::Purge_FixedGrowable(
				ISceneView** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<4, ISceneView::Base(); // 237
	CUtlMemoryFixedGrowable<ISceneView::Purge(
		int numElements);  // 1799
	CUtlVectorBase<ISceneView::ResetDbgInfo(); // 1800
	CUtlVectorBase<ISceneView::Purge(); // 560
	ValidateAlignment<ISceneView*>(void); // 508
	CUtlMemory<ISceneView::Purge(); // 903
	CUtlMemory<ISceneView::Purge(); // 510
	CUtlMemory<ISceneView::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<ISceneView::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<ISceneView::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<ISceneView::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<ISceneView::~CUtlVectorFixedGrowable(); // 60
	{
		ConstantBufferDataAttributeSettingRecord_t* tmp; // 1018
	}
	CUtlIntrusiveList<ConstantBufferDataAttributeSettingRecord_t>::Purge(); // 1175
	CUtlIntrusiveListAutoPurge<ConstantBufferDataAttributeSettingRecord_t>::~CUtlIntrusiveListAutoPurge(); // 60
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 49
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 49
	CUtlVectorBase<ISceneWorld::RemoveAll(); // 1798
	CUtlMemory<ISceneWorld::IsExternallyAllocated(); // 577
	CUtlMemory<ISceneWorld::ConvertToExternalMemory(
				ISceneWorld** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<ISceneWorld::Purge_FixedGrowable(
				ISceneWorld** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<ISceneWorld::Purge_FixedGrowable(
				ISceneWorld** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<2, ISceneWorld::Base(); // 237
	CUtlMemoryFixedGrowable<ISceneWorld::Purge(
		int numElements);  // 1799
	CUtlVectorBase<ISceneWorld::ResetDbgInfo(); // 1800
	CUtlVectorBase<ISceneWorld::Purge(); // 560
	ValidateAlignment<ISceneWorld*>(void); // 508
	CUtlMemory<ISceneWorld::Purge(); // 903
	CUtlMemory<ISceneWorld::Purge(); // 510
	CUtlMemory<ISceneWorld::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<ISceneWorld::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<ISceneWorld::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<ISceneWorld::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<ISceneWorld::~CUtlVectorFixedGrowable(); // 60
	CUtlVectorBase<CRenderBatchList::RemoveAll(); // 1798
	CUtlMemory<CRenderBatchList::IsExternallyAllocated(); // 577
	CUtlMemory<CRenderBatchList::ConvertToExternalMemory(
				CRenderBatchList** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CRenderBatchList::Purge_FixedGrowable(
				CRenderBatchList** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CRenderBatchList::Purge_FixedGrowable(
				CRenderBatchList** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<8, CRenderBatchList::Base(); // 237
	CUtlMemoryFixedGrowable<CRenderBatchList::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CRenderBatchList::ResetDbgInfo(); // 1800
	CUtlVectorBase<CRenderBatchList::Purge(); // 560
	ValidateAlignment<CRenderBatchList*>(void); // 508
	CUtlMemory<CRenderBatchList::Purge(); // 903
	CUtlMemory<CRenderBatchList::Purge(); // 510
	CUtlMemory<CRenderBatchList::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CRenderBatchList::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CRenderBatchList::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CRenderBatchList::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CRenderBatchList::~CUtlVectorFixedGrowable(); // 60
	{
		int i; // 1721
	}
	CUtlVectorBase<CFrustum, CUtlMemoryFixed<CFrustum, 2> >::RemoveAll(); // 1798
	CUtlVectorBase<CFrustum, CUtlMemoryFixed<CFrustum, 2> >::Purge(); // 560
	ValidateAlignment<CFrustum>(void); // 258
	CUtlMemoryFixed<CFrustum, 2>::~CUtlMemoryFixed(); // 562
	CUtlVectorBase<CFrustum, CUtlMemoryFixed<CFrustum, 2> >::~CUtlVectorBase(); // 461
	CUtlVectorFixed<CFrustum, 2>::~CUtlVectorFixed(); // 60
} /* size: 0, inline expansions: 67 (2507 bytes) */

// <0347290F> ../scenesystem/scenelayer.cpp:49
void CSceneLayer::~CSceneLayer()
{
} /* size: 36 */

// <034728EA> ../scenesystem/scenelayer.cpp:49
// variable: 1
void CSceneLayer::~CSceneLayer()
{
	{
		CSceneDrawList* i; // 55
	}
} /* size: 0 */

// <03472762> ../scenesystem/scenelayer.cpp:62
// variables: 2
// function calls: 3
void CSceneLayer::SetDynamicContantBufferAttribute(CUtlStringToken nTok, void* pData, size_t nDataSize)
{
	ConstantBufferDataAttributeSettingRecord_t* pNew; // 64
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 67
	{
		ConstantBufferDataAttributeSettingRecord_t* pLastNode; // 574
	}
	AddToTail<ConstantBufferDataAttributeSettingRecord_t, ConstantBufferDataAttributeSettingRecord_t>(ConstantBufferDataAttributeSettingRecord_t *& head,
														ConstantBufferDataAttributeSettingRecord_t* node);  // 975
	CUtlIntrusiveList<ConstantBufferDataAttributeSettingRecord_t>::AddToTail(
			ConstantBufferDataAttributeSettingRecord_t* node);  // 68
} /* size: 167, variables: 1, inline expansions: 3 (122 bytes) */

// <034723F1> ../scenesystem/scenelayer.cpp:72
// variables: 5
// function calls: 10
void CSceneLayer::FindOrAllocateStencilBit(CUtlStringToken nID)
{
	const char   __FUNCTION__; // 27740
	{
		CSceneLayer* pLayer; // 76
		CUtlStringToken::GetHashCode(); // 55
		{
			uint32 nAssociatedID; // 59
			ReadVolatileMemory<unsigned int>(const unsigned int* pPtr); // 59
			ThreadInterlockedAssignIf(volatile int32* p,
							int32 value,
							int32 comparand);  // 433
			ThreadInterlockedAssignIf(volatile uint32* p,
							uint32 value,
							uint32 comparand);  // 67
		}
		CUtlSlotAllocator<8>::FindOrAllocateSlot(
					CUtlStringToken nID);  // 77
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
	CUtlStringToken::GetHashCode(); // 55
	{
		uint32 nAssociatedID; // 59
		ReadVolatileMemory<unsigned int>(const unsigned int* pPtr); // 59
		ThreadInterlockedAssignIf(volatile int32* p,
						int32 value,
						int32 comparand);  // 433
		ThreadInterlockedAssignIf(volatile uint32* p,
						uint32 value,
						uint32 comparand);  // 67
	}
	CUtlSlotAllocator<8>::FindOrAllocateSlot(
				CUtlStringToken nID);  // 81
} /* size: 0, variables: 1, inline expansions: 2 (57 bytes) */

// <03472010> ../scenesystem/scenelayer.cpp:84
// variables: 7
// function calls: 6
void CSceneLayer::ParseStringForStencilMaskAndRefValueForRead(const char* pString, int* pRefValue, int* pMaskValue)
{
	int nRefRet; // 86
	int nMaskRet; // 87
	{
		bool bInvert; // 91
		char tokenName; // 101
		const char* pComma; // 103
		int nTokenLen; // 104
		int nBit; // 117
		strchr(const char* __s,
			int __c);  // 103
		V_strlen(const char* str); // 104
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 114
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 117
	}
} /* size: 0, variables: 2 */

// <03471FD3> ../scenesystem/scenelayer.cpp:132
void CSceneLayer::SetAuxiliaryCameraMask(uint nMask)
{
} /* size: 11 */

// <03471F96> ../scenesystem/scenelayer.cpp:142
void CSceneLayer::SetCustomSortKeyFunction(LayerComputeSortKeyFunc_t* pfnCustomSortKeyFunction)
{
} /* size: 12 */

// <0347197A> ../scenesystem/scenelayer.cpp:149
// variable: 1
// function calls: 23
void CSceneLayer::QueueViewToBeginAfterMe(ISceneView* pView)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_151; // 151
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
			int nLineNumber);  // 151
	CUtlMemory<ISceneView::NumAllocated(); // 1196
	CUtlMemory<ISceneView::Base(); // 112
	CUtlVectorBase<ISceneView::Base(); // 368
	CUtlVectorBase<ISceneView::ResetDbgInfo(); // 824
	CUtlMemory<ISceneView::IsGrowable(); // 823
	CUtlMemory<ISceneView::IsExternallyAllocated(); // 859
	CUtlMemory<ISceneView::IsExternallyAllocated(); // 861
	CUtlMemory<ISceneView::Grow(
		int num);  // 806
	CUtlVectorBase<ISceneView::GrowMemory(
			int num);  // 1198
	CUtlMemory<ISceneView::operator[](
			int i);  // 602
	CUtlVectorBase<ISceneView::Element(
		int i);  // 1201
	CopyConstruct<ISceneView*>(ISceneView** pMemory,
					ISceneView* const& src);  // 1201
	CUtlVectorBase<ISceneView::AddToTail(
			ISceneView* const& src);  // 152
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 153
} /* size: 0, variables: 1, inline expansions: 23 (0 bytes) */

// <03471457> ../scenesystem/scenelayer.cpp:156
// variables: 5
// function calls: 16
void CSceneLayer::DecrementOutstandingPartitions()
{
	int nNumLeft; // 158
	{
		IProceduralLayerRenderer* pRenderer; // 164
		{
			CRenderBatchList* pBatchList; // 167
			IRenderContext* pRenderContext; // 170
			CUtlMemory<CRenderBatchList::NumAllocated(); // 1196
			CUtlMemory<CRenderBatchList::operator[](
					int i);  // 602
			CUtlVectorBase<CRenderBatchList::Element(
				int i);  // 1201
			CopyConstruct<CRenderBatchList*>(CRenderBatchList** pMemory,
							CRenderBatchList* const& src);  // 1201
			CUtlMemory<CRenderBatchList::Base(); // 112
			CUtlVectorBase<CRenderBatchList::Base(); // 368
			CUtlVectorBase<CRenderBatchList::ResetDbgInfo(); // 824
			CUtlVectorBase<CRenderBatchList::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<CRenderBatchList::AddToTail(
					CRenderBatchList* const& src);  // 169
		}
		ISceneLayer::GetProceduralLayerRenderer(); // 164
		CUtlVectorBase<ISceneView::Count(); // 209
		{
			int v; // 212
			CUtlMemory<ISceneView::operator[](
					int i);  // 588
			CUtlVectorBase<ISceneView::operator[](
					int i);  // 214
		}
		CSceneLayer::BeginRenderingQueuedViews(); // 179
	}
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<int, 4>::AtomicAdd(
			int add);  // 158
} /* size: 359, variables: 1, inline expansions: 2 (16 bytes) */

// <034713A1> ../scenesystem/scenelayer.cpp:185
// function calls: 2
void CSceneLayer::SetOutstandingPartitions(int nPartitions)
{
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 187
} /* size: 20, inline expansions: 2 (17 bytes) */

// <03471373> ../scenesystem/scenelayer.cpp:194
void CSceneLayer::SetLayerPerformsFrameBufferCopy()
{
} /* size: 12 */

// <03471345> ../scenesystem/scenelayer.cpp:201
void CSceneLayer::GetLayerPerformsFrameBufferCopy()
{
} /* size: 18 */

// <03482563> ../scenesystem/scenelayer.cpp:207
// variables: 2
// function calls: 3
void CSceneLayer::BeginRenderingQueuedViews()
{
	int nQueuedViews; // 209
	CUtlVectorBase<ISceneView::Count(); // 209
	{
		int v; // 212
		CUtlMemory<ISceneView::operator[](
				int i);  // 588
		CUtlVectorBase<ISceneView::operator[](
				int i);  // 214
	}
} /* size: 89, variables: 1, inline expansions: 1 (7 bytes) */

// <034712F6> ../scenesystem/scenelayer.cpp:207
// variables: 2
void CSceneLayer::BeginRenderingQueuedViews()
{
	int nQueuedViews; // 209
	{
		int v; // 212
	}
} /* size: 0, variables: 1 */

// <03470B5B> ../scenesystem/scenelayer.cpp:220
// variables: 13
// function calls: 15
void CSceneLayer::ClearRenderTargets(IRenderContext* pRenderContext, CSceneView* pView, int nClearFlags)
{
	int nStencilBit; // 287
	const char   __FUNCTION__; // 27598
	{
		bool bCanDoDiscard; // 228
		{
			int nWidth; // 233
			int nHeight; // 233
			CSceneLayer::GetRenderTargetDescDimensions(
							int* pWidth,
							int* pHeight);  // 234
		}
		{
			int32 nDiscardFlags; // 249
		}
		{
			int32 nDiscardFlags; // 266
		}
	}
	{
		CSceneLayer* pStencilLayer; // 290
		{
			int i; // 32
		}
		CUtlSlotAllocator<8>::SlotIsAllocated(
				CUtlStringToken nID);  // 291
	}
	{
		int nWidth; // 305
		int nHeight; // 305
		{
			RenderViewport_t fullViewport; // 308
			RenderViewport_t::Init(
				int x,
				int y,
				int nWidth,
				int nHeight,
				float flMinZ,
				float flMaxZ);  // 404
			RenderViewport_t::RenderViewport_t(
					int x,
					int y,
					int nWidth,
					int nHeight,
					float flMinZ,
					float flMaxZ);  // 308
			Rect_t::Rect_t(
				int nX,
				int nY,
				int nWidth,
				int nHeight);  // 310
			IRenderContext::SetScissorRect(
					const Rect_t& rect);  // 310
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 314
		}
		CSceneLayer::GetRenderTargetDescDimensions(
						int* pWidth,
						int* pHeight);  // 306
	}
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 226
	ISceneLayer::GetStencilDependency(); // 288
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 294
	RenderClearInfo_t::RenderClearInfo_t(
				const Vector4D* pClearColorArray,
				int nNumColors,
				int nFlags,
				int nStencilBitToCheck,
				int nStencilComparisonValue);  // 235
	IRenderContext::Clear(
		const Vector4D* pClearColorArray,
		int nNumColors,
		int nFlags,
		int nStencilBitToCheck,
		int nStencilComparisonValue);  // 317
	RenderClearInfo_t::RenderClearInfo_t(
				const Vector4D* pClearColorArray,
				int nNumColors,
				int nFlags,
				int nStencilBitToCheck,
				int nStencilComparisonValue);  // 321
} /* size: 0, variables: 2, inline expansions: 8 (125 bytes) */

// <03470A53> ../scenesystem/scenelayer.cpp:334
// function call: 1
void CSceneLayer::BindRenderTargetsAndClear(IRenderContext* pRenderContext, CSceneView* pView, bool bDoClear, SceneSystemPerFrameStats_t& perFrameStats)
{
	CSceneLayer::BindRenderTargets(
				IRenderContext* pRenderContext,
				SceneSystemPerFrameStats_t& perFrameStats);  // 336
} /* size: 120, inline expansions: 1 (25 bytes) */

// <03481E09> ../scenesystem/scenelayer.cpp:353
void CSceneLayer::BindRenderTargets(IRenderContext* pRenderContext, SceneSystemPerFrameStats_t& perFrameStats)
{
} /* size: 0 */

// <03470779> ../scenesystem/scenelayer.cpp:361
// function calls: 11
void CSceneLayer::SetViewportAndScissor(IRenderContext* pRenderContext, CSceneView* pView)
{
	CSceneLayer::GetRenderTargetDesc(); // 363
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 233
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 233
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 234
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 234
	RenderTargetDesc_t::IsValid(); // 363
	IRenderContext::SetScissorRect(
			const Rect_t& rect);  // 375
} /* size: 191, inline expansions: 11 (54 bytes) */

// <034817DB> ../scenesystem/scenelayer.cpp:379
// variable: 1
// function calls: 2
void CSceneLayer::SetLayerNoCull(bool bEnable)
{
	{
		ISceneLayer::SetOverrideRasterizerState(
						RsRasterizerStateHandle_t hRasterizerState);  // 391
		{
			RsRasterizerStateDesc_t rsDesc; // 386
		}
	}
	CSceneLayer::SetLayerNoCull(
			bool bEnable);  // 379
} /* size: 137, inline expansions: 1 (75 bytes) */

// <0347072B> ../scenesystem/scenelayer.cpp:379
// variables: 2
void CSceneLayer::SetLayerNoCull(bool bEnable)
{
	{
		RsRasterizerStateHandle_t s_hNoCullState; // 383
		{
			RsRasterizerStateDesc_t rsDesc; // 386
		}
	}
} /* size: 0 */

// <0346F925> ../scenesystem/scenelayer.cpp:404
// variables: 7
// function calls: 57
void CSceneLayer::CopyLayerFields(CSceneLayer* pCloneLayer)
{
	const char   __FUNCTION__; // 27527
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 431
	}
	{
		int i; // 432
		CUtlVectorBase<ConstantBufferHandle_t__::Count(); // 432
		AlignedByteArrayExplicit_t<4, ConstantBufferHandle_t__::Base(); // 268
		CUtlMemoryFixed<ConstantBufferHandle_t__::Base(); // 112
		CUtlVectorBase<ConstantBufferHandle_t__::Base(); // 368
		CUtlVectorBase<ConstantBufferHandle_t__::ResetDbgInfo(); // 824
		CUtlVectorBase<ConstantBufferHandle_t__::GrowMemory(
				int num);  // 1198
		AlignedByteArrayExplicit_t<4, ConstantBufferHandle_t__::Base(); // 268
		CUtlMemoryFixed<ConstantBufferHandle_t__::Base(); // 272
		CUtlMemoryFixed<ConstantBufferHandle_t__::operator[](
				int i);  // 602
		CUtlVectorBase<ConstantBufferHandle_t__::Element(
			int i);  // 1201
		CopyConstruct<ConstantBufferHandle_t__*>(ConstantBufferHandle_t__** pMemory,
							ConstantBufferHandle_t__* const& src);  // 1201
		CUtlVectorBase<ConstantBufferHandle_t__::AddToTail(
				ConstantBufferHandle_t__* const& src);  // 434
		AlignedByteArrayExplicit_t<4, CUtlStringToken, 4>::Base(); // 268
		CUtlMemoryFixed<CUtlStringToken, 4>::Base(); // 112
		CUtlVectorBase<CUtlStringToken, CUtlMemoryFixed<CUtlStringToken, 4> >::Base(); // 368
		CUtlVectorBase<CUtlStringToken, CUtlMemoryFixed<CUtlStringToken, 4> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CUtlStringToken, CUtlMemoryFixed<CUtlStringToken, 4> >::GrowMemory(
				int num);  // 1198
		AlignedByteArrayExplicit_t<4, CUtlStringToken, 4>::Base(); // 268
		CUtlMemoryFixed<CUtlStringToken, 4>::Base(); // 272
		CUtlMemoryFixed<CUtlStringToken, 4>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlStringToken, CUtlMemoryFixed<CUtlStringToken, 4> >::Element(
			int i);  // 1201
		CopyConstruct<CUtlStringToken>(CUtlStringToken* pMemory,
						const CUtlStringToken& src);  // 1201
		CUtlVectorBase<CUtlStringToken, CUtlMemoryFixed<CUtlStringToken, 4> >::AddToTail(
				const CUtlStringToken& src);  // 435
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 441
	}
	{
		int i; // 448
		{
			int j; // 450
			CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CStrongHandle<InfoForResourceTypeCTextureBase>& src);  // 452
		}
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CStrongHandle<InfoForResourceTypeCTextureBase>& src);  // 454
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 456
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetParent(
			const ThisType_t* pParent);  // 866
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::SetParent(
			const ThisType_t* pParent);  // 867
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetParent(
			const ThisType_t* pParent);  // 868
	CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::SetParent(
			const ThisType_t* pParent);  // 869
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::SetParent(
			const ThisType_t* pParent);  // 870
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::SetParent(
			const ThisType_t* pParent);  // 871
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::SetParent(
			const ThisType_t* pParent);  // 872
	CUtlAttributeList<void::SetParent(
			const ThisType_t* pParent);  // 873
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::SetParent(
			const ThisType_t* pParent);  // 874
	CRenderAttributes::SetParent(
			const CRenderAttributes* pParent);  // 414
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 418
	CUtlVectorBase<ISceneLayer::Count(); // 431
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 112
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 112
	RenderTargetDesc_t::operator=(
			const RenderTargetDesc_t  &);  // 446
	CUtlVectorBase<CFrustum, CUtlMemoryFixed<CFrustum, 2> >::Count(); // 573
	AlignedByteArrayExplicit_t<2, CFrustum, 16>::Base(); // 269
	CUtlMemoryFixed<CFrustum, 2>::Base(); // 113
	CUtlVectorBase<CFrustum, CUtlMemoryFixed<CFrustum, 2> >::Base(); // 105
	CUtlVectorBase<CFrustum, CUtlMemoryFixed<CFrustum, 2> >::Count(); // 105
	CUtlVectorBase<CFrustum, CUtlMemoryFixed<CFrustum, 2> >::end(); // 574
	AlignedByteArrayExplicit_t<2, CFrustum, 16>::Base(); // 268
	CUtlMemoryFixed<CFrustum, 2>::Base(); // 112
	CUtlVectorBase<CFrustum, CUtlMemoryFixed<CFrustum, 2> >::Base(); // 102
	CUtlVectorBase<CFrustum, CUtlMemoryFixed<CFrustum, 2> >::begin(); // 574
	UtlTraitsCopyRange<CFrustum>(const CFrustum* pFrom,
					const CFrustum* pFromEnd,
					CFrustum* pTo);  // 200
	UtlTraitsCopyRange<CFrustum>(const CFrustum* pFrom,
					const CFrustum* pFromEnd,
					CFrustum* pTo);  // 574
	CUtlVectorBase<CFrustum, CUtlMemoryFixed<CFrustum, 2> >::operator=(
			const CUtlVectorBase<CFrustum, CUtlMemoryFixed<CFrustum, 2> >& other);  // 565
	CUtlVectorBase<CFrustum, CUtlMemoryFixed<CFrustum, 2> >::operator=(
			const CUtlVectorBase<CFrustum, CUtlMemoryFixed<CFrustum, 2> >& other);  // 461
	CUtlVectorFixed<CFrustum, 2>::operator=(
			const CUtlVectorFixed<CFrustum, 2>  &);  // 460
} /* size: 0, variables: 1, inline expansions: 32 (0 bytes) */

// <0346F2EC> ../scenesystem/scenelayer.cpp:465
// variables: 5
// function calls: 21
void CSceneLayer::AddEmbeddedView(ISceneView* pView)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_467; // 467
	CRenderBatchList* pLastBatchList; // 469
	const char   __FUNCTION__; // 27527
	CRenderBatchList* pBatchList; // 472
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 470
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
			int nLineNumber);  // 467
	CUtlMemory<CRenderBatchList::operator[](
			int i);  // 630
	CUtlVectorBase<CRenderBatchList::Tail(); // 469
	CUtlMemory<CRenderBatchList::NumAllocated(); // 1196
	CUtlMemory<CRenderBatchList::operator[](
			int i);  // 602
	CUtlVectorBase<CRenderBatchList::Element(
		int i);  // 1201
	CopyConstruct<CRenderBatchList*>(CRenderBatchList** pMemory,
					CRenderBatchList* const& src);  // 1201
	CUtlMemory<CRenderBatchList::Base(); // 112
	CUtlVectorBase<CRenderBatchList::Base(); // 368
	CUtlVectorBase<CRenderBatchList::ResetDbgInfo(); // 824
	CUtlVectorBase<CRenderBatchList::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CRenderBatchList::AddToTail(
			CRenderBatchList* const& src);  // 475
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 478
} /* size: 0, variables: 4, inline expansions: 21 (594 bytes) */

// <03481770> ../scenesystem/scenelayer.cpp:480
void CSceneLayer::GetRenderTargetDescDimensions(int* pWidth, int* pHeight)
{
} /* size: 75 */

// <0346EDCA> ../scenesystem/scenelayer.cpp:486
// variables: 4
// function calls: 13
void CSceneLayer::SetWireframeOverride(bool bDepthTest, float flDepthBias)
{
	RsFillModeOverride_t fillModeOverride; // 488
	RsDepthBiasStateOverride_t depthBiasOverride; // 489
	RsDepthStencilStateDesc_t depthStencilOverride; // 494
	RsDepthStencilStateHandle_t hDsState; // 497
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 251
	RsStencilStateDesc_t::RsStencilStateDesc_t(); // 433
	RsStencilStateDesc_t::RsStencilStateDesc_t(
				bool bStencilEnable,
				uint8 nStencilReadMask,
				uint8 nStencilWriteMask,
				RsStencilOp_t frontStencilFailOp,
				RsStencilOp_t frontStencilDepthFailOp,
				RsStencilOp_t frontStencilPassOp,
				RsComparison_t frontStencilFunc,
				RsStencilOp_t backStencilFailOp,
				RsStencilOp_t backStencilDepthFailOp,
				RsStencilOp_t backStencilPassOp,
				RsComparison_t backStencilFunc);  // 356
	RsDepthStencilStateDesc_t::RsDepthStencilStateDesc_t(
					bool bDepthTestEnable,
					bool bDepthWriteEnable,
					RsComparison_t depthFunc,
					bool bStencilEnable,
					uint8 nStencilReadMask,
					uint8 nStencilWriteMask,
					RsStencilOp_t frontStencilFailOp,
					RsStencilOp_t frontStencilDepthFailOp,
					RsStencilOp_t frontStencilPassOp,
					RsComparison_t frontStencilFunc,
					RsStencilOp_t backStencilFailOp,
					RsStencilOp_t backStencilDepthFailOp,
					RsStencilOp_t backStencilPassOp,
					RsComparison_t backStencilFunc);  // 429
	DefaultDepthStencilStateDesc(void); // 424
	DefaultDepthStencilStateDesc(void); // 435
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 435
	RsDepthStencilStateDesc_t::RsDepthStencilStateDesc_t(); // 494
	ISceneLayer::SetFillModeStateOverride(
				const RsFillModeOverride_t& fillModeOverride);  // 499
	ISceneLayer::SetDepthBiasStateOverride(
					const RsDepthBiasStateOverride_t& depthBiasOverride);  // 500
	ISceneLayer::SetOverrideDepthStencilState(
					RsDepthStencilStateHandle_t hDsState,
					uint32 nStencilRef);  // 501
} /* size: 276, variables: 4, inline expansions: 13 (396 bytes) */

// <0346E69D> ../scenesystem/scenelayer.cpp:505
// variable: 1
// function calls: 25
void CSceneLayer::AddSemaphoreDependency(ISceneLayer* pLayer)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_507; // 507
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
			int nLineNumber);  // 507
	CUtlMemory<UtlLinkedListElem_t<ISceneLayer::IsIdxValid(
			short unsigned int i);  // 588
	CUtlMemory<UtlLinkedListElem_t<ISceneLayer::operator[](
			short unsigned int i);  // 594
	CUtlLinkedList<ISceneLayer::IsValidIndex(
			short unsigned int i);  // 583
	CUtlMemory<UtlLinkedListElem_t<ISceneLayer::IsIdxAfter(
			short unsigned int i,
			const Iterator_t& it);  // 591
	CUtlLinkedList<ISceneLayer::IsValidIndex(
			short unsigned int i);  // 977
	{
	}
	CUtlMemory<UtlLinkedListElem_t<ISceneLayer::operator[](
			short unsigned int i);  // 367
	CUtlLinkedList<ISceneLayer::InternalElement(
			short unsigned int i);  // 982
	CUtlMemory<UtlLinkedListElem_t<ISceneLayer::operator[](
			short unsigned int i);  // 367
	CUtlLinkedList<ISceneLayer::InternalElement(
			short unsigned int i);  // 1011
	CUtlLinkedList<ISceneLayer::LinkBefore(
			short unsigned int before,
			short unsigned int elem);  // 822
	CopyConstruct<ISceneLayer*>(ISceneLayer** pMemory,
					ISceneLayer* const& src);  // 825
	CUtlMemory<UtlLinkedListElem_t<ISceneLayer::operator[](
			short unsigned int i);  // 482
	CUtlLinkedList<ISceneLayer::Element(
		short unsigned int i);  // 825
	CUtlLinkedList<ISceneLayer::InsertBefore(
			short unsigned int before,
			ISceneLayer* const& src);  // 856
	CUtlLinkedList<ISceneLayer::AddToTail(
			ISceneLayer* const& src);  // 508
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 509
} /* size: 0, variables: 1, inline expansions: 25 (1272 bytes) */

// <0346E5F1> ../scenesystem/scenelayer.cpp:512
// function calls: 2
void CSceneLayer::SetCullPlane(const VPlane& vCullPlane)
{
	Vector::operator=(
			const Vector& vOther);  // 124
	VPlane::operator=(
			const VPlane& thePlane);  // 514
} /* size: 63, inline expansions: 2 (89 bytes) */

// <0346E2E3> ../scenesystem/scenelayer.cpp:519
// function calls: 13
void CSceneLayer::AddWorldFilter(ISceneWorld* pWorld)
{
	CUtlMemory<ISceneWorld::NumAllocated(); // 1196
	CUtlMemory<ISceneWorld::Base(); // 112
	CUtlVectorBase<ISceneWorld::Base(); // 368
	CUtlVectorBase<ISceneWorld::ResetDbgInfo(); // 824
	CUtlMemory<ISceneWorld::IsGrowable(); // 823
	CUtlMemory<ISceneWorld::IsExternallyAllocated(); // 859
	CUtlMemory<ISceneWorld::IsExternallyAllocated(); // 861
	CUtlMemory<ISceneWorld::Grow(
		int num);  // 806
	CUtlVectorBase<ISceneWorld::GrowMemory(
			int num);  // 1198
	CUtlMemory<ISceneWorld::operator[](
			int i);  // 602
	CUtlVectorBase<ISceneWorld::Element(
		int i);  // 1201
	CopyConstruct<ISceneWorld*>(ISceneWorld** pMemory,
					ISceneWorld* const& src);  // 1201
	CUtlVectorBase<ISceneWorld::AddToTail(
			ISceneWorld* const& src);  // 521
} /* size: 392, inline expansions: 13 (990 bytes) */

// <0346E2B5> ../scenesystem/scenelayer.cpp:525
void CSceneLayer::GetCullPlane()
{
} /* size: 0 */

// <0346E11F> ../scenesystem/scenelayer.cpp:531
// function calls: 6
void CSceneLayer::CullAgainstPlane(const Vector& vMins, const Vector& vMaxs)
{
	Vector::Vector(); // 186
	Support(const Vector& vDirection,
		const Vector& vMin,
		const Vector& vMax);  // 202
	DotProduct(const Vector& a,
			const Vector& b);  // 1167
	Vector::Dot(
		const Vector& vOther);  // 119
	VPlane::DistTo(
		const Vector& vVec);  // 202
	VPlane::BoxOnPlaneSide(
			const Vector& vMin,
			const Vector& vMax);  // 536
} /* size: 135, inline expansions: 6 (258 bytes) */

// <0346E0F1> ../scenesystem/scenelayer.cpp:540
void CSceneLayer::HasCullPlane()
{
} /* size: 15 */

// <0346E02B> ../scenesystem/scenelayer.cpp:546
// function calls: 2
void CSceneLayer::SetCanBenefitFromRenderPass(CSceneView* pView)
{
	CUtlLinkedList<ISceneLayer::Count(); // 561
	CUtlIntrusiveList<CDisplayList>::IsEmpty(); // 565
} /* size: 118, inline expansions: 2 (0 bytes) */

// <0346D8BD> ../scenesystem/scenelayer.cpp:579
// variables: 7
// function calls: 36
void CSceneLayer::UpdateRenderPassDescStoreOps(CSceneView* pView, CRenderPassDesc* pDesc)
{
	{
		int i; // 583
		{
			int nExisting; // 587
			{
				RenderPassAttachmentDesc_t* pAttachment; // 590
				AlignedByteArrayExplicit_t<8, RenderPassAttachmentDesc_t, 8>::Base(); // 74
				CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 64
				CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 447
				Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttachmentD this,
					int i);  // 438
				operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttachmentD this,
						int i);  // 590
			}
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 587
			{
				int nIndex; // 435
				Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this); // 435
				AlignedByteArrayExplicit_t<8, RenderPassAttachmentDesc_t, 8>::Base(); // 74
				CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 452
				Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this,
					int i);  // 442
				operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this,
						int i);  // 437
				CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 437
			}
			CRenderPassDesc::FindAttachment(
					HRenderTexture hTexture);  // 587
		}
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 585
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 585
	}
	{
		int nExisting; // 604
		{
			RenderPassAttachmentDesc_t* pAttachment; // 607
			AlignedByteArrayExplicit_t<8, RenderPassAttachmentDesc_t, 8>::Base(); // 74
			CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 64
			CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 447
			Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttachmentD this,
				int i);  // 438
			operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttachmentD this,
					int i);  // 607
		}
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 604
		{
			int nIndex; // 435
			Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this); // 435
			AlignedByteArrayExplicit_t<8, RenderPassAttachmentDesc_t, 8>::Base(); // 74
			CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 452
			Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this,
				int i);  // 442
			operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this,
					int i);  // 437
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 437
		}
		CRenderPassDesc::FindAttachment(
				HRenderTexture hTexture);  // 604
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 602
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 602
} /* size: 362, inline expansions: 4 (7 bytes) */

// <0346ADE0> ../scenesystem/scenelayer.cpp:619
// variables: 40
// function calls: 189
void CSceneLayer::AddToRenderPassDesc(CSceneView* pView, CRenderPassDesc* pDesc, int nSubPass)
{
	const char   __FUNCTION__; // 27625
	RenderPassSubPass_t* pSubPass; // 626
	char sDebugName; // 628
	int nClearFlags; // 635
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 624
	}
	{
		int nStencilBit; // 643
		{
			CSceneLayer* pStencilLayer; // 646
			{
				int i; // 32
			}
			CUtlSlotAllocator<8>::SlotIsAllocated(
					CUtlStringToken nID);  // 647
		}
		ISceneLayer::GetStencilDependency(); // 644
		RenderClearInfo_t::RenderClearInfo_t(
					const Vector4D* pClearColorArray,
					int nNumColors,
					int nFlags,
					int nStencilBitToCheck,
					int nStencilComparisonValue);  // 127
		CSceneLayer::GetRenderClearInfo(
					int nStencilBit);  // 650
	}
	{
		int i; // 655
		{
			int nExisting; // 659
			RenderSubPassAttachment_t* pPassAttachment; // 722
			{
				RenderPassAttachmentDesc_t* pAttachment; // 662
				{
					Vector4D* pClearColor; // 667
					int nAttachmentIndex; // 677
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 674
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 678
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 679
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 682
					}
					Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this); // 420
					CRenderPassDesc::NumAttachments(); // 677
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 680
				}
				AlignedByteArrayExplicit_t<8, RenderPassAttachmentDesc_t, 8>::Base(); // 74
				CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 64
				CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 630
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 44
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
				StaticInvalidHandle(void); // 91
				RenderPassAttachmentDesc_t::Clear(); // 45
				RenderPassAttachmentDesc_t::RenderPassAttachmentDesc_t(); // 1479
				Construct<RenderPassAttachmentDesc_t>(RenderPassAttachmentDesc_t* pMemory); // 63
				UtlTraitsConstructRange<RenderPassAttachmentDesc_t>(RenderPassAttachmentDesc_t* pStart,
											RenderPassAttachmentDesc_t* pEnd);  // 631
				AddToTailGetPtr(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttachmentD this); // 389
				CRenderPassDesc::AddAttachmentGetPtr(); // 662
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
				CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 663
			}
			{
				RenderPassAttachmentDesc_t* pAttachment; // 706
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 711
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 712
				}
				AlignedByteArrayExplicit_t<8, RenderPassAttachmentDesc_t, 8>::Base(); // 74
				CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 64
				CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 447
				Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttachmentD this,
					int i);  // 438
				operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttachmentD this,
						int i);  // 706
			}
			{
				int nIndex; // 435
				Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this); // 435
				AlignedByteArrayExplicit_t<8, RenderPassAttachmentDesc_t, 8>::Base(); // 74
				CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 452
				Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this,
					int i);  // 442
				operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this,
						int i);  // 437
				CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 437
			}
			CRenderPassDesc::FindAttachment(
					HRenderTexture hTexture);  // 659
			AlignedByteArrayExplicit_t<4, RenderSubPassAttachment_t, 8>::Base(); // 74
			CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 64
			CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 630
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 179
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 196
			RenderSubPassAttachment_t::Clear(); // 180
			RenderSubPassAttachment_t::RenderSubPassAttachment_t(); // 1479
			Construct<RenderSubPassAttachment_t>(RenderSubPassAttachment_t* pMemory); // 63
			UtlTraitsConstructRange<RenderSubPassAttachment_t>(RenderSubPassAttachment_t* pStart,
										RenderSubPassAttachment_t* pEnd);  // 631
			AddToTailGetPtr(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAttachmen this); // 722
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 723
		}
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 657
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 657
	}
	{
		int nExisting; // 730
		RenderSubPassAttachment_t* pPassAttachment; // 803
		{
			RenderPassAttachmentDesc_t* pAttachment; // 733
			{
				int nAttachmentIndex; // 755
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 756
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 757
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 761
				}
				Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this); // 420
				CRenderPassDesc::NumAttachments(); // 755
			}
			AlignedByteArrayExplicit_t<8, RenderPassAttachmentDesc_t, 8>::Base(); // 74
			CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 64
			CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 630
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 44
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 91
			RenderPassAttachmentDesc_t::Clear(); // 45
			RenderPassAttachmentDesc_t::RenderPassAttachmentDesc_t(); // 1479
			Construct<RenderPassAttachmentDesc_t>(RenderPassAttachmentDesc_t* pMemory); // 63
			UtlTraitsConstructRange<RenderPassAttachmentDesc_t>(RenderPassAttachmentDesc_t* pStart,
										RenderPassAttachmentDesc_t* pEnd);  // 631
			AddToTailGetPtr(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttachmentD this); // 389
			CRenderPassDesc::AddAttachmentGetPtr(); // 733
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 734
		}
		{
			RenderPassAttachmentDesc_t* pAttachment; // 793
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 791
			}
			AlignedByteArrayExplicit_t<8, RenderPassAttachmentDesc_t, 8>::Base(); // 74
			CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 64
			CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 447
			Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttachmentD this,
				int i);  // 438
			operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttachmentD this,
					int i);  // 793
		}
		{
			int nIndex; // 435
			Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this); // 435
			AlignedByteArrayExplicit_t<8, RenderPassAttachmentDesc_t, 8>::Base(); // 74
			CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 452
			Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this,
				int i);  // 442
			operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this,
					int i);  // 437
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 437
		}
		CRenderPassDesc::FindAttachment(
				HRenderTexture hTexture);  // 730
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 804
	}
	{
		int i; // 808
		{
			RenderSubPassAttachment_t* pPassAttachment; // 813
			AlignedByteArrayExplicit_t<4, RenderSubPassAttachment_t, 8>::Base(); // 74
			CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 64
			CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 630
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 179
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 196
			RenderSubPassAttachment_t::Clear(); // 180
			RenderSubPassAttachment_t::RenderSubPassAttachment_t(); // 1479
			Construct<RenderSubPassAttachment_t>(RenderSubPassAttachment_t* pMemory); // 63
			UtlTraitsConstructRange<RenderSubPassAttachment_t>(RenderSubPassAttachment_t* pStart,
										RenderSubPassAttachment_t* pEnd);  // 631
			AddToTailGetPtr(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAttachmen this); // 813
			CUtlMemory<ISceneLayer::InputTexture_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<ISceneLayer::InputTexture_t, CUtlMemoryFixedGrowable<ISceneLayer::InputTexture_t, 2, int> >::operator[](
					int i);  // 814
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 814
			CUtlMemory<ISceneLayer::InputTexture_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<ISceneLayer::InputTexture_t, CUtlMemoryFixedGrowable<ISceneLayer::InputTexture_t, 2, int> >::operator[](
					int i);  // 815
		}
		CUtlVectorBase<ISceneLayer::InputTexture_t, CUtlMemoryFixedGrowable<ISceneLayer::InputTexture_t, 2, int> >::Count(); // 808
		CUtlMemory<ISceneLayer::InputTexture_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<ISceneLayer::InputTexture_t, CUtlMemoryFixedGrowable<ISceneLayer::InputTexture_t, 2, int> >::operator[](
				int i);  // 811
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 811
		{
			int nIndex; // 435
			Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this); // 435
			AlignedByteArrayExplicit_t<8, RenderPassAttachmentDesc_t, 8>::Base(); // 74
			CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 452
			Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this,
				int i);  // 442
			operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this,
					int i);  // 437
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 437
		}
		CRenderPassDesc::FindAttachment(
				HRenderTexture hTexture);  // 811
	}
	{
		int i; // 819
		{
			RenderSubPassAttachment_t* pPassAttachment; // 824
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 826
			}
			AlignedByteArrayExplicit_t<4, RenderSubPassAttachment_t, 8>::Base(); // 74
			CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 64
			CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 630
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 179
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 196
			RenderSubPassAttachment_t::Clear(); // 180
			RenderSubPassAttachment_t::RenderSubPassAttachment_t(); // 1479
			Construct<RenderSubPassAttachment_t>(RenderSubPassAttachment_t* pMemory); // 63
			UtlTraitsConstructRange<RenderSubPassAttachment_t>(RenderSubPassAttachment_t* pStart,
										RenderSubPassAttachment_t* pEnd);  // 631
			AddToTailGetPtr(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAttachmen this); // 824
			CUtlMemory<ISceneLayer::InputSceneViewRenderTarget_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<ISceneLayer::InputSceneViewRenderTarget_t, CUtlMemoryFixedGrowable<ISceneLayer::InputSceneViewRender this,
					int i);  // 825
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 825
			CUtlMemory<ISceneLayer::InputSceneViewRenderTarget_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<ISceneLayer::InputSceneViewRenderTarget_t, CUtlMemoryFixedGrowable<ISceneLayer::InputSceneViewRender this,
					int i);  // 827
		}
		Count(const CUtlVectorBase<ISceneLayer::InputSceneViewRenderTarget_t, CUtlMemoryFixedGrowable<ISceneLayer::InputSceneView this); // 819
		CUtlMemory<ISceneLayer::InputSceneViewRenderTarget_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<ISceneLayer::InputSceneViewRenderTarget_t, CUtlMemoryFixedGrowable<ISceneLayer::InputSceneViewRender this,
				int i);  // 822
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 822
		{
			int nIndex; // 435
			Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this); // 435
			AlignedByteArrayExplicit_t<8, RenderPassAttachmentDesc_t, 8>::Base(); // 74
			CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 452
			Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this,
				int i);  // 442
			operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttac this,
					int i);  // 437
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 437
		}
		CRenderPassDesc::FindAttachment(
				HRenderTexture hTexture);  // 822
	}
	{
		RenderPassSubPassDependency_t* pDependency; // 833
		AlignedByteArrayExplicit_t<4, RenderPassSubPassDependency_t, 4>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>::Base(); // 630
		RenderPassSubPassDependency_t::Clear(); // 129
		RenderPassSubPassDependency_t::RenderPassSubPassDependency_t(); // 1479
		Construct<RenderPassSubPassDependency_t>(RenderPassSubPassDependency_t* pMemory); // 63
		UtlTraitsConstructRange<RenderPassSubPassDependency_t>(RenderPassSubPassDependency_t* pStart,
									RenderPassSubPassDependency_t* pEnd);  // 631
		AddToTailGetPtr(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>, RenderPassSubPassD this); // 410
		CRenderPassDesc::AddSubPassDependencyGetPtr(); // 833
	}
	AlignedByteArrayExplicit_t<8, RenderPassSubPass_t, 8>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::Base(); // 630
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::CUtlLeanVectorFixedGrowableBase(); // 411
	CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAttachmen this); // 799
	CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 4, short int>::CUtlLeanVectorFixedGrowable(); // 219
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 179
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 196
	RenderSubPassAttachment_t::Clear(); // 180
	RenderSubPassAttachment_t::RenderSubPassAttachment_t(); // 219
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::CUtlLeanVectorFixedGrowableBase(); // 411
	CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>, RenderSubPassAttachmen this); // 799
	CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 2, short int>::CUtlLeanVectorFixedGrowable(); // 219
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::CUtlLeanVectorFixedGrowableBase(); // 411
	CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>, CWe this); // 799
	CUtlLeanVectorFixedGrowable<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::CUtlLeanVectorFixedGrowable(); // 219
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::CUtlLeanVectorFixedGrowableBase(); // 411
	CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAttachmen this); // 799
	CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 4, short int>::CUtlLeanVectorFixedGrowable(); // 219
	RenderPassSubPass_t::RenderPassSubPass_t(); // 1479
	Construct<RenderPassSubPass_t>(RenderPassSubPass_t* pMemory); // 63
	UtlTraitsConstructRange<RenderPassSubPass_t>(RenderPassSubPass_t* pStart,
							RenderPassSubPass_t* pEnd);  // 631
	AddToTailGetPtr(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>, RenderPassSubPass_t, short i this); // 400
	CRenderPassDesc::AddSubPassGetPtr(); // 626
	CSceneView::GetDebugName(); // 630
	V_strcat_safe<64>(char& pDest,
				const char* pSrc,
				int nMaxCharsToCopy);  // 630
	V_strcat_safe<64>(char& pDest,
				const char* pSrc,
				int nMaxCharsToCopy);  // 631
	ISceneLayer::GetDebugName(); // 632
	V_strcat_safe<64>(char& pDest,
				const char* pSrc,
				int nMaxCharsToCopy);  // 632
	V_strcpy_safe<32>(char& pDest,
				const char* pSrc);  // 281
	RenderPassSubPass_t::SetDebugNameString(
				const char* pString);  // 633
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 728
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 728
} /* size: 0, variables: 4, inline expansions: 37 (892 bytes) */

// <0346ACB8> ../scenesystem/scenelayer.cpp:841
// variables: 2
// function calls: 3
void CSceneLayer::PassesWorldFilter(ISceneWorld* pWorld)
{
	int nWorlds; // 843
	{
		int i; // 847
		CUtlMemory<ISceneWorld::operator[](
				int i);  // 595
		CUtlVectorBase<ISceneWorld::operator[](
				int i);  // 849
	}
	CUtlVectorBase<ISceneWorld::Count(); // 843
} /* size: 75, variables: 1, inline expansions: 1 (7 bytes) */

// <034818BF> ../scenesystem/scenelayer.cpp:857
// variables: 2
// function calls: 2
void CSceneLayer::SetPerfMarker(const char* pPerfMarkerString)
{
	CSceneSystem::GetGPUProfilerModeInline(); // 859
	{
		SceneViewTimestampQuery_t* pQuery; // 865
	}
	{
		SceneViewTimestampQuery_t* pQuery; // 865
	}
	CSceneLayer::SetPerfMarker(
			const char* pPerfMarkerString);  // 857
} /* size: 81, inline expansions: 2 (34 bytes) */

// <0346AC83> ../scenesystem/scenelayer.cpp:857
// variable: 1
void CSceneLayer::SetPerfMarker(const char* pPerfMarkerString)
{
	{
		SceneViewTimestampQuery_t* pQuery; // 865
	}
} /* size: 0 */

// <034819B5> ../scenesystem/scenelayer.cpp:871
// variable: 1
// function calls: 2
void CSceneLayer::ClearPerfMarker()
{
	CSceneSystem::GetGPUProfilerModeInline(); // 873
	{
		SceneViewTimestampQuery_t* pQuery; // 876
		{
		}
	}
	CSceneLayer::ClearPerfMarker(); // 871
} /* size: 0, inline expansions: 2 (84 bytes) */

// <0346AC36> ../scenesystem/scenelayer.cpp:871
// variables: 3
void CSceneLayer::ClearPerfMarker()
{
	const char   __FUNCTION__; // 27527
	{
		SceneViewTimestampQuery_t* pQuery; // 876
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 875
		}
	}
} /* size: 0, variables: 1 */

