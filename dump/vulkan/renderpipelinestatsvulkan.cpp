
//
// vulkan/renderpipelinestatsvulkan.cpp
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 35
//

// <00B1650D> vulkan/renderpipelinestatsvulkan.cpp:27
inline VkQueryPipelineStatisticFlags GetQueryPipelineStatistics(void)
{
} /* size: 0 */

// <00B0B69F> vulkan/renderpipelinestatsvulkan.cpp:38
// variables: 7
// function calls: 12
void CVulkanQueryPool<CThreadMutex>::Init(VkDevice pDeviceVulkan, VkQueryType nType, uint nInitialSize)
{
	{
		VkQueryPool pQueryPoolVulkan; // 48
		VkQueryPoolCreateInfo queryPoolCreateInfo; // 49
		VkDeviceSize nBytesPerQuery; // 54
		VulkanQueryPool_t* pQueryPool; // 70
		{
			int nBit; // 59
		}
		{
			uint32_t i; // 87
			{
				VulkanQuery_t* pQuery; // 89
				CUtlMemory<VulkanQuery_t::operator[](
						int i);  // 588
				CUtlVectorBase<VulkanQuery_t::operator[](
						int i);  // 93
			}
		}
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 68
		CRenderDeviceVulkan::MemoryManager(); // 75
		CUtlMemory<UtlLinkedListElem_t<VulkanQueryPool_t::operator[](
				short unsigned int i);  // 482
		CUtlLinkedList<VulkanQueryPool_t::Element(
			short unsigned int i);  // 825
		CopyConstruct<VulkanQueryPool_t*>(VulkanQueryPool_t** pMemory,
							VulkanQueryPool_t* const& src);  // 825
		CUtlLinkedList<VulkanQueryPool_t::InsertBefore(
				short unsigned int before,
				VulkanQueryPool_t* const& src);  // 856
		CUtlLinkedList<VulkanQueryPool_t::AddToTail(
				VulkanQueryPool_t* const& src);  // 83
	}
} /* size: 690 */

// <00B0AE90> vulkan/renderpipelinestatsvulkan.cpp:101
// variables: 6
// function calls: 29
void CVulkanQueryPool<CThreadMutex>::Deinit()
{
	const char   __FUNCTION__; // 18268
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_103; // 103
	{
		short unsigned int nIndex; // 106
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 108
		}
		{
			VulkanQueryPool_t* pQueryPool; // 111
			CUtlMemory<UtlLinkedListElem_t<VulkanQueryPool_t::operator[](
					short unsigned int i);  // 494
			CUtlLinkedList<VulkanQueryPool_t::operator[](
					short unsigned int i);  // 111
			CRenderDeviceVulkan::MemoryManager(); // 113
		}
		CUtlLinkedList<VulkanQueryPool_t::Head(); // 106
		CUtlMemory<UtlLinkedListElem_t<VulkanQueryPool_t::operator[](
				short unsigned int i);  // 368
		CUtlLinkedList<VulkanQueryPool_t::InternalElement(
				short unsigned int i);  // 550
		CUtlLinkedList<VulkanQueryPool_t::Next(
			short unsigned int i);  // 106
	}
	{
		int i; // 118
		CUtlVectorBase<VulkanQuery_t::Count(); // 118
		CUtlMemory<VulkanQuery_t::operator[](
				int i);  // 588
		CUtlVectorBase<VulkanQuery_t::operator[](
				int i);  // 120
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
			int nLineNumber);  // 103
	CUtlMemory<UtlLinkedListElem_t<VulkanQueryPool_t::IsExternallyAllocated(); // 905
	CUtlMemory<UtlLinkedListElem_t<VulkanQueryPool_t::Purge(); // 903
	CUtlMemory<UtlLinkedListElem_t<VulkanQueryPool_t::Purge(); // 643
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlLinkedListElem_t<VulkanQueryPool_t::InvalidIterator(); // 648
	CUtlLinkedList<VulkanQueryPool_t::ResetDbgInfo(); // 650
	CUtlLinkedList<VulkanQueryPool_t::Purge(); // 117
	CUtlVectorBase<VulkanQuery_t::RemoveAll(); // 1798
	CUtlMemory<VulkanQuery_t::IsExternallyAllocated(); // 905
	CUtlMemory<VulkanQuery_t::Purge(); // 903
	CUtlMemory<VulkanQuery_t::Purge(); // 1799
	CUtlVectorBase<VulkanQuery_t::ResetDbgInfo(); // 1800
	CUtlVectorBase<VulkanQuery_t::Purge(); // 122
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 123
} /* size: 491, variables: 2, inline expansions: 19 (605 bytes) */

// <00B08A4A> vulkan/renderpipelinestatsvulkan.cpp:126
// variables: 12
// function calls: 31
void CVulkanQueryPool<CThreadMutex>::Alloc()
{
	const char   __FUNCTION__; // 18247
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_128; // 128
	int32_t nIndex; // 179
	VulkanQuery_t* pQuery; // 183
	{
		VkQueryPool pQueryPoolVulkan; // 134
		VkQueryPoolCreateInfo queryPoolCreateInfo; // 135
		VkDeviceSize nBytesPerQuery; // 139
		VulkanQueryPool_t* pQueryPool; // 154
		{
			int nBit; // 144
		}
		{
			uint i; // 169
			{
				VulkanQuery_t* pQuery; // 171
				CUtlMemory<VulkanQuery_t::Base(); // 112
				CUtlVectorBase<VulkanQuery_t::Base(); // 368
				CUtlVectorBase<VulkanQuery_t::ResetDbgInfo(); // 824
				CUtlVectorBase<VulkanQuery_t::GrowMemory(
						int num);  // 1198
				CUtlMemory<VulkanQuery_t::operator[](
						int i);  // 602
				CUtlVectorBase<VulkanQuery_t::Element(
					int i);  // 1201
				CopyConstruct<VulkanQuery_t*>(VulkanQuery_t** pMemory,
								VulkanQuery_t* const& src);  // 1201
				CUtlMemory<VulkanQuery_t::NumAllocated(); // 1196
				CUtlVectorBase<VulkanQuery_t::AddToTail(
						VulkanQuery_t* const& src);  // 175
			}
		}
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 152
		CRenderDeviceVulkan::MemoryManager(); // 159
		CUtlMemory<UtlLinkedListElem_t<VulkanQueryPool_t::operator[](
				short unsigned int i);  // 482
		CUtlLinkedList<VulkanQueryPool_t::Element(
			short unsigned int i);  // 825
		CopyConstruct<VulkanQueryPool_t*>(VulkanQueryPool_t** pMemory,
							VulkanQueryPool_t* const& src);  // 825
		CUtlLinkedList<VulkanQueryPool_t::InsertBefore(
				short unsigned int before,
				VulkanQueryPool_t* const& src);  // 856
		CUtlLinkedList<VulkanQueryPool_t::AddToTail(
				VulkanQueryPool_t* const& src);  // 166
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 186
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
			int nLineNumber);  // 128
	CUtlVectorBase<VulkanQuery_t::Count(); // 135
	CUtlVectorBase<VulkanQuery_t::IsEmpty(); // 131
	CUtlVectorBase<VulkanQuery_t::Count(); // 179
	CUtlMemory<VulkanQuery_t::operator[](
			int i);  // 588
	CUtlVectorBase<VulkanQuery_t::operator[](
			int i);  // 183
	CUtlVectorBase<VulkanQuery_t::RemoveMultipleFromTail(
				int num);  // 184
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 188
} /* size: 877, variables: 4, inline expansions: 12 (309 bytes) */

// <00B0860C> vulkan/renderpipelinestatsvulkan.cpp:191
// variables: 3
// function calls: 15
void CVulkanQueryPool<CThreadMutex>::Release(VulkanQuery_t* pQuery)
{
	const char   __FUNCTION__; // 18289
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_193; // 193
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 195
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
			int nLineNumber);  // 193
	CUtlMemory<VulkanQuery_t::NumAllocated(); // 1196
	CUtlMemory<VulkanQuery_t::operator[](
			int i);  // 602
	CUtlVectorBase<VulkanQuery_t::Element(
		int i);  // 1201
	CopyConstruct<VulkanQuery_t*>(VulkanQuery_t** pMemory,
					VulkanQuery_t* const& src);  // 1201
	CUtlMemory<VulkanQuery_t::Base(); // 112
	CUtlVectorBase<VulkanQuery_t::Base(); // 368
	CUtlVectorBase<VulkanQuery_t::ResetDbgInfo(); // 824
	CUtlVectorBase<VulkanQuery_t::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<VulkanQuery_t::AddToTail(
			VulkanQuery_t* const& src);  // 198
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 199
} /* size: 212, variables: 2, inline expansions: 15 (376 bytes) */

// <00B0A1E2> vulkan/renderpipelinestatsvulkan.cpp:202
// variables: 2
// function calls: 25
void CVectorPool<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >, 32, CThreadMutex>::Clear()
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_204; // 204
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 204
	{
		int i; // 1807
		CUtlMemory<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::Element(
			int i);  // 1809
		CUtlVectorBase<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::RemoveAll(); // 1798
		CUtlMemory<RenderPipelineSample_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<RenderPipelineSample_t, int>::Purge(); // 903
		CUtlMemory<RenderPipelineSample_t, int>::Purge(); // 1799
		CUtlVectorBase<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::Purge(); // 560
		ValidateAlignment<RenderPipelineSample_t>(void); // 508
		CUtlMemory<RenderPipelineSample_t, int>::Purge(); // 510
		CUtlMemory<RenderPipelineSample_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::~CUtlVector(); // 1809
	}
	CUtlVectorBase<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::Purge(); // 903
	CUtlMemory<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::Purge(); // 1799
	CUtlVectorBase<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::Purge(); // 1811
	CUtlVectorBase<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::PurgeAndDeleteElements(); // 205
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 206
} /* size: 283, variables: 1, inline expansions: 13 (556 bytes) */

// <00B0A1B9> vulkan/renderpipelinestatsvulkan.cpp:202
// variable: 1
void Clear(const CVectorPool<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQu this)
{
	CAutoLockT<CThreadNullMutex, CAutoLockMutexTrait<CThreadNullMutex> > generated_id_204; // 204
} /* size: 0, variables: 1 */

// <00B09AE4> vulkan/renderpipelinestatsvulkan.cpp:209
// variables: 2
// function calls: 24
void Alloc(const CVectorPool<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQu this)
{
	CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int> >* pResult; // 211
	{
		CAutoLockT<CThreadNullMutex, CAutoLockMutexTrait<CThreadNullMutex> > generated_id_214; // 214
		Lock(CThreadNullMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadNullMutex, CAutoLockMutexTrait<CThreadNullMutex> >::CAutoLockT(
				const CThreadNullMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 214
		Count(const CUtlVectorBase<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan: this); // 215
		operator[](const CUtlMemory<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQue this,
				int i);  // 630
		Tail(const CUtlVectorBase<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::Sampl this); // 217
		RemoveMultipleFromTail(const CUtlVectorBase<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::Sampl this,
					int num);  // 218
		Unlock(CThreadNullMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadNullMutex, CAutoLockMutexTrait<CThreadNullMutex> >::~CAutoLockT(); // 220
	}
	CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int>::NumAllocated(); // 782
	CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, this); // 368
	ResetDbgInfo(const CUtlVectorBase<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, this); // 824
	GrowMemory(const CUtlVectorBase<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, this,
			int num);  // 784
	GrowVector(const CUtlVectorBase<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, this,
			int num);  // 1445
	InsertMultipleBefore(const CUtlVectorBase<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, this,
				int elem,
				int num);  // 1437
	InsertMultipleBefore(const CUtlVectorBase<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, this,
				int elem,
				int num);  // 1294
	AddMultipleToTail(const CUtlVectorBase<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, this,
				int num);  // 1319
	RemoveMultipleFromTail(const CUtlVectorBase<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, this,
				int num);  // 1323
	SetCount(const CUtlVectorBase<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, this,
		int count);  // 226
	CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, this); // 530
	CUtlVectorBase(const CUtlVectorBase<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int this); // 224
} /* size: 147, variables: 1, inline expansions: 16 (345 bytes) */

// <00B0943D> vulkan/renderpipelinestatsvulkan.cpp:209
// variables: 2
// function calls: 26
void CVectorPool<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >, 32, CThreadMutex>::Alloc()
{
	CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >* pResult; // 211
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_214; // 214
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 214
		CUtlVectorBase<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::Count(); // 215
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 220
		CUtlMemory<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::operator[](
				int i);  // 630
		CUtlVectorBase<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::Tail(); // 217
		CUtlVectorBase<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::RemoveMultipleFromTail(
					int num);  // 218
	}
	CUtlMemory<RenderPipelineSample_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<RenderPipelineSample_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::CUtlVector(); // 224
	CUtlMemory<RenderPipelineSample_t, int>::NumAllocated(); // 782
	CUtlMemory<RenderPipelineSample_t, int>::Base(); // 112
	CUtlVectorBase<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::Base(); // 368
	CUtlVectorBase<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlVectorBase<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::SetCount(
		int count);  // 226
} /* size: 338, variables: 1, inline expansions: 16 (383 bytes) */

// <00B0A764> vulkan/renderpipelinestatsvulkan.cpp:231
// function calls: 27
void CVectorPool<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >, 32, CThreadMutex>::Release(CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >* pVector)
{
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 236
	CUtlVectorBase<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::Count(); // 238
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 240
	CUtlVectorBase<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::RemoveAll(); // 1798
	CUtlMemory<RenderPipelineSample_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<RenderPipelineSample_t, int>::Purge(); // 903
	CUtlMemory<RenderPipelineSample_t, int>::Purge(); // 1799
	CUtlVectorBase<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::Purge(); // 560
	ValidateAlignment<RenderPipelineSample_t>(void); // 508
	CUtlMemory<RenderPipelineSample_t, int>::Purge(); // 510
	CUtlMemory<RenderPipelineSample_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::~CUtlVector(); // 241
	CUtlMemory<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::NumAllocated(); // 1196
	CUtlMemory<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::Base(); // 112
	CUtlVectorBase<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::Base(); // 368
	CUtlVectorBase<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::ResetDbgInfo(); // 824
	CUtlMemory<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::IsGrowable(); // 823
	CUtlMemory<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::IsExternallyAllocated(); // 859
	CUtlMemory<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::IsExternallyAllocated(); // 861
	CUtlMemory<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::Grow(
		int num);  // 806
	CUtlVectorBase<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::GrowMemory(
			int num);  // 1198
	CUtlMemory<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::Element(
		int i);  // 1201
	CopyConstruct<CUtlVector<RenderPipelineSample_t>*>(CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >** pMemory,
								CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >* const& src);  // 1201
	CUtlVectorBase<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::AddToTail(
			CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >* const& src);  // 245
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 246
} /* size: 475, inline expansions: 27 (1004 bytes) */

// <00B0A138> vulkan/renderpipelinestatsvulkan.cpp:231
void Release(const CVectorPool<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQu this, CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int> >* pVector)
{
} /* size: 0 */

// <00B156BA> vulkan/renderpipelinestatsvulkan.cpp:250
// function calls: 55
void CRenderPipelineStatsVulkan::CRenderPipelineStatsVulkan()
{
	CUtlMemory<UtlLinkedListElem_t<VulkanQueryPool_t::ValidateGrowSize(); // 475
	CUtlMemory<UtlLinkedListElem_t<VulkanQueryPool_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 448
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlLinkedListElem_t<VulkanQueryPool_t::InvalidIterator(); // 448
	CUtlLinkedList<VulkanQueryPool_t::ConstructList(); // 454
	CUtlLinkedList<VulkanQueryPool_t::ResetDbgInfo(); // 455
	CUtlLinkedList<VulkanQueryPool_t::CUtlLinkedList(
			int growSize,
			int initSize);  // 82
	CUtlMemory<VulkanQuery_t::ValidateGrowSize(); // 475
	CUtlMemory<VulkanQuery_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VulkanQuery_t::ResetDbgInfo(); // 530
	CUtlVectorBase<VulkanQuery_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VulkanQuery_t::CUtlVector(); // 82
	CThreadMutex::CThreadMutex(
			const char* pName);  // 82
	CVulkanQueryPool<CThreadMutex>::CVulkanQueryPool(); // 261
	CUtlLinkedList<VulkanQueryPool_t::ResetDbgInfo(); // 455
	CUtlLinkedList<VulkanQueryPool_t::ConstructList(); // 454
	CUtlMemory<UtlLinkedListElem_t<VulkanQueryPool_t::ValidateGrowSize(); // 475
	CUtlMemory<UtlLinkedListElem_t<VulkanQueryPool_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 448
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlLinkedListElem_t<VulkanQueryPool_t::InvalidIterator(); // 448
	CUtlLinkedList<VulkanQueryPool_t::CUtlLinkedList(
			int growSize,
			int initSize);  // 82
	CThreadMutex::CThreadMutex(
			const char* pName);  // 82
	CUtlMemory<VulkanQuery_t::ValidateGrowSize(); // 475
	CUtlMemory<VulkanQuery_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VulkanQuery_t::ResetDbgInfo(); // 530
	CUtlVectorBase<VulkanQuery_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VulkanQuery_t::CUtlVector(); // 82
	CVulkanQueryPool<CThreadMutex>::CVulkanQueryPool(); // 261
	CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this); // 530
	CUtlVectorBase(const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_ this); // 261
	CThreadMutex::CThreadMutex(
			const char* pName);  // 261
	CUtlMemory<CRenderPipelineFrameStats, int>::ValidateGrowSize(); // 475
	CUtlMemory<CRenderPipelineFrameStats, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CRenderPipelineFrameStats, CUtlMemory<CRenderPipelineFrameStats, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CRenderPipelineFrameStats, CUtlMemory<CRenderPipelineFrameStats, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CRenderPipelineFrameStats, CUtlMemory<CRenderPipelineFrameStats, int> >::CUtlVector(); // 261
	CThreadMutex::CThreadMutex(
			const char* pName);  // 143
	CUtlMemory<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::CUtlVector(); // 143
	CVectorPool<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >, 32, CThreadMutex>::CVectorPool(); // 261
	CCycleCount::Init(
		uint64 cycles);  // 238
	CCycleCount::CCycleCount(); // 261
	CThreadNullMutex::CThreadNullMutex(
			const char* pName);  // 143
	ValidateGrowSize(const CUtlMemory<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQue this); // 475
	CUtlMemory(const CUtlMemory<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQue this,
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::Sampl this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::Sampl this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQue this); // 143
	CVectorPool(const CVectorPool<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQu this); // 261
} /* size: 765, inline expansions: 55 (1432 bytes) */

// <00B1569D> vulkan/renderpipelinestatsvulkan.cpp:250
void CRenderPipelineStatsVulkan::CRenderPipelineStatsVulkan()
{
} /* size: 0 */

// <00B142F4> vulkan/renderpipelinestatsvulkan.cpp:265
// variable: 1
// function calls: 100
void CRenderPipelineStatsVulkan::~CRenderPipelineStatsVulkan()
{
	CRenderPipelineStatsVulkan::Deinit(); // 267
	{
		int i; // 1807
		operator[](const CUtlMemory<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQue this,
				int i);  // 602
		Element(const CUtlVectorBase<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::Sampl this,
			int i);  // 1809
		RemoveAll(const CUtlVectorBase<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, this); // 1798
		CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int>::Purge(); // 903
		CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int>::Purge(); // 1799
		Purge(const CUtlVectorBase<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, this); // 560
		ValidateAlignment<CRenderPipelineStatsVulkan::SampleQueries_t>(void); // 508
		CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int>::Purge(); // 510
		CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int>::~CUtlMemory(); // 562
		~CUtlVectorBase(const CUtlVectorBase<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, this); // 410
		~CUtlVector(const CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int this); // 1809
	}
	RemoveAll(const CUtlVectorBase<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::Sampl this); // 1798
	IsExternallyAllocated(const CUtlMemory<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::Sam this); // 905
	Purge(const CUtlMemory<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQue this); // 903
	Purge(const CUtlMemory<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQue this); // 1799
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::Sampl this); // 1800
	Purge(const CUtlVectorBase<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::Sampl this); // 1811
	PurgeAndDeleteElements(const CUtlVectorBase<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::Sampl this); // 205
	Unlock(CThreadNullMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadNullMutex, CAutoLockMutexTrait<CThreadNullMutex> >::~CAutoLockT(); // 206
	Clear(const CVectorPool<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQu this); // 146
	RemoveAll(const CUtlVectorBase<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::Sampl this); // 1798
	Purge(const CUtlVectorBase<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::Sampl this); // 560
	ValidateAlignment<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t>*>(void); // 508
	Purge(const CUtlMemory<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQue this); // 510
	~CUtlMemory(const CUtlMemory<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQue this); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::Sampl this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQue this); // 146
	~CVectorPool(const CVectorPool<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQu this); // 268
	CUtlVectorBase<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::Purge(); // 903
	CUtlMemory<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::Purge(); // 1799
	CUtlVectorBase<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::Purge(); // 560
	ValidateAlignment<CUtlVector<RenderPipelineSample_t>*>(void); // 508
	CUtlMemory<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::Purge(); // 510
	CUtlMemory<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::~CUtlVector(); // 146
	CThreadMutex::~CThreadMutex(); // 146
	CVectorPool<CUtlVector<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >, 32, CThreadMutex>::~CVectorPool(); // 268
	CUtlVectorBase<CRenderPipelineFrameStats, CUtlMemory<CRenderPipelineFrameStats, int> >::RemoveAll(); // 1798
	CUtlMemory<CRenderPipelineFrameStats, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CRenderPipelineFrameStats, int>::Purge(); // 903
	CUtlMemory<CRenderPipelineFrameStats, int>::Purge(); // 1799
	CUtlVectorBase<CRenderPipelineFrameStats, CUtlMemory<CRenderPipelineFrameStats, int> >::Purge(); // 560
	ValidateAlignment<CRenderPipelineFrameStats>(void); // 508
	CUtlMemory<CRenderPipelineFrameStats, int>::Purge(); // 510
	CUtlMemory<CRenderPipelineFrameStats, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CRenderPipelineFrameStats, CUtlMemory<CRenderPipelineFrameStats, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CRenderPipelineFrameStats, CUtlMemory<CRenderPipelineFrameStats, int> >::~CUtlVector(); // 268
	CThreadMutex::~CThreadMutex(); // 268
	RemoveAll(const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this); // 1798
	CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::Purge(); // 903
	CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this); // 560
	ValidateAlignment<CRenderPipelineStatsVulkan::OutstandingFrame_t>(void); // 508
	CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::Purge(); // 510
	CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this); // 410
	~CUtlVector(const CUtlVector<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_ this); // 268
	CThreadMutex::~CThreadMutex(); // 85
	CUtlVectorBase<VulkanQuery_t::RemoveAll(); // 1798
	CUtlMemory<VulkanQuery_t::IsExternallyAllocated(); // 905
	CUtlMemory<VulkanQuery_t::Purge(); // 903
	CUtlMemory<VulkanQuery_t::Purge(); // 1799
	CUtlVectorBase<VulkanQuery_t::Purge(); // 560
	ValidateAlignment<VulkanQuery_t*>(void); // 508
	CUtlMemory<VulkanQuery_t::Purge(); // 510
	CUtlMemory<VulkanQuery_t::~CUtlMemory(); // 562
	CUtlVectorBase<VulkanQuery_t::~CUtlVectorBase(); // 410
	CUtlVector<VulkanQuery_t::~CUtlVector(); // 85
	ValidateAlignment<UtlLinkedListElem_t<VulkanQueryPool_t*, short unsigned int> >(void); // 508
	CUtlMemory<UtlLinkedListElem_t<VulkanQueryPool_t::IsExternallyAllocated(); // 905
	CUtlMemory<UtlLinkedListElem_t<VulkanQueryPool_t::Purge(); // 903
	CUtlMemory<UtlLinkedListElem_t<VulkanQueryPool_t::Purge(); // 510
	CUtlMemory<UtlLinkedListElem_t<VulkanQueryPool_t::~CUtlMemory(); // 462
	CUtlLinkedList<VulkanQueryPool_t::~CUtlLinkedList(); // 85
	CVulkanQueryPool<CThreadMutex>::~CVulkanQueryPool(); // 268
	CThreadMutex::~CThreadMutex(); // 85
	CUtlVectorBase<VulkanQuery_t::RemoveAll(); // 1798
	CUtlMemory<VulkanQuery_t::IsExternallyAllocated(); // 905
	CUtlMemory<VulkanQuery_t::Purge(); // 903
	CUtlMemory<VulkanQuery_t::Purge(); // 1799
	CUtlVectorBase<VulkanQuery_t::Purge(); // 560
	ValidateAlignment<VulkanQuery_t*>(void); // 508
	CUtlMemory<VulkanQuery_t::Purge(); // 510
	CUtlMemory<VulkanQuery_t::~CUtlMemory(); // 562
	CUtlVectorBase<VulkanQuery_t::~CUtlVectorBase(); // 410
	CUtlVector<VulkanQuery_t::~CUtlVector(); // 85
	ValidateAlignment<UtlLinkedListElem_t<VulkanQueryPool_t*, short unsigned int> >(void); // 508
	CUtlMemory<UtlLinkedListElem_t<VulkanQueryPool_t::IsExternallyAllocated(); // 905
	CUtlMemory<UtlLinkedListElem_t<VulkanQueryPool_t::Purge(); // 903
	CUtlMemory<UtlLinkedListElem_t<VulkanQueryPool_t::Purge(); // 510
	CUtlMemory<UtlLinkedListElem_t<VulkanQueryPool_t::~CUtlMemory(); // 462
	CUtlLinkedList<VulkanQueryPool_t::~CUtlLinkedList(); // 85
	CVulkanQueryPool<CThreadMutex>::~CVulkanQueryPool(); // 268
} /* size: 571, inline expansions: 88 (2081 bytes) */

// <00B142D7> vulkan/renderpipelinestatsvulkan.cpp:265
void CRenderPipelineStatsVulkan::~CRenderPipelineStatsVulkan()
{
} /* size: 0 */

// <00B13D9F> vulkan/renderpipelinestatsvulkan.cpp:271
// variables: 3
// function calls: 18
void CRenderPipelineStatsVulkan::Init(VkDevice pDeviceVulkan, const VkPhysicalDeviceLimits& physicalDeviceLimits, const VkPhysicalDeviceFeatures& physicalDeviceFeatures)
{
	const char   __FUNCTION__; // 18226
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_296; // 296
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 296
		CUtlMemory<CRenderPipelineFrameStats, int>::IsGrowable(); // 881
		CUtlMemory<CRenderPipelineFrameStats, int>::IsExternallyAllocated(); // 888
		CUtlMemory<CRenderPipelineFrameStats, int>::EnsureCapacity(
				int num);  // 1006
		CUtlVectorBase<CRenderPipelineFrameStats, CUtlMemory<CRenderPipelineFrameStats, int> >::ResetDbgInfo(); // 1024
		CUtlVectorBase<CRenderPipelineFrameStats, CUtlMemory<CRenderPipelineFrameStats, int> >::EnsureCapacity(
				int num);  // 297
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 298
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 301
	}
	CRenderPipelineStatsVulkan::Deinit(); // 273
	CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::IsGrowable(); // 881
	CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::EnsureCapacity(
			int num);  // 1006
	ResetDbgInfo(const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this); // 1024
	EnsureCapacity(const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this,
			int num);  // 293
	CRenderPipelineStatsVulkan::Deinit(); // 282
} /* size: 0, variables: 1, inline expansions: 7 (374 bytes) */

// <00B17BC9> vulkan/renderpipelinestatsvulkan.cpp:306
void CRenderPipelineStatsVulkan::Deinit()
{
} /* size: 17 */

// <00B17118> vulkan/renderpipelinestatsvulkan.cpp:306
// variables: 4
// function calls: 46
void CRenderPipelineStatsVulkan::Deinit()
{
	{
		int i; // 319
		Count(const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::Outstan this); // 319
	}
	RemoveAll(const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this); // 1798
	CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::Purge(); // 903
	CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::Purge(); // 1799
	ResetDbgInfo(const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this); // 1800
	Purge(const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this); // 323
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_326; // 326
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 326
		{
			int i; // 327
			CUtlVectorBase<CRenderPipelineFrameStats, CUtlMemory<CRenderPipelineFrameStats, int> >::Count(); // 327
			CUtlMemory<CRenderPipelineFrameStats, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CRenderPipelineFrameStats, CUtlMemory<CRenderPipelineFrameStats, int> >::operator[](
					int i);  // 329
		}
		CUtlVectorBase<CRenderPipelineFrameStats, CUtlMemory<CRenderPipelineFrameStats, int> >::RemoveAll(); // 1798
		CUtlMemory<CRenderPipelineFrameStats, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CRenderPipelineFrameStats, int>::Purge(); // 903
		CUtlMemory<CRenderPipelineFrameStats, int>::Purge(); // 1799
		CUtlVectorBase<CRenderPipelineFrameStats, CUtlMemory<CRenderPipelineFrameStats, int> >::ResetDbgInfo(); // 1800
		CUtlVectorBase<CRenderPipelineFrameStats, CUtlMemory<CRenderPipelineFrameStats, int> >::Purge(); // 331
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 332
	}
	Lock(CThreadNullMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadNullMutex, CAutoLockMutexTrait<CThreadNullMutex> >::CAutoLockT(
			const CThreadNullMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 204
	{
		int i; // 1807
		operator[](const CUtlMemory<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQue this,
				int i);  // 602
		Element(const CUtlVectorBase<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::Sampl this,
			int i);  // 1809
		RemoveAll(const CUtlVectorBase<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, this); // 1798
		CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int>::Purge(); // 903
		CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int>::Purge(); // 1799
		Purge(const CUtlVectorBase<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, this); // 560
		ValidateAlignment<CRenderPipelineStatsVulkan::SampleQueries_t>(void); // 508
		CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int>::Purge(); // 510
		CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int>::~CUtlMemory(); // 562
		~CUtlVectorBase(const CUtlVectorBase<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, this); // 410
		~CUtlVector(const CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int this); // 1809
	}
	RemoveAll(const CUtlVectorBase<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::Sampl this); // 1798
	Purge(const CUtlMemory<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQue this); // 903
	IsExternallyAllocated(const CUtlMemory<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::Sam this); // 905
	Purge(const CUtlMemory<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQue this); // 1799
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::Sampl this); // 1800
	Purge(const CUtlVectorBase<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::Sampl this); // 1811
	PurgeAndDeleteElements(const CUtlVectorBase<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::Sampl this); // 205
	Unlock(CThreadNullMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadNullMutex, CAutoLockMutexTrait<CThreadNullMutex> >::~CAutoLockT(); // 206
	Clear(const CVectorPool<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQu this); // 335
} /* size: 620, inline expansions: 18 (670 bytes) */

// <00B13D55> vulkan/renderpipelinestatsvulkan.cpp:306
// variables: 3
void CRenderPipelineStatsVulkan::Deinit()
{
	{
		int i; // 319
	}
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_326; // 326
		{
			int i; // 327
		}
	}
} /* size: 0 */

// <00B1370F> vulkan/renderpipelinestatsvulkan.cpp:341
// variable: 1
// function calls: 27
void CRenderPipelineStatsVulkan::ReleaseOutstandingFrame(uint nIndex)
{
	OutstandingFrame_t& frame; // 343
	CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this,
			int i);  // 343
	Count(const CUtlVectorBase<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan: this); // 238
	RemoveAll(const CUtlVectorBase<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, this); // 1798
	CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int>::Purge(); // 903
	CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, this); // 560
	ValidateAlignment<CRenderPipelineStatsVulkan::SampleQueries_t>(void); // 508
	CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int>::Purge(); // 510
	CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, this); // 410
	~CUtlVector(const CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int this); // 241
	NumAllocated(const CUtlMemory<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::Sam this); // 1196
	Base(const CUtlMemory<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQue this); // 112
	Base(const CUtlVectorBase<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::Sampl this); // 368
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::Sampl this); // 824
	IsGrowable(const CUtlMemory<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::Sam this); // 823
	IsExternallyAllocated(const CUtlMemory<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::Sam this); // 859
	IsExternallyAllocated(const CUtlMemory<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::Sam this); // 861
	Grow(const CUtlMemory<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQue this,
		int num);  // 806
	GrowMemory(const CUtlVectorBase<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::Sampl this,
			int num);  // 1198
	operator[](const CUtlMemory<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQue this,
			int i);  // 602
	Element(const CUtlVectorBase<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::Sampl this,
		int i);  // 1201
	CopyConstruct<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t>*>(CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int> >* pMemory,
										CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int> >* src);  // 1201
	AddToTail(const CUtlVectorBase<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::Sampl this,
			CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int> >* src);  // 245
	Release(const CVectorPool<CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQu this,
		CUtlVector<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int> >* pVector);  // 347
} /* size: 507, variables: 1, inline expansions: 27 (1671 bytes) */

// <00B131BA> vulkan/renderpipelinestatsvulkan.cpp:358
// variable: 1
// function calls: 23
void CRenderPipelineStatsVulkan::BeginFrame()
{
	OutstandingFrame_t& outstandingFrame; // 362
	CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::NumAllocated(); // 1143
	CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this); // 368
	ResetDbgInfo(const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this); // 824
	CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::IsGrowable(); // 823
	CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::Grow(
		int num);  // 806
	GrowMemory(const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this,
			int num);  // 1145
	AddToTail(const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this); // 360
	CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::operator[](
			int i);  // 630
	Tail(const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this); // 362
	CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int>::IsGrowable(); // 881
	CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int>::EnsureCapacity(
			int num);  // 1006
	ResetDbgInfo(const CUtlVectorBase<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, this); // 1024
	EnsureCapacity(const CUtlVectorBase<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, this,
			int num);  // 367
	CUtlMemory<RenderPipelineSample_t, int>::IsGrowable(); // 881
	CUtlMemory<RenderPipelineSample_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<RenderPipelineSample_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::EnsureCapacity(
			int num);  // 370
	memset(void* __dest,
		int __ch,
		size_t __len);  // 384
} /* size: 716, variables: 1, inline expansions: 23 (1530 bytes) */

// <00B12FDC> vulkan/renderpipelinestatsvulkan.cpp:391
// variables: 2
// function calls: 3
void CRenderPipelineStatsVulkan::BeginCommandListCreation(VulkanCommandBuffer_t* pCommandBuffer, RenderPipelineStatsCommandListQueries_t& queries)
{
	VulkanQuery_t* pQuery; // 398
	{
		VulkanQuery_t* pPipelineStatsQuery; // 411
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 393
	CRenderPipelineStatsVulkan::IsInitialized(); // 395
} /* size: 260, variables: 1, inline expansions: 3 (30 bytes) */

// <00B12F30> vulkan/renderpipelinestatsvulkan.cpp:423
// function call: 1
void CRenderPipelineStatsVulkan::CancelCommandListCreation(RenderPipelineStatsCommandListQueries_t& queries)
{
	CRenderPipelineStatsVulkan::IsInitialized(); // 425
} /* size: 97, inline expansions: 1 (0 bytes) */

// <00B12DB4> vulkan/renderpipelinestatsvulkan.cpp:441
// variable: 1
// function calls: 3
void CRenderPipelineStatsVulkan::EndCommandListCreation(VulkanCommandBuffer_t* pCommandBuffer, RenderPipelineStatsCommandListQueries_t& queries)
{
	VulkanQuery_t* pQuery; // 450
	CRenderPipelineStatsVulkan::IsInitialized(); // 443
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 457
} /* size: 257, variables: 1, inline expansions: 3 (14 bytes) */

// <00B11F3F> vulkan/renderpipelinestatsvulkan.cpp:475
// variables: 9
// function calls: 66
void CRenderPipelineStatsVulkan::BeginCommandListSubmission(const CRenderPipelineStats* pStats, const CUtlVector<BoundResourceRecord_t, CUtlMemory<BoundResourceRecord_t, int> >* pBoundResources, const char* pszName, const RenderPipelineStatsCommandListQueries_t& timestampQueries, VulkanQuery_t* pPipelineStatsQuery, uint32_t nSubmitIndex)
{
	double flCurTime; // 482
	OutstandingFrame_t& curFrame; // 488
	const int  nSampleIndex; // 490
	const char   __FUNCTION__; // 18436
	SampleQueries_t& queries; // 496
	RenderPipelineSample_t& sample; // 517
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 494
	}
	CRenderPipelineStatsVulkan::IsInitialized(); // 478
	PLAT_CPU_TIME(void); // 263
	CCycleCount::Sample(); // 480
	CCycleCount::GetSeconds(); // 482
	Count(const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::Outstan this); // 135
	IsEmpty(const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::Outstan this); // 483
	CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::operator[](
			int i);  // 630
	Tail(const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this); // 483
	CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::operator[](
			int i);  // 630
	Tail(const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this); // 488
	CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int>::NumAllocated(); // 1143
	CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, this); // 368
	ResetDbgInfo(const CUtlVectorBase<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, this); // 824
	GrowMemory(const CUtlVectorBase<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, this,
			int num);  // 1145
	AddToTail(const CUtlVectorBase<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, this); // 490
	CUtlMemory<RenderPipelineSample_t, int>::NumAllocated(); // 1143
	CBigEndianValue<double>::CBigEndianValue(); // 155
	CBigEndianValue<double>::CBigEndianValue(); // 155
	CBigEndianValue<double>::CBigEndianValue(); // 155
	CBigEndianValue<double>::CBigEndianValue(); // 155
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CRenderPipelineStats::CRenderPipelineStats(); // 155
	RenderPipelineSample_t::RenderPipelineSample_t(); // 1479
	Construct<RenderPipelineSample_t>(RenderPipelineSample_t* pMemory); // 1148
	CUtlMemory<RenderPipelineSample_t, int>::Base(); // 112
	CUtlVectorBase<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::Base(); // 368
	CUtlVectorBase<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::AddToTail(); // 492
	CUtlVectorBase<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::Count(); // 494
	Count(const CUtlVectorBase<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQuer this); // 494
	CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, this,
		int i);  // 496
	CUtlMemory<RenderPipelineSample_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::Element(
		int i);  // 517
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 518
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 23
	CRenderPipelineStats::operator=(
			const CRenderPipelineStats& rhs);  // 521
	{
		uint i; // 300
		{
			uint c; // 302
		}
	}
	CBigEndianValue<double>::ByteSwap(); // 277
	CBigEndianValue<double>::operator=(
			double val);  // 524
	V_strncpy<long unsigned int>(char* pDest,
					const char* pSrc,
					long unsigned int maxLenInChars);  // 525
} /* size: 0, variables: 6, inline expansions: 66 (1100 bytes) */

// <00B11AB0> vulkan/renderpipelinestatsvulkan.cpp:536
// variables: 10
// function calls: 16
void CRenderPipelineStatsVulkan::EndCommandListSubmission(VkCommandBuffer pCopyResultsCommandBuffer, uint32 nSubmitIndex)
{
	double flCurTime; // 542
	OutstandingFrame_t& curFrame; // 544
	const uint  nSampleIndex; // 546
	RenderPipelineSample_t& sample; // 548
	const char   __FUNCTION__; // 18415
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 550
	}
	CRenderPipelineStatsVulkan::IsInitialized(); // 538
	PLAT_CPU_TIME(void); // 263
	CCycleCount::Sample(); // 541
	CCycleCount::GetSeconds(); // 542
	CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::operator[](
			int i);  // 630
	Tail(const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this); // 544
	Count(const CUtlVectorBase<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQuer this); // 546
	CUtlMemory<RenderPipelineSample_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::Element(
		int i);  // 548
	{
		uint i; // 300
		{
			uint c; // 302
		}
	}
	CBigEndianValue<double>::ByteSwap(); // 260
	CBigEndianValue<double>::GetValue(); // 283
	CBigEndianValue<double>::operator double(); // 553
	{
		uint i; // 300
		{
			uint c; // 302
		}
	}
	CBigEndianValue<double>::ByteSwap(); // 277
	CBigEndianValue<double>::operator=(
			double val);  // 553
	CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, this,
		int i);  // 556
} /* size: 0, variables: 5, inline expansions: 16 (453 bytes) */

// <00B10BE3> vulkan/renderpipelinestatsvulkan.cpp:561
// variables: 7
// function calls: 65
void CRenderPipelineStatsVulkan::BeginPresent(uintp nSwapChainID, const char* pSwapChainName)
{
	double flCurTime; // 567
	OutstandingFrame_t& curFrame; // 574
	const int  nSampleIndex; // 581
	SampleQueries_t& queries; // 585
	RenderPipelineSample_t& sample; // 596
	CRenderPipelineStatsVulkan::IsInitialized(); // 563
	PLAT_CPU_TIME(void); // 263
	CCycleCount::Sample(); // 566
	CCycleCount::GetSeconds(); // 567
	Count(const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::Outstan this); // 135
	IsEmpty(const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::Outstan this); // 569
	CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::operator[](
			int i);  // 630
	Tail(const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this); // 569
	CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this,
			int i);  // 574
	Count(const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::Outstan this); // 574
	V_strcpy_safe<64>(char& pDest,
				const char* pSrc);  // 579
	CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int>::NumAllocated(); // 1143
	CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, this); // 368
	ResetDbgInfo(const CUtlVectorBase<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, this); // 824
	GrowMemory(const CUtlVectorBase<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, this,
			int num);  // 1145
	AddToTail(const CUtlVectorBase<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, this); // 581
	CUtlMemory<RenderPipelineSample_t, int>::NumAllocated(); // 1143
	CBigEndianValue<double>::CBigEndianValue(); // 155
	CBigEndianValue<double>::CBigEndianValue(); // 155
	CBigEndianValue<double>::CBigEndianValue(); // 155
	CBigEndianValue<double>::CBigEndianValue(); // 155
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<short unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CBigEndianValue<unsigned int>::CBigEndianValue(); // 20
	CRenderPipelineStats::CRenderPipelineStats(); // 155
	RenderPipelineSample_t::RenderPipelineSample_t(); // 1479
	Construct<RenderPipelineSample_t>(RenderPipelineSample_t* pMemory); // 1148
	CUtlMemory<RenderPipelineSample_t, int>::Base(); // 112
	CUtlVectorBase<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::Base(); // 368
	CUtlVectorBase<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::AddToTail(); // 583
	CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, this,
		int i);  // 585
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 586
	CUtlMemory<RenderPipelineSample_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::Element(
		int i);  // 596
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 597
	{
		uint i; // 300
		{
			uint c; // 302
		}
	}
	CBigEndianValue<double>::ByteSwap(); // 277
	CBigEndianValue<double>::operator=(
			double val);  // 599
	V_strncpy<long unsigned int>(char* pDest,
					const char* pSrc,
					long unsigned int maxLenInChars);  // 600
} /* size: 602, variables: 5, inline expansions: 65 (730 bytes) */

// <00B0E7BF> vulkan/renderpipelinestatsvulkan.cpp:603
// variables: 17
// function calls: 147
void CRenderPipelineStatsVulkan::ServiceOutstandingQueries()
{
	{
		OutstandingFrame_t& frame; // 607
		{
			SampleQueries_t& query; // 611
			RenderPipelineSample_t& sample; // 612
			{
				uint64_t nPipelineStats; // 616
				DWordSwapC<unsigned int>(unsigned int dw); // 272
				CBigEndianValue<unsigned int>::operator=(
						unsigned int val);  // 620
				DWordSwapC<unsigned int>(unsigned int dw); // 272
				CBigEndianValue<unsigned int>::operator=(
						unsigned int val);  // 624
				DWordSwapC<unsigned int>(unsigned int dw); // 272
				CBigEndianValue<unsigned int>::operator=(
						unsigned int val);  // 621
				DWordSwapC<unsigned int>(unsigned int dw); // 272
				CBigEndianValue<unsigned int>::operator=(
						unsigned int val);  // 622
				DWordSwapC<unsigned int>(unsigned int dw); // 272
				CBigEndianValue<unsigned int>::operator=(
						unsigned int val);  // 623
				DWordSwapC<unsigned int>(unsigned int dw); // 272
				CBigEndianValue<unsigned int>::operator=(
						unsigned int val);  // 625
			}
			{
				uint64_t startCycles; // 637
				uint64_t endCycles; // 637
				{
					uint i; // 300
					{
						uint c; // 302
					}
				}
				CBigEndianValue<double>::ByteSwap(); // 277
				CBigEndianValue<double>::operator=(
						double val);  // 641
				{
					uint i; // 300
					{
						uint c; // 302
					}
				}
				CBigEndianValue<double>::ByteSwap(); // 277
				CBigEndianValue<double>::operator=(
						double val);  // 642
				{
					uint i; // 300
					{
						uint c; // 302
					}
				}
				CBigEndianValue<double>::ByteSwap(); // 277
				CBigEndianValue<double>::operator=(
						double val);  // 645
			}
			CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQueries_t, this,
				int i);  // 611
			CUtlMemory<RenderPipelineSample_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::Element(
				int i);  // 612
		}
		{
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_682; // 682
			CRenderPipelineFrameStats& frameStats; // 690
			{
				int i; // 708
				CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this,
						int i);  // 710
				DWordSwapC<unsigned int>(unsigned int dw); // 272
				CBigEndianValue<unsigned int>::operator=(
						unsigned int val);  // 710
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
					int nLineNumber);  // 682
			CUtlVectorBase<CRenderPipelineFrameStats, CUtlMemory<CRenderPipelineFrameStats, int> >::Count(); // 684
			CUtlMemory<CRenderPipelineFrameStats, int>::NumAllocated(); // 1143
			CUtlMemory<CRenderPipelineFrameStats, int>::Base(); // 112
			CUtlVectorBase<CRenderPipelineFrameStats, CUtlMemory<CRenderPipelineFrameStats, int> >::Base(); // 368
			CUtlVectorBase<CRenderPipelineFrameStats, CUtlMemory<CRenderPipelineFrameStats, int> >::ResetDbgInfo(); // 824
			CUtlMemory<CRenderPipelineFrameStats, int>::IsGrowable(); // 823
			CUtlMemory<CRenderPipelineFrameStats, int>::IsExternallyAllocated(); // 859
			CUtlMemory<CRenderPipelineFrameStats, int>::IsExternallyAllocated(); // 861
			CUtlMemory<CRenderPipelineFrameStats, int>::Grow(
				int num);  // 806
			CUtlVectorBase<CRenderPipelineFrameStats, CUtlMemory<CRenderPipelineFrameStats, int> >::GrowMemory(
					int num);  // 1145
			CUtlMemory<CRenderPipelineFrameStats, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CRenderPipelineFrameStats, CUtlMemory<CRenderPipelineFrameStats, int> >::Element(
				int i);  // 1148
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 233
			CRenderPipelineFrameStats::Clear(); // 231
			CBigEndianValue<unsigned int>::CBigEndianValue(); // 177
			CBigEndianValue<long long unsigned int>::CBigEndianValue(); // 177
			CBigEndianValue<unsigned int>::CBigEndianValue(); // 177
			CBigEndianValue<unsigned int>::CBigEndianValue(); // 177
			CBigEndianValue<unsigned int>::CBigEndianValue(); // 177
			CBigEndianValue<unsigned int>::CBigEndianValue(); // 177
			CBigEndianValue<unsigned int>::CBigEndianValue(); // 177
			CBigEndianValue<unsigned int>::CBigEndianValue(); // 177
			CBigEndianValue<unsigned int>::CBigEndianValue(); // 177
			CBigEndianValue<unsigned int>::CBigEndianValue(); // 177
			CBigEndianValue<unsigned int>::CBigEndianValue(); // 177
			CBigEndianValue<unsigned int>::CBigEndianValue(); // 177
			CBigEndianValue<unsigned int>::CBigEndianValue(); // 177
			RenderPipelineFrameStats_t::RenderPipelineFrameStats_t(); // 231
			CRenderPipelineFrameStats::CRenderPipelineFrameStats(); // 1479
			Construct<CRenderPipelineFrameStats>(CRenderPipelineFrameStats* pMemory); // 1148
			CUtlVectorBase<CRenderPipelineFrameStats, CUtlMemory<CRenderPipelineFrameStats, int> >::AddToTail(); // 690
			CUtlMemory<CRenderPipelineFrameStats, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CRenderPipelineFrameStats, CUtlMemory<CRenderPipelineFrameStats, int> >::operator[](
					int i);  // 690
			CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this,
					int i);  // 691
			DWordSwapC<unsigned int>(unsigned int dw); // 272
			CBigEndianValue<unsigned int>::operator=(
					unsigned int val);  // 691
			CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this,
					int i);  // 692
			{
				uint i; // 300
				{
					uint c; // 302
				}
			}
			CBigEndianValue<long long unsigned int>::ByteSwap(); // 277
			CBigEndianValue<long long unsigned int>::operator=(
					long long unsigned int val);  // 692
			CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this,
					int i);  // 693
			V_strcpy_safe<64>(char& pDest,
						const char* pSrc);  // 693
			CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this,
					int i);  // 694
			DWordSwapC<unsigned int>(unsigned int dw); // 272
			CBigEndianValue<unsigned int>::operator=(
					unsigned int val);  // 694
			CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this,
					int i);  // 695
			CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this,
					int i);  // 699
			DWordSwapC<unsigned int>(unsigned int dw); // 272
			CBigEndianValue<unsigned int>::operator=(
					unsigned int val);  // 699
			CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this,
					int i);  // 700
			DWordSwapC<unsigned int>(unsigned int dw); // 272
			CBigEndianValue<unsigned int>::operator=(
					unsigned int val);  // 700
			CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this,
					int i);  // 701
			DWordSwapC<unsigned int>(unsigned int dw); // 272
			CBigEndianValue<unsigned int>::operator=(
					unsigned int val);  // 701
			CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this,
					int i);  // 702
			DWordSwapC<unsigned int>(unsigned int dw); // 272
			CBigEndianValue<unsigned int>::operator=(
					unsigned int val);  // 702
			CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this,
					int i);  // 703
			DWordSwapC<unsigned int>(unsigned int dw); // 272
			CBigEndianValue<unsigned int>::operator=(
					unsigned int val);  // 703
			CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this,
					int i);  // 704
			DWordSwapC<unsigned int>(unsigned int dw); // 272
			CBigEndianValue<unsigned int>::operator=(
					unsigned int val);  // 704
			CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this,
					int i);  // 705
			DWordSwapC<unsigned int>(unsigned int dw); // 272
			CBigEndianValue<unsigned int>::operator=(
					unsigned int val);  // 705
			CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this,
					int i);  // 706
			DWordSwapC<unsigned int>(unsigned int dw); // 272
			CBigEndianValue<unsigned int>::operator=(
					unsigned int val);  // 706
			CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this,
					int i);  // 707
			DWordSwapC<unsigned int>(unsigned int dw); // 272
			CBigEndianValue<unsigned int>::operator=(
					unsigned int val);  // 707
			CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this,
					int i);  // 713
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 714
			CUtlMemory<CRenderPipelineFrameStats, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CRenderPipelineFrameStats, CUtlMemory<CRenderPipelineFrameStats, int> >::operator[](
					int i);  // 686
			CUtlMemory<CRenderPipelineFrameStats, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CRenderPipelineFrameStats, CUtlMemory<CRenderPipelineFrameStats, int> >::Element(
				int i);  // 1114
			memmove(void* __dest,
				const void* __src,
				size_t __len);  // 115
			V_memmove(void* dest,
					const void* src,
					size_t count);  // 1114
			CUtlVectorBase<CRenderPipelineFrameStats, CUtlMemory<CRenderPipelineFrameStats, int> >::ShiftElementsLeft(
						int elem,
						int num);  // 1608
			CUtlVectorBase<CRenderPipelineFrameStats, CUtlMemory<CRenderPipelineFrameStats, int> >::Remove(
				int elem);  // 687
		}
		CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this,
				int i);  // 607
		Count(const CUtlVectorBase<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQuer this); // 609
		CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this,
			int i);  // 1114
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 115
		V_memmove(void* dest,
				const void* src,
				size_t count);  // 1114
		ShiftElementsLeft(const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this,
					int elem,
					int num);  // 1608
		Remove(const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this,
			int elem);  // 717
		Count(const CUtlVectorBase<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQuer this); // 679
	}
	Count(const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::Outstan this); // 605
	Count(const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::Outstan this); // 727
	CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this,
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	ShiftElementsLeft(const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this,
				int elem,
				int num);  // 1608
	Remove(const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this,
		int elem);  // 731
} /* size: 2076, inline expansions: 8 (170 bytes) */

// <00B0DE5D> vulkan/renderpipelinestatsvulkan.cpp:737
// variables: 13
// function calls: 31
void CRenderPipelineStatsVulkan::EndPresent()
{
	double flCurTime; // 743
	OutstandingFrame_t& curFrame; // 745
	const uint  nSampleIndex; // 747
	RenderPipelineSample_t& sample; // 748
	const char   __FUNCTION__; // 18331
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 759
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 762
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 766
	}
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_774; // 774
		CRenderDeviceVulkan::RenderThread(); // 774
		CRenderThreadVulkan::GetQueueMutex(); // 774
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
				int nLineNumber);  // 774
		VulkanQueue(void); // 775
		CUtlString::CUtlString(); // 149
		CUtlString::Get(); // 151
		CUtlString::~CUtlString(); // 153
		_DOVK(VkResult result,
			const char* pCommand);  // 775
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 776
	}
	CRenderPipelineStatsVulkan::IsInitialized(); // 739
	PLAT_CPU_TIME(void); // 263
	CCycleCount::Sample(); // 742
	CCycleCount::GetSeconds(); // 743
	CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFrame_t, int>::operator[](
			int i);  // 630
	Tail(const CUtlVectorBase<CRenderPipelineStatsVulkan::OutstandingFrame_t, CUtlMemory<CRenderPipelineStatsVulkan::OutstandingFr this); // 745
	Count(const CUtlVectorBase<CRenderPipelineStatsVulkan::SampleQueries_t, CUtlMemory<CRenderPipelineStatsVulkan::SampleQuer this); // 747
	CUtlMemory<RenderPipelineSample_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<RenderPipelineSample_t, CUtlMemory<RenderPipelineSample_t, int> >::Element(
		int i);  // 748
	{
		uint i; // 300
		{
			uint c; // 302
		}
	}
	CBigEndianValue<double>::ByteSwap(); // 260
	CBigEndianValue<double>::GetValue(); // 283
	CBigEndianValue<double>::operator double(); // 764
	{
		uint i; // 300
		{
			uint c; // 302
		}
	}
	CBigEndianValue<double>::ByteSwap(); // 277
	CBigEndianValue<double>::operator=(
			double val);  // 764
} /* size: 0, variables: 5, inline expansions: 14 (433 bytes) */

// <00B0D9A2> vulkan/renderpipelinestatsvulkan.cpp:781
// variables: 3
// function calls: 17
void CRenderPipelineStatsVulkan::GetFrameStats(CRenderPipelineFrameStats& stats)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_786; // 786
	const char   __FUNCTION__; // 18352
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 792
	}
	CRenderPipelineStatsVulkan::IsInitialized(); // 783
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 786
	CUtlVectorBase<CRenderPipelineFrameStats, CUtlMemory<CRenderPipelineFrameStats, int> >::Count(); // 135
	CUtlVectorBase<CRenderPipelineFrameStats, CUtlMemory<CRenderPipelineFrameStats, int> >::IsEmpty(); // 788
	CUtlMemory<CRenderPipelineFrameStats, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CRenderPipelineFrameStats, CUtlMemory<CRenderPipelineFrameStats, int> >::operator[](
			int i);  // 791
	CUtlMemory<CRenderPipelineFrameStats, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CRenderPipelineFrameStats, CUtlMemory<CRenderPipelineFrameStats, int> >::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<CRenderPipelineFrameStats, CUtlMemory<CRenderPipelineFrameStats, int> >::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<CRenderPipelineFrameStats, CUtlMemory<CRenderPipelineFrameStats, int> >::Remove(
		int elem);  // 794
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 797
} /* size: 0, variables: 2, inline expansions: 17 (567 bytes) */

// <00B0D83D> vulkan/renderpipelinestatsvulkan.cpp:799
// function calls: 4
void CRenderPipelineStatsVulkan::ReleaseFrameStats(CRenderPipelineFrameStats& stats)
{
	CRenderPipelineStatsVulkan::IsInitialized(); // 801
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 233
	CRenderPipelineFrameStats::Clear(); // 806
} /* size: 73, inline expansions: 4 (39 bytes) */

// <00B0C761> vulkan/renderpipelinestatsvulkan.cpp:813
// variables: 15
// function calls: 52
void CRenderPipelineStatsVulkan::CopyQueryResultsToBuffer(VkCommandBuffer pCmdBuffer, SampleQueries_t* pSampleQueries, uint32_t nSubmitIndex)
{
	const char   __FUNCTION__; // 18415
	VkCommandBufferBeginInfo beginInfo; // 817
	CUtlLinkedList<VulkanQuery_t*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<VulkanQuery_t*, short unsigned int>, short unsigned int> > copyQueryList; // 823
	VkBuffer pResultsBufferForBarrier; // 838
	VkDeviceSize nBarrierOffsetStart; // 839
	VkDeviceSize nBarrierOffsetSize; // 840
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 815
	}
	{
		short unsigned int nIndex; // 842
		{
			VulkanQuery_t* pQuery; // 844
			VkDeviceSize nResultOffset; // 847
			{
				VkDeviceSize nCurStart; // 865
				VkDeviceSize nCurEnd; // 866
			}
			CRenderDeviceVulkan::MemoryManager(); // 884
			CUtlMemory<UtlLinkedListElem_t<VulkanQuery_t::operator[](
					short unsigned int i);  // 494
			CUtlLinkedList<VulkanQuery_t::operator[](
					short unsigned int i);  // 844
		}
		CUtlLinkedList<VulkanQuery_t::Head(); // 842
		CUtlLinkedList<VulkanQuery_t::Next(
			short unsigned int i);  // 842
	}
	CUtlString::CUtlString(); // 149
	CUtlString::Get(); // 151
	CUtlString::~CUtlString(); // 153
	_DOVK(VkResult result,
		const char* pCommand);  // 820
	CUtlString::CUtlString(); // 149
	CUtlString::Get(); // 151
	CUtlString::~CUtlString(); // 153
	_DOVK(VkResult result,
		const char* pCommand);  // 821
	CUtlMemory<UtlLinkedListElem_t<VulkanQuery_t::ValidateGrowSize(); // 475
	CUtlMemory<UtlLinkedListElem_t<VulkanQuery_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 448
	CUtlLinkedList<VulkanQuery_t::ConstructList(); // 454
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlLinkedListElem_t<VulkanQuery_t::InvalidIterator(); // 448
	CUtlLinkedList<VulkanQuery_t::ResetDbgInfo(); // 455
	CUtlLinkedList<VulkanQuery_t::CUtlLinkedList(
			int growSize,
			int initSize);  // 823
	CUtlMemory<UtlLinkedListElem_t<VulkanQuery_t::operator[](
			short unsigned int i);  // 482
	CUtlLinkedList<VulkanQuery_t::Element(
		short unsigned int i);  // 825
	CopyConstruct<VulkanQuery_t*>(VulkanQuery_t** pMemory,
					VulkanQuery_t* const& src);  // 825
	CUtlLinkedList<VulkanQuery_t::InsertBefore(
			short unsigned int before,
			VulkanQuery_t* const& src);  // 856
	CUtlLinkedList<VulkanQuery_t::AddToTail(
			VulkanQuery_t* const& src);  // 826
	CUtlMemory<UtlLinkedListElem_t<VulkanQuery_t::operator[](
			short unsigned int i);  // 482
	CUtlLinkedList<VulkanQuery_t::Element(
		short unsigned int i);  // 825
	CopyConstruct<VulkanQuery_t*>(VulkanQuery_t** pMemory,
					VulkanQuery_t* const& src);  // 825
	CUtlLinkedList<VulkanQuery_t::InsertBefore(
			short unsigned int before,
			VulkanQuery_t* const& src);  // 856
	CUtlLinkedList<VulkanQuery_t::AddToTail(
			VulkanQuery_t* const& src);  // 830
	CUtlMemory<UtlLinkedListElem_t<VulkanQuery_t::operator[](
			short unsigned int i);  // 482
	CUtlLinkedList<VulkanQuery_t::Element(
		short unsigned int i);  // 825
	CopyConstruct<VulkanQuery_t*>(VulkanQuery_t** pMemory,
					VulkanQuery_t* const& src);  // 825
	CUtlLinkedList<VulkanQuery_t::InsertBefore(
			short unsigned int before,
			VulkanQuery_t* const& src);  // 856
	CUtlLinkedList<VulkanQuery_t::AddToTail(
			VulkanQuery_t* const& src);  // 834
	CRenderDeviceVulkan::MemoryManager(); // 898
	CUtlString::CUtlString(); // 149
	CUtlString::Get(); // 151
	CUtlString::~CUtlString(); // 153
	_DOVK(VkResult result,
		const char* pCommand);  // 903
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlLinkedListElem_t<VulkanQuery_t::InvalidIterator(); // 917
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
			CUtlMemory<UtlLinkedListElem_t<VulkanQuery_t::operator[](
					short unsigned int i);  // 368
			CUtlLinkedList<VulkanQuery_t::InternalElement(
					short unsigned int i);  // 550
			CUtlLinkedList<VulkanQuery_t::Next(
				short unsigned int i);  // 950
			Destruct<VulkanQuery_t*>(VulkanQuery_t** pMemory); // 952
		}
	}
	CUtlLinkedList<VulkanQuery_t::RemoveAll(); // 461
	ValidateAlignment<UtlLinkedListElem_t<VulkanQuery_t*, short unsigned int> >(void); // 508
	CUtlMemory<UtlLinkedListElem_t<VulkanQuery_t::Purge(); // 903
	CUtlMemory<UtlLinkedListElem_t<VulkanQuery_t::Purge(); // 510
	CUtlMemory<UtlLinkedListElem_t<VulkanQuery_t::~CUtlMemory(); // 462
	CUtlLinkedList<VulkanQuery_t::~CUtlLinkedList(); // 904
} /* size: 0, variables: 6, inline expansions: 43 (2490 bytes) */

// <00B0C4E4> vulkan/renderpipelinestatsvulkan.cpp:910
// variables: 5
// function calls: 6
void CRenderPipelineStatsVulkan::GetQueryResult(VulkanQuery_t* pQuery, VkDeviceSize nResultSize, void* pResult, uint32_t nSubmitIndex)
{
	const char   __FUNCTION__; // 18373
	VkDeviceSize nResultOffset; // 915
	void* pMappedBuffer; // 918
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 912
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 913
	}
	CMemoryManagerVulkan::GetVmaAllocator(); // 1491
	GetVmaAllocator(void); // 919
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 922
	CMemoryManagerVulkan::GetVmaAllocator(); // 1491
	GetVmaAllocator(void); // 923
} /* size: 0, variables: 3, inline expansions: 6 (64 bytes) */

// <00B0C4B0> vulkan/renderpipelinestatsvulkan.cpp:931
void CRenderPipelineStatsVulkan::GetActiveVulkanPipelineStats()
{
} /* size: 21 */

// <00B0C1DB> vulkan/renderpipelinestatsvulkan.cpp:948
// variables: 7
// function calls: 4
void SplitSampleName(const char* pszName, char** pszNameSegments, int nMaxNameSegments, int nMaxSegmentSize)
{
	const char   __FUNCTION__; // 18394
	const char* p; // 972
	int nCurSegmentIndex; // 973
	int nCurSegmentCharOfs; // 974
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 950
	}
	{
		int i; // 952
	}
	{
		const char  c; // 978
	}
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 967
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 959
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 960
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 961
} /* size: 0, variables: 4, inline expansions: 4 (80 bytes) */

