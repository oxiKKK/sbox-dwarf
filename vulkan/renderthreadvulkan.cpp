
//
// vulkan/renderthreadvulkan.cpp
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 48
//

// <00B89FFC> vulkan/renderthreadvulkan.cpp:34
// function calls: 81
void CRenderThreadVulkan::CRenderThreadVulkan(CRenderDeviceVulkan* pDevice)
{
	CTSListBase::CTSListBase(); // 846
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 862
	Node_t::Node_t(); // 864
	CTSQueue<VkFence_T::End(); // 865
	CTSQueue<VkFence_T::CTSQueue(); // 57
	CUtlMemory<UtlLinkedListElem_t<AsyncReadbackVulkan_t, short unsigned int>, short unsigned int>::ValidateGrowSize(); // 475
	CUtlMemory<UtlLinkedListElem_t<AsyncReadbackVulkan_t, short unsigned int>, short unsigned int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 448
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlLinkedListElem_t<AsyncReadbackVulkan_t, short unsigned int>, short unsigned int>::InvalidIterator(); // 448
	ConstructList(const CUtlLinkedList<AsyncReadbackVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t this); // 454
	ResetDbgInfo(const CUtlLinkedList<AsyncReadbackVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t this); // 455
	CUtlLinkedList(const CUtlLinkedList<AsyncReadbackVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t this,
			int growSize,
			int initSize);  // 57
	CUtlMemory<QueryObjectInternalVulkan_t::ValidateGrowSize(); // 475
	CUtlMemory<QueryObjectInternalVulkan_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<QueryObjectInternalVulkan_t::ResetDbgInfo(); // 530
	CUtlVectorBase<QueryObjectInternalVulkan_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<QueryObjectInternalVulkan_t::CUtlVector(); // 57
	CUtlMemory<UtlLinkedListElem_t<VulkanCommandBuffer_t::ValidateGrowSize(); // 475
	CUtlMemory<UtlLinkedListElem_t<VulkanCommandBuffer_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 448
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlLinkedListElem_t<VulkanCommandBuffer_t::InvalidIterator(); // 448
	CUtlLinkedList<VulkanCommandBuffer_t::ConstructList(); // 454
	CUtlLinkedList<VulkanCommandBuffer_t::ResetDbgInfo(); // 455
	CUtlLinkedList<VulkanCommandBuffer_t::CUtlLinkedList(
			int growSize,
			int initSize);  // 57
	CUtlMemory<VkCommandBuffer_T::ValidateGrowSize(); // 475
	CUtlMemory<VkCommandBuffer_T::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VkCommandBuffer_T::ResetDbgInfo(); // 530
	CUtlVectorBase<VkCommandBuffer_T::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VkCommandBuffer_T::CUtlVector(); // 57
	ValidateGrowSize(const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int>, short unsigned int this); // 475
	CUtlMemory(const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int>, short unsigned int this,
			int nGrowSize,
			int nInitAllocationCount);  // 448
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	InvalidIterator(const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int>, short unsign this); // 448
	ConstructList(const CUtlLinkedList<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int, false, short unsigned int, CUtlMemo this); // 454
	ResetDbgInfo(const CUtlLinkedList<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int, false, short unsigned int, CUtlMemo this); // 455
	CUtlLinkedList(const CUtlLinkedList<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int, false, short unsigned int, CUtlMemo this,
			int growSize,
			int initSize);  // 57
	ValidateGrowSize(const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int>, short unsigned int> this); // 475
	CUtlMemory(const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int>, short unsigned int>  this,
			int nGrowSize,
			int nInitAllocationCount);  // 448
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	InvalidIterator(const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int>, short unsigned this); // 448
	ConstructList(const CUtlLinkedList<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory this); // 454
	ResetDbgInfo(const CUtlLinkedList<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory this); // 455
	CUtlLinkedList(const CUtlLinkedList<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory this,
			int growSize,
			int initSize);  // 57
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 59
	CUtlMemory<VkSemaphore_T::ValidateGrowSize(); // 475
	CUtlMemory<VkSemaphore_T::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 105
	CUtlQueue<VkSemaphore_T::CUtlQueue(
			int growSize,
			int initSize);  // 57
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 57
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 51
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 476
	CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
		ResourceHandleTyped_t hResource);  // 476
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 51
	V_memset(void* dest,
		int fill,
		size_t count);  // 142
	CTextureDesc::CTextureDesc(); // 43
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 43
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 43
	TextureSpecification_t::TextureSpecification_t(); // 57
	CUtlMemory<VkSemaphore_T::ValidateGrowSize(); // 475
	CUtlMemory<VkSemaphore_T::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VkSemaphore_T::ResetDbgInfo(); // 530
	CUtlVectorBase<VkSemaphore_T::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VkSemaphore_T::CUtlVector(); // 57
	CUtlString::CUtlString(); // 57
	CUtlString::CUtlString(); // 57
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 60
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 63
} /* size: 799, inline expansions: 81 (996 bytes) */

// <00B89FD7> vulkan/renderthreadvulkan.cpp:34
void CRenderThreadVulkan::CRenderThreadVulkan(CRenderDeviceVulkan* pDevice)
{
} /* size: 0 */

// <00B86FC3> vulkan/renderthreadvulkan.cpp:66
// variables: 14
// function calls: 218
void CRenderThreadVulkan::~CRenderThreadVulkan()
{
	{
		VkFence pFence; // 118
		{
			int i; // 68
			{
				QueryObjectInternalVulkan_t* pQuery; // 70
			}
		}
		{
			short unsigned int nIndex; // 84
		}
		{
			short unsigned int nIndex; // 92
		}
		{
			VkSemaphore pSemaphore; // 108
		}
		{
			int nIndex; // 112
		}
	}
	{
		VkFence pFence; // 118
		{
			int i; // 68
			CUtlVectorBase<QueryObjectInternalVulkan_t::Count(); // 68
			{
				QueryObjectInternalVulkan_t* pQuery; // 70
				CUtlMemory<QueryObjectInternalVulkan_t::operator[](
						int i);  // 588
				CUtlVectorBase<QueryObjectInternalVulkan_t::operator[](
						int i);  // 70
				ThreadInterlockedDecrement(volatile int32* p); // 159
				Decrement(int* p); // 204
				CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
				CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
				CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 73
			}
		}
		CUtlVectorBase<QueryObjectInternalVulkan_t::RemoveAll(); // 1798
		CUtlMemory<QueryObjectInternalVulkan_t::Purge(); // 903
		CUtlMemory<QueryObjectInternalVulkan_t::IsExternallyAllocated(); // 905
		CUtlMemory<QueryObjectInternalVulkan_t::Purge(); // 1799
		CUtlVectorBase<QueryObjectInternalVulkan_t::ResetDbgInfo(); // 1800
		CUtlVectorBase<QueryObjectInternalVulkan_t::Purge(); // 76
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 80
		{
			short unsigned int nIndex; // 84
			Head(const CUtlLinkedList<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int, false, short unsigned int, CU this); // 84
			InvalidIndex(void); // 84
			operator[](const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int>, short unsigned int this,
					short unsigned int i);  // 494
			operator[](const CUtlLinkedList<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int, false, short unsigned int, CUtlMemo this,
					short unsigned int i);  // 86
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 204
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
			CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 86
			operator[](const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int>, short unsigned int this,
					short unsigned int i);  // 494
			operator[](const CUtlLinkedList<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int, false, short unsigned int, CUtlMemo this,
					short unsigned int i);  // 87
			VulkanDevice(void); // 87
			operator[](const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int>, short unsign this,
					short unsigned int i);  // 368
			InternalElement(const CUtlLinkedList<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int, false, short unsigned int, CU this,
					short unsigned int i);  // 550
			Next(const CUtlLinkedList<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int, false, short unsigned int, CU this,
				short unsigned int i);  // 84
		}
		VulkanDevice(void); // 149
		CRenderThreadVulkan::DestroyOutstandingSemaphores(); // 90
		{
			short unsigned int nIndex; // 92
			Head(const CUtlLinkedList<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int, false, short unsigned int, CUtl this); // 92
			InvalidIndex(void); // 92
			operator[](const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int>, short unsigned int>  this,
					short unsigned int i);  // 494
			operator[](const CUtlLinkedList<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory this,
					short unsigned int i);  // 94
			VulkanDevice(void); // 94
			operator[](const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int>, short unsigned int>  this,
					short unsigned int i);  // 494
			operator[](const CUtlLinkedList<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory this,
					short unsigned int i);  // 95
			operator[](const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int>, short unsigned this,
					short unsigned int i);  // 368
			InternalElement(const CUtlLinkedList<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int, false, short unsigned int, CUtl this,
					short unsigned int i);  // 550
			Next(const CUtlLinkedList<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int, false, short unsigned int, CUtl this,
				short unsigned int i);  // 92
		}
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 100
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator!=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 100
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 103
		CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
			ResourceHandleTyped_t hResource);  // 673
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 103
		{
			VkSemaphore pSemaphore; // 108
			CUtlMemory<VkSemaphore_T::Count(); // 313
			CUtlQueue<VkSemaphore_T::Previous_Unchecked(
						QueueIter_t it);  // 173
			{
			}
			CUtlMemory<VkSemaphore_T::operator[](
					int i);  // 165
			CUtlQueue<VkSemaphore_T::RemoveAtTail(
					VkSemaphore_T *& removedElement);  // 151
			CUtlQueue<VkSemaphore_T::RemoveAtTail(); // 108
			VulkanDevice(void); // 109
		}
		{
			int nIndex; // 112
			CUtlVectorBase<VkSemaphore_T::Count(); // 112
			CUtlMemory<VkSemaphore_T::operator[](
					int i);  // 588
			CUtlVectorBase<VkSemaphore_T::operator[](
					int i);  // 114
			VulkanDevice(void); // 114
		}
		CUtlVectorBase<VkSemaphore_T::RemoveAll(); // 1798
		CUtlMemory<VkSemaphore_T::IsExternallyAllocated(); // 905
		CUtlMemory<VkSemaphore_T::Purge(); // 903
		CUtlMemory<VkSemaphore_T::Purge(); // 1799
		CUtlVectorBase<VkSemaphore_T::ResetDbgInfo(); // 1800
		CUtlVectorBase<VkSemaphore_T::Purge(); // 116
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<VkFence_T::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<VkFence_T::PopItem(
			VkFence_T** pResult);  // 119
		VulkanDevice(void); // 121
		VulkanDevice(void); // 126
		VulkanDevice(void); // 131
		CInterlockedIntT<int, 4>::operator int(); // 56
		{
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 592
		CInterlockedIntT<int, 4>::operator--(
				int);  // 56
		PerThreadDataVulkan_t::Release(); // 139
	}
	CUtlString::~CUtlString(); // 142
	CUtlString::~CUtlString(); // 142
	ValidateAlignment<VkSemaphore_T*>(void); // 508
	CUtlMemory<VkSemaphore_T::IsExternallyAllocated(); // 905
	CUtlMemory<VkSemaphore_T::Purge(); // 903
	CUtlMemory<VkSemaphore_T::Purge(); // 510
	CUtlMemory<VkSemaphore_T::~CUtlMemory(); // 22
	CUtlQueue<VkSemaphore_T::~CUtlQueue(); // 142
	CUtlVectorBase<VkSemaphore_T::RemoveAll(); // 1798
	CUtlMemory<VkSemaphore_T::IsExternallyAllocated(); // 905
	CUtlMemory<VkSemaphore_T::Purge(); // 903
	CUtlMemory<VkSemaphore_T::Purge(); // 1799
	CUtlVectorBase<VkSemaphore_T::Purge(); // 560
	ValidateAlignment<VkSemaphore_T*>(void); // 508
	CUtlMemory<VkSemaphore_T::Purge(); // 510
	CUtlMemory<VkSemaphore_T::~CUtlMemory(); // 562
	CUtlVectorBase<VkSemaphore_T::~CUtlVectorBase(); // 410
	CUtlVector<VkSemaphore_T::~CUtlVector(); // 142
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 52
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 52
	TextureSpecification_t::~TextureSpecification_t(); // 142
	CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 142
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	ThreadPause(void); // 208
	CTSListBase::Pop(); // 890
	CInterlockedIntT<int, 4>::operator==(
			int rhs);  // 895
	{
	}
	{
	}
	{
	}
	CTSQueue<VkFence_T::Purge(); // 870
	CInterlockedIntT<int, 4>::operator==(
			int rhs);  // 871
	{
	}
	{
	}
	CTSQueue<VkFence_T::End(); // 873
	{
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 135
	CTSListBase::~CTSListBase(); // 876
	CTSQueue<VkFence_T::~CTSQueue(); // 142
	ValidateAlignment<UtlLinkedListElem_t<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int> >(void); // 508
	IsExternallyAllocated(const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int>, short unsigned this); // 905
	Purge(const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int>, short unsigned int> this); // 903
	Purge(const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int>, short unsigned int> this); // 510
	~CUtlMemory(const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int>, short unsigned int> this); // 462
	~CUtlLinkedList(const CUtlLinkedList<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory this); // 142
	ValidateAlignment<UtlLinkedListElem_t<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int> >(void); // 508
	IsExternallyAllocated(const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int>, short unsign this); // 905
	Purge(const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int>, short unsigned int this); // 903
	Purge(const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int>, short unsigned int this); // 510
	~CUtlMemory(const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int>, short unsigned int this); // 462
	~CUtlLinkedList(const CUtlLinkedList<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int, false, short unsigned int, CUtlMemo this); // 142
	CUtlVectorBase<VkCommandBuffer_T::RemoveAll(); // 1798
	CUtlMemory<VkCommandBuffer_T::IsExternallyAllocated(); // 905
	CUtlMemory<VkCommandBuffer_T::Purge(); // 903
	CUtlMemory<VkCommandBuffer_T::Purge(); // 1799
	CUtlVectorBase<VkCommandBuffer_T::Purge(); // 560
	ValidateAlignment<VkCommandBuffer_T*>(void); // 508
	CUtlMemory<VkCommandBuffer_T::Purge(); // 510
	CUtlMemory<VkCommandBuffer_T::~CUtlMemory(); // 562
	CUtlVectorBase<VkCommandBuffer_T::~CUtlVectorBase(); // 410
	CUtlVector<VkCommandBuffer_T::~CUtlVector(); // 142
	ValidateAlignment<UtlLinkedListElem_t<VulkanCommandBuffer_t*, short unsigned int> >(void); // 508
	CUtlMemory<UtlLinkedListElem_t<VulkanCommandBuffer_t::IsExternallyAllocated(); // 905
	CUtlMemory<UtlLinkedListElem_t<VulkanCommandBuffer_t::Purge(); // 903
	CUtlMemory<UtlLinkedListElem_t<VulkanCommandBuffer_t::Purge(); // 510
	CUtlMemory<UtlLinkedListElem_t<VulkanCommandBuffer_t::~CUtlMemory(); // 462
	CUtlLinkedList<VulkanCommandBuffer_t::~CUtlLinkedList(); // 142
	ValidateAlignment<UtlLinkedListElem_t<AsyncReadbackVulkan_t, short unsigned int> >(void); // 508
	CUtlMemory<UtlLinkedListElem_t<AsyncReadbackVulkan_t, short unsigned int>, short unsigned int>::IsExternallyAllocated(); // 905
	CUtlMemory<UtlLinkedListElem_t<AsyncReadbackVulkan_t, short unsigned int>, short unsigned int>::Purge(); // 903
	CUtlMemory<UtlLinkedListElem_t<AsyncReadbackVulkan_t, short unsigned int>, short unsigned int>::Purge(); // 510
	CUtlMemory<UtlLinkedListElem_t<AsyncReadbackVulkan_t, short unsigned int>, short unsigned int>::~CUtlMemory(); // 462
	~CUtlLinkedList(const CUtlLinkedList<AsyncReadbackVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t this); // 142
	CUtlVectorBase<QueryObjectInternalVulkan_t::RemoveAll(); // 1798
	CUtlMemory<QueryObjectInternalVulkan_t::IsExternallyAllocated(); // 905
	CUtlMemory<QueryObjectInternalVulkan_t::Purge(); // 903
	CUtlMemory<QueryObjectInternalVulkan_t::Purge(); // 1799
	CUtlVectorBase<QueryObjectInternalVulkan_t::Purge(); // 560
	ValidateAlignment<QueryObjectInternalVulkan_t*>(void); // 508
	CUtlMemory<QueryObjectInternalVulkan_t::Purge(); // 510
	CUtlMemory<QueryObjectInternalVulkan_t::~CUtlMemory(); // 562
	CUtlVectorBase<QueryObjectInternalVulkan_t::~CUtlVectorBase(); // 410
	CUtlVector<QueryObjectInternalVulkan_t::~CUtlVector(); // 142
	CThreadFastSemaphore::~CThreadFastSemaphore(); // 264
	CUtlVectorBase<CDependencyDescriptor::RemoveAll(); // 1798
	CUtlMemory<CDependencyDescriptor::IsExternallyAllocated(); // 577
	CUtlMemory<CDependencyDescriptor::ConvertToExternalMemory(
				CDependencyDescriptor** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CDependencyDescriptor::Purge_FixedGrowable(
				CDependencyDescriptor** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CDependencyDescriptor::Purge_FixedGrowable(
				CDependencyDescriptor** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<100, CDependencyDescriptor::Base(); // 237
	CUtlMemoryFixedGrowable<CDependencyDescriptor::Purge(
		int numElements);  // 1799
	CUtlMemory<CDependencyDescriptor::Base(); // 112
	CUtlVectorBase<CDependencyDescriptor::Base(); // 368
	CUtlVectorBase<CDependencyDescriptor::ResetDbgInfo(); // 1800
	CUtlVectorBase<CDependencyDescriptor::Purge(); // 560
	CUtlMemory<CDependencyDescriptor::Purge(); // 903
	CUtlMemory<CDependencyDescriptor::Purge(); // 510
	ValidateAlignment<CDependencyDescriptor*>(void); // 508
	CUtlMemory<CDependencyDescriptor::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CDependencyDescriptor::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CDependencyDescriptor::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CDependencyDescriptor::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CDependencyDescriptor::~CUtlVectorFixedGrowable(); // 264
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	ThreadPause(void); // 208
	CTSListBase::Pop(); // 890
	CInterlockedIntT<int, 4>::operator==(
			int rhs);  // 895
	{
	}
	{
	}
	{
	}
	CTSQueue<CCommandStream::Purge(); // 870
	CInterlockedIntT<int, 4>::operator==(
			int rhs);  // 871
	{
	}
	{
	}
	CTSQueue<CCommandStream::End(); // 873
	{
	}
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 135
	CTSListBase::~CTSListBase(); // 876
	CTSQueue<CCommandStream::~CTSQueue(); // 264
	CRenderThreadBase::~CRenderThreadBase(); // 142
} /* size: 0, inline expansions: 133 (6658 bytes) */

// <00B86F39> vulkan/renderthreadvulkan.cpp:66
// variables: 7
void CRenderThreadVulkan::~CRenderThreadVulkan()
{
	{
		VkFence pFence; // 118
		{
			int i; // 68
			{
				QueryObjectInternalVulkan_t* pQuery; // 70
			}
		}
		{
			short unsigned int nIndex; // 84
		}
		{
			short unsigned int nIndex; // 92
		}
		{
			VkSemaphore pSemaphore; // 108
		}
		{
			int nIndex; // 112
		}
	}
} /* size: 0 */

// <00B8DA09> vulkan/renderthreadvulkan.cpp:145
// function call: 1
void CRenderThreadVulkan::DestroyOutstandingSemaphores()
{
	VulkanDevice(void); // 149
} /* size: 81, inline expansions: 1 (10 bytes) */

// <00B86F20> vulkan/renderthreadvulkan.cpp:145
void CRenderThreadVulkan::DestroyOutstandingSemaphores()
{
} /* size: 0 */

// <00B82E82> vulkan/renderthreadvulkan.cpp:157
// variables: 42
// function calls: 242
void CRenderThreadVulkan::OnReadPixels(const CommandReadTexturePixelsVulkan_t& cmd)
{
	CVulkanImage* pTextureToRead; // 159
	CMemoryManagerVulkan* pMemoryManager; // 167
	VkCommandBuffer pCmdBuffer; // 169
	const char   __FUNCTION__; // 26806
	const ImageFormatInfo_t& fmt; // 174
	size_t nSrcBitsPerTexel; // 175
	size_t nStagingMemSize; // 176
	VkDeviceMemory pStagingMemory; // 178
	VkBuffer pStagingBuffer; // 179
	int nMemoryFlagBits; // 182
	VkCommandBufferBeginInfo beginInfo; // 232
	const TextureSpecification_t* pSrcSpec; // 238
	bool bIsVolumeTexture; // 239
	int baseArrayLayer; // 240
	VkImageMemoryBarrier imageMemoryBarrier; // 243
	CVulkanImage* pResolveImage; // 279
	bool bMSAA; // 280
	VkBufferImageCopy region; // 365
	VkImageLayout nLayout; // 377
	CVulkanPooledFenceObject* pFence; // 398
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 170
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 171
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 224
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 225
	}
	{
		VkPipelineStageFlags nSrcStageMask; // 247
	}
	{
		TextureSpecification_t resolveSpec; // 283
		bool bRecreateResolveImage; // 286
		VkImageMemoryBarrier resolveImageMemoryBarrier; // 315
		VkPipelineStageFlags nSrcStageMask; // 317
		VkPipelineStageFlags nDstStageMask; // 318
		VkImageResolve region; // 334
		{
			CTextureCreationDesc resolveImageDesc; // 297
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 291
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 294
			CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
				ResourceHandleTyped_t hResource);  // 673
			CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 294
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
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 222
			CTextureCreationDesc::CTextureCreationDesc(); // 297
			CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 673
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<int, 4>::operator++(); // 570
			CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
				ResourceHandleTyped_t hResource);  // 673
			CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 307
			CTextureDesc::operator=(
					const CTextureDesc& rhs);  // 63
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 573
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveMultipleFromTail(
						int num);  // 1323
			CUtlMemory<unsigned int, int>::NumAllocated(); // 782
			CUtlMemory<unsigned int, int>::Base(); // 112
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
					int num);  // 784
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowVector(
					int num);  // 1445
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1437
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1294
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddMultipleToTail(
						int num);  // 1319
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::SetCount(
				int count);  // 573
			CUtlMemory<unsigned int, int>::Base(); // 112
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 102
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::begin(); // 574
			CUtlMemory<unsigned int, int>::Base(); // 113
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 105
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 105
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::end(); // 574
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 85
			V_memcpy(void* dest,
				const void* src,
				ptrdiff_t count);  // 180
			UtlTraitsCopyRange<unsigned int>(const unsigned int* pFrom,
							const unsigned int* pFromEnd,
							unsigned int* pTo);  // 173
			UtlTraitsCopyRange<unsigned int>(const unsigned int* pFrom,
							const unsigned int* pFromEnd,
							unsigned int* pTo);  // 574
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
					const CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >& other);  // 565
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
					const CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >& other);  // 452
			CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
					const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 68
			CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 573
			CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveMultipleFromTail(
						int num);  // 1323
			CUtlMemory<float, int>::NumAllocated(); // 782
			CUtlMemory<float, int>::Base(); // 112
			CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 368
			CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<float, CUtlMemory<float, int> >::GrowMemory(
					int num);  // 784
			CUtlVectorBase<float, CUtlMemory<float, int> >::GrowVector(
					int num);  // 1445
			CUtlVectorBase<float, CUtlMemory<float, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1437
			CUtlVectorBase<float, CUtlMemory<float, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1294
			CUtlVectorBase<float, CUtlMemory<float, int> >::AddMultipleToTail(
						int num);  // 1319
			CUtlVectorBase<float, CUtlMemory<float, int> >::SetCount(
				int count);  // 573
			CUtlMemory<float, int>::Base(); // 112
			CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 102
			CUtlVectorBase<float, CUtlMemory<float, int> >::begin(); // 574
			CUtlMemory<float, int>::Base(); // 113
			CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 105
			CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 105
			CUtlVectorBase<float, CUtlMemory<float, int> >::end(); // 574
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 85
			V_memcpy(void* dest,
				const void* src,
				ptrdiff_t count);  // 180
			UtlTraitsCopyRange<unsigned int>(const unsigned int* pFrom,
							const unsigned int* pFromEnd,
							unsigned int* pTo);  // 173
			UtlTraitsCopyRange<float>(const float* pFrom,
							const float* pFromEnd,
							float* pTo);  // 574
			CUtlVectorBase<float, CUtlMemory<float, int> >::operator=(
					const CUtlVectorBase<float, CUtlMemory<float, int> >& other);  // 565
			CUtlVectorBase<float, CUtlMemory<float, int> >::operator=(
					const CUtlVectorBase<float, CUtlMemory<float, int> >& other);  // 452
			CUtlVector<float, CUtlMemory<float, int> >::operator=(
					const CUtlVector<float, CUtlMemory<float, int> >& src);  // 69
			TextureSpecification_t::operator=(
					const TextureSpecification_t& rhs);  // 308
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
			CTextureCreationDesc::~CTextureCreationDesc(); // 309
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 312
		}
		CTextureDesc::operator=(
				const CTextureDesc& rhs);  // 147
		CTextureDesc::CTextureDesc(
				const CTextureDesc& rhs);  // 38
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
		CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
		CUtlMemory<unsigned int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 434
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 573
		CUtlMemory<unsigned int, int>::Base(); // 112
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowVector(
				int num);  // 1445
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddMultipleToTail(
					int num);  // 1319
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::SetCount(
			int count);  // 573
		CUtlMemory<unsigned int, int>::Base(); // 113
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 105
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 105
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::end(); // 574
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 85
		V_memcpy(void* dest,
			const void* src,
			ptrdiff_t count);  // 180
		UtlTraitsCopyRange<unsigned int>(const unsigned int* pFrom,
						const unsigned int* pFromEnd,
						unsigned int* pTo);  // 173
		UtlTraitsCopyRange<unsigned int>(const unsigned int* pFrom,
						const unsigned int* pFromEnd,
						unsigned int* pTo);  // 574
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
				const CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >& other);  // 565
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
				const CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >& other);  // 452
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
				const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 434
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(
				const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 38
		CUtlMemory<float, int>::ValidateGrowSize(); // 475
		CUtlMemory<float, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 434
		CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 573
		CUtlMemory<float, int>::Base(); // 112
		CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 368
		CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<float, CUtlMemory<float, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<float, CUtlMemory<float, int> >::GrowVector(
				int num);  // 1445
		CUtlVectorBase<float, CUtlMemory<float, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<float, CUtlMemory<float, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<float, CUtlMemory<float, int> >::AddMultipleToTail(
					int num);  // 1319
		CUtlVectorBase<float, CUtlMemory<float, int> >::SetCount(
			int count);  // 573
		CUtlMemory<float, int>::Base(); // 113
		CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 105
		CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 105
		CUtlVectorBase<float, CUtlMemory<float, int> >::end(); // 574
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 85
		V_memcpy(void* dest,
			const void* src,
			ptrdiff_t count);  // 180
		UtlTraitsCopyRange<unsigned int>(const unsigned int* pFrom,
						const unsigned int* pFromEnd,
						unsigned int* pTo);  // 173
		UtlTraitsCopyRange<float>(const float* pFrom,
						const float* pFromEnd,
						float* pTo);  // 574
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator=(
				const CUtlVectorBase<float, CUtlMemory<float, int> >& other);  // 565
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator=(
				const CUtlVectorBase<float, CUtlMemory<float, int> >& other);  // 452
		CUtlVector<float, CUtlMemory<float, int> >::operator=(
				const CUtlVector<float, CUtlMemory<float, int> >& src);  // 434
		CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(
				const CUtlVector<float, CUtlMemory<float, int> >& src);  // 38
		TextureSpecification_t::TextureSpecification_t(
					const TextureSpecification_t  &);  // 283
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 286
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator==(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 286
		V_memcmp(const void* m1,
			const void* m2,
			size_t count);  // 287
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 311
		CInterlockedIntT<int, 4>::operator int(); // 282
		ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 339
		CTextureInfoId::GetTextureObject(); // 83
		CTextureVulkan::GetTextureResource(); // 365
		{
			RenderTextureDimension_t nTextureDim; // 342
			bool bDimsOkay; // 343
			CTextureInfoId::GetDiskSpec(); // 388
			CTextureBase::GetDiskSpec(); // 483
			CTextureBase::ComputeTextureDimension(); // 342
			CTextureInfoId::GetTextureObject(); // 83
			CTextureVulkan::GetTextureResource(); // 348
		}
		{
		}
		CTextureManagerVulkan::GetTextureResource(
					HRenderTexture hTexture,
					RenderTextureDimension_t nDim,
					const char* szParamName);  // 311
		CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
		CUtlMemory<float, int>::IsExternallyAllocated(); // 905
		CUtlMemory<float, int>::Purge(); // 903
		CUtlMemory<float, int>::Purge(); // 1799
		CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
		ValidateAlignment<float>(void); // 508
		CUtlMemory<float, int>::Purge(); // 510
		CUtlMemory<float, int>::~CUtlMemory(); // 562
		CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
		CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 52
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
		CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned int, int>::Purge(); // 903
		CUtlMemory<unsigned int, int>::Purge(); // 1799
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
		ValidateAlignment<unsigned int>(void); // 508
		CUtlMemory<unsigned int, int>::Purge(); // 510
		CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 52
		TextureSpecification_t::~TextureSpecification_t(); // 363
	}
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_406; // 406
		VkSubmitInfo submitInfo; // 407
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
				int nLineNumber);  // 406
		CVulkanPooledFenceObject::Get(); // 411
		VulkanQueue(void); // 411
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 411
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 418
		VulkanQueue(void); // 416
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 416
	}
	{
		AsyncReadbackVulkan_t asyncTextureReadback; // 424
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 423
		}
		CUtlMemory<UtlLinkedListElem_t<AsyncReadbackVulkan_t, short unsigned int>, short unsigned int>::operator[](
				short unsigned int i);  // 482
		Element(const CUtlLinkedList<AsyncReadbackVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t this,
			short unsigned int i);  // 825
		CopyConstruct<AsyncReadbackVulkan_t>(AsyncReadbackVulkan_t* pMemory,
							const AsyncReadbackVulkan_t& src);  // 825
		InsertBefore(const CUtlLinkedList<AsyncReadbackVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t this,
				short unsigned int before,
				const AsyncReadbackVulkan_t& src);  // 856
		AddToTail(const CUtlLinkedList<AsyncReadbackVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t this,
				const AsyncReadbackVulkan_t& src);  // 438
	}
	{
		void* pLockedData; // 443
		uint8* pSrcImage; // 447
		uint8* pDstImage; // 450
		VulkanDevice(void); // 444
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 444
		SizeInBytes(ImageFormat fmt); // 453
		VulkanDevice(void); // 462
		CRenderDeviceVulkan::MemoryManager(); // 465
	}
	CRenderDeviceVulkan::MemoryManager(); // 167
	VulkanDevice(void); // 202
	VulkanDevice(void); // 207
	CUtlString::CUtlString(); // 149
	CUtlString::Get(); // 151
	CUtlString::~CUtlString(); // 153
	_DOVK(VkResult result,
		const char* pCommand);  // 235
	CUtlString::CUtlString(); // 149
	CUtlString::Get(); // 151
	CUtlString::~CUtlString(); // 153
	_DOVK(VkResult result,
		const char* pCommand);  // 236
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 238
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 239
	CUtlString::CUtlString(); // 149
	CUtlString::Get(); // 151
	CUtlString::~CUtlString(); // 153
	_DOVK(VkResult result,
		const char* pCommand);  // 396
	CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 354
	CVulkanPooledFenceObject::CVulkanPooledFenceObject(
				VkFence pFence);  // 401
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 199
	CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 329
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef(); // 402
} /* size: 0, variables: 20, inline expansions: 25 (761 bytes) */

// <00B82BB1> vulkan/renderthreadvulkan.cpp:469
// variables: 3
// function calls: 9
void CRenderThreadVulkan::OnReadBuffer(const CommandReadBufferVulkan_t& cmd)
{
	const char   __FUNCTION__; // 26806
	AsyncReadbackVulkan_t asyncReadback; // 477
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 471
	}
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 199
	CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 329
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef(); // 474
	CUtlMemory<UtlLinkedListElem_t<AsyncReadbackVulkan_t, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 482
	Element(const CUtlLinkedList<AsyncReadbackVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t this,
		short unsigned int i);  // 825
	CopyConstruct<AsyncReadbackVulkan_t>(AsyncReadbackVulkan_t* pMemory,
						const AsyncReadbackVulkan_t& src);  // 825
	InsertBefore(const CUtlLinkedList<AsyncReadbackVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t this,
			short unsigned int before,
			const AsyncReadbackVulkan_t& src);  // 856
	AddToTail(const CUtlLinkedList<AsyncReadbackVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t this,
			const AsyncReadbackVulkan_t& src);  // 487
} /* size: 0, variables: 2, inline expansions: 9 (567 bytes) */

// <00B81519> vulkan/renderthreadvulkan.cpp:495
// variables: 23
// function calls: 72
void CRenderThreadVulkan::OnUpdateSwappedImageLayout(const CommandUpdateSwappedImageLayout_t& cmd)
{
	CVulkanImage* pVulkanImage; // 497
	VkImageLayout nPrevLayout; // 498
	VkPipelineStageFlags nSrcStageMask; // 499
	VkPipelineStageFlags nDstStageMask; // 500
	CUtlLeanVectorFixedGrowable<VkImageMemoryBarrier, 16, short int> imageMemoryBarriers; // 502
	const char   __FUNCTION__; // 26953
	{
		uint32 nMip; // 503
		{
			uint32 nSlice; // 505
			{
				VkImageMemoryBarrier imageMemoryBarrier; // 507
				VkImageLayout nNewLayout; // 510
				VkAccessFlags nSrcAccessMask; // 512
				VkAccessFlags nDstAccessMask; // 513
				VkPipelineStageFlags nAdditionalSrcStageMask; // 514
				VkPipelineStageFlags nAdditionalDstStageMask; // 515
				{
					int* _pCrash; // 109
				}
				LeafCodeInfo_t::LeafCodeInfo_t(
						const char* szFile,
						int nLine,
						const char* szFunction);  // 109
				{
					ElemType_t* pNew; // 168
					ElemType_t* pBase; // 169
					CUtlLeanVectorFixedGrowableBase<VkImageMemoryBarrier, 16, short int>::Base(); // 64
					CUtlLeanVectorFixedGrowableBase<VkImageMemoryBarrier, 16, short int>::Base(); // 169
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 85
					V_memcpy(void* dest,
						const void* src,
						ptrdiff_t count);  // 91
					UtlTraitsMoveRawMemoryRange<VkImageMemoryBarrier>(VkImageMemoryBarrier* pFrom,
												VkImageMemoryBarrier* pFromEnd,
												VkImageMemoryBarrier* pTo);  // 170
				}
				CUtlLeanVectorFixedGrowableBase<VkImageMemoryBarrier, 16, short int>::EnsureCapacity(
						int nCapacity,
						bool bConservative);  // 629
				CUtlLeanVectorFixedGrowableBase<VkImageMemoryBarrier, 16, short int>::Base(); // 64
				CUtlLeanVectorFixedGrowableBase<VkImageMemoryBarrier, 16, short int>::Base(); // 630
				AddToTailGetPtr(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VkImageMemoryBarrier, 16, short int>, VkImageMemoryBarrier, shor this); // 638
				AddToTail(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VkImageMemoryBarrier, 16, short int>, VkImageMemoryBarrier, shor this,
						const VkImageMemoryBarrier& src);  // 537
			}
			CVulkanImage::GetNumArraySlices(); // 505
		}
		CVulkanImage::GetNumMipLevels(); // 503
	}
	{
		CommandBufferPool_t* pCmdBufferPool; // 543
		VkCommandBuffer pCmdBuffer; // 544
		VkCommandBufferBeginInfo beginInfo; // 548
		VulkanCommandBuffer_t* pCommandBuffer; // 564
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 545
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 546
		}
		CRenderDeviceVulkan::MemoryManager(); // 544
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 551
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 552
		Vector4D::Vector4D(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 554
		CUtlLeanVectorFixedGrowableBase<VkImageMemoryBarrier, 16, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<VkImageMemoryBarrier, 16, short int>::Base(); // 557
		Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VkImageMemoryBarrier, 16, short int>, VkImageMemoryBarrier this); // 557
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 561
		ConstructList(const CUtlLinkedList<VulkanCommandBufferAndPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this); // 454
		CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::Grow(
			int num);  // 193
		CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::Init(
			int nGrowSize,
			int nInitSize);  // 161
		CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::CUtlFixedMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 448
		Iterator_t::Iterator_t(
				BlockHeader_t* p,
				intp i);  // 96
		CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::InvalidIterator(); // 448
		ResetDbgInfo(const CUtlLinkedList<VulkanCommandBufferAndPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this); // 455
		CUtlLinkedList(const CUtlLinkedList<VulkanCommandBufferAndPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this,
				int growSize,
				int initSize);  // 404
		CUtlFixedLinkedList<VulkanCommandBufferAndPool_t>::CUtlFixedLinkedList(
					int growSize,
					int initSize);  // 67
		CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::ValidateGrowSize(); // 475
		CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 448
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::InvalidIterator(); // 448
		CUtlLinkedList<QueryObjectInternalVulkan_t::ConstructList(); // 454
		CUtlLinkedList<QueryObjectInternalVulkan_t::ResetDbgInfo(); // 455
		CUtlLinkedList<QueryObjectInternalVulkan_t::CUtlLinkedList(
				int growSize,
				int initSize);  // 67
		VulkanCommandBuffer_t::VulkanCommandBuffer_t(); // 564
		CUtlMemory<UtlLinkedListElem_t<VulkanCommandBuffer_t::operator[](
				short unsigned int i);  // 482
		CUtlLinkedList<VulkanCommandBuffer_t::Element(
			short unsigned int i);  // 825
		CopyConstruct<VulkanCommandBuffer_t*>(VulkanCommandBuffer_t** pMemory,
							VulkanCommandBuffer_t* const& src);  // 825
		CUtlLinkedList<VulkanCommandBuffer_t::InsertBefore(
				short unsigned int before,
				VulkanCommandBuffer_t* const& src);  // 856
		CUtlLinkedList<VulkanCommandBuffer_t::AddToTail(
				VulkanCommandBuffer_t* const& src);  // 568
		CUtlMemory<VkCommandBuffer_T::NumAllocated(); // 1196
		CUtlMemory<VkCommandBuffer_T::operator[](
				int i);  // 602
		CUtlVectorBase<VkCommandBuffer_T::Element(
			int i);  // 1201
		CopyConstruct<VkCommandBuffer_T*>(VkCommandBuffer_T** pMemory,
							VkCommandBuffer_T* const& src);  // 1201
		CUtlMemory<VkCommandBuffer_T::Base(); // 112
		CUtlVectorBase<VkCommandBuffer_T::Base(); // 368
		CUtlVectorBase<VkCommandBuffer_T::ResetDbgInfo(); // 824
		CUtlVectorBase<VkCommandBuffer_T::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<VkCommandBuffer_T::AddToTail(
				VkCommandBuffer_T* const& src);  // 569
	}
	CUtlLeanVectorFixedGrowableBase<VkImageMemoryBarrier, 16, short int>::CUtlLeanVectorFixedGrowableBase(); // 411
	CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VkImageMemoryBarrier, 16, short int>, VkImageMemoryBarrier, shor this); // 799
	CUtlLeanVectorFixedGrowable<VkImageMemoryBarrier, 16, short int>::CUtlLeanVectorFixedGrowable(); // 502
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VkImageMemoryBarrier, 16, short int>, VkImageMemoryBarrier this); // 541
	CUtlLeanVectorFixedGrowableBase<VkImageMemoryBarrier, 16, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<VkImageMemoryBarrier, 16, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<VkImageMemoryBarrier, 16, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<VkImageMemoryBarrier, 16, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<VkImageMemoryBarrier, 16, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VkImageMemoryBarrier, 16, short int>, VkImageMemoryBarrier, shor this); // 796
	CUtlLeanVectorFixedGrowable<VkImageMemoryBarrier, 16, short int>::~CUtlLeanVectorFixedGrowable(); // 571
} /* size: 0, variables: 6, inline expansions: 11 (179 bytes) */

// <00B80DCF> vulkan/renderthreadvulkan.cpp:576
// variables: 2
// function calls: 30
void CRenderThreadVulkan::OnDestroyQuery(const CommandDestroyQueryVulkan_t& cmd)
{
	CUtlLinkedList<QueryObjectInternalVulkan_t*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t*, short unsigned int>, short unsigned int> > queriesToReset; // 579
	CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::ValidateGrowSize(); // 475
	CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 448
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::InvalidIterator(); // 448
	CUtlLinkedList<QueryObjectInternalVulkan_t::ConstructList(); // 454
	CUtlLinkedList<QueryObjectInternalVulkan_t::ResetDbgInfo(); // 455
	CUtlLinkedList<QueryObjectInternalVulkan_t::CUtlLinkedList(
			int growSize,
			int initSize);  // 579
	CInterlockedIntT<int, 4>::operator==(
			int rhs);  // 580
	{
		int i; // 1531
		CUtlVectorBase<QueryObjectInternalVulkan_t::Count(); // 1531
		CUtlMemory<QueryObjectInternalVulkan_t::operator[](
				int i);  // 609
		CUtlVectorBase<QueryObjectInternalVulkan_t::Element(
			int i);  // 1533
	}
	CUtlVectorBase<QueryObjectInternalVulkan_t::Find(
		QueryObjectInternalVulkan_t* const& src);  // 1617
	CUtlVectorBase<QueryObjectInternalVulkan_t::Remove(
		int elem);  // 1620
	CUtlVectorBase<QueryObjectInternalVulkan_t::FindAndRemove(
			QueryObjectInternalVulkan_t* const& src);  // 586
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 589
	ValidateAlignment<UtlLinkedListElem_t<QueryObjectInternalVulkan_t*, short unsigned int> >(void); // 508
	CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::Purge(); // 903
	CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::Purge(); // 510
	CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::~CUtlMemory(); // 462
	CUtlLinkedList<QueryObjectInternalVulkan_t::~CUtlLinkedList(); // 592
	CopyConstruct<QueryObjectInternalVulkan_t*>(QueryObjectInternalVulkan_t** pMemory,
							QueryObjectInternalVulkan_t* const& src);  // 825
	CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::operator[](
			short unsigned int i);  // 482
	CUtlLinkedList<QueryObjectInternalVulkan_t::Element(
		short unsigned int i);  // 825
	CUtlLinkedList<QueryObjectInternalVulkan_t::InsertBefore(
			short unsigned int before,
			QueryObjectInternalVulkan_t* const& src);  // 856
	CUtlLinkedList<QueryObjectInternalVulkan_t::AddToTail(
			QueryObjectInternalVulkan_t* const& src);  // 582
	CRenderThreadVulkan::QueueResetQueries(
				const CUtlLinkedList<QueryObjectInternalVulkan_t*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedLis queriesToReset);  // 583
} /* size: 579, variables: 1, inline expansions: 27 (822 bytes) */

// <00B80613> vulkan/renderthreadvulkan.cpp:594
// variables: 7
// function calls: 28
void CRenderThreadVulkan::OnBlockForQuery(const CommandBlockForQueryVulkan_t& cmd)
{
	uint64 nTimeoutTicks; // 596
	QueryObjectInternalVulkan_t* pQueryObjectInternal; // 597
	const char   __FUNCTION__; // 26869
	{
		RenderQueryState_t oldState; // 611
		CUtlLinkedList<QueryObjectInternalVulkan_t*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t*, short unsigned int>, short unsigned int> > queriesToReset; // 616
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 613
		}
		{
			int i; // 1531
			CUtlVectorBase<QueryObjectInternalVulkan_t::Count(); // 1531
			CUtlMemory<QueryObjectInternalVulkan_t::operator[](
					int i);  // 609
			CUtlVectorBase<QueryObjectInternalVulkan_t::Element(
				int i);  // 1533
		}
		CUtlVectorBase<QueryObjectInternalVulkan_t::Find(
			QueryObjectInternalVulkan_t* const& src);  // 1617
		CUtlVectorBase<QueryObjectInternalVulkan_t::Remove(
			int elem);  // 1620
		CUtlVectorBase<QueryObjectInternalVulkan_t::FindAndRemove(
				QueryObjectInternalVulkan_t* const& src);  // 610
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 607
		CInterlockedIntT<int, 4>::AtomicSet(
				int newValue);  // 614
		CInterlockedIntT<int, 4>::InterlockedExchange(
					int newValue);  // 611
		CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::ValidateGrowSize(); // 475
		CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 448
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::InvalidIterator(); // 448
		CUtlLinkedList<QueryObjectInternalVulkan_t::ConstructList(); // 454
		CUtlLinkedList<QueryObjectInternalVulkan_t::ResetDbgInfo(); // 455
		CUtlLinkedList<QueryObjectInternalVulkan_t::CUtlLinkedList(
				int growSize,
				int initSize);  // 616
		CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::operator[](
				short unsigned int i);  // 482
		CUtlLinkedList<QueryObjectInternalVulkan_t::Element(
			short unsigned int i);  // 825
		CopyConstruct<QueryObjectInternalVulkan_t*>(QueryObjectInternalVulkan_t** pMemory,
								QueryObjectInternalVulkan_t* const& src);  // 825
		CUtlLinkedList<QueryObjectInternalVulkan_t::InsertBefore(
				short unsigned int before,
				QueryObjectInternalVulkan_t* const& src);  // 856
		CUtlLinkedList<QueryObjectInternalVulkan_t::AddToTail(
				QueryObjectInternalVulkan_t* const& src);  // 617
		CRenderThreadVulkan::QueueResetQueries(
					const CUtlLinkedList<QueryObjectInternalVulkan_t*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedLis queriesToReset);  // 618
		ValidateAlignment<UtlLinkedListElem_t<QueryObjectInternalVulkan_t*, short unsigned int> >(void); // 508
		CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::Purge(); // 903
		CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::Purge(); // 510
		CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::~CUtlMemory(); // 462
		CUtlLinkedList<QueryObjectInternalVulkan_t::~CUtlLinkedList(); // 620
	}
	CInterlockedIntT<int, 4>::operator!=(
			int rhs);  // 598
} /* size: 0, variables: 3, inline expansions: 1 (3 bytes) */

// <00B8DA60> vulkan/renderthreadvulkan.cpp:625
// variable: 1
// function call: 1
void CRenderThreadVulkan::OnBeginSubmittingViews(const CommandBeginSubmittingViews_t& cmd)
{
	const CSwapChainVulkan* pSwapChain; // 627
	CRenderDeviceBase::GetSwapChain<CSwapChainVulkan>(
					SwapChainHandle_t hSwapChain);  // 627
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <00B805E0> vulkan/renderthreadvulkan.cpp:625
// variable: 1
void CRenderThreadVulkan::OnBeginSubmittingViews(const CommandBeginSubmittingViews_t& cmd)
{
	const CSwapChainVulkan* pSwapChain; // 627
} /* size: 0, variables: 1 */

// <00B7D6A3> vulkan/renderthreadvulkan.cpp:651
// variables: 39
// function calls: 156
void CRenderThreadVulkan::Execute(CCommandStream* pCmdStream)
{
	bool bPresentExecuted; // 653
	CCommandBufferChunk* pCmd; // 775
	const char   __FUNCTION__; // 26722
	{
		VulkanCommandBuffer_t* pCommandBuffer; // 662
		bool bSkipCommandBuffer; // 663
		bool bHasWaitSemaphore; // 683
		bool bHasSignalSemaphore; // 684
		bool bBatchSizeExceeded; // 764
		{
			const char* pszName; // 702
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 705
		}
		{
			VulkanCommandBufferAndPool_t imageTransitionCommandBuffer; // 720
			bool bStateTransitions; // 725
			CRenderDeviceVulkan::MemoryManager(); // 722
			CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::operator[](
					intp i);  // 482
			Element(const CUtlLinkedList<VulkanCommandBufferAndPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this,
				long long int i);  // 825
			CopyConstruct<VulkanCommandBufferAndPool_t>(VulkanCommandBufferAndPool_t* pMemory,
									const VulkanCommandBufferAndPool_t& src);  // 825
			InsertBefore(const CUtlLinkedList<VulkanCommandBufferAndPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this,
					long long int before,
					const VulkanCommandBufferAndPool_t& src);  // 856
			AddToTail(const CUtlLinkedList<VulkanCommandBufferAndPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this,
					const VulkanCommandBufferAndPool_t& src);  // 723
			CUtlMemory<VkCommandBuffer_T::NumAllocated(); // 1196
			CUtlMemory<VkCommandBuffer_T::operator[](
					int i);  // 602
			CUtlVectorBase<VkCommandBuffer_T::Element(
				int i);  // 1201
			CopyConstruct<VkCommandBuffer_T*>(VkCommandBuffer_T** pMemory,
								VkCommandBuffer_T* const& src);  // 1201
			CUtlMemory<VkCommandBuffer_T::Base(); // 112
			CUtlVectorBase<VkCommandBuffer_T::Base(); // 368
			CUtlVectorBase<VkCommandBuffer_T::ResetDbgInfo(); // 824
			CUtlVectorBase<VkCommandBuffer_T::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<VkCommandBuffer_T::AddToTail(
					VkCommandBuffer_T* const& src);  // 728
		}
		{
			VulkanCommandBufferAndPool_t copyQueryResultsCommandBuffer; // 740
			bool bCopyQueryResults; // 746
			CRenderDeviceVulkan::MemoryManager(); // 742
			CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::operator[](
					intp i);  // 482
			Element(const CUtlLinkedList<VulkanCommandBufferAndPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this,
				long long int i);  // 825
			CopyConstruct<VulkanCommandBufferAndPool_t>(VulkanCommandBufferAndPool_t* pMemory,
									const VulkanCommandBufferAndPool_t& src);  // 825
			InsertBefore(const CUtlLinkedList<VulkanCommandBufferAndPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this,
					long long int before,
					const VulkanCommandBufferAndPool_t& src);  // 856
			AddToTail(const CUtlLinkedList<VulkanCommandBufferAndPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this,
					const VulkanCommandBufferAndPool_t& src);  // 743
			CUtlMemory<VkCommandBuffer_T::NumAllocated(); // 1196
			CUtlMemory<VkCommandBuffer_T::operator[](
					int i);  // 602
			CUtlVectorBase<VkCommandBuffer_T::Element(
				int i);  // 1201
			CopyConstruct<VkCommandBuffer_T*>(VkCommandBuffer_T** pMemory,
								VkCommandBuffer_T* const& src);  // 1201
			CUtlMemory<VkCommandBuffer_T::Base(); // 112
			CUtlVectorBase<VkCommandBuffer_T::Base(); // 368
			CUtlVectorBase<VkCommandBuffer_T::ResetDbgInfo(); // 824
			CUtlVectorBase<VkCommandBuffer_T::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<VkCommandBuffer_T::AddToTail(
					VkCommandBuffer_T* const& src);  // 751
		}
		CUtlLinkedList<QueryObjectInternalVulkan_t::Count(); // 677
		CRenderThreadVulkan::ExecuteQueuedCommandBuffers(
						RenderSemaphoreHandle_t hSignalSemaphore);  // 692
		CUtlMemory<UtlLinkedListElem_t<VulkanCommandBuffer_t::operator[](
				short unsigned int i);  // 482
		CUtlLinkedList<VulkanCommandBuffer_t::Element(
			short unsigned int i);  // 825
		CopyConstruct<VulkanCommandBuffer_t*>(VulkanCommandBuffer_t** pMemory,
							VulkanCommandBuffer_t* const& src);  // 825
		CUtlLinkedList<VulkanCommandBuffer_t::InsertBefore(
				short unsigned int before,
				VulkanCommandBuffer_t* const& src);  // 856
		CUtlLinkedList<VulkanCommandBuffer_t::AddToTail(
				VulkanCommandBuffer_t* const& src);  // 697
		ConVar::GetInt(); // 351
		ConVar::GetBool(); // 765
		CUtlVectorBase<VkCommandBuffer_T::Count(); // 764
		ConVar::GetInt(); // 764
		CRenderThreadVulkan::ExecuteQueuedCommandBuffers(
						RenderSemaphoreHandle_t hSignalSemaphore);  // 771
		CRenderThreadVulkan::QueueResetQueries(
					const CUtlLinkedList<QueryObjectInternalVulkan_t*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedLis queriesToReset);  // 679
		CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::IsExternallyAllocated(); // 905
		CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::Purge(); // 903
		CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::Purge(); // 643
		CUtlLinkedList<QueryObjectInternalVulkan_t::ResetDbgInfo(); // 650
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::InvalidIterator(); // 648
		CUtlLinkedList<QueryObjectInternalVulkan_t::Purge(); // 680
		CUtlMemory<VkCommandBuffer_T::NumAllocated(); // 1196
		CUtlMemory<VkCommandBuffer_T::operator[](
				int i);  // 602
		CUtlVectorBase<VkCommandBuffer_T::Element(
			int i);  // 1201
		CopyConstruct<VkCommandBuffer_T*>(VkCommandBuffer_T** pMemory,
							VkCommandBuffer_T* const& src);  // 1201
		CUtlMemory<VkCommandBuffer_T::Base(); // 112
		CUtlVectorBase<VkCommandBuffer_T::Base(); // 368
		CUtlVectorBase<VkCommandBuffer_T::ResetDbgInfo(); // 824
		CUtlVectorBase<VkCommandBuffer_T::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<VkCommandBuffer_T::AddToTail(
				VkCommandBuffer_T* const& src);  // 733
	}
	{
		const uint8* pCmdIn; // 778
		{
			CommandBase_t command; // 781
			{
				CommandJump_t cmd; // 812
				{
				}
				LoadCmd<CommandJump_t>(const uint8 *& pPtr); // 352
				LoadCmd<CommandJump_t>(const uint8 *& pPtr); // 812
				CUtlMemoryPool<CCommandBufferChunk>::Free(
					CCommandBufferChunk* pMem);  // 81
				operator delete(void* p); // 138
				CCommandBufferChunk::Release(); // 813
			}
			{
				const CommandDynamicCBUpdate_t& cmd; // 821
				ConstantBuffer_t* pBuffer; // 822
				{
				}
				LoadCmd<CommandDynamicCBUpdate_t>(const uint8 *& pPtr); // 352
				LoadCmd<CommandDynamicCBUpdate_t>(const uint8 *& pPtr); // 821
				{
				}
				ThreadInterlockedExchange64(volatile int64* p,
								int64 value);  // 415
				ThreadInterlockedExchangePointer(volatile void** p,
								void* value);  // 198
				CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::Push(
					ConstantBuffer_t* pPushNode);  // 751
				CRenderDeviceBase::ReleasePooledDynamicConstantBuffer(
									ConstantBuffer_t* pConstantBuffer);  // 823
			}
			{
				const CommandDispatchCommandStream_t& cmd; // 829
				{
				}
				LoadCmd<CommandDispatchCommandStream_t>(const uint8 *& pPtr); // 352
				LoadCmd<CommandDispatchCommandStream_t>(const uint8 *& pPtr); // 829
			}
			{
				const CommandPresentVulkan_t& cmd; // 839
				{
				}
				LoadCmd<CommandPresentVulkan_t>(const uint8 *& pPtr); // 352
				LoadCmd<CommandPresentVulkan_t>(const uint8 *& pPtr); // 839
			}
			{
				const CommandFence_t& cmd; // 851
				{
				}
				LoadCmd<CommandFence_t>(const uint8 *& pPtr); // 352
				LoadCmd<CommandFence_t>(const uint8 *& pPtr); // 851
				CRenderThreadVulkan::ExecuteQueuedCommandBuffers(
								RenderSemaphoreHandle_t hSignalSemaphore);  // 855
			}
			{
				const CommandDestroyQueryVulkan_t& cmd; // 868
				{
				}
				LoadCmd<CommandDestroyQueryVulkan_t>(const uint8 *& pPtr); // 352
				LoadCmd<CommandDestroyQueryVulkan_t>(const uint8 *& pPtr); // 868
			}
			{
				const CommandEndQueryVulkan_t& cmd; // 875
				RenderQueryState_t state; // 876
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 878
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 879
				}
				{
				}
				LoadCmd<CommandEndQueryVulkan_t>(const uint8 *& pPtr); // 352
				LoadCmd<CommandEndQueryVulkan_t>(const uint8 *& pPtr); // 875
				ThreadInterlockedExchange(volatile int32* p,
								int32 value);  // 607
				CInterlockedIntT<int, 4>::AtomicSet(
						int newValue);  // 614
				CInterlockedIntT<int, 4>::InterlockedExchange(
							int newValue);  // 876
				{
					int i; // 1531
					CUtlVectorBase<QueryObjectInternalVulkan_t::Count(); // 1531
					CUtlMemory<QueryObjectInternalVulkan_t::operator[](
							int i);  // 609
					CUtlVectorBase<QueryObjectInternalVulkan_t::Element(
						int i);  // 1533
				}
				CUtlVectorBase<QueryObjectInternalVulkan_t::Find(
					QueryObjectInternalVulkan_t* const& src);  // 879
				CUtlMemory<QueryObjectInternalVulkan_t::NumAllocated(); // 1196
				CUtlMemory<QueryObjectInternalVulkan_t::Base(); // 112
				CUtlVectorBase<QueryObjectInternalVulkan_t::Base(); // 368
				CUtlVectorBase<QueryObjectInternalVulkan_t::ResetDbgInfo(); // 824
				CUtlMemory<QueryObjectInternalVulkan_t::IsGrowable(); // 823
				CUtlMemory<QueryObjectInternalVulkan_t::IsExternallyAllocated(); // 859
				CUtlMemory<QueryObjectInternalVulkan_t::IsExternallyAllocated(); // 861
				CUtlMemory<QueryObjectInternalVulkan_t::Grow(
					int num);  // 806
				CUtlVectorBase<QueryObjectInternalVulkan_t::GrowMemory(
						int num);  // 1198
				CUtlMemory<QueryObjectInternalVulkan_t::operator[](
						int i);  // 602
				CUtlVectorBase<QueryObjectInternalVulkan_t::Element(
					int i);  // 1201
				CopyConstruct<QueryObjectInternalVulkan_t*>(QueryObjectInternalVulkan_t** pMemory,
										QueryObjectInternalVulkan_t* const& src);  // 1201
				CUtlVectorBase<QueryObjectInternalVulkan_t::AddToTail(
						QueryObjectInternalVulkan_t* const& src);  // 880
			}
			{
				const CommandBlockForQueryVulkan_t& cmd; // 886
				{
				}
				LoadCmd<CommandBlockForQueryVulkan_t>(const uint8 *& pPtr); // 352
				LoadCmd<CommandBlockForQueryVulkan_t>(const uint8 *& pPtr); // 886
			}
			{
				const CommandReadTexturePixelsVulkan_t& cmd; // 896
				CRenderThreadVulkan::ExecuteQueuedCommandBuffers(
								RenderSemaphoreHandle_t hSignalSemaphore);  // 894
				{
				}
				LoadCmd<CommandReadTexturePixelsVulkan_t>(const uint8 *& pPtr); // 352
				LoadCmd<CommandReadTexturePixelsVulkan_t>(const uint8 *& pPtr); // 896
			}
			{
				const CommandReadBufferVulkan_t& cmd; // 906
				CRenderThreadVulkan::ExecuteQueuedCommandBuffers(
								RenderSemaphoreHandle_t hSignalSemaphore);  // 904
				{
				}
				LoadCmd<CommandReadBufferVulkan_t>(const uint8 *& pPtr); // 352
				LoadCmd<CommandReadBufferVulkan_t>(const uint8 *& pPtr); // 906
			}
			{
				const CommandDeviceThreadCallback_t& cmd; // 914
				CRenderThreadVulkan::ExecuteQueuedCommandBuffers(
								RenderSemaphoreHandle_t hSignalSemaphore);  // 913
				{
				}
				LoadCmd<CommandDeviceThreadCallback_t>(const uint8 *& pPtr); // 352
				LoadCmd<CommandDeviceThreadCallback_t>(const uint8 *& pPtr); // 914
			}
			{
				const CommandSetSwapChainSemaphore_t& cmd; // 921
				{
				}
				LoadCmd<CommandSetSwapChainSemaphore_t>(const uint8 *& pPtr); // 352
				LoadCmd<CommandSetSwapChainSemaphore_t>(const uint8 *& pPtr); // 921
			}
			{
				const CommandStartRenderDocCapture_t& cmd; // 929
				{
					CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_932; // 932
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
							int nLineNumber);  // 932
					CThreadFastMutex::Unlock(
						const char* pFileName,
						int nLineNumber);  // 944
					Unlock(CThreadFastMutex& lock,
						const char* pFileName,
						int nLineNumber);  // 983
					CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 934
				}
				{
				}
				LoadCmd<CommandStartRenderDocCapture_t>(const uint8 *& pPtr); // 352
				LoadCmd<CommandStartRenderDocCapture_t>(const uint8 *& pPtr); // 929
				CRenderThreadVulkan::ExecuteQueuedCommandBuffers(
								RenderSemaphoreHandle_t hSignalSemaphore);  // 930
			}
			{
				const CommandEndRenderDocCapture_t& cmd; // 940
				{
					CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_943; // 943
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
							int nLineNumber);  // 943
					ThreadInterlockedExchange64(volatile int64* p,
									int64 value);  // 874
					CThreadFastMutex::Unlock(
						const char* pFileName,
						int nLineNumber);  // 944
					Unlock(CThreadFastMutex& lock,
						const char* pFileName,
						int nLineNumber);  // 983
					CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 945
				}
				{
				}
				LoadCmd<CommandEndRenderDocCapture_t>(const uint8 *& pPtr); // 352
				LoadCmd<CommandEndRenderDocCapture_t>(const uint8 *& pPtr); // 940
				CRenderThreadVulkan::ExecuteQueuedCommandBuffers(
								RenderSemaphoreHandle_t hSignalSemaphore);  // 941
			}
			{
				const CommandSetSteamVrCompositorTexture_t& cmd; // 951
				{
				}
				LoadCmd<CommandSetSteamVrCompositorTexture_t>(const uint8 *& pPtr); // 352
				LoadCmd<CommandSetSteamVrCompositorTexture_t>(const uint8 *& pPtr); // 951
			}
			{
				const CommandBeginSubmittingViews_t& cmd; // 958
				{
				}
				LoadCmd<CommandBeginSubmittingViews_t>(const uint8 *& pPtr); // 352
				LoadCmd<CommandBeginSubmittingViews_t>(const uint8 *& pPtr); // 958
				CRenderDeviceBase::GetSwapChain<CSwapChainVulkan>(
								SwapChainHandle_t hSwapChain);  // 627
				CRenderThreadVulkan::OnBeginSubmittingViews(
							const CommandBeginSubmittingViews_t& cmd);  // 959
			}
			{
				const CommandUpdateSwappedImageLayout_t& cmd; // 965
				{
				}
				LoadCmd<CommandUpdateSwappedImageLayout_t>(const uint8 *& pPtr); // 352
				LoadCmd<CommandUpdateSwappedImageLayout_t>(const uint8 *& pPtr); // 965
			}
			{
			}
			LoadCmd<CommandReturn_t>(const uint8 *& pPtr); // 352
			LoadCmd<CommandReturn_t>(const uint8 *& pPtr); // 794
			CUtlMemoryPool<CCommandBufferChunk>::Free(
				CCommandBufferChunk* pMem);  // 81
			operator delete(void* p); // 138
			CCommandBufferChunk::Release(); // 795
			Load<CommandBase_t>(const uint8 *& pPtr); // 781
		}
	}
} /* size: 0, variables: 3 */

// <00B90B33> vulkan/renderthreadvulkan.cpp:988
// function call: 1
void CRenderThreadVulkan::QueueResetQueries(const CUtlLinkedList<QueryObjectInternalVulkan_t*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedLis queriesToReset)
{
	CUtlLinkedList<QueryObjectInternalVulkan_t::Count(); // 990
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00B8FD2D> vulkan/renderthreadvulkan.cpp:988
// variables: 6
// function calls: 50
void CRenderThreadVulkan::QueueResetQueries(const CUtlLinkedList<QueryObjectInternalVulkan_t*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedLis queriesToReset)
{
	{
		VkCommandBuffer pResetQueriesCommandBuffer; // 992
		CommandBufferPool_t* pCmdBufferPool; // 993
		VkCommandBufferBeginInfo beginInfo; // 996
		VulkanCommandBuffer_t* pCommandBuffer; // 1014
		CRenderDeviceVulkan::MemoryManager(); // 995
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 999
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 1000
		{
			short unsigned int nIndex; // 1004
			CUtlLinkedList<QueryObjectInternalVulkan_t::Head(); // 1004
			{
				QueryObjectInternalVulkan_t* pQueryToReset; // 1006
				CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::operator[](
						short unsigned int i);  // 500
				CUtlLinkedList<QueryObjectInternalVulkan_t::operator[](
						short unsigned int i);  // 1006
			}
			CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::operator[](
					short unsigned int i);  // 368
			CUtlLinkedList<QueryObjectInternalVulkan_t::InternalElement(
					short unsigned int i);  // 550
			CUtlLinkedList<QueryObjectInternalVulkan_t::Next(
				short unsigned int i);  // 1004
		}
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 1011
		ConstructList(const CUtlLinkedList<VulkanCommandBufferAndPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this); // 454
		CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::Grow(
			int num);  // 193
		CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::Init(
			int nGrowSize,
			int nInitSize);  // 161
		CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::CUtlFixedMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 448
		Iterator_t::Iterator_t(
				BlockHeader_t* p,
				intp i);  // 96
		CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::InvalidIterator(); // 448
		ResetDbgInfo(const CUtlLinkedList<VulkanCommandBufferAndPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this); // 455
		CUtlLinkedList(const CUtlLinkedList<VulkanCommandBufferAndPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this,
				int growSize,
				int initSize);  // 404
		CUtlFixedLinkedList<VulkanCommandBufferAndPool_t>::CUtlFixedLinkedList(
					int growSize,
					int initSize);  // 67
		CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::ValidateGrowSize(); // 475
		CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 448
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::InvalidIterator(); // 448
		CUtlLinkedList<QueryObjectInternalVulkan_t::ConstructList(); // 454
		CUtlLinkedList<QueryObjectInternalVulkan_t::ResetDbgInfo(); // 455
		CUtlLinkedList<QueryObjectInternalVulkan_t::CUtlLinkedList(
				int growSize,
				int initSize);  // 67
		VulkanCommandBuffer_t::VulkanCommandBuffer_t(); // 1014
		CUtlMemory<UtlLinkedListElem_t<VulkanCommandBuffer_t::operator[](
				short unsigned int i);  // 482
		CUtlLinkedList<VulkanCommandBuffer_t::Element(
			short unsigned int i);  // 825
		CopyConstruct<VulkanCommandBuffer_t*>(VulkanCommandBuffer_t** pMemory,
							VulkanCommandBuffer_t* const& src);  // 825
		CUtlLinkedList<VulkanCommandBuffer_t::InsertBefore(
				short unsigned int before,
				VulkanCommandBuffer_t* const& src);  // 856
		CUtlLinkedList<VulkanCommandBuffer_t::AddToTail(
				VulkanCommandBuffer_t* const& src);  // 1018
		CUtlMemory<VkCommandBuffer_T::NumAllocated(); // 1196
		CUtlMemory<VkCommandBuffer_T::operator[](
				int i);  // 602
		CUtlVectorBase<VkCommandBuffer_T::Element(
			int i);  // 1201
		CopyConstruct<VkCommandBuffer_T*>(VkCommandBuffer_T** pMemory,
							VkCommandBuffer_T* const& src);  // 1201
		CUtlMemory<VkCommandBuffer_T::Base(); // 112
		CUtlVectorBase<VkCommandBuffer_T::Base(); // 368
		CUtlVectorBase<VkCommandBuffer_T::ResetDbgInfo(); // 824
		CUtlVectorBase<VkCommandBuffer_T::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<VkCommandBuffer_T::AddToTail(
				VkCommandBuffer_T* const& src);  // 1019
	}
} /* size: 961 */

// <00B7D58B> vulkan/renderthreadvulkan.cpp:988
// variables: 6
void CRenderThreadVulkan::QueueResetQueries(const CUtlLinkedList<QueryObjectInternalVulkan_t*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedLis queriesToReset)
{
	{
		VkCommandBuffer pResetQueriesCommandBuffer; // 992
		CommandBufferPool_t* pCmdBufferPool; // 993
		VkCommandBufferBeginInfo beginInfo; // 996
		VulkanCommandBuffer_t* pCommandBuffer; // 1014
		{
			short unsigned int nIndex; // 1004
			{
				QueryObjectInternalVulkan_t* pQueryToReset; // 1006
			}
		}
	}
} /* size: 0 */

// <00B7CA4A> vulkan/renderthreadvulkan.cpp:1026
// variables: 10
// function calls: 45
void CRenderThreadVulkan::ManageQueries()
{
	CUtlLinkedList<QueryObjectInternalVulkan_t*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t*, short unsigned int>, short unsigned int> > queriesToReset; // 1028
	const char   __FUNCTION__; // 26827
	{
		int i; // 1029
		{
			QueryObjectInternalVulkan_t* pQuery; // 1031
			uint64 nQueryData; // 1059
			VkResult nResult; // 1060
			RenderQueryState_t oldState; // 1112
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1032
			}
			{
				VkResult nResult; // 1047
				CVulkanPooledFenceObject::Get(); // 1047
				VulkanDevice(void); // 1047
				ThreadInterlockedIncrement(volatile int32* p); // 158
				Increment(int* p); // 199
				CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 329
				CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef(); // 1038
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1114
			}
			CUtlMemory<QueryObjectInternalVulkan_t::operator[](
					int i);  // 602
			CUtlVectorBase<QueryObjectInternalVulkan_t::Element(
				int i);  // 1114
			CUtlMemory<QueryObjectInternalVulkan_t::operator[](
					int i);  // 602
			CUtlVectorBase<QueryObjectInternalVulkan_t::Element(
				int i);  // 1114
			memmove(void* __dest,
				const void* __src,
				size_t __len);  // 115
			V_memmove(void* dest,
					const void* src,
					size_t count);  // 1114
			CUtlVectorBase<QueryObjectInternalVulkan_t::ShiftElementsLeft(
						int elem,
						int num);  // 1608
			CUtlVectorBase<QueryObjectInternalVulkan_t::Remove(
				int elem);  // 1081
			ThreadInterlockedExchange(volatile int32* p,
							int32 value);  // 607
			CInterlockedIntT<int, 4>::AtomicSet(
					int newValue);  // 614
			CInterlockedIntT<int, 4>::InterlockedExchange(
						int newValue);  // 1112
			CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::operator[](
					short unsigned int i);  // 482
			CUtlLinkedList<QueryObjectInternalVulkan_t::Element(
				short unsigned int i);  // 825
			CopyConstruct<QueryObjectInternalVulkan_t*>(QueryObjectInternalVulkan_t** pMemory,
									QueryObjectInternalVulkan_t* const& src);  // 825
			CUtlLinkedList<QueryObjectInternalVulkan_t::InsertBefore(
					short unsigned int before,
					QueryObjectInternalVulkan_t* const& src);  // 856
			CUtlLinkedList<QueryObjectInternalVulkan_t::AddToTail(
					QueryObjectInternalVulkan_t* const& src);  // 1117
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 204
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
			CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 1119
			CUtlMemory<QueryObjectInternalVulkan_t::operator[](
					int i);  // 588
			CUtlVectorBase<QueryObjectInternalVulkan_t::operator[](
					int i);  // 1031
			CInterlockedIntT<int, 4>::operator==(
					int rhs);  // 1032
			VulkanDevice(void); // 1064
		}
		CUtlVectorBase<QueryObjectInternalVulkan_t::Count(); // 1029
	}
	CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::ValidateGrowSize(); // 475
	CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 448
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::InvalidIterator(); // 448
	CUtlLinkedList<QueryObjectInternalVulkan_t::ConstructList(); // 454
	CUtlLinkedList<QueryObjectInternalVulkan_t::ResetDbgInfo(); // 455
	CUtlLinkedList<QueryObjectInternalVulkan_t::CUtlLinkedList(
			int growSize,
			int initSize);  // 1028
	CRenderThreadVulkan::QueueResetQueries(
				const CUtlLinkedList<QueryObjectInternalVulkan_t*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedLis queriesToReset);  // 1126
	ValidateAlignment<UtlLinkedListElem_t<QueryObjectInternalVulkan_t*, short unsigned int> >(void); // 508
	CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::Purge(); // 903
	CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::Purge(); // 510
	CUtlMemory<UtlLinkedListElem_t<QueryObjectInternalVulkan_t::~CUtlMemory(); // 462
	CUtlLinkedList<QueryObjectInternalVulkan_t::~CUtlLinkedList(); // 1128
} /* size: 0, variables: 2, inline expansions: 13 (536 bytes) */

// <00B7C0AB> vulkan/renderthreadvulkan.cpp:1131
// variables: 9
// function calls: 36
void CRenderThreadVulkan::ProcessAsyncReadRequests()
{
	IndexType_t nIndex; // 1133
	const char   __FUNCTION__; // 26911
	{
		AsyncReadbackVulkan_t& readback; // 1136
		VkResult nFenceResult; // 1137
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1140
		}
		{
			void* pLockedData; // 1146
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1148
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1161
			}
			VulkanDevice(void); // 1147
			CUtlString::CUtlString(); // 149
			CUtlString::Get(); // 151
			CUtlString::~CUtlString(); // 153
			_DOVK(VkResult result,
				const char* pCommand);  // 1147
		}
		{
			IndexType_t nIndexToDelete; // 1189
			VulkanDevice(void); // 1176
			VulkanDevice(void); // 1177
			VulkanDevice(void); // 1178
			CRenderDeviceVulkan::MemoryManager(); // 1181
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 204
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
			CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 1183
			IRenderReadCallback::~IRenderReadCallback(); // 166
			IRenderReadCallback::~IRenderReadCallback(); // 1186
			CUtlMemory<UtlLinkedListElem_t<AsyncReadbackVulkan_t, short unsigned int>, short unsigned int>::operator[](
					short unsigned int i);  // 368
			InternalElement(const CUtlLinkedList<AsyncReadbackVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedList this,
					short unsigned int i);  // 550
			Next(const CUtlLinkedList<AsyncReadbackVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedList this,
				short unsigned int i);  // 1190
			CUtlMemory<UtlLinkedListElem_t<AsyncReadbackVulkan_t, short unsigned int>, short unsigned int>::IsIdxValid(
					short unsigned int i);  // 588
			CUtlMemory<UtlLinkedListElem_t<AsyncReadbackVulkan_t, short unsigned int>, short unsigned int>::IsIdxAfter(
					short unsigned int i,
					const Iterator_t& it);  // 591
			IsValidIndex(const CUtlLinkedList<AsyncReadbackVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedList this,
					short unsigned int i);  // 583
			IsValidIndex(const CUtlLinkedList<AsyncReadbackVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedList this,
					short unsigned int i);  // 749
			{
			}
			CUtlMemory<UtlLinkedListElem_t<AsyncReadbackVulkan_t, short unsigned int>, short unsigned int>::operator[](
					short unsigned int i);  // 367
			InternalElement(const CUtlLinkedList<AsyncReadbackVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t this,
					short unsigned int i);  // 752
			Destruct<AsyncReadbackVulkan_t>(AsyncReadbackVulkan_t* pMemory); // 753
			Free(const CUtlLinkedList<AsyncReadbackVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t this,
				short unsigned int elem);  // 907
			Remove(const CUtlLinkedList<AsyncReadbackVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t this,
				short unsigned int elem);  // 1191
		}
		CUtlMemory<UtlLinkedListElem_t<AsyncReadbackVulkan_t, short unsigned int>, short unsigned int>::operator[](
				short unsigned int i);  // 368
		InternalElement(const CUtlLinkedList<AsyncReadbackVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedList this,
				short unsigned int i);  // 550
		Next(const CUtlLinkedList<AsyncReadbackVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedList this,
			short unsigned int i);  // 1200
		CUtlMemory<UtlLinkedListElem_t<AsyncReadbackVulkan_t, short unsigned int>, short unsigned int>::operator[](
				short unsigned int i);  // 494
		operator[](const CUtlLinkedList<AsyncReadbackVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t this,
				short unsigned int i);  // 1136
		CVulkanPooledFenceObject::Get(); // 1137
		VulkanDevice(void); // 1137
	}
	Head(const CUtlLinkedList<AsyncReadbackVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedList this); // 1133
} /* size: 0, variables: 2, inline expansions: 1 (8 bytes) */

// <00B8DAD6> vulkan/renderthreadvulkan.cpp:1206
void CRenderThreadVulkan::UpdatePipelineStatsBegin(VkSwapchainKHR pSwapChain, const char* pSwapChainName)
{
} /* size: 0 */

// <00B8DB3E> vulkan/renderthreadvulkan.cpp:1217
void CRenderThreadVulkan::UpdatePipelineStatsEnd()
{
} /* size: 0 */

// <00B7B200> vulkan/renderthreadvulkan.cpp:1234
// variables: 13
// function calls: 53
void CRenderThreadVulkan::FrameSync()
{
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_1241; // 1241
		{
			short unsigned int nIndex; // 1243
			Tail(const CUtlLinkedList<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int, false, short unsigned int, CUtl this); // 1243
			operator[](const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int>, short unsigned int>  this,
					short unsigned int i);  // 494
			operator[](const CUtlLinkedList<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory this,
					short unsigned int i);  // 1245
			CRenderDeviceVulkan::MemoryManager(); // 1246
			operator[](const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int>, short unsigned int>  this,
					short unsigned int i);  // 494
			operator[](const CUtlLinkedList<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory this,
					short unsigned int i);  // 1246
			operator[](const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int>, short unsigned this,
					short unsigned int i);  // 368
			InternalElement(const CUtlLinkedList<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int, false, short unsigned int, CUtl this,
					short unsigned int i);  // 543
			Previous(const CUtlLinkedList<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int, false, short unsigned int, CUtl this,
				short unsigned int i);  // 1243
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
				int nLineNumber);  // 1241
		VulkanQueue(void); // 1242
		IsExternallyAllocated(const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int>, short unsigned this); // 905
		Purge(const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int>, short unsigned int> this); // 903
		Purge(const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int>, short unsigned int> this); // 643
		Iterator_t::Iterator_t(
				short unsigned int i);  // 86
		InvalidIterator(const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int>, short unsigned this); // 648
		ResetDbgInfo(const CUtlLinkedList<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory this); // 650
		Purge(const CUtlLinkedList<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory this); // 1248
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 1249
	}
	{
		uint32 nNumFramesToWaitFor; // 1257
		VkFence* pFencesToWaitFor; // 1258
		short int* pFencesToDeleteIndices; // 1259
		uint32 nNumFences; // 1261
		uint64_t nTimeout; // 1272
		double flStartTime; // 1273
		{
			short unsigned int nIndex; // 1262
			Head(const CUtlLinkedList<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int, false, short unsigned int, CUtl this); // 1262
			operator[](const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int>, short unsigned int>  this,
					short unsigned int i);  // 494
			operator[](const CUtlLinkedList<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory this,
					short unsigned int i);  // 1264
			operator[](const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int>, short unsigned this,
					short unsigned int i);  // 368
			InternalElement(const CUtlLinkedList<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int, false, short unsigned int, CUtl this,
					short unsigned int i);  // 550
			Next(const CUtlLinkedList<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int, false, short unsigned int, CUtl this,
				short unsigned int i);  // 1262
		}
		{
			VkResult nResult; // 1275
			double flEndTime; // 1276
			{
				CUtlString strError; // 1279
				CUtlString::CUtlString(); // 1279
				CUtlString::Get(); // 1281
				CUtlString::~CUtlString(); // 1282
			}
			{
				uint32 nFence; // 1285
				IsIdxAfter(const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int>, short unsigned this,
						short unsigned int i,
						const Iterator_t& it);  // 591
				operator[](const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int>, short unsigned this,
						short unsigned int i);  // 594
				IsValidIndex(const CUtlLinkedList<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int, false, short unsigned int, CUtl this,
						short unsigned int i);  // 583
				IsIdxValid(const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int>, short unsigned this,
						short unsigned int i);  // 588
				IsValidIndex(const CUtlLinkedList<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int, false, short unsigned int, CUtl this,
						short unsigned int i);  // 749
				{
				}
				operator[](const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int>, short unsigned int>  this,
						short unsigned int i);  // 367
				InternalElement(const CUtlLinkedList<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory this,
						short unsigned int i);  // 752
				Destruct<CRenderThreadVulkan::PresentFenceVulkan_t>(PresentFenceVulkan_t* pMemory); // 753
				Free(const CUtlLinkedList<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory this,
					short unsigned int elem);  // 907
				Remove(const CUtlLinkedList<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory this,
					short unsigned int elem);  // 1290
				CRenderDeviceVulkan::MemoryManager(); // 1289
				operator[](const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int>, short unsigned int>  this,
						short unsigned int i);  // 494
				operator[](const CUtlLinkedList<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory this,
						short unsigned int i);  // 1289
			}
			VulkanDevice(void); // 1275
		}
	}
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 1236
	Count(const CUtlLinkedList<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int, false, short unsigned int, CUtl this); // 1239
} /* size: 0, inline expansions: 3 (29 bytes) */

// <00B78B19> vulkan/renderthreadvulkan.cpp:1302
// variables: 41
// function calls: 121
void CRenderThreadVulkan::PresentInternal(const CommandPresentVulkan_t& cmd)
{
	bool bHibernating; // 1311
	const CSwapChainVulkan* pSwapChain; // 1312
	const char   __FUNCTION__; // 26869
	{
		PresentFenceVulkan_t presentFence; // 1333
		bool bFrameSyncEnable; // 1334
		{
			VkPresentInfoKHR presentInfo; // 1342
			VkPresentTimeGOOGLE presentTimeGOOGLE; // 1357
			VkPresentTimesInfoGOOGLE presentTimesInfoGOOGLE; // 1358
			bool bWaitedOnSemaphores; // 1395
			{
				uint64_t nIntervalNs; // 1369
				uint64_t nCurrentTimeNS; // 1373
				Plat_TickDiffMicroSec(uint64 nStartTicks,
							uint64 nEndTicks,
							uint64 nFreq);  // 1373
				Plat_TickDiffMicroSec(uint64 nStartTicks,
							uint64 nEndTicks,
							uint64 nFreq);  // 1365
			}
			{
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_1399; // 1399
				VkResult nResult; // 1401
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
						int nLineNumber);  // 1399
				VulkanQueue(void); // 1401
				ThreadInterlockedExchange64(volatile int64* p,
								int64 value);  // 874
				CThreadFastMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 944
				Unlock(CThreadFastMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 1436
				VulkanDevice(void); // 1427
				VulkanQueue(void); // 1433
				CRenderThreadVulkan::DumpDiagnosticCheckpoints(
								VkQueue pQueue);  // 1433
			}
			{
				VkPipelineStageFlags* pWaitStageMasks; // 1442
				VkSubmitInfo submitInfo; // 1443
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_1452; // 1452
				{
					uint32_t nSem; // 1447
				}
				CUtlMemory<VkSemaphore_T::operator[](
						int i);  // 588
				CUtlVectorBase<VkSemaphore_T::operator[](
						int i);  // 1446
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
						int nLineNumber);  // 1452
				VulkanQueue(void); // 1453
				CUtlString::CUtlString(); // 149
				CUtlString::Get(); // 151
				CUtlString::~CUtlString(); // 153
				_DOVK(VkResult result,
					const char* pCommand);  // 1453
				ThreadInterlockedExchange64(volatile int64* p,
								int64 value);  // 874
				CThreadFastMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 944
				Unlock(CThreadFastMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 1454
			}
			CUtlVectorBase<VkSemaphore_T::Count(); // 1351
			CUtlMemory<VkSemaphore_T::operator[](
					int i);  // 588
			CUtlVectorBase<VkSemaphore_T::operator[](
					int i);  // 1354
			CRenderDeviceVulkan::GOOGLEDisplayTimingEnabled(); // 1359
			CUtlVectorBase<VkSemaphore_T::Count(); // 1440
		}
		{
			VkCommandBuffer pCommandBuffer; // 1465
			VkCommandBufferBeginInfo beginInfo; // 1467
			VkSubmitInfo submitInfo; // 1484
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_1488; // 1488
			VkResult nResult; // 1489
			CRenderDeviceVulkan::MemoryManager(); // 1465
			CUtlString::CUtlString(); // 149
			CUtlString::Get(); // 151
			CUtlString::~CUtlString(); // 153
			_DOVK(VkResult result,
				const char* pCommand);  // 1470
			CUtlString::CUtlString(); // 149
			CUtlString::Get(); // 151
			CUtlString::~CUtlString(); // 153
			_DOVK(VkResult result,
				const char* pCommand);  // 1471
			CUtlString::CUtlString(); // 149
			CUtlString::Get(); // 151
			CUtlString::~CUtlString(); // 153
			_DOVK(VkResult result,
				const char* pCommand);  // 1482
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
					int nLineNumber);  // 1488
			VulkanQueue(void); // 1489
			CUtlString::CUtlString(); // 171
			CUtlString::Get(); // 173
			CUtlString::~CUtlString(); // 176
			_DOVK_RESULT(VkResult result,
					const char* pCommand);  // 1489
			VulkanQueue(void); // 1493
			CRenderThreadVulkan::DumpDiagnosticCheckpoints(
							VkQueue pQueue);  // 1493
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 1496
			CRenderThreadVulkan::CreateTimestampResources(); // 1476
		}
		{
			short int* pFencesToDeleteIndices; // 1500
			int nNumFencesComplete; // 1501
			{
				short unsigned int nIndex; // 1503
				{
					VkResult nFenceResult; // 1505
					operator[](const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int>, short unsigned int this,
							short unsigned int i);  // 494
					operator[](const CUtlLinkedList<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int, false, short unsigned int, CUtlMemo this,
							short unsigned int i);  // 1505
					CVulkanPooledFenceObject::Get(); // 1505
					VulkanDevice(void); // 1505
				}
				Tail(const CUtlLinkedList<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int, false, short unsigned int, CU this); // 1503
				operator[](const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int>, short unsign this,
						short unsigned int i);  // 368
				InternalElement(const CUtlLinkedList<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int, false, short unsigned int, CU this,
						short unsigned int i);  // 543
				Previous(const CUtlLinkedList<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int, false, short unsigned int, CU this,
					short unsigned int i);  // 1503
			}
			{
				int nDeleteIdx; // 1514
				{
					SemaphoreFenceVulkan_t* pAcquireNextImageFence; // 1516
					IsIdxAfter(const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int>, short unsign this,
							short unsigned int i,
							const Iterator_t& it);  // 591
					operator[](const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int>, short unsign this,
							short unsigned int i);  // 594
					IsValidIndex(const CUtlLinkedList<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int, false, short unsigned int, CU this,
							short unsigned int i);  // 583
					IsIdxValid(const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int>, short unsign this,
							short unsigned int i);  // 588
					IsValidIndex(const CUtlLinkedList<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int, false, short unsigned int, CU this,
							short unsigned int i);  // 749
					{
					}
					operator[](const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int>, short unsigned int this,
							short unsigned int i);  // 367
					InternalElement(const CUtlLinkedList<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int, false, short unsigned int, CUtlMemo this,
							short unsigned int i);  // 752
					Destruct<CRenderThreadVulkan::SemaphoreFenceVulkan_t>(SemaphoreFenceVulkan_t* pMemory); // 753
					Free(const CUtlLinkedList<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int, false, short unsigned int, CUtlMemo this,
						short unsigned int elem);  // 907
					Remove(const CUtlLinkedList<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int, false, short unsigned int, CUtlMemo this,
						short unsigned int elem);  // 1519
					operator[](const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int>, short unsigned int this,
							short unsigned int i);  // 494
					operator[](const CUtlLinkedList<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int, false, short unsigned int, CUtlMemo this,
							short unsigned int i);  // 1516
					ThreadInterlockedDecrement(volatile int32* p); // 159
					Decrement(int* p); // 204
					CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
					CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
					CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 1517
					VulkanDevice(void); // 1518
				}
			}
		}
		ConVar::GetInt(); // 351
		ConVar::GetBool(); // 1334
		Count(const CUtlLinkedList<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int, false, short unsigned int, CU this); // 1498
		IsIdxValid(const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int>, short unsigned this,
				short unsigned int i);  // 588
		operator[](const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int>, short unsigned this,
				short unsigned int i);  // 594
		IsValidIndex(const CUtlLinkedList<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int, false, short unsigned int, CUtl this,
				short unsigned int i);  // 583
		IsIdxAfter(const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int>, short unsigned this,
				short unsigned int i,
				const Iterator_t& it);  // 591
		IsValidIndex(const CUtlLinkedList<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int, false, short unsigned int, CUtl this,
				short unsigned int i);  // 977
		{
		}
		operator[](const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int>, short unsigned int>  this,
				short unsigned int i);  // 367
		InternalElement(const CUtlLinkedList<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory this,
				short unsigned int i);  // 982
		operator[](const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int>, short unsigned int>  this,
				short unsigned int i);  // 367
		InternalElement(const CUtlLinkedList<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory this,
				short unsigned int i);  // 1011
		LinkBefore(const CUtlLinkedList<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory this,
				short unsigned int before,
				short unsigned int elem);  // 822
		CopyConstruct<CRenderThreadVulkan::PresentFenceVulkan_t>(PresentFenceVulkan_t* pMemory,
									const PresentFenceVulkan_t& src);  // 825
		operator[](const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int>, short unsigned int>  this,
				short unsigned int i);  // 482
		Element(const CUtlLinkedList<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory this,
			short unsigned int i);  // 825
		InsertBefore(const CUtlLinkedList<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory this,
				short unsigned int before,
				const PresentFenceVulkan_t& src);  // 856
		AddToTail(const CUtlLinkedList<CRenderThreadVulkan::PresentFenceVulkan_t, short unsigned int, false, short unsigned int, CUtlMemory this,
				const PresentFenceVulkan_t& src);  // 1528
	}
	{
		uint64_t nTimestampBeginSubmit; // 1549
		uint64_t nTimestampPresentFinished; // 1550
		uint64_t nTimestampWorkFinished; // 1551
		VkResult nResult; // 1553
		const VkPhysicalDeviceLimits& physicalDeviceLimits; // 1562
		double flOneOverCounterFreq; // 1563
		double flTimestampBeginSubmit; // 1565
		double flTimestampPresentFinished; // 1566
		double flTimestampWorkFinished; // 1567
		float32 flTotalGPUFrameTime; // 1569
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1554
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1557
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1560
		}
		VulkanDevice(void); // 1553
		VulkanDevice(void); // 1556
		VulkanDevice(void); // 1559
	}
	CRenderThreadVulkan::UpdatePipelineStatsBegin(
				VkSwapchainKHR pSwapChain,
				const char* pSwapChainName);  // 1304
	CRenderThreadVulkan::ExecuteQueuedCommandBuffers(
					RenderSemaphoreHandle_t hSignalSemaphore);  // 1308
	CRenderDeviceBase::GetSwapChain<CSwapChainVulkan>(
					SwapChainHandle_t hSwapChain);  // 1312
	CRenderDeviceVulkan::MemoryManager(); // 1318
	CRenderThreadVulkan::UpdatePipelineStatsEnd(); // 1579
} /* size: 0, variables: 3, inline expansions: 5 (99 bytes) */

// <00B78AE9> vulkan/renderthreadvulkan.cpp:1592
void CRenderThreadVulkan::WaitingForWork()
{
} /* size: 5 */

// <00B789D3> vulkan/renderthreadvulkan.cpp:1610
// function calls: 4
void CRenderThreadVulkan::OnThreadStart()
{
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 55
	PerThreadDataVulkan_t::AddRef(); // 1613
} /* size: 49, inline expansions: 4 (20 bytes) */

// <00B789BB> vulkan/renderthreadvulkan.cpp:1616
void CRenderThreadVulkan::OnThreadStop()
{
} /* size: 0 */

// <00B7896F> vulkan/renderthreadvulkan.cpp:1625
void CRenderThreadVulkan::SetBestAffinity()
{
} /* size: 9 */

// <00B7839B> vulkan/renderthreadvulkan.cpp:1647
// variables: 4
// function calls: 21
void CRenderThreadVulkan::GetSemaphoreAndMarkQueued()
{
	VkSemaphore pSemaphore; // 1649
	const char   __FUNCTION__; // 26932
	{
		VkSemaphoreCreateInfo semaphoreCreateInfo; // 1658
		VulkanDevice(void); // 1661
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 1661
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1669
	}
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 1653
	CUtlMemory<VkSemaphore_T::operator[](
			int i);  // 602
	CUtlVectorBase<VkSemaphore_T::Element(
		int i);  // 1201
	CUtlMemory<VkSemaphore_T::NumAllocated(); // 1196
	CopyConstruct<VkSemaphore_T*>(VkSemaphore_T** pMemory,
					VkSemaphore_T* const& src);  // 1201
	CUtlMemory<VkSemaphore_T::Base(); // 112
	CUtlVectorBase<VkSemaphore_T::Base(); // 368
	CUtlVectorBase<VkSemaphore_T::ResetDbgInfo(); // 824
	CUtlVectorBase<VkSemaphore_T::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<VkSemaphore_T::AddToTail(
			VkSemaphore_T* const& src);  // 1672
	{
	}
	CUtlMemory<VkSemaphore_T::operator[](
			int i);  // 165
	CUtlMemory<VkSemaphore_T::Count(); // 313
	CUtlQueue<VkSemaphore_T::Previous_Unchecked(
				QueueIter_t it);  // 173
	CUtlQueue<VkSemaphore_T::RemoveAtTail(
			VkSemaphore_T *& removedElement);  // 151
	CUtlQueue<VkSemaphore_T::RemoveAtTail(); // 1665
} /* size: 0, variables: 2, inline expansions: 16 (491 bytes) */

// <00B77D97> vulkan/renderthreadvulkan.cpp:1682
// variables: 5
// function calls: 26
void CRenderThreadVulkan::MarkQueuedSemaphoresAsWaitedOn()
{
	{
		int32 nSem; // 1684
		CUtlVectorBase<VkSemaphore_T::Count(); // 1684
		{
			QueueIter_t nextTail; // 216
			CUtlQueue<VkSemaphore_T::Next_Unchecked(
					QueueIter_t it);  // 216
			{
				int nOldAllocCount; // 219
				int nNewAllocCount; // 221
				int nGrowAmount; // 222
				CUtlMemory<VkSemaphore_T::NumAllocated(); // 221
				CUtlQueue<VkSemaphore_T::Next_Unchecked(
						QueueIter_t it);  // 224
				CUtlMemory<VkSemaphore_T::operator[](
						int i);  // 229
				CUtlMemory<VkSemaphore_T::operator[](
						int i);  // 229
				memmove(void* __dest,
					const void* __src,
					size_t __len);  // 115
				V_memmove(void* dest,
						const void* src,
						size_t count);  // 229
			}
		}
		CUtlMemory<VkSemaphore_T::IsGrowable(); // 881
		CUtlMemory<VkSemaphore_T::IsExternallyAllocated(); // 888
		CUtlMemory<VkSemaphore_T::EnsureCapacity(
				int num);  // 210
		CUtlMemory<VkSemaphore_T::operator[](
				int i);  // 239
		CopyConstruct<VkSemaphore_T*>(VkSemaphore_T** pMemory,
						VkSemaphore_T* const& src);  // 239
		CUtlQueue<VkSemaphore_T::Insert(
			VkSemaphore_T* const& element);  // 1686
		CUtlMemory<VkSemaphore_T::operator[](
				int i);  // 588
		CUtlVectorBase<VkSemaphore_T::operator[](
				int i);  // 1686
	}
	CUtlMemory<VkSemaphore_T::NumAllocated(); // 782
	CUtlMemory<VkSemaphore_T::Base(); // 112
	CUtlVectorBase<VkSemaphore_T::Base(); // 368
	CUtlVectorBase<VkSemaphore_T::ResetDbgInfo(); // 824
	CUtlVectorBase<VkSemaphore_T::GrowMemory(
			int num);  // 784
	CUtlVectorBase<VkSemaphore_T::GrowVector(
			int num);  // 1445
	CUtlVectorBase<VkSemaphore_T::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<VkSemaphore_T::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<VkSemaphore_T::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<VkSemaphore_T::SetCount(
		int count);  // 1688
} /* size: 560, inline expansions: 10 (312 bytes) */

// <00B77CFE> vulkan/renderthreadvulkan.cpp:1696
// variables: 2
void CRenderThreadVulkan::GPUCrash()
{
	const char* pErrorMessage; // 1699
	{
		int* _pCrash; // 1708
	}
} /* size: 40, variables: 1 */

// <00B8FB13> vulkan/renderthreadvulkan.cpp:1716
// variables: 2
void CRenderThreadVulkan::DumpDiagnosticCheckpoints(VkQueue pQueue)
{
	CUtlString strDiagnostics; // 1727
	const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& crashShaders; // 1824
} /* size: 0, variables: 2 */

// <00B8DBC1> vulkan/renderthreadvulkan.cpp:1716
// variables: 25
// function calls: 119
void CRenderThreadVulkan::DumpDiagnosticCheckpoints()
{
	CUtlString strDiagnostics; // 1727
	const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& crashShaders; // 1824
	CUtlString::CUtlString(); // 1727
	CRenderDeviceVulkan::EXTDeviceFaultEnabled(); // 1730
	{
		VkDeviceFaultCountsEXT faultCounts; // 1732
		VkResult result; // 1735
		VulkanDevice(void); // 1735
		{
			VkDeviceFaultInfoEXT faultInfo; // 1738
			CUtlVector<VkDeviceFaultAddressInfoEXT, CUtlMemory<VkDeviceFaultAddressInfoEXT, int> > addressInfos; // 1741
			CUtlVector<VkDeviceFaultVendorInfoEXT, CUtlMemory<VkDeviceFaultVendorInfoEXT, int> > vendorInfos; // 1745
			CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > vendorBinaryData; // 1749
			CUtlMemory<VkDeviceFaultAddressInfoEXT, int>::ValidateGrowSize(); // 475
			CUtlMemory<VkDeviceFaultAddressInfoEXT, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<VkDeviceFaultAddressInfoEXT, CUtlMemory<VkDeviceFaultAddressInfoEXT, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<VkDeviceFaultAddressInfoEXT, CUtlMemory<VkDeviceFaultAddressInfoEXT, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<VkDeviceFaultAddressInfoEXT, CUtlMemory<VkDeviceFaultAddressInfoEXT, int> >::CUtlVector(); // 1741
			CUtlMemory<VkDeviceFaultAddressInfoEXT, int>::Grow(
				int num);  // 806
			CUtlVectorBase<VkDeviceFaultAddressInfoEXT, CUtlMemory<VkDeviceFaultAddressInfoEXT, int> >::GrowMemory(
					int num);  // 784
			CUtlVectorBase<VkDeviceFaultAddressInfoEXT, CUtlMemory<VkDeviceFaultAddressInfoEXT, int> >::GrowVector(
					int num);  // 1445
			CUtlVectorBase<VkDeviceFaultAddressInfoEXT, CUtlMemory<VkDeviceFaultAddressInfoEXT, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1437
			CUtlVectorBase<VkDeviceFaultAddressInfoEXT, CUtlMemory<VkDeviceFaultAddressInfoEXT, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1294
			CUtlVectorBase<VkDeviceFaultAddressInfoEXT, CUtlMemory<VkDeviceFaultAddressInfoEXT, int> >::AddMultipleToTail(
						int num);  // 1319
			CUtlVectorBase<VkDeviceFaultAddressInfoEXT, CUtlMemory<VkDeviceFaultAddressInfoEXT, int> >::SetCount(
				int count);  // 1330
			CUtlVectorBase<VkDeviceFaultAddressInfoEXT, CUtlMemory<VkDeviceFaultAddressInfoEXT, int> >::SetSize(
				int size);  // 1742
			CUtlMemory<VkDeviceFaultVendorInfoEXT, int>::ValidateGrowSize(); // 475
			CUtlMemory<VkDeviceFaultVendorInfoEXT, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<VkDeviceFaultVendorInfoEXT, CUtlMemory<VkDeviceFaultVendorInfoEXT, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<VkDeviceFaultVendorInfoEXT, CUtlMemory<VkDeviceFaultVendorInfoEXT, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<VkDeviceFaultVendorInfoEXT, CUtlMemory<VkDeviceFaultVendorInfoEXT, int> >::CUtlVector(); // 1745
			CUtlMemory<VkDeviceFaultVendorInfoEXT, int>::Grow(
				int num);  // 806
			CUtlVectorBase<VkDeviceFaultVendorInfoEXT, CUtlMemory<VkDeviceFaultVendorInfoEXT, int> >::GrowMemory(
					int num);  // 784
			CUtlVectorBase<VkDeviceFaultVendorInfoEXT, CUtlMemory<VkDeviceFaultVendorInfoEXT, int> >::GrowVector(
					int num);  // 1445
			CUtlVectorBase<VkDeviceFaultVendorInfoEXT, CUtlMemory<VkDeviceFaultVendorInfoEXT, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1437
			CUtlVectorBase<VkDeviceFaultVendorInfoEXT, CUtlMemory<VkDeviceFaultVendorInfoEXT, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1294
			CUtlVectorBase<VkDeviceFaultVendorInfoEXT, CUtlMemory<VkDeviceFaultVendorInfoEXT, int> >::AddMultipleToTail(
						int num);  // 1319
			CUtlVectorBase<VkDeviceFaultVendorInfoEXT, CUtlMemory<VkDeviceFaultVendorInfoEXT, int> >::SetCount(
				int count);  // 1330
			CUtlVectorBase<VkDeviceFaultVendorInfoEXT, CUtlMemory<VkDeviceFaultVendorInfoEXT, int> >::SetSize(
				int size);  // 1746
			CUtlMemory<unsigned char, int>::Grow(
				int num);  // 806
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
						int num);  // 1319
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::SetCount(
				int count);  // 1330
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::SetSize(
				int size);  // 1750
			CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
			CUtlMemory<unsigned char, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 1749
			VulkanDevice(void); // 1753
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 83
			CFmtStrN<256>::operator char const*(); // 1756
			CBufferString::~CBufferString(); // 587
			CBufferStringN<256>::~CBufferStringN(); // 41
			CFmtStrN<256>::~CFmtStrN(); // 1756
			{
				const VkDeviceFaultAddressInfoEXT& addressInfo; // 1758
				CUtlVector<VkDeviceFaultAddressInfoEXT, CUtlMemory<VkDeviceFaultAddressInfoEXT, int> >& __for_range; // 64111
				iterator __for_begin; // 64122
				iterator __for_end; // 64133
				CUtlVectorBase<VkDeviceFaultAddressInfoEXT, CUtlMemory<VkDeviceFaultAddressInfoEXT, int> >::end(); // 1758
				{
					CUtlString strAddressType; // 1760
					CUtlString::Get(); // 99
					CUtlString::String(); // 1762
					CUtlString::CUtlString(); // 1760
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 83
					CFmtStrN<256>::operator char const*(); // 1762
					CBufferString::~CBufferString(); // 587
					CBufferStringN<256>::~CBufferStringN(); // 41
					CFmtStrN<256>::~CFmtStrN(); // 1762
					CUtlString::~CUtlString(); // 1763
				}
			}
			{
				const VkDeviceFaultVendorInfoEXT& vendorInfo; // 1765
				CUtlVector<VkDeviceFaultVendorInfoEXT, CUtlMemory<VkDeviceFaultVendorInfoEXT, int> >& __for_range; // 64174
				iterator __for_begin; // 64185
				iterator __for_end; // 64196
				CUtlVectorBase<VkDeviceFaultVendorInfoEXT, CUtlMemory<VkDeviceFaultVendorInfoEXT, int> >::end(); // 1765
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 83
				CFmtStrN<256>::operator char const*(); // 1767
				CBufferString::~CBufferString(); // 587
				CBufferStringN<256>::~CBufferStringN(); // 41
				CFmtStrN<256>::~CFmtStrN(); // 1767
			}
			CUtlMemory<VkDeviceFaultVendorInfoEXT, int>::Purge(); // 903
			CUtlMemory<VkDeviceFaultVendorInfoEXT, int>::Purge(); // 1799
			CUtlVectorBase<VkDeviceFaultVendorInfoEXT, CUtlMemory<VkDeviceFaultVendorInfoEXT, int> >::Purge(); // 560
			ValidateAlignment<VkDeviceFaultVendorInfoEXT>(void); // 508
			CUtlMemory<VkDeviceFaultVendorInfoEXT, int>::Purge(); // 510
			CUtlMemory<VkDeviceFaultVendorInfoEXT, int>::~CUtlMemory(); // 562
			CUtlVectorBase<VkDeviceFaultVendorInfoEXT, CUtlMemory<VkDeviceFaultVendorInfoEXT, int> >::~CUtlVectorBase(); // 410
			CUtlVector<VkDeviceFaultVendorInfoEXT, CUtlMemory<VkDeviceFaultVendorInfoEXT, int> >::~CUtlVector(); // 1770
			CUtlMemory<VkDeviceFaultAddressInfoEXT, int>::Purge(); // 903
			CUtlMemory<VkDeviceFaultAddressInfoEXT, int>::Purge(); // 1799
			CUtlVectorBase<VkDeviceFaultAddressInfoEXT, CUtlMemory<VkDeviceFaultAddressInfoEXT, int> >::Purge(); // 560
			ValidateAlignment<VkDeviceFaultAddressInfoEXT>(void); // 508
			CUtlMemory<VkDeviceFaultAddressInfoEXT, int>::Purge(); // 510
			CUtlMemory<VkDeviceFaultAddressInfoEXT, int>::~CUtlMemory(); // 562
			CUtlVectorBase<VkDeviceFaultAddressInfoEXT, CUtlMemory<VkDeviceFaultAddressInfoEXT, int> >::~CUtlVectorBase(); // 410
			CUtlVector<VkDeviceFaultAddressInfoEXT, CUtlMemory<VkDeviceFaultAddressInfoEXT, int> >::~CUtlVector(); // 1770
			CUtlMemory<unsigned char, int>::Purge(); // 903
			CUtlMemory<unsigned char, int>::Purge(); // 1799
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
			ValidateAlignment<unsigned char>(void); // 508
			CUtlMemory<unsigned char, int>::Purge(); // 510
			CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
			CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 1770
		}
	}
	CRenderDeviceVulkan::NVDeviceDiagnosticCheckpointsEnabled(); // 1773
	{
		uint32_t nNumCheckpoints; // 1775
		{
			VkCheckpointDataNV* pCheckpointData; // 1780
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 1781
			{
				uint32_t nCheckpoint; // 1782
			}
			{
				uint32_t nCheckpoint; // 1789
				{
					const char* pCheckpointStr; // 1791
					const char* pStageStr; // 1792
					VkPipelineStageFlags stage; // 1794
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 83
					CFmtStrN<256>::operator char const*(); // 1816
					CBufferString::~CBufferString(); // 587
					CBufferStringN<256>::~CBufferStringN(); // 41
					CFmtStrN<256>::~CFmtStrN(); // 1816
				}
			}
		}
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 1825
	{
		int i; // 1828
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 1828
		CUtlString::Get(); // 1830
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 1830
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 83
		CFmtStrN<256>::operator char const*(); // 1830
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 1830
	}
	CUtlString::Get(); // 1835
	CUtlString::Get(); // 1836
	CUtlString::~CUtlString(); // 1837
} /* size: 2027, variables: 2, inline expansions: 7 (71 bytes) */

// <00B77AE4> vulkan/renderthreadvulkan.cpp:1716
// variables: 26
void CRenderThreadVulkan::DumpDiagnosticCheckpoints(VkQueue pQueue)
{
	bool s_bAlreadyDumped; // 1719
	CUtlString strDiagnostics; // 1727
	const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& crashShaders; // 1824
	{
		VkDeviceFaultCountsEXT faultCounts; // 1732
		VkResult result; // 1735
		{
			VkDeviceFaultInfoEXT faultInfo; // 1738
			CUtlVector<VkDeviceFaultAddressInfoEXT, CUtlMemory<VkDeviceFaultAddressInfoEXT, int> > addressInfos; // 1741
			CUtlVector<VkDeviceFaultVendorInfoEXT, CUtlMemory<VkDeviceFaultVendorInfoEXT, int> > vendorInfos; // 1745
			CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > vendorBinaryData; // 1749
			{
				const VkDeviceFaultAddressInfoEXT& addressInfo; // 1758
				CUtlVector<VkDeviceFaultAddressInfoEXT, CUtlMemory<VkDeviceFaultAddressInfoEXT, int> >& __for_range; // 64339
				iterator __for_begin; // 28500
				iterator __for_end; // 28500
				{
					CUtlString strAddressType; // 1760
				}
			}
			{
				const VkDeviceFaultVendorInfoEXT& vendorInfo; // 1765
				CUtlVector<VkDeviceFaultVendorInfoEXT, CUtlMemory<VkDeviceFaultVendorInfoEXT, int> >& __for_range; // 64351
				iterator __for_begin; // 34423
				iterator __for_end; // 34423
			}
		}
	}
	{
		uint32_t nNumCheckpoints; // 1775
		{
			VkCheckpointDataNV* pCheckpointData; // 1780
			{
				uint32_t nCheckpoint; // 1782
			}
			{
				uint32_t nCheckpoint; // 1789
				{
					const char* pCheckpointStr; // 1791
					const char* pStageStr; // 1792
					VkPipelineStageFlags stage; // 1794
				}
			}
		}
	}
	{
		int i; // 1828
	}
} /* size: 0, variables: 3 */

// <00B92B41> vulkan/renderthreadvulkan.cpp:1844
void CRenderThreadVulkan::ExecuteQueuedCommandBuffers(RenderSemaphoreHandle_t hSignalSemaphore)
{
} /* size: 0 */

// <00B90D5C> vulkan/renderthreadvulkan.cpp:1844
// variables: 20
// function calls: 122
void CRenderThreadVulkan::ExecuteQueuedCommandBuffers(RenderSemaphoreHandle_t hSignalSemaphore)
{
	CUtlVectorBase<VkCommandBuffer_T::Count(); // 1856
	{
		CVulkanPooledFenceObject* pFence; // 1860
		int32_t nNumCommandBuffers; // 1998
		CUtlVector<VulkanCommandBufferAndPool_t, CUtlMemory<VulkanCommandBufferAndPool_t, int> > cmdBufferAndPools; // 1999
		CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 354
		CVulkanPooledFenceObject::CVulkanPooledFenceObject(
					VkFence pFence);  // 1860
		ThreadInterlockedIncrement(volatile int32* p); // 158
		Increment(int* p); // 199
		CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 329
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef(); // 1861
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 1864
		CUtlMemory<VkCommandBuffer_T::NumAllocated(); // 782
		CUtlMemory<VkCommandBuffer_T::Base(); // 112
		CUtlVectorBase<VkCommandBuffer_T::Base(); // 368
		CUtlVectorBase<VkCommandBuffer_T::ResetDbgInfo(); // 824
		CUtlVectorBase<VkCommandBuffer_T::GrowMemory(
				int num);  // 784
		CUtlVectorBase<VkCommandBuffer_T::GrowVector(
				int num);  // 1223
		CUtlMemory<VkCommandBuffer_T::operator[](
				int i);  // 602
		CUtlVectorBase<VkCommandBuffer_T::Element(
			int i);  // 1097
		CUtlMemory<VkCommandBuffer_T::operator[](
				int i);  // 602
		CUtlVectorBase<VkCommandBuffer_T::Element(
			int i);  // 1097
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 115
		V_memmove(void* dest,
				const void* src,
				size_t count);  // 1097
		CUtlVectorBase<VkCommandBuffer_T::ShiftElementsRight(
					int elem,
					int num);  // 1224
		CUtlMemory<VkCommandBuffer_T::operator[](
				int i);  // 602
		CUtlVectorBase<VkCommandBuffer_T::Element(
			int i);  // 1225
		CopyConstruct<VkCommandBuffer_T*>(VkCommandBuffer_T** pMemory,
							VkCommandBuffer_T* const& src);  // 1225
		CUtlVectorBase<VkCommandBuffer_T::InsertBefore(
				int elem,
				VkCommandBuffer_T* const& src);  // 1187
		CUtlVectorBase<VkCommandBuffer_T::AddToHead(
				VkCommandBuffer_T* const& src);  // 1885
		{
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_1893; // 1893
			VkSubmitInfo submitInfo; // 1894
			VkPipelineStageFlags nWaitStageMasks; // 1898
			VkSemaphore pWaitSemaphores; // 1899
			VkSemaphore pSignalSemaphores; // 1900
			uint32_t nWaitSemaphoreCount; // 1901
			uint32_t nSignalSemaphoreCount; // 1902
			VkSemaphore pSemaphoreToWaitOnInPresent; // 1947
			VkQueue pQueue; // 1961
			VkResult nResult; // 1962
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
					int nLineNumber);  // 1893
			CUtlVectorBase<VkCommandBuffer_T::Count(); // 1896
			CUtlMemory<VkCommandBuffer_T::operator[](
					int i);  // 588
			CUtlVectorBase<VkCommandBuffer_T::operator[](
					int i);  // 1897
			{
				VulkanSemaphore_t* pSemaphore; // 1914
			}
			{
				VulkanSemaphore_t* pSemaphore; // 1938
			}
			VulkanComputeQueue(void); // 1961
			CVulkanPooledFenceObject::Get(); // 1962
			CUtlString::CUtlString(); // 171
			CUtlString::~CUtlString(); // 176
			CUtlString::Get(); // 173
			_DOVK_RESULT(VkResult result,
					const char* pCommand);  // 1962
			CRenderThreadVulkan::DumpDiagnosticCheckpoints(
							VkQueue pQueue);  // 1966
			CUtlVectorBase<VkCommandBuffer_T::Count(); // 1973
			{
				SemaphoreFenceVulkan_t presentFence; // 1978
				ThreadInterlockedIncrement(volatile int32* p); // 158
				Increment(int* p); // 199
				CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 329
				CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef(); // 1979
				IsIdxValid(const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int>, short unsign this,
						short unsigned int i);  // 588
				operator[](const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int>, short unsign this,
						short unsigned int i);  // 594
				IsValidIndex(const CUtlLinkedList<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int, false, short unsigned int, CU this,
						short unsigned int i);  // 583
				IsIdxAfter(const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int>, short unsign this,
						short unsigned int i,
						const Iterator_t& it);  // 591
				IsValidIndex(const CUtlLinkedList<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int, false, short unsigned int, CU this,
						short unsigned int i);  // 977
				{
				}
				operator[](const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int>, short unsigned int this,
						short unsigned int i);  // 367
				InternalElement(const CUtlLinkedList<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int, false, short unsigned int, CUtlMemo this,
						short unsigned int i);  // 982
				operator[](const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int>, short unsigned int this,
						short unsigned int i);  // 367
				InternalElement(const CUtlLinkedList<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int, false, short unsigned int, CUtlMemo this,
						short unsigned int i);  // 1011
				LinkBefore(const CUtlLinkedList<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int, false, short unsigned int, CUtlMemo this,
						short unsigned int before,
						short unsigned int elem);  // 822
				CopyConstruct<CRenderThreadVulkan::SemaphoreFenceVulkan_t>(SemaphoreFenceVulkan_t* pMemory,
												const SemaphoreFenceVulkan_t& src);  // 825
				operator[](const CUtlMemory<UtlLinkedListElem_t<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int>, short unsigned int this,
						short unsigned int i);  // 482
				Element(const CUtlLinkedList<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int, false, short unsigned int, CUtlMemo this,
					short unsigned int i);  // 825
				InsertBefore(const CUtlLinkedList<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int, false, short unsigned int, CUtlMemo this,
						short unsigned int before,
						const SemaphoreFenceVulkan_t& src);  // 856
				AddToTail(const CUtlLinkedList<CRenderThreadVulkan::SemaphoreFenceVulkan_t, short unsigned int, false, short unsigned int, CUtlMemo this,
						const SemaphoreFenceVulkan_t& src);  // 1982
			}
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 1992
		}
		{
			short unsigned int nIndex; // 2000
			{
				VulkanCommandBuffer_t* pCmdBuffer; // 2002
				VulkanCommandBufferAndPool_t cmdBufferAndPool; // 2012
				CUtlMemory<VulkanCommandBufferAndPool_t, int>::NumAllocated(); // 1196
				CUtlMemory<VulkanCommandBufferAndPool_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<VulkanCommandBufferAndPool_t, CUtlMemory<VulkanCommandBufferAndPool_t, int> >::Element(
					int i);  // 1201
				CopyConstruct<VulkanCommandBufferAndPool_t>(VulkanCommandBufferAndPool_t* pMemory,
										const VulkanCommandBufferAndPool_t& src);  // 1201
				CUtlMemory<VulkanCommandBufferAndPool_t, int>::Base(); // 112
				CUtlVectorBase<VulkanCommandBufferAndPool_t, CUtlMemory<VulkanCommandBufferAndPool_t, int> >::Base(); // 368
				CUtlVectorBase<VulkanCommandBufferAndPool_t, CUtlMemory<VulkanCommandBufferAndPool_t, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<VulkanCommandBufferAndPool_t, CUtlMemory<VulkanCommandBufferAndPool_t, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<VulkanCommandBufferAndPool_t, CUtlMemory<VulkanCommandBufferAndPool_t, int> >::AddToTail(
						const VulkanCommandBufferAndPool_t& src);  // 2016
				CUtlMemory<UtlLinkedListElem_t<VulkanCommandBuffer_t::operator[](
						short unsigned int i);  // 494
				CUtlLinkedList<VulkanCommandBuffer_t::operator[](
						short unsigned int i);  // 2002
				{
					long long int nCmdBufIndex; // 2007
					CUtlMemory<VulkanCommandBufferAndPool_t, int>::Base(); // 112
					CUtlVectorBase<VulkanCommandBufferAndPool_t, CUtlMemory<VulkanCommandBufferAndPool_t, int> >::Base(); // 368
					CUtlVectorBase<VulkanCommandBufferAndPool_t, CUtlMemory<VulkanCommandBufferAndPool_t, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<VulkanCommandBufferAndPool_t, CUtlMemory<VulkanCommandBufferAndPool_t, int> >::GrowMemory(
							int num);  // 1198
					CUtlMemory<VulkanCommandBufferAndPool_t, int>::operator[](
							int i);  // 602
					CUtlVectorBase<VulkanCommandBufferAndPool_t, CUtlMemory<VulkanCommandBufferAndPool_t, int> >::Element(
						int i);  // 1201
					CopyConstruct<VulkanCommandBufferAndPool_t>(VulkanCommandBufferAndPool_t* pMemory,
											const VulkanCommandBufferAndPool_t& src);  // 1201
					CUtlMemory<VulkanCommandBufferAndPool_t, int>::NumAllocated(); // 1196
					CUtlVectorBase<VulkanCommandBufferAndPool_t, CUtlMemory<VulkanCommandBufferAndPool_t, int> >::AddToTail(
							const VulkanCommandBufferAndPool_t& src);  // 2009
					Head(const CUtlLinkedList<VulkanCommandBufferAndPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedLis this); // 2007
					Next(const CUtlLinkedList<VulkanCommandBufferAndPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedLis this,
						long long int i);  // 2007
					CUtlFixedMemory<UtlLinkedListElem_t<VulkanCommandBufferAndPool_t, long long int> >::operator[](
							intp i);  // 494
					operator[](const CUtlLinkedList<VulkanCommandBufferAndPool_t, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_ this,
							long long int i);  // 2009
				}
			}
			CUtlMemory<UtlLinkedListElem_t<VulkanCommandBuffer_t::operator[](
					short unsigned int i);  // 368
			CUtlLinkedList<VulkanCommandBuffer_t::InternalElement(
					short unsigned int i);  // 550
			CUtlLinkedList<VulkanCommandBuffer_t::Next(
				short unsigned int i);  // 2000
			CUtlLinkedList<VulkanCommandBuffer_t::Head(); // 2000
		}
		CUtlVectorBase<VulkanCommandBufferAndPool_t, CUtlMemory<VulkanCommandBufferAndPool_t, int> >::Count(); // 2020
		CUtlMemory<VulkanCommandBufferAndPool_t, int>::Base(); // 112
		CUtlVectorBase<VulkanCommandBufferAndPool_t, CUtlMemory<VulkanCommandBufferAndPool_t, int> >::Base(); // 2020
		CRenderDeviceVulkan::MemoryManager(); // 2020
		CUtlVectorBase<VulkanCommandBufferAndPool_t, CUtlMemory<VulkanCommandBufferAndPool_t, int> >::RemoveAll(); // 1798
		CUtlMemory<VulkanCommandBufferAndPool_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<VulkanCommandBufferAndPool_t, int>::Purge(); // 903
		CUtlMemory<VulkanCommandBufferAndPool_t, int>::Purge(); // 1799
		CUtlVectorBase<VulkanCommandBufferAndPool_t, CUtlMemory<VulkanCommandBufferAndPool_t, int> >::Purge(); // 560
		ValidateAlignment<VulkanCommandBufferAndPool_t>(void); // 508
		CUtlMemory<VulkanCommandBufferAndPool_t, int>::Purge(); // 510
		CUtlMemory<VulkanCommandBufferAndPool_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<VulkanCommandBufferAndPool_t, CUtlMemory<VulkanCommandBufferAndPool_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<VulkanCommandBufferAndPool_t, CUtlMemory<VulkanCommandBufferAndPool_t, int> >::~CUtlVector(); // 2021
		CUtlVectorBase<VkCommandBuffer_T::RemoveAll(); // 1994
		CUtlLinkedList<VulkanCommandBuffer_t::Count(); // 1998
		CUtlMemory<VulkanCommandBufferAndPool_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<VulkanCommandBufferAndPool_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 472
		CUtlMemory<VulkanCommandBufferAndPool_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<VulkanCommandBufferAndPool_t, CUtlMemory<VulkanCommandBufferAndPool_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<VulkanCommandBufferAndPool_t, CUtlMemory<VulkanCommandBufferAndPool_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 419
		CUtlVector<VulkanCommandBufferAndPool_t, CUtlMemory<VulkanCommandBufferAndPool_t, int> >::CUtlVector(
				int growSize,
				int initCapacity);  // 1999
		CRenderThreadVulkan::CreateTimestampResources(); // 1881
	}
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00B77919> vulkan/renderthreadvulkan.cpp:1844
// variables: 23
void CRenderThreadVulkan::ExecuteQueuedCommandBuffers(RenderSemaphoreHandle_t hSignalSemaphore)
{
	const char   __FUNCTION__; // 26974
	{
		CVulkanPooledFenceObject* pFence; // 1860
		int32_t nNumCommandBuffers; // 1998
		CUtlVector<VulkanCommandBufferAndPool_t, CUtlMemory<VulkanCommandBufferAndPool_t, int> > cmdBufferAndPools; // 1999
		{
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_1893; // 1893
			VkSubmitInfo submitInfo; // 1894
			VkPipelineStageFlags nWaitStageMasks; // 1898
			VkSemaphore pWaitSemaphores; // 1899
			VkSemaphore pSignalSemaphores; // 1900
			uint32_t nWaitSemaphoreCount; // 1901
			uint32_t nSignalSemaphoreCount; // 1902
			VkSemaphore pSemaphoreToWaitOnInPresent; // 1947
			VkQueue pQueue; // 1961
			VkResult nResult; // 1962
			{
				VulkanSemaphore_t* pSemaphore; // 1914
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1928
			}
			{
				VulkanSemaphore_t* pSemaphore; // 1938
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1956
			}
			{
				SemaphoreFenceVulkan_t presentFence; // 1978
			}
		}
		{
			short unsigned int nIndex; // 2000
			{
				VulkanCommandBuffer_t* pCmdBuffer; // 2002
				VulkanCommandBufferAndPool_t cmdBufferAndPool; // 2012
				{
					long long int nCmdBufIndex; // 2007
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <00B77576> vulkan/renderthreadvulkan.cpp:2033
// variables: 2
// function calls: 11
void CRenderThreadVulkan::GetVulkanFenceFromPool()
{
	VkFence pFence; // 2035
	VkFenceCreateInfo fenceCreateInfo; // 2044
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 1080
	CTSQueue<VkFence_T::FreeNode(
		Node_t* pNode);  // 1103
	CTSQueue<VkFence_T::PopItem(
		VkFence_T** pResult);  // 2038
	VulkanDevice(void); // 2047
	CUtlString::CUtlString(); // 149
	CUtlString::Get(); // 151
	CUtlString::~CUtlString(); // 153
	_DOVK(VkResult result,
		const char* pCommand);  // 2047
} /* size: 409, variables: 2, inline expansions: 11 (523 bytes) */

// <00B76DFC> vulkan/renderthreadvulkan.cpp:2054
// variable: 1
// function calls: 23
void CRenderThreadVulkan::ReturnFenceToPool(VkFence pFence)
{
	VulkanDevice(void); // 2057
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 1085
	CopyConstruct<VkFence_T*>(VkFence_T** pMemory,
					VkFence_T* const& src);  // 1090
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
		CTSQueue<VkFence_T::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<VkFence_T::FinishPush(
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
		CTSQueue<VkFence_T::InterlockedCompareExchangeNode(
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
	CTSQueue<VkFence_T::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1135
	CTSQueue<VkFence_T::FinishPush(
			Node_t* pNode,
			const union NodeLink_t& oldTail);  // 991
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 993
	CTSQueue<VkFence_T::Push(
		Node_t* pNode);  // 1091
	Node_t::Node_t(); // 1088
	CTSQueue<VkFence_T::PushItem(
		VkFence_T* const& init);  // 2060
} /* size: 0, inline expansions: 16 (1009 bytes) */

// <00B76D8C> vulkan/renderthreadvulkan.cpp:2067
// function call: 1
void CVulkanPooledFenceObject::~CVulkanPooledFenceObject()
{
	CRenderDeviceVulkan::RenderThread(); // 2071
} /* size: 49, inline expansions: 1 (10 bytes) */

// <00B76C72> vulkan/renderthreadvulkan.cpp:2067
// function calls: 4
void CVulkanPooledFenceObject::~CVulkanPooledFenceObject()
{
	CRenderDeviceVulkan::RenderThread(); // 2071
	CRefCountServiceBase<true, CRefMT>::~CRefCountServiceBase(); // 328
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::~CRefCounted(); // 2074
	CVulkanPooledFenceObject::~CVulkanPooledFenceObject(); // 2074
} /* size: 75, inline expansions: 4 (51 bytes) */

// <00B76C59> vulkan/renderthreadvulkan.cpp:2067
void CVulkanPooledFenceObject::~CVulkanPooledFenceObject()
{
} /* size: 0 */

// <00B92BAA> vulkan/renderthreadvulkan.cpp:2079
// variables: 2
// function calls: 12
void CRenderThreadVulkan::OnSetSteamVrCompositorTexture(const CommandSetSteamVrCompositorTexture_t& cmd)
{
	CRenderThreadVulkan::ExecuteQueuedCommandBuffers(
					RenderSemaphoreHandle_t hSignalSemaphore);  // 2084
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2090; // 2090
		bool bResult; // 2092
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
				int nLineNumber);  // 2090
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2095
	}
	CRenderThreadVulkan::OnSetSteamVrCompositorTexture(
					const CommandSetSteamVrCompositorTexture_t& cmd);  // 2079
} /* size: 306, inline expansions: 2 (260 bytes) */

// <00B76C17> vulkan/renderthreadvulkan.cpp:2079
// variables: 2
void CRenderThreadVulkan::OnSetSteamVrCompositorTexture(const CommandSetSteamVrCompositorTexture_t& cmd)
{
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2090; // 2090
		bool bResult; // 2092
	}
} /* size: 0 */

// <00B8DB7D> vulkan/renderthreadvulkan.cpp:2100
// variable: 1
void CRenderThreadVulkan::CreateTimestampResources()
{
	VkQueryPoolCreateInfo queryPoolCreateInfo; // 2109
} /* size: 0, variables: 1 */

// <00B8D123> vulkan/renderthreadvulkan.cpp:2100
// variables: 5
// function calls: 24
void CRenderThreadVulkan::CreateTimestampResources()
{
	VkQueryPoolCreateInfo queryPoolCreateInfo; // 2109
	VulkanDevice(void); // 2113
	CUtlString::CUtlString(); // 149
	CUtlString::Get(); // 151
	CUtlString::~CUtlString(); // 153
	_DOVK(VkResult result,
		const char* pCommand);  // 2113
	{
		int nCmdBuffer; // 2116
		{
			VkCommandBuffer pCommandBuffer; // 2118
			VkCommandBufferBeginInfo beginInfo; // 2120
			uint32_t nQuerySlot; // 2127
			CRenderDeviceVulkan::MemoryManager(); // 2118
			CUtlString::CUtlString(); // 149
			CUtlString::Get(); // 151
			CUtlString::~CUtlString(); // 153
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 145
			_DOVK(VkResult result,
				const char* pCommand);  // 136
			_DOVK(VkResult result,
				const char* pCommand);  // 2123
			CUtlString::CUtlString(); // 149
			CUtlString::Get(); // 151
			CUtlString::~CUtlString(); // 153
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 145
			_DOVK(VkResult result,
				const char* pCommand);  // 136
			_DOVK(VkResult result,
				const char* pCommand);  // 2124
			CUtlString::CUtlString(); // 149
			CUtlString::Get(); // 151
			CUtlString::~CUtlString(); // 153
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 145
			_DOVK(VkResult result,
				const char* pCommand);  // 136
			_DOVK(VkResult result,
				const char* pCommand);  // 2131
		}
	}
} /* size: 1198, variables: 1, inline expansions: 5 (197 bytes) */

// <00B76BB9> vulkan/renderthreadvulkan.cpp:2100
// variables: 5
void CRenderThreadVulkan::CreateTimestampResources()
{
	VkQueryPoolCreateInfo queryPoolCreateInfo; // 2109
	{
		int nCmdBuffer; // 2116
		{
			VkCommandBuffer pCommandBuffer; // 2118
			VkCommandBufferBeginInfo beginInfo; // 2120
			uint32_t nQuerySlot; // 2127
		}
	}
} /* size: 0, variables: 1 */

// <00B76AFF> vulkan/renderthreadvulkan.cpp:2138
// variable: 1
// function calls: 2
void CRenderThreadVulkan::DestroyTimestampResources()
{
	{
		int nCmdBuffer; // 2146
		CRenderDeviceVulkan::MemoryManager(); // 2150
	}
	VulkanDevice(void); // 2142
} /* size: 154, inline expansions: 1 (10 bytes) */

// <00B765F2> vulkan/renderthreadvulkan.cpp:2157
// variables: 2
// function calls: 15
void CRenderThreadVulkan::SubmitWorkFinishedTimestamp(const CSwapChainVulkan* pSwapChain)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2159; // 2159
	VkSubmitInfo submitInfo; // 2160
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
			int nLineNumber);  // 2159
	VulkanQueue(void); // 2165
	CUtlString::CUtlString(); // 149
	CUtlString::Get(); // 151
	CUtlString::~CUtlString(); // 153
	_DOVK(VkResult result,
		const char* pCommand);  // 2165
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2169
} /* size: 437, variables: 2, inline expansions: 15 (603 bytes) */

