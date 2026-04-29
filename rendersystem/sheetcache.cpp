
//
// rendersystem/sheetcache.cpp
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 18
//	struct: 1
//

// <002A843B> rendersystem/sheetcache.cpp:24
// function calls: 2
void CTextureSequenceRecord_t::CTextureSequenceRecord_t()
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 24
	Vector2D::Vector2D(); // 24
} /* size: 0, inline expansions: 2 (0 bytes) */

// <002A841F> rendersystem/sheetcache.cpp:24
void CTextureSequenceRecord_t::CTextureSequenceRecord_t()
{
} /* size: 0 */

// <002A83EC> rendersystem/sheetcache.cpp:29
void CTextureSequenceRecord_t::~CTextureSequenceRecord_t()
{
} /* size: 0 */

// <002A70A7> rendersystem/sheetcache.cpp:37
// variables: 9
// function calls: 67
void CSheetDataTextureCache::GetSequenceTextureData(HRenderTexture hTexture, HRenderTexture* pTextureOut, Vector2D* pvecUVOut, int* pSequenceCount)
{
	CTextureSequenceHashKey_t searchKey; // 39
	UtlTSHashHandle_t hFound; // 42
	{
		const Sheet_t* pSheet; // 45
		CSheetHashConstructor constructor; // 49
		{
			HashFixedData_t* pElement; // 719
			ResourceId_t::operator==(
					const ResourceId_t& other);  // 37
			CTextureSequenceHashKey_t::operator==(
					const CTextureSequenceHashKey_t& other);  // 93
			Compare(const CTextureSequenceHashKey_t& lhs,
				const CTextureSequenceHashKey_t& rhs);  // 721
		}
		Find(const CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureS this,
			CTextureSequenceHashKey_t uiKey,
			HashFixedData_t* pFirstElement,
			HashFixedData_t* pLastElement);  // 736
		HashItem<ResourceId_t>(const ResourceId_t& item); // 32
		CTextureSequenceHashKey_t::HashValue(); // 87
		Hash(const CTextureSequenceHashKey_t& key,
			int nBucketMask);  // 734
		CThreadSpinRWLock::LockForRead(
				const char* pFileName,
				int nLineNumber);  // 743
		{
			HashFixedData_t* pElement; // 719
			ResourceId_t::operator==(
					const ResourceId_t& other);  // 37
			CTextureSequenceHashKey_t::operator==(
					const CTextureSequenceHashKey_t& other);  // 93
			Compare(const CTextureSequenceHashKey_t& lhs,
				const CTextureSequenceHashKey_t& rhs);  // 721
		}
		Find(const CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureS this,
			CTextureSequenceHashKey_t uiKey,
			HashFixedData_t* pFirstElement,
			HashFixedData_t* pLastElement);  // 744
		CThreadSpinRWLock::UnlockRead(
				const char* pFileName,
				int nLineNumber);  // 745
		Find(const CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureS this,
			CTextureSequenceHashKey_t uiKey);  // 507
		HashItem<ResourceId_t>(const ResourceId_t& item); // 32
		CTextureSequenceHashKey_t::HashValue(); // 87
		Hash(const CTextureSequenceHashKey_t& key,
			int nBucketMask);  // 512
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
			ResourceId_t::operator==(
					const ResourceId_t& other);  // 37
			CTextureSequenceHashKey_t::operator==(
					const CTextureSequenceHashKey_t& other);  // 93
			Compare(const CTextureSequenceHashKey_t& lhs,
				const CTextureSequenceHashKey_t& rhs);  // 721
		}
		Find(const CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureS this,
			CTextureSequenceHashKey_t uiKey,
			HashFixedData_t* pFirstElement,
			HashFixedData_t* pLastElement);  // 516
		Alloc(const CUtlMemoryPool<CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod< this); // 438
		InsertUncommitted(const CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureSequenc this,
					CTextureSequenceHashKey_t uiKey,
					HashBucket_t& bucket);  // 521
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 24
		Vector2D::Vector2D(); // 24
		CTextureSequenceRecord_t::CTextureSequenceRecord_t(); // 1479
		Construct<CTextureSequenceRecord_t>(CTextureSequenceRecord_t* pMemory); // 125
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 127
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 127
		CSheetHashConstructor::Construct(
				CTextureSequenceRecord_t* pElement);  // 522
		Insert(const CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureSequenc this,
			CTextureSequenceHashKey_t uiKey,
			ITSHashConstructor<CTextureSequenceRecord_t>* pConstructor,
			bool* pDidInsert);  // 50
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 45
		ITSHashConstructor<CTextureSequenceRecord_t>::ITSHashConstructor(); // 118
		CSheetHashConstructor::CSheetHashConstructor(
					const Sheet_t* pSheet,
					CSheetDataTextureCache* pCache);  // 49
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator ResourceHandle_t(); // 40
	HashItem<ResourceId_t>(const ResourceId_t& item); // 32
	CTextureSequenceHashKey_t::HashValue(); // 87
	Hash(const CTextureSequenceHashKey_t& key,
		int nBucketMask);  // 734
	{
		HashFixedData_t* pElement; // 719
		ResourceId_t::operator==(
				const ResourceId_t& other);  // 37
		CTextureSequenceHashKey_t::operator==(
				const CTextureSequenceHashKey_t& other);  // 93
		Compare(const CTextureSequenceHashKey_t& lhs,
			const CTextureSequenceHashKey_t& rhs);  // 721
	}
	Find(const CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureS this,
		CTextureSequenceHashKey_t uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 736
	CThreadSpinRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 743
	{
		HashFixedData_t* pElement; // 719
		ResourceId_t::operator==(
				const ResourceId_t& other);  // 37
		CTextureSequenceHashKey_t::operator==(
				const CTextureSequenceHashKey_t& other);  // 93
		Compare(const CTextureSequenceHashKey_t& lhs,
			const CTextureSequenceHashKey_t& rhs);  // 721
	}
	Find(const CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureS this,
		CTextureSequenceHashKey_t uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 744
	CThreadSpinRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 745
	Find(const CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureS this,
		CTextureSequenceHashKey_t uiKey);  // 42
	Element(const CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureSequenc this,
		UtlTSHashHandle_t hHash);  // 58
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 58
	Element(const CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureSequenc this,
		UtlTSHashHandle_t hHash);  // 62
	Vector2D::operator=(
			const Vector2D& vOther);  // 62
	Element(const CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureSequenc this,
		UtlTSHashHandle_t hHash);  // 66
} /* size: 1103, variables: 2, inline expansions: 15 (484 bytes) */

// <002A5C86> rendersystem/sheetcache.cpp:72
// variables: 14
// function calls: 65
void CSheetDataTextureCache::GetSequenceTextureDataConstantBuffer(HRenderTexture hTexture)
{
	CTextureSequenceHashKey_t searchKey; // 74
	UtlTSHashHandle_t hFound; // 77
	CTextureSequenceRecord_t& record; // 91
	const char   __FUNCTION__; // 47988
	{
		const Sheet_t* pSheet; // 80
		CSheetHashConstructor constructor; // 84
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 80
		ITSHashConstructor<CTextureSequenceRecord_t>::ITSHashConstructor(); // 118
		CSheetHashConstructor::CSheetHashConstructor(
					const Sheet_t* pSheet,
					CSheetDataTextureCache* pCache);  // 84
		HashItem<ResourceId_t>(const ResourceId_t& item); // 32
		CTextureSequenceHashKey_t::HashValue(); // 87
		Hash(const CTextureSequenceHashKey_t& key,
			int nBucketMask);  // 734
		{
			HashFixedData_t* pElement; // 719
			ResourceId_t::operator==(
					const ResourceId_t& other);  // 37
			CTextureSequenceHashKey_t::operator==(
					const CTextureSequenceHashKey_t& other);  // 93
			Compare(const CTextureSequenceHashKey_t& lhs,
				const CTextureSequenceHashKey_t& rhs);  // 721
		}
		Find(const CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureS this,
			CTextureSequenceHashKey_t uiKey,
			HashFixedData_t* pFirstElement,
			HashFixedData_t* pLastElement);  // 736
		CThreadSpinRWLock::LockForRead(
				const char* pFileName,
				int nLineNumber);  // 743
		{
			HashFixedData_t* pElement; // 719
			ResourceId_t::operator==(
					const ResourceId_t& other);  // 37
			CTextureSequenceHashKey_t::operator==(
					const CTextureSequenceHashKey_t& other);  // 93
			Compare(const CTextureSequenceHashKey_t& lhs,
				const CTextureSequenceHashKey_t& rhs);  // 721
		}
		Find(const CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureS this,
			CTextureSequenceHashKey_t uiKey,
			HashFixedData_t* pFirstElement,
			HashFixedData_t* pLastElement);  // 744
		CThreadSpinRWLock::UnlockRead(
				const char* pFileName,
				int nLineNumber);  // 745
		Find(const CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureS this,
			CTextureSequenceHashKey_t uiKey);  // 507
		HashItem<ResourceId_t>(const ResourceId_t& item); // 32
		CTextureSequenceHashKey_t::HashValue(); // 87
		Hash(const CTextureSequenceHashKey_t& key,
			int nBucketMask);  // 512
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
			ResourceId_t::operator==(
					const ResourceId_t& other);  // 37
			CTextureSequenceHashKey_t::operator==(
					const CTextureSequenceHashKey_t& other);  // 93
			Compare(const CTextureSequenceHashKey_t& lhs,
				const CTextureSequenceHashKey_t& rhs);  // 721
		}
		Find(const CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureS this,
			CTextureSequenceHashKey_t uiKey,
			HashFixedData_t* pFirstElement,
			HashFixedData_t* pLastElement);  // 516
		Alloc(const CUtlMemoryPool<CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod< this); // 438
		InsertUncommitted(const CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureSequenc this,
					CTextureSequenceHashKey_t uiKey,
					HashBucket_t& bucket);  // 521
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 24
		Vector2D::Vector2D(); // 24
		CTextureSequenceRecord_t::CTextureSequenceRecord_t(); // 1479
		Construct<CTextureSequenceRecord_t>(CTextureSequenceRecord_t* pMemory); // 125
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 127
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 127
		CSheetHashConstructor::Construct(
				CTextureSequenceRecord_t* pElement);  // 522
		Insert(const CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureSequenc this,
			CTextureSequenceHashKey_t uiKey,
			ITSHashConstructor<CTextureSequenceRecord_t>* pConstructor,
			bool* pDidInsert);  // 85
	}
	{
		float bufferData; // 94
		ConstantBufferHandle_t hConstantBuffer; // 103
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 118
		}
		ComputeSheetShaderData(Vector2D* pUVs,
					int nTexWidth,
					int nTexHeight,
					int nSeqCount,
					float* pData,
					int nData);  // 126
		ComputeSheetShaderData(Vector2D* pUVs,
					int nTexWidth,
					int nTexHeight,
					int nSeqCount,
					float* pData,
					int nData);  // 96
		ThreadInterlockedAssignIf64(volatile int64* pDest,
						int64 value,
						int64 comparand);  // 459
		InterlockedAssignIf<ConstantBufferHandle_t__*>(ConstantBufferHandle_t__** p,
								ConstantBufferHandle_t__* const& value,
								ConstantBufferHandle_t__* const& comparand);  // 113
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator ResourceHandle_t(); // 75
	HashItem<ResourceId_t>(const ResourceId_t& item); // 32
	CTextureSequenceHashKey_t::HashValue(); // 87
	Hash(const CTextureSequenceHashKey_t& key,
		int nBucketMask);  // 734
	{
		HashFixedData_t* pElement; // 719
		ResourceId_t::operator==(
				const ResourceId_t& other);  // 37
		CTextureSequenceHashKey_t::operator==(
				const CTextureSequenceHashKey_t& other);  // 93
		Compare(const CTextureSequenceHashKey_t& lhs,
			const CTextureSequenceHashKey_t& rhs);  // 721
	}
	Find(const CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureS this,
		CTextureSequenceHashKey_t uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 736
	CThreadSpinRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 743
	{
		HashFixedData_t* pElement; // 719
		ResourceId_t::operator==(
				const ResourceId_t& other);  // 37
		CTextureSequenceHashKey_t::operator==(
				const CTextureSequenceHashKey_t& other);  // 93
		Compare(const CTextureSequenceHashKey_t& lhs,
			const CTextureSequenceHashKey_t& rhs);  // 721
	}
	Find(const CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureS this,
		CTextureSequenceHashKey_t uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 744
	CThreadSpinRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 745
	Find(const CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureS this,
		CTextureSequenceHashKey_t uiKey);  // 77
} /* size: 0, variables: 4, inline expansions: 9 (404 bytes) */

// <00288D1F> rendersystem/sheetcache.cpp:72
// variables: 14
// function calls: 65
void CSheetDataTextureCache::GetSequenceTextureDataConstantBuffer(HRenderTexture hTexture)
{
	CTextureSequenceHashKey_t searchKey; // 74
	UtlTSHashHandle_t hFound; // 77
	CTextureSequenceRecord_t& record; // 91
	const char   __FUNCTION__; // 30522
	{
		const Sheet_t* pSheet; // 80
		CSheetHashConstructor constructor; // 84
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 80
		ITSHashConstructor<CTextureSequenceRecord_t>::ITSHashConstructor(); // 118
		CSheetHashConstructor::CSheetHashConstructor(
					const Sheet_t* pSheet,
					CSheetDataTextureCache* pCache);  // 84
		HashItem<ResourceId_t>(const ResourceId_t& item); // 32
		CTextureSequenceHashKey_t::HashValue(); // 87
		Hash(const CTextureSequenceHashKey_t& key,
			int nBucketMask);  // 734
		{
			HashFixedData_t* pElement; // 719
			ResourceId_t::operator==(
					const ResourceId_t& other);  // 37
			CTextureSequenceHashKey_t::operator==(
					const CTextureSequenceHashKey_t& other);  // 93
			Compare(const CTextureSequenceHashKey_t& lhs,
				const CTextureSequenceHashKey_t& rhs);  // 721
		}
		Find(const CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureS this,
			CTextureSequenceHashKey_t uiKey,
			HashFixedData_t* pFirstElement,
			HashFixedData_t* pLastElement);  // 736
		CThreadSpinRWLock::LockForRead(
				const char* pFileName,
				int nLineNumber);  // 743
		{
			HashFixedData_t* pElement; // 719
			ResourceId_t::operator==(
					const ResourceId_t& other);  // 37
			CTextureSequenceHashKey_t::operator==(
					const CTextureSequenceHashKey_t& other);  // 93
			Compare(const CTextureSequenceHashKey_t& lhs,
				const CTextureSequenceHashKey_t& rhs);  // 721
		}
		Find(const CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureS this,
			CTextureSequenceHashKey_t uiKey,
			HashFixedData_t* pFirstElement,
			HashFixedData_t* pLastElement);  // 744
		CThreadSpinRWLock::UnlockRead(
				const char* pFileName,
				int nLineNumber);  // 745
		Find(const CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureS this,
			CTextureSequenceHashKey_t uiKey);  // 507
		HashItem<ResourceId_t>(const ResourceId_t& item); // 32
		CTextureSequenceHashKey_t::HashValue(); // 87
		Hash(const CTextureSequenceHashKey_t& key,
			int nBucketMask);  // 512
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
			ResourceId_t::operator==(
					const ResourceId_t& other);  // 37
			CTextureSequenceHashKey_t::operator==(
					const CTextureSequenceHashKey_t& other);  // 93
			Compare(const CTextureSequenceHashKey_t& lhs,
				const CTextureSequenceHashKey_t& rhs);  // 721
		}
		Find(const CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureS this,
			CTextureSequenceHashKey_t uiKey,
			HashFixedData_t* pFirstElement,
			HashFixedData_t* pLastElement);  // 516
		Alloc(const CUtlMemoryPool<CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod< this); // 438
		InsertUncommitted(const CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureSequenc this,
					CTextureSequenceHashKey_t uiKey,
					HashBucket_t& bucket);  // 521
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 24
		Vector2D::Vector2D(); // 24
		CTextureSequenceRecord_t::CTextureSequenceRecord_t(); // 1479
		Construct<CTextureSequenceRecord_t>(CTextureSequenceRecord_t* pMemory); // 125
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 127
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 127
		CSheetHashConstructor::Construct(
				CTextureSequenceRecord_t* pElement);  // 522
		Insert(const CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureSequenc this,
			CTextureSequenceHashKey_t uiKey,
			ITSHashConstructor<CTextureSequenceRecord_t>* pConstructor,
			bool* pDidInsert);  // 85
	}
	{
		float bufferData; // 94
		ConstantBufferHandle_t hConstantBuffer; // 103
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 118
		}
		ComputeSheetShaderData(Vector2D* pUVs,
					int nTexWidth,
					int nTexHeight,
					int nSeqCount,
					float* pData,
					int nData);  // 126
		ComputeSheetShaderData(Vector2D* pUVs,
					int nTexWidth,
					int nTexHeight,
					int nSeqCount,
					float* pData,
					int nData);  // 96
		ThreadInterlockedAssignIf64(volatile int64* pDest,
						int64 value,
						int64 comparand);  // 459
		InterlockedAssignIf<ConstantBufferHandle_t__*>(ConstantBufferHandle_t__** p,
								ConstantBufferHandle_t__* const& value,
								ConstantBufferHandle_t__* const& comparand);  // 113
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator ResourceHandle_t(); // 75
	HashItem<ResourceId_t>(const ResourceId_t& item); // 32
	CTextureSequenceHashKey_t::HashValue(); // 87
	Hash(const CTextureSequenceHashKey_t& key,
		int nBucketMask);  // 734
	{
		HashFixedData_t* pElement; // 719
		ResourceId_t::operator==(
				const ResourceId_t& other);  // 37
		CTextureSequenceHashKey_t::operator==(
				const CTextureSequenceHashKey_t& other);  // 93
		Compare(const CTextureSequenceHashKey_t& lhs,
			const CTextureSequenceHashKey_t& rhs);  // 721
	}
	Find(const CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureS this,
		CTextureSequenceHashKey_t uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 736
	CThreadSpinRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 743
	{
		HashFixedData_t* pElement; // 719
		ResourceId_t::operator==(
				const ResourceId_t& other);  // 37
		CTextureSequenceHashKey_t::operator==(
				const CTextureSequenceHashKey_t& other);  // 93
		Compare(const CTextureSequenceHashKey_t& lhs,
			const CTextureSequenceHashKey_t& rhs);  // 721
	}
	Find(const CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureS this,
		CTextureSequenceHashKey_t uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 744
	CThreadSpinRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 745
	Find(const CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureS this,
		CTextureSequenceHashKey_t uiKey);  // 77
} /* size: 0, variables: 4, inline expansions: 9 (404 bytes) */

// <002A5861> rendersystem/sheetcache.cpp:132
// variables: 3
// function calls: 15
void CSheetDataTextureCache::Shutdown()
{
	CInterlockedIntT<int, 4>::operator int(); // 68
	CUtlMemoryPoolBase::Count(); // 675
	{
		int i; // 683
		{
			HashBucket_t& bucket; // 685
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
					int nLineNumber);  // 687
			{
				HashFixedData_t* pElement; // 689
				CTextureSequenceRecord_t::~CTextureSequenceRecord_t(); // 1526
				Destruct<CTextureSequenceRecord_t>(CTextureSequenceRecord_t* pMemory); // 691
			}
		}
	}
	RemoveAll(const CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureSequenc this); // 668
	RemoveAll(const CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureSequenc this); // 88
	CSheetDataTextureCache::RemoveAll(); // 134
} /* size: 325, inline expansions: 5 (748 bytes) */

// <002A5810> rendersystem/sheetcache.cpp:138
void CSheetDataTextureCache::GetSheetCacheTextureSize(int& nWidth, int& nHeight)
{
} /* size: 21 */

// <002A95C4> rendersystem/sheetcache.cpp:144
void CSheetDataTextureCache::FlushAllSheetData()
{
} /* size: 12 */

// <002A5328> rendersystem/sheetcache.cpp:149
// variables: 5
// function calls: 18
void CSheetDataTextureCache::OnRenderEnd()
{
	{
		int i; // 591
		{
			HashBucket_t& bucket; // 593
		}
	}
	Commit(const CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureSequenc this); // 579
	Commit(const CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureSequenc this); // 79
	CSheetDataTextureCache::Commit(); // 158
	CInterlockedIntT<int, 4>::operator int(); // 68
	CUtlMemoryPoolBase::Count(); // 675
	{
		int i; // 683
		{
			HashBucket_t& bucket; // 685
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
					int nLineNumber);  // 687
			{
				HashFixedData_t* pElement; // 689
				CTextureSequenceRecord_t::~CTextureSequenceRecord_t(); // 1526
				Destruct<CTextureSequenceRecord_t>(CTextureSequenceRecord_t* pMemory); // 691
			}
		}
	}
	RemoveAll(const CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureSequenc this); // 668
	RemoveAll(const CUtlTSHashBase<CTextureSequenceRecord_t, 128, CTextureSequenceHashKey_t, CUtlTSHashUseKeyHashMethod<CTextureSequenc this); // 88
	CSheetDataTextureCache::RemoveAll(); // 153
} /* size: 445, inline expansions: 8 (995 bytes) */

// <002A4B25> rendersystem/sheetcache.cpp:163
// variables: 2
// function calls: 33
void CSheetDataTextureCache::InitTexture()
{
	{
		int nSheetCacheTextureRows; // 169
		CTextureCreationDesc sheetTexHeader; // 177
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 222
		V_memset(void* dest,
			int fill,
			size_t count);  // 142
		CTextureDesc::CTextureDesc(); // 221
		Vector4D::Vector4D(); // 221
		CUtlMemory<TextureCreationExtraData_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<TextureCreationExtraData_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::CUtlVector(); // 221
		CTextureCreationDesc::CTextureCreationDesc(); // 177
		Vector4D::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 184
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 570
		CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
			ResourceHandleTyped_t hResource);  // 673
		CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 673
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 188
		CTextureDesc::operator=(
				const CTextureDesc& rhs);  // 189
		CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::RemoveAll(); // 1798
		CUtlMemory<TextureCreationExtraData_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 903
		CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 1799
		CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::Purge(); // 560
		ValidateAlignment<TextureCreationExtraData_t>(void); // 508
		CUtlMemory<TextureCreationExtraData_t, int>::Purge(); // 510
		CUtlMemory<TextureCreationExtraData_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> >::~CUtlVector(); // 234
		CTextureCreationDesc::~CTextureCreationDesc(); // 190
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 167
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator==(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 167
} /* size: 583, inline expansions: 4 (0 bytes) */

// <0029E9D1> rendersystem/sheetcache.cpp:195
// member variables: 4
// struct size: 8
struct FrameControlData_t {
	uint16 m_nBlendValue; /* 0 2 */
	uint16 m_nTimeScale; /* 2 2 */
	uint16 m_nClamp; /* 4 2 */
	uint16 m_nEndBlendValue; /* 6 2 */
};

// <002A4A4F> rendersystem/sheetcache.cpp:210
// variables: 5
inline void SetTexturePixelsForRect(const FrameRect_t& rc, uint16* pSampleOut, const uint16 uiOffset, const uint16 uiRange)
{
	const char   __FUNCTION__; // 47692
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 215
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 216
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 217
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 218
	}
} /* size: 0, variables: 1 */

// <00287AE8> rendersystem/sheetcache.cpp:210
// variables: 5
inline void SetTexturePixelsForRect(const FrameRect_t& rc, uint16* pSampleOut, const uint16 uiOffset, const uint16 uiRange)
{
	const char   __FUNCTION__; // 30226
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 215
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 216
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 217
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 218
	}
} /* size: 0, variables: 1 */

// <002A4A06> rendersystem/sheetcache.cpp:226
// variable: 1
inline FrameRect_t ComputeRelativeRect(const FrameRect_t& rcFull, const FrameRect_t& rcCrop, int iModifier)
{
	FrameRect_t res; // 228
} /* size: 0, variables: 1 */

// <002A498F> rendersystem/sheetcache.cpp:236
// variables: 4
inline FrameRect_t ComputeFractionRect(const FrameRect_t& rcFull, const FrameRect_t& rcCrop, int iModifier)
{
	{
		FrameRect_t res; // 241
		FrameRect_t fullWH; // 241
	}
	{
		FrameRect_t res; // 250
		FrameRect_t fullWH; // 250
	}
} /* size: 0 */

// <002A4949> rendersystem/sheetcache.cpp:259
// variable: 1
inline FrameRect_t ComputeUnionRect(const FrameRect_t& rcA, const FrameRect_t& rcB)
{
	FrameRect_t res; // 261
} /* size: 0, variables: 1 */

// <002A321F> rendersystem/sheetcache.cpp:269
// variables: 39
// function calls: 61
void CSheetDataTextureCache::AllocateAndUploadSequenceData(const Sheet_t* pSheet, Vector2D* pUVOut, int* pSequenceCountOut)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_271; // 271
	CSheet expandedSheet; // 286
	int nNewScanLine; // 289
	const char   __FUNCTION__; // 47829
	{
		int s; // 309
		{
			CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > vecData; // 312
			uint16* nData; // 314
			int nNumRecords; // 315
			CRenderContextPtr pRenderContext; // 405
			Rect3D_t subRect; // 406
			int nSizePerPixel; // 414
			{
				int i; // 317
				{
					uint16* pFrmOut; // 319
					FrameControlData_t* pFrameControlData; // 321
					float flAge; // 323
					const SheetSequenceSample_t* pSample; // 324
					bool bTimeClamp; // 329
					uint16* pSampleOut; // 363
					FrameRect_t rcCrop0; // 365
					FrameRect_t rcCrop1; // 366
					FrameRect_t rcCropUnion; // 367
					{
						float flAgeNextFrame; // 339
						const SheetSequenceSample_t* pSampleNextFrame; // 340
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 376
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 377
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 378
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 379
					}
					{
						FrameRect_t res; // 250
						FrameRect_t fullWH; // 250
						ComputeRelativeRect(const FrameRect_t& rcFull,
									const FrameRect_t& rcCrop,
									int iModifier);  // 250
						ComputeRelativeRect(const FrameRect_t& rcFull,
									const FrameRect_t& rcCrop,
									int iModifier);  // 255
					}
					ComputeFractionRect(const FrameRect_t& rcFull,
								const FrameRect_t& rcCrop,
								int iModifier);  // 381
					{
						FrameRect_t res; // 250
						FrameRect_t fullWH; // 250
						ComputeRelativeRect(const FrameRect_t& rcFull,
									const FrameRect_t& rcCrop,
									int iModifier);  // 250
						ComputeRelativeRect(const FrameRect_t& rcFull,
									const FrameRect_t& rcCrop,
									int iModifier);  // 255
					}
					ComputeFractionRect(const FrameRect_t& rcFull,
								const FrameRect_t& rcCrop,
								int iModifier);  // 382
					{
					}
					{
					}
					{
					}
					{
					}
					SetTexturePixelsForRect(const FrameRect_t& rc,
								uint16* pSampleOut,
								const uint16  uiOffset,
								const uint16  uiRange);  // 389
					{
					}
					{
					}
					{
					}
					{
					}
					SetTexturePixelsForRect(const FrameRect_t& rc,
								uint16* pSampleOut,
								const uint16  uiOffset,
								const uint16  uiRange);  // 392
					{
					}
					{
					}
					{
					}
					{
					}
					SetTexturePixelsForRect(const FrameRect_t& rc,
								uint16* pSampleOut,
								const uint16  uiOffset,
								const uint16  uiRange);  // 396
					CUtlMemory<CSheet::SheetInfo_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
							int i);  // 369
					CUtlMemory<CSheet::SheetInfo_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
							int i);  // 347
					{
						FrameRect_t res; // 241
						FrameRect_t fullWH; // 241
						ComputeRelativeRect(const FrameRect_t& rcFull,
									const FrameRect_t& rcCrop,
									int iModifier);  // 241
						ComputeRelativeRect(const FrameRect_t& rcFull,
									const FrameRect_t& rcCrop,
									int iModifier);  // 241
					}
					ComputeFractionRect(const FrameRect_t& rcFull,
								const FrameRect_t& rcCrop,
								int iModifier);  // 365
					{
						FrameRect_t res; // 241
						FrameRect_t fullWH; // 241
						ComputeRelativeRect(const FrameRect_t& rcFull,
									const FrameRect_t& rcCrop,
									int iModifier);  // 241
						ComputeRelativeRect(const FrameRect_t& rcFull,
									const FrameRect_t& rcCrop,
									int iModifier);  // 241
					}
					ComputeFractionRect(const FrameRect_t& rcFull,
								const FrameRect_t& rcCrop,
								int iModifier);  // 366
					memset(void* __dest,
						int __ch,
						size_t __len);  // 326
					CUtlMemory<CSheet::SheetInfo_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
							int i);  // 329
				}
			}
			{
				int* _pCrash; // 402
			}
			{
				float* flData; // 422
				{
					int i; // 423
					{
						float flValue; // 425
					}
				}
			}
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 402
			CRenderContextPtr::CRenderContextPtr<>(
						IRenderDevice* pDevice,
						const char* pDebugStringFmt);  // 405
			CRenderContextPtr::operator->(); // 430
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
						ResourceHandle_t hUntypedResource);  // 227
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
			CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 430
			CRenderContextPtr::Release(); // 845
			CRenderContextPtr::~CRenderContextPtr(); // 432
			CUtlMemory<short unsigned int, int>::Purge(); // 903
			CUtlMemory<short unsigned int, int>::Purge(); // 1799
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Purge(); // 560
			ValidateAlignment<short unsigned int>(void); // 508
			CUtlMemory<short unsigned int, int>::Purge(); // 510
			CUtlMemory<short unsigned int, int>::~CUtlMemory(); // 562
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVectorBase(); // 410
			CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVector(); // 432
			CUtlMemory<short unsigned int, int>::ValidateGrowSize(); // 475
			CUtlMemory<short unsigned int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::CUtlVector(); // 312
			CUtlMemory<short unsigned int, int>::Grow(
				int num);  // 806
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::GrowMemory(
					int num);  // 784
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::GrowVector(
					int num);  // 1445
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1437
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1294
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::AddMultipleToTail(
						int num);  // 1319
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::SetCount(
				int count);  // 313
		}
		CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::Count(); // 309
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 271
	CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::Count(); // 289
	CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::Count(); // 308
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 433
	CSheetDataTextureCache::FlushAllSheetData(); // 300
} /* size: 0, variables: 4, inline expansions: 9 (293 bytes) */

// <002862B8> rendersystem/sheetcache.cpp:269
// variables: 39
// function calls: 61
void CSheetDataTextureCache::AllocateAndUploadSequenceData(const Sheet_t* pSheet, Vector2D* pUVOut, int* pSequenceCountOut)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_271; // 271
	CSheet expandedSheet; // 286
	int nNewScanLine; // 289
	const char   __FUNCTION__; // 30363
	{
		int s; // 309
		{
			CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > vecData; // 312
			uint16* nData; // 314
			int nNumRecords; // 315
			CRenderContextPtr pRenderContext; // 405
			Rect3D_t subRect; // 406
			int nSizePerPixel; // 414
			{
				int i; // 317
				{
					uint16* pFrmOut; // 319
					FrameControlData_t* pFrameControlData; // 321
					float flAge; // 323
					const SheetSequenceSample_t* pSample; // 324
					bool bTimeClamp; // 329
					uint16* pSampleOut; // 363
					FrameRect_t rcCrop0; // 365
					FrameRect_t rcCrop1; // 366
					FrameRect_t rcCropUnion; // 367
					{
						float flAgeNextFrame; // 339
						const SheetSequenceSample_t* pSampleNextFrame; // 340
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 376
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 377
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 378
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 379
					}
					{
						FrameRect_t res; // 250
						FrameRect_t fullWH; // 250
						ComputeRelativeRect(const FrameRect_t& rcFull,
									const FrameRect_t& rcCrop,
									int iModifier);  // 250
						ComputeRelativeRect(const FrameRect_t& rcFull,
									const FrameRect_t& rcCrop,
									int iModifier);  // 255
					}
					ComputeFractionRect(const FrameRect_t& rcFull,
								const FrameRect_t& rcCrop,
								int iModifier);  // 381
					{
						FrameRect_t res; // 250
						FrameRect_t fullWH; // 250
						ComputeRelativeRect(const FrameRect_t& rcFull,
									const FrameRect_t& rcCrop,
									int iModifier);  // 250
						ComputeRelativeRect(const FrameRect_t& rcFull,
									const FrameRect_t& rcCrop,
									int iModifier);  // 255
					}
					ComputeFractionRect(const FrameRect_t& rcFull,
								const FrameRect_t& rcCrop,
								int iModifier);  // 382
					{
					}
					{
					}
					{
					}
					{
					}
					SetTexturePixelsForRect(const FrameRect_t& rc,
								uint16* pSampleOut,
								const uint16  uiOffset,
								const uint16  uiRange);  // 389
					{
					}
					{
					}
					{
					}
					{
					}
					SetTexturePixelsForRect(const FrameRect_t& rc,
								uint16* pSampleOut,
								const uint16  uiOffset,
								const uint16  uiRange);  // 392
					{
					}
					{
					}
					{
					}
					{
					}
					SetTexturePixelsForRect(const FrameRect_t& rc,
								uint16* pSampleOut,
								const uint16  uiOffset,
								const uint16  uiRange);  // 396
					CUtlMemory<CSheet::SheetInfo_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
							int i);  // 369
					CUtlMemory<CSheet::SheetInfo_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
							int i);  // 347
					{
						FrameRect_t res; // 241
						FrameRect_t fullWH; // 241
						ComputeRelativeRect(const FrameRect_t& rcFull,
									const FrameRect_t& rcCrop,
									int iModifier);  // 241
						ComputeRelativeRect(const FrameRect_t& rcFull,
									const FrameRect_t& rcCrop,
									int iModifier);  // 241
					}
					ComputeFractionRect(const FrameRect_t& rcFull,
								const FrameRect_t& rcCrop,
								int iModifier);  // 365
					{
						FrameRect_t res; // 241
						FrameRect_t fullWH; // 241
						ComputeRelativeRect(const FrameRect_t& rcFull,
									const FrameRect_t& rcCrop,
									int iModifier);  // 241
						ComputeRelativeRect(const FrameRect_t& rcFull,
									const FrameRect_t& rcCrop,
									int iModifier);  // 241
					}
					ComputeFractionRect(const FrameRect_t& rcFull,
								const FrameRect_t& rcCrop,
								int iModifier);  // 366
					memset(void* __dest,
						int __ch,
						size_t __len);  // 326
					CUtlMemory<CSheet::SheetInfo_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
							int i);  // 329
				}
			}
			{
				int* _pCrash; // 402
			}
			{
				float* flData; // 422
				{
					int i; // 423
					{
						float flValue; // 425
					}
				}
			}
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 402
			CRenderContextPtr::CRenderContextPtr<>(
						IRenderDevice* pDevice,
						const char* pDebugStringFmt);  // 405
			CRenderContextPtr::operator->(); // 430
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
						ResourceHandle_t hUntypedResource);  // 227
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
			CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 430
			CRenderContextPtr::Release(); // 845
			CRenderContextPtr::~CRenderContextPtr(); // 432
			CUtlMemory<short unsigned int, int>::Purge(); // 903
			CUtlMemory<short unsigned int, int>::Purge(); // 1799
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Purge(); // 560
			ValidateAlignment<short unsigned int>(void); // 508
			CUtlMemory<short unsigned int, int>::Purge(); // 510
			CUtlMemory<short unsigned int, int>::~CUtlMemory(); // 562
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVectorBase(); // 410
			CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVector(); // 432
			CUtlMemory<short unsigned int, int>::ValidateGrowSize(); // 475
			CUtlMemory<short unsigned int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::CUtlVector(); // 312
			CUtlMemory<short unsigned int, int>::Grow(
				int num);  // 806
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::GrowMemory(
					int num);  // 784
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::GrowVector(
					int num);  // 1445
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1437
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1294
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::AddMultipleToTail(
						int num);  // 1319
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::SetCount(
				int count);  // 313
		}
		CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::Count(); // 309
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 271
	CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::Count(); // 289
	CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::Count(); // 308
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 433
	CSheetDataTextureCache::FlushAllSheetData(); // 300
} /* size: 0, variables: 4, inline expansions: 9 (293 bytes) */

