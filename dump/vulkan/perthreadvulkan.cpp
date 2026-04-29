
//
// vulkan/perthreadvulkan.cpp
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 4
//

// <005DB04B> vulkan/perthreadvulkan.cpp:15
// variables: 6
// function calls: 61
void ShutdownPerThreadDataPool(void)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_17; // 17
	{
		int i; // 18
		CUtlVectorBase<PerThreadDataVulkan_t::Count(); // 18
		CUtlMemory<PerThreadDataVulkan_t::operator[](
				int i);  // 588
		CUtlVectorBase<PerThreadDataVulkan_t::operator[](
				int i);  // 20
		CUtlVectorBase<VulkanDynamicDescriptorSet_t::RemoveAll(); // 1798
		CUtlMemory<VulkanDynamicDescriptorSet_t::IsExternallyAllocated(); // 905
		CUtlMemory<VulkanDynamicDescriptorSet_t::Purge(); // 903
		CUtlMemory<VulkanDynamicDescriptorSet_t::Purge(); // 1799
		CUtlVectorBase<VulkanDynamicDescriptorSet_t::Purge(); // 560
		ValidateAlignment<VulkanDynamicDescriptorSet_t*>(void); // 508
		CUtlMemory<VulkanDynamicDescriptorSet_t::Purge(); // 510
		CUtlMemory<VulkanDynamicDescriptorSet_t::~CUtlMemory(); // 562
		CUtlVectorBase<VulkanDynamicDescriptorSet_t::~CUtlVectorBase(); // 410
		CUtlVector<VulkanDynamicDescriptorSet_t::~CUtlVector(); // 50
		{
			BlockHeader_t* pbh; // 338
			{
				BlockHeader_t* pFree; // 340
			}
		}
		CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::Purge(); // 167
		CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::~CUtlFixedMemory(); // 462
		~CUtlLinkedList(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this); // 400
		CUtlFixedLinkedList<VulkanDescriptorSetPool_t>::~CUtlFixedLinkedList(); // 50
		{
			BlockHeader_t* pbh; // 338
			{
				BlockHeader_t* pFree; // 340
			}
		}
		CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::Purge(); // 167
		CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::~CUtlFixedMemory(); // 462
		~CUtlLinkedList(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this); // 400
		CUtlFixedLinkedList<VulkanDescriptorSetPool_t>::~CUtlFixedLinkedList(); // 50
		CUtlVectorBase<CIndexBufferVulkan::RemoveAll(); // 1798
		CUtlMemory<CIndexBufferVulkan::IsExternallyAllocated(); // 905
		CUtlMemory<CIndexBufferVulkan::Purge(); // 903
		CUtlMemory<CIndexBufferVulkan::Purge(); // 1799
		CUtlVectorBase<CIndexBufferVulkan::Purge(); // 560
		ValidateAlignment<CIndexBufferVulkan*>(void); // 508
		CUtlMemory<CIndexBufferVulkan::Purge(); // 510
		CUtlMemory<CIndexBufferVulkan::~CUtlMemory(); // 562
		CUtlVectorBase<CIndexBufferVulkan::~CUtlVectorBase(); // 410
		CUtlVector<CIndexBufferVulkan::~CUtlVector(); // 50
		CUtlVectorBase<CVertexBufferVulkan::RemoveAll(); // 1798
		CUtlMemory<CVertexBufferVulkan::IsExternallyAllocated(); // 905
		CUtlMemory<CVertexBufferVulkan::Purge(); // 903
		CUtlMemory<CVertexBufferVulkan::Purge(); // 1799
		CUtlVectorBase<CVertexBufferVulkan::Purge(); // 560
		ValidateAlignment<CVertexBufferVulkan*>(void); // 508
		CUtlMemory<CVertexBufferVulkan::Purge(); // 510
		CUtlMemory<CVertexBufferVulkan::~CUtlMemory(); // 562
		CUtlVectorBase<CVertexBufferVulkan::~CUtlVectorBase(); // 410
		CUtlVector<CVertexBufferVulkan::~CUtlVector(); // 50
		PerThreadDataVulkan_t::~PerThreadDataVulkan_t(); // 20
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
			int nLineNumber);  // 17
	CUtlMemory<PerThreadDataVulkan_t::IsExternallyAllocated(); // 577
	CUtlMemory<PerThreadDataVulkan_t::ConvertToExternalMemory(
				PerThreadDataVulkan_t** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<PerThreadDataVulkan_t::Purge_FixedGrowable(
				PerThreadDataVulkan_t** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<PerThreadDataVulkan_t::Purge_FixedGrowable(
				PerThreadDataVulkan_t** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<128, PerThreadDataVulkan_t::Base(); // 237
	CUtlMemoryFixedGrowable<PerThreadDataVulkan_t::Purge(
		int numElements);  // 1799
	CUtlVectorBase<PerThreadDataVulkan_t::RemoveAll(); // 1798
	CUtlVectorBase<PerThreadDataVulkan_t::ResetDbgInfo(); // 1800
	CUtlVectorBase<PerThreadDataVulkan_t::Purge(); // 22
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 23
} /* size: 560, variables: 1, inline expansions: 19 (1047 bytes) */

// <005D9EE1> vulkan/perthreadvulkan.cpp:40
// variables: 5
// function calls: 61
PerThreadDataVulkan_t* AcquirePerThreadDataSlot(uint32 nCurrentFrame)
{
	PerThreadDataVulkan_t* pCached; // 43
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_51; // 51
	ThreadId_t nCurrentThread; // 53
	PerThreadDataVulkan_t* pFreeSlot; // 54
	{
		int i; // 55
		CUtlVectorBase<PerThreadDataVulkan_t::Count(); // 55
		CUtlMemory<PerThreadDataVulkan_t::operator[](
				int i);  // 588
		CUtlVectorBase<PerThreadDataVulkan_t::operator[](
				int i);  // 57
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
			int nLineNumber);  // 51
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 74
	CUtlMemory<PerThreadDataVulkan_t::NumAllocated(); // 1196
	CUtlMemory<PerThreadDataVulkan_t::Base(); // 112
	CUtlVectorBase<PerThreadDataVulkan_t::Base(); // 368
	CUtlVectorBase<PerThreadDataVulkan_t::ResetDbgInfo(); // 824
	CUtlMemory<PerThreadDataVulkan_t::IsGrowable(); // 823
	CUtlMemory<PerThreadDataVulkan_t::IsExternallyAllocated(); // 859
	CUtlMemory<PerThreadDataVulkan_t::IsExternallyAllocated(); // 861
	CUtlMemory<PerThreadDataVulkan_t::Grow(
		int num);  // 806
	CUtlVectorBase<PerThreadDataVulkan_t::GrowMemory(
			int num);  // 1198
	CUtlMemory<PerThreadDataVulkan_t::operator[](
			int i);  // 602
	CUtlVectorBase<PerThreadDataVulkan_t::Element(
		int i);  // 1201
	CopyConstruct<PerThreadDataVulkan_t*>(PerThreadDataVulkan_t** pMemory,
						PerThreadDataVulkan_t* const& src);  // 1201
	CUtlVectorBase<PerThreadDataVulkan_t::AddToTail(
			PerThreadDataVulkan_t* const& src);  // 67
	CInterlockedIntT<int, 4>::CInterlockedIntT(
			int value);  // 50
	CUtlMemory<CVertexBufferVulkan::ValidateGrowSize(); // 475
	CUtlMemory<CVertexBufferVulkan::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CVertexBufferVulkan::ResetDbgInfo(); // 530
	CUtlVectorBase<CVertexBufferVulkan::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CVertexBufferVulkan::CUtlVector(); // 50
	CUtlMemory<CIndexBufferVulkan::ValidateGrowSize(); // 475
	CUtlMemory<CIndexBufferVulkan::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CIndexBufferVulkan::ResetDbgInfo(); // 530
	CUtlVectorBase<CIndexBufferVulkan::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CIndexBufferVulkan::CUtlVector(); // 50
	CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::Grow(
		int num);  // 193
	CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::Init(
		int nGrowSize,
		int nInitSize);  // 161
	CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::CUtlFixedMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 448
	Iterator_t::Iterator_t(
			BlockHeader_t* p,
			intp i);  // 96
	CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::InvalidIterator(); // 448
	ConstructList(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this); // 454
	ResetDbgInfo(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this); // 455
	CUtlLinkedList(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this,
			int growSize,
			int initSize);  // 404
	CUtlFixedLinkedList<VulkanDescriptorSetPool_t>::CUtlFixedLinkedList(
				int growSize,
				int initSize);  // 50
	CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::Grow(
		int num);  // 193
	CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::Init(
		int nGrowSize,
		int nInitSize);  // 161
	CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::CUtlFixedMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 448
	Iterator_t::Iterator_t(
			BlockHeader_t* p,
			intp i);  // 96
	CUtlFixedMemory<UtlLinkedListElem_t<VulkanDescriptorSetPool_t, long long int> >::InvalidIterator(); // 448
	ConstructList(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this); // 454
	ResetDbgInfo(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this); // 455
	CUtlLinkedList(const CUtlLinkedList<VulkanDescriptorSetPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<V this,
			int growSize,
			int initSize);  // 404
	CUtlFixedLinkedList<VulkanDescriptorSetPool_t>::CUtlFixedLinkedList(
				int growSize,
				int initSize);  // 50
	CUtlMemory<VulkanDynamicDescriptorSet_t::ValidateGrowSize(); // 475
	CUtlMemory<VulkanDynamicDescriptorSet_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VulkanDynamicDescriptorSet_t::ResetDbgInfo(); // 530
	CUtlVectorBase<VulkanDynamicDescriptorSet_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VulkanDynamicDescriptorSet_t::CUtlVector(); // 50
	PerThreadDataVulkan_t::PerThreadDataVulkan_t(); // 66
} /* size: 699, variables: 4, inline expansions: 58 (1425 bytes) */

// <005D9EBA> vulkan/perthreadvulkan.cpp:76
PerThreadDataVulkan_t* GetCurrentPerThreadDataNoAcquire(void)
{
} /* size: 29 */

// <005D9A65> vulkan/perthreadvulkan.cpp:82
// variables: 3
// function calls: 15
void ReclaimIdlePerThreadDataSlots(uint32 nCurrentFrame)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_84; // 84
	{
		int i; // 85
		{
			PerThreadDataVulkan_t* pEntry; // 87
			CUtlMemory<PerThreadDataVulkan_t::operator[](
					int i);  // 588
			CUtlVectorBase<PerThreadDataVulkan_t::operator[](
					int i);  // 87
			CInterlockedIntT<int, 4>::operator int(); // 57
			PerThreadDataVulkan_t::HasRefs(); // 89
		}
		CUtlVectorBase<PerThreadDataVulkan_t::Count(); // 85
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
			int nLineNumber);  // 84
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 95
} /* size: 241, variables: 1, inline expansions: 10 (469 bytes) */

