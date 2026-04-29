
//
// vulkan/memorymgrvulkan.cpp
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 54
//

// <005A2E01> vulkan/memorymgrvulkan.cpp:75
// variables: 2
// function calls: 72
void CMemoryManagerVulkan::CMemoryManagerVulkan()
{
	{
		int nType; // 90
	}
	CTSListBase::CTSListBase(); // 846
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 862
	Node_t::Node_t(); // 864
	CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::End(); // 865
	CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::CTSQueue(); // 81
	ValidateGrowSize(const CUtlMemory<UtlLinkedListElem_t<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int>, short unsigned int> this); // 475
	CUtlMemory(const CUtlMemory<UtlLinkedListElem_t<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int>, short unsigned int> this,
			int nGrowSize,
			int nInitAllocationCount);  // 448
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	InvalidIterator(const CUtlMemory<UtlLinkedListElem_t<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int>, short unsigne this); // 448
	ConstructList(const CUtlLinkedList<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int, false, short unsigned int, CUtlMemor this); // 454
	ResetDbgInfo(const CUtlLinkedList<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int, false, short unsigned int, CUtlMemor this); // 455
	CUtlLinkedList(const CUtlLinkedList<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int, false, short unsigned int, CUtlMemor this,
			int growSize,
			int initSize);  // 81
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 81
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 81
	CUtlMemory<VmaPool_T::ValidateGrowSize(); // 475
	CUtlMemory<VmaPool_T::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VmaPool_T::ResetDbgInfo(); // 530
	CUtlVectorBase<VmaPool_T::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VmaPool_T::CUtlVector(); // 81
	CThreadMutex::CThreadMutex(
			const char* pName);  // 81
	CInterlockedIntT<unsigned int, 4>::CInterlockedIntT(); // 81
	CUtlLinkedList<VulkanMemoryPool_t::ConstructList(); // 454
	CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::Grow(
		int num);  // 193
	CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::Init(
		int nGrowSize,
		int nInitSize);  // 161
	CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::CUtlFixedMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 448
	Iterator_t::Iterator_t(
			BlockHeader_t* p,
			intp i);  // 96
	CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::InvalidIterator(); // 448
	CUtlLinkedList<VulkanMemoryPool_t::ResetDbgInfo(); // 455
	CUtlLinkedList<VulkanMemoryPool_t::CUtlLinkedList(
			int growSize,
			int initSize);  // 404
	CUtlFixedLinkedList<VulkanMemoryPool_t::CUtlFixedLinkedList(
				int growSize,
				int initSize);  // 81
	CInterlockedIntT<unsigned int, 4>::CInterlockedIntT(); // 81
	CThreadMutex::CThreadMutex(
			const char* pName);  // 396
	CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMove_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMove_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CMemoryManagerVulkan::VmaQueuedResourceMove_t, CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMov this); // 530
	CUtlVectorBase(const CUtlVectorBase<CMemoryManagerVulkan::VmaQueuedResourceMove_t, CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMov this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CMemoryManagerVulkan::VmaQueuedResourceMove_t, CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMove_t, this); // 396
	VmaDefragThreadState_t::VmaDefragThreadState_t(); // 81
	ICommandCallback::ICommandCallback(); // 556
	ICommandCompletionCallback::ICommandCompletionCallback(); // 556
	CConCommandMemberAccessor<CMemoryManagerVulkan>::CConCommandMemberAccessor(
					CMemoryManagerVulkan* pOwner,
					const char* pName,
					FnMemberCommandCallback_t callback,
					const char* pHelpString,
					ConVarFlags_t flags,
					FnMemberCommandCompletionCallback_t completionFunc);  // 471
	CConCommandMemberAccessor<CMemoryManagerVulkan>::SetOwner(
		CMemoryManagerVulkan* pOwner);  // 471
	CCommandMemberInitializer_OnVmaGpuMemDump::CCommandMemberInitializer_OnVmaGpuMemDump(); // 81
	CThreadMutex::CThreadMutex(
			const char* pName);  // 81
	CUtlMemory<UtlLinkedListElem_t<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int>, unsigned int>::ValidateGrowSize(); // 475
	CUtlMemory<UtlLinkedListElem_t<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int>, unsigned int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 448
	Iterator_t::Iterator_t(
			unsigned int i);  // 86
	CUtlMemory<UtlLinkedListElem_t<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int>, unsigned int>::InvalidIterator(); // 448
	ConstructList(const CUtlLinkedList<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedLi this); // 454
	ResetDbgInfo(const CUtlLinkedList<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedLi this); // 455
	CUtlLinkedList(const CUtlLinkedList<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedLi this,
			int growSize,
			int initSize);  // 81
	ICommandCallback::ICommandCallback(); // 556
	ICommandCompletionCallback::ICommandCompletionCallback(); // 556
	CConCommandMemberAccessor<CMemoryManagerVulkan>::CConCommandMemberAccessor(
					CMemoryManagerVulkan* pOwner,
					const char* pName,
					FnMemberCommandCallback_t callback,
					const char* pHelpString,
					ConVarFlags_t flags,
					FnMemberCommandCompletionCallback_t completionFunc);  // 472
	CConCommandMemberAccessor<CMemoryManagerVulkan>::SetOwner(
		CMemoryManagerVulkan* pOwner);  // 472
	CCommandMemberInitializer_OnVmaDefrag::CCommandMemberInitializer_OnVmaDefrag(); // 81
	ICommandCallback::ICommandCallback(); // 556
	ICommandCompletionCallback::ICommandCompletionCallback(); // 556
	CConCommandMemberAccessor<CMemoryManagerVulkan>::CConCommandMemberAccessor(
					CMemoryManagerVulkan* pOwner,
					const char* pName,
					FnMemberCommandCallback_t callback,
					const char* pHelpString,
					ConVarFlags_t flags,
					FnMemberCommandCompletionCallback_t completionFunc);  // 473
	CConCommandMemberAccessor<CMemoryManagerVulkan>::SetOwner(
		CMemoryManagerVulkan* pOwner);  // 473
	CCommandMemberInitializer_OnPrintStats::CCommandMemberInitializer_OnPrintStats(); // 81
	ICommandCallback::ICommandCallback(); // 556
	ICommandCompletionCallback::ICommandCompletionCallback(); // 556
	CConCommandMemberAccessor<CMemoryManagerVulkan>::CConCommandMemberAccessor(
					CMemoryManagerVulkan* pOwner,
					const char* pName,
					FnMemberCommandCallback_t callback,
					const char* pHelpString,
					ConVarFlags_t flags,
					FnMemberCommandCompletionCallback_t completionFunc);  // 474
	CConCommandMemberAccessor<CMemoryManagerVulkan>::SetOwner(
		CMemoryManagerVulkan* pOwner);  // 474
	CCommandMemberInitializer_OnPrintFragmentationStats::CCommandMemberInitializer_OnPrintFragmentationStats(); // 81
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<unsigned int, 4>::operator=(
			unsigned int newValue);  // 87
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<unsigned int, 4>::operator=(
			unsigned int newValue);  // 88
	{
		int nType; // 90
	}
} /* size: 1655, inline expansions: 72 (2407 bytes) */

// <005A2DDA> vulkan/memorymgrvulkan.cpp:75
// variable: 1
void CMemoryManagerVulkan::CMemoryManagerVulkan()
{
	{
		int nType; // 90
	}
} /* size: 0 */

// <005A1C17> vulkan/memorymgrvulkan.cpp:101
// variables: 2
// function calls: 72
void CMemoryManagerVulkan::~CMemoryManagerVulkan()
{
	CConCommandMemberAccessor<CMemoryManagerVulkan>::~CConCommandMemberAccessor(); // 474
	CCommandMemberInitializer_OnPrintFragmentationStats::~CCommandMemberInitializer_OnPrintFragmentationStats(); // 103
	CConCommandMemberAccessor<CMemoryManagerVulkan>::~CConCommandMemberAccessor(); // 473
	CCommandMemberInitializer_OnPrintStats::~CCommandMemberInitializer_OnPrintStats(); // 103
	CConCommandMemberAccessor<CMemoryManagerVulkan>::~CConCommandMemberAccessor(); // 472
	CCommandMemberInitializer_OnVmaDefrag::~CCommandMemberInitializer_OnVmaDefrag(); // 103
	CConCommandMemberAccessor<CMemoryManagerVulkan>::~CConCommandMemberAccessor(); // 471
	CCommandMemberInitializer_OnVmaGpuMemDump::~CCommandMemberInitializer_OnVmaGpuMemDump(); // 103
	ValidateAlignment<UtlLinkedListElem_t<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int> >(void); // 508
	CUtlMemory<UtlLinkedListElem_t<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int>, unsigned int>::IsExternallyAllocated(); // 905
	CUtlMemory<UtlLinkedListElem_t<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int>, unsigned int>::Purge(); // 903
	CUtlMemory<UtlLinkedListElem_t<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int>, unsigned int>::Purge(); // 510
	CUtlMemory<UtlLinkedListElem_t<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int>, unsigned int>::~CUtlMemory(); // 462
	~CUtlLinkedList(const CUtlLinkedList<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedLi this); // 103
	CThreadMutex::~CThreadMutex(); // 103
	CThreadEvent::~CThreadEvent(); // 396
	CThreadEvent::~CThreadEvent(); // 396
	RemoveAll(const CUtlVectorBase<CMemoryManagerVulkan::VmaQueuedResourceMove_t, CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMov this); // 1798
	CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMove_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMove_t, int>::Purge(); // 903
	CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMove_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CMemoryManagerVulkan::VmaQueuedResourceMove_t, CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMov this); // 560
	ValidateAlignment<CMemoryManagerVulkan::VmaQueuedResourceMove_t>(void); // 508
	CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMove_t, int>::Purge(); // 510
	CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMove_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CMemoryManagerVulkan::VmaQueuedResourceMove_t, CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMov this); // 410
	~CUtlVector(const CUtlVector<CMemoryManagerVulkan::VmaQueuedResourceMove_t, CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMove_t, this); // 396
	CThreadMutex::~CThreadMutex(); // 396
	VmaDefragThreadState_t::~VmaDefragThreadState_t(); // 103
	CThreadEvent::~CThreadEvent(); // 2177
	CThreadEvent::~CThreadEvent(); // 2177
	CThreadRWLock_FastRead::~CThreadRWLock_FastRead(); // 101
	{
		BlockHeader_t* pbh; // 338
		{
			BlockHeader_t* pFree; // 340
		}
	}
	CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::Purge(); // 167
	CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::~CUtlFixedMemory(); // 462
	CUtlLinkedList<VulkanMemoryPool_t::~CUtlLinkedList(); // 400
	CUtlFixedLinkedList<VulkanMemoryPool_t::~CUtlFixedLinkedList(); // 101
	CThreadMutex::~CThreadMutex(); // 103
	CUtlVectorBase<VmaPool_T::RemoveAll(); // 1798
	CUtlMemory<VmaPool_T::IsExternallyAllocated(); // 905
	CUtlMemory<VmaPool_T::Purge(); // 903
	CUtlMemory<VmaPool_T::Purge(); // 1799
	CUtlMemory<VmaPool_T::Base(); // 112
	CUtlVectorBase<VmaPool_T::Base(); // 368
	CUtlVectorBase<VmaPool_T::ResetDbgInfo(); // 1800
	CUtlVectorBase<VmaPool_T::Purge(); // 560
	CUtlMemory<VmaPool_T::IsExternallyAllocated(); // 905
	CUtlMemory<VmaPool_T::Purge(); // 903
	CUtlMemory<VmaPool_T::Purge(); // 510
	ValidateAlignment<VmaPool_T*>(void); // 508
	CUtlMemory<VmaPool_T::~CUtlMemory(); // 562
	CUtlVectorBase<VmaPool_T::~CUtlVectorBase(); // 410
	CUtlVector<VmaPool_T::~CUtlVector(); // 101
	ValidateAlignment<UtlLinkedListElem_t<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int> >(void); // 508
	IsExternallyAllocated(const CUtlMemory<UtlLinkedListElem_t<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int>, short unsigne this); // 905
	Purge(const CUtlMemory<UtlLinkedListElem_t<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int>, short unsigned int> this); // 903
	Purge(const CUtlMemory<UtlLinkedListElem_t<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int>, short unsigned int> this); // 510
	~CUtlMemory(const CUtlMemory<UtlLinkedListElem_t<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int>, short unsigned int> this); // 462
	~CUtlLinkedList(const CUtlLinkedList<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int, false, short unsigned int, CUtlMemor this); // 103
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
	CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::Purge(); // 870
	CInterlockedIntT<int, 4>::operator==(
			int rhs);  // 871
	{
	}
	{
	}
	CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::End(); // 873
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
	CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::~CTSQueue(); // 103
} /* size: 0, inline expansions: 72 (2779 bytes) */

// <005A1BB0> vulkan/memorymgrvulkan.cpp:101
void CMemoryManagerVulkan::~CMemoryManagerVulkan()
{
} /* size: 36 */

// <005A1721> vulkan/memorymgrvulkan.cpp:108
// variables: 5
// function calls: 11
void CMemoryManagerVulkan::VmaInit()
{
	VmaVulkanFunctions vulkanFunctions; // 110
	VmaAllocatorCreateInfo allocatorCreateInfo; // 114
	VkResult nResult; // 123
	const char   __FUNCTION__; // 35208
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 130
	}
	CRenderDeviceVulkan::KHRBufferDeviceAddressEnabled(); // 115
	CRenderDeviceVulkan::EXTMemoryPriorityEnabled(); // 116
	CRenderDeviceMgrVulkan::GetVulkanInstanceAPIVersion(); // 117
	CRenderDeviceMgrVulkan::GetInstance(); // 120
	CUtlString::CUtlString(); // 171
	CUtlString::Get(); // 173
	CUtlString::~CUtlString(); // 176
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 167
	_DOVK_RESULT(VkResult result,
			const char* pCommand);  // 158
	_DOVK_RESULT(VkResult result,
			const char* pCommand);  // 124
	CreateSimpleThread(ThreadFunc_t pfnThread,
				void* pParam,
				unsigned int stackSize,
				const char* szName,
				size_t nDuplicateParamSize);  // 131
} /* size: 0, variables: 4, inline expansions: 11 (482 bytes) */

// <005A660A> vulkan/memorymgrvulkan.cpp:139
void CMemoryManagerVulkan::VmaShutdown()
{
} /* size: 0 */

// <005A16D8> vulkan/memorymgrvulkan.cpp:158
// variables: 2
VkBool32 VmaCheckDefragmentationBreakCallback(void)
{
	const CMemoryManagerVulkan* pMemoryManager; // 160
	VkBool32 bBreakDefragmentation; // 161
} /* size: 0, variables: 2 */

// <005A07F4> vulkan/memorymgrvulkan.cpp:178
// variables: 12
// function calls: 41
void VmaRunDefragThread(void* pMemoryManager)
{
	CMemoryManagerVulkan* pMemoryManagerVulkan; // 180
	VmaDefragThreadState_t& vmaDefragThreadState; // 181
	{
		VmaDefragmentationInfo defragInfo; // 201
		VkResult nResult; // 217
		int32 nPassCount; // 223
		{
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_192; // 192
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 943
			Lock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
					const CThreadMutex& lock,
					const char* pFilename,
					int nLineNumber);  // 192
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 195
		}
		{
			VmaDefragmentationPassMoveInfo pass; // 228
			{
				double flStartTime; // 230
				Color::SetColor(
					int _r,
					int _g,
					int _b,
					int _a);  // 50
				Color::Color(
					int _r,
					int _g,
					int _b,
					int _a);  // 232
			}
			{
				CUtlString strResult; // 243
				CUtlString::CUtlString(); // 243
				CUtlString::Get(); // 245
				Color::SetColor(
					int _r,
					int _g,
					int _b,
					int _a);  // 50
				Color::Color(
					int _r,
					int _g,
					int _b,
					int _a);  // 245
				CUtlString::~CUtlString(); // 247
			}
			{
				CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_250; // 250
				CThreadMutex::Lock(
					const char* pFileName,
					int nLineNumber);  // 943
				Lock(CThreadMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 978
				CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
						const CThreadMutex& lock,
						const char* pFilename,
						int nLineNumber);  // 250
				CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMove_t, int>::Purge(); // 903
				CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMove_t, int>::IsExternallyAllocated(); // 905
				CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMove_t, int>::Purge(); // 1799
				RemoveAll(const CUtlVectorBase<CMemoryManagerVulkan::VmaQueuedResourceMove_t, CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMov this); // 1798
				ResetDbgInfo(const CUtlVectorBase<CMemoryManagerVulkan::VmaQueuedResourceMove_t, CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMov this); // 1800
				Purge(const CUtlVectorBase<CMemoryManagerVulkan::VmaQueuedResourceMove_t, CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMov this); // 253
				CThreadMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 944
				Unlock(CThreadMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 255
			}
			{
				CUtlString strResult; // 272
			}
			Color::SetColor(
				int _r,
				int _g,
				int _b,
				int _a);  // 50
			Color::Color(
				int _r,
				int _g,
				int _b,
				int _a);  // 238
			Color::SetColor(
				int _r,
				int _g,
				int _b,
				int _a);  // 50
			Color::Color(
				int _r,
				int _g,
				int _b,
				int _a);  // 227
		}
		{
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_282; // 282
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 943
			Lock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
					const CThreadMutex& lock,
					const char* pFilename,
					int nLineNumber);  // 282
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 284
		}
		ConVar::GetInt(); // 212
		ConVar::GetInt(); // 213
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 50
		Color::Color(
			int _r,
			int _g,
			int _b,
			int _a);  // 197
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 50
		Color::Color(
			int _r,
			int _g,
			int _b,
			int _a);  // 285
	}
} /* size: 1530, variables: 2 */

// <0059E35E> vulkan/memorymgrvulkan.cpp:298
// variables: 44
// function calls: 119
void CMemoryManagerVulkan::VmaUpdateDefragMainThread(bool bForceFlush)
{
	const char   __FUNCTION__; // 35664
	VmaAsyncDefragState_t defragState; // 302
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
	}
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_304; // 304
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 304
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 306
	}
	{
		VkResult nResult; // 322
		uint32 nMoveStart; // 324
		uint32 nMoveEnd; // 325
		{
			uint32_t i; // 329
			{
				VmaDefragmentationMove* pMove; // 332
				VmaAllocationInfo allocInfo; // 335
				IVmaAllocationBase* pVmaAllocation; // 340
				uint64_t nOldObject; // 350
				uint64_t nNewObject; // 351
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 331
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 334
				}
				{
					uint nContextFlags; // 368
				}
				{
					IVmaAllocationImage* pVmaAllocationImage; // 376
					CUtlString::CUtlString(); // 149
					CUtlString::Get(); // 151
					CUtlString::~CUtlString(); // 153
					_DOVK(VkResult result,
						const char* pCommand);  // 377
				}
				{
					IVmaAllocationBuffer* pVmaAllocationBuffer; // 382
					CUtlString::CUtlString(); // 149
					CUtlString::Get(); // 151
					CUtlString::~CUtlString(); // 153
					_DOVK(VkResult result,
						const char* pCommand);  // 383
				}
				{
					VkDebugUtilsObjectNameInfoEXT objectNameInfo; // 400
				}
				CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMove_t, int>::NumAllocated(); // 1247
				CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMove_t, int>::Base(); // 112
				Base(const CUtlVectorBase<CMemoryManagerVulkan::VmaQueuedResourceMove_t, CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMov this); // 368
				ResetDbgInfo(const CUtlVectorBase<CMemoryManagerVulkan::VmaQueuedResourceMove_t, CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMov this); // 824
				CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMove_t, int>::IsGrowable(); // 823
				CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMove_t, int>::IsExternallyAllocated(); // 859
				CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMove_t, int>::IsExternallyAllocated(); // 861
				CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMove_t, int>::Grow(
					int num);  // 806
				GrowMemory(const CUtlVectorBase<CMemoryManagerVulkan::VmaQueuedResourceMove_t, CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMov this,
						int num);  // 1249
				CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMove_t, int>::operator[](
						int i);  // 602
				Element(const CUtlVectorBase<CMemoryManagerVulkan::VmaQueuedResourceMove_t, CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMov this,
					int i);  // 1252
				Construct<CMemoryManagerVulkan::VmaQueuedResourceMove_t, CMemoryManagerVulkan::VmaQueuedResourceMove_t>(VmaQueuedResourceMove_t* pMemory); // 1252
				AddToTail(const CUtlVectorBase<CMemoryManagerVulkan::VmaQueuedResourceMove_t, CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMov this,
						VmaQueuedResourceMove_t& src);  // 392
				CRenderDeviceMgrVulkan::DebugUtilsEnabled(); // 398
			}
		}
		{
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_414; // 414
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 943
			Lock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
					const CThreadMutex& lock,
					const char* pFilename,
					int nLineNumber);  // 414
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 416
		}
		ConVar::GetInt(); // 325
		Min<unsigned int>(const unsigned int& val1,
					const unsigned int& val2);  // 325
	}
	{
		CRenderContextVulkan* pAssignContext; // 446
		CUtlVector<CRefCounted<CRefCountServiceBase<true, CRefMT> >*, CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >*, int> > vecQueuedToDelete; // 447
		{
			CDisplayList* pDisplayList; // 425
			DisplayListToSubmit_t::DisplayListToSubmit_t(
						CDisplayList* pList,
						bool bPersist);  // 533
			IRenderDevice::SubmitDisplayList(
						CDisplayList* pCommandList);  // 428
		}
		{
			VmaQueuedResourceMove_t& vmaQueuedResourceMove; // 448
			CUtlVector<CMemoryManagerVulkan::VmaQueuedResourceMove_t, CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMove_t, int> >& __for_range; // 34441
			iterator __for_begin; // 46552
			iterator __for_end; // 46552
			{
				VmaDefragmentationMove* pMove; // 450
				VmaAllocationInfo allocInfo; // 458
				IVmaAllocationBase* pVmaAllocation; // 460
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 452
				}
				{
					CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_470; // 470
					VmaQueuedDeletion_t queuedDeletion; // 471
					CThreadMutex::Lock(
						const char* pFileName,
						int nLineNumber);  // 943
					Lock(CThreadMutex& lock,
						const char* pFileName,
						int nLineNumber);  // 978
					CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
							const CThreadMutex& lock,
							const char* pFilename,
							int nLineNumber);  // 470
					CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
					CRenderDeviceBase::GetContextFrameCount(); // 472
					CUtlMemory<UtlLinkedListElem_t<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int>, unsigned int>::operator[](
							unsigned int i);  // 482
					Element(const CUtlLinkedList<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedLi this,
						unsigned int i);  // 825
					CopyConstruct<CMemoryManagerVulkan::VmaQueuedDeletion_t>(VmaQueuedDeletion_t* pMemory,
												const VmaQueuedDeletion_t& src);  // 825
					InsertBefore(const CUtlLinkedList<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedLi this,
							unsigned int before,
							const VmaQueuedDeletion_t& src);  // 856
					AddToTail(const CUtlLinkedList<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedLi this,
							const VmaQueuedDeletion_t& src);  // 481
					CThreadMutex::Unlock(
						const char* pFileName,
						int nLineNumber);  // 944
					Unlock(CThreadMutex& lock,
						const char* pFileName,
						int nLineNumber);  // 983
					CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 483
				}
				{
					CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_488; // 488
					VmaQueuedDeletion_t queuedDeletion; // 489
					CThreadMutex::Lock(
						const char* pFileName,
						int nLineNumber);  // 943
					Lock(CThreadMutex& lock,
						const char* pFileName,
						int nLineNumber);  // 978
					CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
							const CThreadMutex& lock,
							const char* pFilename,
							int nLineNumber);  // 488
					CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
					CRenderDeviceBase::GetContextFrameCount(); // 490
					CUtlMemory<UtlLinkedListElem_t<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int>, unsigned int>::operator[](
							unsigned int i);  // 482
					Element(const CUtlLinkedList<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedLi this,
						unsigned int i);  // 825
					CopyConstruct<CMemoryManagerVulkan::VmaQueuedDeletion_t>(VmaQueuedDeletion_t* pMemory,
												const VmaQueuedDeletion_t& src);  // 825
					InsertBefore(const CUtlLinkedList<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedLi this,
							unsigned int before,
							const VmaQueuedDeletion_t& src);  // 856
					AddToTail(const CUtlLinkedList<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedLi this,
							const VmaQueuedDeletion_t& src);  // 499
					CThreadMutex::Unlock(
						const char* pFileName,
						int nLineNumber);  // 944
					Unlock(CThreadMutex& lock,
						const char* pFileName,
						int nLineNumber);  // 983
					CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 500
				}
			}
			CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMove_t, int>::Base(); // 112
			Base(const CUtlVectorBase<CMemoryManagerVulkan::VmaQueuedResourceMove_t, CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMov this); // 102
			begin(const CUtlVectorBase<CMemoryManagerVulkan::VmaQueuedResourceMove_t, CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMov this); // 448
			Count(const CUtlVectorBase<CMemoryManagerVulkan::VmaQueuedResourceMove_t, CUtlMemory<CMemoryManagerVulkan::VmaQueuedResou this); // 104
			end(const CUtlVectorBase<CMemoryManagerVulkan::VmaQueuedResourceMove_t, CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMov this); // 448
		}
		{
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_517; // 517
			{
				CRefCountedVulkanObjectBase* pObjectToDelete; // 518
				CUtlVector<CRefCounted<CRefCountServiceBase<true, CRefMT> >*, CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >*, int> >& __for_range; // 36883
				iterator __for_begin; // 25951
				iterator __for_end; // 25951
				{
					VmaQueuedDeletion_t queuedDeletion; // 520
					CUtlMemory<UtlLinkedListElem_t<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int>, unsigned int>::operator[](
							unsigned int i);  // 482
					Element(const CUtlLinkedList<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedLi this,
						unsigned int i);  // 825
					CopyConstruct<CMemoryManagerVulkan::VmaQueuedDeletion_t>(VmaQueuedDeletion_t* pMemory,
												const VmaQueuedDeletion_t& src);  // 825
					InsertBefore(const CUtlLinkedList<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedLi this,
							unsigned int before,
							const VmaQueuedDeletion_t& src);  // 856
					AddToTail(const CUtlLinkedList<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedLi this,
							const VmaQueuedDeletion_t& src);  // 523
					CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
					CRenderDeviceBase::GetContextFrameCount(); // 521
				}
				CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >::Base(); // 112
				CUtlVectorBase<CRefCounted<CRefCountServiceBase<true, CRefMT> >::Base(); // 102
				CUtlVectorBase<CRefCounted<CRefCountServiceBase<true, CRefMT> >::begin(); // 518
				CUtlVectorBase<CRefCounted<CRefCountServiceBase<true, CRefMT> >::Count(); // 104
				CUtlVectorBase<CRefCounted<CRefCountServiceBase<true, CRefMT> >::end(); // 518
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
					int nLineNumber);  // 517
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 525
		}
		{
			CDisplayList* pDisplayList; // 533
			DisplayListToSubmit_t::DisplayListToSubmit_t(
						CDisplayList* pList,
						bool bPersist);  // 533
			IRenderDevice::SubmitDisplayList(
						CDisplayList* pCommandList);  // 536
		}
		{
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_545; // 545
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 943
			Lock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
					const CThreadMutex& lock,
					const char* pFilename,
					int nLineNumber);  // 545
			CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMove_t, int>::Purge(); // 903
			CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMove_t, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMove_t, int>::Purge(); // 1799
			RemoveAll(const CUtlVectorBase<CMemoryManagerVulkan::VmaQueuedResourceMove_t, CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMov this); // 1798
			ResetDbgInfo(const CUtlVectorBase<CMemoryManagerVulkan::VmaQueuedResourceMove_t, CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMov this); // 1800
			Purge(const CUtlVectorBase<CMemoryManagerVulkan::VmaQueuedResourceMove_t, CUtlMemory<CMemoryManagerVulkan::VmaQueuedResourceMov this); // 546
			CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
			CRenderDeviceBase::GetContextFrameCount(); // 547
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 549
		}
		CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >::ValidateGrowSize(); // 475
		CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CRefCounted<CRefCountServiceBase<true, CRefMT> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CRefCounted<CRefCountServiceBase<true, CRefMT> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CRefCounted<CRefCountServiceBase<true, CRefMT> >::CUtlVector(); // 447
		CUtlVectorBase<CRefCounted<CRefCountServiceBase<true, CRefMT> >::RemoveAll(); // 1798
		CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >::IsExternallyAllocated(); // 905
		CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >::Purge(); // 903
		CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >::Purge(); // 1799
		CUtlVectorBase<CRefCounted<CRefCountServiceBase<true, CRefMT> >::Purge(); // 560
		ValidateAlignment<CRefCounted<CRefCountServiceBase<true, CRefMT> >*>(void); // 508
		CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >::Purge(); // 510
		CUtlMemory<CRefCounted<CRefCountServiceBase<true, CRefMT> >::~CUtlMemory(); // 562
		CUtlVectorBase<CRefCounted<CRefCountServiceBase<true, CRefMT> >::~CUtlVectorBase(); // 410
		CUtlVector<CRefCounted<CRefCountServiceBase<true, CRefMT> >::~CUtlVector(); // 550
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 554
	}
	CInterlockedIntT<unsigned int, 4>::operator unsigned int(); // 560
} /* size: 0, variables: 2, inline expansions: 1 (14 bytes) */

// <0059DB86> vulkan/memorymgrvulkan.cpp:584
// variables: 6
// function calls: 28
void CMemoryManagerVulkan::VmaDefragProcessDeletionQueueInternal(bool bForce)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_586; // 586
	uint32 nIterator; // 587
	const char   __FUNCTION__; // 35938
	{
		VmaQueuedDeletion_t& queuedDeletion; // 590
		{
			uint32 nIndexToRemove; // 624
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 607
			}
			CUtlMemory<UtlLinkedListElem_t<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int>, unsigned int>::IsIdxAfter(
					unsigned int i,
					const Iterator_t& it);  // 591
			IsValidIndex(const CUtlLinkedList<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int, false, unsigned int, CUtlMemory<UtlLi this,
					unsigned int i);  // 583
			CUtlMemory<UtlLinkedListElem_t<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int>, unsigned int>::IsIdxValid(
					unsigned int i);  // 588
			IsValidIndex(const CUtlLinkedList<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int, false, unsigned int, CUtlMemory<UtlLi this,
					unsigned int i);  // 749
			CUtlMemory<UtlLinkedListElem_t<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int>, unsigned int>::operator[](
					unsigned int i);  // 367
			InternalElement(const CUtlLinkedList<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedLi this,
					unsigned int i);  // 752
			Destruct<CMemoryManagerVulkan::VmaQueuedDeletion_t>(VmaQueuedDeletion_t* pMemory); // 753
			{
			}
			Free(const CUtlLinkedList<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedLi this,
				unsigned int elem);  // 907
			Remove(const CUtlLinkedList<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedLi this,
				unsigned int elem);  // 626
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 204
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
			CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 596
			CUtlMemory<UtlLinkedListElem_t<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int>, unsigned int>::operator[](
					unsigned int i);  // 368
			InternalElement(const CUtlLinkedList<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int, false, unsigned int, CUtlMemory<UtlLi this,
					unsigned int i);  // 550
			Next(const CUtlLinkedList<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int, false, unsigned int, CUtlMemory<UtlLi this,
				unsigned int i);  // 625
		}
		Next(const CUtlLinkedList<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int, false, unsigned int, CUtlMemory<UtlLi this,
			unsigned int i);  // 630
		CInterlockedIntT<unsigned int, 4>::operator unsigned int(); // 591
		CUtlMemory<UtlLinkedListElem_t<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int>, unsigned int>::operator[](
				unsigned int i);  // 482
		Element(const CUtlLinkedList<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedLi this,
			unsigned int i);  // 590
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
			int nLineNumber);  // 586
	Head(const CUtlLinkedList<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int, false, unsigned int, CUtlMemory<UtlLi this); // 587
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 633
} /* size: 0, variables: 3, inline expansions: 7 (365 bytes) */

// <005A7408> vulkan/memorymgrvulkan.cpp:637
// function calls: 2
void CMemoryManagerVulkan::VmaDefrag(RenderDefragFlags_t defragFlags, bool bAsyncDefrag)
{
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 639
} /* size: 33, inline expansions: 2 (14 bytes) */

// <005A6BEA> vulkan/memorymgrvulkan.cpp:637
// variables: 7
// function calls: 24
void CMemoryManagerVulkan::VmaDefrag(RenderDefragFlags_t defragFlags, bool bAsyncDefrag)
{
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_647; // 647
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 647
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 659
	}
	{
		volatile bool  bDefragFinished; // 666
		{
		}
		{
			const bool  bForceFlush; // 669
			{
				CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_673; // 673
				CThreadMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 944
				Unlock(CThreadMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 675
				CThreadMutex::Lock(
					const char* pFileName,
					int nLineNumber);  // 943
				Lock(CThreadMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 978
				CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
						const CThreadMutex& lock,
						const char* pFilename,
						int nLineNumber);  // 673
			}
		}
		{
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_680; // 680
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 943
			Lock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
					const CThreadMutex& lock,
					const char* pFilename,
					int nLineNumber);  // 680
			{
			}
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 691
		}
		{
			const bool  bForceFlush; // 697
			{
				CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_701; // 701
				CThreadMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 944
				Unlock(CThreadMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 703
				CThreadMutex::Lock(
					const char* pFileName,
					int nLineNumber);  // 943
				Lock(CThreadMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 978
				CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
						const CThreadMutex& lock,
						const char* pFilename,
						int nLineNumber);  // 701
			}
		}
	}
} /* size: 0 */

// <0059DA9D> vulkan/memorymgrvulkan.cpp:637
// variables: 10
void CMemoryManagerVulkan::VmaDefrag(RenderDefragFlags_t defragFlags, bool bAsyncDefrag)
{
	const char   __FUNCTION__; // 35262
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_647; // 647
	}
	{
		volatile bool  bDefragFinished; // 666
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 663
		}
		{
			const bool  bForceFlush; // 669
			{
				CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_673; // 673
			}
		}
		{
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_680; // 680
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 681
			}
		}
		{
			const bool  bForceFlush; // 697
			{
				CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_701; // 701
			}
		}
	}
} /* size: 0, variables: 1 */

// <0059D9CB> vulkan/memorymgrvulkan.cpp:712
// variable: 1
void CMemoryManagerVulkan::FreeBufferAllocation(VmaAllocation pVmaAllocation, VkBuffer pBuffer)
{
	VmaAllocationInfo allocationInfo; // 714
} /* size: 135, variables: 1 */

// <0059D8F9> vulkan/memorymgrvulkan.cpp:727
// variable: 1
void CMemoryManagerVulkan::FreeImageAllocation(VmaAllocation pVmaAllocation, VkImage pImage)
{
	VmaAllocationInfo allocationInfo; // 729
} /* size: 135, variables: 1 */

// <0059D5AE> vulkan/memorymgrvulkan.cpp:744
// variables: 2
// function calls: 11
void CMemoryManagerVulkan::QueueForDeletion(CRefCountedVulkanObjectBase* pVulkanObject)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_746; // 746
	VmaQueuedDeletion_t queuedDeletion; // 747
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 746
	CUtlMemory<UtlLinkedListElem_t<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int>, unsigned int>::operator[](
			unsigned int i);  // 482
	Element(const CUtlLinkedList<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedLi this,
		unsigned int i);  // 825
	CopyConstruct<CMemoryManagerVulkan::VmaQueuedDeletion_t>(VmaQueuedDeletion_t* pMemory,
								const VmaQueuedDeletion_t& src);  // 825
	InsertBefore(const CUtlLinkedList<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedLi this,
			unsigned int before,
			const VmaQueuedDeletion_t& src);  // 856
	AddToTail(const CUtlLinkedList<CMemoryManagerVulkan::VmaQueuedDeletion_t, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedLi this,
			const VmaQueuedDeletion_t& src);  // 750
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 751
} /* size: 265, variables: 2, inline expansions: 11 (561 bytes) */

// <0059D25C> vulkan/memorymgrvulkan.cpp:756
// variables: 6
// function call: 1
void CMemoryManagerVulkan::Init(VkDevice pDeviceVulkan, VkQueue pQueueVulkan, const VulkanPhysicalDeviceInfo_t* pPhysicalDeviceInfo, bool bRayTracing)
{
	const char   __FUNCTION__; // 35127
	KeyValues* pGameInfo; // 794
	{
		int nPoolType; // 773
	}
	{
		uint32_t nMemTypeIndex; // 782
		{
			VkMemoryPropertyFlags nMemoryProperties; // 784
			const VkMemoryPropertyFlags  nDeviceLocalHostCoherentProperties; // 785
		}
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 765
} /* size: 737, variables: 2, inline expansions: 1 (29 bytes) */

// <0059C57A> vulkan/memorymgrvulkan.cpp:817
// variables: 3
// function calls: 37
void CMemoryManagerVulkan::ShutdownCommandBufferPool(PerThreadDataVulkan_t* pPerThread, CommandBufferPool_t* pPool)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_819; // 819
	VkCommandBuffer pCmdBuffer; // 820
	{
		int32 nCommandBufferType; // 821
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<VkCommandBuffer_T::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<VkCommandBuffer_T::PopItem(
			VkCommandBuffer_T** pResult);  // 823
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
		CTSQueue<VkCommandBuffer_T::Purge(); // 828
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
			int nLineNumber);  // 819
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 244
	ThreadPause(void); // 230
	CTSListBase::Detach(); // 135
	CTSListBase::~CTSListBase(); // 876
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
	CTSQueue<VkCommandBuffer_T::Purge(); // 870
	CInterlockedIntT<int, 4>::operator==(
			int rhs);  // 871
	{
	}
	{
	}
	CTSQueue<VkCommandBuffer_T::End(); // 873
	{
	}
	CTSQueue<VkCommandBuffer_T::~CTSQueue(); // 98
	CommandBufferPool_t::~CommandBufferPool_t(); // 831
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 832
} /* size: 0, variables: 2, inline expansions: 25 (2400 bytes) */

// <0059C473> vulkan/memorymgrvulkan.cpp:834
// function call: 1
void CMemoryManagerVulkan::Shutdown()
{
	CMemoryManagerVulkan::VmaShutdown(); // 853
} /* size: 158, inline expansions: 1 (21 bytes) */

// <0059C413> vulkan/memorymgrvulkan.cpp:859
void CMemoryManagerVulkan::BuildAllocInfo(size_t nBytes, uint32_t nMemoryTypeIndex, VkMemoryAllocateInfo* pAllocInfoOut)
{
} /* size: 0 */

// <0059C2EE> vulkan/memorymgrvulkan.cpp:869
// variables: 4
void CMemoryManagerVulkan::FindMemoryTypeIndexForProperty(uint32_t nTypeBits, VkMemoryPropertyFlags nMemoryPropertyFlags, uint32_t* pnMemoryTypeIndexOut)
{
	const char   __FUNCTION__; // 35779
	uint32_t nMemTypeIndex; // 873
	bool bFoundExactMatch; // 880
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
} /* size: 0, variables: 3 */

// <005A6635> vulkan/memorymgrvulkan.cpp:924
// function calls: 2
void CMemoryManagerVulkan::UseBufferDeviceAddress(VulkanMemoryPoolType_t nMemoryPoolType)
{
	CRenderDeviceVulkan::KHRBufferDeviceAddressEnabled(); // 926
	CMemoryManagerVulkan::UseBufferDeviceAddress(
				VulkanMemoryPoolType_t nMemoryPoolType);  // 924
} /* size: 0, inline expansions: 2 (0 bytes) */

// <0059C2C8> vulkan/memorymgrvulkan.cpp:924
void CMemoryManagerVulkan::UseBufferDeviceAddress(VulkanMemoryPoolType_t nMemoryPoolType)
{
} /* size: 0 */

// <0059BABB> vulkan/memorymgrvulkan.cpp:944
// variables: 15
// function calls: 9
void CMemoryManagerVulkan::AllocateForObject(VkBuffer pBuffer, VkImage pImage, VkMemoryPropertyFlags nMemoryProps, bool bDedicatedAllocation, VkDeviceMemory* ppMemoryOut, VkDeviceSize* pAlignmentOut, const char* pDebugName, VulkanMemoryPoolType_t nMemoryPoolType)
{
	VkMemoryRequirements memoryRequirements; // 948
	VkMemoryAllocateInfo allocInfo; // 963
	VkBaseInStructure* pAllocInfo; // 964
	VkMemoryAllocateFlagsInfo memoryAllocateFlagsInfo; // 974
	VkMemoryDedicatedAllocateInfoKHR dedicatedAllocationMemoryAllocateInfo; // 989
	const char   __FUNCTION__; // 35473
	float flMemoryPriority; // 1004
	VkMemoryPriorityAllocateInfoEXT memoryPriorityAllocateInfo; // 1022
	VkResult nResult; // 1033
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 992
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 993
	}
	{
		VkMemoryPropertyFlags nOrigMemoryProps; // 1041
		uint32_t nOrigHeapIndex; // 1042
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 1061
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1076
	}
	{
		VkDebugUtilsObjectNameInfoEXT objectNameInfo; // 1090
	}
	CRenderDeviceVulkan::KHRBufferDeviceAddressEnabled(); // 926
	CMemoryManagerVulkan::UseBufferDeviceAddress(
				VulkanMemoryPoolType_t nMemoryPoolType);  // 924
	CMemoryManagerVulkan::UseBufferDeviceAddress(
				VulkanMemoryPoolType_t nMemoryPoolType);  // 979
	CRenderDeviceVulkan::KHRDedicatedAllocationEnabled(); // 990
	CRenderDeviceVulkan::EXTMemoryPriorityEnabled(); // 1023
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 1069
	CRenderDeviceVulkan::EXTPageableDeviceLocalMemoryEnabled(); // 1074
	CRenderDeviceMgrVulkan::DebugUtilsEnabled(); // 1088
} /* size: 0, variables: 9, inline expansions: 8 (156 bytes) */

// <0059B435> vulkan/memorymgrvulkan.cpp:1114
// variables: 11
// function calls: 5
void CMemoryManagerVulkan::AllocateForObjectPooled(IVmaAllocationBase* pObject, VulkanMemoryPoolType_t nMemoryPool, bool bDedicatedAllocation, VkBuffer pBuffer, VkImage pImage, VmaAllocation* ppVmaAllocationOut, const char* pDebugName)
{
	VkMemoryRequirements memoryRequirements; // 1116
	const char   __FUNCTION__; // 35610
	uint32_t nMemoryTypeIndex; // 1139
	VmaAllocationCreateInfo allocInfo; // 1145
	VkResult nResult; // 1154
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1121
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1128
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1132
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1135
	}
	{
		int* _pCrash; // 1209
	}
	{
		VkDebugUtilsObjectNameInfoEXT objectNameInfo; // 1221
	}
	CMemoryManagerVulkan::VmaMarkAllocationRequested(); // 1151
	CMemoryManagerVulkan::GetVmaAllocator(); // 1159
	CMemoryManagerVulkan::GetVmaAllocator(); // 1190
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 1209
	CRenderDeviceMgrVulkan::DebugUtilsEnabled(); // 1219
} /* size: 0, variables: 5, inline expansions: 5 (69 bytes) */

// <0059A7CA> vulkan/memorymgrvulkan.cpp:1243
// variables: 4
// function calls: 36
void CMemoryManagerVulkan::VmaAllocateInCustomPool(IVmaAllocationBase* pObject, VulkanMemoryPoolType_t nMemoryPool, uint32 nMemoryTypeIndex, VkBuffer pBuffer, VkImage pImage, VmaAllocationCreateInfo* pVmaAllocInfo, VmaAllocation* ppVmaAllocationOut)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1245; // 1245
	VkResult nResult; // 1252
	{
		int nIndex; // 1266
		CUtlVectorBase<VmaPool_T::Count(); // 1266
		CUtlMemory<VmaPool_T::operator[](
				int i);  // 588
		CUtlVectorBase<VmaPool_T::operator[](
				int i);  // 1268
	}
	{
		VmaPoolCreateInfo poolCreateInfo; // 1287
		CUtlMemory<VmaPool_T::NumAllocated(); // 1196
		CUtlMemory<VmaPool_T::operator[](
				int i);  // 602
		CUtlVectorBase<VmaPool_T::Element(
			int i);  // 1201
		CopyConstruct<VmaPool_T*>(VmaPool_T** pMemory,
						VmaPool_T* const& src);  // 1201
		CUtlMemory<VmaPool_T::IsGrowable(); // 823
		CUtlMemory<VmaPool_T::IsExternallyAllocated(); // 859
		CUtlMemory<VmaPool_T::IsExternallyAllocated(); // 861
		CUtlMemory<VmaPool_T::Grow(
			int num);  // 806
		CUtlMemory<VmaPool_T::Base(); // 112
		CUtlVectorBase<VmaPool_T::Base(); // 368
		CUtlVectorBase<VmaPool_T::ResetDbgInfo(); // 824
		CUtlVectorBase<VmaPool_T::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<VmaPool_T::AddToTail(
				VmaPool_T* const& src);  // 1307
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 1291
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 1300
		CUtlString::~CUtlString(); // 153
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		_DOVK(VkResult result,
			const char* pCommand);  // 1304
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
			int nLineNumber);  // 1245
	CUtlMemory<VmaPool_T::operator[](
			int i);  // 588
	CUtlVectorBase<VmaPool_T::operator[](
			int i);  // 1248
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1310
} /* size: 1655, variables: 2, inline expansions: 8 (328 bytes) */

// <0059A297> vulkan/memorymgrvulkan.cpp:1313
// variables: 4
// function calls: 20
void CMemoryManagerVulkan::VmaFreeCustomPoolIfEmpty(VmaPool pVmaPool)
{
	VmaStatistics vmaStatistics; // 1316
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1325; // 1325
	{
		int32 nMemoryPool; // 1326
		{
			int nIndex; // 1328
			CUtlVectorBase<VmaPool_T::Count(); // 1328
			CUtlMemory<VmaPool_T::operator[](
					int i);  // 588
			CUtlVectorBase<VmaPool_T::operator[](
					int i);  // 1330
			CUtlMemory<VmaPool_T::operator[](
					int i);  // 602
			CUtlVectorBase<VmaPool_T::Element(
				int i);  // 1114
			CUtlMemory<VmaPool_T::operator[](
					int i);  // 602
			CUtlVectorBase<VmaPool_T::Element(
				int i);  // 1114
			memmove(void* __dest,
				const void* __src,
				size_t __len);  // 115
			V_memmove(void* dest,
					const void* src,
					size_t count);  // 1114
			CUtlVectorBase<VmaPool_T::ShiftElementsLeft(
						int elem,
						int num);  // 1608
			CUtlVectorBase<VmaPool_T::Remove(
				int elem);  // 1333
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
			int nLineNumber);  // 1325
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1342
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1342
} /* size: 504, variables: 2, inline expansions: 9 (387 bytes) */

// <0059A10C> vulkan/memorymgrvulkan.cpp:1347
// variables: 6
// function call: 1
void CMemoryManagerVulkan::GetStaticPoolBufferUsage(VulkanMemoryPoolType_t nMemoryPool)
{
	VkBufferUsageFlags nDeviceAddressFlags; // 1351
	VkBufferUsageFlags nBufferUsage; // 1360
	const char   __FUNCTION__; // 35637
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1391
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1394
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1397
	}
	CRenderDeviceVulkan::KHRBufferDeviceAddressEnabled(); // 1352
} /* size: 0, variables: 3, inline expansions: 1 (10 bytes) */

// <005A66E0> vulkan/memorymgrvulkan.cpp:1407
// variable: 1
// function call: 1
void CMemoryManagerVulkan::GetDynamicPoolBufferUsage(VulkanMemoryPoolType_t nMemoryPool)
{
	VkBufferUsageFlags nBufferUsage; // 1410
	{
	}
	CMemoryManagerVulkan::GetDynamicPoolBufferUsage(
					VulkanMemoryPoolType_t nMemoryPool);  // 1407
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <0059A0B5> vulkan/memorymgrvulkan.cpp:1407
// variables: 3
void CMemoryManagerVulkan::GetDynamicPoolBufferUsage(VulkanMemoryPoolType_t nMemoryPool)
{
	VkBufferUsageFlags nBufferUsage; // 1410
	const char   __FUNCTION__; // 35664
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1430
	}
} /* size: 0, variables: 2 */

// <00599C14> vulkan/memorymgrvulkan.cpp:1440
// variables: 7
// function calls: 3
void CMemoryManagerVulkan::AllocatePooled(IVmaAllocationBase* pObject, VulkanMemoryPoolType_t nMemoryPool, size_t nBytes, size_t nAlignmentBytes, VkMemoryPropertyFlags nMemoryProps, VmaAllocation* ppVmaAllocationOut, VkBuffer* ppVKBufferOut, const char* pDebugName)
{
	uint32_t nMemoryTypeIndex; // 1442
	VkBufferCreateInfo bufferCreateInfo; // 1449
	VmaAllocationCreateInfo allocInfo; // 1454
	VkResult nResult; // 1478
	const char   __FUNCTION__; // 35392
	{
		int* _pCrash; // 1500
	}
	{
		VkDebugUtilsObjectNameInfoEXT objectNameInfo; // 1511
	}
	CMemoryManagerVulkan::VmaMarkAllocationRequested(); // 1477
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 1500
	CRenderDeviceMgrVulkan::DebugUtilsEnabled(); // 1509
} /* size: 1084, variables: 5, inline expansions: 3 (56 bytes) */

// <00599B98> vulkan/memorymgrvulkan.cpp:1524
void CMemoryManagerVulkan::SetVmaAllocation(IVmaAllocationBase* pObject, VmaAllocation pVmaAllocation)
{
} /* size: 33 */

// <00598769> vulkan/memorymgrvulkan.cpp:1534
// variables: 10
// function calls: 62
void CMemoryManagerVulkan::AcquireDynamicPMBMemoryPool(VulkanMemoryPoolType_t nMemoryPool, size_t nDataSize, VkDeviceSize* pOffsetOut)
{
	IndexType_t nCurrentIndex; // 1538
	VulkanMemoryPoolList_t& poolList; // 1539
	VulkanMemoryPool_t* pPool; // 1540
	VulkanMemoryPool_t* pNewMemoryPool; // 1593
	VkMemoryPropertyFlags nMemoryProps; // 1596
	VkDeviceSize nPoolSize; // 1608
	{
		VkDeviceSize nOffsetToUse; // 1545
		CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::operator[](
				intp i);  // 494
		CUtlLinkedList<VulkanMemoryPool_t::operator[](
				long long int i);  // 1543
		CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
		CRenderDeviceBase::GetContextFrameCount(); // 1544
		ThreadInterlockedExchangeAdd(volatile int32* p,
						int32 value);  // 660
		CInterlockedIntT<unsigned int, 4>::AtomicAdd(
				unsigned int add);  // 1545
		{
		}
		CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::operator[](
				intp i);  // 494
		CUtlLinkedList<VulkanMemoryPool_t::operator[](
				long long int i);  // 1554
		CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
		CRenderDeviceBase::GetContextFrameCount(); // 1555
		ThreadInterlockedExchangeAdd(volatile int32* p,
						int32 value);  // 660
		CInterlockedIntT<unsigned int, 4>::AtomicAdd(
				unsigned int add);  // 1556
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
		CThreadRWLock_FastRead::UnlockRead(
				const char* pFileName,
				int nLineNumber);  // 1585
		CUtlLinkedList<VulkanMemoryPool_t::Next(
			long long int i);  // 1560
		CUtlLinkedList<VulkanMemoryPool_t::Head(); // 1563
		{
		}
		CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::operator[](
				intp i);  // 494
		CUtlLinkedList<VulkanMemoryPool_t::operator[](
				long long int i);  // 1565
		CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1567
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<unsigned int, 4>::operator=(
				unsigned int newValue);  // 1569
		CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
		CRenderDeviceBase::GetContextFrameCount(); // 1570
	}
	{
		VkBufferCreateInfo bufferCreateInfo; // 1612
		{
			CUtlString debugName; // 1647
			VkDebugUtilsObjectNameInfoEXT objectNameInfo; // 1650
			CUtlString::CUtlString(); // 1647
			CUtlString::Get(); // 1654
			CUtlString::~CUtlString(); // 1656
		}
		{
		}
		CMemoryManagerVulkan::GetDynamicPoolBufferUsage(
						VulkanMemoryPoolType_t nMemoryPool);  // 1407
		CMemoryManagerVulkan::GetDynamicPoolBufferUsage(
						VulkanMemoryPoolType_t nMemoryPool);  // 1615
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 1616
		CRenderDeviceMgrVulkan::DebugUtilsEnabled(); // 1645
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<unsigned int, 4>::operator=(
				unsigned int newValue);  // 1661
		CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1069
		CRenderDeviceBase::GetContextFrameCount(); // 1663
		CUtlString::CUtlString(); // 149
		CUtlString::~CUtlString(); // 153
		CUtlString::Get(); // 151
		_DOVK(VkResult result,
			const char* pCommand);  // 1669
		CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::operator[](
				intp i);  // 482
		CUtlLinkedList<VulkanMemoryPool_t::Element(
			long long int i);  // 842
		CopyConstruct<VulkanMemoryPool_t*>(VulkanMemoryPool_t** pMemory,
							VulkanMemoryPool_t* const& src);  // 842
		CUtlLinkedList<VulkanMemoryPool_t::InsertAfter(
				long long int after,
				VulkanMemoryPool_t* const& src);  // 1674
		{
		}
		CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::operator[](
				intp i);  // 367
		CUtlLinkedList<VulkanMemoryPool_t::InternalElement(
				long long int i);  // 982
		CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::operator[](
				intp i);  // 367
		CUtlLinkedList<VulkanMemoryPool_t::InternalElement(
				long long int i);  // 1011
		CUtlLinkedList<VulkanMemoryPool_t::LinkBefore(
				long long int before,
				long long int elem);  // 822
		CopyConstruct<VulkanMemoryPool_t*>(VulkanMemoryPool_t** pMemory,
							VulkanMemoryPool_t* const& src);  // 825
		CUtlLinkedList<VulkanMemoryPool_t::InsertBefore(
				long long int before,
				VulkanMemoryPool_t* const& src);  // 856
		CUtlLinkedList<VulkanMemoryPool_t::AddToTail(
				VulkanMemoryPool_t* const& src);  // 1678
	}
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
	CThreadRWLock_FastRead::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 1536
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1594
	CInterlockedIntT<unsigned int, 4>::CInterlockedIntT(); // 64
	VulkanMemoryPool_t::VulkanMemoryPool_t(); // 1593
	Max<long unsigned int>(const long unsigned int& val1,
				const long unsigned int& val2);  // 1608
} /* size: 0, variables: 6, inline expansions: 8 (142 bytes) */

// <00597EA9> vulkan/memorymgrvulkan.cpp:1693
// variables: 7
// function calls: 28
void CMemoryManagerVulkan::TrimStagingDynamicPMBMemoryPools()
{
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_1701; // 1701
	uint32_t nHighestFrameCompletedOnGPU; // 1702
	VulkanMemoryPoolList_t& poolList; // 1704
	IndexType_t nIndex; // 1705
	{
		VulkanMemoryPool_t* pPool; // 1712
		{
			IndexType_t nIndexToDelete; // 1723
			CUtlLinkedList<VulkanMemoryPool_t::Next(
				long long int i);  // 1724
			CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::IsValidIterator(
					const Iterator_t& it);  // 81
			CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::IsValidIterator(
					const Iterator_t& it);  // 82
			CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::HeaderToBlock(
					const BlockHeader_t* pHeader);  // 131
			CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::IsInBlock(
					intp i,
					BlockHeader_t* pBlockHeader);  // 85
			CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::GetIndex(
				const Iterator_t& it);  // 86
			{
				BlockHeader_t* pbh; // 88
				CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::HeaderToBlock(
						const BlockHeader_t* pHeader);  // 131
				CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::IsInBlock(
						intp i,
						BlockHeader_t* pBlockHeader);  // 90
			}
			{
			}
			CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::IsIdxAfter(
					intp i,
					const Iterator_t& it);  // 591
			CUtlLinkedList<VulkanMemoryPool_t::IsValidIndex(
					long long int i);  // 749
			Destruct<VulkanMemoryPool_t*>(VulkanMemoryPool_t** pMemory); // 753
			{
			}
			CUtlLinkedList<VulkanMemoryPool_t::Free(
				long long int elem);  // 907
			CUtlLinkedList<VulkanMemoryPool_t::Remove(
				long long int elem);  // 1725
			CUtlLinkedList<VulkanMemoryPool_t::Head(); // 1732
		}
		CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::operator[](
				intp i);  // 494
		CUtlLinkedList<VulkanMemoryPool_t::operator[](
				long long int i);  // 1712
		CUtlLinkedList<VulkanMemoryPool_t::Next(
			long long int i);  // 1738
	}
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
			int nLineNumber);  // 1701
	CInterlockedIntT<unsigned int, 4>::GetRaw(); // 1702
	CUtlLinkedList<VulkanMemoryPool_t::Head(); // 1705
	CUtlLinkedList<VulkanMemoryPool_t::Count(); // 1710
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 1741
} /* size: 0, variables: 4, inline expansions: 11 (737 bytes) */

// <00597B62> vulkan/memorymgrvulkan.cpp:1744
// variables: 6
// function calls: 9
void CMemoryManagerVulkan::DestroyAllDynamicPMBMemoryPools()
{
	{
		int nMemoryPool; // 1747
		{
			VulkanMemoryPoolList_t* pDynamicMemoryPoolListPMB; // 1749
			{
				long long int nIndex; // 1750
				{
					VulkanMemoryPool_t* pPool; // 1752
					CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::operator[](
							intp i);  // 494
					CUtlLinkedList<VulkanMemoryPool_t::operator[](
							long long int i);  // 1752
				}
				CUtlLinkedList<VulkanMemoryPool_t::Head(); // 1750
				CUtlLinkedList<VulkanMemoryPool_t::Next(
					long long int i);  // 1750
			}
			{
				BlockHeader_t* pbh; // 338
				{
					BlockHeader_t* pFree; // 340
				}
			}
			CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::Purge(); // 643
			Iterator_t::Iterator_t(
					BlockHeader_t* p,
					intp i);  // 96
			CUtlFixedMemory<UtlLinkedListElem_t<VulkanMemoryPool_t::InvalidIterator(); // 648
			CUtlLinkedList<VulkanMemoryPool_t::ResetDbgInfo(); // 650
			CUtlLinkedList<VulkanMemoryPool_t::Purge(); // 1760
		}
	}
} /* size: 311 */

// <00597846> vulkan/memorymgrvulkan.cpp:1769
// variables: 3
// function calls: 5
void CMemoryManagerVulkan::Allocate(size_t nBytes, VkMemoryPropertyFlags nMemoryProps, VkBufferUsageFlags nBufferUsage, VkDeviceMemory* ppMemoryOut, VkBuffer* ppVKBufferOut, const char* pDebugName, VulkanMemoryPoolType_t nMemoryPoolType)
{
	VkBufferCreateInfo bufferCreateInfo; // 1771
	bool bResult; // 1777
	{
		VkDebugUtilsObjectNameInfoEXT objectNameInfo; // 1786
	}
	CUtlString::CUtlString(); // 149
	CUtlString::Get(); // 151
	CUtlString::~CUtlString(); // 153
	_DOVK(VkResult result,
		const char* pCommand);  // 1775
	CRenderDeviceMgrVulkan::DebugUtilsEnabled(); // 1784
} /* size: 509, variables: 2, inline expansions: 5 (229 bytes) */

// <00597525> vulkan/memorymgrvulkan.cpp:1804
// variables: 4
// function calls: 5
void CMemoryManagerVulkan::Allocate(IVmaAllocationBase* pObject, size_t nBytes, VkMemoryPropertyFlags nMemoryProps, VkBufferUsageFlags nBufferUsage, VmaAllocation* ppVmaAllocationOut, VkBuffer* ppVKBufferOut, const char* pDebugName, VulkanMemoryPoolType_t nMemoryPoolType)
{
	VkBufferCreateInfo bufferCreateInfo; // 1806
	VmaAllocationCreateInfo allocInfo; // 1811
	VkResult nResult; // 1816
	{
		VkDebugUtilsObjectNameInfoEXT objectNameInfo; // 1828
	}
	CUtlString::CUtlString(); // 149
	CUtlString::Get(); // 151
	CUtlString::~CUtlString(); // 153
	_DOVK(VkResult result,
		const char* pCommand);  // 1817
	CRenderDeviceMgrVulkan::DebugUtilsEnabled(); // 1826
} /* size: 503, variables: 3, inline expansions: 5 (216 bytes) */

// <00597437> vulkan/memorymgrvulkan.cpp:1843
// variable: 1
void CMemoryManagerVulkan::Allocate(const VkMemoryAllocateInfo* pAllocInfo, VkDeviceMemory* ppMemoryOut, const char* pDebugName, VulkanMemoryPoolType_t nMemoryPoolType)
{
	VkResult nResult; // 1845
} /* size: 0, variables: 1 */

// <00596BEB> vulkan/memorymgrvulkan.cpp:1859
// variables: 2
// function calls: 24
void CMemoryManagerVulkan::AddFencedResources(int nNumCmdBuffers, VulkanCommandBufferAndPool_t* pCmdBufferAndPools, CVulkanPooledFenceObject* pFence)
{
	FencedResourceList_t newFencedResource; // 1861
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 1866
	ThreadPause(void); // 208
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 203
	CTSListBase::Pop(); // 1085
	CopyConstruct<CMemoryManagerVulkan::FencedResourceList_t>(FencedResourceList_t* pMemory,
									const FencedResourceList_t& src);  // 1090
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
		CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::FinishPush(
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
		CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::InterlockedCompareExchangeNode(
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
	CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::InterlockedCompareExchangeNodeLink(
						volatile union NodeLink_t* pLink,
						const union NodeLink_t& value,
						const union NodeLink_t& comperand);  // 1135
	CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::FinishPush(
			Node_t* pNode,
			const union NodeLink_t& oldTail);  // 991
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 993
	CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::Push(
		Node_t* pNode);  // 1091
	Node_t::Node_t(); // 1088
	CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::PushItem(
		const FencedResourceList_t& init);  // 1867
} /* size: 0, variables: 1, inline expansions: 17 (941 bytes) */

// <00596406> vulkan/memorymgrvulkan.cpp:1874
// variables: 2
// function calls: 25
void CMemoryManagerVulkan::MarkLastFenceOfFrame(bool bHibernating)
{
	{
		FencedResourceList_t newFencedResource; // 1880
		ThreadPause(void); // 208
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 203
		CTSListBase::Pop(); // 1085
		Node_t::Node_t(); // 1088
		CopyConstruct<CMemoryManagerVulkan::FencedResourceList_t>(FencedResourceList_t* pMemory,
										const FencedResourceList_t& src);  // 1090
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
			CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::InterlockedCompareExchangeNodeLink(
								volatile union NodeLink_t* pLink,
								const union NodeLink_t& value,
								const union NodeLink_t& comperand);  // 1135
			CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::FinishPush(
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
			CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::InterlockedCompareExchangeNode(
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
		CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::InterlockedCompareExchangeNodeLink(
							volatile union NodeLink_t* pLink,
							const union NodeLink_t& value,
							const union NodeLink_t& comperand);  // 1135
		CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::FinishPush(
				Node_t* pNode,
				const union NodeLink_t& oldTail);  // 991
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 582
		CInterlockedIntT<int, 4>::operator++(
				int);  // 993
		CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::Push(
			Node_t* pNode);  // 1091
		CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::PushItem(
			const FencedResourceList_t& init);  // 1882
	}
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 582
	CInterlockedIntT<unsigned int, 4>::operator++(
			int);  // 1889
} /* size: 0, inline expansions: 3 (27 bytes) */

// <005962DD> vulkan/memorymgrvulkan.cpp:1897
// variable: 1
void CMemoryManagerVulkan::AddBufferMemoryBarrier(VkCommandBuffer pCmdBuf, VkAccessFlags nSrcAccessMask, VkAccessFlags nDestAccessMask, VkPipelineStageFlags nSrcStageMask, VkPipelineStageFlags nDestStageMask, VkBuffer pBuffer, VkDeviceSize nOffset, VkDeviceSize nSize)
{
	VkBufferMemoryBarrier bufferMemoryBarrier; // 1900
} /* size: 157, variables: 1 */

// <005960CE> vulkan/memorymgrvulkan.cpp:1914
// variable: 1
// function calls: 6
void CMemoryManagerVulkan::ProcessDefragDeletionQueue(bool bForce)
{
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1918; // 1918
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 1918
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1923
	}
} /* size: 182 */

// <005942C1> vulkan/memorymgrvulkan.cpp:1930
// variables: 14
// function calls: 114
void CMemoryManagerVulkan::PurgeFencedResources(bool bCheckFences)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_1936; // 1936
	FencedResourceList_t pendingFencedResource; // 1939
	CUtlLinkedList<short unsigned int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<short unsigned int, short unsigned int>, short unsigned int> > resourcesToDelete; // 1950
	{
		short unsigned int nIndex; // 1955
		{
			FencedResourceList_t& fencedResource; // 1957
			VkResult nFenceResult; // 1977
			{
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_1996; // 1996
				{
					int nCmdBuffer; // 1997
					{
						VulkanCommandBufferAndPool_t* pCommandBufferAndPool; // 2001
						VulkanCommandBufferType_t nCommandBufferType; // 2003
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
						int nLineNumber);  // 1996
				ThreadInterlockedExchange64(volatile int64* p,
								int64 value);  // 874
				CThreadFastMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 944
				Unlock(CThreadFastMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2007
			}
			CUtlMemory<UtlLinkedListElem_t<short unsigned int, short unsigned int>, short unsigned int>::operator[](
					short unsigned int i);  // 482
			Element(const CUtlLinkedList<short unsigned int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<sh this,
				short unsigned int i);  // 842
			CopyConstruct<short unsigned int>(short unsigned int* pMemory,
								const short unsigned int& src);  // 842
			InsertAfter(const CUtlLinkedList<short unsigned int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<sh this,
					short unsigned int after,
					const short unsigned int& src);  // 850
			AddToHead(const CUtlLinkedList<short unsigned int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<sh this,
					const short unsigned int& src);  // 1992
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 204
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
			CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 2012
			operator[](const CUtlMemory<UtlLinkedListElem_t<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int>, short unsigned int> this,
					short unsigned int i);  // 494
			operator[](const CUtlLinkedList<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int, false, short unsigned int, CUtlMemor this,
					short unsigned int i);  // 1957
			CVulkanPooledFenceObject::Get(); // 1980
			CInterlockedIntT<unsigned int, 4>::operator unsigned int(); // 1967
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<unsigned int, 4>::operator++(); // 582
			CInterlockedIntT<unsigned int, 4>::operator++(
					int);  // 1972
			CUtlMemory<UtlLinkedListElem_t<short unsigned int, short unsigned int>, short unsigned int>::operator[](
					short unsigned int i);  // 482
			Element(const CUtlLinkedList<short unsigned int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<sh this,
				short unsigned int i);  // 842
			CopyConstruct<short unsigned int>(short unsigned int* pMemory,
								const short unsigned int& src);  // 842
			InsertAfter(const CUtlLinkedList<short unsigned int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<sh this,
					short unsigned int after,
					const short unsigned int& src);  // 850
			AddToHead(const CUtlLinkedList<short unsigned int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<sh this,
					const short unsigned int& src);  // 1973
			CInterlockedIntT<unsigned int, 4>::operator unsigned int(); // 1969
			ThreadInterlockedExchangeAdd(volatile int32* p,
							int32 value);  // 669
			CInterlockedIntT<unsigned int, 4>::operator+=(
					unsigned int add);  // 1969
			ThreadInterlockedExchange(volatile int32* p,
							int32 value);  // 641
			CInterlockedIntT<unsigned int, 4>::operator=(
					unsigned int newValue);  // 1970
		}
		Tail(const CUtlLinkedList<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int, false, short unsigned int, CUt this); // 1955
		operator[](const CUtlMemory<UtlLinkedListElem_t<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int>, short unsigne this,
				short unsigned int i);  // 368
		InternalElement(const CUtlLinkedList<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int, false, short unsigned int, CUt this,
				short unsigned int i);  // 543
		Previous(const CUtlLinkedList<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int, false, short unsigned int, CUt this,
			short unsigned int i);  // 1955
	}
	{
		short unsigned int nDeleteIndex; // 2016
		Head(const CUtlLinkedList<short unsigned int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListEle this); // 2016
		CUtlMemory<UtlLinkedListElem_t<short unsigned int, short unsigned int>, short unsigned int>::operator[](
				short unsigned int i);  // 494
		operator[](const CUtlLinkedList<short unsigned int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<sh this,
				short unsigned int i);  // 2018
		IsIdxAfter(const CUtlMemory<UtlLinkedListElem_t<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int>, short unsigne this,
				short unsigned int i,
				const Iterator_t& it);  // 591
		operator[](const CUtlMemory<UtlLinkedListElem_t<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int>, short unsigne this,
				short unsigned int i);  // 594
		IsValidIndex(const CUtlLinkedList<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int, false, short unsigned int, CUt this,
				short unsigned int i);  // 583
		IsIdxValid(const CUtlMemory<UtlLinkedListElem_t<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int>, short unsigne this,
				short unsigned int i);  // 588
		IsValidIndex(const CUtlLinkedList<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int, false, short unsigned int, CUt this,
				short unsigned int i);  // 749
		{
		}
		operator[](const CUtlMemory<UtlLinkedListElem_t<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int>, short unsigned int> this,
				short unsigned int i);  // 367
		InternalElement(const CUtlLinkedList<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int, false, short unsigned int, CUtlMemor this,
				short unsigned int i);  // 752
		Destruct<CMemoryManagerVulkan::FencedResourceList_t>(FencedResourceList_t* pMemory); // 753
		Free(const CUtlLinkedList<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int, false, short unsigned int, CUtlMemor this,
			short unsigned int elem);  // 907
		Remove(const CUtlLinkedList<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int, false, short unsigned int, CUtlMemor this,
			short unsigned int elem);  // 2018
		CUtlMemory<UtlLinkedListElem_t<short unsigned int, short unsigned int>, short unsigned int>::operator[](
				short unsigned int i);  // 368
		InternalElement(const CUtlLinkedList<short unsigned int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListEle this,
				short unsigned int i);  // 550
		Next(const CUtlLinkedList<short unsigned int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListEle this,
			short unsigned int i);  // 2016
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
			int nLineNumber);  // 1936
	ThreadPause(void); // 173
	ThreadInterlockedAssignIf128(volatile int128* pDest,
					const int128& value,
					const int128& comparand);  // 478
	ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
						const InterlockedPointerX2SizedInt_t& value,
						const InterlockedPointerX2SizedInt_t& comperand);  // 168
	CTSListBase::Push(
		TSLNodeBase_t* pNode);  // 1080
	CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::FreeNode(
		Node_t* pNode);  // 1103
	CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::PopItem(
		FencedResourceList_t* pResult);  // 1940
	IsIdxValid(const CUtlMemory<UtlLinkedListElem_t<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int>, short unsigne this,
			short unsigned int i);  // 588
	operator[](const CUtlMemory<UtlLinkedListElem_t<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int>, short unsigne this,
			short unsigned int i);  // 594
	IsValidIndex(const CUtlLinkedList<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int, false, short unsigned int, CUt this,
			short unsigned int i);  // 583
	IsIdxAfter(const CUtlMemory<UtlLinkedListElem_t<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int>, short unsigne this,
			short unsigned int i,
			const Iterator_t& it);  // 591
	IsValidIndex(const CUtlLinkedList<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int, false, short unsigned int, CUt this,
			short unsigned int i);  // 1020
	{
	}
	IsInList(const CUtlLinkedList<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int, false, short unsigned int, CUt this,
		short unsigned int i);  // 598
	IsIdxValid(const CUtlMemory<UtlLinkedListElem_t<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int>, short unsigne this,
			short unsigned int i);  // 600
	IsIdxAfter(const CUtlMemory<UtlLinkedListElem_t<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int>, short unsigne this,
			short unsigned int i,
			const Iterator_t& it);  // 600
	IsInList(const CUtlLinkedList<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int, false, short unsigned int, CUt this,
		short unsigned int i);  // 1023
	operator[](const CUtlMemory<UtlLinkedListElem_t<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int>, short unsigned int> this,
			short unsigned int i);  // 367
	InternalElement(const CUtlLinkedList<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int, false, short unsigned int, CUtlMemor this,
			short unsigned int i);  // 1026
	operator[](const CUtlMemory<UtlLinkedListElem_t<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int>, short unsigned int> this,
			short unsigned int i);  // 367
	InternalElement(const CUtlLinkedList<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int, false, short unsigned int, CUtlMemor this,
			short unsigned int i);  // 1050
	LinkAfter(const CUtlLinkedList<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int, false, short unsigned int, CUtlMemor this,
			short unsigned int after,
			short unsigned int elem);  // 839
	operator[](const CUtlMemory<UtlLinkedListElem_t<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int>, short unsigned int> this,
			short unsigned int i);  // 482
	Element(const CUtlLinkedList<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int, false, short unsigned int, CUtlMemor this,
		short unsigned int i);  // 842
	CopyConstruct<CMemoryManagerVulkan::FencedResourceList_t>(FencedResourceList_t* pMemory,
									const FencedResourceList_t& src);  // 842
	InsertAfter(const CUtlLinkedList<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int, false, short unsigned int, CUtlMemor this,
			short unsigned int after,
			const FencedResourceList_t& src);  // 850
	AddToHead(const CUtlLinkedList<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int, false, short unsigned int, CUtlMemor this,
			const FencedResourceList_t& src);  // 1942
	CUtlMemory<UtlLinkedListElem_t<short unsigned int, short unsigned int>, short unsigned int>::ValidateGrowSize(); // 475
	CUtlMemory<UtlLinkedListElem_t<short unsigned int, short unsigned int>, short unsigned int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 448
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlLinkedListElem_t<short unsigned int, short unsigned int>, short unsigned int>::InvalidIterator(); // 448
	ConstructList(const CUtlLinkedList<short unsigned int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<sh this); // 454
	ResetDbgInfo(const CUtlLinkedList<short unsigned int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<sh this); // 455
	CUtlLinkedList(const CUtlLinkedList<short unsigned int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<sh this,
			int growSize,
			int initSize);  // 1950
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlLinkedListElem_t<short unsigned int, short unsigned int>, short unsigned int>::InvalidIterator(); // 917
	Iterator_t::operator==(
			const Iterator_t  it);  // 917
	{
	}
	{
	}
	{
	}
	{
	}
	{
		short unsigned int i; // 946
		short unsigned int next; // 947
		{
			ListElem_t& internalElem; // 951
			CUtlMemory<UtlLinkedListElem_t<short unsigned int, short unsigned int>, short unsigned int>::operator[](
					short unsigned int i);  // 368
			InternalElement(const CUtlLinkedList<short unsigned int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListEle this,
					short unsigned int i);  // 550
			Next(const CUtlLinkedList<short unsigned int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListEle this,
				short unsigned int i);  // 950
			Destruct<short unsigned int>(short unsigned int* pMemory); // 952
		}
		Head(const CUtlLinkedList<short unsigned int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListEle this); // 957
	}
	RemoveAll(const CUtlLinkedList<short unsigned int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<sh this); // 461
	ValidateAlignment<UtlLinkedListElem_t<short unsigned int, short unsigned int> >(void); // 508
	CUtlMemory<UtlLinkedListElem_t<short unsigned int, short unsigned int>, short unsigned int>::IsExternallyAllocated(); // 905
	CUtlMemory<UtlLinkedListElem_t<short unsigned int, short unsigned int>, short unsigned int>::Purge(); // 903
	CUtlMemory<UtlLinkedListElem_t<short unsigned int, short unsigned int>, short unsigned int>::Purge(); // 510
	CUtlMemory<UtlLinkedListElem_t<short unsigned int, short unsigned int>, short unsigned int>::~CUtlMemory(); // 462
	~CUtlLinkedList(const CUtlLinkedList<short unsigned int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<sh this); // 2022
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2022
} /* size: 0, variables: 3, inline expansions: 52 (2647 bytes) */

// <0059338D> vulkan/memorymgrvulkan.cpp:2035
// variables: 17
// function calls: 48
void CMemoryManagerVulkan::PurgeUnbalancedCommandBufferPools()
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2037; // 2037
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2043; // 2043
		{
			int _idx_pPerThread; // 2044
			{
				PerThreadDataVulkan_t* pPerThread; // 2044
				{
					CommandBufferPool_t* pPool; // 2046
					int32 nCommandBuffersAvailablePerFrame; // 2052
					float flAverage; // 2053
					float flMaximum; // 2054
					{
						CFmtStr threadName; // 2064
						CBufferString::ReadBuffer(); // 1374
						CBufferString::ReadBuffer(); // 771
						CBufferString::Get(); // 80
						CFmtStrN<256>::Get(); // 2077
						CBufferString::InitMinConstruct(
								bool bGrowable);  // 712
						CBufferString::CBufferString(); // 591
						CBufferStringN<256>::CBufferStringN(); // 29
						CFmtStrN<256>::CFmtStrN(); // 2064
						CBufferString::~CBufferString(); // 587
						CBufferStringN<256>::~CBufferStringN(); // 41
						CFmtStrN<256>::~CFmtStrN(); // 2079
					}
					Max<int>(const int& val1,
						const int& val2);  // 2061
					CUtlMovingAverage<30>::Reset(); // 85
					CUtlMovingAverage<30>::PushValue(
							float v);  // 2050
					Min<unsigned int>(const unsigned int& val1,
								const unsigned int& val2);  // 33
					CUtlMovingAverage<30>::GetAverage(); // 49
					{
						int i; // 56
					}
					CUtlMovingAverage<30>::GetAverageAndAbsRange(
								float* pOutAverage,
								float* pOutMaxAbsRange,
								float* pOutMinValue,
								float* pOutMaxValue);  // 38
					CUtlMovingAverage<30>::GetAverageAndAbsRange(
								float* pOutAverage,
								float* pOutMaxAbsRange,
								float* pOutMinValue,
								float* pOutMaxValue);  // 2055
				}
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
				int nLineNumber);  // 2043
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2084
	}
	{
		CommandBufferPool_t* pLargestPool; // 2088
		CommandBufferPool_t* pNextLargestPool; // 2089
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2091; // 2091
		{
			int _idx_pPerThread; // 2092
			{
				PerThreadDataVulkan_t* pPerThread; // 2092
				{
					CommandBufferPool_t* pPool; // 2094
					{
						int32 nPrevLargestPoolSize; // 2108
					}
				}
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
				int nLineNumber);  // 2091
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2136
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
			int nLineNumber);  // 2037
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2137
} /* size: 1331, variables: 1, inline expansions: 10 (534 bytes) */

// <00592722> vulkan/memorymgrvulkan.cpp:2143
// variables: 9
// function calls: 41
void CMemoryManagerVulkan::GetCommandBuffer(PerThreadDataVulkan_t* pPerThread, VulkanCommandBufferType_t nCommandBufferType, CommandBufferPool_t** ppCmdBufferPoolOut)
{
	const char   __FUNCTION__; // 35446
	{
		int nCurrentCmdBuffersAvailable; // 2152
		CommandBufferPool_t* pPool; // 2153
		{
			VkCommandBuffer pCmdBuffer; // 2202
			{
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2156; // 2156
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
						int nLineNumber);  // 2156
				ThreadInterlockedExchange64(volatile int64* p,
								int64 value);  // 874
				CThreadFastMutex::Unlock(
					const char* pFileName,
					int nLineNumber);  // 944
				Unlock(CThreadFastMutex& lock,
					const char* pFileName,
					int nLineNumber);  // 983
				CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2167
				CUtlMovingAverage<30>::CUtlMovingAverage(); // 98
				CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
				CTSListBase::CTSListBase(); // 846
				ThreadInterlockedExchange(volatile int32* p,
								int32 value);  // 641
				CInterlockedIntT<int, 4>::operator=(
						int newValue);  // 862
				Node_t::Node_t(); // 864
				CTSQueue<VkCommandBuffer_T::End(); // 865
				CTSQueue<VkCommandBuffer_T::CTSQueue(); // 98
				CommandBufferPool_t::CommandBufferPool_t(); // 2160
				memset(void* __dest,
					int __ch,
					size_t __len);  // 67
				V_memset(void* dest,
					int fill,
					size_t count);  // 2161
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2169
			}
			{
				VkCommandBuffer pTrimCommandBuffer; // 2176
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2193
				}
				ThreadPause(void); // 173
				ThreadInterlockedAssignIf128(volatile int128* pDest,
								const int128& value,
								const int128& comparand);  // 478
				ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
									const InterlockedPointerX2SizedInt_t& value,
									const InterlockedPointerX2SizedInt_t& comperand);  // 168
				CTSListBase::Push(
					TSLNodeBase_t* pNode);  // 1080
				CTSQueue<VkCommandBuffer_T::FreeNode(
					Node_t* pNode);  // 1103
				CTSQueue<VkCommandBuffer_T::PopItem(
					VkCommandBuffer_T** pResult);  // 2180
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2201
			}
			CInterlockedIntT<int, 4>::operator int(); // 1109
			CTSQueue<VkCommandBuffer_T::Count(); // 2200
			ThreadPause(void); // 173
			ThreadInterlockedAssignIf128(volatile int128* pDest,
							const int128& value,
							const int128& comparand);  // 478
			ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
								const InterlockedPointerX2SizedInt_t& value,
								const InterlockedPointerX2SizedInt_t& comperand);  // 168
			CTSListBase::Push(
				TSLNodeBase_t* pNode);  // 1080
			CTSQueue<VkCommandBuffer_T::FreeNode(
				Node_t* pNode);  // 1103
			CTSQueue<VkCommandBuffer_T::PopItem(
				VkCommandBuffer_T** pResult);  // 2204
		}
		Count(const CUtlLinkedList<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int, false, short unsigned int, CUt this); // 2218
		CInterlockedIntT<int, 4>::operator int(); // 1109
		CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::Count(); // 2218
		CInterlockedIntT<int, 4>::operator int(); // 1109
		CTSQueue<CMemoryManagerVulkan::FencedResourceList_t, false>::Count(); // 2220
		Count(const CUtlLinkedList<CMemoryManagerVulkan::FencedResourceList_t, short unsigned int, false, short unsigned int, CUt this); // 2220
	}
} /* size: 0, variables: 1 */

// <005923AB> vulkan/memorymgrvulkan.cpp:2240
// variable: 1
// function calls: 10
void CMemoryManagerVulkan::ReleaseCommandBuffer(VkCommandBuffer pCmdBuffer, VulkanCommandBufferType_t nCommandBufferType, CommandBufferPool_t* pCmdBufferPool)
{
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2242; // 2242
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
			int nLineNumber);  // 2242
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 874
	CThreadFastMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadFastMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2244
} /* size: 196, variables: 1, inline expansions: 10 (418 bytes) */

// <005922EA> vulkan/memorymgrvulkan.cpp:2247
// variables: 3
void CMemoryManagerVulkan::GetTotalFragmentation()
{
	int64 nTotalFreeSpace; // 2249
	{
		VmaBudget budget; // 2255
		{
			int i; // 2257
		}
	}
} /* size: 157, variables: 1 */

// <00591679> vulkan/memorymgrvulkan.cpp:2269
// variables: 15
// function calls: 31
void CMemoryManagerVulkan::OnPrintStats(const CCommandContext& ctx, const CCommand& args)
{
	VkDeviceSize nTotalSize; // 2271
	VmaBudget budget; // 2274
	int64 nVmaTotalAllocatedSpace; // 2276
	int64 nVmaTotalUnusedSpace; // 2277
	VkDeviceSize nTotalPMBSize; // 2284
	{
		int i; // 2278
	}
	{
		int nMemoryPool; // 2286
	}
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2297; // 2297
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2298; // 2298
		int32 nTotalCommandBuffers; // 2300
		{
			int _idx_pPerThread; // 2301
			{
				PerThreadDataVulkan_t* pPerThread; // 2301
				{
					CommandBufferPool_t* pPool; // 2303
					char szThreadName; // 2307
					CFmtStr threadName; // 2309
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 80
					CFmtStrN<256>::Get(); // 2318
					CBufferString::~CBufferString(); // 587
					CBufferStringN<256>::~CBufferStringN(); // 41
					CFmtStrN<256>::~CFmtStrN(); // 2320
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 712
					CBufferString::CBufferString(); // 591
					CBufferStringN<256>::CBufferStringN(); // 29
					CFmtStrN<256>::CFmtStrN(); // 2309
				}
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
				int nLineNumber);  // 2297
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
				int nLineNumber);  // 2298
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2322
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2322
	}
} /* size: 1318, variables: 5 */

// <005914AD> vulkan/memorymgrvulkan.cpp:2328
// variables: 4
// function calls: 2
void CMemoryManagerVulkan::VmaPrintFragmentationStats(LoggingSeverity_t nLoggingSeverity)
{
	VmaBudget budget; // 2331
	int64 nTotalAllocatedSpace; // 2333
	int64 nTotalUnusedSpace; // 2334
	{
		int i; // 2335
	}
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 2340
} /* size: 216, variables: 3, inline expansions: 2 (0 bytes) */

// <00591432> vulkan/memorymgrvulkan.cpp:2347
void CMemoryManagerVulkan::OnPrintFragmentationStats(const CCommandContext& ctx, const CCommand& args)
{
} /* size: 14 */

// <00590E72> vulkan/memorymgrvulkan.cpp:2355
// variables: 11
// function calls: 10
void CMemoryManagerVulkan::AppendStatsSummaryString(CBufferString* pOut)
{
	VkDeviceSize nTotalStaticSize; // 2357
	VmaBudget budget; // 2358
	VkDeviceSize nTotalUnusedSpace; // 2360
	VkDeviceSize nTotalPMBSize; // 2368
	int32 nTotalCommandBuffers; // 2374
	{
		int i; // 2361
	}
	{
		int nMemoryPool; // 2369
	}
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_2376; // 2376
		{
			int _idx_pPerThread; // 2377
			{
				PerThreadDataVulkan_t* pPerThread; // 2377
				{
					CommandBufferPool_t* pPool; // 2379
				}
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
				int nLineNumber);  // 2376
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 2383
	}
} /* size: 644, variables: 5 */

// <00590485> vulkan/memorymgrvulkan.cpp:2393
// variables: 7
// function calls: 35
void CMemoryManagerVulkan::OnVmaGpuMemDump(const CCommandContext& ctx, const CCommand& args)
{
	int s_nMemDumpCount; // 2398
	CFmtStr strDumpName; // 2399
	char* pStatsString; // 2409
	const char   __FUNCTION__; // 35419
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2411
	}
	{
		CUtlBuffer buf; // 2414
		CBufferString fullOutputPath; // 2418
		V_strlen(const char* str); // 2415
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 83
		CFmtStrN<256>::operator char const*(); // 2417
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 2418
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 83
		CFmtStrN<256>::operator char const*(); // 2419
		CFileSystemPassThru::RelativePathToFullWritePath(
						const char* pRelativePath,
						const char* pWritePathID,
						CBufferString* pLocalPath);  // 133
		CFileSystemPassThru::RelativePathToFullWritePath(
						const char* pRelativePath,
						const char* pWritePathID,
						CBufferString* pLocalPath);  // 2419
		CBufferString::~CBufferString(); // 2422
		ValidateAlignment<unsigned char>(void); // 508
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned char, int>::Purge(); // 903
		CUtlMemory<unsigned char, int>::Purge(); // 510
		CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
		CUtlBuffer::~CUtlBuffer(); // 2422
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 2420
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<256>::CBufferStringN(); // 29
	CFmtStrN<256>::CFmtStrN(); // 2399
	CCommand::ArgC(); // 2400
	CCommand::Arg(
		int nIndex);  // 2402
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 671
	CBufferStringN<256>::operator=(
			const char* pSrc);  // 93
	CFmtStrN<256>::operator=(
			const char* pchValue);  // 2402
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 2423
} /* size: 0, variables: 4, inline expansions: 12 (198 bytes) */

// <00590294> vulkan/memorymgrvulkan.cpp:2428
// variables: 2
// function calls: 5
void CMemoryManagerVulkan::OnVmaDefrag(const CCommandContext& ctx, const CCommand& args)
{
	RenderDefragFlags_t defragFlags; // 2430
	{
		int nDefragValue; // 2433
		CCommand::Arg(
			int nIndex);  // 2433
	}
	CCommand::ArgC(); // 2431
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 639
	CMemoryManagerVulkan::VmaDefrag(
			RenderDefragFlags_t defragFlags,
			bool bAsyncDefrag);  // 2439
} /* size: 130, variables: 1, inline expansions: 4 (103 bytes) */

// <0058FEFF> vulkan/memorymgrvulkan.cpp:2445
// variables: 6
// function calls: 12
void CMemoryManagerVulkan::UpdateStats()
{
	{
		uint nDynamicTotalPools; // 2452
		VkDeviceSize nDynamicTotalPoolSize; // 2453
		VulkanMemoryPoolType_t nMemoryPool; // 2454
		CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> > generated_id_2455; // 2455
		{
			long long int nIndex; // 2456
			{
				const VulkanMemoryPool_t* pPool; // 2458
			}
		}
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
		CThreadRWLock_FastRead::LockForRead(
				const char* pFileName,
				int nLineNumber);  // 951
		Lock(CThreadRWLock_FastRead& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::CAutoLockT(
				const CThreadRWLock_FastRead& lock,
				const char* pFilename,
				int nLineNumber);  // 2455
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
		CThreadRWLock_FastRead::UnlockRead(
				const char* pFileName,
				int nLineNumber);  // 952
		Unlock(CThreadRWLock_FastRead& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 2462
	}
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 2448
} /* size: 141, inline expansions: 2 (14 bytes) */

