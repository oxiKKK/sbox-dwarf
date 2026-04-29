
//
// rendersystem/renderdevicebase.cpp
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 298
//	classes: 3
//	struct: 1
//

// <001A51A4> rendersystem/renderdevicebase.cpp:62
void CSwapChainBase::SetWindowHandles(PlatWindow_t hPlatWnd, OsSpecificWindowHandle_t hOsWnd)
{
} /* size: 107 */

// <001A290A> rendersystem/renderdevicebase.cpp:90
// variables: 8
// function calls: 161
void CRenderDeviceBase::CRenderDeviceBase()
{
	{
		int i; // 133
	}
	IRenderDevice::IRenderDevice(); // 113
	CInterlockedIntT<unsigned int, 4>::CInterlockedIntT(); // 113
	CTSListBase::CTSListBase(); // 337
	CTSPool<CDependencyDescriptor>::CTSPool(); // 113
	CInterlockedIntT<unsigned int, 4>::CInterlockedIntT(); // 113
	CTSListBase::CTSListBase(); // 337
	CTSPool<CRenderPassDesc>::CTSPool(); // 113
	ValidateAlignment<CUtlTSHashBase<void*, 1024, RsRasterizerStateDesc_t, CUtlTSHashUseKeyHashMethod<RsRasterizerStateDesc_t>, CThreadSpinRWLock>::HashFixedDataInternal_t<void*> >(void); // 133
	CUtlMemoryPool<CUtlTSHashBase<void::CUtlMemoryPool(
			int numElements,
			MemoryPoolGrowType_t growMode,
			const char* pszAllocOwner);  // 318
	{
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 2282
		{
		}
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 2291
	}
	CThreadSpinRWLock::CThreadSpinRWLock(
				const char* pLockName);  // 297
	HashBucket_t::HashBucket_t(); // 318
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 318
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 320
	{
		int i; // 322
		{
			HashBucket_t& bucket; // 324
		}
	}
	CUtlTSHashBase<void::CUtlTSHashBase(
			int nAllocationCount);  // 809
	CUtlTSHash<void::CUtlTSHash(
			int nAllocationCount);  // 91
	ValidateAlignment<CUtlTSHashBase<void*, 1024, RsDepthStencilStateDesc_t, CUtlTSHashUseKeyHashMethod<RsDepthStencilStateDesc_t>, CThreadSpinRWLock>::HashFixedDataInternal_t<void*> >(void); // 133
	CUtlMemoryPool<CUtlTSHashBase<void::CUtlMemoryPool(
			int numElements,
			MemoryPoolGrowType_t growMode,
			const char* pszAllocOwner);  // 318
	{
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 2282
		{
		}
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 2291
	}
	CThreadSpinRWLock::CThreadSpinRWLock(
				const char* pLockName);  // 297
	HashBucket_t::HashBucket_t(); // 318
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 318
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 320
	{
		int i; // 322
		{
			HashBucket_t& bucket; // 324
		}
	}
	CUtlTSHashBase<void::CUtlTSHashBase(
			int nAllocationCount);  // 809
	CUtlTSHash<void::CUtlTSHash(
			int nAllocationCount);  // 92
	ValidateAlignment<CUtlTSHashBase<void*, 1024, RsBlendStateDesc_t, CUtlTSHashUseKeyHashMethod<RsBlendStateDesc_t>, CThreadSpinRWLock>::HashFixedDataInternal_t<void*> >(void); // 133
	CUtlMemoryPool<CUtlTSHashBase<void::CUtlMemoryPool(
			int numElements,
			MemoryPoolGrowType_t growMode,
			const char* pszAllocOwner);  // 318
	{
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 2282
		{
		}
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 2291
	}
	CThreadSpinRWLock::CThreadSpinRWLock(
				const char* pLockName);  // 297
	HashBucket_t::HashBucket_t(); // 318
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 318
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 320
	{
		int i; // 322
		{
			HashBucket_t& bucket; // 324
		}
	}
	CUtlTSHashBase<void::CUtlTSHashBase(
			int nAllocationCount);  // 809
	CUtlTSHash<void::CUtlTSHash(
			int nAllocationCount);  // 93
	CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::GetLoopbackAddress(); // 149
	CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::CTSFastPushQueue_Base(); // 113
	CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CRenderDeviceBase::MultiViewCBPool_t, CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CRenderDeviceBase::MultiViewCBPool_t, CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CRenderDeviceBase::MultiViewCBPool_t, CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int> >::CUtlVector(); // 113
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 113
	CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::GetLoopbackAddress(); // 149
	CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::CTSFastPushQueue_Base(); // 113
	ValidateAlignment<CRenderDeviceBase::FencedWaitingList_t<void, void> >(void); // 133
	CUtlMemoryPool<CRenderDeviceBase::FencedWaitingList_t<void, void> >::CUtlMemoryPool(
			int numElements,
			MemoryPoolGrowType_t growMode,
			const char* pszAllocOwner);  // 111
	CInterlockedIntT<unsigned int, 4>::CInterlockedIntT(); // 113
	CInterlockedIntT<unsigned int, 4>::CInterlockedIntT(); // 113
	CInterlockedIntT<unsigned int, 4>::CInterlockedIntT(); // 113
	GetLoopbackAddress(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDevice this); // 149
	CTSFastPushQueue_Base(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase:: this); // 873
	FencedWaitingListTSQueue_t<CPipelineFence, ConstantBuffer_t>::FencedWaitingListTSQueue_t(); // 113
	CTSListBase::CTSListBase(); // 23
	CTSPointerList<IRenderContext>::CTSPointerList(); // 113
	GetLoopbackAddress(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBa this); // 149
	CTSFastPushQueue_Base(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::Fe this); // 873
	FencedWaitingListTSQueue_t<CDeviceFence, ConstantBuffer_t>::FencedWaitingListTSQueue_t(); // 113
	CInterlockedIntT<unsigned int, 4>::CInterlockedIntT(); // 113
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
	CTSListBase::CTSListBase(); // 846
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 862
	Node_t::Node_t(); // 864
	CTSQueue<DynamicVertexBufferHandle_t__::End(); // 865
	CTSQueue<DynamicVertexBufferHandle_t__::CTSQueue(); // 113
	CTSListBase::CTSListBase(); // 846
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 862
	Node_t::Node_t(); // 864
	CTSQueue<DynamicIndexBufferHandle_t__::End(); // 865
	CTSQueue<DynamicIndexBufferHandle_t__::CTSQueue(); // 113
	CTSListBase::CTSListBase(); // 23
	CTSPointerList<void>::CTSPointerList(); // 113
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 113
	CUtlIntrusiveList<CIndexBufferBase>::CUtlIntrusiveList(); // 1180
	CUtlIntrusiveDList<CIndexBufferBase>::CUtlIntrusiveDList(); // 113
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 113
	CUtlIntrusiveList<CVertexBufferBase>::CUtlIntrusiveList(); // 1180
	CUtlIntrusiveDList<CVertexBufferBase>::CUtlIntrusiveDList(); // 113
	CUtlIntrusiveList<CPooledIndexBuffer>::CUtlIntrusiveList(); // 1180
	CUtlIntrusiveDList<CPooledIndexBuffer>::CUtlIntrusiveDList(); // 113
	_Head_base<1, std::default_delete<CPoolAllocator>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CPoolAllocator> >::_Tuple_impl(); // 303
	_Head_base<0, CPoolAllocator::_Head_base(); // 303
	_Tuple_impl<0, CPoolAllocator::_Tuple_impl(); // 966
	tuple<CPoolAllocator::tuple(); // 167
	__uniq_ptr_impl<CPoolAllocator, std::default_delete<CPoolAllocator> >::__uniq_ptr_impl(); // 232
	__uniq_ptr_data<CPoolAllocator, std::default_delete<CPoolAllocator>, true, true>::__uniq_ptr_data(); // 298
	unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >::unique_ptr<>(); // 113
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 142
	CTextureDesc::CTextureDesc(); // 113
	ICommandCallback::ICommandCallback(); // 556
	ICommandCompletionCallback::ICommandCompletionCallback(); // 556
	CConCommandMemberAccessor<CRenderDeviceBase>::CConCommandMemberAccessor(
					CRenderDeviceBase* pOwner,
					const char* pName,
					FnMemberCommandCallback_t callback,
					const char* pHelpString,
					ConVarFlags_t flags,
					FnMemberCommandCompletionCallback_t completionFunc);  // 949
	CConCommandMemberAccessor<CRenderDeviceBase>::SetOwner(
		CRenderDeviceBase* pOwner);  // 949
	CCommandMemberInitializer_PrintGPUMemoryStatsCommand::CCommandMemberInitializer_PrintGPUMemoryStatsCommand(); // 113
	CTSListBase::CTSListBase(); // 720
	CTSListBase::CTSListBase(); // 720
	CTSItemList<CRenderDeviceBase::FallbackTextureCopyRequest_t>::CTSItemList(); // 113
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 113
	CUtlMemory<IMaxSwapChainDimensionsChangedListener::ValidateGrowSize(); // 475
	CUtlMemory<IMaxSwapChainDimensionsChangedListener::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<IMaxSwapChainDimensionsChangedListener::ResetDbgInfo(); // 530
	CUtlVectorBase<IMaxSwapChainDimensionsChangedListener::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<IMaxSwapChainDimensionsChangedListener::CUtlVector(); // 113
	CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::Grow(
		int num);  // 193
	CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::Init(
		int nGrowSize,
		int nInitSize);  // 161
	CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::CUtlFixedMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 448
	Iterator_t::Iterator_t(
			BlockHeader_t* p,
			intp i);  // 96
	CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::InvalidIterator(); // 448
	CUtlLinkedList<CSwapChainBase::ConstructList(); // 454
	CUtlLinkedList<CSwapChainBase::ResetDbgInfo(); // 455
	CUtlLinkedList<CSwapChainBase::CUtlLinkedList(
			int growSize,
			int initSize);  // 404
	CUtlFixedLinkedList<CSwapChainBase::CUtlFixedLinkedList(
				int growSize,
				int initSize);  // 113
	CInterlockedIntT<int, 4>::CInterlockedIntT(
			int value);  // 103
	CThreadMutex::CThreadMutex(
			const char* pName);  // 113
	CUtlMemory<CRenderDeviceBase::PerFrameMemoryStack_t::ValidateGrowSize(); // 475
	CUtlMemory<CRenderDeviceBase::PerFrameMemoryStack_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::ResetDbgInfo(); // 530
	CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CRenderDeviceBase::PerFrameMemoryStack_t::CUtlVector(); // 113
	CUtlMemory<CRenderDeviceBase::PerFrameMemoryStack_t::ValidateGrowSize(); // 475
	CUtlMemory<CRenderDeviceBase::PerFrameMemoryStack_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::ResetDbgInfo(); // 530
	CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CRenderDeviceBase::PerFrameMemoryStack_t::CUtlVector(); // 113
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 101
	CUtlMemory<CRenderResource::ValidateGrowSize(); // 475
	CUtlMemory<CRenderResource::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CRenderResource::ResetDbgInfo(); // 530
	CUtlVectorBase<CRenderResource::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CRenderResource::CUtlVector(); // 101
	CRenderResourceMgr::CRenderResourceMgr(); // 113
	CInterlockedIntT<long long int, 8>::CInterlockedIntT(); // 113
	CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::GetLoopbackAddress(); // 149
	CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::CTSFastPushQueue_Base(); // 113
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 113
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<unsigned int, 4>::operator=(
			unsigned int newValue);  // 122
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<unsigned int, 4>::operator=(
			unsigned int newValue);  // 128
	CInterlockedIntT<int, 4>::CInterlockedIntT(
			int value);  // 3037
	CPipelineFence::CPipelineFence(); // 3070
	CRenderDeviceBase::AllocateFence(); // 131
	{
		int i; // 133
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 135
	}
	CInterlockedFloat::CInterlockedFloat(
				float value);  // 110
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 113
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 113
	CInterlockedIntT<int, 4>::CInterlockedIntT(
			int value);  // 113
} /* size: 0, inline expansions: 150 (4681 bytes) */

// <001A28E5> rendersystem/renderdevicebase.cpp:90
// variable: 1
void CRenderDeviceBase::CRenderDeviceBase()
{
	{
		int i; // 133
	}
} /* size: 0 */

// <0019E4D5> rendersystem/renderdevicebase.cpp:140
// variables: 11
// function calls: 294
void CRenderDeviceBase::~CRenderDeviceBase()
{
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 3050
	CThreadEvent::~CThreadEvent(); // 262
	CPipelineFence::~CPipelineFence(); // 3053
	CPipelineFence::Release(); // 3048
	CPipelineFence::Release(); // 147
	{
		int i; // 1807
		CUtlMemory<CRenderDeviceBase::PerFrameMemoryStack_t::operator[](
				int i);  // 602
		CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::Element(
			int i);  // 1809
		PerFrameMemoryStack_t::~PerFrameMemoryStack_t(); // 1809
	}
	CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::RemoveAll(); // 1798
	CUtlMemory<CRenderDeviceBase::PerFrameMemoryStack_t::Purge(); // 903
	CUtlMemory<CRenderDeviceBase::PerFrameMemoryStack_t::IsExternallyAllocated(); // 905
	CUtlMemory<CRenderDeviceBase::PerFrameMemoryStack_t::Purge(); // 1799
	CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::ResetDbgInfo(); // 1800
	CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::Purge(); // 1811
	CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::PurgeAndDeleteElements(); // 149
	{
		int i; // 1807
		CUtlMemory<CRenderDeviceBase::PerFrameMemoryStack_t::operator[](
				int i);  // 602
		CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::Element(
			int i);  // 1809
		PerFrameMemoryStack_t::~PerFrameMemoryStack_t(); // 1809
	}
	CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::RemoveAll(); // 1798
	CUtlMemory<CRenderDeviceBase::PerFrameMemoryStack_t::Purge(); // 903
	CUtlMemory<CRenderDeviceBase::PerFrameMemoryStack_t::IsExternallyAllocated(); // 905
	CUtlMemory<CRenderDeviceBase::PerFrameMemoryStack_t::Purge(); // 1799
	CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::ResetDbgInfo(); // 1800
	CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::Purge(); // 1811
	CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::PurgeAndDeleteElements(); // 150
	CThreadEvent::~CThreadEvent(); // 2177
	CThreadEvent::~CThreadEvent(); // 2177
	CThreadRWLock_FastRead::~CThreadRWLock_FastRead(); // 151
	CUtlVectorBase<CRenderResource::RemoveAll(); // 1798
	CUtlMemory<CRenderResource::IsExternallyAllocated(); // 905
	CUtlMemory<CRenderResource::Purge(); // 903
	CUtlMemory<CRenderResource::Purge(); // 1799
	CUtlVectorBase<CRenderResource::Purge(); // 560
	ValidateAlignment<CRenderResource*>(void); // 508
	CUtlMemory<CRenderResource::Purge(); // 510
	CUtlMemory<CRenderResource::~CUtlMemory(); // 562
	CUtlVectorBase<CRenderResource::~CUtlVectorBase(); // 410
	CUtlVector<CRenderResource::~CUtlVector(); // 98
	CRenderResourceMgr::~CRenderResourceMgr(); // 151
	CThreadMutex::~CThreadMutex(); // 151
	CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::RemoveAll(); // 1798
	CUtlMemory<CRenderDeviceBase::PerFrameMemoryStack_t::IsExternallyAllocated(); // 905
	CUtlMemory<CRenderDeviceBase::PerFrameMemoryStack_t::Purge(); // 903
	CUtlMemory<CRenderDeviceBase::PerFrameMemoryStack_t::Purge(); // 1799
	CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::Purge(); // 560
	ValidateAlignment<CRenderDeviceBase::PerFrameMemoryStack_t*>(void); // 508
	CUtlMemory<CRenderDeviceBase::PerFrameMemoryStack_t::Purge(); // 510
	CUtlMemory<CRenderDeviceBase::PerFrameMemoryStack_t::~CUtlMemory(); // 562
	CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::~CUtlVectorBase(); // 410
	CUtlVector<CRenderDeviceBase::PerFrameMemoryStack_t::~CUtlVector(); // 151
	CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::RemoveAll(); // 1798
	CUtlMemory<CRenderDeviceBase::PerFrameMemoryStack_t::IsExternallyAllocated(); // 905
	CUtlMemory<CRenderDeviceBase::PerFrameMemoryStack_t::Purge(); // 903
	CUtlMemory<CRenderDeviceBase::PerFrameMemoryStack_t::Purge(); // 1799
	CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::Purge(); // 560
	ValidateAlignment<CRenderDeviceBase::PerFrameMemoryStack_t*>(void); // 508
	CUtlMemory<CRenderDeviceBase::PerFrameMemoryStack_t::Purge(); // 510
	CUtlMemory<CRenderDeviceBase::PerFrameMemoryStack_t::~CUtlMemory(); // 562
	CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::~CUtlVectorBase(); // 410
	CUtlVector<CRenderDeviceBase::PerFrameMemoryStack_t::~CUtlVector(); // 151
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 135
	CTSListBase::~CTSListBase(); // 733
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 792
	CTSItemList<CRenderDeviceBase::FallbackTextureCopyRequest_t>::Detach(); // 737
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 745
	CTSItemList<CRenderDeviceBase::FallbackTextureCopyRequest_t>::Purge(); // 732
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 135
	CTSListBase::~CTSListBase(); // 733
	CTSItemList<CRenderDeviceBase::FallbackTextureCopyRequest_t>::~CTSItemList(); // 140
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
	CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::Purge(); // 167
	CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::~CUtlFixedMemory(); // 462
	CUtlLinkedList<CSwapChainBase::~CUtlLinkedList(); // 400
	CUtlFixedLinkedList<CSwapChainBase::~CUtlFixedLinkedList(); // 151
	CUtlVectorBase<IMaxSwapChainDimensionsChangedListener::RemoveAll(); // 1798
	CUtlMemory<IMaxSwapChainDimensionsChangedListener::IsExternallyAllocated(); // 905
	CUtlMemory<IMaxSwapChainDimensionsChangedListener::Purge(); // 903
	CUtlMemory<IMaxSwapChainDimensionsChangedListener::Purge(); // 1799
	CUtlVectorBase<IMaxSwapChainDimensionsChangedListener::Purge(); // 560
	ValidateAlignment<IMaxSwapChainDimensionsChangedListener*>(void); // 508
	CUtlMemory<IMaxSwapChainDimensionsChangedListener::Purge(); // 510
	CUtlMemory<IMaxSwapChainDimensionsChangedListener::~CUtlMemory(); // 562
	CUtlVectorBase<IMaxSwapChainDimensionsChangedListener::~CUtlVectorBase(); // 410
	CUtlVector<IMaxSwapChainDimensionsChangedListener::~CUtlVector(); // 151
	CConCommandMemberAccessor<CRenderDeviceBase>::~CConCommandMemberAccessor(); // 949
	CCommandMemberInitializer_PrintGPUMemoryStatsCommand::~CCommandMemberInitializer_PrintGPUMemoryStatsCommand(); // 151
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 135
	CTSListBase::~CTSListBase(); // 29
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 33
	{
	}
	CUtlMemoryPool<TSPointerListNode_t>::Free(
		TSPointerListNode_t* pMem);  // 43
	CTSPointerList<void>::Purge(); // 28
	CTSPointerList<void>::~CTSPointerList(); // 140
	{
		CPoolAllocator *& __ptr; // 396
		__uniq_ptr_impl<CPoolAllocator, std::default_delete<CPoolAllocator> >::_M_ptr(); // 396
		default_delete<CPoolAllocator>::operator(
				CPoolAllocator* __ptr);  // 86
		default_delete<CPoolAllocator>::operator(
				CPoolAllocator* __ptr);  // 398
		unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >::get_deleter(); // 398
	}
	unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >::~unique_ptr(); // 151
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
	CTSQueue<DynamicIndexBufferHandle_t__::Purge(); // 870
	CInterlockedIntT<int, 4>::operator==(
			int rhs);  // 871
	{
	}
	{
	}
	CTSQueue<DynamicIndexBufferHandle_t__::End(); // 873
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
	CTSQueue<DynamicIndexBufferHandle_t__::~CTSQueue(); // 151
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
	CTSQueue<DynamicVertexBufferHandle_t__::Purge(); // 870
	CInterlockedIntT<int, 4>::operator==(
			int rhs);  // 871
	{
	}
	{
	}
	CTSQueue<DynamicVertexBufferHandle_t__::End(); // 873
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
	CTSQueue<DynamicVertexBufferHandle_t__::~CTSQueue(); // 151
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 33
	{
	}
	CUtlMemoryPool<TSPointerListNode_t>::Free(
		TSPointerListNode_t* pMem);  // 43
	CTSPointerList<IRenderContext>::Purge(); // 28
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 135
	CTSListBase::~CTSListBase(); // 29
	CTSPointerList<IRenderContext>::~CTSPointerList(); // 151
	CUtlMemoryPool<CRenderDeviceBase::FencedWaitingList_t<void, void> >::~CUtlMemoryPool(); // 151
	CUtlVectorBase<CRenderDeviceBase::MultiViewCBPool_t, CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int>::Purge(); // 903
	CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int>::Purge(); // 1799
	CUtlVectorBase<CRenderDeviceBase::MultiViewCBPool_t, CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int> >::Purge(); // 560
	ValidateAlignment<CRenderDeviceBase::MultiViewCBPool_t>(void); // 508
	CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int>::Purge(); // 510
	CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CRenderDeviceBase::MultiViewCBPool_t, CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CRenderDeviceBase::MultiViewCBPool_t, CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int> >::~CUtlVector(); // 151
	CInterlockedIntT<int, 4>::operator int(); // 68
	CUtlMemoryPoolBase::Count(); // 675
	{
		int i; // 683
		{
			HashBucket_t& bucket; // 685
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
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<int, 4>::operator++(); // 582
			CInterlockedIntT<int, 4>::operator++(
					int);  // 3305
			CThreadSpinRWLock::LockForWrite(
					const char* pFileName,
					int nLineNumber);  // 687
		}
	}
	CUtlTSHashBase<void::RemoveAll(); // 668
	CUtlTSHashBase<void::RemoveAll(); // 352
	CUtlTSHashBase<void::Purge(); // 343
	CUtlMemoryPool<CUtlTSHashBase<void::~CUtlMemoryPool(); // 344
	CUtlTSHashBase<void::~CUtlTSHashBase(); // 803
	CUtlTSHash<void::~CUtlTSHash(); // 151
	CInterlockedIntT<int, 4>::operator int(); // 68
	CUtlMemoryPoolBase::Count(); // 675
	{
		int i; // 683
		{
			HashBucket_t& bucket; // 685
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
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<int, 4>::operator++(); // 582
			CInterlockedIntT<int, 4>::operator++(
					int);  // 3305
			CThreadSpinRWLock::LockForWrite(
					const char* pFileName,
					int nLineNumber);  // 687
		}
	}
	CUtlTSHashBase<void::RemoveAll(); // 668
	CUtlTSHashBase<void::RemoveAll(); // 352
	CUtlTSHashBase<void::Purge(); // 343
	CUtlMemoryPool<CUtlTSHashBase<void::~CUtlMemoryPool(); // 344
	CUtlTSHashBase<void::~CUtlTSHashBase(); // 803
	CUtlTSHash<void::~CUtlTSHash(); // 151
	CInterlockedIntT<int, 4>::operator int(); // 68
	CUtlMemoryPoolBase::Count(); // 675
	{
		int i; // 683
		{
			HashBucket_t& bucket; // 685
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
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<int, 4>::operator++(); // 582
			CInterlockedIntT<int, 4>::operator++(
					int);  // 3305
			CThreadSpinRWLock::LockForWrite(
					const char* pFileName,
					int nLineNumber);  // 687
		}
	}
	CUtlTSHashBase<void::RemoveAll(); // 668
	CUtlTSHashBase<void::RemoveAll(); // 352
	CUtlTSHashBase<void::Purge(); // 343
	CUtlMemoryPool<CUtlTSHashBase<void::~CUtlMemoryPool(); // 344
	CUtlTSHashBase<void::~CUtlTSHashBase(); // 803
	CUtlTSHash<void::~CUtlTSHash(); // 151
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	ThreadPause(void); // 208
	CTSListBase::Pop(); // 358
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>, RenderPassSubPassD this); // 796
	CUtlLeanVectorFixedGrowable<RenderPassSubPassDependency_t, 4, short int>::~CUtlLeanVectorFixedGrowable(); // 369
	AlignedByteArrayExplicit_t<8, RenderPassSubPass_t, 8>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::Base(); // 183
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>, CWe this); // 796
	CUtlLeanVectorFixedGrowable<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::~CUtlLeanVectorFixedGrowable(); // 216
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>, RenderSubPassAttachmen this); // 796
	CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 2, short int>::~CUtlLeanVectorFixedGrowable(); // 216
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAttachmen this); // 796
	CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 4, short int>::~CUtlLeanVectorFixedGrowable(); // 216
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAttachmen this); // 796
	CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 4, short int>::~CUtlLeanVectorFixedGrowable(); // 216
	RenderPassSubPass_t::~RenderPassSubPass_t(); // 1526
	Destruct<RenderPassSubPass_t>(RenderPassSubPass_t* pMemory); // 76
	UtlTraitsDestructRange<RenderPassSubPass_t>(RenderPassSubPass_t* pStart,
							RenderPassSubPass_t* pEnd);  // 184
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>, RenderPassSubPass_t, short i this); // 796
	CUtlLeanVectorFixedGrowable<RenderPassSubPass_t, 8, short int>::~CUtlLeanVectorFixedGrowable(); // 369
	CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttachmentD this); // 796
	CUtlLeanVectorFixedGrowable<RenderPassAttachmentDesc_t, 8, short int>::~CUtlLeanVectorFixedGrowable(); // 369
	CRenderPassDesc::~CRenderPassDesc(); // 341
	simpleTSPoolStruct_t::~simpleTSPoolStruct_t(); // 361
	CTSPool<CRenderPassDesc>::Purge(); // 350
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 135
	CTSListBase::~CTSListBase(); // 351
	CTSPool<CRenderPassDesc>::~CTSPool(); // 151
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	ThreadPause(void); // 208
	CTSListBase::Pop(); // 358
	CTSPool<CDependencyDescriptor>::Purge(); // 350
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 135
	CTSListBase::~CTSListBase(); // 351
	CTSPool<CDependencyDescriptor>::~CTSPool(); // 151
	CThreadEvent::~CThreadEvent(); // 151
} /* size: 0, inline expansions: 260 (19908 bytes) */

// <0019E46C> rendersystem/renderdevicebase.cpp:140
void CRenderDeviceBase::~CRenderDeviceBase()
{
} /* size: 0 */

// <0019E3BA> rendersystem/renderdevicebase.cpp:157
void CRenderDeviceBase::InitDevice(int nAdapter, int nFlags, int nDXLevel)
{
} /* size: 90 */

// <0019E1DD> rendersystem/renderdevicebase.cpp:168
// variables: 2
// function calls: 6
void CRenderDeviceBase::ShutdownDevice()
{
	void* pMemory; // 170
	{
		int i; // 171
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 203
		ThreadPause(void); // 208
		CTSListBase::Pop(); // 59
		CUtlMemoryPool<TSPointerListNode_t>::Free(
			TSPointerListNode_t* pMem);  // 63
		CTSPointerList<void>::PopItem(
			void** pResult);  // 173
	}
} /* size: 207, variables: 1 */

// <001AF9EB> rendersystem/renderdevicebase.cpp:183
// function calls: 7
void CRenderDeviceBase::SetDebugFlag(RenderDebugFlag_t nFlag, bool bOnOff)
{
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 618
	CInterlockedIntT<unsigned int, 4>::InterlockedOr(
			unsigned int newValue);  // 625
	CInterlockedIntT<unsigned int, 4>::operator|=(
			unsigned int mask);  // 187
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 629
	CInterlockedIntT<unsigned int, 4>::InterlockedAnd(
			unsigned int newValue);  // 636
	CInterlockedIntT<unsigned int, 4>::operator&=(
			unsigned int mask);  // 191
	CRenderDeviceBase::SetDebugFlag(
			RenderDebugFlag_t nFlag,
			bool bOnOff);  // 183
} /* size: 26, inline expansions: 7 (52 bytes) */

// <0019E1AC> rendersystem/renderdevicebase.cpp:183
void CRenderDeviceBase::SetDebugFlag(RenderDebugFlag_t nFlag, bool bOnOff)
{
} /* size: 0 */

// <001AEB19> rendersystem/renderdevicebase.cpp:196
// variable: 1
// function call: 1
void CRenderDeviceBase::GetDebugFlag(RenderDebugFlag_t nFlag)
{
	uint nCurFlags; // 198
	CInterlockedIntT<unsigned int, 4>::operator unsigned int(); // 198
} /* size: 16, variables: 1, inline expansions: 1 (6 bytes) */

// <0019E17B> rendersystem/renderdevicebase.cpp:196
// variable: 1
void CRenderDeviceBase::GetDebugFlag(RenderDebugFlag_t nFlag)
{
	uint nCurFlags; // 198
} /* size: 0, variables: 1 */

// <0019E11D> rendersystem/renderdevicebase.cpp:203
// function call: 1
void CRenderDeviceBase::GetDebugFlags()
{
	CInterlockedIntT<unsigned int, 4>::operator unsigned int(); // 205
} /* size: 11, inline expansions: 1 (6 bytes) */

// <0019DF37> rendersystem/renderdevicebase.cpp:211
// variable: 1
// function calls: 6
void CRenderDeviceBase::DestroyRenderContexts()
{
	{
		IRenderContext* pCtx; // 215
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 203
		ThreadPause(void); // 208
		CTSListBase::Pop(); // 59
		CUtlMemoryPool<TSPointerListNode_t>::Free(
			TSPointerListNode_t* pMem);  // 63
		CTSPointerList<IRenderContext>::PopItem(
			IRenderContext** pResult);  // 216
	}
} /* size: 168 */

// <0019DEFA> rendersystem/renderdevicebase.cpp:225
void CRenderDeviceBase::SetColorFormat(CColorFormatBase* pColorFormat)
{
} /* size: 0 */

// <001B56A5> rendersystem/renderdevicebase.cpp:231
void CRenderDeviceBase::ProcessRenderThreadEvents()
{
} /* size: 0 */

// <0019DE24> rendersystem/renderdevicebase.cpp:236
// variable: 1
void CRenderDeviceBase::ReadThreadModeFromCommandLine()
{
	const char* pThreadMode; // 238
} /* size: 0, variables: 1 */

// <0019DAD1> rendersystem/renderdevicebase.cpp:253
// variables: 6
// function calls: 8
void CRenderDeviceBase::PerFrameCleanup(SwapChainHandle_t hSwapchain)
{
	CRenderDeviceBase::ProcessRenderThreadEvents(); // 262
	{
		int i; // 591
		{
			HashBucket_t& bucket; // 593
		}
	}
	CUtlTSHashBase<void::Commit(); // 579
	CUtlTSHashBase<void::Commit(); // 266
	{
		int i; // 591
		{
			HashBucket_t& bucket; // 593
		}
	}
	CUtlTSHashBase<void::Commit(); // 579
	CUtlTSHashBase<void::Commit(); // 267
	{
		int i; // 591
		{
			HashBucket_t& bucket; // 593
		}
	}
	CUtlTSHashBase<void::Commit(); // 579
	CUtlTSHashBase<void::Commit(); // 268
	CTextureManagerBase::UpdateUnthrottleTextureStreamingFrameCount(); // 276
} /* size: 452, inline expansions: 8 (502 bytes) */

// <0019DAB8> rendersystem/renderdevicebase.cpp:282
void CRenderDeviceBase::OnPresentSubmitted()
{
} /* size: 0 */

// <0019D7E4> rendersystem/renderdevicebase.cpp:287
// variable: 1
// function calls: 10
void CRenderDeviceBase::GetPresentFence()
{
	CPipelineFence* pLocalFence; // 291
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
	CThreadRWLock_FastRead::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 289
	CInterlockedIntT<int, 4>::GetRaw(); // 3044
	{
	}
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 3045
	CPipelineFence::AddRef(); // 292
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 294
} /* size: 0, variables: 1, inline expansions: 10 (235 bytes) */

// <0019D54F> rendersystem/renderdevicebase.cpp:299
// variable: 1
// function calls: 7
void CRenderDeviceBase::OnQueuePresent()
{
	CPipelineFence* pOldFence; // 304
	CInterlockedIntT<int, 4>::GetRaw(); // 3180
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<unsigned int, 4>::AtomicAdd(
			unsigned int add);  // 3189
	CThreadRWLock_FastRead::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 301
	CInterlockedIntT<int, 4>::CInterlockedIntT(
			int value);  // 3037
	CPipelineFence::CPipelineFence(); // 3070
	CRenderDeviceBase::AllocateFence(); // 305
} /* size: 301, variables: 1, inline expansions: 7 (276 bytes) */

// <0019D0AC> rendersystem/renderdevicebase.cpp:314
// variables: 4
// function calls: 17
void CRenderDeviceBase::QueueFencedRecycling(CPipelineFence* pFence)
{
	{
		FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pFencedListItem; // 319
		CUtlMemoryPool<CRenderDeviceBase::FencedWaitingList_t<void, void> >::Alloc(); // 319
		CInterlockedIntT<int, 4>::GetRaw(); // 3044
		{
		}
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 3045
		CPipelineFence::AddRef(); // 323
		{
			volatile ConstantBuffer_t* pPop; // 237
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 415
			ThreadInterlockedExchangePointer(volatile void** p,
							void* value);  // 237
		}
		CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::BeginPeek(
				bool bWaitIfAlreadyPeeked);  // 443
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 415
		ThreadInterlockedExchangePointer(volatile void** p,
						void* value);  // 313
		{
			volatile ConstantBuffer_t* pNext; // 320
			{
				volatile ConstantBuffer_t* pListIter; // 321
			}
		}
		CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::EndPeek_Detach(
				ConstantBuffer_t* pPeeked);  // 305
		CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::EndPeek_Detach(
				ConstantBuffer_t* pPeeked);  // 444
		CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::Detach(); // 324
		{
		}
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 415
		ThreadInterlockedExchangePointer(volatile void** p,
						void* value);  // 198
		Push(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase:: this,
			FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pPushNode);  // 326
	}
	CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::IsEmpty(); // 317
} /* size: 0, inline expansions: 1 (7 bytes) */

// <001AB30C> rendersystem/renderdevicebase.cpp:314
// variables: 4
// function calls: 19
void CRenderDeviceBase::QueueFencedRecycling(CPipelineFence* pFence)
{
	CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::GetLoopbackAddress(); // 172
	CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::IsEmpty(); // 317
	{
		FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pFencedListItem; // 319
		CUtlMemoryPool<CRenderDeviceBase::FencedWaitingList_t<void, void> >::Alloc(); // 319
		CInterlockedIntT<int, 4>::GetRaw(); // 3044
		{
		}
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 3045
		CPipelineFence::AddRef(); // 323
		{
			volatile ConstantBuffer_t* pPop; // 237
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 415
			ThreadInterlockedExchangePointer(volatile void** p,
							void* value);  // 237
		}
		CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::BeginPeek(
				bool bWaitIfAlreadyPeeked);  // 443
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 415
		ThreadInterlockedExchangePointer(volatile void** p,
						void* value);  // 313
		{
			volatile ConstantBuffer_t* pNext; // 320
			{
				volatile ConstantBuffer_t* pListIter; // 321
			}
		}
		CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::EndPeek_Detach(
				ConstantBuffer_t* pPeeked);  // 305
		CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::EndPeek_Detach(
				ConstantBuffer_t* pPeeked);  // 444
		CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::Detach(); // 324
		{
		}
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 415
		ThreadInterlockedExchangePointer(volatile void** p,
						void* value);  // 198
		Push(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase:: this,
			FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pPushNode);  // 326
	}
	CRenderDeviceBase::QueueFencedRecycling(
				CPipelineFence* pFence);  // 314
} /* size: 0, inline expansions: 3 (264 bytes) */

// <00198FD8> rendersystem/renderdevicebase.cpp:314
// variable: 1
void CRenderDeviceBase::QueueFencedRecycling(CPipelineFence* pFence)
{
	{
		FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pFencedListItem; // 319
	}
} /* size: 0 */

// <0019BDA9> rendersystem/renderdevicebase.cpp:330
// variables: 34
// function calls: 68
void CRenderDeviceBase::FlushDynamicConstantBufferRecyclingQueues()
{
	ConstantBufferPool_t tempList; // 332
	ConstantBuffer_t* pDetached; // 340
	CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::GetLoopbackAddress(); // 149
	CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::CTSFastPushQueue_Base(); // 332
	{
		volatile FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pPop; // 237
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 415
		ThreadInterlockedExchangePointer(volatile void** p,
						void* value);  // 237
	}
	BeginPeek(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::Fe this,
			bool bWaitIfAlreadyPeeked);  // 443
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 313
	{
		volatile FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pNext; // 320
		{
			volatile FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pListIter; // 321
		}
	}
	EndPeek_Detach(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::Fe this,
			FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pPeeked);  // 305
	EndPeek_Detach(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::Fe this,
			FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pPeeked);  // 444
	Detach(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::Fe this); // 895
	{
		FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pNext; // 515
		IterResult_t iterateResult; // 522
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 415
		ThreadInterlockedExchangePointer(volatile void** p,
						void* value);  // 226
		CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::PushMultiple(
				ConstantBuffer_t* pPushNode,
				ConstantBuffer_t* pTailIfKnown);  // 898
		CUtlMemoryPool<CRenderDeviceBase::FencedWaitingList_t<void, void> >::Free(
			FencedWaitingList_t<void, void>* pMem);  // 901
		operator()(const class* __closure,
				FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pItem); // 69
		CallFunctor<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingListTSQueue_t<CDeviceFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>*)>&>(FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pList,
																class& functor); // 522
	}
	IterateDetachedList<CRenderDeviceBase::FencedWaitingListTSQueue_t<CDeviceFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>*)>&, CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, &CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>::m_pNext>::IterateDetachedList<CRenderDeviceBase::FencedWaitingListTSQueue_t<CDeviceFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>*)> >(CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>*, CRenderDeviceBase::FencedWaitingListTSQueue_t<CDeviceFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>*)>&&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>*)> >(FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pList,
																class& functor,
																class& removedItemFunctor); // 502
	IterateDetachedList<CRenderDeviceBase::FencedWaitingListTSQueue_t<CDeviceFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>*)>&, CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, &CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>::m_pNext>::IterateDetachedList<CRenderDeviceBase::FencedWaitingListTSQueue_t<CDeviceFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>*)> >(CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>*, CRenderDeviceBase::FencedWaitingListTSQueue_t<CDeviceFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>*)>&&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>*)> >(FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pList,
																class& functor,
																class& removedItemFunctor); // 547
	IterateDetachedList<CRenderDeviceBase::FencedWaitingListTSQueue_t<CDeviceFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>*)> >(FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pList,
																class& functor); // 895
	FencedWaitingListTSQueue_t<CDeviceFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> >(
																CUtlMemoryPoolMT& fencedWaitingListMemory,
																CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>& recipientList);  // 335
	{
		volatile FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pPop; // 237
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 415
		ThreadInterlockedExchangePointer(volatile void** p,
						void* value);  // 237
	}
	BeginPeek(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase:: this,
			bool bWaitIfAlreadyPeeked);  // 443
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 313
	{
		volatile FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pNext; // 320
		{
			volatile FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pListIter; // 321
		}
	}
	EndPeek_Detach(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase:: this,
			FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pPeeked);  // 305
	EndPeek_Detach(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase:: this,
			FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pPeeked);  // 444
	Detach(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase:: this); // 895
	{
		FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pNext; // 515
		IterResult_t iterateResult; // 522
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 415
		ThreadInterlockedExchangePointer(volatile void** p,
						void* value);  // 226
		CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::PushMultiple(
				ConstantBuffer_t* pPushNode,
				ConstantBuffer_t* pTailIfKnown);  // 898
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 3050
		CThreadEvent::~CThreadEvent(); // 262
		CPipelineFence::~CPipelineFence(); // 3053
		CPipelineFence::Release(); // 3048
		CPipelineFence::Release(); // 900
		CUtlMemoryPool<CRenderDeviceBase::FencedWaitingList_t<void, void> >::Free(
			FencedWaitingList_t<void, void>* pMem);  // 901
		operator()(const class* __closure,
				FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pItem); // 69
		CallFunctor<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingListTSQueue_t<CPipelineFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>*)>&>(FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pList,
																class& functor); // 522
	}
	IterateDetachedList<CRenderDeviceBase::FencedWaitingListTSQueue_t<CPipelineFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>*)>&, CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, &CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>::m_pNext>::IterateDetachedList<CRenderDeviceBase::FencedWaitingListTSQueue_t<CPipelineFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>*)> >(CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>*, CRenderDeviceBase::FencedWaitingListTSQueue_t<CPipelineFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>*)>&&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>*)> >(FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pList,
																class& functor,
																class& removedItemFunctor); // 502
	IterateDetachedList<CRenderDeviceBase::FencedWaitingListTSQueue_t<CPipelineFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>*)>&, CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, &CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>::m_pNext>::IterateDetachedList<CRenderDeviceBase::FencedWaitingListTSQueue_t<CPipelineFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>*)> >(CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>*, CRenderDeviceBase::FencedWaitingListTSQueue_t<CPipelineFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>*)>&&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>*)> >(FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pList,
																class& functor,
																class& removedItemFunctor); // 547
	IterateDetachedList<CRenderDeviceBase::FencedWaitingListTSQueue_t<CPipelineFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> >(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>*)> >(FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pList,
																class& functor); // 895
	FencedWaitingListTSQueue_t<CPipelineFence, ConstantBuffer_t>::FlushToResourceList<CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext> >(
																CUtlMemoryPoolMT& fencedWaitingListMemory,
																CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>& recipientList);  // 338
	{
		volatile ConstantBuffer_t* pPop; // 237
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 415
		ThreadInterlockedExchangePointer(volatile void** p,
						void* value);  // 237
	}
	CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::BeginPeek(
			bool bWaitIfAlreadyPeeked);  // 443
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 313
	{
		volatile ConstantBuffer_t* pNext; // 320
		{
			volatile ConstantBuffer_t* pListIter; // 321
		}
	}
	CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::EndPeek_Detach(
			ConstantBuffer_t* pPeeked);  // 305
	CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::EndPeek_Detach(
			ConstantBuffer_t* pPeeked);  // 444
	CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::Detach(); // 340
	{
		volatile ConstantBuffer_t* pPop; // 237
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 415
		ThreadInterlockedExchangePointer(volatile void** p,
						void* value);  // 237
	}
	CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::BeginPeek(
			bool bWaitIfAlreadyPeeked);  // 443
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 313
	{
		volatile ConstantBuffer_t* pNext; // 320
		{
			volatile ConstantBuffer_t* pListIter; // 321
		}
	}
	CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::EndPeek_Detach(
			ConstantBuffer_t* pPeeked);  // 305
	CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::EndPeek_Detach(
			ConstantBuffer_t* pPeeked);  // 444
	CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::Detach(); // 346
	{
		ConstantBuffer_t* pNext; // 515
		IterResult_t iterateResult; // 522
		operator()(const class* __closure,
				ConstantBuffer_t* pItem); // 38
		_CTSFastPushQueueIterateResult<TSFPQ_IterateResult>::_CTSFastPushQueueIterateResult(
						TSFPQ_IterateResult fullResult);  // 38
		CallFunctor<ConstantBuffer_t, CRenderDeviceBase::FlushDynamicConstantBufferRecyclingQueues()::<lambda(ConstantBuffer_t*)>&>(ConstantBuffer_t* pList,
																class& functor); // 522
	}
	IterateDetachedList<CRenderDeviceBase::FlushDynamicConstantBufferRecyclingQueues()::<lambda(ConstantBuffer_t*)>&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::IterateDetachedList<CRenderDeviceBase::FlushDynamicConstantBufferRecyclingQueues()::<lambda(ConstantBuffer_t*)> >(ConstantBuffer_t*, CRenderDeviceBase::FlushDynamicConstantBufferRecyclingQueues()::<lambda(ConstantBuffer_t*)>&&)::<lambda(ConstantBuffer_t*)> >(ConstantBuffer_t* pList,
																class& functor,
																class& removedItemFunctor); // 547
	IterateDetachedList<CRenderDeviceBase::FlushDynamicConstantBufferRecyclingQueues()::<lambda(ConstantBuffer_t*)> >(ConstantBuffer_t* pList,
																class& functor); // 346
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 226
	CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::PushMultiple(
			ConstantBuffer_t* pPushNode,
			ConstantBuffer_t* pTailIfKnown);  // 343
} /* size: 796, variables: 2, inline expansions: 39 (2217 bytes) */

// <0019AB19> rendersystem/renderdevicebase.cpp:357
// variables: 21
// function calls: 64
void CRenderDeviceBase::OnPresentCompleted(SwapChainHandle_t hSwapChain, int nPresentId, CDeviceFence* pDeviceFence)
{
	bool bCreatedDeviceFence; // 360
	const CSwapChainBase* pSwapChain; // 364
	ConstantBufferPool_t pipelinedCBs; // 366
	{
		ConstantBuffer_t* pConstantBuffers; // 387
		{
			ConstantBuffer_t* pConstantBuffers; // 375
			{
				volatile FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pPop; // 237
				ThreadInterlockedExchange64(volatile int64* p,
								int64 value);  // 415
				ThreadInterlockedExchangePointer(volatile void** p,
								void* value);  // 237
			}
			BeginPeek(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase:: this,
					bool bWaitIfAlreadyPeeked);  // 422
			CPipelineFence::WaitCompleted(
					uint32 nTimeout);  // 269
			CPipelineFence::IsCompleted(); // 879
			operator()(const class* __closure,
					FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pItem); // 426
			EndPeek_Replace(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase:: this,
					FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pPeeked);  // 433
			{
				volatile FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pNext; // 277
				InternalGetNextPopItemFromActiveList(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase:: this,
									volatile FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pCurItem);  // 277
				ThreadInterlockedCompareExchange64(volatile int64* p,
									int64 value,
									int64 comparand);  // 417
				ThreadInterlockedAssignPointerIf(volatile void** p,
								void* value,
								void* comparand);  // 270
			}
			EndPeek_Pop(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase:: this,
					FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pPeeked);  // 260
			EndPeek_Pop(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase:: this,
					FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>* pPeeked);  // 428
			ConditionalPop<CRenderDeviceBase::FencedWaitingListTSQueue_t<CPipelineFence, ConstantBuffer_t>::FencedPop(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>*)> >(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CPipelineFence, ConstantBuffer_t>, CRenderDeviceBase:: this,
																class& functor); // 879
			{
				ConstantBuffer_t* pResourceList; // 883
				ThreadInterlockedDecrement(volatile int32* p); // 586
				CInterlockedIntT<int, 4>::operator--(); // 3050
				CThreadEvent::~CThreadEvent(); // 262
				CPipelineFence::~CPipelineFence(); // 3053
				CPipelineFence::Release(); // 3048
				CPipelineFence::Release(); // 882
				CUtlMemoryPool<CRenderDeviceBase::FencedWaitingList_t<void, void> >::Free(
					FencedWaitingList_t<void, void>* pMem);  // 884
			}
			FencedWaitingListTSQueue_t<CPipelineFence, ConstantBuffer_t>::FencedPop(
					CUtlMemoryPoolMT& fencedWaitingListMemory);  // 375
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 415
			ThreadInterlockedExchangePointer(volatile void** p,
							void* value);  // 226
			CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::PushMultiple(
					ConstantBuffer_t* pPushNode,
					ConstantBuffer_t* pTailIfKnown);  // 380
		}
		{
			{
				FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pDeviceFencedList; // 399
				CUtlMemoryPool<CRenderDeviceBase::FencedWaitingList_t<void, void> >::Alloc(); // 399
				CInterlockedIntT<int, 4>::GetRaw(); // 3085
				{
				}
				ThreadInterlockedIncrement(volatile int32* p); // 576
				CInterlockedIntT<int, 4>::operator++(); // 3086
				CDeviceFence::AddRef(); // 402
				{
				}
				ThreadInterlockedExchange64(volatile int64* p,
								int64 value);  // 415
				ThreadInterlockedExchangePointer(volatile void** p,
								void* value);  // 198
				Push(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::Fe this,
					FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pPushNode);  // 405
			}
			{
				{
					ConstantBuffer_t* pNext; // 515
					IterResult_t iterateResult; // 522
					operator()(const class* __closure,
							ConstantBuffer_t* pItem); // 38
					_CTSFastPushQueueIterateResult<TSFPQ_IterateResult>::_CTSFastPushQueueIterateResult(
									TSFPQ_IterateResult fullResult);  // 38
					CallFunctor<ConstantBuffer_t, CRenderDeviceBase::OnPresentCompleted(SwapChainHandle_t, int, CDeviceFence*)::<lambda(ConstantBuffer_t*)>&>(ConstantBuffer_t* pList,
																class& functor); // 522
				}
				IterateDetachedList<CRenderDeviceBase::OnPresentCompleted(SwapChainHandle_t, int, CDeviceFence*)::<lambda(ConstantBuffer_t*)>&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::IterateDetachedList<CRenderDeviceBase::OnPresentCompleted(SwapChainHandle_t, int, CDeviceFence*)::<lambda(ConstantBuffer_t*)> >(ConstantBuffer_t*, CRenderDeviceBase::OnPresentCompleted(SwapChainHandle_t, int, CDeviceFence*)::<lambda(ConstantBuffer_t*)>&&)::<lambda(ConstantBuffer_t*)> >(ConstantBuffer_t* pList,
																class& functor,
																class& removedItemFunctor); // 547
				IterateDetachedList<CRenderDeviceBase::OnPresentCompleted(SwapChainHandle_t, int, CDeviceFence*)::<lambda(ConstantBuffer_t*)> >(ConstantBuffer_t* pList,
																class& functor); // 410
			}
			_DebuggerBreakInlineExpressionWrapper(void); // 397
		}
		{
			volatile ConstantBuffer_t* pPop; // 237
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 415
			ThreadInterlockedExchangePointer(volatile void** p,
							void* value);  // 237
		}
		CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::BeginPeek(
				bool bWaitIfAlreadyPeeked);  // 443
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 415
		ThreadInterlockedExchangePointer(volatile void** p,
						void* value);  // 313
		{
			volatile ConstantBuffer_t* pNext; // 320
			{
				volatile ConstantBuffer_t* pListIter; // 321
			}
		}
		CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::EndPeek_Detach(
				ConstantBuffer_t* pPeeked);  // 305
		CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::EndPeek_Detach(
				ConstantBuffer_t* pPeeked);  // 444
		CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::Detach(); // 387
		CRenderThreadBase::GetHighestFrameCompleted(); // 1076
		CRenderDeviceBase::GetHighestFrameCompleted(); // 856
		CInterlockedIntT<int, 4>::CInterlockedIntT(
				int value);  // 3074
		CDeviceFence::CDeviceFence(); // 856
		CDeviceFenceBase::CDeviceFenceBase(); // 852
		CRenderDeviceBase::InsertDeviceFence(); // 393
	}
	{
		float flGamma; // 426
		ConVar::GetFloat(); // 426
	}
	CRenderDeviceBase::GetSwapChain<CSwapChainBase>(
					SwapChainHandle_t hSwapChain);  // 364
	CInterlockedFloat::operator=(
			float newValue);  // 362
	CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::GetLoopbackAddress(); // 149
	CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::CTSFastPushQueue_Base(); // 366
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 3021
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 3022
	CSwapChainBase::OnPresentCompleted(
				int nPresentId);  // 423
	RenderDeviceInfo_t::IsExclusiveFullscreen(); // 424
} /* size: 0, variables: 3, inline expansions: 11 (158 bytes) */

// <00197C70> rendersystem/renderdevicebase.cpp:357
void CRenderDeviceBase::OnPresentCompleted(SwapChainHandle_t hSwapChain, int nPresentId, CDeviceFence* pDeviceFence)
{
} /* size: 5 */

// <0019A59E> rendersystem/renderdevicebase.cpp:447
// variables: 13
// function calls: 19
void CRenderDeviceBase::TryRecyclingPooledConstantBuffers()
{
	bool bRecycledAny; // 450
	{
		ConstantBuffer_t* pConstantBuffers; // 456
		{
			volatile FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pPop; // 237
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 415
			ThreadInterlockedExchangePointer(volatile void** p,
							void* value);  // 237
		}
		BeginPeek(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::Fe this,
				bool bWaitIfAlreadyPeeked);  // 422
		CDeviceFence::IsCompleted(); // 879
		operator()(const class* __closure,
				FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pItem); // 426
		EndPeek_Replace(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::Fe this,
				FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pPeeked);  // 433
		{
			volatile FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pNext; // 277
			InternalGetNextPopItemFromActiveList(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::Fe this,
								volatile FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pCurItem);  // 277
			ThreadInterlockedCompareExchange64(volatile int64* p,
								int64 value,
								int64 comparand);  // 417
			ThreadInterlockedAssignPointerIf(volatile void** p,
							void* value,
							void* comparand);  // 270
		}
		EndPeek_Pop(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::Fe this,
				FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pPeeked);  // 260
		EndPeek_Pop(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::Fe this,
				FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>* pPeeked);  // 428
		ConditionalPop<CRenderDeviceBase::FencedWaitingListTSQueue_t<CDeviceFence, ConstantBuffer_t>::FencedPop(CUtlMemoryPoolMT<CRenderDeviceBase::FencedWaitingList_t<void, void> >&)::<lambda(CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>*)> >(const CTSFastPushQueue_Base<CRenderDeviceBase::FencedWaitingList_t<CDeviceFence, ConstantBuffer_t>, CRenderDeviceBase::Fe this,
																class& functor); // 879
		{
			ConstantBuffer_t* pResourceList; // 883
			CUtlMemoryPool<CRenderDeviceBase::FencedWaitingList_t<void, void> >::Free(
				FencedWaitingList_t<void, void>* pMem);  // 884
		}
		FencedWaitingListTSQueue_t<CDeviceFence, ConstantBuffer_t>::FencedPop(
				CUtlMemoryPoolMT& fencedWaitingListMemory);  // 456
		{
			ConstantBuffer_t* pNext; // 515
			IterResult_t iterateResult; // 522
			operator()(const class* __closure,
					ConstantBuffer_t* pItem); // 38
			_CTSFastPushQueueIterateResult<TSFPQ_IterateResult>::_CTSFastPushQueueIterateResult(
							TSFPQ_IterateResult fullResult);  // 38
			CallFunctor<ConstantBuffer_t, CRenderDeviceBase::TryRecyclingPooledConstantBuffers()::<lambda(ConstantBuffer_t*)>&>(ConstantBuffer_t* pList,
																class& functor); // 522
		}
		IterateDetachedList<CRenderDeviceBase::TryRecyclingPooledConstantBuffers()::<lambda(ConstantBuffer_t*)>&, CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::IterateDetachedList<CRenderDeviceBase::TryRecyclingPooledConstantBuffers()::<lambda(ConstantBuffer_t*)> >(ConstantBuffer_t*, CRenderDeviceBase::TryRecyclingPooledConstantBuffers()::<lambda(ConstantBuffer_t*)>&&)::<lambda(ConstantBuffer_t*)> >(ConstantBuffer_t* pList,
																class& functor,
																class& removedItemFunctor); // 547
		IterateDetachedList<CRenderDeviceBase::TryRecyclingPooledConstantBuffers()::<lambda(ConstantBuffer_t*)> >(ConstantBuffer_t* pList,
																class& functor); // 464
	}
} /* size: 290, variables: 1 */

// <00197C57> rendersystem/renderdevicebase.cpp:447
void CRenderDeviceBase::TryRecyclingPooledConstantBuffers()
{
} /* size: 0 */

// <0019A4CA> rendersystem/renderdevicebase.cpp:480
// variable: 1
// function calls: 3
void CRenderDeviceBase::HasOutstandingPresents(SwapChainHandle_t hSwapChain)
{
	const CSwapChainBase* pSwapChain; // 483
	CRenderDeviceBase::GetSwapChain<CSwapChainBase>(
					SwapChainHandle_t hSwapChain);  // 483
	CInterlockedIntT<int, 4>::operator int(); // 2952
	CSwapChainBase::HasOutstandingPresents(); // 484
} /* size: 0, variables: 1, inline expansions: 3 (47 bytes) */

// <00197C31> rendersystem/renderdevicebase.cpp:480
void CRenderDeviceBase::HasOutstandingPresents(SwapChainHandle_t hSwapChain)
{
} /* size: 0 */

// <001AFEA7> rendersystem/renderdevicebase.cpp:491
// variable: 1
// function calls: 3
void CRenderDeviceBase::WaitForOutstandingPresents(SwapChainHandle_t hSwapChain)
{
	const CSwapChainBase* pSwapChain; // 494
	CRenderDeviceBase::GetSwapChain<CSwapChainBase>(
					SwapChainHandle_t hSwapChain);  // 494
	CInterlockedIntT<int, 4>::operator int(); // 3029
	CSwapChainBase::WaitForOutstandingPresents(); // 495
} /* size: 0, variables: 1, inline expansions: 3 (88 bytes) */

// <0019A497> rendersystem/renderdevicebase.cpp:491
// variable: 1
void CRenderDeviceBase::WaitForOutstandingPresents(SwapChainHandle_t hSwapChain)
{
	const CSwapChainBase* pSwapChain; // 494
} /* size: 0, variables: 1 */

// <00197C0B> rendersystem/renderdevicebase.cpp:491
void CRenderDeviceBase::WaitForOutstandingPresents(SwapChainHandle_t hSwapChain)
{
} /* size: 0 */

// <0019A349> rendersystem/renderdevicebase.cpp:499
// variables: 3
// function call: 1
void CRenderDeviceBase::GetDesiredWindowSize(const RenderDeviceInfo_t mode, PlatWindow_t hEngineWindow, int* pWidth, int* pHeight)
{
	{
		int nMonitor; // 508
		int nDesktopWidth; // 514
		int nDesktopHeight; // 515
	}
	RenderDeviceInfo_t::IsCooperativeFullscreen(); // 504
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0019A31F> rendersystem/renderdevicebase.cpp:523
void ReconfigureEngineWindow(PlatWindow_t hEngineWindow, RenderDeviceInfo_t actualMode)
{
} /* size: 0 */

// <0019A160> rendersystem/renderdevicebase.cpp:534
// variables: 2
// function calls: 5
void CRenderDeviceBase::ResizeEngineWindow(SwapChainHandle_t hSwapChain, PlatWindow_t hEngineWindow, RenderDeviceInfo_t actualMode)
{
	const char   __FUNCTION__; // 2712
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 536
	}
	RenderDeviceInfo_t::HasUsageType(); // 536
	RenderDisplayMode_t::GetRefreshRate(); // 525
	RenderDeviceInfo_t::IsExclusiveFullscreen(); // 434
	RenderDeviceInfo_t::GetWindowFlags(); // 528
	ReconfigureEngineWindow(PlatWindow_t hEngineWindow,
				RenderDeviceInfo_t actualMode);  // 538
} /* size: 0, variables: 1, inline expansions: 5 (195 bytes) */

// <001978D4> rendersystem/renderdevicebase.cpp:534
// variables: 2
// function calls: 5
void CRenderDeviceBase::ResizeEngineWindow(SwapChainHandle_t hSwapChain, PlatWindow_t hEngineWindow, RenderDeviceInfo_t actualMode)
{
	const char   __FUNCTION__; // 32087
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 536
	}
	RenderDeviceInfo_t::HasUsageType(); // 536
	RenderDisplayMode_t::GetRefreshRate(); // 525
	RenderDeviceInfo_t::IsExclusiveFullscreen(); // 434
	RenderDeviceInfo_t::GetWindowFlags(); // 528
	ReconfigureEngineWindow(PlatWindow_t hEngineWindow,
				RenderDeviceInfo_t actualMode);  // 538
} /* size: 0, variables: 1, inline expansions: 5 (195 bytes) */

// <0019A132> rendersystem/renderdevicebase.cpp:580
void CRenderDeviceBase::GetLastValidSheetCacheFrame()
{
} /* size: 11 */

// <00199DC4> rendersystem/renderdevicebase.cpp:585
// function calls: 16
void CRenderDeviceBase::AllocPooledRenderPassDesc()
{
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 376
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>::CUtlLeanVectorFixedGrowableBase(); // 411
	CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>, RenderPassSubPassD this); // 799
	CUtlLeanVectorFixedGrowable<RenderPassSubPassDependency_t, 4, short int>::CUtlLeanVectorFixedGrowable(); // 368
	CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::CUtlLeanVectorFixedGrowableBase(); // 411
	CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>, RenderPassAttachmentD this); // 799
	CUtlLeanVectorFixedGrowable<RenderPassAttachmentDesc_t, 8, short int>::CUtlLeanVectorFixedGrowable(); // 368
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::CUtlLeanVectorFixedGrowableBase(); // 411
	CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>, RenderPassSubPass_t, short i this); // 799
	CUtlLeanVectorFixedGrowable<RenderPassSubPass_t, 8, short int>::CUtlLeanVectorFixedGrowable(); // 368
	CRenderPassDesc::CRenderPassDesc(); // 341
	simpleTSPoolStruct_t::simpleTSPoolStruct_t(); // 382
	CTSPool<CRenderPassDesc>::GetObject(); // 587
} /* size: 203, inline expansions: 16 (467 bytes) */

// <00199586> rendersystem/renderdevicebase.cpp:590
// function calls: 43
void CRenderDeviceBase::FreePooledRenderPassDesc(CRenderPassDesc* pDesc)
{
	CUtlLeanVectorFixedGrowableBase<RenderPassAttachmentDesc_t, 8, short int>::RemoveAll(); // 450
	AlignedByteArrayExplicit_t<8, RenderPassSubPass_t, 8>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::Base(); // 183
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>, CWe this); // 796
	CUtlLeanVectorFixedGrowable<CWeakHandle<InfoForResourceTypeCTextureBase>, 2, short int>::~CUtlLeanVectorFixedGrowable(); // 216
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 2, short int>, RenderSubPassAttachmen this); // 796
	CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 2, short int>::~CUtlLeanVectorFixedGrowable(); // 216
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAttachmen this); // 796
	CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 4, short int>::~CUtlLeanVectorFixedGrowable(); // 216
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<RenderSubPassAttachment_t, 4, short int>, RenderSubPassAttachmen this); // 796
	CUtlLeanVectorFixedGrowable<RenderSubPassAttachment_t, 4, short int>::~CUtlLeanVectorFixedGrowable(); // 216
	RenderPassSubPass_t::~RenderPassSubPass_t(); // 1526
	Destruct<RenderPassSubPass_t>(RenderPassSubPass_t* pMemory); // 76
	UtlTraitsDestructRange<RenderPassSubPass_t>(RenderPassSubPass_t* pStart,
							RenderPassSubPass_t* pEnd);  // 184
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPass_t, 8, short int>::RemoveAll(); // 451
	CUtlLeanVectorFixedGrowableBase<RenderPassSubPassDependency_t, 4, short int>::RemoveAll(); // 452
	CRenderPassDesc::Clear(); // 592
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 371
	CTSPool<CRenderPassDesc>::PutObject(
			CRenderPassDesc* pInfo);  // 593
} /* size: 456, inline expansions: 43 (2312 bytes) */

// <00199558> rendersystem/renderdevicebase.cpp:596
void CRenderDeviceBase::BeginRendering()
{
} /* size: 5 */

// <0019951B> rendersystem/renderdevicebase.cpp:600
void CRenderDeviceBase::BeginSubmittingDisplayLists(SwapChainHandle_t hSwapChain)
{
} /* size: 5 */

// <00198A02> rendersystem/renderdevicebase.cpp:604
// variables: 5
// function calls: 48
void CRenderDeviceBase::Present(SwapChainHandle_t hSwapChain)
{
	int nPresentIdVal; // 608
	bool bPreviousPresentCameBack; // 612
	{
		RenderTargetDesc_t rtDesc; // 614
		CRenderContextBasePtr tmpCtx; // 615
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
		RenderTargetDesc_t::Clear(); // 136
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 135
		CRenderDeviceBase::GetSwapChain<CSwapChainBase>(
						SwapChainHandle_t hSwapChain);  // 2796
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 344
		CSwapChainBase::GetColorTexture(); // 2798
		CRenderDeviceBase::GetSwapChainTexture(
					SwapChainHandle_t hSwapChain,
					SwapChainBuffer_t buffer);  // 989
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 989
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 990
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 1003
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1003
		RenderTargetDesc_t::Init(
			SwapChainHandle_t hSwapChain,
			bool bUseColorBuffer,
			bool bUseDepthBuffer,
			RenderColorSpace_t allowSrgbWrites);  // 137
		RenderTargetDesc_t::RenderTargetDesc_t(
					SwapChainHandle_t hSwapChain,
					bool bUseColorBuffer,
					bool bUseDepthBuffer,
					RenderColorSpace_t allowSrgbWrites);  // 614
		CRenderContextPtr::CRenderContextPtr<char const*>(
						IRenderDevice* pDevice,
						const RenderTargetDesc_t& renderTargetDesc);  // 352
		CRenderContextBasePtr::CRenderContextBasePtr(
					IRenderDevice* pDevice,
					const RenderTargetDesc_t& rtDesc,
					const char* pDebugString);  // 615
		CRenderContextBasePtr::operator->(); // 616
		CRenderContextPtr::Release(); // 845
		CRenderContextPtr::~CRenderContextPtr(); // 341
		CRenderContextBasePtr::~CRenderContextBasePtr(); // 618
	}
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 608
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 582
	CInterlockedIntT<unsigned int, 4>::operator++(
			int);  // 652
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 653
	CRenderThreadBase::GetHighestFrameCompleted(); // 1076
	CRenderDeviceBase::GetHighestFrameCompleted(); // 653
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 653
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 653
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 653
	CRenderDeviceBase::IncrementSubmittedFrameCount(
					int nIncrement);  // 620
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 624
	CRenderDeviceBase::GetSwapChain<CSwapChainBase>(
					SwapChainHandle_t hSwapChain);  // 494
	CInterlockedIntT<int, 4>::operator int(); // 3029
	CSwapChainBase::WaitForOutstandingPresents(); // 495
	CRenderDeviceBase::WaitForOutstandingPresents(
					SwapChainHandle_t hSwapChain);  // 630
} /* size: 0, variables: 2, inline expansions: 17 (323 bytes) */

// <00196283> rendersystem/renderdevicebase.cpp:604
// variables: 5
// function calls: 44
void CRenderDeviceBase::Present(SwapChainHandle_t hSwapChain)
{
	int nPresentIdVal; // 608
	bool bPreviousPresentCameBack; // 612
	{
		RenderTargetDesc_t rtDesc; // 614
		CRenderContextBasePtr tmpCtx; // 615
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
		RenderTargetDesc_t::Clear(); // 136
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 135
		CRenderDeviceBase::GetSwapChain<CSwapChainBase>(
						SwapChainHandle_t hSwapChain);  // 2796
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
		CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 344
		CSwapChainBase::GetColorTexture(); // 2798
		CRenderDeviceBase::GetSwapChainTexture(
					SwapChainHandle_t hSwapChain,
					SwapChainBuffer_t buffer);  // 989
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 989
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 990
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 1003
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1003
		RenderTargetDesc_t::Init(
			SwapChainHandle_t hSwapChain,
			bool bUseColorBuffer,
			bool bUseDepthBuffer,
			RenderColorSpace_t allowSrgbWrites);  // 137
		RenderTargetDesc_t::RenderTargetDesc_t(
					SwapChainHandle_t hSwapChain,
					bool bUseColorBuffer,
					bool bUseDepthBuffer,
					RenderColorSpace_t allowSrgbWrites);  // 614
		CRenderContextPtr::CRenderContextPtr<char const*>(
						IRenderDevice* pDevice,
						const RenderTargetDesc_t& renderTargetDesc);  // 352
		CRenderContextBasePtr::CRenderContextBasePtr(
					IRenderDevice* pDevice,
					const RenderTargetDesc_t& rtDesc,
					const char* pDebugString);  // 615
		CRenderContextBasePtr::operator->(); // 616
		CRenderContextPtr::Release(); // 845
		CRenderContextPtr::~CRenderContextPtr(); // 341
		CRenderContextBasePtr::~CRenderContextBasePtr(); // 618
	}
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 608
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 582
	CInterlockedIntT<unsigned int, 4>::operator++(
			int);  // 652
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 653
	CRenderThreadBase::GetHighestFrameCompleted(); // 1076
	CRenderDeviceBase::GetHighestFrameCompleted(); // 653
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 653
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 653
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 653
	CRenderDeviceBase::IncrementSubmittedFrameCount(
					int nIncrement);  // 620
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 624
} /* size: 674, variables: 2, inline expansions: 13 (158 bytes) */

// <00198802> rendersystem/renderdevicebase.cpp:636
// variable: 1
// function calls: 7
void CRenderDeviceBase::OnPresentQueued(SwapChainHandle_t hSwapChain, int nPresentId)
{
	const CSwapChainBase* pSwapChain; // 638
	CRenderDeviceBase::GetSwapChain<CSwapChainBase>(
					SwapChainHandle_t hSwapChain);  // 638
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 3012
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 3013
	CSwapChainBase::OnPresentQueued(
			int nPresentId);  // 641
} /* size: 41, variables: 1, inline expansions: 7 (72 bytes) */

// <0019622A> rendersystem/renderdevicebase.cpp:636
// variable: 1
void CRenderDeviceBase::OnPresentQueued(SwapChainHandle_t hSwapChain, int nPresentId)
{
	const CSwapChainBase* pSwapChain; // 638
} /* size: 0, variables: 1 */

// <001987A3> rendersystem/renderdevicebase.cpp:645
// function call: 1
void CRenderDeviceBase::GetLastPresentTime()
{
	CInterlockedFloat::operator float(); // 647
} /* size: 13, inline expansions: 1 (8 bytes) */

// <001B56D4> rendersystem/renderdevicebase.cpp:650
// function calls: 9
void CRenderDeviceBase::IncrementSubmittedFrameCount(int nIncrement)
{
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 582
	CInterlockedIntT<unsigned int, 4>::operator++(
			int);  // 652
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 653
	CRenderThreadBase::GetHighestFrameCompleted(); // 1076
	CRenderDeviceBase::GetHighestFrameCompleted(); // 653
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 653
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 653
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 653
} /* size: 0, inline expansions: 9 (0 bytes) */

// <0019877D> rendersystem/renderdevicebase.cpp:650
void CRenderDeviceBase::IncrementSubmittedFrameCount(int nIncrement)
{
} /* size: 0 */

// <00198740> rendersystem/renderdevicebase.cpp:659
void CRenderDeviceBase::SetUsePerFrameMemoryStack(bool bUse)
{
} /* size: 12 */

// <00198712> rendersystem/renderdevicebase.cpp:664
void PerFrameMemoryStack_t::PerFrameMemoryStack_t()
{
} /* size: 0 */

// <0019868B> rendersystem/renderdevicebase.cpp:671
void PerFrameMemoryStack_t::~PerFrameMemoryStack_t()
{
} /* size: 0 */

// <0019823E> rendersystem/renderdevicebase.cpp:676
// variables: 2
// function calls: 15
void CRenderDeviceBase::AllocatePerFrameMemoryStack(int nPresentId)
{
	PerFrameMemoryStack_t* pStack; // 678
	int nFreeStacks; // 680
	CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::Count(); // 680
	PerFrameMemoryStack_t::PerFrameMemoryStack_t(); // 689
	CUtlMemory<CRenderDeviceBase::PerFrameMemoryStack_t::NumAllocated(); // 1196
	CUtlMemory<CRenderDeviceBase::PerFrameMemoryStack_t::operator[](
			int i);  // 602
	CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::Element(
		int i);  // 1201
	CopyConstruct<CRenderDeviceBase::PerFrameMemoryStack_t*>(PerFrameMemoryStack_t** pMemory,
								PerFrameMemoryStack_t* const& src);  // 1201
	CUtlMemory<CRenderDeviceBase::PerFrameMemoryStack_t::Base(); // 112
	CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::Base(); // 368
	CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::ResetDbgInfo(); // 824
	CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::AddToTail(
			PerFrameMemoryStack_t* const& src);  // 700
	CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::Count(); // 702
	CUtlMemory<CRenderDeviceBase::PerFrameMemoryStack_t::operator[](
			int i);  // 630
	CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::Tail(); // 683
	CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::Remove(
		int elem);  // 684
} /* size: 353, variables: 2, inline expansions: 15 (236 bytes) */

// <00197809> rendersystem/renderdevicebase.cpp:716
// variables: 4
// function calls: 35
void* CRenderDeviceBase::AllocatePerFrameData(uint32 nSizeInBytes)
{
	void* pRetVal; // 718
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_722; // 722
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 722
		AlignValue<unsigned int>(unsigned int val,
					uintp alignment);  // 136
		CMemoryStack::GetMaxSize(); // 138
		CMemoryStack::GetUsed(); // 139
		CMemoryStack::WillAllocSucceed(
				unsigned int bytes);  // 131
		CMemoryStack::WillAllocSucceed(
				unsigned int bytes);  // 724
		CInterlockedIntT<unsigned int, 4>::GetRaw(); // 726
		{
		}
		AlignValue<unsigned int>(unsigned int val,
					uintp alignment);  // 93
		{
			byte* pNextAlloc; // 99
			ReadVolatileMemory<unsigned char*>(unsigned char* const* pPtr); // 98
			{
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_103; // 103
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
						int nLineNumber);  // 103
				ThreadInterlockedExchange64(volatile int64* p,
								int64 value);  // 874
				CThreadFastMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 944
				Unlock(CThreadFastMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 112
				ThreadInterlockedExchange64(volatile int64* p,
								int64 value);  // 874
				CThreadFastMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 944
				Unlock(CThreadFastMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 112
			}
			ThreadInterlockedAssignIf64(volatile int64* pDest,
							int64 value,
							int64 comparand);  // 459
			InterlockedAssignIf<unsigned char*>(unsigned char** p,
								unsigned char* const& value,
								unsigned char* const& comparand);  // 115
		}
		Max<unsigned char*>(unsigned char* const& val1,
					unsigned char* const& val2);  // 126
		CMemoryStack::Alloc(
			unsigned int bytes,
			bool bClear);  // 729
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 737
	}
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 744
} /* size: 0, variables: 1, inline expansions: 3 (24 bytes) */

// <001970C9> rendersystem/renderdevicebase.cpp:755
// variables: 8
// function calls: 26
void CRenderDeviceBase::FreePerFrameData(const void* pMemory)
{
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_761; // 761
		int nInUse; // 763
		{
			int i; // 764
			{
				PerFrameMemoryStack_t* pStackWrapper; // 766
				CMemoryStack* pStack; // 768
				uint8* pStartPtr; // 769
				uint8* pEndPtr; // 770
				{
					int nFree; // 784
					CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::Count(); // 784
					CUtlMemory<CRenderDeviceBase::PerFrameMemoryStack_t::NumAllocated(); // 1196
					CUtlMemory<CRenderDeviceBase::PerFrameMemoryStack_t::operator[](
							int i);  // 602
					CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::Element(
						int i);  // 1201
					CopyConstruct<CRenderDeviceBase::PerFrameMemoryStack_t*>(PerFrameMemoryStack_t** pMemory,
												PerFrameMemoryStack_t* const& src);  // 1201
					CUtlMemory<CRenderDeviceBase::PerFrameMemoryStack_t::Base(); // 112
					CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::Base(); // 368
					CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::ResetDbgInfo(); // 824
					CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::GrowMemory(
							int num);  // 1198
					CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::AddToTail(
							PerFrameMemoryStack_t* const& src);  // 794
					CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::Remove(
						int elem);  // 797
					PerFrameMemoryStack_t::~PerFrameMemoryStack_t(); // 789
				}
				CUtlMemory<CRenderDeviceBase::PerFrameMemoryStack_t::operator[](
						int i);  // 588
				CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::operator[](
						int i);  // 766
				CMemoryStack::GetBase(); // 769
				CMemoryStack::GetUsed(); // 770
			}
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
				int nLineNumber);  // 761
		CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::Count(); // 763
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 803
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 803
	}
} /* size: 695 */

// <001B58C7> rendersystem/renderdevicebase.cpp:810
// variables: 7
// function calls: 12
void CRenderDeviceBase::SanityCheckPerFrameMemoryStacks(int nPresentId)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_820; // 820
	int nInUse; // 822
	int nFree; // 823
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 820
	CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::Count(); // 822
	CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::Count(); // 823
	{
		int nOldestPresent; // 826
		{
			int i; // 827
			{
				PerFrameMemoryStack_t* pStackWrapper; // 829
				int nDelta; // 830
				CUtlMemory<CRenderDeviceBase::PerFrameMemoryStack_t::operator[](
						int i);  // 588
				CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::operator[](
						int i);  // 829
				Min<int>(const int& val1,
					const int& val2);  // 839
			}
		}
	}
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 847
	CRenderDeviceBase::SanityCheckPerFrameMemoryStacks(
					int nPresentId);  // 810
} /* size: 399, variables: 3, inline expansions: 9 (745 bytes) */

// <0019702D> rendersystem/renderdevicebase.cpp:810
// variables: 8
void CRenderDeviceBase::SanityCheckPerFrameMemoryStacks(int nPresentId)
{
	int nSpews; // 816
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_820; // 820
	int nInUse; // 822
	int nFree; // 823
	{
		int nOldestPresent; // 826
		{
			int i; // 827
			{
				PerFrameMemoryStack_t* pStackWrapper; // 829
				int nDelta; // 830
			}
		}
	}
} /* size: 0, variables: 4 */

// <0019471B> rendersystem/renderdevicebase.cpp:810
// variables: 8
// function calls: 11
void CRenderDeviceBase::SanityCheckPerFrameMemoryStacks(int nPresentId)
{
	int nSpews; // 816
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_820; // 820
	int nInUse; // 822
	int nFree; // 823
	{
		int nOldestPresent; // 826
		{
			int i; // 827
			{
				PerFrameMemoryStack_t* pStackWrapper; // 829
				int nDelta; // 830
				CUtlMemory<CRenderDeviceBase::PerFrameMemoryStack_t::operator[](
						int i);  // 588
				CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::operator[](
						int i);  // 829
				Min<int>(const int& val1,
					const int& val2);  // 839
			}
		}
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
			int nLineNumber);  // 820
	CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::Count(); // 822
	CUtlVectorBase<CRenderDeviceBase::PerFrameMemoryStack_t::Count(); // 823
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 847
} /* size: 0, variables: 4, inline expansions: 8 (0 bytes) */

// <001AECE2> rendersystem/renderdevicebase.cpp:850
// function calls: 5
void CRenderDeviceBase::InsertDeviceFence()
{
	CInterlockedIntT<int, 4>::CInterlockedIntT(
			int value);  // 3074
	CDeviceFence::CDeviceFence(); // 856
	CRenderThreadBase::GetHighestFrameCompleted(); // 1076
	CRenderDeviceBase::GetHighestFrameCompleted(); // 856
	CDeviceFenceBase::CDeviceFenceBase(); // 852
} /* size: 70, inline expansions: 5 (88 bytes) */

// <00197014> rendersystem/renderdevicebase.cpp:850
void CRenderDeviceBase::InsertDeviceFence()
{
} /* size: 0 */

// <00196F29> rendersystem/renderdevicebase.cpp:855
// function calls: 4
void CDeviceFenceBase::CDeviceFenceBase()
{
	CInterlockedIntT<int, 4>::CInterlockedIntT(
			int value);  // 3074
	CDeviceFence::CDeviceFence(); // 856
	CRenderThreadBase::GetHighestFrameCompleted(); // 1076
	CRenderDeviceBase::GetHighestFrameCompleted(); // 856
} /* size: 0, inline expansions: 4 (0 bytes) */

// <00196F10> rendersystem/renderdevicebase.cpp:855
void CDeviceFenceBase::CDeviceFenceBase()
{
} /* size: 0 */

// <00196AEC> rendersystem/renderdevicebase.cpp:861
// variables: 3
// function calls: 17
void CDeviceFenceBase::WaitCompleted(uint32 nTimeout)
{
	CFastTimer timer; // 863
	const char   __FUNCTION__; // 2577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 877
	}
	CCycleCount::Init(
		uint64 cycles);  // 238
	CCycleCount::CCycleCount(); // 63
	CFastTimer::CFastTimer(); // 863
	PLAT_CPU_TIME(void); // 263
	CCycleCount::Sample(); // 335
	CFastTimer::Start(); // 864
	CCycleCount::Init(
		uint64 cycles);  // 238
	CCycleCount::CCycleCount(); // 356
	PLAT_CPU_TIME(void); // 263
	CCycleCount::Sample(); // 357
	CCycleCount::Init(
		uint64 cycles);  // 238
	CCycleCount::CCycleCount(); // 359
	CFastTimer::GetDurationInProgress(); // 871
	Plat_TickDiffMilliSec(uint64 nStartTicks,
				uint64 nEndTicks,
				uint64 nFreq);  // 316
	CCycleCount::GetMilliseconds64(); // 871
	CRenderThreadBase::GetHighestFrameCompleted(); // 1076
	CRenderDeviceBase::GetHighestFrameCompleted(); // 868
} /* size: 171, variables: 2, inline expansions: 17 (169 bytes) */

// <001940C5> rendersystem/renderdevicebase.cpp:861
// variables: 3
// function calls: 17
void CDeviceFenceBase::WaitCompleted(uint32 nTimeout)
{
	CFastTimer timer; // 863
	const char   __FUNCTION__; // 31952
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 877
	}
	CCycleCount::Init(
		uint64 cycles);  // 238
	CCycleCount::CCycleCount(); // 63
	CFastTimer::CFastTimer(); // 863
	PLAT_CPU_TIME(void); // 263
	CCycleCount::Sample(); // 335
	CFastTimer::Start(); // 864
	CCycleCount::Init(
		uint64 cycles);  // 238
	CCycleCount::CCycleCount(); // 356
	PLAT_CPU_TIME(void); // 263
	CCycleCount::Sample(); // 357
	CCycleCount::Init(
		uint64 cycles);  // 238
	CCycleCount::CCycleCount(); // 359
	CFastTimer::GetDurationInProgress(); // 871
	Plat_TickDiffMilliSec(uint64 nStartTicks,
				uint64 nEndTicks,
				uint64 nFreq);  // 316
	CCycleCount::GetMilliseconds64(); // 871
	CRenderThreadBase::GetHighestFrameCompleted(); // 1076
	CRenderDeviceBase::GetHighestFrameCompleted(); // 868
} /* size: 171, variables: 2, inline expansions: 17 (169 bytes) */

// <001AEB87> rendersystem/renderdevicebase.cpp:880
void CDeviceFenceBase::ReachedZeroReferences()
{
} /* size: 10 */

// <0019675C> rendersystem/renderdevicebase.cpp:886
// variable: 1
// function calls: 4
void CRenderDeviceBase::Flush()
{
	CRenderContextPtr tmpCtx; // 888
	CRenderContextPtr::CRenderContextPtr<>(
				IRenderDevice* pDevice,
				const char* pDebugStringFmt);  // 888
	CRenderContextPtr::operator->(); // 889
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 890
} /* size: 120, variables: 1, inline expansions: 4 (120 bytes) */

// <001AEFF5> rendersystem/renderdevicebase.cpp:892
// function call: 1
void CRenderDeviceBase::OnFlushSubmitted()
{
	CRenderDeviceBase::OnFlushSubmitted(); // 892
} /* size: 65, inline expansions: 1 (12 bytes) */

// <00196743> rendersystem/renderdevicebase.cpp:892
void CRenderDeviceBase::OnFlushSubmitted()
{
} /* size: 0 */

// <00196012> rendersystem/renderdevicebase.cpp:902
// variables: 3
// function calls: 31
void CRenderDeviceBase::ForceFlushGPU(SwapChainHandle_t hSwapChain)
{
	RenderTargetDesc_t rtDesc; // 904
	CRenderContextBasePtr tmpCtx; // 905
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
	RenderTargetDesc_t::Clear(); // 136
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 135
	CRenderDeviceBase::GetSwapChain<CSwapChainBase>(
					SwapChainHandle_t hSwapChain);  // 2796
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 344
	CSwapChainBase::GetColorTexture(); // 2798
	CRenderDeviceBase::GetSwapChainTexture(
				SwapChainHandle_t hSwapChain,
				SwapChainBuffer_t buffer);  // 989
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 989
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 990
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 1003
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1003
	RenderTargetDesc_t::Init(
		SwapChainHandle_t hSwapChain,
		bool bUseColorBuffer,
		bool bUseDepthBuffer,
		RenderColorSpace_t allowSrgbWrites);  // 137
	RenderTargetDesc_t::RenderTargetDesc_t(
				SwapChainHandle_t hSwapChain,
				bool bUseColorBuffer,
				bool bUseDepthBuffer,
				RenderColorSpace_t allowSrgbWrites);  // 904
	CRenderContextPtr::CRenderContextPtr<char const*>(
					IRenderDevice* pDevice,
					const RenderTargetDesc_t& renderTargetDesc);  // 352
	CRenderContextBasePtr::CRenderContextBasePtr(
				IRenderDevice* pDevice,
				const RenderTargetDesc_t& rtDesc,
				const char* pDebugString);  // 905
	CRenderContextBasePtr::operator->(); // 906
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 341
	CRenderContextBasePtr::~CRenderContextBasePtr(); // 907
} /* size: 434, variables: 2, inline expansions: 29 (826 bytes) */

// <00195C1B> rendersystem/renderdevicebase.cpp:909
// variables: 2
// function calls: 15
void CRenderDeviceBase::GetRenderTargetDescDimensions(const RenderTargetDesc_t& desc, int* pWidthOut, int* pHeightOut)
{
	HRenderTexture hTarget; // 914
	const CTextureDesc* pDesc; // 927
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 914
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 917
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 924
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 927
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1873
	CRenderDeviceBase::GetTextureDesc(
			HRenderTexture hTexture);  // 927
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 921
} /* size: 189, variables: 2, inline expansions: 15 (75 bytes) */

// <00195A04> rendersystem/renderdevicebase.cpp:939
// function calls: 6
void CRenderDeviceBase::ComputeTextureMemorySize(const CTextureDesc& desc)
{
	{
	}
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 179
	{
	}
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 181
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 182
	CTextureDesc::GetArrayCount(); // 941
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 187
	CTextureDesc::GetDepth(); // 941
} /* size: 0, inline expansions: 6 (199 bytes) */

// <0019598C> rendersystem/renderdevicebase.cpp:944
void CRenderDeviceBase::GetTextureResidencyInfo(CUtlVector<TextureResidencyInfo_t, CUtlMemory<TextureResidencyInfo_t, int> >& textures, TextureResidencyStats_t& textureResidencyStats)
{
} /* size: 23 */

// <00195893> rendersystem/renderdevicebase.cpp:949
// function calls: 2
void CRenderDeviceBase::GetSheetSequenceTextureData(HRenderTexture hTexture, HRenderTexture* pTextureOut, Vector2D* pvecUVOut, int* pSequenceCount)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 951
} /* size: 70, inline expansions: 2 (40 bytes) */

// <001957EE> rendersystem/renderdevicebase.cpp:954
// function calls: 2
void CRenderDeviceBase::GetSheetSequenceTextureDataConstantBuffer(HRenderTexture hTexture)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 956
} /* size: 70, inline expansions: 2 (40 bytes) */

// <00195763> rendersystem/renderdevicebase.cpp:959
void CRenderDeviceBase::GetSheetCacheTextureSize(int& nWidth, int& nHeight)
{
} /* size: 16 */

// <00195655> rendersystem/renderdevicebase.cpp:964
// function calls: 5
void CRenderDeviceBase::GetSheetMetaDataTexture()
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 99
	CSheetDataTextureCache::GetTexture(); // 966
} /* size: 25, inline expansions: 5 (40 bytes) */

// <001AF15E> rendersystem/renderdevicebase.cpp:969
// function calls: 3
void CRenderDeviceBase::CommitSheetCacheData()
{
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
	CRenderDeviceBase::GetContextFrameCount(); // 973
	CRenderDeviceBase::CommitSheetCacheData(); // 969
} /* size: 53, inline expansions: 3 (36 bytes) */

// <0019563C> rendersystem/renderdevicebase.cpp:969
void CRenderDeviceBase::CommitSheetCacheData()
{
} /* size: 0 */

// <00194FD2> rendersystem/renderdevicebase.cpp:978
// function calls: 25
void CRenderDeviceBase::AppendStatsSummaryString(CBufferString* pOut)
{
	CInterlockedIntT<long long int, 8>::operator long long int(); // 981
	CInterlockedIntT<long long int, 8>::operator long long int(); // 981
	CInterlockedIntT<long long int, 8>::operator long long int(); // 981
	CTextureManagerBase::GetCurrentNonEvictableTextureMemorySize(); // 989
	CTextureManagerBase::GetCurrentTextureCount(); // 988
	CTextureManagerBase::GetTextureMemoryLimit(); // 987
	CTextureManagerBase::GetCurrentTextureMemorySize(); // 986
	CInterlockedIntT<long long int, 8>::operator long long int(); // 707
	CTextureManagerBase::GetEvictedTextureCount(); // 990
	CTextureManagerBase::GetTotalTextureCount(); // 990
	CInterlockedIntT<int, 4>::operator int(); // 398
	GetNumExtraDataFallbacks(void); // 997
	CInterlockedIntT<int, 4>::operator int(); // 69
	CUtlMemoryPoolBase::PeakCount(); // 179
	CUtlMemoryPoolBase::BlockSize(); // 179
	PeakAllocSize(void); // 996
	CInterlockedIntT<int, 4>::operator int(); // 69
	CUtlMemoryPoolBase::PeakCount(); // 163
	CUtlMemoryPoolBase::BlockSize(); // 163
	PeakAllocSize(void); // 995
	CInterlockedIntT<int, 4>::operator int(); // 69
	CUtlMemoryPoolBase::PeakCount(); // 147
	CUtlMemoryPoolBase::BlockSize(); // 147
	PeakAllocSize(void); // 994
	CInterlockedIntT<int, 4>::operator int(); // 1003
} /* size: 486, inline expansions: 25 (183 bytes) */

// <00192BFC> rendersystem/renderdevicebase.cpp:978
void CRenderDeviceBase::AppendStatsSummaryString(CBufferString* pOut)
{
} /* size: 0 */

// <00194F57> rendersystem/renderdevicebase.cpp:1015
// function call: 1
void CRenderDeviceBase::UnThrottleTextureStreamingForNFrames(uint32 nNumberOfFramesForUnthrottledTextureLoading)
{
	CTextureManagerBase::UnThrottleTextureStreamingForNFrames(
						uint32 nNumberOfFramesForUnthrottledTextureLoading);  // 1017
} /* size: 21, inline expansions: 1 (16 bytes) */

// <00194E84> rendersystem/renderdevicebase.cpp:1020
// function calls: 3
void CRenderDeviceBase::GetNumTextureLoadsInFlight()
{
	CInterlockedIntT<int, 4>::operator int(); // 727
	{
	}
	CInterlockedIntT<int, 4>::operator int(); // 727
	CTextureManagerBase::GetNumTextureLoadsInFlight(); // 1022
} /* size: 0, inline expansions: 3 (65 bytes) */

// <00194E42> rendersystem/renderdevicebase.cpp:1025
void* CRenderDeviceBase::GetDeviceSpecificInfo(DeviceSpecificInfo_t info)
{
} /* size: 7 */

// <00194771> rendersystem/renderdevicebase.cpp:1033
// function call: 1
void CReadGPUBuffer::~CReadGPUBuffer()
{
	CThreadFastSemaphore::~CThreadFastSemaphore(); // 1033
} /* size: 24, inline expansions: 1 (9 bytes) */

// <00194661> rendersystem/renderdevicebase.cpp:1033
// function calls: 4
void CReadGPUBuffer::~CReadGPUBuffer()
{
	CThreadFastSemaphore::~CThreadFastSemaphore(); // 1033
	IRenderReadCallback::~IRenderReadCallback(); // 184
	IReadBufferCallback::~IReadBufferCallback(); // 1033
	CReadGPUBuffer::~CReadGPUBuffer(); // 1033
} /* size: 54, inline expansions: 4 (29 bytes) */

// <00194644> rendersystem/renderdevicebase.cpp:1033
inline void CReadGPUBuffer::~CReadGPUBuffer()
{
} /* size: 0 */

// <0016BF3D> rendersystem/renderdevicebase.cpp:1033
// member functions: 12
// member variables: 5
// vtable entry: 1
// class size: 160
class CReadGPUBuffer : public IReadBufferCallback {
public:
	/* class IReadBufferCallback <ancestor>; */ /* 0 8 */
	void CReadGPUBuffer(CReadGPUBuffer* , CReadGPUBuffer& );
	void CReadGPUBuffer(CReadGPUBuffer* , const CReadGPUBuffer& );
	/* rendersystem/renderdevicebase.cpp:1038 */
	void CReadGPUBuffer(CReadGPUBuffer* , RenderBufferHandle_t, uint32, void* , uint32);
	/* rendersystem/renderdevicebase.cpp:1054 */
	bool WaitUntilRead(CReadGPUBuffer* );
	/* rendersystem/renderdevicebase.cpp:1066 */
	virtual void OnReadBuffer(CReadGPUBuffer* , const uint8* , int32);
private:
	void * m_pBytes; /* 8 8 */
	uint32 m_nSize; /* 16 4 */
	uint32 m_nOffset; /* 20 4 */
	CThreadFastSemaphore m_Sema __attribute__((__aligned__(8))); /* 24 136 */
	virtual void ~CReadGPUBuffer(CReadGPUBuffer* );
	void CReadGPUBuffer(class CReadGPUBuffer *, class CReadGPUBuffer &); /* linkage=_ZN14CReadGPUBufferC4EOS_ */
	void CReadGPUBuffer(class CReadGPUBuffer *, const class CReadGPUBuffer  &); /* linkage=_ZN14CReadGPUBufferC4ERKS_ */
	void CReadGPUBuffer(class CReadGPUBuffer *, RenderBufferHandle_t, uint32, void *, uint32); /* linkage=_ZN14CReadGPUBufferC4EP22RenderBufferHandle_t__jPvj */
	bool WaitUntilRead(class CReadGPUBuffer *); /* linkage=_ZN14CReadGPUBuffer13WaitUntilReadEv */
	virtual void OnReadBuffer(class CReadGPUBuffer *, const uint8  *, int32); /* linkage=_ZN14CReadGPUBuffer12OnReadBufferEPKhi */
	virtual void ~CReadGPUBuffer(class CReadGPUBuffer *); /* linkage=_ZN14CReadGPUBufferD4Ev */
} __attribute__((__aligned__(8)));

// <00194D71> rendersystem/renderdevicebase.cpp:1038
// variable: 1
void CReadGPUBuffer::CReadGPUBuffer(RenderBufferHandle_t hBuffer, uint32 nOffset, void* pBytes, uint32 nBytesToRead)
{
	{
		CRenderContextPtr pRenderContext; // 1049
	}
} /* size: 0 */

// <00194D15> rendersystem/renderdevicebase.cpp:1038
// variable: 1
inline void CReadGPUBuffer::CReadGPUBuffer(RenderBufferHandle_t hBuffer, uint32 nOffset, void* pBytes, uint32 nBytesToRead)
{
	{
		CRenderContextPtr pRenderContext; // 1049
	}
} /* size: 0 */

// <00194CFC> rendersystem/renderdevicebase.cpp:1054
inline void CReadGPUBuffer::WaitUntilRead()
{
} /* size: 0 */

// <00194AC1> rendersystem/renderdevicebase.cpp:1066
// variables: 4
// function calls: 5
void CReadGPUBuffer::OnReadBuffer(const uint8* pData, int32 nSizeInBytes)
{
	const char   __FUNCTION__; // 2550
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1068
	}
	Min<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 1069
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 79
	V_memcpy(void* dest,
		const void* src,
		uint count);  // 1069
	__atomic_base<int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1488
	{
		int32 nWaiters; // 1491
		int32 nWake; // 1492
	}
	CThreadFastSemaphore::Release(
		int32 releaseCount);  // 1070
} /* size: 121, variables: 1, inline expansions: 5 (66 bytes) */

// <001926EB> rendersystem/renderdevicebase.cpp:1066
// variables: 4
// function calls: 5
void CReadGPUBuffer::OnReadBuffer(const uint8* pData, int32 nSizeInBytes)
{
	const char   __FUNCTION__; // 31925
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1068
	}
	Min<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 1069
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 79
	V_memcpy(void* dest,
		const void* src,
		uint count);  // 1069
	__atomic_base<int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1488
	{
		int32 nWaiters; // 1491
		int32 nWake; // 1492
	}
	CThreadFastSemaphore::Release(
		int32 releaseCount);  // 1070
} /* size: 121, variables: 1, inline expansions: 5 (66 bytes) */

// <0019458E> rendersystem/renderdevicebase.cpp:1082
// function call: 1
void CReadIndexBuffer::~CReadIndexBuffer()
{
	CThreadFastSemaphore::~CThreadFastSemaphore(); // 1082
} /* size: 24, inline expansions: 1 (9 bytes) */

// <0019447E> rendersystem/renderdevicebase.cpp:1082
// function calls: 4
void CReadIndexBuffer::~CReadIndexBuffer()
{
	CThreadFastSemaphore::~CThreadFastSemaphore(); // 1082
	IRenderReadCallback::~IRenderReadCallback(); // 184
	IReadBufferCallback::~IReadBufferCallback(); // 1082
	CReadIndexBuffer::~CReadIndexBuffer(); // 1082
} /* size: 54, inline expansions: 4 (29 bytes) */

// <00194461> rendersystem/renderdevicebase.cpp:1082
inline void CReadIndexBuffer::~CReadIndexBuffer()
{
} /* size: 0 */

// <0016BC84> rendersystem/renderdevicebase.cpp:1082
// member functions: 12
// member variables: 5
// vtable entry: 1
// class size: 160
class CReadIndexBuffer : public IReadBufferCallback {
public:
	/* class IReadBufferCallback <ancestor>; */ /* 0 8 */
	void CReadIndexBuffer(CReadIndexBuffer* , CReadIndexBuffer& );
	void CReadIndexBuffer(CReadIndexBuffer* , const CReadIndexBuffer& );
	/* rendersystem/renderdevicebase.cpp:1087 */
	void CReadIndexBuffer(CReadIndexBuffer* , IndexBufferHandle_t, uint32, void* , uint32);
	/* rendersystem/renderdevicebase.cpp:1103 */
	bool WaitUntilRead(CReadIndexBuffer* );
	/* rendersystem/renderdevicebase.cpp:1114 */
	virtual void OnReadBuffer(CReadIndexBuffer* , const uint8* , int32);
private:
	void * m_pBytes; /* 8 8 */
	uint32 m_nSize; /* 16 4 */
	uint32 m_nOffset; /* 20 4 */
	CThreadFastSemaphore m_Sema __attribute__((__aligned__(8))); /* 24 136 */
	virtual void ~CReadIndexBuffer(CReadIndexBuffer* );
	void CReadIndexBuffer(class CReadIndexBuffer *, class CReadIndexBuffer &); /* linkage=_ZN16CReadIndexBufferC4EOS_ */
	void CReadIndexBuffer(class CReadIndexBuffer *, const class CReadIndexBuffer  &); /* linkage=_ZN16CReadIndexBufferC4ERKS_ */
	void CReadIndexBuffer(class CReadIndexBuffer *, IndexBufferHandle_t, uint32, void *, uint32); /* linkage=_ZN16CReadIndexBufferC4EP21IndexBufferHandle_t__jPvj */
	bool WaitUntilRead(class CReadIndexBuffer *); /* linkage=_ZN16CReadIndexBuffer13WaitUntilReadEv */
	virtual void OnReadBuffer(class CReadIndexBuffer *, const uint8  *, int32); /* linkage=_ZN16CReadIndexBuffer12OnReadBufferEPKhi */
	virtual void ~CReadIndexBuffer(class CReadIndexBuffer *); /* linkage=_ZN16CReadIndexBufferD4Ev */
} __attribute__((__aligned__(8)));

// <00194A8A> rendersystem/renderdevicebase.cpp:1087
// variable: 1
void CReadIndexBuffer::CReadIndexBuffer(IndexBufferHandle_t hBuffer, uint32 nOffset, void* pBytes, uint32 nBytesToRead)
{
	{
		CRenderContextPtr pRenderContext; // 1098
	}
} /* size: 0 */

// <00194A2E> rendersystem/renderdevicebase.cpp:1087
// variable: 1
inline void CReadIndexBuffer::CReadIndexBuffer(IndexBufferHandle_t hBuffer, uint32 nOffset, void* pBytes, uint32 nBytesToRead)
{
	{
		CRenderContextPtr pRenderContext; // 1098
	}
} /* size: 0 */

// <00194A15> rendersystem/renderdevicebase.cpp:1103
inline void CReadIndexBuffer::WaitUntilRead()
{
} /* size: 0 */

// <001947DA> rendersystem/renderdevicebase.cpp:1114
// variables: 4
// function calls: 5
void CReadIndexBuffer::OnReadBuffer(const uint8* pData, int32 nSizeInBytes)
{
	const char   __FUNCTION__; // 2550
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1116
	}
	Min<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 1117
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 79
	V_memcpy(void* dest,
		const void* src,
		uint count);  // 1117
	__atomic_base<int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1488
	{
		int32 nWaiters; // 1491
		int32 nWake; // 1492
	}
	CThreadFastSemaphore::Release(
		int32 releaseCount);  // 1118
} /* size: 121, variables: 1, inline expansions: 5 (66 bytes) */

// <00192404> rendersystem/renderdevicebase.cpp:1114
// variables: 4
// function calls: 5
void CReadIndexBuffer::OnReadBuffer(const uint8* pData, int32 nSizeInBytes)
{
	const char   __FUNCTION__; // 31925
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1116
	}
	Min<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 1117
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 79
	V_memcpy(void* dest,
		const void* src,
		uint count);  // 1117
	__atomic_base<int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1488
	{
		int32 nWaiters; // 1491
		int32 nWake; // 1492
	}
	CThreadFastSemaphore::Release(
		int32 releaseCount);  // 1118
} /* size: 121, variables: 1, inline expansions: 5 (66 bytes) */

// <001B4470> rendersystem/renderdevicebase.cpp:1130
// variable: 1
// function calls: 21
void CRenderDeviceBase::ReadBuffer(RenderBufferHandle_t hBuffer, uint32 nOffsetInBytes, void* pBuf, uint32 nBytesToRead)
{
	__atomic_base<int>::__atomic_base(
			__int_type __i);  // 843
	atomic<int>::atomic(
		__integral_type __i);  // 1484
	CThreadFastSemaphore::CThreadFastSemaphore(); // 1045
	IRenderReadCallback::IRenderReadCallback(); // 181
	IReadBufferCallback::IReadBufferCallback(); // 1045
	{
		CRenderContextPtr pRenderContext; // 1049
		CRenderContextPtr::CRenderContextPtr(
					IRenderDevice* pDevice);  // 1049
		CRenderContextPtr::operator->(); // 1050
		CRenderContextPtr::Release(); // 845
		CRenderContextPtr::~CRenderContextPtr(); // 1051
	}
	CReadGPUBuffer::CReadGPUBuffer(
			RenderBufferHandle_t hBuffer,
			uint32 nOffset,
			void* pBytes,
			uint32 nBytesToRead);  // 1141
	__atomic_base<int>::load(
		memory_order __m);  // 1500
	__atomic_base<int>::compare_exchange_weak(
				__int_type& __i1,
				__int_type __i2,
				memory_order __m1,
				memory_order __m2);  // 555
	__atomic_base<int>::compare_exchange_weak(
				__int_type& __i1,
				__int_type __i2,
				memory_order __m);  // 1503
	ThreadPause(void); // 1509
	CThreadFastSemaphore::TryWait(); // 1060
	CReadGPUBuffer::WaitUntilRead(); // 1141
	CThreadFastSemaphore::~CThreadFastSemaphore(); // 1033
	IRenderReadCallback::~IRenderReadCallback(); // 184
	IReadBufferCallback::~IReadBufferCallback(); // 1033
	CReadGPUBuffer::~CReadGPUBuffer(); // 1141
	CRenderDeviceBase::ReadBuffer(
			RenderBufferHandle_t hBuffer,
			uint32 nOffsetInBytes,
			void* pBuf,
			uint32 nBytesToRead);  // 1130
} /* size: 387, inline expansions: 17 (720 bytes) */

// <001945F7> rendersystem/renderdevicebase.cpp:1130
void CRenderDeviceBase::ReadBuffer(RenderBufferHandle_t hBuffer, uint32 nOffsetInBytes, void* pBuf, uint32 nBytesToRead)
{
} /* size: 0 */

// <001B4A7E> rendersystem/renderdevicebase.cpp:1145
// variable: 1
// function calls: 21
void CRenderDeviceBase::ReadBuffer(IndexBufferHandle_t hBuffer, uint32 nOffsetInBytes, void* pBuf, uint32 nBytesToRead)
{
	__atomic_base<int>::__atomic_base(
			__int_type __i);  // 843
	atomic<int>::atomic(
		__integral_type __i);  // 1484
	CThreadFastSemaphore::CThreadFastSemaphore(); // 1094
	IRenderReadCallback::IRenderReadCallback(); // 181
	IReadBufferCallback::IReadBufferCallback(); // 1094
	{
		CRenderContextPtr pRenderContext; // 1098
		CRenderContextPtr::CRenderContextPtr(
					IRenderDevice* pDevice);  // 1098
		CRenderContextPtr::operator->(); // 1099
		CRenderContextPtr::Release(); // 845
		CRenderContextPtr::~CRenderContextPtr(); // 1100
	}
	CReadIndexBuffer::CReadIndexBuffer(
			IndexBufferHandle_t hBuffer,
			uint32 nOffset,
			void* pBytes,
			uint32 nBytesToRead);  // 1156
	__atomic_base<int>::load(
		memory_order __m);  // 1500
	__atomic_base<int>::compare_exchange_weak(
				__int_type& __i1,
				__int_type __i2,
				memory_order __m1,
				memory_order __m2);  // 555
	__atomic_base<int>::compare_exchange_weak(
				__int_type& __i1,
				__int_type __i2,
				memory_order __m);  // 1503
	ThreadPause(void); // 1509
	CThreadFastSemaphore::TryWait(); // 1108
	CReadIndexBuffer::WaitUntilRead(); // 1156
	CThreadFastSemaphore::~CThreadFastSemaphore(); // 1082
	IRenderReadCallback::~IRenderReadCallback(); // 184
	IReadBufferCallback::~IReadBufferCallback(); // 1082
	CReadIndexBuffer::~CReadIndexBuffer(); // 1156
	CRenderDeviceBase::ReadBuffer(
			IndexBufferHandle_t hBuffer,
			uint32 nOffsetInBytes,
			void* pBuf,
			uint32 nBytesToRead);  // 1145
} /* size: 387, inline expansions: 17 (720 bytes) */

// <00194414> rendersystem/renderdevicebase.cpp:1145
void CRenderDeviceBase::ReadBuffer(IndexBufferHandle_t hBuffer, uint32 nOffsetInBytes, void* pBuf, uint32 nBytesToRead)
{
} /* size: 0 */

// <001941C7> rendersystem/renderdevicebase.cpp:1162
// variable: 1
// function calls: 9
void CRenderDeviceBase::GetDependencyDescriptor(int nNumBatchesWhichWillBeSubmitted, const char* pDebugString)
{
	CDependencyDescriptor* pRet; // 1164
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 376
	CUtlIntrusiveList<CCommandStream>::CUtlIntrusiveList(); // 1130
	CDependencyDescriptor::CDependencyDescriptor(); // 341
	simpleTSPoolStruct_t::simpleTSPoolStruct_t(); // 382
	CTSPool<CDependencyDescriptor>::GetObject(); // 390
	CTSPool<CDependencyDescriptor>::Get(); // 1164
} /* size: 207, variables: 1, inline expansions: 9 (477 bytes) */

// <00194021> rendersystem/renderdevicebase.cpp:1180
// function calls: 5
void CRenderDeviceBase::ReleaseDependencyDescriptor(CDependencyDescriptor* pDescriptor)
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
	CTSPool<CDependencyDescriptor>::PutObject(
			CDependencyDescriptor* pInfo);  // 1189
} /* size: 110, inline expansions: 5 (194 bytes) */

// <00193F5D> rendersystem/renderdevicebase.cpp:1195
// variables: 2
void CRenderDeviceBase::CreateRenderContext(uint nRenderContextFlags, RenderContextCreationInfo_t* pOptInfo, const char* pDebugStringFmt, ...)
{
	va_list args; // 1198
	IRenderContext* pContext; // 1200
} /* size: 169, variables: 2 */

// <00193D6B> rendersystem/renderdevicebase.cpp:1208
// variable: 1
// function calls: 6
void CRenderDeviceBase::ReleaseRenderContext(IRenderContext* pIRC)
{
	CRenderContextBase* pCtx; // 1211
	CUtlMemoryPool<TSPointerListNode_t>::Alloc(); // 52
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 54
	CTSPointerList<IRenderContext>::PushItem(
		IRenderContext* const& init);  // 1216
} /* size: 135, variables: 1, inline expansions: 6 (226 bytes) */

// <001A9EC2> rendersystem/renderdevicebase.cpp:1208
void CRenderDeviceBase::ReleaseRenderContext(IRenderContext* pIRC)
{
} /* size: 5 */

// <001AF06B> rendersystem/renderdevicebase.cpp:1220
// variable: 1
// function calls: 2
void CRenderDeviceBase::SubmitDisplayLists(const DisplayListToSubmit_t* pLists, int nCount)
{
	{
		CCommandStream* pCommands; // 1227
		CCommandStream::IsFromPrimaryContext(); // 1229
		{
		}
	}
	CRenderDeviceBase::SubmitDisplayLists(
				const DisplayListToSubmit_t* pLists,
				int nCount);  // 1220
} /* size: 0, inline expansions: 1 (72 bytes) */

// <00193D05> rendersystem/renderdevicebase.cpp:1220
// variables: 3
void CRenderDeviceBase::SubmitDisplayLists(const DisplayListToSubmit_t* pLists, int nCount)
{
	const char   __FUNCTION__; // 2712
	{
		CCommandStream* pCommands; // 1227
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1229
		}
	}
} /* size: 0, variables: 1 */

// <00191B15> rendersystem/renderdevicebase.cpp:1220
void CRenderDeviceBase::SubmitDisplayLists(const DisplayListToSubmit_t* pLists, int nCount)
{
} /* size: 5 */

// <00193B15> rendersystem/renderdevicebase.cpp:1237
// variable: 1
// function calls: 6
void CRenderDeviceBase::DiscardDisplayList(CDisplayList* pCommandList)
{
	CCommandStream* pCommands; // 1239
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 371
	CTSPool<CCommandStream>::PutObject(
			CCommandStream* pInfo);  // 664
	ReleaseStream(CCommandStream* pCmd); // 1243
} /* size: 117, variables: 1, inline expansions: 6 (279 bytes) */

// <00191313> rendersystem/renderdevicebase.cpp:1237
// variables: 2
// function calls: 34
void CRenderDeviceBase::DiscardDisplayList(CDisplayList* pCommandList)
{
	CCommandStream* pCommands; // 1239
	CUtlVectorBase<CDependencyDescriptor::RemoveAll(); // 1798
	CUtlMemoryFixedGrowable_Base<CDependencyDescriptor::Purge_FixedGrowable(
				CDependencyDescriptor** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CDependencyDescriptor::Purge_FixedGrowable(
				CDependencyDescriptor** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<16, CDependencyDescriptor::Base(); // 237
	CUtlMemoryFixedGrowable<CDependencyDescriptor::Purge(
		int numElements);  // 1799
	CUtlMemory<CDependencyDescriptor::Base(); // 112
	CUtlVectorBase<CDependencyDescriptor::Base(); // 368
	CUtlVectorBase<CDependencyDescriptor::ResetDbgInfo(); // 1800
	CUtlVectorBase<CDependencyDescriptor::Purge(); // 422
	CUtlMemoryFixedGrowable_Base<CDependencyDescriptor::Purge_FixedGrowable(
				CDependencyDescriptor** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CDependencyDescriptor::Purge_FixedGrowable(
				CDependencyDescriptor** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<16, CDependencyDescriptor::Base(); // 237
	CUtlMemoryFixedGrowable<CDependencyDescriptor::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CDependencyDescriptor::RemoveAll(); // 1798
	CUtlMemory<CDependencyDescriptor::Base(); // 112
	CUtlVectorBase<CDependencyDescriptor::Base(); // 368
	CUtlVectorBase<CDependencyDescriptor::ResetDbgInfo(); // 1800
	CUtlVectorBase<CDependencyDescriptor::Purge(); // 423
	{
		ExtraData_t* pNext; // 428
		CUtlMemoryPool<CLargeCommandBufferChunk>::Free(
			CLargeCommandBufferChunk* pMem);  // 169
		operator delete(void* p); // 440
		CUtlMemoryPool<CCommandBufferChunk>::Free(
			CCommandBufferChunk* pMem);  // 81
		operator delete(void* p); // 432
		CUtlMemoryPool<CMediumCommandBufferChunk>::Free(
			CMediumCommandBufferChunk* pMem);  // 153
		operator delete(void* p); // 436
	}
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 465
	CCommandStream::Cleanup(); // 663
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 371
	CTSPool<CCommandStream>::PutObject(
			CCommandStream* pInfo);  // 664
	ReleaseStream(CCommandStream* pCmd); // 1243
} /* size: 425, variables: 1, inline expansions: 28 (1338 bytes) */

// <00193AA4> rendersystem/renderdevicebase.cpp:1246
// variable: 1
void CRenderDeviceBase::SetContextDefaultState(IRenderContext* pIRC)
{
	CRenderContextBase* pCtx; // 1249
} /* size: 0, variables: 1 */

// <001912ED> rendersystem/renderdevicebase.cpp:1246
void CRenderDeviceBase::SetContextDefaultState(IRenderContext* pIRC)
{
} /* size: 0 */

// <001938FF> rendersystem/renderdevicebase.cpp:1254
// variable: 1
// function calls: 6
void CRenderDeviceBase::GetPooledRenderContext()
{
	IRenderContext* pRet; // 1256
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 59
	CUtlMemoryPool<TSPointerListNode_t>::Free(
		TSPointerListNode_t* pMem);  // 63
	CTSPointerList<IRenderContext>::PopItem(
		IRenderContext** pResult);  // 1257
} /* size: 183, variables: 1, inline expansions: 6 (289 bytes) */

// <001936C2> rendersystem/renderdevicebase.cpp:1307
// variables: 5
// function calls: 3
void CRenderDeviceBase::CreateConstantBufferInternal(ConstantBufferType_t nType, uint32 nNumViews, uint32 nViewReqSize, uint32 nViewAlignedSize, uint nFlags, const char* pDebugName)
{
	uint32 nNumViewBytes; // 1310
	const char   __FUNCTION__; // 2972
	ConstantBuffer_t* pCBuf; // 1316
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1313
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1322
	}
	AlignValue<unsigned int>(unsigned int val,
				uintp alignment);  // 1310
	ConstantBuffer_t::GetData(); // 1326
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1326
} /* size: 0, variables: 3, inline expansions: 3 (22 bytes) */

// <00190F53> rendersystem/renderdevicebase.cpp:1307
// variables: 4
// function calls: 3
void CRenderDeviceBase::CreateConstantBufferInternal(ConstantBufferType_t nType, uint32 nNumViews, uint32 nViewReqSize, uint32 nViewAlignedSize, uint nFlags, const char* pDebugName)
{
	uint32 nNumViewBytes; // 1310
	ConstantBuffer_t* pCBuf; // 1316
	const char   __FUNCTION__; // 32347
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1322
	}
	AlignValue<unsigned int>(unsigned int val,
				uintp alignment);  // 1310
	ConstantBuffer_t::GetData(); // 1326
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1326
} /* size: 0, variables: 3, inline expansions: 3 (22 bytes) */

// <001AEE0C> rendersystem/renderdevicebase.cpp:1334
void CRenderDeviceBase::FreeConstantBuffer(ConstantBuffer_t* pConstantBuffer)
{
} /* size: 28 */

// <001AEBCA> rendersystem/renderdevicebase.cpp:1341
void CRenderDeviceBase::GetRequiredViewConstantBufferAlignment()
{
} /* size: 10 */

// <00192806> rendersystem/renderdevicebase.cpp:1349
// variables: 23
// function calls: 47
void CRenderDeviceBase::AcquirePooledDynamicConstantBuffer(uint32 nNumViews, uint32 nViewReqSize, uint32 nViewAlignedSize, int nBucket, uint nFlags)
{
	ConstantBuffer_t* pBuffer; // 1351
	const char   __FUNCTION__; // 3124
	uint32 nAlignedCreateSize; // 1355
	uint nFlagGroupFlags; // 1364
	int nFlagGroup; // 1365
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1353
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1358
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1366
	}
	{
		int nPass; // 1368
		{
			int nIndex; // 1380
			{
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_1383; // 1383
				int nMaxIndex; // 1387
				{
					int nScanIndex; // 1388
					{
						MultiViewCBPool_t& pool; // 1390
						ConstantBuffer_t* pPrev; // 1391
						{
							ConstantBuffer_t* pScan; // 1392
							ConstantBuffer_t::GetViewAlignedSize(); // 1394
							GetFlagGroupFlags(uint nFlags); // 106
							ConstantBuffer_t::GetFlagGroupFlags(); // 1395
						}
						CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int>::operator[](
								int i);  // 588
						CUtlVectorBase<CRenderDeviceBase::MultiViewCBPool_t, CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int> >::operator[](
								int i);  // 1390
					}
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
						int nLineNumber);  // 1383
				Count(const CUtlVectorBase<CRenderDeviceBase::MultiViewCBPool_t, CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int> > this); // 1387
				Min<int>(const int& val1,
					const int& val2);  // 1387
				ThreadInterlockedExchange64(volatile int64* p,
								int64 value);  // 874
				CThreadFastMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 944
				Unlock(CThreadFastMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 1413
			}
		}
		{
			volatile ConstantBuffer_t* pPop; // 237
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 415
			ThreadInterlockedExchangePointer(volatile void** p,
							void* value);  // 237
		}
		CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::BeginPeek(
				bool bWaitIfAlreadyPeeked);  // 414
		{
			volatile ConstantBuffer_t* pNext; // 277
			CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::InternalGetNextPopItemFromActiveList(
								volatile ConstantBuffer_t* pCurItem);  // 277
			ThreadInterlockedCompareExchange64(volatile int64* p,
								int64 value,
								int64 comparand);  // 417
			ThreadInterlockedAssignPointerIf(volatile void** p,
							void* value,
							void* comparand);  // 270
		}
		CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::EndPeek_Pop(
				ConstantBuffer_t* pPeeked);  // 260
		CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::EndPeek_Pop(
				ConstantBuffer_t* pPeeked);  // 415
		CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::Pop(
			bool bWaitIfAlreadyPeeked);  // 1372
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1435
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1447
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1448
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1449
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1467
	}
	GetFlagGroupFlags(uint nFlags); // 1364
	GetFlagGroup(uint nFlags); // 1365
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 582
	CInterlockedIntT<unsigned int, 4>::operator++(
			int);  // 1432
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 582
	CInterlockedIntT<unsigned int, 4>::operator++(
			int);  // 1440
	SmallestPowerOfTwoGreaterOrEqual(uint32 x); // 81
	CalculateBucket(uint32 nAllocSize); // 92
	ConstantBuffer_t::CalculateAllocationBucket(); // 1435
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 582
	CInterlockedIntT<unsigned int, 4>::operator++(
			int);  // 1436
	ConstantBuffer_t::GetNumViews(); // 1447
	GetFlagGroup(uint nFlags); // 119
	ConstantBuffer_t::GetFlagGroup(); // 1448
	GetFlagGroupFlags(uint nFlags); // 106
	ConstantBuffer_t::GetFlagGroupFlags(); // 1448
	ConstantBuffer_t::GetData(); // 1469
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1469
} /* size: 0, variables: 5, inline expansions: 21 (324 bytes) */

// <0019006D> rendersystem/renderdevicebase.cpp:1349
// variables: 23
// function calls: 47
void CRenderDeviceBase::AcquirePooledDynamicConstantBuffer(uint32 nNumViews, uint32 nViewReqSize, uint32 nViewAlignedSize, int nBucket, uint nFlags)
{
	ConstantBuffer_t* pBuffer; // 1351
	const char   __FUNCTION__; // 32499
	uint32 nAlignedCreateSize; // 1355
	uint nFlagGroupFlags; // 1364
	int nFlagGroup; // 1365
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1353
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1358
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1366
	}
	{
		int nPass; // 1368
		{
			int nIndex; // 1380
			{
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_1383; // 1383
				int nMaxIndex; // 1387
				{
					int nScanIndex; // 1388
					{
						MultiViewCBPool_t& pool; // 1390
						ConstantBuffer_t* pPrev; // 1391
						{
							ConstantBuffer_t* pScan; // 1392
							ConstantBuffer_t::GetViewAlignedSize(); // 1394
							GetFlagGroupFlags(uint nFlags); // 106
							ConstantBuffer_t::GetFlagGroupFlags(); // 1395
						}
						CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int>::operator[](
								int i);  // 588
						CUtlVectorBase<CRenderDeviceBase::MultiViewCBPool_t, CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int> >::operator[](
								int i);  // 1390
					}
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
						int nLineNumber);  // 1383
				Count(const CUtlVectorBase<CRenderDeviceBase::MultiViewCBPool_t, CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int> > this); // 1387
				Min<int>(const int& val1,
					const int& val2);  // 1387
				ThreadInterlockedExchange64(volatile int64* p,
								int64 value);  // 874
				CThreadFastMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 944
				Unlock(CThreadFastMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 1413
			}
		}
		{
			volatile ConstantBuffer_t* pPop; // 237
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 415
			ThreadInterlockedExchangePointer(volatile void** p,
							void* value);  // 237
		}
		CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::BeginPeek(
				bool bWaitIfAlreadyPeeked);  // 414
		{
			volatile ConstantBuffer_t* pNext; // 277
			CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::InternalGetNextPopItemFromActiveList(
								volatile ConstantBuffer_t* pCurItem);  // 277
			ThreadInterlockedCompareExchange64(volatile int64* p,
								int64 value,
								int64 comparand);  // 417
			ThreadInterlockedAssignPointerIf(volatile void** p,
							void* value,
							void* comparand);  // 270
		}
		CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::EndPeek_Pop(
				ConstantBuffer_t* pPeeked);  // 260
		CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::EndPeek_Pop(
				ConstantBuffer_t* pPeeked);  // 415
		CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::Pop(
			bool bWaitIfAlreadyPeeked);  // 1372
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1435
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1447
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1448
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1449
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1467
	}
	GetFlagGroup(uint nFlags); // 1365
	GetFlagGroupFlags(uint nFlags); // 1364
	ConstantBuffer_t::GetNumViews(); // 1447
	GetFlagGroup(uint nFlags); // 119
	ConstantBuffer_t::GetFlagGroup(); // 1448
	GetFlagGroupFlags(uint nFlags); // 106
	ConstantBuffer_t::GetFlagGroupFlags(); // 1448
	ConstantBuffer_t::GetData(); // 1469
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1469
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 582
	CInterlockedIntT<unsigned int, 4>::operator++(
			int);  // 1432
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 582
	CInterlockedIntT<unsigned int, 4>::operator++(
			int);  // 1440
	SmallestPowerOfTwoGreaterOrEqual(uint32 x); // 81
	CalculateBucket(uint32 nAllocSize); // 92
	ConstantBuffer_t::CalculateAllocationBucket(); // 1435
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 582
	CInterlockedIntT<unsigned int, 4>::operator++(
			int);  // 1436
} /* size: 0, variables: 5, inline expansions: 21 (364 bytes) */

// <001B5C91> rendersystem/renderdevicebase.cpp:1476
// variables: 4
// function calls: 42
void CRenderDeviceBase::ReturnPooledDynamicConstantBuffer(ConstantBuffer_t* pConstantBuffer)
{
	ConstantBuffer_t::GetNumViews(); // 1478
	GetFlagGroup(uint nFlags); // 119
	ConstantBuffer_t::GetFlagGroup(); // 1480
	SmallestPowerOfTwoGreaterOrEqual(uint32 x); // 81
	CalculateBucket(uint32 nAllocSize); // 92
	ConstantBuffer_t::CalculateAllocationBucket(); // 1480
	{
	}
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 198
	CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::Push(
		ConstantBuffer_t* pPushNode);  // 1480
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_1484; // 1484
		int nIndex; // 1485
		MultiViewCBPool_t& pool; // 1487
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
				int nLineNumber);  // 1484
		ConstantBuffer_t::GetNumViews(); // 1485
		Count(const CUtlVectorBase<CRenderDeviceBase::MultiViewCBPool_t, CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int> > this); // 1069
		CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int>::NumAllocated(); // 782
		CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int>::Base(); // 112
		CUtlVectorBase<CRenderDeviceBase::MultiViewCBPool_t, CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int> >::Base(); // 368
		CUtlVectorBase<CRenderDeviceBase::MultiViewCBPool_t, CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int> >::ResetDbgInfo(); // 824
		CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int>::IsGrowable(); // 823
		CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int>::IsExternallyAllocated(); // 861
		CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int>::Grow(
			int num);  // 806
		CUtlVectorBase<CRenderDeviceBase::MultiViewCBPool_t, CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<CRenderDeviceBase::MultiViewCBPool_t, CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int> >::GrowVector(
				int num);  // 1445
		{
			int i; // 1451
			CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CRenderDeviceBase::MultiViewCBPool_t, CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int> >::Element(
				int i);  // 1453
			MultiViewCBPool_t::MultiViewCBPool_t(); // 1479
			Construct<CRenderDeviceBase::MultiViewCBPool_t>(MultiViewCBPool_t* pMemory); // 1453
		}
		CUtlVectorBase<CRenderDeviceBase::MultiViewCBPool_t, CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<CRenderDeviceBase::MultiViewCBPool_t, CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<CRenderDeviceBase::MultiViewCBPool_t, CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int> >::AddMultipleToTail(
					int num);  // 1071
		CUtlVectorBase<CRenderDeviceBase::MultiViewCBPool_t, CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int> >::EnsureCount(
				int num);  // 1486
		CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CRenderDeviceBase::MultiViewCBPool_t, CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int> >::operator[](
				int i);  // 1487
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 1490
	}
	CRenderDeviceBase::ReturnPooledDynamicConstantBuffer(
						ConstantBuffer_t* pConstantBuffer);  // 1476
} /* size: 0, inline expansions: 10 (827 bytes) */

// <001927B7> rendersystem/renderdevicebase.cpp:1476
// variables: 3
void CRenderDeviceBase::ReturnPooledDynamicConstantBuffer(ConstantBuffer_t* pConstantBuffer)
{
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_1484; // 1484
		int nIndex; // 1485
		MultiViewCBPool_t& pool; // 1487
	}
} /* size: 0 */

// <00191B9F> rendersystem/renderdevicebase.cpp:1493
// variables: 14
// function calls: 41
void CRenderDeviceBase::ShutdownDynamicConstantBufferPools()
{
	{
		int nGroup; // 1497
		{
			int nPool; // 1499
			{
				{
					volatile ConstantBuffer_t* pPop; // 237
					ThreadInterlockedExchange64(volatile int64* p,
									int64 value);  // 415
					ThreadInterlockedExchangePointer(volatile void** p,
									void* value);  // 237
				}
				CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::BeginPeek(
						bool bWaitIfAlreadyPeeked);  // 443
				ThreadInterlockedExchange64(volatile int64* p,
								int64 value);  // 415
				ThreadInterlockedExchangePointer(volatile void** p,
								void* value);  // 313
				{
					volatile ConstantBuffer_t* pNext; // 320
					{
						volatile ConstantBuffer_t* pListIter; // 321
					}
				}
				CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::EndPeek_Detach(
						ConstantBuffer_t* pPeeked);  // 305
				CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::EndPeek_Detach(
						ConstantBuffer_t* pPeeked);  // 444
				CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::Detach(); // 1501
				{
					ConstantBuffer_t* pNext; // 515
					IterResult_t iterateResult; // 522
					CRenderDeviceBase::FreeConstantBuffer(
								ConstantBuffer_t* pConstantBuffer);  // 741
					CRenderDeviceBase::FreeConstantBuffer(
								ConstantBufferHandle_t hConstantBuffer);  // 1508
					operator()(const class* __closure,
							ConstantBuffer_t* pRemoved); // 527
					_CTSFastPushQueueIterateResult<TSFPQ_IterateResult>::_CTSFastPushQueueIterateResult(
									TSFPQ_IterateResult fullResult);  // 38
					CallFunctor<ConstantBuffer_t, CRenderDeviceBase::ShutdownDynamicConstantBufferPools()::<lambda(ConstantBuffer_t*)>&>(ConstantBuffer_t* pList,
																class& functor); // 522
				}
				IterateDetachedList<CRenderDeviceBase::ShutdownDynamicConstantBufferPools()::<lambda(ConstantBuffer_t*)>, CRenderDeviceBase::ShutdownDynamicConstantBufferPools()::<lambda(ConstantBuffer_t*)> >(ConstantBuffer_t* pList,
																class& functor,
																class& removedItemFunctor); // 1501
			}
		}
	}
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_1515; // 1515
		{
			int i; // 1516
			{
				ConstantBuffer_t* pList; // 1518
				{
					ConstantBuffer_t* pBuffer; // 1521
					CRenderDeviceBase::FreeConstantBuffer(
								ConstantBuffer_t* pConstantBuffer);  // 741
					CRenderDeviceBase::FreeConstantBuffer(
								ConstantBufferHandle_t hConstantBuffer);  // 1523
				}
				CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CRenderDeviceBase::MultiViewCBPool_t, CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int> >::operator[](
						int i);  // 1518
			}
			Count(const CUtlVectorBase<CRenderDeviceBase::MultiViewCBPool_t, CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int> > this); // 1516
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
				int nLineNumber);  // 1515
		CUtlVectorBase<CRenderDeviceBase::MultiViewCBPool_t, CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int> >::RemoveAll(); // 1798
		CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int>::Purge(); // 903
		CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int>::Purge(); // 1799
		CUtlVectorBase<CRenderDeviceBase::MultiViewCBPool_t, CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int> >::ResetDbgInfo(); // 1800
		CUtlVectorBase<CRenderDeviceBase::MultiViewCBPool_t, CUtlMemory<CRenderDeviceBase::MultiViewCBPool_t, int> >::Purge(); // 1526
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 1527
	}
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<unsigned int, 4>::operator=(
			unsigned int newValue);  // 1529
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<unsigned int, 4>::operator=(
			unsigned int newValue);  // 1530
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<unsigned int, 4>::operator=(
			unsigned int newValue);  // 1531
} /* size: 744, inline expansions: 6 (66 bytes) */

// <001916B7> rendersystem/renderdevicebase.cpp:1535
// variables: 8
// function calls: 15
void CRenderDeviceBase::ProcessConstantBufferDeletionQueue(bool bForce)
{
	const uint  nHighestFrameCompleted; // 1537
	ConstantBuffer_t* pConstantBuffers; // 1539
	ConstantBuffer_t* pNext; // 1541
	ConstantBuffer_t* pLast; // 1542
	{
		ConstantBuffer_t* pCBIter; // 1543
		Node_GetNext(ConstantBuffer_t* pNode); // 1545
		CRenderDeviceBase::FreeConstantBuffer(
					ConstantBuffer_t* pConstantBuffer);  // 1549
	}
	CRenderThreadBase::GetHighestFrameCompleted(); // 1076
	CRenderDeviceBase::GetHighestFrameCompleted(); // 1537
	{
		volatile ConstantBuffer_t* pPop; // 237
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 415
		ThreadInterlockedExchangePointer(volatile void** p,
						void* value);  // 237
	}
	CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::BeginPeek(
			bool bWaitIfAlreadyPeeked);  // 443
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 313
	{
		volatile ConstantBuffer_t* pNext; // 320
		{
			volatile ConstantBuffer_t* pListIter; // 321
		}
	}
	CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::EndPeek_Detach(
			ConstantBuffer_t* pPeeked);  // 305
	CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::EndPeek_Detach(
			ConstantBuffer_t* pPeeked);  // 444
	CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::Detach(); // 1539
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 226
	CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::PushMultiple(
			ConstantBuffer_t* pPushNode,
			ConstantBuffer_t* pTailIfKnown);  // 1567
} /* size: 362, variables: 4, inline expansions: 11 (338 bytes) */

// <001908D7> rendersystem/renderdevicebase.cpp:1570
// variables: 6
// function calls: 50
void CRenderDeviceBase::CreateConstantBuffer(ConstantBufferType_t nType, uint32 nNumBytes, void* pData, const char* pDebugName)
{
	uint nFlags; // 1572
	ConstantBufferHandle_t hCBuf; // 1580
	const char   __FUNCTION__; // 2766
	{
		CRenderContextPtr pRenderContext; // 1587
		{
			CUtlVectorFixedGrowable<unsigned char, 128> emptyBuffer; // 1594
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
			AlignedByteArrayExplicit_t<128, unsigned char, 1>::AlignedByteArrayExplicit_t(); // 1597
			AlignedByteArray_t<128, unsigned char>::AlignedByteArray_t(); // 228
			AlignedByteArrayExplicit_t<128, unsigned char, 1>::Base(); // 231
			CUtlMemoryFixedGrowable<unsigned char, 128, int>::CUtlMemoryFixedGrowable(
						int nGrowSize,
						int nInitSize);  // 527
			CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 128, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 128, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 484
			CUtlVectorFixedGrowable<unsigned char, 128>::CUtlVectorFixedGrowable(
						int growSize);  // 1594
			CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 128, int> >::RemoveMultipleFromTail(
						int num);  // 1323
			CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 859
			CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 861
			CUtlMemory<unsigned char, int>::Grow(
				int num);  // 806
			CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 128, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 128, int> >::GrowMemory(
					int num);  // 784
			CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 128, int> >::GrowVector(
					int num);  // 1445
			CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 128, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1437
			CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 128, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1294
			CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 128, int> >::AddMultipleToTail(
						int num);  // 1319
			CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 128, int> >::SetCount(
				int count);  // 1330
			CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 128, int> >::SetSize(
				int size);  // 1595
			memset(void* __dest,
				int __ch,
				size_t __len);  // 55
			V_memset(void* dest,
				int fill,
				uint count);  // 1596
			CUtlMemory<unsigned char, int>::Base(); // 112
			CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 128, int> >::Base(); // 1597
			CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 128, int> >::RemoveAll(); // 1798
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
			AlignedByteArrayExplicit_t<128, unsigned char, 1>::Base(); // 237
			CUtlMemoryFixedGrowable<unsigned char, 128, int>::Purge(
				int numElements);  // 1799
			CUtlMemory<unsigned char, int>::Base(); // 112
			CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 128, int> >::Base(); // 368
			CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 128, int> >::ResetDbgInfo(); // 1800
			CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 128, int> >::Purge(); // 560
			ValidateAlignment<unsigned char>(void); // 508
			CUtlMemory<unsigned char, int>::Purge(); // 903
			CUtlMemory<unsigned char, int>::Purge(); // 510
			CUtlMemory<unsigned char, int>::~CUtlMemory(); // 191
			CUtlMemoryFixedGrowable_Base<unsigned char, int>::~CUtlMemoryFixedGrowable_Base(); // 223
			CUtlMemoryFixedGrowable<unsigned char, 128, int>::~CUtlMemoryFixedGrowable(); // 562
			CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 128, int> >::~CUtlVectorBase(); // 478
			CUtlVectorFixedGrowable<unsigned char, 128>::~CUtlVectorFixedGrowable(); // 1598
		}
		CRenderContextPtr::CRenderContextPtr<>(
					IRenderDevice* pDevice,
					const char* pDebugStringFmt);  // 1587
		CRenderContextPtr::operator->(); // 1590
		CRenderContextPtr::Release(); // 845
		CRenderContextPtr::~CRenderContextPtr(); // 1600
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1607
	}
	AlignValue<unsigned int>(unsigned int val,
				uintp alignment);  // 1578
} /* size: 755, variables: 3, inline expansions: 1 (13 bytes) */

// <0018E172> rendersystem/renderdevicebase.cpp:1570
// variables: 6
// function calls: 50
void CRenderDeviceBase::CreateConstantBuffer(ConstantBufferType_t nType, uint32 nNumBytes, void* pData, const char* pDebugName)
{
	uint nFlags; // 1572
	ConstantBufferHandle_t hCBuf; // 1580
	const char   __FUNCTION__; // 32141
	{
		CRenderContextPtr pRenderContext; // 1587
		{
			CUtlVectorFixedGrowable<unsigned char, 128> emptyBuffer; // 1594
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
			AlignedByteArrayExplicit_t<128, unsigned char, 1>::AlignedByteArrayExplicit_t(); // 1597
			AlignedByteArray_t<128, unsigned char>::AlignedByteArray_t(); // 228
			AlignedByteArrayExplicit_t<128, unsigned char, 1>::Base(); // 231
			CUtlMemoryFixedGrowable<unsigned char, 128, int>::CUtlMemoryFixedGrowable(
						int nGrowSize,
						int nInitSize);  // 527
			CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 128, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 128, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 484
			CUtlVectorFixedGrowable<unsigned char, 128>::CUtlVectorFixedGrowable(
						int growSize);  // 1594
			CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 128, int> >::RemoveMultipleFromTail(
						int num);  // 1323
			CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 859
			CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 861
			CUtlMemory<unsigned char, int>::Grow(
				int num);  // 806
			CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 128, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 128, int> >::GrowMemory(
					int num);  // 784
			CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 128, int> >::GrowVector(
					int num);  // 1445
			CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 128, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1437
			CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 128, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1294
			CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 128, int> >::AddMultipleToTail(
						int num);  // 1319
			CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 128, int> >::SetCount(
				int count);  // 1330
			CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 128, int> >::SetSize(
				int size);  // 1595
			memset(void* __dest,
				int __ch,
				size_t __len);  // 55
			V_memset(void* dest,
				int fill,
				uint count);  // 1596
			CUtlMemory<unsigned char, int>::Base(); // 112
			CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 128, int> >::Base(); // 1597
			CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 128, int> >::RemoveAll(); // 1798
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
			AlignedByteArrayExplicit_t<128, unsigned char, 1>::Base(); // 237
			CUtlMemoryFixedGrowable<unsigned char, 128, int>::Purge(
				int numElements);  // 1799
			CUtlMemory<unsigned char, int>::Base(); // 112
			CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 128, int> >::Base(); // 368
			CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 128, int> >::ResetDbgInfo(); // 1800
			CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 128, int> >::Purge(); // 560
			ValidateAlignment<unsigned char>(void); // 508
			CUtlMemory<unsigned char, int>::Purge(); // 903
			CUtlMemory<unsigned char, int>::Purge(); // 510
			CUtlMemory<unsigned char, int>::~CUtlMemory(); // 191
			CUtlMemoryFixedGrowable_Base<unsigned char, int>::~CUtlMemoryFixedGrowable_Base(); // 223
			CUtlMemoryFixedGrowable<unsigned char, 128, int>::~CUtlMemoryFixedGrowable(); // 562
			CUtlVectorBase<unsigned char, CUtlMemoryFixedGrowable<unsigned char, 128, int> >::~CUtlVectorBase(); // 478
			CUtlVectorFixedGrowable<unsigned char, 128>::~CUtlVectorFixedGrowable(); // 1598
		}
		CRenderContextPtr::CRenderContextPtr<>(
					IRenderDevice* pDevice,
					const char* pDebugStringFmt);  // 1587
		CRenderContextPtr::operator->(); // 1590
		CRenderContextPtr::Release(); // 845
		CRenderContextPtr::~CRenderContextPtr(); // 1600
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1607
	}
	AlignValue<unsigned int>(unsigned int val,
				uintp alignment);  // 1578
} /* size: 771, variables: 3, inline expansions: 1 (13 bytes) */

// <00190569> rendersystem/renderdevicebase.cpp:1613
// variables: 5
// function calls: 4
void CRenderDeviceBase::CreateMultiViewConstantBuffer(ConstantBufferType_t nType, uint32 nNumBytes, uint32 nViews, uint32 nCreateFlags, const char* pDebugName)
{
	uint nFlags; // 1615
	uint32 nPadToFloat4Size; // 1631
	uint32 nViewAlignedSize; // 1634
	ConstantBufferHandle_t hCBuf; // 1635
	{
		int nBucket; // 1640
		SmallestPowerOfTwoGreaterOrEqual(uint32 x); // 81
		CalculateBucket(uint32 nAllocSize); // 1640
	}
	AlignValue<unsigned int>(unsigned int val,
				uintp alignment);  // 1631
	AlignValue<unsigned int>(unsigned int val,
				uintp alignment);  // 1634
} /* size: 427, variables: 4, inline expansions: 2 (65 bytes) */

// <001902AB> rendersystem/renderdevicebase.cpp:1651
// variables: 3
// function calls: 8
void CRenderDeviceBase::DestroyConstantBuffer(ConstantBufferHandle_t hConstantBuffer)
{
	ConstantBuffer_t* pCBuf; // 1656
	const char   __FUNCTION__; // 2793
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1659
	}
	ConstantBuffer_t::IsPerFrameLifetimePooled(); // 1657
	{
	}
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 198
	CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::Push(
		ConstantBuffer_t* pPushNode);  // 751
	CRenderDeviceBase::ReleasePooledDynamicConstantBuffer(
						ConstantBuffer_t* pConstantBuffer);  // 1660
	{
	}
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 198
	CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::Push(
		ConstantBuffer_t* pPushNode);  // 1664
} /* size: 0, variables: 2, inline expansions: 8 (248 bytes) */

// <0018DB46> rendersystem/renderdevicebase.cpp:1651
// variables: 3
// function calls: 8
void CRenderDeviceBase::DestroyConstantBuffer(ConstantBufferHandle_t hConstantBuffer)
{
	ConstantBuffer_t* pCBuf; // 1656
	const char   __FUNCTION__; // 32168
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1659
	}
	ConstantBuffer_t::IsPerFrameLifetimePooled(); // 1657
	{
	}
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 198
	CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::Push(
		ConstantBuffer_t* pPushNode);  // 751
	CRenderDeviceBase::ReleasePooledDynamicConstantBuffer(
						ConstantBuffer_t* pConstantBuffer);  // 1660
	{
	}
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 198
	CTSFastPushQueue_Base<ConstantBuffer_t, ConstantBuffer_t, ConstantBuffer_t, &ConstantBuffer_t::m_pNext>::Push(
		ConstantBuffer_t* pPushNode);  // 1664
} /* size: 0, variables: 2, inline expansions: 8 (242 bytes) */

// <00190228> rendersystem/renderdevicebase.cpp:1668
// variable: 1
// function call: 1
void CRenderDeviceBase::GetConstantBufferType(ConstantBufferHandle_t hConstantBuffer)
{
	ConstantBuffer_t* pCBuf; // 1670
	ConstantBuffer_t::GetType(); // 1671
} /* size: 9, variables: 1, inline expansions: 1 (4 bytes) */

// <001901D6> rendersystem/renderdevicebase.cpp:1674
// variable: 1
void CRenderDeviceBase::GetConstantBufferSize(ConstantBufferHandle_t hConstantBuffer)
{
	ConstantBuffer_t* pCBuf; // 1676
} /* size: 8, variables: 1 */

// <001900CB> rendersystem/renderdevicebase.cpp:1680
// variable: 1
// function calls: 3
void CRenderDeviceBase::GetMultiViewConstantBufferSizes(ConstantBufferHandle_t hConstantBuffer, uint32* pViewBytes, uint32* pNumViews)
{
	ConstantBuffer_t* pCBuf; // 1682
	ConstantBuffer_t::GetViewAlignedSize(); // 1685
	ConstantBuffer_t::GetNumViews(); // 1689
	ConstantBuffer_t::GetAllocatedSize(); // 1691
} /* size: 28, variables: 1, inline expansions: 3 (6 bytes) */

// <0018E6E9> rendersystem/renderdevicebase.cpp:1694
// variables: 20
// function calls: 79
void CRenderDeviceBase::FindOrCreateTexture(const char* pResourceName, bool bIsAnonymous, const CTextureCreationDesc* pDescriptor, const CTextureDesc* pDataDesc, const void* pData, int nDataSize)
{
	const char   __FUNCTION__; // 2739
	CUtlString resourceNameString; // 1735
	CResourceName resourceName; // 1739
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_1742; // 1742
	HRenderTexture hTex; // 1744
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1701
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1709
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1717
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1728
	}
	{
		CRenderContextPtr pRenderContext; // 1752
		int mipLevelToSet; // 1754
		{
			CTextureDesc descCopy; // 1759
			int noMipDataSize; // 1766
			{
				int allMipDataSize; // 1780
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1788
				}
				operator&(RuntimeTextureSpecificationFlags_t a,
						RuntimeTextureSpecificationFlags_t b);  // 1782
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
				CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
							ResourceHandle_t hUntypedResource);  // 227
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
				StaticInvalidHandle(void); // 1789
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1795
			}
			CTextureDesc::operator=(
					const CTextureDesc& rhs);  // 147
			CTextureDesc::CTextureDesc(
					const CTextureDesc& rhs);  // 1759
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 1768
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1800
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1806
		}
		{
			int nSlices; // 1813
			int nSliceSize; // 1814
			Rect3D_t rect; // 1817
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1815
			}
			{
			}
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 179
			{
			}
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 181
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 182
			CTextureDesc::GetArrayCount(); // 1813
			Rect3D_t::Init(
				int nX,
				int nY,
				int nZ,
				int nWidth,
				int nHeight,
				int nDepth);  // 110
			Rect3D_t::Rect3D_t(
				int nX,
				int nY,
				int nZ,
				int nWidth,
				int nHeight,
				int nDepth);  // 1817
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1820
		}
		CRenderContextPtr::CRenderContextPtr<>(
					IRenderDevice* pDevice,
					const char* pDebugStringFmt);  // 1752
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 1756
		CRenderContextPtr::Release(); // 845
		CRenderContextPtr::~CRenderContextPtr(); // 1826
		CRenderContextPtr::Release(); // 845
		CRenderContextPtr::~CRenderContextPtr(); // 1826
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 1703
	CUtlString::CUtlString(
			const char* pString);  // 1735
	CUtlString::ReplaceFastCaseless(
				const char* pchFrom,
				const char* pchTo);  // 1736
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 1736
	CUtlString::~CUtlString(); // 1736
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 1737
	CUtlString::~CUtlString(); // 1737
	CUtlString::Get(); // 99
	CUtlString::String(); // 1740
	CTextureManagerBase::GetTextureManagerRWLock(); // 1742
	CInterlockedIntT<int, 4>::GetRaw(); // 3180
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<unsigned int, 4>::AtomicAdd(
			unsigned int add);  // 3189
	CThreadRWLock_FastRead::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 959
	Lock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::CAutoLockT(
			const CThreadRWLock_FastRead& lock,
			const char* pFilename,
			int nLineNumber);  // 1742
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 1745
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 1745
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 71
	ResourceAddRef(ResourceHandle_t hResource,
			uintp nLeakTrackingPairingID,
			ResourceLeakTrackingGroup_t leakTrackingGroup);  // 1747
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetData(); // 1748
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 1750
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 1750
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1833
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 1834
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 1834
	CUtlString::~CUtlString(); // 1834
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 1828
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 1828
	{
	}
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 102
	{
	}
	ResourceReleaseNoDelete(ResourceHandle_t hResource,
				uintp nLeakTrackingPairingID,
				ResourceLeakTrackingGroup_t leakTrackingGroup);  // 93
	ResourceReleaseNoDelete(ResourceHandle_t hResource,
				uintp nLeakTrackingPairingID,
				ResourceLeakTrackingGroup_t leakTrackingGroup);  // 1830
} /* size: 0, variables: 5, inline expansions: 53 (1547 bytes) */

// <0018C059> rendersystem/renderdevicebase.cpp:1694
// variables: 20
// function calls: 77
void CRenderDeviceBase::FindOrCreateTexture(const char* pResourceName, bool bIsAnonymous, const CTextureCreationDesc* pDescriptor, const CTextureDesc* pDataDesc, const void* pData, int nDataSize)
{
	const char   __FUNCTION__; // 32114
	CUtlString resourceNameString; // 1735
	CResourceName resourceName; // 1739
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_1742; // 1742
	HRenderTexture hTex; // 1744
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1701
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1709
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1717
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1728
	}
	{
		CRenderContextPtr pRenderContext; // 1752
		int mipLevelToSet; // 1754
		{
			CTextureDesc descCopy; // 1759
			int noMipDataSize; // 1766
			{
				int allMipDataSize; // 1780
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1788
				}
				operator&(RuntimeTextureSpecificationFlags_t a,
						RuntimeTextureSpecificationFlags_t b);  // 1782
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
				CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
							ResourceHandle_t hUntypedResource);  // 227
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
				StaticInvalidHandle(void); // 1789
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1795
			}
			CTextureDesc::operator=(
					const CTextureDesc& rhs);  // 147
			CTextureDesc::CTextureDesc(
					const CTextureDesc& rhs);  // 1759
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 1768
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1800
		}
		{
			int nSlices; // 1813
			int nSliceSize; // 1814
			Rect3D_t rect; // 1817
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1815
			}
			{
			}
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 179
			{
			}
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 181
			operator&(RuntimeTextureSpecificationFlags_t a,
					RuntimeTextureSpecificationFlags_t b);  // 182
			CTextureDesc::GetArrayCount(); // 1813
			Rect3D_t::Init(
				int nX,
				int nY,
				int nZ,
				int nWidth,
				int nHeight,
				int nDepth);  // 110
			Rect3D_t::Rect3D_t(
				int nX,
				int nY,
				int nZ,
				int nWidth,
				int nHeight,
				int nDepth);  // 1817
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1820
		}
		CRenderContextPtr::CRenderContextPtr<>(
					IRenderDevice* pDevice,
					const char* pDebugStringFmt);  // 1752
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 1756
		CRenderContextPtr::Release(); // 845
		CRenderContextPtr::~CRenderContextPtr(); // 1826
		CRenderContextPtr::Release(); // 845
		CRenderContextPtr::~CRenderContextPtr(); // 1826
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 1703
	CUtlString::CUtlString(
			const char* pString);  // 1735
	CUtlString::ReplaceFastCaseless(
				const char* pchFrom,
				const char* pchTo);  // 1736
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 1736
	CUtlString::~CUtlString(); // 1736
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 1737
	CUtlString::~CUtlString(); // 1737
	CUtlString::Get(); // 99
	CUtlString::String(); // 1740
	CTextureManagerBase::GetTextureManagerRWLock(); // 1742
	CInterlockedIntT<int, 4>::GetRaw(); // 3180
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<unsigned int, 4>::AtomicAdd(
			unsigned int add);  // 3189
	CThreadRWLock_FastRead::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 959
	Lock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::CAutoLockT(
			const CThreadRWLock_FastRead& lock,
			const char* pFilename,
			int nLineNumber);  // 1742
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 1745
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 1745
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 71
	ResourceAddRef(ResourceHandle_t hResource,
			uintp nLeakTrackingPairingID,
			ResourceLeakTrackingGroup_t leakTrackingGroup);  // 1747
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetData(); // 1748
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 1750
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 1750
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1833
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 1834
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 1834
	CUtlString::~CUtlString(); // 1834
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator!=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 1828
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 1828
	{
	}
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 102
	{
	}
	ResourceReleaseNoDelete(ResourceHandle_t hResource,
				uintp nLeakTrackingPairingID,
				ResourceLeakTrackingGroup_t leakTrackingGroup);  // 93
	ResourceReleaseNoDelete(ResourceHandle_t hResource,
				uintp nLeakTrackingPairingID,
				ResourceLeakTrackingGroup_t leakTrackingGroup);  // 1830
} /* size: 0, variables: 5, inline expansions: 53 (1623 bytes) */

// <0018E5F6> rendersystem/renderdevicebase.cpp:1840
// function calls: 2
void CRenderDeviceBase::PreloadTextureBits(HRenderTexture hTexture, int32 nRequiredMipSize)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1842
} /* size: 73, inline expansions: 2 (14 bytes) */

// <0018E51F> rendersystem/renderdevicebase.cpp:1845
// function calls: 2
void CRenderDeviceBase::UnloadTextureBits(HRenderTexture hTexture)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1847
} /* size: 73, inline expansions: 2 (14 bytes) */

// <0018E429> rendersystem/renderdevicebase.cpp:1851
// function calls: 2
void CRenderDeviceBase::SetTextureStreamingPriority(HRenderTexture hTexture, RenderTextureStreamingPriority_t eTextureStreamingPriority)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1853
} /* size: 76, inline expansions: 2 (14 bytes) */

// <0018E336> rendersystem/renderdevicebase.cpp:1856
// function calls: 2
void CRenderDeviceBase::MarkTextureUsed(HRenderTexture hTexture, int nDetail)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1858
} /* size: 73, inline expansions: 2 (14 bytes) */

// <0018E25F> rendersystem/renderdevicebase.cpp:1861
// function calls: 2
void CRenderDeviceBase::AreTextureBitsLoaded(HRenderTexture hTexture)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1863
} /* size: 73, inline expansions: 2 (14 bytes) */

// <001AEE5F> rendersystem/renderdevicebase.cpp:1866
// function calls: 2
void CRenderDeviceBase::GetOnDiskTextureDesc(HRenderTexture hTexture)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1868
} /* size: 73, inline expansions: 2 (14 bytes) */

// <0018E239> rendersystem/renderdevicebase.cpp:1866
void CRenderDeviceBase::GetOnDiskTextureDesc(HRenderTexture hTexture)
{
} /* size: 0 */

// <001AEF2A> rendersystem/renderdevicebase.cpp:1871
// function calls: 2
void CRenderDeviceBase::GetTextureDesc(HRenderTexture hTexture)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1873
} /* size: 73, inline expansions: 2 (14 bytes) */

// <0018E213> rendersystem/renderdevicebase.cpp:1871
void CRenderDeviceBase::GetTextureDesc(HRenderTexture hTexture)
{
} /* size: 0 */

// <0018E13C> rendersystem/renderdevicebase.cpp:1876
// function calls: 2
void CRenderDeviceBase::GetTextureAverageColor(HRenderTexture hTexture)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1878
} /* size: 73, inline expansions: 2 (14 bytes) */

// <0018D820> rendersystem/renderdevicebase.cpp:1881
// variables: 7
// function calls: 30
void CRenderDeviceBase::GetCubemapRadianceSHConstants(HRenderTexture hTexture, int nArrayIndex, CUtlVector<float, CUtlMemory<float, int> >& outConstants)
{
	const TextureSpecification_t* pSpec; // 1886
	const char   __FUNCTION__; // 2999
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1889
	}
	{
		const int  nArraySize; // 1894
		const int  nElementsPerArray; // 1895
		{
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1899
			}
			{
				int i; // 1906
				CUtlMemory<float, int>::NumAllocated(); // 1247
				CUtlMemory<float, int>::operator[](
						int i);  // 602
				CUtlVectorBase<float, CUtlMemory<float, int> >::Element(
					int i);  // 1252
				Construct<float, float>(float* pMemory); // 1252
				CUtlMemory<float, int>::Base(); // 112
				CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 368
				CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<float, CUtlMemory<float, int> >::GrowMemory(
						int num);  // 1249
				CUtlVectorBase<float, CUtlMemory<float, int> >::AddToTail(
						float& src);  // 1908
			}
			CUtlMemory<float, int>::Base(); // 113
			CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 1901
			_DebuggerBreakInlineExpressionWrapper(void); // 1897
		}
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 176
		{
		}
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 182
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 179
		{
		}
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 181
		CTextureDesc::GetArrayCount(); // 1894
		CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 1895
	}
	IRenderDevice::IsEmptyAPI(); // 390
	IRenderDevice::IsNoOpDevice(); // 1883
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1886
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 1889
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 168
	CTextureDesc::IsArray(); // 1892
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 1914
	CUtlMemory<float, int>::Base(); // 113
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 1914
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 135
	CUtlVectorBase<float, CUtlMemory<float, int> >::IsEmpty(); // 1917
} /* size: 0, variables: 2, inline expansions: 12 (51 bytes) */

// <0018B190> rendersystem/renderdevicebase.cpp:1881
// variables: 7
// function calls: 30
void CRenderDeviceBase::GetCubemapRadianceSHConstants(HRenderTexture hTexture, int nArrayIndex, CUtlVector<float, CUtlMemory<float, int> >& outConstants)
{
	const TextureSpecification_t* pSpec; // 1886
	const char   __FUNCTION__; // 32374
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1889
	}
	{
		const int  nArraySize; // 1894
		const int  nElementsPerArray; // 1895
		{
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1899
			}
			{
				int i; // 1906
				CUtlMemory<float, int>::NumAllocated(); // 1247
				CUtlMemory<float, int>::operator[](
						int i);  // 602
				CUtlVectorBase<float, CUtlMemory<float, int> >::Element(
					int i);  // 1252
				Construct<float, float>(float* pMemory); // 1252
				CUtlMemory<float, int>::Base(); // 112
				CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 368
				CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<float, CUtlMemory<float, int> >::GrowMemory(
						int num);  // 1249
				CUtlVectorBase<float, CUtlMemory<float, int> >::AddToTail(
						float& src);  // 1908
			}
			CUtlMemory<float, int>::Base(); // 113
			CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 1901
			_DebuggerBreakInlineExpressionWrapper(void); // 1897
		}
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 176
		{
		}
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 182
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 179
		{
		}
		operator&(RuntimeTextureSpecificationFlags_t a,
				RuntimeTextureSpecificationFlags_t b);  // 181
		CTextureDesc::GetArrayCount(); // 1894
		CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 1895
	}
	IRenderDevice::IsEmptyAPI(); // 390
	IRenderDevice::IsNoOpDevice(); // 1883
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1886
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 1889
	operator&(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 168
	CTextureDesc::IsArray(); // 1892
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 1914
	CUtlMemory<float, int>::Base(); // 113
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 1914
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 135
	CUtlVectorBase<float, CUtlMemory<float, int> >::IsEmpty(); // 1917
} /* size: 0, variables: 2, inline expansions: 12 (51 bytes) */

// <0018D749> rendersystem/renderdevicebase.cpp:1922
// function calls: 2
void CRenderDeviceBase::GetTextureMultisampleType(HRenderTexture hTexture)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1924
} /* size: 73, inline expansions: 2 (14 bytes) */

// <0018D672> rendersystem/renderdevicebase.cpp:1927
// function calls: 2
void CRenderDeviceBase::IsTextureSampleableRenderTarget(HRenderTexture hTexture)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1929
} /* size: 73, inline expansions: 2 (14 bytes) */

// <0018D59B> rendersystem/renderdevicebase.cpp:1932
// function calls: 2
void CRenderDeviceBase::GetTextureStreamingDataOffset(HRenderTexture hTexture)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1934
} /* size: 73, inline expansions: 2 (14 bytes) */

// <0018D4C4> rendersystem/renderdevicebase.cpp:1937
// function calls: 2
void CRenderDeviceBase::IsTextureRenderTarget(HRenderTexture hTexture)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1939
} /* size: 73, inline expansions: 2 (14 bytes) */

// <0018D2EC> rendersystem/renderdevicebase.cpp:1942
// function calls: 7
void CRenderDeviceBase::PinTextureInGPUMemory(HRenderTexture hTexture)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1944
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 733
	{
	}
	CTextureInfoId::IncrementPinCount(); // 410
	CTextureBase::PinInMemory(); // 736
	CTextureManagerBase::PinTextureInGPUMemory(
				HRenderTexture hTexture);  // 1944
} /* size: 0, inline expansions: 7 (265 bytes) */

// <0018D0C6> rendersystem/renderdevicebase.cpp:1947
// function calls: 8
void CRenderDeviceBase::UnpinTextureInGPUMemory(HRenderTexture hTexture)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1949
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 742
	{
	}
	CTextureInfoId::GetPinCount(); // 411
	{
	}
	CTextureInfoId::DecrementPinCount(); // 411
	CTextureBase::UnpinInMemory(); // 745
	CTextureManagerBase::UnpinTextureInGPUMemory(
				HRenderTexture hTexture);  // 1949
} /* size: 0, inline expansions: 8 (581 bytes) */

// <0018CEFA> rendersystem/renderdevicebase.cpp:1952
// function calls: 7
void CRenderDeviceBase::GetTexturePinCount(HRenderTexture hTexture)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1954
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 751
	{
	}
	CTextureInfoId::GetPinCount(); // 412
	CTextureBase::GetPinCount(); // 752
	CTextureManagerBase::GetTexturePinCount(
				HRenderTexture hTexture);  // 1954
} /* size: 0, inline expansions: 7 (266 bytes) */

// <0018CE23> rendersystem/renderdevicebase.cpp:1957
// function calls: 2
void CRenderDeviceBase::IsTextureCubeMap(HRenderTexture hTexture)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1959
} /* size: 73, inline expansions: 2 (14 bytes) */

// <0018CD4C> rendersystem/renderdevicebase.cpp:1962
// function calls: 2
void CRenderDeviceBase::IsTextureFullyResident(HRenderTexture hTexture)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1964
} /* size: 73, inline expansions: 2 (14 bytes) */

// <0018CCED> rendersystem/renderdevicebase.cpp:1967
void CRenderDeviceBase::AddTextureResidencyListener(ITextureResidencyListener* pListener)
{
} /* size: 19 */

// <0018CC8E> rendersystem/renderdevicebase.cpp:1972
void CRenderDeviceBase::RemoveTextureResidencyListener(ITextureResidencyListener* pListener)
{
} /* size: 19 */

// <0018CC51> rendersystem/renderdevicebase.cpp:1987
void CRenderDeviceBase::GetMultisampleTypeName(RenderMultisampleType_t nType)
{
} /* size: 56 */

// <0018CC0F> rendersystem/renderdevicebase.cpp:1998
void CRenderDeviceBase::SetCurrentThreadAsOwner()
{
} /* size: 0 */

// <0018CBE1> rendersystem/renderdevicebase.cpp:2003
void CRenderDeviceBase::RemoveThreadOwner()
{
} /* size: 0 */

// <0018CB9F> rendersystem/renderdevicebase.cpp:2008
void CRenderDeviceBase::ThreadOwnsDevice()
{
} /* size: 0 */

// <0018CB62> rendersystem/renderdevicebase.cpp:2016
void CRenderDeviceBase::GetShaderVersionString(RenderShaderType_t nType)
{
} /* size: 12 */

// <001B508C> rendersystem/renderdevicebase.cpp:2022
// variables: 4
// function calls: 22
void CRenderDeviceBase::FreeTextureGPUResources(int32 nTextureCount, const HRenderTexture* pTextures)
{
	CRenderContextBasePtr pRenderContext; // 2035
	{
		CRenderContextPtr pRenderContext; // 2031
		CRenderContextPtr::CRenderContextPtr<>(
					IRenderDevice* pDevice,
					const char* pDebugStringFmt);  // 2031
		CRenderContextPtr::operator->(); // 2032
		CRenderContextPtr::Release(); // 845
		CRenderContextPtr::~CRenderContextPtr(); // 2033
	}
	CRenderContextPtr::CRenderContextPtr<>(
				IRenderDevice* pDevice,
				const char* pDebugStringFmt);  // 356
	CRenderContextBasePtr::CRenderContextBasePtr(
				IRenderDevice* pDevice,
				const char* pDebugString);  // 2035
	{
		int32 nTexture; // 2036
		{
			CTextureBase* pTexture; // 2043
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 2038
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 2038
			CInterlockedIntT<int, 4>::operator int(); // 288
			ResourceHandleToNonConstData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 2043
			CTextureInfoId::GetTextureObject(); // 488
			__atomic_base<short unsigned int>::load(
				memory_order __m);  // 361
			__atomic_base<short unsigned int>::operator std::__atomic_base<short unsigned int>::__int_type(); // 532
			CTextureInfoChunkBase::HasAnyFlags(
					int nTexId,
					uint16 nFlagsToTest);  // 1017
			CTextureInfoId::HasAnyFlags(
					uint16 nFlagsToTest);  // 488
			CTextureBase::IsStandinTexture(); // 2044
		}
	}
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 341
	CRenderContextBasePtr::~CRenderContextBasePtr(); // 2054
	CRenderDeviceBase::FreeTextureGPUResources(
				int32 nTextureCount,
				const HRenderTexture* pTextures);  // 2022
} /* size: 459, variables: 1, inline expansions: 6 (563 bytes) */

// <0018CAF1> rendersystem/renderdevicebase.cpp:2022
// variables: 4
void CRenderDeviceBase::FreeTextureGPUResources(int32 nTextureCount, const HRenderTexture* pTextures)
{
	CRenderContextBasePtr pRenderContext; // 2035
	{
		CRenderContextPtr pRenderContext; // 2031
	}
	{
		int32 nTexture; // 2036
		{
			CTextureBase* pTexture; // 2043
		}
	}
} /* size: 0, variables: 1 */

// <0018C156> rendersystem/renderdevicebase.cpp:2059
// variables: 2
// function calls: 38
void CRenderDeviceBase::CreateShader(RenderShaderType_t nType, unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> > pShader, const char* pDebugName)
{
	_Tuple_impl<1, std::default_delete<IRenderShaderByteCode> >::_Tuple_impl(
			_Tuple_impl<1, std::default_delete<IRenderShaderByteCode> >& __in);  // 324
	_Tuple_impl<0, IRenderShaderByteCode::_Tuple_impl(
			_Tuple_impl<0, IRenderShaderByteCode*, std::default_delete<IRenderShaderByteCode> > &);  // 996
	tuple<IRenderShaderByteCode::tuple(
		tuple<IRenderShaderByteCode*, std::default_delete<IRenderShaderByteCode> > &);  // 178
	__uniq_ptr_impl<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::_M_ptr(); // 179
	__uniq_ptr_impl<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::__uniq_ptr_impl(
			__uniq_ptr_impl<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >& __u);  // 235
	__uniq_ptr_data<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode>, true, true>::__uniq_ptr_data(
			__uniq_ptr_data<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode>, true, true> &);  // 359
	unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::unique_ptr(
			unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> > &);  // 2076
	{
		IRenderShaderByteCode *& __ptr; // 396
		__uniq_ptr_impl<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::_M_ptr(); // 396
		unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::get_deleter(); // 398
		default_delete<IRenderShaderByteCode>::operator(
				IRenderShaderByteCode* __ptr);  // 398
	}
	unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::~unique_ptr(); // 2076
	_Tuple_impl<1, std::default_delete<IRenderShaderByteCode> >::_Tuple_impl(
			_Tuple_impl<1, std::default_delete<IRenderShaderByteCode> >& __in);  // 324
	_Tuple_impl<0, IRenderShaderByteCode::_Tuple_impl(
			_Tuple_impl<0, IRenderShaderByteCode*, std::default_delete<IRenderShaderByteCode> > &);  // 996
	tuple<IRenderShaderByteCode::tuple(
		tuple<IRenderShaderByteCode*, std::default_delete<IRenderShaderByteCode> > &);  // 178
	__uniq_ptr_impl<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::_M_ptr(); // 179
	__uniq_ptr_impl<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::__uniq_ptr_impl(
			__uniq_ptr_impl<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >& __u);  // 235
	__uniq_ptr_data<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode>, true, true>::__uniq_ptr_data(
			__uniq_ptr_data<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode>, true, true> &);  // 359
	unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::unique_ptr(
			unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> > &);  // 2073
	{
		IRenderShaderByteCode *& __ptr; // 396
		__uniq_ptr_impl<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::_M_ptr(); // 396
	}
	unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::~unique_ptr(); // 2073
	_Tuple_impl<1, std::default_delete<IRenderShaderByteCode> >::_Tuple_impl(
			_Tuple_impl<1, std::default_delete<IRenderShaderByteCode> >& __in);  // 324
	_Tuple_impl<0, IRenderShaderByteCode::_Tuple_impl(
			_Tuple_impl<0, IRenderShaderByteCode*, std::default_delete<IRenderShaderByteCode> > &);  // 996
	tuple<IRenderShaderByteCode::tuple(
		tuple<IRenderShaderByteCode*, std::default_delete<IRenderShaderByteCode> > &);  // 178
	__uniq_ptr_impl<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::__uniq_ptr_impl(
			__uniq_ptr_impl<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >& __u);  // 235
	__uniq_ptr_data<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode>, true, true>::__uniq_ptr_data(
			__uniq_ptr_data<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode>, true, true> &);  // 359
	unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::unique_ptr(
			unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> > &);  // 2064
	_Tuple_impl<1, std::default_delete<IRenderShaderByteCode> >::_Tuple_impl(
			_Tuple_impl<1, std::default_delete<IRenderShaderByteCode> >& __in);  // 324
	_Tuple_impl<0, IRenderShaderByteCode::_Tuple_impl(
			_Tuple_impl<0, IRenderShaderByteCode*, std::default_delete<IRenderShaderByteCode> > &);  // 996
	tuple<IRenderShaderByteCode::tuple(
		tuple<IRenderShaderByteCode*, std::default_delete<IRenderShaderByteCode> > &);  // 178
	__uniq_ptr_impl<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::__uniq_ptr_impl(
			__uniq_ptr_impl<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >& __u);  // 235
	__uniq_ptr_data<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode>, true, true>::__uniq_ptr_data(
			__uniq_ptr_data<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode>, true, true> &);  // 359
	unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::unique_ptr(
			unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> > &);  // 2067
	_Tuple_impl<1, std::default_delete<IRenderShaderByteCode> >::_Tuple_impl(
			_Tuple_impl<1, std::default_delete<IRenderShaderByteCode> >& __in);  // 324
	_Tuple_impl<0, IRenderShaderByteCode::_Tuple_impl(
			_Tuple_impl<0, IRenderShaderByteCode*, std::default_delete<IRenderShaderByteCode> > &);  // 996
	tuple<IRenderShaderByteCode::tuple(
		tuple<IRenderShaderByteCode*, std::default_delete<IRenderShaderByteCode> > &);  // 178
	__uniq_ptr_impl<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::__uniq_ptr_impl(
			__uniq_ptr_impl<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >& __u);  // 235
	__uniq_ptr_data<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode>, true, true>::__uniq_ptr_data(
			__uniq_ptr_data<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode>, true, true> &);  // 359
	unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> >::unique_ptr(
			unique_ptr<IRenderShaderByteCode, std::default_delete<IRenderShaderByteCode> > &);  // 2070
} /* size: 284, inline expansions: 34 (296 bytes) */

// <0018C06D> rendersystem/renderdevicebase.cpp:2082
void CRenderDeviceBase::DestroyShader(RenderShaderType_t nType, RenderShaderHandle_t hShader)
{
} /* size: 133 */

// <0018BF7D> rendersystem/renderdevicebase.cpp:2103
// function calls: 2
void CRenderDeviceBase::GetShaderStats(RenderShaderStats_t* pOutStats, RenderShaderType_t nType, RenderShaderHandle_t hShader)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 2105
} /* size: 12, inline expansions: 2 (14 bytes) */

// <001B23C8> rendersystem/renderdevicebase.cpp:2111
// variables: 5
// function calls: 45
void CRenderDeviceBase::FindOrCreateRasterizerState(const RsRasterizerStateDesc_t* pRsDesc)
{
	CRasterizerStateCreator constructor; // 2113
	UtlTSHashHandle_t handle; // 2114
	HashItem<RsRasterizerStateDesc_t>(const RsRasterizerStateDesc_t& item); // 209
	RsRasterizerStateDesc_t::HashValue(); // 87
	Hash(const RsRasterizerStateDesc_t& key,
		int nBucketMask);  // 734
	{
		HashFixedData_t* pElement; // 719
		V_memcmp(const void* m1,
			const void* m2,
			size_t count);  // 214
		RsRasterizerStateDesc_t::operator==(
				const RsRasterizerStateDesc_t& state);  // 93
		Compare(const RsRasterizerStateDesc_t& lhs,
			const RsRasterizerStateDesc_t& rhs);  // 721
	}
	CUtlTSHashBase<void::Find(
		RsRasterizerStateDesc_t uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 736
	CThreadSpinRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 743
	{
		HashFixedData_t* pElement; // 719
		V_memcmp(const void* m1,
			const void* m2,
			size_t count);  // 214
		RsRasterizerStateDesc_t::operator==(
				const RsRasterizerStateDesc_t& state);  // 93
		Compare(const RsRasterizerStateDesc_t& lhs,
			const RsRasterizerStateDesc_t& rhs);  // 721
	}
	CUtlTSHashBase<void::Find(
		RsRasterizerStateDesc_t uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 744
	CThreadSpinRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 745
	CUtlTSHashBase<void::Find(
		RsRasterizerStateDesc_t uiKey);  // 507
	HashItem<RsRasterizerStateDesc_t>(const RsRasterizerStateDesc_t& item); // 209
	RsRasterizerStateDesc_t::HashValue(); // 87
	Hash(const RsRasterizerStateDesc_t& key,
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
		V_memcmp(const void* m1,
			const void* m2,
			size_t count);  // 214
		RsRasterizerStateDesc_t::operator==(
				const RsRasterizerStateDesc_t& state);  // 93
		Compare(const RsRasterizerStateDesc_t& lhs,
			const RsRasterizerStateDesc_t& rhs);  // 721
	}
	CUtlTSHashBase<void::Find(
		RsRasterizerStateDesc_t uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 516
	CUtlMemoryPool<CUtlTSHashBase<void::Alloc(); // 438
	CUtlTSHashBase<void::InsertUncommitted(
				RsRasterizerStateDesc_t uiKey,
				HashBucket_t& bucket);  // 521
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
			int nLineNumber);  // 29
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 31
	CRasterizerStateCreator::Construct(
			void** pElement);  // 522
	CUtlTSHashBase<void::Insert(
		RsRasterizerStateDesc_t uiKey,
		ITSHashConstructor<void*>* pConstructor,
		bool* pDidInsert);  // 2114
	ITSHashConstructor<void::ITSHashConstructor(); // 23
	CRasterizerStateCreator::CRasterizerStateCreator(
				const RsRasterizerStateDesc_t* pDesc,
				CRenderDeviceBase* pRenderDevice);  // 2113
} /* size: 958, variables: 2, inline expansions: 36 (2573 bytes) */

// <0018BF3D> rendersystem/renderdevicebase.cpp:2111
// variables: 2
void CRenderDeviceBase::FindOrCreateRasterizerState(const RsRasterizerStateDesc_t* pRsDesc)
{
	CRasterizerStateCreator constructor; // 2113
	UtlTSHashHandle_t handle; // 2114
} /* size: 0, variables: 2 */

// <0018BF17> rendersystem/renderdevicebase.cpp:2118
void CRenderDeviceBase::GetRasterizerStateDesc(RsRasterizerStateHandle_t hRS)
{
} /* size: 0 */

// <001B15D9> rendersystem/renderdevicebase.cpp:2124
// variables: 5
// function calls: 45
void CRenderDeviceBase::FindOrCreateDepthStencilState(const RsDepthStencilStateDesc_t* pDsDesc)
{
	CDepthStencilStateCreator constructor; // 2126
	UtlTSHashHandle_t handle; // 2127
	HashItem<RsDepthStencilStateDesc_t>(const RsDepthStencilStateDesc_t& item); // 366
	RsDepthStencilStateDesc_t::HashValue(); // 87
	Hash(const RsDepthStencilStateDesc_t& key,
		int nBucketMask);  // 734
	{
		HashFixedData_t* pElement; // 719
		V_memcmp(const void* m1,
			const void* m2,
			size_t count);  // 371
		RsDepthStencilStateDesc_t::operator==(
				const RsDepthStencilStateDesc_t& state);  // 93
		Compare(const RsDepthStencilStateDesc_t& lhs,
			const RsDepthStencilStateDesc_t& rhs);  // 721
	}
	CUtlTSHashBase<void::Find(
		RsDepthStencilStateDesc_t uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 736
	CThreadSpinRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 743
	{
		HashFixedData_t* pElement; // 719
		V_memcmp(const void* m1,
			const void* m2,
			size_t count);  // 371
		RsDepthStencilStateDesc_t::operator==(
				const RsDepthStencilStateDesc_t& state);  // 93
		Compare(const RsDepthStencilStateDesc_t& lhs,
			const RsDepthStencilStateDesc_t& rhs);  // 721
	}
	CUtlTSHashBase<void::Find(
		RsDepthStencilStateDesc_t uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 744
	CThreadSpinRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 745
	CUtlTSHashBase<void::Find(
		RsDepthStencilStateDesc_t uiKey);  // 507
	HashItem<RsDepthStencilStateDesc_t>(const RsDepthStencilStateDesc_t& item); // 366
	RsDepthStencilStateDesc_t::HashValue(); // 87
	Hash(const RsDepthStencilStateDesc_t& key,
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
		V_memcmp(const void* m1,
			const void* m2,
			size_t count);  // 371
		RsDepthStencilStateDesc_t::operator==(
				const RsDepthStencilStateDesc_t& state);  // 93
		Compare(const RsDepthStencilStateDesc_t& lhs,
			const RsDepthStencilStateDesc_t& rhs);  // 721
	}
	CUtlTSHashBase<void::Find(
		RsDepthStencilStateDesc_t uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 516
	CUtlMemoryPool<CUtlTSHashBase<void::Alloc(); // 438
	CUtlTSHashBase<void::InsertUncommitted(
				RsDepthStencilStateDesc_t uiKey,
				HashBucket_t& bucket);  // 521
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
			int nLineNumber);  // 50
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 52
	CDepthStencilStateCreator::Construct(
			void** pElement);  // 522
	CUtlTSHashBase<void::Insert(
		RsDepthStencilStateDesc_t uiKey,
		ITSHashConstructor<void*>* pConstructor,
		bool* pDidInsert);  // 2127
	ITSHashConstructor<void::ITSHashConstructor(); // 44
	CDepthStencilStateCreator::CDepthStencilStateCreator(
					const RsDepthStencilStateDesc_t* pDesc,
					CRenderDeviceBase* pRenderDevice);  // 2126
} /* size: 886, variables: 2, inline expansions: 36 (2365 bytes) */

// <0018BED7> rendersystem/renderdevicebase.cpp:2124
// variables: 2
void CRenderDeviceBase::FindOrCreateDepthStencilState(const RsDepthStencilStateDesc_t* pDsDesc)
{
	CDepthStencilStateCreator constructor; // 2126
	UtlTSHashHandle_t handle; // 2127
} /* size: 0, variables: 2 */

// <0018BE5B> rendersystem/renderdevicebase.cpp:2131
// function call: 1
void CRenderDeviceBase::GetDepthStencilStateDesc(RsDepthStencilStateHandle_t hDS)
{
	CUtlTSHashBase<void::GetPointerToKey(
			UtlTSHashHandle_t hHash);  // 2133
} /* size: 8, inline expansions: 1 (0 bytes) */

// <001B318D> rendersystem/renderdevicebase.cpp:2137
// variables: 5
// function calls: 45
void CRenderDeviceBase::FindOrCreateBlendState(const RsBlendStateDesc_t* pBlendDesc)
{
	CBlendStateCreator constructor; // 2139
	UtlTSHashHandle_t handle; // 2140
	HashItem<RsBlendStateDesc_t>(const RsBlendStateDesc_t& item); // 547
	RsBlendStateDesc_t::HashValue(); // 87
	Hash(const RsBlendStateDesc_t& key,
		int nBucketMask);  // 734
	{
		HashFixedData_t* pElement; // 719
		V_memcmp(const void* m1,
			const void* m2,
			size_t count);  // 552
		RsBlendStateDesc_t::operator==(
				const RsBlendStateDesc_t& state);  // 93
		Compare(const RsBlendStateDesc_t& lhs,
			const RsBlendStateDesc_t& rhs);  // 721
	}
	CUtlTSHashBase<void::Find(
		RsBlendStateDesc_t uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 736
	CThreadSpinRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 743
	{
		HashFixedData_t* pElement; // 719
		V_memcmp(const void* m1,
			const void* m2,
			size_t count);  // 552
		RsBlendStateDesc_t::operator==(
				const RsBlendStateDesc_t& state);  // 93
		Compare(const RsBlendStateDesc_t& lhs,
			const RsBlendStateDesc_t& rhs);  // 721
	}
	CUtlTSHashBase<void::Find(
		RsBlendStateDesc_t uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 744
	CThreadSpinRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 745
	CUtlTSHashBase<void::Find(
		RsBlendStateDesc_t uiKey);  // 507
	HashItem<RsBlendStateDesc_t>(const RsBlendStateDesc_t& item); // 547
	RsBlendStateDesc_t::HashValue(); // 87
	Hash(const RsBlendStateDesc_t& key,
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
		V_memcmp(const void* m1,
			const void* m2,
			size_t count);  // 552
		RsBlendStateDesc_t::operator==(
				const RsBlendStateDesc_t& state);  // 93
		Compare(const RsBlendStateDesc_t& lhs,
			const RsBlendStateDesc_t& rhs);  // 721
	}
	CUtlTSHashBase<void::Find(
		RsBlendStateDesc_t uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 516
	CUtlMemoryPool<CUtlTSHashBase<void::Alloc(); // 438
	CUtlTSHashBase<void::InsertUncommitted(
				RsBlendStateDesc_t uiKey,
				HashBucket_t& bucket);  // 521
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
			int nLineNumber);  // 71
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 73
	CBlendStateCreator::Construct(
			void** pElement);  // 522
	CUtlTSHashBase<void::Insert(
		RsBlendStateDesc_t uiKey,
		ITSHashConstructor<void*>* pConstructor,
		bool* pDidInsert);  // 2140
	ITSHashConstructor<void::ITSHashConstructor(); // 65
	CBlendStateCreator::CBlendStateCreator(
				const RsBlendStateDesc_t* pDesc,
				CRenderDeviceBase* pRenderDevice);  // 2139
} /* size: 1184, variables: 2, inline expansions: 36 (3003 bytes) */

// <0018BE1B> rendersystem/renderdevicebase.cpp:2137
// variables: 2
void CRenderDeviceBase::FindOrCreateBlendState(const RsBlendStateDesc_t* pBlendDesc)
{
	CBlendStateCreator constructor; // 2139
	UtlTSHashHandle_t handle; // 2140
} /* size: 0, variables: 2 */

// <0018BCCF> rendersystem/renderdevicebase.cpp:2318
// variable: 1
// function calls: 5
void CRenderDeviceBase::GetErrorTexture(RenderTextureDimension_t nDimension)
{
	const CTextureBase* pTexture; // 2320
	CTextureManagerBase::GetErrorTexture(
			RenderTextureDimension_t nDim);  // 2320
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1200
	CTextureInfoId::GetResourceHandle(); // 478
	CTextureBase::GetTextureHandle(); // 2321
} /* size: 59, variables: 1, inline expansions: 5 (116 bytes) */

// <0018B92A> rendersystem/renderdevicebase.cpp:2324
// variable: 1
// function calls: 12
void CRenderDeviceBase::FindOrCreateFileTexture(const char* pFileName, RenderSystemAssetFileLoadMode_t nLoadMode)
{
	HRenderTexture hTexture; // 2326
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 703
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 705
	IResourceSystem::FindOrRegisterResourceByName<2019914870>(
						const CResourceName& resourceName,
						bool bWarnIfNotLoaded);  // 2326
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 2326
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2329
} /* size: 234, variables: 1, inline expansions: 12 (145 bytes) */

// <0018B74F> rendersystem/renderdevicebase.cpp:2334
// variable: 1
// function calls: 6
void CRenderDeviceBase::FindFileTexture(ResourceId_t nId, RenderSystemAssetFileLoadMode_t nLoadMode)
{
	HRenderTexture hTexture; // 2336
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 711
	IResourceSystem::FindResourceById<2019914870>(
					ResourceId_t nResourceId);  // 2336
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2339
} /* size: 136, variables: 1, inline expansions: 6 (31 bytes) */

// <0018B6C1> rendersystem/renderdevicebase.cpp:2344
void CRenderDeviceBase::FindOrCreateExternalTexture(const char* pResourceName, SharedResourceHandle_t hSharedTexture)
{
} /* size: 77 */

// <0018B5D2> rendersystem/renderdevicebase.cpp:2349
// function calls: 2
void CRenderDeviceBase::UpdateExternalTexture(HRenderTexture hTexture, SharedResourceHandle_t hSharedTexture)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2351
} /* size: 77, inline expansions: 2 (14 bytes) */

// <0016AF5F> rendersystem/renderdevicebase.cpp:2355
// member variables: 8
// struct size: 32
struct DefaultBlendState_t {
	bool m_bBlendEnable; /* 0 1 */
	RsBlendMode_t m_srcBlend; /* 4 4 */
	RsBlendMode_t m_destBlend; /* 8 4 */
	RsBlendOp_t m_blendOp; /* 12 4 */
	RsBlendMode_t m_srcBlendAlpha; /* 16 4 */
	RsBlendMode_t m_destBlendAlpha; /* 20 4 */
	RsBlendOp_t m_blendOpAlpha; /* 24 4 */
	uint8 m_nColorWriteEnable; /* 28 1 */
};

// <00183DD7> rendersystem/renderdevicebase.cpp:2368
// variables: 36
// function calls: 346
void CRenderDeviceBase::CreateDefaultRenderStateObjects()
{
	const RsDepthStencilStateDesc_t  s_ZBufferRenderStateTable; // 2399
	const uint32   s_ZBufferRenderStateStencilRef; // 2445
	const DefaultBlendState_t   s_blendStateTable; // 2463
	{
		int nCull; // 2371
		{
			int nIdx; // 2373
			RsRasterizerStateDesc_t rDesc; // 2374
			CRasterizerStateCreator constructor; // 2393
			UtlTSHashHandle_t handle; // 2394
			CThreadSpinRWLock::LockForRead(
					const char* pFileName,
					int nLineNumber);  // 743
			HashItem<RsRasterizerStateDesc_t>(const RsRasterizerStateDesc_t& item); // 209
			RsRasterizerStateDesc_t::HashValue(); // 87
			Hash(const RsRasterizerStateDesc_t& key,
				int nBucketMask);  // 734
			{
				HashFixedData_t* pElement; // 719
				V_memcmp(const void* m1,
					const void* m2,
					size_t count);  // 214
				RsRasterizerStateDesc_t::operator==(
						const RsRasterizerStateDesc_t& state);  // 93
				Compare(const RsRasterizerStateDesc_t& lhs,
					const RsRasterizerStateDesc_t& rhs);  // 721
			}
			CUtlTSHashBase<void::Find(
				RsRasterizerStateDesc_t uiKey,
				HashFixedData_t* pFirstElement,
				HashFixedData_t* pLastElement);  // 736
			{
				HashFixedData_t* pElement; // 719
				V_memcmp(const void* m1,
					const void* m2,
					size_t count);  // 214
				RsRasterizerStateDesc_t::operator==(
						const RsRasterizerStateDesc_t& state);  // 93
				Compare(const RsRasterizerStateDesc_t& lhs,
					const RsRasterizerStateDesc_t& rhs);  // 721
			}
			CUtlTSHashBase<void::Find(
				RsRasterizerStateDesc_t uiKey,
				HashFixedData_t* pFirstElement,
				HashFixedData_t* pLastElement);  // 744
			CThreadSpinRWLock::UnlockRead(
					const char* pFileName,
					int nLineNumber);  // 745
			CUtlTSHashBase<void::Find(
				RsRasterizerStateDesc_t uiKey);  // 507
			HashItem<RsRasterizerStateDesc_t>(const RsRasterizerStateDesc_t& item); // 209
			RsRasterizerStateDesc_t::HashValue(); // 87
			Hash(const RsRasterizerStateDesc_t& key,
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
				V_memcmp(const void* m1,
					const void* m2,
					size_t count);  // 214
				RsRasterizerStateDesc_t::operator==(
						const RsRasterizerStateDesc_t& state);  // 93
				Compare(const RsRasterizerStateDesc_t& lhs,
					const RsRasterizerStateDesc_t& rhs);  // 721
			}
			CUtlTSHashBase<void::Find(
				RsRasterizerStateDesc_t uiKey,
				HashFixedData_t* pFirstElement,
				HashFixedData_t* pLastElement);  // 516
			CUtlMemoryPool<CUtlTSHashBase<void::Alloc(); // 438
			CUtlTSHashBase<void::InsertUncommitted(
						RsRasterizerStateDesc_t uiKey,
						HashBucket_t& bucket);  // 521
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
					int nLineNumber);  // 29
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 31
			CRasterizerStateCreator::Construct(
					void** pElement);  // 522
			CUtlTSHashBase<void::Insert(
				RsRasterizerStateDesc_t uiKey,
				ITSHashConstructor<void*>* pConstructor,
				bool* pDidInsert);  // 2394
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 2375
			ITSHashConstructor<void::ITSHashConstructor(); // 23
			CRasterizerStateCreator::CRasterizerStateCreator(
						const RsRasterizerStateDesc_t* pDesc,
						CRenderDeviceBase* pRenderDevice);  // 2393
		}
	}
	{
		int i; // 2453
		{
			CDepthStencilStateCreator constructor; // 2455
			UtlTSHashHandle_t handle; // 2456
			HashItem<RsDepthStencilStateDesc_t>(const RsDepthStencilStateDesc_t& item); // 366
			RsDepthStencilStateDesc_t::HashValue(); // 87
			Hash(const RsDepthStencilStateDesc_t& key,
				int nBucketMask);  // 512
			HashItem<RsDepthStencilStateDesc_t>(const RsDepthStencilStateDesc_t& item); // 366
			RsDepthStencilStateDesc_t::HashValue(); // 87
			Hash(const RsDepthStencilStateDesc_t& key,
				int nBucketMask);  // 734
			{
				HashFixedData_t* pElement; // 719
				V_memcmp(const void* m1,
					const void* m2,
					size_t count);  // 371
				RsDepthStencilStateDesc_t::operator==(
						const RsDepthStencilStateDesc_t& state);  // 93
				Compare(const RsDepthStencilStateDesc_t& lhs,
					const RsDepthStencilStateDesc_t& rhs);  // 721
			}
			CUtlTSHashBase<void::Find(
				RsDepthStencilStateDesc_t uiKey,
				HashFixedData_t* pFirstElement,
				HashFixedData_t* pLastElement);  // 736
			CThreadSpinRWLock::LockForRead(
					const char* pFileName,
					int nLineNumber);  // 743
			{
				HashFixedData_t* pElement; // 719
				V_memcmp(const void* m1,
					const void* m2,
					size_t count);  // 371
				RsDepthStencilStateDesc_t::operator==(
						const RsDepthStencilStateDesc_t& state);  // 93
				Compare(const RsDepthStencilStateDesc_t& lhs,
					const RsDepthStencilStateDesc_t& rhs);  // 721
			}
			CUtlTSHashBase<void::Find(
				RsDepthStencilStateDesc_t uiKey,
				HashFixedData_t* pFirstElement,
				HashFixedData_t* pLastElement);  // 744
			CThreadSpinRWLock::UnlockRead(
					const char* pFileName,
					int nLineNumber);  // 745
			CUtlTSHashBase<void::Find(
				RsDepthStencilStateDesc_t uiKey);  // 507
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
				V_memcmp(const void* m1,
					const void* m2,
					size_t count);  // 371
				RsDepthStencilStateDesc_t::operator==(
						const RsDepthStencilStateDesc_t& state);  // 93
				Compare(const RsDepthStencilStateDesc_t& lhs,
					const RsDepthStencilStateDesc_t& rhs);  // 721
			}
			CUtlTSHashBase<void::Find(
				RsDepthStencilStateDesc_t uiKey,
				HashFixedData_t* pFirstElement,
				HashFixedData_t* pLastElement);  // 516
			CUtlMemoryPool<CUtlTSHashBase<void::Alloc(); // 438
			CUtlTSHashBase<void::InsertUncommitted(
						RsDepthStencilStateDesc_t uiKey,
						HashBucket_t& bucket);  // 521
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
					int nLineNumber);  // 50
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 52
			CDepthStencilStateCreator::Construct(
					void** pElement);  // 522
			CUtlTSHashBase<void::Insert(
				RsDepthStencilStateDesc_t uiKey,
				ITSHashConstructor<void*>* pConstructor,
				bool* pDidInsert);  // 2456
			ITSHashConstructor<void::ITSHashConstructor(); // 44
			CDepthStencilStateCreator::CDepthStencilStateCreator(
							const RsDepthStencilStateDesc_t* pDesc,
							CRenderDeviceBase* pRenderDevice);  // 2455
		}
	}
	{
		int nBlend; // 2483
		{
			RsBlendStateDesc_t bd; // 2485
			CBlendStateCreator constructor; // 2500
			UtlTSHashHandle_t handle; // 2501
			{
				int i; // 2488
				RsBlendStateDesc_t::SetRenderTargetWriteMask(
							uint8 nWriteMask,
							int nRenderTargetIdx);  // 2497
				RsBlendStateDesc_t::SetAlphaBlendEnabled(
							bool bEnable,
							int nRenderTargetIdx);  // 2490
				RsBlendStateDesc_t::SetBlendOp(
						RsBlendOp_t blendOp,
						int nRenderTargetIdx);  // 2493
				RsBlendStateDesc_t::SetBlendOpAlpha(
						RsBlendOp_t blendOp,
						int nRenderTargetIdx);  // 2496
				RsBlendStateDesc_t::SetSrcBlendAlpha(
						RsBlendMode_t blendMode,
						int nRenderTargetIdx);  // 2494
				RsBlendStateDesc_t::SetSrcBlend(
						RsBlendMode_t blendMode,
						int nRenderTargetIdx);  // 2491
			}
			RsBlendStateDesc_t::SetAlphaToCoverageEnabled(
							bool bEnable);  // 453
			RsBlendStateDesc_t::SetIndependentBlendEnabled(
							bool bEnable);  // 454
			{
				int i; // 455
				RsBlendStateDesc_t::SetAlphaBlendEnabled(
							bool bEnable,
							int nRenderTargetIdx);  // 457
				RsBlendStateDesc_t::SetSrcBlend(
						RsBlendMode_t blendMode,
						int nRenderTargetIdx);  // 458
				RsBlendStateDesc_t::SetRenderTargetWriteMask(
							uint8 nWriteMask,
							int nRenderTargetIdx);  // 464
				RsBlendStateDesc_t::SetDestBlend(
						RsBlendMode_t blendMode,
						int nRenderTargetIdx);  // 459
				RsBlendStateDesc_t::SetBlendOp(
						RsBlendOp_t blendOp,
						int nRenderTargetIdx);  // 460
				RsBlendStateDesc_t::SetSrcBlendAlpha(
						RsBlendMode_t blendMode,
						int nRenderTargetIdx);  // 461
				RsBlendStateDesc_t::SetDestBlendAlpha(
							RsBlendMode_t blendMode,
							int nRenderTargetIdx);  // 462
				RsBlendStateDesc_t::SetBlendOpAlpha(
						RsBlendOp_t blendOp,
						int nRenderTargetIdx);  // 463
				RsBlendStateDesc_t::SetSrgbWriteEnabled(
							bool bEnable,
							int nRenderTargetIdx);  // 465
			}
			RsBlendStateDesc_t::RsBlendStateDesc_t(
						bool bBlendEnable,
						bool bAlphaToCoverageEnable,
						bool bIndependendBlendEnable,
						RsBlendMode_t srcBlend,
						RsBlendMode_t destBlend,
						RsBlendOp_t blendOp,
						RsBlendMode_t srcBlendAlpha,
						RsBlendMode_t destBlendAlpha,
						RsBlendOp_t blendOpAlpha,
						uint8 nRenderTargetWriteMask,
						bool bSrgbWriteEnable);  // 646
			DefaultBlendStateDesc(void); // 640
			DefaultBlendStateDesc(void); // 656
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 656
			RsBlendStateDesc_t::RsBlendStateDesc_t(); // 2485
			RsBlendStateDesc_t::SetAlphaToCoverageEnabled(
							bool bEnable);  // 2486
			ITSHashConstructor<void::ITSHashConstructor(); // 65
			CBlendStateCreator::CBlendStateCreator(
						const RsBlendStateDesc_t* pDesc,
						CRenderDeviceBase* pRenderDevice);  // 2500
			HashItem<RsBlendStateDesc_t>(const RsBlendStateDesc_t& item); // 547
			RsBlendStateDesc_t::HashValue(); // 87
			Hash(const RsBlendStateDesc_t& key,
				int nBucketMask);  // 734
			{
				HashFixedData_t* pElement; // 719
				V_memcmp(const void* m1,
					const void* m2,
					size_t count);  // 552
				RsBlendStateDesc_t::operator==(
						const RsBlendStateDesc_t& state);  // 93
				Compare(const RsBlendStateDesc_t& lhs,
					const RsBlendStateDesc_t& rhs);  // 721
			}
			CUtlTSHashBase<void::Find(
				RsBlendStateDesc_t uiKey,
				HashFixedData_t* pFirstElement,
				HashFixedData_t* pLastElement);  // 736
			CThreadSpinRWLock::LockForRead(
					const char* pFileName,
					int nLineNumber);  // 743
			{
				HashFixedData_t* pElement; // 719
				V_memcmp(const void* m1,
					const void* m2,
					size_t count);  // 552
				RsBlendStateDesc_t::operator==(
						const RsBlendStateDesc_t& state);  // 93
				Compare(const RsBlendStateDesc_t& lhs,
					const RsBlendStateDesc_t& rhs);  // 721
			}
			CUtlTSHashBase<void::Find(
				RsBlendStateDesc_t uiKey,
				HashFixedData_t* pFirstElement,
				HashFixedData_t* pLastElement);  // 744
			CThreadSpinRWLock::UnlockRead(
					const char* pFileName,
					int nLineNumber);  // 745
			CUtlTSHashBase<void::Find(
				RsBlendStateDesc_t uiKey);  // 507
			HashItem<RsBlendStateDesc_t>(const RsBlendStateDesc_t& item); // 547
			RsBlendStateDesc_t::HashValue(); // 87
			Hash(const RsBlendStateDesc_t& key,
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
				V_memcmp(const void* m1,
					const void* m2,
					size_t count);  // 552
				RsBlendStateDesc_t::operator==(
						const RsBlendStateDesc_t& state);  // 93
				Compare(const RsBlendStateDesc_t& lhs,
					const RsBlendStateDesc_t& rhs);  // 721
			}
			CUtlTSHashBase<void::Find(
				RsBlendStateDesc_t uiKey,
				HashFixedData_t* pFirstElement,
				HashFixedData_t* pLastElement);  // 516
			CUtlMemoryPool<CUtlTSHashBase<void::Alloc(); // 438
			CUtlTSHashBase<void::InsertUncommitted(
						RsBlendStateDesc_t uiKey,
						HashBucket_t& bucket);  // 521
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
					int nLineNumber);  // 71
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 73
			CBlendStateCreator::Construct(
					void** pElement);  // 522
			CUtlTSHashBase<void::Insert(
				RsBlendStateDesc_t uiKey,
				ITSHashConstructor<void*>* pConstructor,
				bool* pDidInsert);  // 2501
		}
	}
	DefaultRasterizerStateDesc(void); // 2505
	ITSHashConstructor<void::ITSHashConstructor(); // 23
	CRasterizerStateCreator::CRasterizerStateCreator(
				const RsRasterizerStateDesc_t* pDesc,
				CRenderDeviceBase* pRenderDevice);  // 2113
	HashItem<RsRasterizerStateDesc_t>(const RsRasterizerStateDesc_t& item); // 209
	RsRasterizerStateDesc_t::HashValue(); // 87
	Hash(const RsRasterizerStateDesc_t& key,
		int nBucketMask);  // 734
	{
		HashFixedData_t* pElement; // 719
		V_memcmp(const void* m1,
			const void* m2,
			size_t count);  // 214
		RsRasterizerStateDesc_t::operator==(
				const RsRasterizerStateDesc_t& state);  // 93
		Compare(const RsRasterizerStateDesc_t& lhs,
			const RsRasterizerStateDesc_t& rhs);  // 721
	}
	CUtlTSHashBase<void::Find(
		RsRasterizerStateDesc_t uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 736
	CThreadSpinRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 743
	{
		HashFixedData_t* pElement; // 719
		V_memcmp(const void* m1,
			const void* m2,
			size_t count);  // 214
		RsRasterizerStateDesc_t::operator==(
				const RsRasterizerStateDesc_t& state);  // 93
		Compare(const RsRasterizerStateDesc_t& lhs,
			const RsRasterizerStateDesc_t& rhs);  // 721
	}
	CUtlTSHashBase<void::Find(
		RsRasterizerStateDesc_t uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 744
	CThreadSpinRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 745
	CUtlTSHashBase<void::Find(
		RsRasterizerStateDesc_t uiKey);  // 507
	HashItem<RsRasterizerStateDesc_t>(const RsRasterizerStateDesc_t& item); // 209
	RsRasterizerStateDesc_t::HashValue(); // 87
	Hash(const RsRasterizerStateDesc_t& key,
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
		V_memcmp(const void* m1,
			const void* m2,
			size_t count);  // 214
		RsRasterizerStateDesc_t::operator==(
				const RsRasterizerStateDesc_t& state);  // 93
		Compare(const RsRasterizerStateDesc_t& lhs,
			const RsRasterizerStateDesc_t& rhs);  // 721
	}
	CUtlTSHashBase<void::Find(
		RsRasterizerStateDesc_t uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 516
	CUtlMemoryPool<CUtlTSHashBase<void::Alloc(); // 438
	CUtlTSHashBase<void::InsertUncommitted(
				RsRasterizerStateDesc_t uiKey,
				HashBucket_t& bucket);  // 521
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
			int nLineNumber);  // 29
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 31
	CRasterizerStateCreator::Construct(
			void** pElement);  // 522
	CUtlTSHashBase<void::Insert(
		RsRasterizerStateDesc_t uiKey,
		ITSHashConstructor<void*>* pConstructor,
		bool* pDidInsert);  // 2114
	CRenderDeviceBase::FindOrCreateRasterizerState(
					const RsRasterizerStateDesc_t* pRsDesc);  // 2505
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
	DefaultDepthStencilStateDesc(void); // 2506
	ITSHashConstructor<void::ITSHashConstructor(); // 44
	CDepthStencilStateCreator::CDepthStencilStateCreator(
					const RsDepthStencilStateDesc_t* pDesc,
					CRenderDeviceBase* pRenderDevice);  // 2126
	HashItem<RsDepthStencilStateDesc_t>(const RsDepthStencilStateDesc_t& item); // 366
	RsDepthStencilStateDesc_t::HashValue(); // 87
	Hash(const RsDepthStencilStateDesc_t& key,
		int nBucketMask);  // 734
	{
		HashFixedData_t* pElement; // 719
		V_memcmp(const void* m1,
			const void* m2,
			size_t count);  // 371
		RsDepthStencilStateDesc_t::operator==(
				const RsDepthStencilStateDesc_t& state);  // 93
		Compare(const RsDepthStencilStateDesc_t& lhs,
			const RsDepthStencilStateDesc_t& rhs);  // 721
	}
	CUtlTSHashBase<void::Find(
		RsDepthStencilStateDesc_t uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 736
	CThreadSpinRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 743
	{
		HashFixedData_t* pElement; // 719
		V_memcmp(const void* m1,
			const void* m2,
			size_t count);  // 371
		RsDepthStencilStateDesc_t::operator==(
				const RsDepthStencilStateDesc_t& state);  // 93
		Compare(const RsDepthStencilStateDesc_t& lhs,
			const RsDepthStencilStateDesc_t& rhs);  // 721
	}
	CUtlTSHashBase<void::Find(
		RsDepthStencilStateDesc_t uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 744
	CThreadSpinRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 745
	CUtlTSHashBase<void::Find(
		RsDepthStencilStateDesc_t uiKey);  // 507
	HashItem<RsDepthStencilStateDesc_t>(const RsDepthStencilStateDesc_t& item); // 366
	RsDepthStencilStateDesc_t::HashValue(); // 87
	Hash(const RsDepthStencilStateDesc_t& key,
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
		V_memcmp(const void* m1,
			const void* m2,
			size_t count);  // 371
		RsDepthStencilStateDesc_t::operator==(
				const RsDepthStencilStateDesc_t& state);  // 93
		Compare(const RsDepthStencilStateDesc_t& lhs,
			const RsDepthStencilStateDesc_t& rhs);  // 721
	}
	CUtlTSHashBase<void::Find(
		RsDepthStencilStateDesc_t uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 516
	CUtlMemoryPool<CUtlTSHashBase<void::Alloc(); // 438
	CUtlTSHashBase<void::InsertUncommitted(
				RsDepthStencilStateDesc_t uiKey,
				HashBucket_t& bucket);  // 521
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
			int nLineNumber);  // 50
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 52
	CDepthStencilStateCreator::Construct(
			void** pElement);  // 522
	CUtlTSHashBase<void::Insert(
		RsDepthStencilStateDesc_t uiKey,
		ITSHashConstructor<void*>* pConstructor,
		bool* pDidInsert);  // 2127
	CRenderDeviceBase::FindOrCreateDepthStencilState(
					const RsDepthStencilStateDesc_t* pDsDesc);  // 2506
	RsBlendStateDesc_t::SetAlphaToCoverageEnabled(
					bool bEnable);  // 453
	RsBlendStateDesc_t::SetIndependentBlendEnabled(
					bool bEnable);  // 454
	{
		int i; // 455
		RsBlendStateDesc_t::SetAlphaBlendEnabled(
					bool bEnable,
					int nRenderTargetIdx);  // 457
		RsBlendStateDesc_t::SetSrcBlend(
				RsBlendMode_t blendMode,
				int nRenderTargetIdx);  // 458
		RsBlendStateDesc_t::SetRenderTargetWriteMask(
					uint8 nWriteMask,
					int nRenderTargetIdx);  // 464
		RsBlendStateDesc_t::SetDestBlend(
				RsBlendMode_t blendMode,
				int nRenderTargetIdx);  // 459
		RsBlendStateDesc_t::SetBlendOp(
				RsBlendOp_t blendOp,
				int nRenderTargetIdx);  // 460
		RsBlendStateDesc_t::SetSrcBlendAlpha(
				RsBlendMode_t blendMode,
				int nRenderTargetIdx);  // 461
		RsBlendStateDesc_t::SetDestBlendAlpha(
					RsBlendMode_t blendMode,
					int nRenderTargetIdx);  // 462
		RsBlendStateDesc_t::SetBlendOpAlpha(
				RsBlendOp_t blendOp,
				int nRenderTargetIdx);  // 463
		RsBlendStateDesc_t::SetSrgbWriteEnabled(
					bool bEnable,
					int nRenderTargetIdx);  // 465
	}
	RsBlendStateDesc_t::RsBlendStateDesc_t(
				bool bBlendEnable,
				bool bAlphaToCoverageEnable,
				bool bIndependendBlendEnable,
				RsBlendMode_t srcBlend,
				RsBlendMode_t destBlend,
				RsBlendOp_t blendOp,
				RsBlendMode_t srcBlendAlpha,
				RsBlendMode_t destBlendAlpha,
				RsBlendOp_t blendOpAlpha,
				uint8 nRenderTargetWriteMask,
				bool bSrgbWriteEnable);  // 646
	DefaultBlendStateDesc(void); // 640
	DefaultBlendStateDesc(void); // 2507
	ITSHashConstructor<void::ITSHashConstructor(); // 65
	CBlendStateCreator::CBlendStateCreator(
				const RsBlendStateDesc_t* pDesc,
				CRenderDeviceBase* pRenderDevice);  // 2139
	HashItem<RsBlendStateDesc_t>(const RsBlendStateDesc_t& item); // 547
	RsBlendStateDesc_t::HashValue(); // 87
	Hash(const RsBlendStateDesc_t& key,
		int nBucketMask);  // 734
	{
		HashFixedData_t* pElement; // 719
		V_memcmp(const void* m1,
			const void* m2,
			size_t count);  // 552
		RsBlendStateDesc_t::operator==(
				const RsBlendStateDesc_t& state);  // 93
		Compare(const RsBlendStateDesc_t& lhs,
			const RsBlendStateDesc_t& rhs);  // 721
	}
	CUtlTSHashBase<void::Find(
		RsBlendStateDesc_t uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 736
	CThreadSpinRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 743
	{
		HashFixedData_t* pElement; // 719
		V_memcmp(const void* m1,
			const void* m2,
			size_t count);  // 552
		RsBlendStateDesc_t::operator==(
				const RsBlendStateDesc_t& state);  // 93
		Compare(const RsBlendStateDesc_t& lhs,
			const RsBlendStateDesc_t& rhs);  // 721
	}
	CUtlTSHashBase<void::Find(
		RsBlendStateDesc_t uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 744
	CThreadSpinRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 745
	CUtlTSHashBase<void::Find(
		RsBlendStateDesc_t uiKey);  // 507
	HashItem<RsBlendStateDesc_t>(const RsBlendStateDesc_t& item); // 547
	RsBlendStateDesc_t::HashValue(); // 87
	Hash(const RsBlendStateDesc_t& key,
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
		V_memcmp(const void* m1,
			const void* m2,
			size_t count);  // 552
		RsBlendStateDesc_t::operator==(
				const RsBlendStateDesc_t& state);  // 93
		Compare(const RsBlendStateDesc_t& lhs,
			const RsBlendStateDesc_t& rhs);  // 721
	}
	CUtlTSHashBase<void::Find(
		RsBlendStateDesc_t uiKey,
		HashFixedData_t* pFirstElement,
		HashFixedData_t* pLastElement);  // 516
	CUtlMemoryPool<CUtlTSHashBase<void::Alloc(); // 438
	CUtlTSHashBase<void::InsertUncommitted(
				RsBlendStateDesc_t uiKey,
				HashBucket_t& bucket);  // 521
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
			int nLineNumber);  // 71
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 73
	CBlendStateCreator::Construct(
			void** pElement);  // 522
	CUtlTSHashBase<void::Insert(
		RsBlendStateDesc_t uiKey,
		ITSHashConstructor<void*>* pConstructor,
		bool* pDidInsert);  // 2140
	CRenderDeviceBase::FindOrCreateBlendState(
				const RsBlendStateDesc_t* pBlendDesc);  // 2507
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
					RsComparison_t backStencilFunc);  // 2443
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
					RsComparison_t backStencilFunc);  // 2443
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
					RsComparison_t backStencilFunc);  // 2443
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
					RsComparison_t backStencilFunc);  // 2443
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
					RsComparison_t backStencilFunc);  // 2443
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
					RsComparison_t backStencilFunc);  // 2443
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
					RsComparison_t backStencilFunc);  // 2443
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
					RsComparison_t backStencilFunc);  // 2443
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
					RsComparison_t backStencilFunc);  // 2443
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
					RsComparison_t backStencilFunc);  // 2443
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
					RsComparison_t backStencilFunc);  // 2443
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
					RsComparison_t backStencilFunc);  // 2443
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
					RsComparison_t backStencilFunc);  // 2443
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
					RsComparison_t backStencilFunc);  // 2443
} /* size: 7719, variables: 3, inline expansions: 149 (12532 bytes) */

// <00183DBE> rendersystem/renderdevicebase.cpp:2510
void CRenderDeviceBase::DestroyDefaultRenderStateObjects()
{
} /* size: 0 */

// <00183D46> rendersystem/renderdevicebase.cpp:2515
void CRenderDeviceBase::GetMonitorDimensions(int* pWidth, int* pHeight)
{
} /* size: 32 */

// <00183BB7> rendersystem/renderdevicebase.cpp:2520
// variables: 6
// function calls: 2
void CRenderDeviceBase::GetLargestMonitorDimensions(int* pWidth, int* pHeight)
{
	int lastCount; // 2523
	int lastWidth; // 2524
	int lastHeight; // 2525
	{
		int a; // 2538
		{
			int nMonitorWidth; // 2540
			int nMonitorHeight; // 2541
			Max<int>(const int& val1,
				const int& val2);  // 2544
			Max<int>(const int& val1,
				const int& val2);  // 2545
		}
	}
} /* size: 281, variables: 3 */

// <00183B7A> rendersystem/renderdevicebase.cpp:2553
void CRenderDeviceBase::GetPipelineFrameStats(CRenderPipelineFrameStats& frameStats)
{
} /* size: 7 */

// <00183B54> rendersystem/renderdevicebase.cpp:2559
void CRenderDeviceBase::ReleasePipelineFrameStats(CRenderPipelineFrameStats& frameStats)
{
} /* size: 0 */

// <001AFF7D> rendersystem/renderdevicebase.cpp:2564
// variables: 2
// function calls: 16
void CRenderDeviceBase::ProcessGPUProfilerCommand(const RenderPipelineStatsCmd_t& cmd)
{
	DWordSwapC<unsigned int>(unsigned int dw); // 257
	CBigEndianValue<unsigned int>::GetValue(); // 283
	CBigEndianValue<unsigned int>::operator unsigned int(); // 2566
	{
		uint i; // 300
		{
			uint c; // 302
		}
	}
	CBigEndianValue<long long unsigned int>::ByteSwap(); // 260
	CBigEndianValue<long long unsigned int>::GetValue(); // 283
	CBigEndianValue<long long unsigned int>::operator long long unsigned int(); // 2570
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 618
	CInterlockedIntT<unsigned int, 4>::InterlockedOr(
			unsigned int newValue);  // 625
	CInterlockedIntT<unsigned int, 4>::operator|=(
			unsigned int mask);  // 187
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 629
	CInterlockedIntT<unsigned int, 4>::InterlockedAnd(
			unsigned int newValue);  // 636
	CInterlockedIntT<unsigned int, 4>::operator&=(
			unsigned int mask);  // 191
	CRenderDeviceBase::SetDebugFlag(
			RenderDebugFlag_t nFlag,
			bool bOnOff);  // 183
	CRenderDeviceBase::SetDebugFlag(
			RenderDebugFlag_t nFlag,
			bool bOnOff);  // 2570
	CRenderDeviceBase::ProcessGPUProfilerCommand(
					const RenderPipelineStatsCmd_t& cmd);  // 2564
	CTextureManagerBase::RequestGPUProfilerTextureList(); // 2575
} /* size: 239, inline expansions: 16 (412 bytes) */

// <00183B2E> rendersystem/renderdevicebase.cpp:2564
void CRenderDeviceBase::ProcessGPUProfilerCommand(const RenderPipelineStatsCmd_t& cmd)
{
} /* size: 0 */

// <00183A6A> rendersystem/renderdevicebase.cpp:2586
// function call: 1
void CRenderDeviceBase::PrintGPUMemoryStatsCommand(const CCommandContext& ctx, const CCommand& args)
{
	CRenderDeviceBase::PrintGPUMemoryStats(); // 2588
} /* size: 58, inline expansions: 1 (22 bytes) */

// <001AF7A6> rendersystem/renderdevicebase.cpp:2591
// variables: 6
void CRenderDeviceBase::PrintGPUMemoryStats()
{
	const float  flVBMem; // 2599
	const float  flIBMem; // 2600
	const float  flTexMem; // 2601
	const float  flCBMem; // 2602
	uint64_t nHeapBudget; // 2616
	uint64_t nHeapUsage; // 2617
} /* size: 25, variables: 6 */

// <001AF233> rendersystem/renderdevicebase.cpp:2591
// variables: 6
// function calls: 13
void CRenderDeviceBase::PrintGPUMemoryStats()
{
	const float  flVBMem; // 2599
	const float  flIBMem; // 2600
	const float  flTexMem; // 2601
	const float  flCBMem; // 2602
	uint64_t nHeapBudget; // 2616
	uint64_t nHeapUsage; // 2617
	CInterlockedIntT<int, 4>::operator int(); // 61
	GetAllocatedBufferMemory(void); // 2599
	CTextureManagerBase::GetCurrentTextureMemorySize(); // 2601
	CInterlockedIntT<int, 4>::operator int(); // 59
	GetAllocatedBufferMemory(void); // 2600
	CTextureManagerBase::GetCurrentNonEvictableTextureMemorySize(); // 2612
	CTextureManagerBase::GetTextureMemoryLimit(); // 2612
	CTextureManagerBase::GetCurrentTextureMemorySize(); // 2612
	CTextureManagerBase::GetCurrentTextureCount(); // 2608
	CInterlockedIntT<int, 4>::operator int(); // 58
	GetBufferCount(void); // 2606
	CInterlockedIntT<int, 4>::operator int(); // 60
	GetBufferCount(void); // 2605
} /* size: 1055, variables: 6, inline expansions: 13 (99 bytes) */

// <001838B7> rendersystem/renderdevicebase.cpp:2626
// variables: 5
// function calls: 5
void CRenderDeviceBase::ComputeAllocatedBufferMemorySizeMB()
{
	const float  flVBMem; // 2628
	const float  flIBMem; // 2629
	const float  flCBMem; // 2630
	const float  flFragMem; // 2632
	const float  flExternalMem; // 2633
	CInterlockedIntT<int, 4>::operator int(); // 61
	GetAllocatedBufferMemory(void); // 2628
	CInterlockedIntT<int, 4>::operator int(); // 59
	GetAllocatedBufferMemory(void); // 2629
	CInterlockedIntT<long long int, 8>::operator long long int(); // 2633
} /* size: 259, variables: 5, inline expansions: 5 (43 bytes) */

// <00181F9E> rendersystem/renderdevicebase.cpp:2638
// variables: 11
// function calls: 96
void CRenderDeviceBase::BuildBufferListAndSendToGPUProfiler()
{
	CUtlBuffer bufferListBuf; // 2641
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2644; // 2644
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2645; // 2645
		{
			CVertexBufferBase* pVB; // 2648
			{
				RenderPipelineStatsBufferInfo_t bi; // 2650
				CUtlString vbName; // 2665
				WordSwapC<short unsigned int>(short unsigned int w); // 268
				CBigEndianValue<short unsigned int>::operator=(
						short unsigned int val);  // 2655
				CUtlString::CUtlString(
						const char* pString);  // 2665
				CUtlString::Get(); // 2668
				CUtlString::~CUtlString(); // 2669
				CBigEndianValue<unsigned char>::CBigEndianValue(); // 285
				CBigEndianValue<short unsigned int>::CBigEndianValue(); // 285
				CBigEndianValue<unsigned int>::CBigEndianValue(); // 285
				CBigEndianValue<unsigned int>::CBigEndianValue(); // 285
				CBigEndianValue<unsigned int>::CBigEndianValue(); // 285
				memset(void* __dest,
					int __ch,
					size_t __len);  // 67
				V_memset(void* dest,
					int fill,
					size_t count);  // 285
				RenderPipelineStatsBufferInfo_t::RenderPipelineStatsBufferInfo_t(); // 2650
				DWordSwapC<unsigned int>(unsigned int dw); // 272
				CBigEndianValue<unsigned int>::operator=(
						unsigned int val);  // 2652
				CVertexBufferBase::GetBufferType(); // 2653
				CVertexBufferBase::GetVertexSize(); // 2661
				WordSwapC<short unsigned int>(short unsigned int w); // 268
				CBigEndianValue<short unsigned int>::operator=(
						short unsigned int val);  // 2661
				CVertexBufferBase::GetVertexCapacity(); // 2663
				DWordSwapC<unsigned int>(unsigned int dw); // 272
				CBigEndianValue<unsigned int>::operator=(
						unsigned int val);  // 2663
				DWordSwapC<unsigned int>(unsigned int dw); // 272
				CBigEndianValue<unsigned int>::operator=(
						unsigned int val);  // 2662
			}
			CUtlIntrusiveList<CVertexBufferBase>::Head(); // 2648
		}
		{
			CIndexBufferBase* pIB; // 2671
			{
				RenderPipelineStatsBufferInfo_t bi; // 2673
				CUtlString ibName; // 2688
				WordSwapC<short unsigned int>(short unsigned int w); // 268
				CBigEndianValue<short unsigned int>::operator=(
						short unsigned int val);  // 2678
				CUtlString::CUtlString(
						const char* pString);  // 2688
				CUtlString::Get(); // 2691
				CUtlString::~CUtlString(); // 2692
				CBigEndianValue<unsigned char>::CBigEndianValue(); // 285
				CBigEndianValue<short unsigned int>::CBigEndianValue(); // 285
				CBigEndianValue<unsigned int>::CBigEndianValue(); // 285
				CBigEndianValue<unsigned int>::CBigEndianValue(); // 285
				CBigEndianValue<unsigned int>::CBigEndianValue(); // 285
				memset(void* __dest,
					int __ch,
					size_t __len);  // 67
				V_memset(void* dest,
					int fill,
					size_t count);  // 285
				RenderPipelineStatsBufferInfo_t::RenderPipelineStatsBufferInfo_t(); // 2673
				CBigEndianValue<unsigned char>::operator=(
						unsigned char val);  // 2674
				DWordSwapC<unsigned int>(unsigned int dw); // 272
				CBigEndianValue<unsigned int>::operator=(
						unsigned int val);  // 2675
				CIndexBufferBase::GetBufferType(); // 2676
				CIndexBufferBase::GetIndexSize(); // 2684
				WordSwapC<short unsigned int>(short unsigned int w); // 268
				CBigEndianValue<short unsigned int>::operator=(
						short unsigned int val);  // 2684
				CIndexBufferBase::GetIndexCapacity(); // 2686
				DWordSwapC<unsigned int>(unsigned int dw); // 272
				CBigEndianValue<unsigned int>::operator=(
						unsigned int val);  // 2686
				DWordSwapC<unsigned int>(unsigned int dw); // 272
				CBigEndianValue<unsigned int>::operator=(
						unsigned int val);  // 2685
			}
			CUtlIntrusiveList<CIndexBufferBase>::Head(); // 2671
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
				int nLineNumber);  // 2644
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
				int nLineNumber);  // 2645
		ListLength<CIndexBufferBase>(CIndexBufferBase* head); // 1026
		CUtlIntrusiveList<CIndexBufferBase>::Count(); // 2647
		ListLength<CVertexBufferBase>(CVertexBufferBase* head); // 1026
		CUtlIntrusiveList<CVertexBufferBase>::Count(); // 2647
		CUtlBuffer::IsText(); // 1238
		CByteswap::IsSwappingBytes(); // 1208
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<int>(
				int src);  // 1204
		{
		}
		{
			int i; // 200
			{
				int i; // 214
			}
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 218
			LowLevelByteSwap<int>(int* output,
						int* input);  // 202
		}
		CByteswap::SwapBufferToTargetEndian<int>(
						int* outputBuffer,
						int* inputBuffer,
						int count);  // 170
		CByteswap::SwapBufferToTargetEndian<int>(
						int* outputBuffer,
						int* inputBuffer,
						int count);  // 1214
		CUtlBuffer::PutTypeBin<int>(
				int src);  // 1240
		GetFmtStr<int>(int nRadix,
				bool bPrint);  // 1244
		CUtlBuffer::PutType<int>(
				int src);  // 1236
		CUtlBuffer::PutType<int>(
				int src);  // 1335
		CUtlBuffer::PutInt(
			int i);  // 2647
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2693
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2693
	}
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 2695
} /* size: 0, variables: 1, inline expansions: 6 (104 bytes) */

// <00181865> rendersystem/renderdevicebase.cpp:2697
// variables: 2
// function calls: 28
void CRenderDeviceBase::RegisterMaxSwapChainDimensionsChangedListener(IMaxSwapChainDimensionsChangedListener* pCallback)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2699; // 2699
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
			int nLineNumber);  // 2699
	{
		int i; // 1531
		CUtlVectorBase<IMaxSwapChainDimensionsChangedListener::Count(); // 1531
		CUtlMemory<IMaxSwapChainDimensionsChangedListener::operator[](
				int i);  // 609
		CUtlVectorBase<IMaxSwapChainDimensionsChangedListener::Element(
			int i);  // 1533
	}
	CUtlVectorBase<IMaxSwapChainDimensionsChangedListener::Find(
		IMaxSwapChainDimensionsChangedListener* const& src);  // 2700
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2705
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2705
	CUtlMemory<IMaxSwapChainDimensionsChangedListener::NumAllocated(); // 1196
	CUtlMemory<IMaxSwapChainDimensionsChangedListener::operator[](
			int i);  // 602
	CUtlVectorBase<IMaxSwapChainDimensionsChangedListener::Element(
		int i);  // 1201
	CopyConstruct<IMaxSwapChainDimensionsChangedListener*>(IMaxSwapChainDimensionsChangedListener** pMemory,
								IMaxSwapChainDimensionsChangedListener* const& src);  // 1201
	CUtlMemory<IMaxSwapChainDimensionsChangedListener::IsGrowable(); // 823
	CUtlMemory<IMaxSwapChainDimensionsChangedListener::IsExternallyAllocated(); // 859
	CUtlMemory<IMaxSwapChainDimensionsChangedListener::IsExternallyAllocated(); // 861
	CUtlMemory<IMaxSwapChainDimensionsChangedListener::Grow(
		int num);  // 806
	CUtlVectorBase<IMaxSwapChainDimensionsChangedListener::ResetDbgInfo(); // 824
	CUtlVectorBase<IMaxSwapChainDimensionsChangedListener::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<IMaxSwapChainDimensionsChangedListener::AddToTail(
			IMaxSwapChainDimensionsChangedListener* const& src);  // 2704
} /* size: 496, variables: 1, inline expansions: 25 (1236 bytes) */

// <00181257> rendersystem/renderdevicebase.cpp:2707
// variables: 2
// function calls: 23
void CRenderDeviceBase::UnregisterMaxSwapChainDimensionsChangedListener(IMaxSwapChainDimensionsChangedListener* pCallback)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2709; // 2709
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
			int nLineNumber);  // 2709
	{
		int i; // 1531
		CUtlVectorBase<IMaxSwapChainDimensionsChangedListener::Count(); // 1531
		CUtlMemory<IMaxSwapChainDimensionsChangedListener::operator[](
				int i);  // 609
		CUtlVectorBase<IMaxSwapChainDimensionsChangedListener::Element(
			int i);  // 1533
	}
	CUtlVectorBase<IMaxSwapChainDimensionsChangedListener::Find(
		IMaxSwapChainDimensionsChangedListener* const& src);  // 1617
	CUtlMemory<IMaxSwapChainDimensionsChangedListener::operator[](
			int i);  // 602
	CUtlVectorBase<IMaxSwapChainDimensionsChangedListener::Element(
		int i);  // 1114
	CUtlMemory<IMaxSwapChainDimensionsChangedListener::operator[](
			int i);  // 602
	CUtlVectorBase<IMaxSwapChainDimensionsChangedListener::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<IMaxSwapChainDimensionsChangedListener::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<IMaxSwapChainDimensionsChangedListener::Remove(
		int elem);  // 1620
	CUtlVectorBase<IMaxSwapChainDimensionsChangedListener::FindAndRemove(
			IMaxSwapChainDimensionsChangedListener* const& src);  // 2710
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2711
} /* size: 292, variables: 1, inline expansions: 20 (791 bytes) */

// <0018120B> rendersystem/renderdevicebase.cpp:2713
void CRenderDeviceBase::GetCurrentMaxSwapChainDimensions(int* pWidthOut, int* pHeightOut)
{
} /* size: 21 */

// <0018116D> rendersystem/renderdevicebase.cpp:2719
// variables: 2
void CRenderDeviceBase::UpdateMaxSwapChainDimensionsAndNotifyListeners()
{
	int32 nNewMax3DWindowWidth; // 2721
	int32 nNewMax3DWindowHeight; // 2722
} /* size: 150, variables: 2 */

// <00180D51> rendersystem/renderdevicebase.cpp:2734
// variables: 2
// function calls: 13
void CRenderDeviceBase::UpdateMaxSwapChainDimensionsChangedListeners(int nNewMaxWidth, int nNewMaxHeight)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2736; // 2736
	{
		int i; // 2737
		CUtlVectorBase<IMaxSwapChainDimensionsChangedListener::Count(); // 2737
		CUtlMemory<IMaxSwapChainDimensionsChangedListener::operator[](
				int i);  // 588
		CUtlVectorBase<IMaxSwapChainDimensionsChangedListener::operator[](
				int i);  // 2739
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
			int nLineNumber);  // 2736
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2741
} /* size: 250, variables: 1, inline expansions: 10 (427 bytes) */

// <00180B01> rendersystem/renderdevicebase.cpp:2743
// variable: 1
// function calls: 8
void CRenderDeviceBase::ComputeMaxSwapChainDimensions(int32* pMaxWidthOut, int32* pMaxHeightOut)
{
	{
		SwapChainIndex_t h; // 2748
		CUtlLinkedList<CSwapChainBase::Head(); // 2748
		CSwapChainBase::GetWidth(); // 2750
		Max<int>(const int& val1,
			const int& val2);  // 2750
		CSwapChainBase::GetHeight(); // 2751
		Max<int>(const int& val1,
			const int& val2);  // 2751
		CUtlLinkedList<CSwapChainBase::Next(
			long long int i);  // 2748
		CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::operator[](
				intp i);  // 500
		CUtlLinkedList<CSwapChainBase::operator[](
				long long int i);  // 2750
	}
} /* size: 175 */

// <001805DF> rendersystem/renderdevicebase.cpp:2755
// variables: 2
// function calls: 15
void CRenderDeviceBase::AddSwapChain(CSwapChainBase* pSwapChain)
{
	SwapChainIndex_t i; // 2757
	CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::IsValidIterator(
			const Iterator_t& it);  // 81
	CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::IsValidIterator(
			const Iterator_t& it);  // 82
	CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::HeaderToBlock(
			const BlockHeader_t* pHeader);  // 131
	CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::IsInBlock(
			intp i,
			BlockHeader_t* pBlockHeader);  // 85
	CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::GetIndex(
		const Iterator_t& it);  // 86
	{
		BlockHeader_t* pbh; // 88
		CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::HeaderToBlock(
				const BlockHeader_t* pHeader);  // 131
		CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::IsInBlock(
				intp i,
				BlockHeader_t* pBlockHeader);  // 90
	}
	{
	}
	CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::IsIdxAfter(
			intp i,
			const Iterator_t& it);  // 591
	CUtlLinkedList<CSwapChainBase::IsValidIndex(
			long long int i);  // 977
	CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::operator[](
			intp i);  // 367
	CUtlLinkedList<CSwapChainBase::InternalElement(
			long long int i);  // 1011
	{
	}
	CUtlLinkedList<CSwapChainBase::LinkBefore(
			long long int before,
			long long int elem);  // 822
	CopyConstruct<CSwapChainBase*>(CSwapChainBase** pMemory,
					CSwapChainBase* const& src);  // 825
	CUtlLinkedList<CSwapChainBase::InsertBefore(
			long long int before,
			CSwapChainBase* const& src);  // 856
	CUtlLinkedList<CSwapChainBase::AddToTail(
			CSwapChainBase* const& src);  // 2757
} /* size: 0, variables: 1, inline expansions: 13 (1644 bytes) */

// <001B6F32> rendersystem/renderdevicebase.cpp:2763
// variables: 2
// function calls: 17
void CRenderDeviceBase::DestroySwapChain(SwapChainHandle_t hSwapChain)
{
	{
		SwapChainIndex_t h; // 2767
		CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 337
		CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 337
		CSwapChainBase::~CSwapChainBase(); // 337
		CSwapChainBase::~CSwapChainBase(); // 2768
		CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::IsValidIterator(
				const Iterator_t& it);  // 81
		CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::IsValidIterator(
				const Iterator_t& it);  // 82
		CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::HeaderToBlock(
				const BlockHeader_t* pHeader);  // 131
		CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::IsInBlock(
				intp i,
				BlockHeader_t* pBlockHeader);  // 85
		{
			BlockHeader_t* pbh; // 88
			CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::HeaderToBlock(
					const BlockHeader_t* pHeader);  // 131
			CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::IsInBlock(
					intp i,
					BlockHeader_t* pBlockHeader);  // 90
		}
		CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::GetIndex(
			const Iterator_t& it);  // 86
		{
		}
		CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::IsIdxAfter(
				intp i,
				const Iterator_t& it);  // 591
		CUtlLinkedList<CSwapChainBase::IsValidIndex(
				long long int i);  // 749
		Destruct<CSwapChainBase*>(CSwapChainBase** pMemory); // 753
		{
		}
		CUtlLinkedList<CSwapChainBase::Free(
			long long int elem);  // 907
		CUtlLinkedList<CSwapChainBase::Remove(
			long long int elem);  // 2770
	}
	CRenderDeviceBase::DestroySwapChain(
			SwapChainHandle_t hSwapChain);  // 2763
} /* size: 0, inline expansions: 1 (406 bytes) */

// <001805AC> rendersystem/renderdevicebase.cpp:2763
// variable: 1
void CRenderDeviceBase::DestroySwapChain(SwapChainHandle_t hSwapChain)
{
	{
		SwapChainIndex_t h; // 2767
	}
} /* size: 0 */

// <00180377> rendersystem/renderdevicebase.cpp:2774
// variable: 1
// function calls: 8
void CRenderDeviceBase::DestroyAllSwapChains()
{
	{
		SwapChainIndex_t h; // 2776
		CUtlLinkedList<CSwapChainBase::Head(); // 2776
		CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 337
		CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 337
		CSwapChainBase::~CSwapChainBase(); // 337
		CSwapChainBase::~CSwapChainBase(); // 2778
		CUtlLinkedList<CSwapChainBase::Next(
			long long int i);  // 2776
		CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::operator[](
				intp i);  // 494
		CUtlLinkedList<CSwapChainBase::operator[](
				long long int i);  // 2778
	}
} /* size: 177 */

// <001B05D6> rendersystem/renderdevicebase.cpp:2784
// variable: 1
// function call: 1
void CRenderDeviceBase::CanRenderToSwapChain(SwapChainHandle_t hSwapChain)
{
	{
		const RenderDeviceInfo_t& info; // 2788
	}
	CRenderDeviceBase::CanRenderToSwapChain(
				SwapChainHandle_t hSwapChain);  // 2784
} /* size: 84, inline expansions: 1 (36 bytes) */

// <00180342> rendersystem/renderdevicebase.cpp:2784
// variable: 1
void CRenderDeviceBase::CanRenderToSwapChain(SwapChainHandle_t hSwapChain)
{
	{
		const RenderDeviceInfo_t& info; // 2788
	}
} /* size: 0 */

// <001AFC81> rendersystem/renderdevicebase.cpp:2794
// variable: 1
// function calls: 10
void CRenderDeviceBase::GetSwapChainTexture(SwapChainHandle_t hSwapChain, SwapChainBuffer_t buffer)
{
	const CSwapChainBase* pSwapChain; // 2796
	CRenderDeviceBase::GetSwapChain<CSwapChainBase>(
					SwapChainHandle_t hSwapChain);  // 2796
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 344
	CSwapChainBase::GetColorTexture(); // 2798
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 345
	CSwapChainBase::GetDepthTexture(); // 2798
} /* size: 40, variables: 1, inline expansions: 10 (48 bytes) */

// <00180302> rendersystem/renderdevicebase.cpp:2794
// variable: 1
void CRenderDeviceBase::GetSwapChainTexture(SwapChainHandle_t hSwapChain, SwapChainBuffer_t buffer)
{
	const CSwapChainBase* pSwapChain; // 2796
} /* size: 0, variables: 1 */

// <0017FF14> rendersystem/renderdevicebase.cpp:2803
// variables: 3
// function calls: 15
void CRenderDeviceBase::GetSwapChainFromTexture(HRenderTexture hTexture, SwapChainHandle_t* pSwapChain, SwapChainBuffer_t* pBuffer)
{
	SwapChainIndex_t h; // 2815
	const char   __FUNCTION__; // 2842
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2833
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2805
	CUtlLinkedList<CSwapChainBase::Head(); // 2816
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 2818
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 345
	CSwapChainBase::GetDepthTexture(); // 2825
	CUtlLinkedList<CSwapChainBase::Next(
		long long int i);  // 2816
	CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::operator[](
			intp i);  // 494
	CUtlLinkedList<CSwapChainBase::operator[](
			long long int i);  // 2818
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 344
	CSwapChainBase::GetColorTexture(); // 2818
} /* size: 0, variables: 2, inline expansions: 15 (41 bytes) */

// <0017D884> rendersystem/renderdevicebase.cpp:2803
// variables: 3
// function calls: 15
void CRenderDeviceBase::GetSwapChainFromTexture(HRenderTexture hTexture, SwapChainHandle_t* pSwapChain, SwapChainBuffer_t* pBuffer)
{
	SwapChainIndex_t h; // 2815
	const char   __FUNCTION__; // 32217
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2833
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2805
	CUtlLinkedList<CSwapChainBase::Head(); // 2816
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 2818
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 345
	CSwapChainBase::GetDepthTexture(); // 2825
	CUtlLinkedList<CSwapChainBase::Next(
		long long int i);  // 2816
	CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::operator[](
			intp i);  // 494
	CUtlLinkedList<CSwapChainBase::operator[](
			long long int i);  // 2818
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 344
	CSwapChainBase::GetColorTexture(); // 2818
} /* size: 0, variables: 2, inline expansions: 15 (41 bytes) */

// <0017FE4F> rendersystem/renderdevicebase.cpp:2839
// variable: 1
// function calls: 2
void CRenderDeviceBase::GetSwapChainPlatWindow(SwapChainHandle_t hSwapChain)
{
	const CSwapChainBase* pSwapChain; // 2841
	CRenderDeviceBase::GetSwapChain<CSwapChainBase>(
					SwapChainHandle_t hSwapChain);  // 2841
	CSwapChainBase::GetPlatWindowHandle(); // 2844
} /* size: 35, variables: 1, inline expansions: 2 (12 bytes) */

// <0017FD8A> rendersystem/renderdevicebase.cpp:2849
// variable: 1
// function calls: 2
void CRenderDeviceBase::GetSwapChainOsSpecificWindow(SwapChainHandle_t hSwapChain)
{
	const CSwapChainBase* pSwapChain; // 2851
	CRenderDeviceBase::GetSwapChain<CSwapChainBase>(
					SwapChainHandle_t hSwapChain);  // 2851
	CSwapChainBase::GetOsSpecificWindowHandle(); // 2854
} /* size: 35, variables: 1, inline expansions: 2 (12 bytes) */

// <0017FCB7> rendersystem/renderdevicebase.cpp:2859
// function calls: 2
void CRenderDeviceBase::IsTextureSwapChain(HRenderTexture hTexture)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 2861
} /* size: 77, inline expansions: 2 (14 bytes) */

// <0017FC27> rendersystem/renderdevicebase.cpp:2867
// variable: 1
// function call: 1
void CRenderDeviceBase::GetBackBufferFormat(SwapChainHandle_t hSwapChain)
{
	const CSwapChainBase* pSwapChain; // 2869
	CRenderDeviceBase::GetSwapChain<CSwapChainBase>(
					SwapChainHandle_t hSwapChain);  // 2869
} /* size: 30, variables: 1, inline expansions: 1 (8 bytes) */

// <0017FAE0> rendersystem/renderdevicebase.cpp:2875
// variable: 1
// function calls: 3
void CRenderDeviceBase::GetBackBufferDimensions(SwapChainHandle_t hSwapChain, int* pWidth, int* pHeight)
{
	const CSwapChainBase* pSwapChain; // 2877
	CRenderDeviceBase::GetSwapChain<CSwapChainBase>(
					SwapChainHandle_t hSwapChain);  // 2877
	CSwapChainBase::GetWidth(); // 2880
	CSwapChainBase::GetHeight(); // 2881
} /* size: 142, variables: 1, inline expansions: 3 (14 bytes) */

// <001B0380> rendersystem/renderdevicebase.cpp:2893
// variable: 1
// function calls: 8
void CRenderDeviceBase::GetSwapChainInfo(SwapChainHandle_t hSwapChain)
{
	const CSwapChainBase* pSwapChain; // 2895
	CRenderDeviceBase::GetSwapChain<CSwapChainBase>(
					SwapChainHandle_t hSwapChain);  // 2895
	CSwapChainBase::GetRenderDeviceInfo(); // 2897
	V_memset(void* dest,
		int fill,
		size_t count);  // 213
	RenderDisplayMode_t::RenderDisplayMode_t(); // 239
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 239
	RenderDeviceInfo_t::RenderDeviceInfo_t(); // 2899
	CRenderDeviceBase::GetSwapChainInfo(
			SwapChainHandle_t hSwapChain);  // 2893
} /* size: 171, variables: 1, inline expansions: 8 (301 bytes) */

// <0017FA96> rendersystem/renderdevicebase.cpp:2893
// variables: 2
void CRenderDeviceBase::GetSwapChainInfo(SwapChainHandle_t hSwapChain)
{
	const CSwapChainBase* pSwapChain; // 2895
	RenderDeviceInfo_t errorInfo; // 2899
} /* size: 0, variables: 2 */

// <0016AFF3> rendersystem/renderdevicebase.cpp:2906
// member functions: 6
// member variables: 3
// class size: 12
class CPresentWaitTimer {
private:
	int m_nWaits; /* 0 4 */
	float m_flWaitBeginTime; /* 4 4 */
	bool m_bWarningDisplayed; /* 8 1 */
	/* rendersystem/renderdevicebase.cpp:2912 */
	void CPresentWaitTimer(CPresentWaitTimer* );
	/* rendersystem/renderdevicebase.cpp:2918 */
	void Begin(CPresentWaitTimer* );
	/* rendersystem/renderdevicebase.cpp:2934 */
	void End(CPresentWaitTimer* );
	void CPresentWaitTimer(class CPresentWaitTimer *); /* linkage=_ZN17CPresentWaitTimerC4Ev */
	void Begin(class CPresentWaitTimer *); /* linkage=_ZN17CPresentWaitTimer5BeginEv */
	void End(class CPresentWaitTimer *); /* linkage=_ZN17CPresentWaitTimer3EndEv */
};

// <0017FA7F> rendersystem/renderdevicebase.cpp:2912
void CPresentWaitTimer::CPresentWaitTimer()
{
} /* size: 0 */

// <0017FA66> rendersystem/renderdevicebase.cpp:2912
inline void CPresentWaitTimer::CPresentWaitTimer()
{
} /* size: 0 */

// <0017FA31> rendersystem/renderdevicebase.cpp:2918
// variables: 2
inline void CPresentWaitTimer::Begin()
{
	{
		float flNowWaitTime; // 2926
		float flWaitTime; // 2926
	}
} /* size: 0 */

// <0017F9FC> rendersystem/renderdevicebase.cpp:2934
// variables: 2
inline void CPresentWaitTimer::End()
{
	{
		float flWaitEndTime; // 2938
		float flEndTime; // 2938
	}
} /* size: 0 */

// <001B66D7> rendersystem/renderdevicebase.cpp:2949
// function call: 1
void CSwapChainBase::HasOutstandingPresents()
{
	CInterlockedIntT<int, 4>::operator int(); // 2952
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0017F9E3> rendersystem/renderdevicebase.cpp:2949
void CSwapChainBase::HasOutstandingPresents()
{
} /* size: 0 */

// <0017F560> rendersystem/renderdevicebase.cpp:2961
// variables: 7
// function calls: 17
void CSwapChainBase::WaitOnPresent()
{
	volatile int  nOutstandingPresents; // 2972
	{
		int nWaitIterations; // 2976
		CPresentWaitTimer presentTimer; // 2978
		int nLoopCount; // 2979
		int i; // 2980
		ThreadInterlockedIncrement64(volatile int64* p); // 579
		CInterlockedIntT<long long int, 8>::operator++(); // 582
		CInterlockedIntT<long long int, 8>::operator++(
				int);  // 2975
		CPresentWaitTimer::CPresentWaitTimer(); // 2978
		CPresentWaitTimer::Begin(); // 2983
		CInterlockedIntT<int, 4>::GetRaw(); // 2986
		CInterlockedIntT<int, 4>::GetRaw(); // 2986
		{
			float flWaitEndTime; // 2938
			float flEndTime; // 2938
		}
		CPresentWaitTimer::End(); // 2934
		CPresentWaitTimer::End(); // 2994
		ThreadInterlockedIncrement64(volatile int64* p); // 579
		CInterlockedIntT<long long int, 8>::operator++(); // 582
		CInterlockedIntT<long long int, 8>::operator++(
				int);  // 2999
	}
	ThreadInterlockedIncrement64(volatile int64* p); // 579
	CInterlockedIntT<long long int, 8>::operator++(); // 582
	CInterlockedIntT<long long int, 8>::operator++(
			int);  // 2970
	CInterlockedIntT<int, 4>::GetRaw(); // 2972
	CInterlockedIntT<int, 4>::GetRaw(); // 2972
} /* size: 351, variables: 1, inline expansions: 5 (39 bytes) */

// <0017D3AA> rendersystem/renderdevicebase.cpp:2961
void CSwapChainBase::WaitOnPresent()
{
} /* size: 0 */

// <001B6732> rendersystem/renderdevicebase.cpp:3009
// function calls: 5
void CSwapChainBase::OnPresentQueued(int nPresentId)
{
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 3012
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 3013
} /* size: 0, inline expansions: 5 (0 bytes) */

// <0017F53A> rendersystem/renderdevicebase.cpp:3009
void CSwapChainBase::OnPresentQueued(int nPresentId)
{
} /* size: 0 */

// <001B6882> rendersystem/renderdevicebase.cpp:3018
// function calls: 5
void CSwapChainBase::OnPresentCompleted(int nPresentId)
{
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 3021
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 3022
} /* size: 0, inline expansions: 5 (0 bytes) */

// <0017F514> rendersystem/renderdevicebase.cpp:3018
void CSwapChainBase::OnPresentCompleted(int nPresentId)
{
} /* size: 0 */

// <001B69D2> rendersystem/renderdevicebase.cpp:3026
// function call: 1
void CSwapChainBase::WaitForOutstandingPresents()
{
	CInterlockedIntT<int, 4>::operator int(); // 3029
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0017F4FB> rendersystem/renderdevicebase.cpp:3026
void CSwapChainBase::WaitForOutstandingPresents()
{
} /* size: 0 */

// <0017F468> rendersystem/renderdevicebase.cpp:3036
// function call: 1
void CPipelineFence::CPipelineFence()
{
	CInterlockedIntT<int, 4>::CInterlockedIntT(
			int value);  // 3037
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0017F44B> rendersystem/renderdevicebase.cpp:3036
void CPipelineFence::CPipelineFence()
{
} /* size: 0 */

// <001B6A3F> rendersystem/renderdevicebase.cpp:3042
// function calls: 3
void CPipelineFence::AddRef()
{
	CInterlockedIntT<int, 4>::GetRaw(); // 3044
	{
	}
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 3045
} /* size: 0, inline expansions: 3 (26 bytes) */

// <0017F3EF> rendersystem/renderdevicebase.cpp:3042
// variables: 2
void CPipelineFence::AddRef()
{
	const char   __FUNCTION__; // 2388
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3044
	}
} /* size: 0, variables: 1 */

// <0017D239> rendersystem/renderdevicebase.cpp:3042
// variables: 2
void CPipelineFence::AddRef()
{
	const char   __FUNCTION__; // 31768
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3044
	}
} /* size: 0, variables: 1 */

// <001B6AED> rendersystem/renderdevicebase.cpp:3048
// variable: 1
// function calls: 5
void CPipelineFence::Release()
{
	int nRet; // 3050
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 3050
	CThreadEvent::~CThreadEvent(); // 262
	CPipelineFence::~CPipelineFence(); // 3053
	CPipelineFence::Release(); // 3048
} /* size: 80, variables: 1, inline expansions: 5 (104 bytes) */

// <0017F391> rendersystem/renderdevicebase.cpp:3048
// variable: 1
void CPipelineFence::Release()
{
	int nRet; // 3050
} /* size: 0, variables: 1 */

// <0017F340> rendersystem/renderdevicebase.cpp:3058
void CPipelineFence::SetCompleted()
{
} /* size: 13 */

// <001B6C23> rendersystem/renderdevicebase.cpp:3063
void CPipelineFence::WaitCompleted(uint32 nTimeout)
{
} /* size: 13 */

// <001B6C7F> rendersystem/renderdevicebase.cpp:3068
// function calls: 2
void CRenderDeviceBase::AllocateFence()
{
	CInterlockedIntT<int, 4>::CInterlockedIntT(
			int value);  // 3037
	CPipelineFence::CPipelineFence(); // 3070
} /* size: 55, inline expansions: 2 (26 bytes) */

// <0017F2FD> rendersystem/renderdevicebase.cpp:3068
void CRenderDeviceBase::AllocateFence()
{
} /* size: 0 */

// <0017F29D> rendersystem/renderdevicebase.cpp:3073
// function call: 1
void CDeviceFence::CDeviceFence()
{
	CInterlockedIntT<int, 4>::CInterlockedIntT(
			int value);  // 3074
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0017F284> rendersystem/renderdevicebase.cpp:3073
void CDeviceFence::CDeviceFence()
{
} /* size: 0 */

// <001AF993> rendersystem/renderdevicebase.cpp:3078
void CDeviceFence::~CDeviceFence()
{
	{
		{
		}
	}
} /* size: 23 */

// <0017F1F1> rendersystem/renderdevicebase.cpp:3078
// function call: 1
void CDeviceFence::~CDeviceFence()
{
	{
		{
		}
	}
	{
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 3080
	}
} /* size: 0 */

// <0017F0F8> rendersystem/renderdevicebase.cpp:3078
// function calls: 2
void CDeviceFence::~CDeviceFence()
{
	{
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 3080
	}
	CDeviceFence::~CDeviceFence(); // 3081
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0017F0BB> rendersystem/renderdevicebase.cpp:3078
// variables: 2
void CDeviceFence::~CDeviceFence()
{
	const char   __FUNCTION__; // 2577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3080
	}
} /* size: 0, variables: 1 */

// <0017CEC2> rendersystem/renderdevicebase.cpp:3078
// variables: 2
void CDeviceFence::~CDeviceFence()
{
	const char   __FUNCTION__; // 31952
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3080
	}
} /* size: 0, variables: 1 */

// <001B6D3C> rendersystem/renderdevicebase.cpp:3083
// function calls: 3
void CDeviceFence::AddRef()
{
	CInterlockedIntT<int, 4>::GetRaw(); // 3085
	{
	}
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 3086
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0017F063> rendersystem/renderdevicebase.cpp:3083
// variables: 2
void CDeviceFence::AddRef()
{
	const char   __FUNCTION__; // 2388
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3085
	}
} /* size: 0, variables: 1 */

// <0017CDD2> rendersystem/renderdevicebase.cpp:3083
// variables: 2
// function calls: 3
void CDeviceFence::AddRef()
{
	const char   __FUNCTION__; // 31768
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3085
	}
	CInterlockedIntT<int, 4>::GetRaw(); // 3085
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 3086
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <001B6DEA> rendersystem/renderdevicebase.cpp:3089
// variable: 1
// function calls: 4
void CDeviceFence::Release()
{
	int nRet; // 3091
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 3091
	CDeviceFenceBase::ReachedZeroReferences(); // 3094
	CDeviceFence::Release(); // 3089
} /* size: 79, variables: 1, inline expansions: 4 (52 bytes) */

// <0017F03D> rendersystem/renderdevicebase.cpp:3089
// variable: 1
void CDeviceFence::Release()
{
	int nRet; // 3091
} /* size: 0, variables: 1 */

// <0017EDF5> rendersystem/renderdevicebase.cpp:3100
// variables: 3
// function calls: 6
void* CRenderDeviceBase::AllocatePooledBackingStore(PooledBackingStoreType_t poolType, int nSize)
{
	const char   __FUNCTION__; // 2923
	void* pMemory; // 3108
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3103
	}
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 59
	CUtlMemoryPool<TSPointerListNode_t>::Free(
		TSPointerListNode_t* pMem);  // 63
	CTSPointerList<void>::PopItem(
		void** pResult);  // 3109
} /* size: 0, variables: 2, inline expansions: 6 (333 bytes) */

// <0017CB64> rendersystem/renderdevicebase.cpp:3100
// variables: 3
// function calls: 6
void* CRenderDeviceBase::AllocatePooledBackingStore(PooledBackingStoreType_t poolType, int nSize)
{
	const char   __FUNCTION__; // 32298
	void* pMemory; // 3108
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3103
	}
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 59
	CUtlMemoryPool<TSPointerListNode_t>::Free(
		TSPointerListNode_t* pMem);  // 63
	CTSPointerList<void>::PopItem(
		void** pResult);  // 3109
} /* size: 0, variables: 2, inline expansions: 6 (0 bytes) */

// <0017EC33> rendersystem/renderdevicebase.cpp:3116
// function calls: 6
void CRenderDeviceBase::FreePooledBackingStore(PooledBackingStoreType_t poolType, void* pMemory)
{
	CUtlMemoryPool<TSPointerListNode_t>::Alloc(); // 52
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 54
	CTSPointerList<void>::PushItem(
		void* const& init);  // 3118
} /* size: 146, inline expansions: 6 (240 bytes) */

// <0017E3DF> rendersystem/renderdevicebase.cpp:3121
// variables: 3
// function calls: 26
void CRenderDeviceBase::AsyncSetTextureData(HRenderTexture hTexture, const CTextureDesc* pDataDesc, const void* pData, int nDataSize, int nSpecificMipLevelToSet, const Rect3D_t* pSubRectToUpdate, uint32 nTextureUpdateFlags, const DataRecycleDelegate_t* pDataRecycleDelegate, RenderAsyncTextureUpdateFlags_t nAsyncTextureUpdateFlags)
{
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_3125; // 3125
	bool bUpdateOncePerFrame; // 3130
	CRenderContextPtr pRenderContext; // 3149
	CTextureManagerBase::GetTextureManagerRWLock(); // 3125
	CInterlockedIntT<int, 4>::GetRaw(); // 3180
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<unsigned int, 4>::AtomicAdd(
			unsigned int add);  // 3189
	CThreadRWLock_FastRead::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 959
	Lock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::CAutoLockT(
			const CThreadRWLock_FastRead& lock,
			const char* pFilename,
			int nLineNumber);  // 3125
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3133
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3147
	CRenderContextPtr::CRenderContextPtr<>(
				IRenderDevice* pDevice,
				const char* pDebugStringFmt);  // 3149
	CRenderContextPtr::operator->(); // 3150
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3150
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3154
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 3156
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 3156
	ClosurePtr<void (detail::GenericClass::::GetClosureThis()(void const*), void (*)(void const*), void (*)(void const*)>* this); // 1150
	ClosurePtr<void (detail::GenericClass::::GetClosureMemPtr()(void const*), void (*)(void const*), void (*)(void const*)>* this); // 1150
	FastDelegate1<void const::operator(
			const void* p1);  // 3138
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 3156
} /* size: 640, variables: 3, inline expansions: 26 (925 bytes) */

// <0017E3B1> rendersystem/renderdevicebase.cpp:3159
void CRenderDeviceBase::GetInputLayoutMutex()
{
} /* size: 12 */

// <0017DF91> rendersystem/renderdevicebase.cpp:3165
// variables: 4
// function calls: 13
void CRenderDeviceBase::QueueFallbackTextureCopy(void* pAPITexture, void* pTextureData, int nTextureDataSize)
{
	void* pTextureDataCopy; // 3167
	const char   __FUNCTION__; // 2869
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3168
	}
	{
		FallbackTextureCopyRequest_t r; // 3172
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 3171
		CInterlockedIntT<int, 4>::operator int(); // 3173
		ThreadPause(void); // 208
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 203
		CTSListBase::Pop(); // 768
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 777
		Node_t::Node_t(); // 774
		CTSItemList<CRenderDeviceBase::FallbackTextureCopyRequest_t>::PushItem(
			const FallbackTextureCopyRequest_t& init);  // 3173
	}
} /* size: 396, variables: 2 */

// <0017BD18> rendersystem/renderdevicebase.cpp:3165
// variables: 4
// function calls: 13
void CRenderDeviceBase::QueueFallbackTextureCopy(void* pAPITexture, void* pTextureData, int nTextureDataSize)
{
	void* pTextureDataCopy; // 3167
	const char   __FUNCTION__; // 32244
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3168
	}
	{
		FallbackTextureCopyRequest_t r; // 3172
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 3171
		CInterlockedIntT<int, 4>::operator int(); // 3173
		ThreadPause(void); // 208
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 203
		CTSListBase::Pop(); // 768
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 777
		Node_t::Node_t(); // 774
		CTSItemList<CRenderDeviceBase::FallbackTextureCopyRequest_t>::PushItem(
			const FallbackTextureCopyRequest_t& init);  // 3173
	}
} /* size: 0, variables: 2 */

// <0017DF5D> rendersystem/renderdevicebase.cpp:3178
void CRenderDeviceBase::UpdateStats()
{
} /* size: 23 */

// <0017DBFD> rendersystem/renderdevicebase.cpp:3184
// variables: 4
// function calls: 10
void CRenderDeviceBase::PushRenderDeviceFlags(RenderDeviceFlag_t nFlags)
{
	uintp nNotifyFlags; // 3186
	bool bHaveNotificationLock; // 3187
	uintp nFlagsAsInteger; // 3189
	uintp nShifts; // 3190
	CInterlockedIntT<int, 4>::operator==(
			int rhs);  // 3196
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 3201
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3218
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
		unsigned int nSpinSleepTime);  // 3198
} /* size: 442, variables: 4, inline expansions: 10 (300 bytes) */

// <0017D89D> rendersystem/renderdevicebase.cpp:3222
// variables: 4
// function calls: 10
void CRenderDeviceBase::PopRenderDeviceFlags(RenderDeviceFlag_t nFlags)
{
	uintp nNotifyFlags; // 3224
	bool bHaveNotificationLock; // 3225
	uintp nFlagsAsInteger; // 3227
	uintp nShifts; // 3228
	CInterlockedIntT<int, 4>::operator==(
			int rhs);  // 3234
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 592
	CInterlockedIntT<int, 4>::operator--(
			int);  // 3239
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3256
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
		unsigned int nSpinSleepTime);  // 3236
} /* size: 444, variables: 4, inline expansions: 10 (288 bytes) */

// <0017D506> rendersystem/renderdevicebase.cpp:3261
// variables: 5
// function calls: 11
void CRenderDeviceBase::GetGPUFrameTimeMS(SwapChainHandle_t hSwapChain, float* pGPUFrameTimeMSOut, uint32* pFrameNumberOut)
{
	uint32 nLastGPUFrameTimeNumber; // 3269
	float flLastGPUFrameTimeMS; // 3270
	{
		SwapChainIndex_t h; // 3275
		{
			CSwapChainBase* pSwapChain; // 3277
			CUtlFixedMemory<UtlLinkedListElem_t<CSwapChainBase::operator[](
					intp i);  // 500
			CUtlLinkedList<CSwapChainBase::operator[](
					long long int i);  // 3277
			CSwapChainBase::GetLastGPUFrameTimeNumber(); // 3278
			Max<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 3278
			CSwapChainBase::GetLastGPUFrameTimeMS(); // 3279
		}
		CUtlLinkedList<CSwapChainBase::Head(); // 3275
		CUtlLinkedList<CSwapChainBase::Next(
			long long int i);  // 3275
	}
	{
		CSwapChainBase* pSwapChain; // 3284
		CSwapChainBase::GetLastGPUFrameTimeNumber(); // 3285
		CSwapChainBase::GetLastGPUFrameTimeMS(); // 3286
	}
	CInterlockedIntT<unsigned int, 4>::operator unsigned int(); // 198
	CRenderDeviceBase::GetDebugFlag(
			RenderDebugFlag_t nFlag);  // 3263
} /* size: 310, variables: 2, inline expansions: 2 (12 bytes) */

// <001B6EFA> rendersystem/renderdevicebase.cpp:3309
void CSwapChainBase::SetGPUFrameTimeMS(float flFrameTimeMS, uint32 nFrameNumber)
{
} /* size: 0 */

// <0017D405> rendersystem/renderdevicebase.cpp:3316
// variable: 1
// function call: 1
void CRenderDeviceBase::SetGPUFrameTimeMS(SwapChainHandle_t hSwapChain, float flFrameTimeMS, uint32 nFrameNumber)
{
	{
		CSwapChainBase* pSwapChain; // 3320
		CSwapChainBase::SetGPUFrameTimeMS(
					float flFrameTimeMS,
					uint32 nFrameNumber);  // 3323
	}
} /* size: 32 */

// <0017D39F> rendersystem/renderdevicebase.cpp:3329
void CRenderDeviceBase::ConvertTimestampToSeconds(uint64 nTimestamp)
{
} /* size: 135 */

// <0017D362> rendersystem/renderdevicebase.cpp:3343
void CRenderDeviceBase::SetTextureGlobalMipLODBias(float flMipLODBias)
{
} /* size: 13 */

// <001AF80A> rendersystem/renderdevicebase.cpp:3349
// function calls: 6
void CRenderDeviceBase::EnableAsyncPresent(bool bEnable)
{
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 3353
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 3357
	CInterlockedIntT<int, 4>::operator int(); // 3358
	{
	}
	CRenderDeviceBase::EnableAsyncPresent(
				bool bEnable);  // 3349
} /* size: 0, inline expansions: 6 (69 bytes) */

// <0017D318> rendersystem/renderdevicebase.cpp:3349
// variables: 2
void CRenderDeviceBase::EnableAsyncPresent(bool bEnable)
{
	const char   __FUNCTION__; // 2712
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3358
	}
} /* size: 0, variables: 1 */

// <0017B09F> rendersystem/renderdevicebase.cpp:3349
// variables: 2
void CRenderDeviceBase::EnableAsyncPresent(bool bEnable)
{
	const char   __FUNCTION__; // 32087
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3358
	}
} /* size: 0, variables: 1 */

// <001B3F86> rendersystem/renderdevicebase.cpp:3363
// variable: 1
// function calls: 7
void CRenderDeviceBase::StartRenderDocCapture(PlatWindow_t hWnd)
{
	{
		CRenderContextBasePtr pRenderContext; // 3367
		CRenderContextPtr::CRenderContextPtr<>(
					IRenderDevice* pDevice,
					const char* pDebugStringFmt);  // 356
		CRenderContextBasePtr::CRenderContextBasePtr(
					IRenderDevice* pDevice,
					const char* pDebugString);  // 3367
		CRenderContextBasePtr::operator->(); // 3368
		CRenderContextPtr::Release(); // 845
		CRenderContextPtr::~CRenderContextPtr(); // 341
		CRenderContextBasePtr::~CRenderContextBasePtr(); // 3370
	}
	CRenderDeviceBase::StartRenderDocCapture(
				PlatWindow_t hWnd);  // 3363
} /* size: 181, inline expansions: 1 (88 bytes) */

// <0017D2E3> rendersystem/renderdevicebase.cpp:3363
// variable: 1
void CRenderDeviceBase::StartRenderDocCapture(PlatWindow_t hWnd)
{
	{
		CRenderContextBasePtr pRenderContext; // 3367
	}
} /* size: 0 */

// <001B41FB> rendersystem/renderdevicebase.cpp:3376
// variable: 1
// function calls: 7
void CRenderDeviceBase::EndRenderDocCapture(PlatWindow_t hWnd)
{
	{
		CRenderContextBasePtr pRenderContext; // 3380
		CRenderContextPtr::CRenderContextPtr<>(
					IRenderDevice* pDevice,
					const char* pDebugStringFmt);  // 356
		CRenderContextBasePtr::CRenderContextBasePtr(
					IRenderDevice* pDevice,
					const char* pDebugString);  // 3380
		CRenderContextBasePtr::operator->(); // 3381
		CRenderContextPtr::Release(); // 845
		CRenderContextPtr::~CRenderContextPtr(); // 341
		CRenderContextBasePtr::~CRenderContextBasePtr(); // 3383
	}
	CRenderDeviceBase::EndRenderDocCapture(
				PlatWindow_t hWnd);  // 3376
} /* size: 181, inline expansions: 1 (88 bytes) */

// <0017D2AE> rendersystem/renderdevicebase.cpp:3376
// variable: 1
void CRenderDeviceBase::EndRenderDocCapture(PlatWindow_t hWnd)
{
	{
		CRenderContextBasePtr pRenderContext; // 3380
	}
} /* size: 0 */

// <0017D128> rendersystem/renderdevicebase.cpp:3389
// variables: 3
// function calls: 4
void CRenderDeviceBase::GetTextureViewIndex(HRenderTexture hTexture, RenderColorSpace_t colorSpace, RenderTextureDimension_t nDimension)
{
	const CTextureBase* pTexture; // 3391
	const char   __FUNCTION__; // 2739
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3397
	}
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 3391
	CTextureManagerBase::GetErrorTexture(
			RenderTextureDimension_t nDim);  // 3399
	CTextureBase::UniqueIndex(); // 3402
} /* size: 0, variables: 2, inline expansions: 4 (52 bytes) */

// <0017AEAF> rendersystem/renderdevicebase.cpp:3389
// variables: 3
// function calls: 4
void CRenderDeviceBase::GetTextureViewIndex(HRenderTexture hTexture, RenderColorSpace_t colorSpace, RenderTextureDimension_t nDimension)
{
	const CTextureBase* pTexture; // 3391
	const char   __FUNCTION__; // 32114
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3397
	}
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCTextureBase>(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource); // 3391
	CTextureManagerBase::GetErrorTexture(
			RenderTextureDimension_t nDim);  // 3399
	CTextureBase::UniqueIndex(); // 3402
} /* size: 0, variables: 2, inline expansions: 4 (52 bytes) */

// <0017D0FA> rendersystem/renderdevicebase.cpp:3405
void CRenderDeviceBase::GetGlobalLateBoundBindlessDescriptorSet()
{
} /* size: 7 */

// <0017CBFE> rendersystem/renderdevicebase.cpp:3411
// variables: 4
// function calls: 18
void CRenderDeviceBase::CreateIndexBufferPool()
{
	const uint  nInitalSizeMB; // 3413
	const uint  nInitialSize; // 3419
	BufferDesc_t poolDesc; // 3423
	_Head_base<1, std::default_delete<CPoolAllocator>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CPoolAllocator> >::_Tuple_impl(); // 303
	_Head_base<0, CPoolAllocator::_Head_base(); // 303
	_Tuple_impl<0, CPoolAllocator::_Tuple_impl(); // 966
	tuple<CPoolAllocator::tuple(); // 169
	__uniq_ptr_impl<CPoolAllocator, std::default_delete<CPoolAllocator> >::_M_ptr(); // 169
	__uniq_ptr_impl<CPoolAllocator, std::default_delete<CPoolAllocator> >::__uniq_ptr_impl(
			pointer __p);  // 234
	__uniq_ptr_data<CPoolAllocator, std::default_delete<CPoolAllocator>, true, true>::__uniq_ptr_data(
			pointer);  // 311
	unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >::unique_ptr<>(
			pointer __p);  // 1084
	make_unique<CPoolAllocator, unsigned int const&>(void); // 3421
	default_delete<CPoolAllocator>::operator(
			CPoolAllocator* __ptr);  // 86
	default_delete<CPoolAllocator>::operator(
			CPoolAllocator* __ptr);  // 204
	__uniq_ptr_impl<CPoolAllocator, std::default_delete<CPoolAllocator> >::reset(
		pointer __p);  // 184
	__uniq_ptr_impl<CPoolAllocator, std::default_delete<CPoolAllocator> >::operator=(
			__uniq_ptr_impl<CPoolAllocator, std::default_delete<CPoolAllocator> >& __u);  // 236
	__uniq_ptr_data<CPoolAllocator, std::default_delete<CPoolAllocator>, true, true>::operator=(
			__uniq_ptr_data<CPoolAllocator, std::default_delete<CPoolAllocator>, true, true> &);  // 408
	unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >::operator=(
			unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> > &);  // 3421
	{
		CPoolAllocator *& __ptr; // 396
		__uniq_ptr_impl<CPoolAllocator, std::default_delete<CPoolAllocator> >::_M_ptr(); // 396
	}
	unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >::~unique_ptr(); // 3421
} /* size: 242, variables: 3, inline expansions: 17 (262 bytes) */

// <0017BD45> rendersystem/renderdevicebase.cpp:3435
// variables: 14
// function calls: 53
void CRenderDeviceBase::AllocatePooledIndexBuffer(uint nIndexCount, const uint16* pIndices, uint* pOutStartIndex)
{
	const uint  nIndexSize; // 3445
	const uint  nAllocSize; // 3446
	CPooledIndexBuffer* pPooledIB; // 3448
	const char   __FUNCTION__; // 2896
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_3452; // 3452
		Handle_t hHandle; // 3453
		{
			uint32 nOldSizeBytes; // 3457
			uint32 nMinSizeBytes; // 3458
			uint32 nNewSizeBytes; // 3459
			BufferDesc_t poolDesc; // 3465
			IndexBufferHandle_t hNewPool; // 3470
			{
				CRenderContextBasePtr pCtx; // 3478
				CRenderContextPtr::CRenderContextPtr<>(
							IRenderDevice* pDevice,
							const char* pDebugStringFmt);  // 356
				CRenderContextBasePtr::CRenderContextBasePtr(
							IRenderDevice* pDevice,
							const char* pDebugString);  // 3478
				CRenderContextBasePtr::operator->(); // 3479
				CRenderContextPtr::Release(); // 845
				CRenderContextPtr::~CRenderContextPtr(); // 341
				CRenderContextBasePtr::~CRenderContextBasePtr(); // 3480
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3488
			}
			__uniq_ptr_impl<CPoolAllocator, std::default_delete<CPoolAllocator> >::_M_ptr(); // 472
			unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >::get(); // 465
			unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >::operator->(); // 3476
			CPoolAllocator::PoolUsed(); // 3476
			__uniq_ptr_impl<CPoolAllocator, std::default_delete<CPoolAllocator> >::_M_ptr(); // 472
			unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >::get(); // 465
			unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >::operator->(); // 3486
			__uniq_ptr_impl<CPoolAllocator, std::default_delete<CPoolAllocator> >::_M_ptr(); // 472
			unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >::get(); // 465
			unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >::operator->(); // 3487
			CPoolAllocator::IsValidHandle(
					Handle_t handle);  // 3488
			__uniq_ptr_impl<CPoolAllocator, std::default_delete<CPoolAllocator> >::_M_ptr(); // 472
			unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >::get(); // 465
			unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >::operator->(); // 3488
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
				int nLineNumber);  // 3452
		__uniq_ptr_impl<CPoolAllocator, std::default_delete<CPoolAllocator> >::_M_ptr(); // 472
		unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >::get(); // 465
		unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >::operator->(); // 3453
		CPoolAllocator::IsValidHandle(
				Handle_t handle);  // 3454
		__uniq_ptr_impl<CPoolAllocator, std::default_delete<CPoolAllocator> >::_M_ptr(); // 472
		unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >::get(); // 465
		unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >::operator->(); // 3454
		CRenderResource::CRenderResource(
				RenderResourceType_t nType);  // 25
		CPooledIndexBuffer::CPooledIndexBuffer(
					Handle_t handle,
					uint nIndexCount,
					uint nIndexSize);  // 3491
		AddToDHead<CPooledIndexBuffer>(CPooledIndexBuffer *& head,
						CPooledIndexBuffer* which);  // 1186
		CUtlIntrusiveDList<CPooledIndexBuffer>::AddToHead(
				CPooledIndexBuffer* node);  // 3492
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 3493
	}
	{
		CRenderContextBasePtr pCtx; // 3502
		CRenderContextPtr::CRenderContextPtr<>(
					IRenderDevice* pDevice,
					const char* pDebugStringFmt);  // 356
		CRenderContextBasePtr::CRenderContextBasePtr(
					IRenderDevice* pDevice,
					const char* pDebugString);  // 3502
		CRenderContextBasePtr::operator->(); // 3503
		CPooledIndexBuffer::GetHandle(); // 3503
		CRenderContextPtr::Release(); // 845
		CRenderContextPtr::~CRenderContextPtr(); // 341
		CRenderContextBasePtr::~CRenderContextBasePtr(); // 3504
	}
	__uniq_ptr_impl<CPoolAllocator, std::default_delete<CPoolAllocator> >::_M_ptr(); // 472
	unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >::get(); // 489
	unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >::operator bool(); // 854
	operator==<CPoolAllocator, std::default_delete<CPoolAllocator> >(const unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >& __x,
									nullptr_t);  // 3440
	CPooledIndexBuffer::GetStartIndex(); // 3497
} /* size: 0, variables: 4, inline expansions: 5 (90 bytes) */

// <00179ACC> rendersystem/renderdevicebase.cpp:3435
// variables: 14
// function calls: 53
void CRenderDeviceBase::AllocatePooledIndexBuffer(uint nIndexCount, const uint16* pIndices, uint* pOutStartIndex)
{
	const uint  nIndexSize; // 3445
	const uint  nAllocSize; // 3446
	CPooledIndexBuffer* pPooledIB; // 3448
	const char   __FUNCTION__; // 32271
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_3452; // 3452
		Handle_t hHandle; // 3453
		{
			uint32 nOldSizeBytes; // 3457
			uint32 nMinSizeBytes; // 3458
			uint32 nNewSizeBytes; // 3459
			BufferDesc_t poolDesc; // 3465
			IndexBufferHandle_t hNewPool; // 3470
			{
				CRenderContextBasePtr pCtx; // 3478
				CRenderContextPtr::CRenderContextPtr<>(
							IRenderDevice* pDevice,
							const char* pDebugStringFmt);  // 356
				CRenderContextBasePtr::CRenderContextBasePtr(
							IRenderDevice* pDevice,
							const char* pDebugString);  // 3478
				CRenderContextBasePtr::operator->(); // 3479
				CRenderContextPtr::Release(); // 845
				CRenderContextPtr::~CRenderContextPtr(); // 341
				CRenderContextBasePtr::~CRenderContextBasePtr(); // 3480
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3488
			}
			__uniq_ptr_impl<CPoolAllocator, std::default_delete<CPoolAllocator> >::_M_ptr(); // 472
			unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >::get(); // 465
			unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >::operator->(); // 3476
			CPoolAllocator::PoolUsed(); // 3476
			__uniq_ptr_impl<CPoolAllocator, std::default_delete<CPoolAllocator> >::_M_ptr(); // 472
			unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >::get(); // 465
			unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >::operator->(); // 3486
			__uniq_ptr_impl<CPoolAllocator, std::default_delete<CPoolAllocator> >::_M_ptr(); // 472
			unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >::get(); // 465
			unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >::operator->(); // 3487
			CPoolAllocator::IsValidHandle(
					Handle_t handle);  // 3488
			__uniq_ptr_impl<CPoolAllocator, std::default_delete<CPoolAllocator> >::_M_ptr(); // 472
			unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >::get(); // 465
			unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >::operator->(); // 3488
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
				int nLineNumber);  // 3452
		__uniq_ptr_impl<CPoolAllocator, std::default_delete<CPoolAllocator> >::_M_ptr(); // 472
		unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >::get(); // 465
		unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >::operator->(); // 3453
		CPoolAllocator::IsValidHandle(
				Handle_t handle);  // 3454
		__uniq_ptr_impl<CPoolAllocator, std::default_delete<CPoolAllocator> >::_M_ptr(); // 472
		unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >::get(); // 465
		unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >::operator->(); // 3454
		CRenderResource::CRenderResource(
				RenderResourceType_t nType);  // 25
		CPooledIndexBuffer::CPooledIndexBuffer(
					Handle_t handle,
					uint nIndexCount,
					uint nIndexSize);  // 3491
		AddToDHead<CPooledIndexBuffer>(CPooledIndexBuffer *& head,
						CPooledIndexBuffer* which);  // 1186
		CUtlIntrusiveDList<CPooledIndexBuffer>::AddToHead(
				CPooledIndexBuffer* node);  // 3492
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 3493
	}
	{
		CRenderContextBasePtr pCtx; // 3502
		CRenderContextPtr::CRenderContextPtr<>(
					IRenderDevice* pDevice,
					const char* pDebugStringFmt);  // 356
		CRenderContextBasePtr::CRenderContextBasePtr(
					IRenderDevice* pDevice,
					const char* pDebugString);  // 3502
		CRenderContextBasePtr::operator->(); // 3503
		CPooledIndexBuffer::GetHandle(); // 3503
		CRenderContextPtr::Release(); // 845
		CRenderContextPtr::~CRenderContextPtr(); // 341
		CRenderContextBasePtr::~CRenderContextBasePtr(); // 3504
	}
	__uniq_ptr_impl<CPoolAllocator, std::default_delete<CPoolAllocator> >::_M_ptr(); // 472
	unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >::get(); // 489
	unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >::operator bool(); // 854
	operator==<CPoolAllocator, std::default_delete<CPoolAllocator> >(const unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >& __x,
									nullptr_t);  // 3440
	CPooledIndexBuffer::GetStartIndex(); // 3497
} /* size: 0, variables: 4, inline expansions: 5 (90 bytes) */

// <001B0FAE> rendersystem/renderdevicebase.cpp:3510
// variables: 2
// function calls: 21
void CRenderDeviceBase::FreePooledIndexBuffer(PooledIndexBufferHandle_t handle)
{
	__uniq_ptr_impl<CPoolAllocator, std::default_delete<CPoolAllocator> >::_M_ptr(); // 472
	unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >::get(); // 489
	unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >::operator bool(); // 854
	operator==<CPoolAllocator, std::default_delete<CPoolAllocator> >(const unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >& __x,
									nullptr_t);  // 3512
	{
		CPooledIndexBuffer* pPooledIB; // 3515
		{
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_3518; // 3518
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
					int nLineNumber);  // 3518
			__uniq_ptr_impl<CPoolAllocator, std::default_delete<CPoolAllocator> >::_M_ptr(); // 472
			unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >::get(); // 465
			unique_ptr<CPoolAllocator, std::default_delete<CPoolAllocator> >::operator->(); // 3519
			CPooledIndexBuffer::GetHandle(); // 3519
			{
			}
			{
			}
			{
			}
			RemoveFromDList<CPooledIndexBuffer>(CPooledIndexBuffer *& head,
								CPooledIndexBuffer* which);  // 1195
			CUtlIntrusiveDList<CPooledIndexBuffer>::RemoveNode(
					CPooledIndexBuffer* which);  // 3520
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 874
			CThreadFastMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadFastMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 3521
		}
	}
	CRenderDeviceBase::FreePooledIndexBuffer(
				PooledIndexBufferHandle_t handle);  // 3510
} /* size: 0, inline expansions: 5 (390 bytes) */

// <0017BD01> rendersystem/renderdevicebase.cpp:3510
// variables: 2
void CRenderDeviceBase::FreePooledIndexBuffer(PooledIndexBufferHandle_t handle)
{
	{
		CPooledIndexBuffer* pPooledIB; // 3515
		{
			CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_3518; // 3518
		}
	}
} /* size: 0 */

// <0017BC6B> rendersystem/renderdevicebase.cpp:3527
// variable: 1
// function call: 1
void CRenderDeviceBase::GetPooledIndexBufferOffset(PooledIndexBufferHandle_t handle)
{
	{
		CPooledIndexBuffer* pPooledIB; // 3531
		CPooledIndexBuffer::GetStartIndex(); // 3532
	}
} /* size: 20 */

// <0017BC3D> rendersystem/renderdevicebase.cpp:3538
void CRenderDeviceBase::GetPooledIndexBuffer()
{
} /* size: 12 */

// <0017BBB9> rendersystem/renderdevicebase.cpp:3543
// variable: 1
// function call: 1
void CRenderDeviceBase::GetVertexBufferInputLayout(VertexBufferHandle_t hVertexBuffer)
{
	CVertexBufferBase* pVB; // 3545
	CVertexBufferBase::GetInputLayout(); // 3546
} /* size: 9, variables: 1, inline expansions: 1 (0 bytes) */

// <0017B4DF> rendersystem/renderdevicebase.cpp:3554
// variables: 3
// function calls: 25
void CRenderDeviceBase::FindOrCreateTexture2(const char* pResourceName, bool bIsAnonymous, const TextureCreationConfig_t& pDescriptor, const void* pData, int nDataSize)
{
	CTextureCreationDesc desc; // 3556
	int sizeWithMips; // 3574
	bool alreadyHasMipsAndIsStatic; // 3575
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
	CTextureCreationDesc::CTextureCreationDesc(); // 3556
	Vector4D::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz,
		vec_t iw);  // 3567
	operator|(RuntimeTextureSpecificationFlags_t a,
			RuntimeTextureSpecificationFlags_t b);  // 35
	operator|=(RuntimeTextureSpecificationFlags_t& a,
			RuntimeTextureSpecificationFlags_t b);  // 3580
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
	CTextureCreationDesc::~CTextureCreationDesc(); // 3584
} /* size: 433, variables: 3, inline expansions: 25 (252 bytes) */

// <0017B1D4> rendersystem/renderdevicebase.cpp:3586
// variables: 2
// function calls: 10
void CRenderDeviceBase::ClearTexture(HRenderTexture hTexture, Color color)
{
	CRenderContextPtr pRenderContext; // 3591
	uint32 clearValueUINT; // 3594
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 3588
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator==(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource);  // 3588
	CRenderContextPtr::CRenderContextPtr<>(
				IRenderDevice* pDevice,
				const char* pDebugStringFmt);  // 3591
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3595
	CRenderContextPtr::operator->(); // 3595
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 3596
} /* size: 204, variables: 2, inline expansions: 10 (98 bytes) */

// <0017AD93> rendersystem/renderdevicebase.cpp:3598
// variables: 6
// function calls: 8
void CRenderDeviceBase::AsyncSetTextureData2(HRenderTexture hTexture, const void* pData, int nDataSize, Rect3D_t rect)
{
	const CTextureDesc* desc; // 3600
	Rect3D_t* pRect; // 3602
	int updateFlags; // 3603
	int mips; // 3622
	int sizeWithMips; // 3623
	{
		int sizeWithOneMip; // 3639
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3600
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1868
	CRenderDeviceBase::GetOnDiskTextureDesc(
				HRenderTexture hTexture);  // 3600
	Rect3D_t::Size(); // 3605
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 3658
} /* size: 582, variables: 5, inline expansions: 8 (119 bytes) */

// <0017AD76> rendersystem/renderdevicebase.cpp:3661
void* CRenderDeviceBase::GetDevicePtr()
{
} /* size: 0 */

// <0017ACBF> rendersystem/renderdevicebase.cpp:3666
// function calls: 3
void* CRenderDeviceBase::GetTextureObject(HRenderTexture hTexture)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator->(); // 3668
	CTextureInfoId::GetTextureObject(); // 462
	CTextureBase::GetTextureObject(); // 3668
} /* size: 0, inline expansions: 3 (91 bytes) */

// <0017AC6E> rendersystem/renderdevicebase.cpp:3671
void CRenderDeviceBase::IsRenderDocEnabled()
{
} /* size: 22 */

// <0017AC31> rendersystem/renderdevicebase.cpp:3676
void CRenderDeviceBase::SetInMainThreadRenderBlock(bool bEnable)
{
} /* size: 22 */

// <0017AC03> rendersystem/renderdevicebase.cpp:3681
void CRenderDeviceBase::IsInMainThreadRenderBlock()
{
} /* size: 22 */

// <0017AB50> rendersystem/renderdevicebase.cpp:3686
// function calls: 3
void CRenderDeviceBase::GetTextureLastUsed(HRenderTexture hTexture)
{
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator->(); // 3688
	CTextureInfoId::GetLastBindFrame(); // 470
	CTextureBase::GetLastBindFrameAgo(); // 3688
} /* size: 0, inline expansions: 3 (107 bytes) */

// <0017AAD5> rendersystem/renderdevicebase.cpp:3691
// function call: 1
void CRenderDeviceBase::SetForcePreloadStreamingData(bool bForcePreloadStreamingData)
{
	CTextureManagerBase::SetForcePreloadStreamingData(
					bool bForcePreloadStreamingData);  // 3693
} /* size: 22, inline expansions: 1 (17 bytes) */

